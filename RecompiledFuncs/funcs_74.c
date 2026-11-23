#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801FB6E8_626AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB6E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB6EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB6F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FB6F4: jal         0x801FFE6C
    // 0x801FB6F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FB6F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FB6FC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FB700: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FB704: jal         0x801FFE14
    // 0x801FB708: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    func_801FFE14_62B1F4(rdram, ctx);
        goto after_1;
    // 0x801FB708: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    after_1:
    // 0x801FB70C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801FB710: addiu       $t7, $zero, 0x82
    ctx->r15 = ADD32(0, 0X82);
    // 0x801FB714: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x801FB718: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB71C: addiu       $a0, $a0, -0x48C4
    ctx->r4 = ADD32(ctx->r4, -0X48C4);
    // 0x801FB720: sh          $t7, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r15;
    // 0x801FB724: jal         0x8003521C
    // 0x801FB728: sw          $t8, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FB728: sw          $t8, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r24;
    after_2:
    // 0x801FB72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB734: jr          $ra
    // 0x801FB738: nop

    TRACE_RETURN()
    return;
    // 0x801FB738: nop

;}
RECOMP_FUNC void func_801D83D8_6037B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D83D8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D83DC: lw          $a1, -0x1130($v1)
    ctx->r5 = MEM_W(ctx->r3, -0X1130);
    // 0x801D83E0: addiu       $v0, $a1, 0x140
    ctx->r2 = ADD32(ctx->r5, 0X140);
    // 0x801D83E4: addu        $a2, $v0, $a0
    ctx->r6 = ADD32(ctx->r2, ctx->r4);
    // 0x801D83E8: lbu         $a3, 0x17($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X17);
    // 0x801D83EC: blez        $a3, L_801D8408
    if (SIGNED(ctx->r7) <= 0) {
        // 0x801D83F0: addiu       $t6, $a3, -0x1
        ctx->r14 = ADD32(ctx->r7, -0X1);
            goto L_801D8408;
    }
    // 0x801D83F0: addiu       $t6, $a3, -0x1
    ctx->r14 = ADD32(ctx->r7, -0X1);
    // 0x801D83F4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801D83F8: bne         $t7, $zero, L_801D8408
    if (ctx->r15 != 0) {
        // 0x801D83FC: sb          $t6, 0x17($a2)
        MEM_B(0X17, ctx->r6) = ctx->r14;
            goto L_801D8408;
    }
    // 0x801D83FC: sb          $t6, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r14;
    // 0x801D8400: sb          $zero, 0x13($a2)
    MEM_B(0X13, ctx->r6) = 0;
    // 0x801D8404: sb          $zero, 0x15($a2)
    MEM_B(0X15, ctx->r6) = 0;
L_801D8408:
    // 0x801D8408: lbu         $v0, 0x13($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X13);
    // 0x801D840C: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x801D8410: beq         $at, $zero, L_801D842C
    if (ctx->r1 == 0) {
        // 0x801D8414: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_801D842C;
    }
    // 0x801D8414: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801D8418: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D841C: addu        $at, $at, $t8
    gpr jr_addend_801D8424 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801D8420: lw          $t8, -0x2728($at)
    ctx->r24 = ADD32(ctx->r1, -0X2728);
    // 0x801D8424: jr          $t8
    // 0x801D8428: nop

    switch (jr_addend_801D8424 >> 2) {
        case 0: goto L_801D842C; break;
        case 1: goto L_801D847C; break;
        case 2: goto L_801D84F8; break;
        case 3: goto L_801D8544; break;
        case 4: goto L_801D8594; break;
        case 5: goto L_801D85B4; break;
        default: switch_error(__func__, 0x801D8424, 0x8020D8D8);
    }
    // 0x801D8428: nop

L_801D842C:
    // 0x801D842C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801D8430: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801D8434: sb          $zero, 0x13($a2)
    MEM_B(0X13, ctx->r6) = 0;
    // 0x801D8438: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x801D843C: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x801D8440: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x801D8444: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801D8448: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801D844C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801D8450: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x801D8454: addu        $t2, $t1, $a3
    ctx->r10 = ADD32(ctx->r9, ctx->r7);
    // 0x801D8458: lhu         $t3, 0x307C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X307C);
    // 0x801D845C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D8460: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x801D8464: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x801D8468: beq         $t4, $zero, L_801D85BC
    if (ctx->r12 == 0) {
        // 0x801D846C: nop
    
            goto L_801D85BC;
    }
    // 0x801D846C: nop

    // 0x801D8470: sb          $t6, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r14;
    // 0x801D8474: jr          $ra
    // 0x801D8478: sb          $t7, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D8478: sb          $t7, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r15;
L_801D847C:
    // 0x801D847C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801D8480: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801D8484: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x801D8488: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x801D848C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x801D8490: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801D8494: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x801D8498: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801D849C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x801D84A0: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x801D84A4: lhu         $t1, 0x307C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X307C);
    // 0x801D84A8: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801D84AC: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x801D84B0: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x801D84B4: beq         $t2, $zero, L_801D85BC
    if (ctx->r10 == 0) {
        // 0x801D84B8: nop
    
            goto L_801D85BC;
    }
    // 0x801D84B8: nop

    // 0x801D84BC: sb          $t3, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r11;
    // 0x801D84C0: sb          $t4, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r12;
    // 0x801D84C4: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801D84C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D84CC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801D84D0: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x801D84D4: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x801D84D8: lhu         $t8, 0x307C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X307C);
    // 0x801D84DC: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x801D84E0: beq         $t9, $zero, L_801D84F0
    if (ctx->r25 == 0) {
        // 0x801D84E4: nop
    
            goto L_801D84F0;
    }
    // 0x801D84E4: nop

    // 0x801D84E8: jr          $ra
    // 0x801D84EC: sb          $t0, 0x19($a2)
    MEM_B(0X19, ctx->r6) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x801D84EC: sb          $t0, 0x19($a2)
    MEM_B(0X19, ctx->r6) = ctx->r8;
L_801D84F0:
    // 0x801D84F0: jr          $ra
    // 0x801D84F4: sb          $t1, 0x19($a2)
    MEM_B(0X19, ctx->r6) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801D84F4: sb          $t1, 0x19($a2)
    MEM_B(0X19, ctx->r6) = ctx->r9;
L_801D84F8:
    // 0x801D84F8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801D84FC: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801D8500: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801D8504: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x801D8508: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x801D850C: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801D8510: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801D8514: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801D8518: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x801D851C: addu        $t5, $t4, $a3
    ctx->r13 = ADD32(ctx->r12, ctx->r7);
    // 0x801D8520: lhu         $t6, 0x307C($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X307C);
    // 0x801D8524: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x801D8528: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x801D852C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x801D8530: beq         $t7, $zero, L_801D85BC
    if (ctx->r15 == 0) {
        // 0x801D8534: nop
    
            goto L_801D85BC;
    }
    // 0x801D8534: nop

    // 0x801D8538: sb          $t8, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r24;
    // 0x801D853C: jr          $ra
    // 0x801D8540: sb          $t9, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x801D8540: sb          $t9, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r25;
L_801D8544:
    // 0x801D8544: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801D8548: addiu       $a1, $a1, -0x3A38
    ctx->r5 = ADD32(ctx->r5, -0X3A38);
    // 0x801D854C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801D8550: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x801D8554: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x801D8558: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801D855C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x801D8560: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801D8564: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801D8568: addu        $t3, $t2, $a3
    ctx->r11 = ADD32(ctx->r10, ctx->r7);
    // 0x801D856C: lhu         $t4, 0x307C($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X307C);
    // 0x801D8570: lbu         $t5, 0x19($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X19);
    // 0x801D8574: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x801D8578: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801D857C: and         $t6, $t5, $t4
    ctx->r14 = ctx->r13 & ctx->r12;
    // 0x801D8580: beq         $t6, $zero, L_801D85BC
    if (ctx->r14 == 0) {
        // 0x801D8584: nop
    
            goto L_801D85BC;
    }
    // 0x801D8584: nop

    // 0x801D8588: sb          $t7, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r15;
    // 0x801D858C: jr          $ra
    // 0x801D8590: sb          $t8, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801D8590: sb          $t8, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r24;
L_801D8594:
    // 0x801D8594: lw          $t9, 0x6C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X6C);
    // 0x801D8598: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801D859C: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x801D85A0: bne         $t9, $at, L_801D85BC
    if (ctx->r25 != ctx->r1) {
        // 0x801D85A4: addiu       $t1, $zero, 0x14
        ctx->r9 = ADD32(0, 0X14);
            goto L_801D85BC;
    }
    // 0x801D85A4: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x801D85A8: sb          $t0, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r8;
    // 0x801D85AC: jr          $ra
    // 0x801D85B0: sb          $t1, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801D85B0: sb          $t1, 0x17($a2)
    MEM_B(0X17, ctx->r6) = ctx->r9;
L_801D85B4:
    // 0x801D85B4: addiu       $t2, $a0, 0x80
    ctx->r10 = ADD32(ctx->r4, 0X80);
    // 0x801D85B8: sb          $t2, 0x15($a2)
    MEM_B(0X15, ctx->r6) = ctx->r10;
L_801D85BC:
    // 0x801D85BC: jr          $ra
    // 0x801D85C0: nop

    TRACE_RETURN()
    return;
    // 0x801D85C0: nop

;}
RECOMP_FUNC void func_801CF430_5FA810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF430: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801CF434: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801CF438: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x801CF43C: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x801CF440: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x801CF444: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x801CF448: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x801CF44C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801CF450: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801CF454: lw          $s0, 0x90($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X90);
    // 0x801CF458: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x801CF45C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x801CF460: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801CF464: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801CF468: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801CF46C: lwc1        $f22, 0x8($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CF470: lwc1        $f24, 0xC($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CF474: bne         $v1, $at, L_801CF4F8
    if (ctx->r3 != ctx->r1) {
        // 0x801CF478: lwc1        $f26, 0x10($v0)
        ctx->f26.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801CF4F8;
    }
    // 0x801CF478: lwc1        $f26, 0x10($v0)
    ctx->f26.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CF47C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CF480: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF484: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF488: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x801CF48C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CF490: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF494: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF498: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CF49C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF4A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF4A4: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF4A8: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x801CF4AC: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF4B0: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF4B4: add.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x801CF4B8: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF4BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801CF4C0: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF4C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF4C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF4CC: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x801CF4D0: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF4D4: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF4D8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801CF4DC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801CF4E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF4E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF4E8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CF4EC: jal         0x801DFB90
    // 0x801CF4F0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x801CF4F0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801CF4F4: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF4F8:
    // 0x801CF4F8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x801CF4FC: bne         $v1, $at, L_801CF58C
    if (ctx->r3 != ctx->r1) {
        // 0x801CF500: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF58C;
    }
    // 0x801CF500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF504: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CF508: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF50C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801CF510: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF514: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF518: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x801CF51C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF520: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF524: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF528: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF52C: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF530: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF534: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF538: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF53C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF540: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF544: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF548: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF54C: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF550: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF554: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF558: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF55C: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF560: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF564: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF568: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF56C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF570: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF574: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CF578: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CF57C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CF580: jal         0x801DFB90
    // 0x801CF584: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x801CF584: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x801CF588: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF58C:
    // 0x801CF58C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801CF590: bne         $v1, $at, L_801CF614
    if (ctx->r3 != ctx->r1) {
        // 0x801CF594: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF614;
    }
    // 0x801CF594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF598: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CF59C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801CF5A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF5A4: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF5A8: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CF5AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF5B0: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CF5B4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CF5B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF5BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF5C0: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF5C4: add.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x801CF5C8: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF5CC: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF5D0: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x801CF5D4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CF5D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF5DC: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF5E0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801CF5E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF5E8: add.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x801CF5EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801CF5F0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF5F4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801CF5F8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801CF5FC: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF600: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF604: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x801CF608: jal         0x801DFB90
    // 0x801CF60C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_2;
    // 0x801CF60C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x801CF610: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF614:
    // 0x801CF614: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x801CF618: bne         $v1, $at, L_801CF6A8
    if (ctx->r3 != ctx->r1) {
        // 0x801CF61C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF6A8;
    }
    // 0x801CF61C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF620: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CF624: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF628: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF62C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF630: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF634: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x801CF638: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF63C: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF640: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF644: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF648: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF64C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF650: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF654: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF658: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF65C: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF660: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF664: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF668: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF66C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF670: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF674: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF678: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF67C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF680: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF684: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF688: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF68C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF690: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CF694: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CF698: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CF69C: jal         0x801DFB90
    // 0x801CF6A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_3;
    // 0x801CF6A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x801CF6A4: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF6A8:
    // 0x801CF6A8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801CF6AC: bne         $v1, $at, L_801CF73C
    if (ctx->r3 != ctx->r1) {
        // 0x801CF6B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF73C;
    }
    // 0x801CF6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF6B4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801CF6B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF6BC: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF6C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF6C4: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF6C8: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CF6CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF6D0: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF6D4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF6D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF6DC: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF6E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF6E4: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF6E8: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF6EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF6F0: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF6F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF6F8: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF6FC: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF700: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF704: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF708: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF70C: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF710: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF714: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF718: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF71C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF720: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF724: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CF728: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CF72C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CF730: jal         0x801DFB90
    // 0x801CF734: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_4;
    // 0x801CF734: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x801CF738: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF73C:
    // 0x801CF73C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801CF740: bne         $v1, $at, L_801CF7D0
    if (ctx->r3 != ctx->r1) {
        // 0x801CF744: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF7D0;
    }
    // 0x801CF744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF748: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801CF74C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF750: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801CF754: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF758: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF75C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CF760: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF764: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF768: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF76C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF770: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF774: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF778: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF77C: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF780: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF784: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF788: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF78C: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF790: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF794: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF798: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF79C: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF7A0: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF7A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF7A8: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF7AC: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF7B0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF7B4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF7B8: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CF7BC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CF7C0: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CF7C4: jal         0x801DFB90
    // 0x801CF7C8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_5;
    // 0x801CF7C8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x801CF7CC: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF7D0:
    // 0x801CF7D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801CF7D4: bne         $v1, $at, L_801CF864
    if (ctx->r3 != ctx->r1) {
        // 0x801CF7D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF864;
    }
    // 0x801CF7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF7DC: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CF7E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF7E4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801CF7E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF7EC: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF7F0: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x801CF7F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF7F8: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF7FC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF800: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF804: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF808: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF80C: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF810: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF814: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF818: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF81C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF820: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF824: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF828: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF82C: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF830: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF834: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF838: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF83C: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF840: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF844: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF848: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF84C: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CF850: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CF854: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CF858: jal         0x801DFB90
    // 0x801CF85C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_6;
    // 0x801CF85C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x801CF860: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF864:
    // 0x801CF864: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CF868: bne         $v1, $at, L_801CF8F8
    if (ctx->r3 != ctx->r1) {
        // 0x801CF86C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF8F8;
    }
    // 0x801CF86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF870: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801CF874: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF878: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF87C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF880: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF884: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CF888: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF88C: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF890: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF894: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF898: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF89C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF8A0: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF8A4: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF8A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF8AC: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF8B0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF8B4: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF8B8: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF8BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF8C0: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF8C4: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF8C8: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF8CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF8D0: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF8D4: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF8D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF8DC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF8E0: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CF8E4: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CF8E8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CF8EC: jal         0x801DFB90
    // 0x801CF8F0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_7;
    // 0x801CF8F0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x801CF8F4: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF8F8:
    // 0x801CF8F8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CF8FC: bne         $v1, $at, L_801CF98C
    if (ctx->r3 != ctx->r1) {
        // 0x801CF900: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CF98C;
    }
    // 0x801CF900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF904: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CF908: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF90C: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF910: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF914: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF918: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x801CF91C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF920: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF924: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF928: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF92C: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF930: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF934: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF938: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF93C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF940: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF944: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF948: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF94C: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF950: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF954: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF958: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF95C: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF960: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF964: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF968: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CF96C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CF970: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CF974: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CF978: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CF97C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CF980: jal         0x801DFB90
    // 0x801CF984: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_8;
    // 0x801CF984: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x801CF988: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CF98C:
    // 0x801CF98C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CF990: bne         $v1, $at, L_801CFA20
    if (ctx->r3 != ctx->r1) {
        // 0x801CF994: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CFA20;
    }
    // 0x801CF994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CF998: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801CF99C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF9A0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801CF9A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF9A8: mul.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF9AC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CF9B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CF9B4: mul.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF9B8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF9BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CF9C0: mul.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x801CF9C4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF9C8: add.s       $f18, $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x801CF9CC: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CF9D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF9D4: add.s       $f16, $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x801CF9D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CF9DC: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF9E0: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x801CF9E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF9E8: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801CF9EC: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x801CF9F0: mul.s       $f8, $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF9F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801CF9F8: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801CF9FC: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801CFA00: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CFA04: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CFA08: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x801CFA0C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801CFA10: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801CFA14: jal         0x801DFB90
    // 0x801CFA18: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_9;
    // 0x801CFA18: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x801CFA1C: lw          $v1, 0x7C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X7C);
L_801CFA20:
    // 0x801CFA20: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801CFA24: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801CFA28: beq         $v0, $zero, L_801CFA38
    if (ctx->r2 == 0) {
        // 0x801CFA2C: sw          $t6, 0x7C($s1)
        MEM_W(0X7C, ctx->r17) = ctx->r14;
            goto L_801CFA38;
    }
    // 0x801CFA2C: sw          $t6, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r14;
    // 0x801CFA30: jal         0x80034ED4
    // 0x801CFA34: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_10;
    // 0x801CFA34: nop

    after_10:
L_801CFA38:
    // 0x801CFA38: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801CFA3C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801CFA40: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x801CFA44: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x801CFA48: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x801CFA4C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFA50: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x801CFA54: jr          $ra
    // 0x801CFA58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801CFA58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801DC194_607574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC194: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801DC198: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801DC19C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801DC1A0: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801DC1A4: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x801DC1A8: sw          $t6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r14;
    // 0x801DC1AC: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x801DC1B0: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x801DC1B4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DC1B8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DC1BC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DC1C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DC1C4: addiu       $t7, $v0, 0x140
    ctx->r15 = ADD32(ctx->r2, 0X140);
    // 0x801DC1C8: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x801DC1CC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DC1D0: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DC1D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DC1D8: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801DC1DC: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x801DC1E0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801DC1E4: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x801DC1E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DC1EC: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x801DC1F0: addiu       $t6, $sp, 0x54
    ctx->r14 = ADD32(ctx->r29, 0X54);
    // 0x801DC1F4: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x801DC1F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DC1FC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801DC200: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801DC204: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DC208: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x801DC20C: nop

    // 0x801DC210: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x801DC214: sw          $t1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r9;
    // 0x801DC218: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DC21C: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801DC220: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801DC224: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801DC228: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x801DC22C: nop

    // 0x801DC230: addiu       $t4, $t3, 0x100
    ctx->r12 = ADD32(ctx->r11, 0X100);
    // 0x801DC234: sw          $t4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r12;
    // 0x801DC238: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x801DC23C: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x801DC240: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x801DC244: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x801DC248: lhu         $a0, 0xA6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA6);
    // 0x801DC24C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DC250: addiu       $a1, $a1, -0x100
    ctx->r5 = ADD32(ctx->r5, -0X100);
    // 0x801DC254: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x801DC258: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x801DC25C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DC260: jal         0x8000E808
    // 0x801DC264: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801DC264: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_0:
    // 0x801DC268: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DC26C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DC270: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801DC274: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801DC278: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC27C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801DC280: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x801DC284: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801DC288: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x801DC28C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801DC290: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801DC294: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801DC298: addiu       $a0, $a0, -0x3308
    ctx->r4 = ADD32(ctx->r4, -0X3308);
    // 0x801DC29C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DC2A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DC2A4: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x801DC2A8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DC2AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DC2B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801DC2B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DC2B8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DC2BC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801DC2C0: jal         0x80035854
    // 0x801DC2C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801DC2C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801DC2C8: beq         $v0, $zero, L_801DC354
    if (ctx->r2 == 0) {
        // 0x801DC2CC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801DC354;
    }
    // 0x801DC2CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DC2D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801DC2D4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801DC2D8: addiu       $t2, $zero, 0x3E
    ctx->r10 = ADD32(0, 0X3E);
    // 0x801DC2DC: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x801DC2E0: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x801DC2E4: sb          $v0, 0x30($v1)
    MEM_B(0X30, ctx->r3) = ctx->r2;
    // 0x801DC2E8: sw          $t1, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r9;
    // 0x801DC2EC: sb          $t2, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r10;
    // 0x801DC2F0: sh          $t3, 0x4E($v1)
    MEM_H(0X4E, ctx->r3) = ctx->r11;
    // 0x801DC2F4: sh          $zero, 0x50($v1)
    MEM_H(0X50, ctx->r3) = 0;
    // 0x801DC2F8: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x801DC2FC: sw          $zero, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = 0;
    // 0x801DC300: sw          $t4, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r12;
    // 0x801DC304: sw          $zero, 0x94($v1)
    MEM_W(0X94, ctx->r3) = 0;
    // 0x801DC308: sw          $zero, 0x98($v1)
    MEM_W(0X98, ctx->r3) = 0;
    // 0x801DC30C: sw          $zero, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = 0;
    // 0x801DC310: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x801DC314: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC318: addiu       $a0, $a0, -0x3C8C
    ctx->r4 = ADD32(ctx->r4, -0X3C8C);
    // 0x801DC31C: jal         0x8003521C
    // 0x801DC320: sh          $v0, 0x2E($t5)
    MEM_H(0X2E, ctx->r13) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801DC320: sh          $v0, 0x2E($t5)
    MEM_H(0X2E, ctx->r13) = ctx->r2;
    after_2:
    // 0x801DC324: jal         0x801CEE80
    // 0x801DC328: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_3;
    // 0x801DC328: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x801DC32C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DC330: jal         0x80037C9C
    // 0x801DC334: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_80037C9C_3889C(rdram, ctx);
        goto after_4;
    // 0x801DC334: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_4:
    // 0x801DC338: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801DC33C: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801DC340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DC344: jal         0x80037C20
    // 0x801DC348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_5;
    // 0x801DC348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801DC34C: b           L_801DC364
    // 0x801DC350: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_801DC364;
    // 0x801DC350: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801DC354:
    // 0x801DC354: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x801DC358: jal         0x80034ED4
    // 0x801DC35C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_6;
    // 0x801DC35C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    after_6:
    // 0x801DC360: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801DC364:
    // 0x801DC364: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801DC368: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801DC36C: jr          $ra
    // 0x801DC370: nop

    TRACE_RETURN()
    return;
    // 0x801DC370: nop

;}
RECOMP_FUNC void func_801CF004_5FA3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF004: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CF008: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801CF00C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801CF010: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801CF014: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x801CF018: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x801CF01C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801CF020: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801CF024: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CF028: lw          $s1, 0x90($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X90);
    // 0x801CF02C: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x801CF030: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x801CF034: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x801CF038: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CF03C: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801CF040: lwc1        $f22, 0x8($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CF044: lwc1        $f24, 0xC($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CF048: bne         $v1, $at, L_801CF0B4
    if (ctx->r3 != ctx->r1) {
        // 0x801CF04C: lwc1        $f26, 0x10($v0)
        ctx->f26.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801CF0B4;
    }
    // 0x801CF04C: lwc1        $f26, 0x10($v0)
    ctx->f26.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CF050: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF054: lwc1        $f4, -0x2EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2EC0);
    // 0x801CF058: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x801CF05C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF060: lui         $at, 0xC1E0
    ctx->r1 = S32(0XC1E0 << 16);
    // 0x801CF064: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF068: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CF06C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CF070: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF074: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF078: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CF07C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801CF080: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801CF084: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF088: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x801CF08C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CF090: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x801CF094: add.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x801CF098: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801CF09C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF0A0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801CF0A4: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x801CF0A8: jal         0x801E006C
    // 0x801CF0AC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_0;
    // 0x801CF0AC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x801CF0B0: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF0B4:
    // 0x801CF0B4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801CF0B8: bne         $v1, $at, L_801CF120
    if (ctx->r3 != ctx->r1) {
        // 0x801CF0BC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CF120;
    }
    // 0x801CF0BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF0C0: lwc1        $f16, -0x2EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2EBC);
    // 0x801CF0C4: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF0C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF0CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF0D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF0D4: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF0D8: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x801CF0DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF0E0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF0E4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CF0E8: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801CF0EC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801CF0F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF0F4: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x801CF0F8: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF0FC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801CF100: add.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x801CF104: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CF108: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF10C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801CF110: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x801CF114: jal         0x801E006C
    // 0x801CF118: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_1;
    // 0x801CF118: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801CF11C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF120:
    // 0x801CF120: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801CF124: bne         $v1, $at, L_801CF18C
    if (ctx->r3 != ctx->r1) {
        // 0x801CF128: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CF18C;
    }
    // 0x801CF128: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF12C: lwc1        $f8, -0x2EB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2EB8);
    // 0x801CF130: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801CF134: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF138: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x801CF13C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF140: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF144: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CF148: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF14C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CF150: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801CF154: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801CF158: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801CF15C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF160: add.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x801CF164: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF168: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801CF16C: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x801CF170: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801CF174: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF178: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801CF17C: add.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x801CF180: jal         0x801E006C
    // 0x801CF184: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801CF184: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x801CF188: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF18C:
    // 0x801CF18C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801CF190: bne         $v1, $at, L_801CF1F4
    if (ctx->r3 != ctx->r1) {
        // 0x801CF194: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CF1F4;
    }
    // 0x801CF194: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF198: lwc1        $f4, -0x2EB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2EB4);
    // 0x801CF19C: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x801CF1A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF1A4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF1A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF1AC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CF1B0: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x801CF1B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF1B8: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF1BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CF1C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF1C4: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x801CF1C8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801CF1CC: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x801CF1D0: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CF1D4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF1D8: add.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x801CF1DC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801CF1E0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801CF1E4: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x801CF1E8: jal         0x801E006C
    // 0x801CF1EC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_3;
    // 0x801CF1EC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x801CF1F0: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF1F4:
    // 0x801CF1F4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CF1F8: bne         $v1, $at, L_801CF260
    if (ctx->r3 != ctx->r1) {
        // 0x801CF1FC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CF260;
    }
    // 0x801CF1FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF200: lwc1        $f16, -0x2EB0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2EB0);
    // 0x801CF204: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801CF208: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF20C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CF210: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF214: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF218: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF21C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF220: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF224: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CF228: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801CF22C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801CF230: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF234: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x801CF238: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF23C: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x801CF240: add.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x801CF244: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CF248: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF24C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801CF250: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x801CF254: jal         0x801E006C
    // 0x801CF258: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_4;
    // 0x801CF258: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801CF25C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF260:
    // 0x801CF260: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CF264: bne         $v1, $at, L_801CF2CC
    if (ctx->r3 != ctx->r1) {
        // 0x801CF268: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CF2CC;
    }
    // 0x801CF268: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF26C: lwc1        $f8, -0x2EAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2EAC);
    // 0x801CF270: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801CF274: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF278: lui         $at, 0xC1D8
    ctx->r1 = S32(0XC1D8 << 16);
    // 0x801CF27C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF280: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF284: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CF288: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CF28C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CF290: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801CF294: lui         $a1, 0x3D75
    ctx->r5 = S32(0X3D75 << 16);
    // 0x801CF298: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x801CF29C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF2A0: add.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x801CF2A4: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CF2A8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x801CF2AC: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x801CF2B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801CF2B4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF2B8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801CF2BC: add.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x801CF2C0: jal         0x801E006C
    // 0x801CF2C4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_5;
    // 0x801CF2C4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801CF2C8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF2CC:
    // 0x801CF2CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CF2D0: bne         $v1, $at, L_801CF338
    if (ctx->r3 != ctx->r1) {
        // 0x801CF2D4: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CF338;
    }
    // 0x801CF2D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF2D8: lwc1        $f4, -0x2EA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2EA8);
    // 0x801CF2DC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801CF2E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF2E4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CF2E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CF2EC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CF2F0: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CF2F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF2F8: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CF2FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CF300: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801CF304: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801CF308: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF30C: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x801CF310: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CF314: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x801CF318: add.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x801CF31C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801CF320: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF324: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801CF328: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x801CF32C: jal         0x801E006C
    // 0x801CF330: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_6;
    // 0x801CF330: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x801CF334: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF338:
    // 0x801CF338: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CF33C: bne         $v1, $at, L_801CF3A0
    if (ctx->r3 != ctx->r1) {
        // 0x801CF340: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CF3A0;
    }
    // 0x801CF340: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF344: lwc1        $f16, -0x2EA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2EA4);
    // 0x801CF348: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801CF34C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF350: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CF354: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF358: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF35C: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x801CF360: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CF364: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CF368: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CF36C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CF370: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x801CF374: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801CF378: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x801CF37C: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CF380: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CF384: add.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x801CF388: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CF38C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801CF390: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x801CF394: jal         0x801E006C
    // 0x801CF398: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_7;
    // 0x801CF398: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x801CF39C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CF3A0:
    // 0x801CF3A0: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801CF3A4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801CF3A8: beq         $v0, $zero, L_801CF3B8
    if (ctx->r2 == 0) {
        // 0x801CF3AC: sw          $t6, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r14;
            goto L_801CF3B8;
    }
    // 0x801CF3AC: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801CF3B0: jal         0x80034ED4
    // 0x801CF3B4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_8;
    // 0x801CF3B4: nop

    after_8:
L_801CF3B8:
    // 0x801CF3B8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801CF3BC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801CF3C0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801CF3C4: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x801CF3C8: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x801CF3CC: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801CF3D0: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801CF3D4: jr          $ra
    // 0x801CF3D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801CF3D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801D2EB4_5FE294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2EB4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D2EB8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D2EBC: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801D2EC0: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x801D2EC4: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x801D2EC8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x801D2ECC: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
    // 0x801D2ED0: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x801D2ED4: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x801D2ED8: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x801D2EDC: jr          $ra
    // 0x801D2EE0: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x801D2EE0: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
;}
RECOMP_FUNC void func_801F2438_61D818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F243C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F2440: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801F2444: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F2448: jal         0x8000DDC0
    // 0x801F244C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8000DDC0_E9C0(rdram, ctx);
        goto after_0;
    // 0x801F244C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F2450: beq         $v0, $zero, L_801F2464
    if (ctx->r2 == 0) {
        // 0x801F2454: lui         $a1, 0x4220
        ctx->r5 = S32(0X4220 << 16);
            goto L_801F2464;
    }
    // 0x801F2454: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801F2458: addiu       $t6, $zero, 0x1F4
    ctx->r14 = ADD32(0, 0X1F4);
    // 0x801F245C: b           L_801F246C
    // 0x801F2460: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
        goto L_801F246C;
    // 0x801F2460: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
L_801F2464:
    // 0x801F2464: addiu       $t7, $zero, -0x1F4
    ctx->r15 = ADD32(0, -0X1F4);
    // 0x801F2468: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
L_801F246C:
    // 0x801F246C: jal         0x801D3018
    // 0x801F2470: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_1;
    // 0x801F2470: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x801F2474: jal         0x801F76D0
    // 0x801F2478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_2;
    // 0x801F2478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F247C: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x801F2480: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F2484: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F2488: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801F248C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801F2490: lui         $a2, 0xC396
    ctx->r6 = S32(0XC396 << 16);
    // 0x801F2494: lui         $a3, 0xC416
    ctx->r7 = S32(0XC416 << 16);
    // 0x801F2498: jal         0x8000E39C
    // 0x801F249C: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801F249C: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x801F24A0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x801F24A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F24A8: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F24AC: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F24B0: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F24B4: addiu       $t0, $t9, 0x14
    ctx->r8 = ADD32(ctx->r25, 0X14);
    // 0x801F24B8: addiu       $t1, $t9, 0x16
    ctx->r9 = ADD32(ctx->r25, 0X16);
    // 0x801F24BC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F24C0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801F24C4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801F24C8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F24CC: jal         0x8000EC04
    // 0x801F24D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_4;
    // 0x801F24D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x801F24D4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F24D8: jal         0x8003521C
    // 0x801F24DC: addiu       $a0, $a0, 0x24F4
    ctx->r4 = ADD32(ctx->r4, 0X24F4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F24DC: addiu       $a0, $a0, 0x24F4
    ctx->r4 = ADD32(ctx->r4, 0X24F4);
    after_5:
    // 0x801F24E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801F24E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801F24E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F24EC: jr          $ra
    // 0x801F24F0: nop

    TRACE_RETURN()
    return;
    // 0x801F24F0: nop

;}
RECOMP_FUNC void func_801E8108_6134E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8108: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E810C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E8110: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E8114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8118: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E811C: lhu         $v1, 0x1B8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1B8);
    // 0x801E8120: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x801E8124: addiu       $v0, $v0, 0x1B0
    ctx->r2 = ADD32(ctx->r2, 0X1B0);
    // 0x801E8128: beq         $v1, $zero, L_801E8134
    if (ctx->r3 == 0) {
        // 0x801E812C: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_801E8134;
    }
    // 0x801E812C: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801E8130: sh          $t6, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r14;
L_801E8134:
    // 0x801E8134: jal         0x801D31F0
    // 0x801E8138: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E8138: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E813C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E8140: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8144: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E8148: nop

    // 0x801E814C: bc1fl       L_801E8180
    if (!c1cs) {
        // 0x801E8150: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E8180;
    }
    goto skip_0;
    // 0x801E8150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E8154: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x801E8158: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E815C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8160: bnel        $t7, $zero, L_801E8180
    if (ctx->r15 != 0) {
        // 0x801E8164: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E8180;
    }
    goto skip_1;
    // 0x801E8164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E8168: jal         0x801D2EE4
    // 0x801E816C: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801E816C: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    after_1:
    // 0x801E8170: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E8174: jal         0x8003521C
    // 0x801E8178: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E8178: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    after_2:
    // 0x801E817C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8180:
    // 0x801E8180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E8184: jr          $ra
    // 0x801E8188: nop

    TRACE_RETURN()
    return;
    // 0x801E8188: nop

;}
RECOMP_FUNC void func_801FFE80_62B260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFE80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FFE84: sw          $zero, -0x10C0($at)
    MEM_W(-0X10C0, ctx->r1) = 0;
    // 0x801FFE88: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801FFE8C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801FFE90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FFE94: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801FFE98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FFE9C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801FFEA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FFEA4: addiu       $a1, $zero, 0x81C
    ctx->r5 = ADD32(0, 0X81C);
    // 0x801FFEA8: jal         0x800148F0
    // 0x801FFEAC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x801FFEAC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801FFEB0: bne         $v0, $zero, L_801FFEC0
    if (ctx->r2 != 0) {
        // 0x801FFEB4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801FFEC0;
    }
    // 0x801FFEB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801FFEB8: b           L_801FFF5C
    // 0x801FFEBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801FFF5C;
    // 0x801FFEBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801FFEC0:
    // 0x801FFEC0: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801FFEC4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FFEC8: addiu       $s0, $s0, -0x1130
    ctx->r16 = ADD32(ctx->r16, -0X1130);
    // 0x801FFECC: sw          $v1, -0x10C0($at)
    MEM_W(-0X10C0, ctx->r1) = ctx->r3;
    // 0x801FFED0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801FFED4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFED8: addiu       $a1, $a1, -0x554
    ctx->r5 = ADD32(ctx->r5, -0X554);
    // 0x801FFEDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FFEE0: jal         0x80034E08
    // 0x801FFEE4: lw          $a0, 0x1C4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801FFEE4: lw          $a0, 0x1C4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C4);
    after_1:
    // 0x801FFEE8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801FFEEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFEF0: addiu       $a1, $a1, 0x200
    ctx->r5 = ADD32(ctx->r5, 0X200);
    // 0x801FFEF4: sw          $v0, 0x1D0($t7)
    MEM_W(0X1D0, ctx->r15) = ctx->r2;
    // 0x801FFEF8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801FFEFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FFF00: jal         0x80034E08
    // 0x801FFF04: lw          $a0, 0x1C4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801FFF04: lw          $a0, 0x1C4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C4);
    after_2:
    // 0x801FFF08: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801FFF0C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801FFF10: addiu       $a1, $a1, -0x3F94
    ctx->r5 = ADD32(ctx->r5, -0X3F94);
    // 0x801FFF14: sw          $v0, 0x1D8($t9)
    MEM_W(0X1D8, ctx->r25) = ctx->r2;
    // 0x801FFF18: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801FFF1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FFF20: jal         0x80034E08
    // 0x801FFF24: lw          $a0, 0x1BC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1BC);
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x801FFF24: lw          $a0, 0x1BC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1BC);
    after_3:
    // 0x801FFF28: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801FFF2C: jal         0x8003767C
    // 0x801FFF30: sw          $v0, 0x1D4($t1)
    MEM_W(0X1D4, ctx->r9) = ctx->r2;
    func_8003767C_3827C(rdram, ctx);
        goto after_4;
    // 0x801FFF30: sw          $v0, 0x1D4($t1)
    MEM_W(0X1D4, ctx->r9) = ctx->r2;
    after_4:
    // 0x801FFF34: bne         $v0, $zero, L_801FFF4C
    if (ctx->r2 != 0) {
        // 0x801FFF38: nop
    
            goto L_801FFF4C;
    }
    // 0x801FFF38: nop

    // 0x801FFF3C: jal         0x80038BC8
    // 0x801FFF40: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801FFF40: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_5:
    // 0x801FFF44: b           L_801FFF58
    // 0x801FFF48: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
        goto L_801FFF58;
    // 0x801FFF48: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
L_801FFF4C:
    // 0x801FFF4C: jal         0x80038BC8
    // 0x801FFF50: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801FFF50: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_6:
    // 0x801FFF54: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
L_801FFF58:
    // 0x801FFF58: lw          $v0, 0x1D8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X1D8);
L_801FFF5C:
    // 0x801FFF5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FFF60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FFF64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FFF68: jr          $ra
    // 0x801FFF6C: nop

    TRACE_RETURN()
    return;
    // 0x801FFF6C: nop

;}
RECOMP_FUNC void func_801FE308_6296E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE308: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FE30C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FE310: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FE314: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FE318: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FE31C: lw          $t6, 0x80($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X80);
    // 0x801FE320: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FE324: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801FE328: nop

    // 0x801FE32C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801FE330: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801FE334: jal         0x801D2F40
    // 0x801FE338: nop

    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FE338: nop

    after_0:
    // 0x801FE33C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801FE340: jal         0x801D3A18
    // 0x801FE344: sw          $t7, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r15;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_1;
    // 0x801FE344: sw          $t7, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r15;
    after_1:
    // 0x801FE348: beq         $v0, $zero, L_801FE360
    if (ctx->r2 == 0) {
        // 0x801FE34C: nop
    
            goto L_801FE360;
    }
    // 0x801FE34C: nop

    // 0x801FE350: jal         0x801FFE14
    // 0x801FE354: nop

    func_801FFE14_62B1F4(rdram, ctx);
        goto after_2;
    // 0x801FE354: nop

    after_2:
    // 0x801FE358: b           L_801FE368
    // 0x801FE35C: nop

        goto L_801FE368;
    // 0x801FE35C: nop

L_801FE360:
    // 0x801FE360: jal         0x801FFE54
    // 0x801FE364: nop

    func_801FFE54_62B234(rdram, ctx);
        goto after_3;
    // 0x801FE364: nop

    after_3:
L_801FE368:
    // 0x801FE368: jal         0x801D60E4
    // 0x801FE36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_4;
    // 0x801FE36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FE370: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801FE374: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801FE378: jal         0x801D6508
    // 0x801FE37C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_5;
    // 0x801FE37C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801FE380: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801FE384: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE388: addiu       $a1, $a1, -0x4BC0
    ctx->r5 = ADD32(ctx->r5, -0X4BC0);
    // 0x801FE38C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801FE390: bgtz        $t9, L_801FE3AC
    if (SIGNED(ctx->r25) > 0) {
        // 0x801FE394: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_801FE3AC;
    }
    // 0x801FE394: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801FE398: jal         0x801D2EE4
    // 0x801FE39C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_6;
    // 0x801FE39C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x801FE3A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE3A4: jal         0x8003521C
    // 0x801FE3A8: addiu       $a0, $a0, -0x1C40
    ctx->r4 = ADD32(ctx->r4, -0X1C40);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801FE3A8: addiu       $a0, $a0, -0x1C40
    ctx->r4 = ADD32(ctx->r4, -0X1C40);
    after_7:
L_801FE3AC:
    // 0x801FE3AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FE3B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FE3B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FE3B8: jr          $ra
    // 0x801FE3BC: nop

    TRACE_RETURN()
    return;
    // 0x801FE3BC: nop

;}
RECOMP_FUNC void func_801D620C_6015EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D620C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D6210: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6214: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D6218: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D621C: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D6220: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D6224: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D6228: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x801D622C: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x801D6230: swc1        $f10, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f10.u32l;
    // 0x801D6234: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x801D6238: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D623C: jr          $ra
    // 0x801D6240: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801D6240: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_801DD34C_60872C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD34C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DD350: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801DD354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DD358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD35C: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801DD360: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DD364: jal         0x801D36BC
    // 0x801DD368: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_0;
    // 0x801DD368: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x801DD36C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD370: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x801DD374: bnel        $t9, $zero, L_801DD388
    if (ctx->r25 != 0) {
        // 0x801DD378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DD388;
    }
    goto skip_0;
    // 0x801DD378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DD37C: jal         0x80034ED4
    // 0x801DD380: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801DD380: nop

    after_1:
    // 0x801DD384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD388:
    // 0x801DD388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DD38C: jr          $ra
    // 0x801DD390: nop

    TRACE_RETURN()
    return;
    // 0x801DD390: nop

;}
RECOMP_FUNC void func_801F1BA8_61CF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1BAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1BB0: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x801F1BB4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F1BB8: bgtz        $t7, L_801F1BC8
    if (SIGNED(ctx->r15) > 0) {
        // 0x801F1BBC: sw          $t7, 0xD4($a0)
        MEM_W(0XD4, ctx->r4) = ctx->r15;
            goto L_801F1BC8;
    }
    // 0x801F1BBC: sw          $t7, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r15;
    // 0x801F1BC0: jal         0x801F1E94
    // 0x801F1BC4: nop

    func_801F1E94_61D274(rdram, ctx);
        goto after_0;
    // 0x801F1BC4: nop

    after_0:
L_801F1BC8:
    // 0x801F1BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F1BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1BD0: jr          $ra
    // 0x801F1BD4: nop

    TRACE_RETURN()
    return;
    // 0x801F1BD4: nop

;}
RECOMP_FUNC void func_8020003C_62B41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020003C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200044: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80200048: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x8020004C: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x80200050: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x80200054: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80200058: bne         $at, $zero, L_80200068
    if (ctx->r1 != 0) {
        // 0x8020005C: sw          $v0, 0xB4($a0)
        MEM_W(0XB4, ctx->r4) = ctx->r2;
            goto L_80200068;
    }
    // 0x8020005C: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    // 0x80200060: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x80200064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80200068:
    // 0x80200068: addu        $a1, $v0, $a2
    ctx->r5 = ADD32(ctx->r2, ctx->r6);
    // 0x8020006C: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80200070: jal         0x80203BC0
    // 0x80200074: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_0;
    // 0x80200074: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x80200078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020007C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200080: jr          $ra
    // 0x80200084: nop

    TRACE_RETURN()
    return;
    // 0x80200084: nop

;}
RECOMP_FUNC void func_801F7168_622548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7168: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F716C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F7170: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801F7174: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F7178: lwc1        $f4, 0x188($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X188);
    // 0x801F717C: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801F7180: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F7184: jr          $ra
    // 0x801F7188: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    TRACE_RETURN()
    return;
    // 0x801F7188: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_801D6BC8_601FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6BC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D6BD0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6BD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D6BD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D6BDC: jal         0x801D6CB0
    // 0x801D6BE0: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    func_801D6CB0_602090(rdram, ctx);
        goto after_0;
    // 0x801D6BE0: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x801D6BE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D6BE8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x801D6BEC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D6BF0: jal         0x801D6CB0
    // 0x801D6BF4: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    func_801D6CB0_602090(rdram, ctx);
        goto after_1;
    // 0x801D6BF4: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    after_1:
    // 0x801D6BF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D6BFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801D6C00: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x801D6C04: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x801D6C08: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D6C0C: jal         0x801D6CB0
    // 0x801D6C10: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_801D6CB0_602090(rdram, ctx);
        goto after_2;
    // 0x801D6C10: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x801D6C14: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801D6C18: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801D6C1C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x801D6C20: jal         0x801D614C
    // 0x801D6C24: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D614C_60152C(rdram, ctx);
        goto after_3;
    // 0x801D6C24: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x801D6C28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D6C2C: bne         $s0, $at, L_801D6C3C
    if (ctx->r16 != ctx->r1) {
        // 0x801D6C30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D6C3C;
    }
    // 0x801D6C30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D6C34: b           L_801D6C40
    // 0x801D6C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D6C40;
    // 0x801D6C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6C3C:
    // 0x801D6C3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D6C40:
    // 0x801D6C40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D6C44: jr          $ra
    // 0x801D6C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D6C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801D72C0_6026A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D72C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D72C4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D72C8: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801D72CC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D72D0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D72D4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D72D8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801D72DC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D72E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D72E4: addiu       $a1, $a1, 0x3D0
    ctx->r5 = ADD32(ctx->r5, 0X3D0);
    // 0x801D72E8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D72EC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D72F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D72F4: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801D72F8: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801D72FC: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801D7300: addiu       $t9, $zero, 0x509
    ctx->r25 = ADD32(0, 0X509);
    // 0x801D7304: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801D7308: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801D730C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801D7310: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801D7314: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801D7318: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D731C: addiu       $a0, $a0, 0x7380
    ctx->r4 = ADD32(ctx->r4, 0X7380);
    // 0x801D7320: addiu       $a2, $a2, -0x5688
    ctx->r6 = ADD32(ctx->r6, -0X5688);
    // 0x801D7324: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D7328: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801D732C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801D7330: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801D7334: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D7338: jal         0x80035854
    // 0x801D733C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801D733C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801D7340: beq         $v0, $zero, L_801D7370
    if (ctx->r2 == 0) {
        // 0x801D7344: lwc1        $f0, 0x5C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801D7370;
    }
    // 0x801D7344: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D7348: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D734C: swc1        $f0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f0.u32l;
    // 0x801D7350: swc1        $f0, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f0.u32l;
    // 0x801D7354: swc1        $f2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f2.u32l;
    // 0x801D7358: swc1        $f2, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f2.u32l;
    // 0x801D735C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D7360: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801D7364: swc1        $f8, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f8.u32l;
    // 0x801D7368: lbu         $t0, 0x4B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4B);
    // 0x801D736C: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
L_801D7370:
    // 0x801D7370: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D7374: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D7378: jr          $ra
    // 0x801D737C: nop

    TRACE_RETURN()
    return;
    // 0x801D737C: nop

;}
RECOMP_FUNC void func_80207698_632A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207698: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8020769C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802076A0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802076A4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802076A8: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x802076AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802076B0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x802076B4: jal         0x801D36CC
    // 0x802076B8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_0;
    // 0x802076B8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_0:
    // 0x802076BC: beq         $v0, $zero, L_802077A8
    if (ctx->r2 == 0) {
        // 0x802076C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802077A8;
    }
    // 0x802076C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802076C4: jal         0x801D3854
    // 0x802076C8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_1;
    // 0x802076C8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_1:
    // 0x802076CC: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x802076D0: bne         $v0, $at, L_802076DC
    if (ctx->r2 != ctx->r1) {
        // 0x802076D4: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_802076DC;
    }
    // 0x802076D4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x802076D8: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
L_802076DC:
    // 0x802076DC: lw          $t7, 0xD0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD0);
    // 0x802076E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802076E4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x802076E8: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x802076EC: bgtz        $t8, L_80207770
    if (SIGNED(ctx->r24) > 0) {
        // 0x802076F0: sw          $t8, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r24;
            goto L_80207770;
    }
    // 0x802076F0: sw          $t8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r24;
    // 0x802076F4: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x802076F8: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x802076FC: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
    // 0x80207700: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80207704: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207708: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x8020770C: sb          $v0, 0x64($t0)
    MEM_B(0X64, ctx->r8) = ctx->r2;
    // 0x80207710: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x80207714: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80207718: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x8020771C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80207720: lw          $a0, 0x1D8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D8);
    // 0x80207724: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80207728: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8020772C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80207730: jal         0x801E1958
    // 0x80207734: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_2;
    // 0x80207734: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80207738: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8020773C: addiu       $a1, $a1, 0x7288
    ctx->r5 = ADD32(ctx->r5, 0X7288);
    // 0x80207740: jal         0x8003522C
    // 0x80207744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x80207744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80207748: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020774C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80207750: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80207754: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80207758: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8020775C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80207760: jal         0x8000F3D8
    // 0x80207764: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x80207764: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x80207768: b           L_80207828
    // 0x8020776C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80207828;
    // 0x8020776C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80207770:
    // 0x80207770: jal         0x801D3854
    // 0x80207774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_5;
    // 0x80207774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80207778: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8020777C: bne         $v0, $at, L_80207798
    if (ctx->r2 != ctx->r1) {
        // 0x80207780: addiu       $a0, $zero, 0x231
        ctx->r4 = ADD32(0, 0X231);
            goto L_80207798;
    }
    // 0x80207780: addiu       $a0, $zero, 0x231
    ctx->r4 = ADD32(0, 0X231);
    // 0x80207784: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80207788: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x8020778C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80207790: jal         0x8000F240
    // 0x80207794: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_6;
    // 0x80207794: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_6:
L_80207798:
    // 0x80207798: jal         0x801D3894
    // 0x8020779C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_7;
    // 0x8020779C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x802077A0: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x802077A4: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
L_802077A8:
    // 0x802077A8: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x802077AC: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x802077B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802077B4: lbu         $t4, 0x2C4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2C4);
    // 0x802077B8: bnel        $t4, $at, L_802077D4
    if (ctx->r12 != ctx->r1) {
        // 0x802077BC: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_802077D4;
    }
    goto skip_0;
    // 0x802077BC: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x802077C0: jal         0x80034ED4
    // 0x802077C4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_8;
    // 0x802077C4: nop

    after_8:
    // 0x802077C8: b           L_80207828
    // 0x802077CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80207828;
    // 0x802077CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802077D0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_802077D4:
    // 0x802077D4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x802077D8: beq         $v0, $zero, L_80207818
    if (ctx->r2 == 0) {
        // 0x802077DC: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_80207818;
    }
    // 0x802077DC: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x802077E0: beq         $t5, $zero, L_802077FC
    if (ctx->r13 == 0) {
        // 0x802077E4: lw          $t9, 0x34($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X34);
            goto L_802077FC;
    }
    // 0x802077E4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x802077E8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x802077EC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802077F0: addiu       $t6, $t6, -0x5198
    ctx->r14 = ADD32(ctx->r14, -0X5198);
    // 0x802077F4: b           L_80207808
    // 0x802077F8: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
        goto L_80207808;
    // 0x802077F8: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
L_802077FC:
    // 0x802077FC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80207800: addiu       $t8, $t8, -0x5138
    ctx->r24 = ADD32(ctx->r24, -0X5138);
    // 0x80207804: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
L_80207808:
    // 0x80207808: lw          $t0, 0x7C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X7C);
    // 0x8020780C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80207810: b           L_80207824
    // 0x80207814: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
        goto L_80207824;
    // 0x80207814: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
L_80207818:
    // 0x80207818: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x8020781C: addiu       $t2, $t2, -0x5198
    ctx->r10 = ADD32(ctx->r10, -0X5198);
    // 0x80207820: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
L_80207824:
    // 0x80207824: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80207828:
    // 0x80207828: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8020782C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80207830: jr          $ra
    // 0x80207834: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80207834: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801F58AC_620C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F58AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F58B0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F58B4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F58B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F58BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F58C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F58C4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801F58C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801F58CC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801F58D0: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801F58D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F58D8: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801F58DC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F58E0: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x801F58E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F58E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F58EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F58F0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F58F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F58F8: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    // 0x801F58FC: addiu       $t1, $s0, 0x74
    ctx->r9 = ADD32(ctx->r16, 0X74);
    // 0x801F5900: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801F5904: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801F5908: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801F590C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801F5910: nop

    // 0x801F5914: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x801F5918: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801F591C: addiu       $t0, $t9, 0x100
    ctx->r8 = ADD32(ctx->r25, 0X100);
    // 0x801F5920: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x801F5924: nop

    // 0x801F5928: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801F592C: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801F5930: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801F5934: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x801F5938: nop

    // 0x801F593C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x801F5940: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801F5944: subu        $t6, $t5, $t4
    ctx->r14 = SUB32(ctx->r13, ctx->r12);
    // 0x801F5948: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x801F594C: addiu       $t2, $s0, 0x78
    ctx->r10 = ADD32(ctx->r16, 0X78);
    // 0x801F5950: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801F5954: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801F5958: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801F595C: nop

    // 0x801F5960: cvt.w.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801F5964: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801F5968: nop

    // 0x801F596C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801F5970: beql        $a1, $zero, L_801F59C0
    if (ctx->r5 == 0) {
        // 0x801F5974: mfc1        $a1, $f4
        ctx->r5 = (int32_t)ctx->f4.u32l;
            goto L_801F59C0;
    }
    goto skip_0;
    // 0x801F5974: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x801F5978: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F597C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F5980: sub.s       $f4, $f2, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x801F5984: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801F5988: nop

    // 0x801F598C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801F5990: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801F5994: nop

    // 0x801F5998: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801F599C: bne         $a1, $zero, L_801F59B4
    if (ctx->r5 != 0) {
        // 0x801F59A0: nop
    
            goto L_801F59B4;
    }
    // 0x801F59A0: nop

    // 0x801F59A4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801F59A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F59AC: b           L_801F59CC
    // 0x801F59B0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801F59CC;
    // 0x801F59B0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801F59B4:
    // 0x801F59B4: b           L_801F59CC
    // 0x801F59B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801F59CC;
    // 0x801F59B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801F59BC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
L_801F59C0:
    // 0x801F59C0: nop

    // 0x801F59C4: bltz        $a1, L_801F59B4
    if (SIGNED(ctx->r5) < 0) {
        // 0x801F59C8: nop
    
            goto L_801F59B4;
    }
    // 0x801F59C8: nop

L_801F59CC:
    // 0x801F59CC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801F59D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801F59D4: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x801F59D8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801F59DC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801F59E0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801F59E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F59E8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801F59EC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801F59F0: nop

    // 0x801F59F4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801F59F8: beql        $a2, $zero, L_801F5A48
    if (ctx->r6 == 0) {
        // 0x801F59FC: mfc1        $a2, $f6
        ctx->r6 = (int32_t)ctx->f6.u32l;
            goto L_801F5A48;
    }
    goto skip_1;
    // 0x801F59FC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x801F5A00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801F5A08: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F5A0C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801F5A10: nop

    // 0x801F5A14: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801F5A18: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801F5A1C: nop

    // 0x801F5A20: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801F5A24: bne         $a2, $zero, L_801F5A3C
    if (ctx->r6 != 0) {
        // 0x801F5A28: nop
    
            goto L_801F5A3C;
    }
    // 0x801F5A28: nop

    // 0x801F5A2C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801F5A30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F5A34: b           L_801F5A54
    // 0x801F5A38: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_801F5A54;
    // 0x801F5A38: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_801F5A3C:
    // 0x801F5A3C: b           L_801F5A54
    // 0x801F5A40: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_801F5A54;
    // 0x801F5A40: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801F5A44: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
L_801F5A48:
    // 0x801F5A48: nop

    // 0x801F5A4C: bltz        $a2, L_801F5A3C
    if (SIGNED(ctx->r6) < 0) {
        // 0x801F5A50: nop
    
            goto L_801F5A3C;
    }
    // 0x801F5A50: nop

L_801F5A54:
    // 0x801F5A54: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801F5A58: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x801F5A5C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801F5A60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801F5A64: jal         0x8000E68C
    // 0x801F5A68: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_8000E68C_F28C(rdram, ctx);
        goto after_0;
    // 0x801F5A68: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x801F5A6C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F5A70: addiu       $a1, $a1, -0x4D30
    ctx->r5 = ADD32(ctx->r5, -0X4D30);
    // 0x801F5A74: jal         0x801D2EE4
    // 0x801F5A78: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801F5A78: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x801F5A7C: jal         0x801F71DC
    // 0x801F5A80: nop

    func_801F71DC_6225BC(rdram, ctx);
        goto after_2;
    // 0x801F5A80: nop

    after_2:
    // 0x801F5A84: bne         $v0, $zero, L_801F5AAC
    if (ctx->r2 != 0) {
        // 0x801F5A88: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801F5AAC;
    }
    // 0x801F5A88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F5A8C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F5A90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F5A94: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F5A98: addiu       $a0, $a0, 0x4860
    ctx->r4 = ADD32(ctx->r4, 0X4860);
    // 0x801F5A9C: jal         0x8003521C
    // 0x801F5AA0: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F5AA0: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x801F5AA4: b           L_801F5AC4
    // 0x801F5AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F5AC4;
    // 0x801F5AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F5AAC:
    // 0x801F5AAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F5AB0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F5AB4: addiu       $a0, $a0, 0x4CF4
    ctx->r4 = ADD32(ctx->r4, 0X4CF4);
    // 0x801F5AB8: jal         0x8003521C
    // 0x801F5ABC: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F5ABC: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x801F5AC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F5AC4:
    // 0x801F5AC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F5AC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F5ACC: jr          $ra
    // 0x801F5AD0: nop

    TRACE_RETURN()
    return;
    // 0x801F5AD0: nop

;}
RECOMP_FUNC void func_801F69E0_621DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F69E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F69E4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801F69E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F69EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F69F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F69F4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x801F69F8: jal         0x801D2F40
    // 0x801F69FC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F69FC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x801F6A00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F6A04: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801F6A08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F6A0C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F6A10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F6A14: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F6A18: bc1fl       L_801F6ABC
    if (!c1cs) {
        // 0x801F6A1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6ABC;
    }
    goto skip_0;
    // 0x801F6A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6A20: jal         0x801D3F00
    // 0x801F6A24: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801F6A24: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x801F6A28: beq         $v0, $zero, L_801F6AB8
    if (ctx->r2 == 0) {
        // 0x801F6A2C: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_801F6AB8;
    }
    // 0x801F6A2C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801F6A30: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6A34: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801F6A38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6A3C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F6A40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F6A44: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F6A48: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801F6A4C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F6A50: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x801F6A54: addiu       $a0, $a0, 0x6AC8
    ctx->r4 = ADD32(ctx->r4, 0X6AC8);
    // 0x801F6A58: bc1fl       L_801F6A74
    if (!c1cs) {
        // 0x801F6A5C: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_801F6A74;
    }
    goto skip_1;
    // 0x801F6A5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_1:
    // 0x801F6A60: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x801F6A64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F6A68: b           L_801F6A7C
    // 0x801F6A6C: swc1        $f10, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f10.u32l;
        goto L_801F6A7C;
    // 0x801F6A6C: swc1        $f10, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f10.u32l;
    // 0x801F6A70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_801F6A74:
    // 0x801F6A74: nop

    // 0x801F6A78: swc1        $f16, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f16.u32l;
L_801F6A7C:
    // 0x801F6A7C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F6A80: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F6A84: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x801F6A88: nop

    // 0x801F6A8C: bc1fl       L_801F6AA8
    if (!c1cs) {
        // 0x801F6A90: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_801F6AA8;
    }
    goto skip_2;
    // 0x801F6A90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_2:
    // 0x801F6A94: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x801F6A98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6A9C: b           L_801F6AB0
    // 0x801F6AA0: swc1        $f6, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f6.u32l;
        goto L_801F6AB0;
    // 0x801F6AA0: swc1        $f6, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f6.u32l;
    // 0x801F6AA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_801F6AA8:
    // 0x801F6AA8: nop

    // 0x801F6AAC: swc1        $f8, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->f8.u32l;
L_801F6AB0:
    // 0x801F6AB0: jal         0x8003521C
    // 0x801F6AB4: sw          $t6, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F6AB4: sw          $t6, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r14;
    after_2:
L_801F6AB8:
    // 0x801F6AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6ABC:
    // 0x801F6ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6AC0: jr          $ra
    // 0x801F6AC4: nop

    TRACE_RETURN()
    return;
    // 0x801F6AC4: nop

;}
RECOMP_FUNC void func_801D391C_5FECFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D391C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D3920: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D3924: lw          $v1, 0x68($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X68);
    // 0x801D3928: slti        $at, $v1, 0x3E7
    ctx->r1 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x801D392C: bne         $at, $zero, L_801D393C
    if (ctx->r1 != 0) {
        // 0x801D3930: nop
    
            goto L_801D393C;
    }
    // 0x801D3930: nop

    // 0x801D3934: addiu       $v1, $zero, 0x3E7
    ctx->r3 = ADD32(0, 0X3E7);
    // 0x801D3938: sw          $v1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r3;
L_801D393C:
    // 0x801D393C: bgtz        $v1, L_801D394C
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D3940: nop
    
            goto L_801D394C;
    }
    // 0x801D3940: nop

    // 0x801D3944: sw          $zero, 0x68($v0)
    MEM_W(0X68, ctx->r2) = 0;
    // 0x801D3948: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D394C:
    // 0x801D394C: jr          $ra
    // 0x801D3950: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3950: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801F3AC8_61EEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3AD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F3AD4: jal         0x801F7004
    // 0x801F3AD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7004_6223E4(rdram, ctx);
        goto after_0;
    // 0x801F3AD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F3ADC: jal         0x801F76D0
    // 0x801F3AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F3AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F3AE4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F3AE8: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    // 0x801F3AEC: jal         0x801D31CC
    // 0x801F3AF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F3AF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F3AF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F3AF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F3AFC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F3B00: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3B04: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x801F3B08: jal         0x8003521C
    // 0x801F3B0C: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F3B0C: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    after_3:
    // 0x801F3B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F3B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F3B18: jr          $ra
    // 0x801F3B1C: nop

    TRACE_RETURN()
    return;
    // 0x801F3B1C: nop

;}
RECOMP_FUNC void func_801EF280_61A660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF280: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF284: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF288: addiu       $t6, $zero, 0x1042
    ctx->r14 = ADD32(0, 0X1042);
    // 0x801EF28C: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801EF290: jr          $ra
    // 0x801EF294: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801EF294: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801EC1D8_6175B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC1D8: jr          $ra
    // 0x801EC1DC: nop

    TRACE_RETURN()
    return;
    // 0x801EC1DC: nop

;}
RECOMP_FUNC void func_802012C8_62C6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802012C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802012CC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802012D0: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x802012D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802012D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802012DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802012E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802012E4: jal         0x801D614C
    // 0x802012E8: sb          $zero, 0x7($t6)
    MEM_B(0X7, ctx->r14) = 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x802012E8: sb          $zero, 0x7($t6)
    MEM_B(0X7, ctx->r14) = 0;
    after_0:
    // 0x802012EC: lw          $t7, 0x7C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7C);
    // 0x802012F0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802012F4: addiu       $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
    // 0x802012F8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x802012FC: bne         $t8, $zero, L_80201358
    if (ctx->r24 != 0) {
        // 0x80201300: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_80201358;
    }
    // 0x80201300: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x80201304: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201308: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020130C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80201310: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x80201314: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x80201318: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x8020131C: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x80201320: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x80201324: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x80201328: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x8020132C: addiu       $t1, $s0, 0x74
    ctx->r9 = ADD32(ctx->r16, 0X74);
    // 0x80201330: addiu       $t2, $s0, 0x78
    ctx->r10 = ADD32(ctx->r16, 0X78);
    // 0x80201334: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80201338: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8020133C: jal         0x8000E808
    // 0x80201340: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x80201340: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    after_1:
    // 0x80201344: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201348: jal         0x8003521C
    // 0x8020134C: addiu       $a0, $a0, 0x1374
    ctx->r4 = ADD32(ctx->r4, 0X1374);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x8020134C: addiu       $a0, $a0, 0x1374
    ctx->r4 = ADD32(ctx->r4, 0X1374);
    after_2:
    // 0x80201350: b           L_80201364
    // 0x80201354: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80201364;
    // 0x80201354: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80201358:
    // 0x80201358: jal         0x8020407C
    // 0x8020135C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_3;
    // 0x8020135C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80201360: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80201364:
    // 0x80201364: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80201368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8020136C: jr          $ra
    // 0x80201370: nop

    TRACE_RETURN()
    return;
    // 0x80201370: nop

;}
RECOMP_FUNC void func_801E4B38_60FF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4B40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E4B44: jal         0x801D31F0
    // 0x801E4B48: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E4B48: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801E4B4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E4B50: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E4B54: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801E4B58: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E4B5C: nop

    // 0x801E4B60: bc1f        L_801E4BA4
    if (!c1cs) {
        // 0x801E4B64: nop
    
            goto L_801E4BA4;
    }
    // 0x801E4B64: nop

    // 0x801E4B68: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E4B6C: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801E4B70: beql        $t7, $zero, L_801E4BB4
    if (ctx->r15 == 0) {
        // 0x801E4B74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E4BB4;
    }
    goto skip_0;
    // 0x801E4B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E4B78: jal         0x80038BC8
    // 0x801E4B7C: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E4B7C: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_1:
    // 0x801E4B80: jal         0x80038BC8
    // 0x801E4B84: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E4B84: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_2:
    // 0x801E4B88: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4B8C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x801E4B90: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E4B94: sb          $t8, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r24;
    // 0x801E4B98: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801E4B9C: b           L_801E4BB0
    // 0x801E4BA0: sb          $zero, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = 0;
        goto L_801E4BB0;
    // 0x801E4BA0: sb          $zero, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = 0;
L_801E4BA4:
    // 0x801E4BA4: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801E4BA8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x801E4BAC: sb          $t1, 0x2C1($t2)
    MEM_B(0X2C1, ctx->r10) = ctx->r9;
L_801E4BB0:
    // 0x801E4BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E4BB4:
    // 0x801E4BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4BB8: jr          $ra
    // 0x801E4BBC: nop

    TRACE_RETURN()
    return;
    // 0x801E4BBC: nop

;}
RECOMP_FUNC void func_801E355C_60E93C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E355C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E3560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3564: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E3568: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801E356C: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x801E3570: beq         $at, $zero, L_801E35F0
    if (ctx->r1 == 0) {
        // 0x801E3574: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801E35F0;
    }
    // 0x801E3574: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801E3578: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E357C: addu        $at, $at, $t6
    gpr jr_addend_801E3584 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801E3580: lw          $t6, -0x2338($at)
    ctx->r14 = ADD32(ctx->r1, -0X2338);
    // 0x801E3584: jr          $t6
    // 0x801E3588: nop

    switch (jr_addend_801E3584 >> 2) {
        case 0: goto L_801E358C; break;
        case 1: goto L_801E359C; break;
        case 2: goto L_801E35B0; break;
        case 3: goto L_801E35C4; break;
        case 4: goto L_801E35E4; break;
        default: switch_error(__func__, 0x801E3584, 0x8020DCC8);
    }
    // 0x801E3588: nop

L_801E358C:
    // 0x801E358C: jal         0x80034ED4
    // 0x801E3590: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E3590: nop

    after_0:
    // 0x801E3594: b           L_801E35F4
    // 0x801E3598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E35F4;
    // 0x801E3598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E359C:
    // 0x801E359C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E35A0: jal         0x8003521C
    // 0x801E35A4: addiu       $a0, $a0, 0x3600
    ctx->r4 = ADD32(ctx->r4, 0X3600);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E35A4: addiu       $a0, $a0, 0x3600
    ctx->r4 = ADD32(ctx->r4, 0X3600);
    after_1:
    // 0x801E35A8: b           L_801E35F4
    // 0x801E35AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E35F4;
    // 0x801E35AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E35B0:
    // 0x801E35B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E35B4: jal         0x8003521C
    // 0x801E35B8: addiu       $a0, $a0, 0x3614
    ctx->r4 = ADD32(ctx->r4, 0X3614);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E35B8: addiu       $a0, $a0, 0x3614
    ctx->r4 = ADD32(ctx->r4, 0X3614);
    after_2:
    // 0x801E35BC: b           L_801E35F4
    // 0x801E35C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E35F4;
    // 0x801E35C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E35C4:
    // 0x801E35C4: addiu       $t7, $zero, 0x3C0
    ctx->r15 = ADD32(0, 0X3C0);
    // 0x801E35C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E35CC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E35D0: sw          $t7, -0x10F4($at)
    MEM_W(-0X10F4, ctx->r1) = ctx->r15;
    // 0x801E35D4: jal         0x8003521C
    // 0x801E35D8: addiu       $a0, $a0, 0x37E0
    ctx->r4 = ADD32(ctx->r4, 0X37E0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E35D8: addiu       $a0, $a0, 0x37E0
    ctx->r4 = ADD32(ctx->r4, 0X37E0);
    after_3:
    // 0x801E35DC: b           L_801E35F4
    // 0x801E35E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E35F4;
    // 0x801E35E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E35E4:
    // 0x801E35E4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E35E8: jal         0x8003521C
    // 0x801E35EC: addiu       $a0, $a0, 0x3D74
    ctx->r4 = ADD32(ctx->r4, 0X3D74);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E35EC: addiu       $a0, $a0, 0x3D74
    ctx->r4 = ADD32(ctx->r4, 0X3D74);
    after_4:
L_801E35F0:
    // 0x801E35F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E35F4:
    // 0x801E35F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E35F8: jr          $ra
    // 0x801E35FC: nop

    TRACE_RETURN()
    return;
    // 0x801E35FC: nop

;}
RECOMP_FUNC void func_801FF944_62AD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF944: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801FF948: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FF94C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FF950: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FF954: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FF958: jal         0x801D3018
    // 0x801FF95C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FF95C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801FF960: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FF964: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x801FF968: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FF96C: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x801FF970: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801FF974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF978: jal         0x801D6C4C
    // 0x801FF97C: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    func_801D6C4C_60202C(rdram, ctx);
        goto after_1;
    // 0x801FF97C: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    after_1:
    // 0x801FF980: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x801FF984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF988: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801FF98C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x801FF990: jal         0x801D5D98
    // 0x801FF994: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_2;
    // 0x801FF994: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_2:
    // 0x801FF998: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801FF99C: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801FF9A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801FF9A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF9A8: jal         0x801D5C30
    // 0x801FF9AC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_3;
    // 0x801FF9AC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_3:
    // 0x801FF9B0: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x801FF9B4: beql        $t8, $zero, L_801FF9DC
    if (ctx->r24 == 0) {
        // 0x801FF9B8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801FF9DC;
    }
    goto skip_0;
    // 0x801FF9B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801FF9BC: lw          $t9, 0xEC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XEC);
    // 0x801FF9C0: blez        $t9, L_801FF9D0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x801FF9C4: nop
    
            goto L_801FF9D0;
    }
    // 0x801FF9C4: nop

    // 0x801FF9C8: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    // 0x801FF9CC: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
L_801FF9D0:
    // 0x801FF9D0: jal         0x801FC3FC
    // 0x801FF9D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_4;
    // 0x801FF9D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FF9D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FF9DC:
    // 0x801FF9DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FF9E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801FF9E4: jr          $ra
    // 0x801FF9E8: nop

    TRACE_RETURN()
    return;
    // 0x801FF9E8: nop

;}
RECOMP_FUNC void func_80209788_634B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80209788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020978C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80209790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80209794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80209798: jal         0x801D6330
    // 0x8020979C: lui         $a1, 0xC25C
    ctx->r5 = S32(0XC25C << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_0;
    // 0x8020979C: lui         $a1, 0xC25C
    ctx->r5 = S32(0XC25C << 16);
    after_0:
    // 0x802097A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802097A4: jal         0x801D641C
    // 0x802097A8: lui         $a1, 0xC3FA
    ctx->r5 = S32(0XC3FA << 16);
    func_801D641C_6017FC(rdram, ctx);
        goto after_1;
    // 0x802097A8: lui         $a1, 0xC3FA
    ctx->r5 = S32(0XC3FA << 16);
    after_1:
    // 0x802097AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802097B0: jal         0x801D3018
    // 0x802097B4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_2;
    // 0x802097B4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_2:
    // 0x802097B8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802097BC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x802097C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802097C4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802097C8: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x802097CC: bnel        $t7, $at, L_802097E0
    if (ctx->r15 != ctx->r1) {
        // 0x802097D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802097E0;
    }
    goto skip_0;
    // 0x802097D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802097D4: jal         0x8003521C
    // 0x802097D8: addiu       $a0, $a0, -0x6814
    ctx->r4 = ADD32(ctx->r4, -0X6814);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x802097D8: addiu       $a0, $a0, -0x6814
    ctx->r4 = ADD32(ctx->r4, -0X6814);
    after_3:
    // 0x802097DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802097E0:
    // 0x802097E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802097E4: jr          $ra
    // 0x802097E8: nop

    TRACE_RETURN()
    return;
    // 0x802097E8: nop

;}
RECOMP_FUNC void func_801F0FCC_61C3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0FD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0FD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F0FD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0FDC: jal         0x801F76D0
    // 0x801F0FE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F0FE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F0FE4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F0FE8: addiu       $a1, $a1, -0x4D78
    ctx->r5 = ADD32(ctx->r5, -0X4D78);
    // 0x801F0FEC: jal         0x801D31CC
    // 0x801F0FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801F0FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F0FF4: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x801F0FF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0FFC: nop

    // 0x801F1000: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801F1004: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801F1008: jal         0x80003E10
    // 0x801F100C: lhu         $a0, 0x16($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x801F100C: lhu         $a0, 0x16($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X16);
    after_2:
    // 0x801F1010: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x801F1014: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F1018: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F101C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801F1020: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801F1024: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F1028: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801F102C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801F1030: jal         0x80003EA0
    // 0x801F1034: lhu         $a0, 0x16($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x801F1034: lhu         $a0, 0x16($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X16);
    after_3:
    // 0x801F1038: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x801F103C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801F1040: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F1044: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801F1048: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F104C: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801F1050: addiu       $a0, $a0, 0x1074
    ctx->r4 = ADD32(ctx->r4, 0X1074);
    // 0x801F1054: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F1058: jal         0x8003521C
    // 0x801F105C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F105C: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x801F1060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F1064: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F1068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F106C: jr          $ra
    // 0x801F1070: nop

    TRACE_RETURN()
    return;
    // 0x801F1070: nop

;}
RECOMP_FUNC void func_801E700C_6123EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E700C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E7010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E7014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E7018: jal         0x801EF268
    // 0x801E701C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF268_61A648(rdram, ctx);
        goto after_0;
    // 0x801E701C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E7020: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E7024: addiu       $a1, $a1, -0x4E60
    ctx->r5 = ADD32(ctx->r5, -0X4E60);
    // 0x801E7028: jal         0x801D31CC
    // 0x801E702C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E702C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E7030: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E7034: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E7038: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E703C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E7040: jal         0x801D34D0
    // 0x801E7044: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E7044: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E7048: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E704C: jal         0x8003521C
    // 0x801E7050: addiu       $a0, $a0, 0x7064
    ctx->r4 = ADD32(ctx->r4, 0X7064);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E7050: addiu       $a0, $a0, 0x7064
    ctx->r4 = ADD32(ctx->r4, 0X7064);
    after_3:
    // 0x801E7054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E7058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E705C: jr          $ra
    // 0x801E7060: nop

    TRACE_RETURN()
    return;
    // 0x801E7060: nop

;}
RECOMP_FUNC void func_80201218_62C5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020121C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80201220: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80201224: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80201228: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8020122C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80201230: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x80201234: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80201238: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020123C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x80201240: bne         $at, $zero, L_80201258
    if (ctx->r1 != 0) {
        // 0x80201244: addiu       $t8, $zero, 0x6
        ctx->r24 = ADD32(0, 0X6);
            goto L_80201258;
    }
    // 0x80201244: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80201248: jal         0x80200684
    // 0x8020124C: nop

    func_80200684_62BA64(rdram, ctx);
        goto after_0;
    // 0x8020124C: nop

    after_0:
    // 0x80201250: b           L_802012B8
    // 0x80201254: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802012B8;
    // 0x80201254: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80201258:
    // 0x80201258: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020125C: sb          $t7, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r15;
    // 0x80201260: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x80201264: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80201268: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x8020126C: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x80201270: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x80201274: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x80201278: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8020127C: addiu       $t0, $s0, 0x74
    ctx->r8 = ADD32(ctx->r16, 0X74);
    // 0x80201280: addiu       $t1, $s0, 0x78
    ctx->r9 = ADD32(ctx->r16, 0X78);
    // 0x80201284: lhu         $a0, 0x14($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X14);
    // 0x80201288: lhu         $a1, 0x16($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X16);
    // 0x8020128C: lhu         $a2, 0x18($t9)
    ctx->r6 = MEM_HU(ctx->r25, 0X18);
    // 0x80201290: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80201294: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80201298: jal         0x8000E808
    // 0x8020129C: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x8020129C: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    after_1:
    // 0x802012A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802012A4: jal         0x8003521C
    // 0x802012A8: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, 0X12C8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x802012A8: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, 0X12C8);
    after_2:
    // 0x802012AC: jal         0x8020407C
    // 0x802012B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_3;
    // 0x802012B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802012B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802012B8:
    // 0x802012B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802012BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802012C0: jr          $ra
    // 0x802012C4: nop

    TRACE_RETURN()
    return;
    // 0x802012C4: nop

;}
RECOMP_FUNC void func_801E3614_60E9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3614: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E3618: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E361C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E3620: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E3624: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801E3628: lwc1        $f4, 0xA0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA0);
    // 0x801E362C: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801E3630: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3634: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x801E3638: lwc1        $f6, 0xA4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XA4);
    // 0x801E363C: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x801E3640: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x801E3644: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x801E3648: lwc1        $f8, 0xA8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XA8);
    // 0x801E364C: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x801E3650: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801E3654: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801E3658: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    // 0x801E365C: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x801E3660: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E3664: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E3668: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E366C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E3670: jal         0x8000E4E4
    // 0x801E3674: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801E3674: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E3678: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801E367C: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801E3680: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801E3684: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E3688: lbu         $t0, 0x2C0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2C0);
    // 0x801E368C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801E3690: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801E3694: bne         $t0, $zero, L_801E3740
    if (ctx->r8 != 0) {
        // 0x801E3698: lwc1        $f2, 0x40($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
            goto L_801E3740;
    }
    // 0x801E3698: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E369C: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801E36A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E36A4: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E36A8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801E36AC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801E36B0: nop

    // 0x801E36B4: bc1fl       L_801E36C4
    if (!c1cs) {
        // 0x801E36B8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E36C4;
    }
    goto skip_0;
    // 0x801E36B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x801E36BC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801E36C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E36C4:
    // 0x801E36C4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E36C8: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x801E36CC: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E36D0: nop

    // 0x801E36D4: bc1fl       L_801E36E4
    if (!c1cs) {
        // 0x801E36D8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E36E4;
    }
    goto skip_1;
    // 0x801E36D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_1:
    // 0x801E36DC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801E36E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E36E4:
    // 0x801E36E4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E36E8: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x801E36EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E36F0: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801E36F4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x801E36F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E36FC: swc1        $f16, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f16.u32l;
    // 0x801E3700: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E3704: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x801E3708: nop

    // 0x801E370C: bc1fl       L_801E371C
    if (!c1cs) {
        // 0x801E3710: lwc1        $f4, 0x44($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E371C;
    }
    goto skip_2;
    // 0x801E3710: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x801E3714: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x801E3718: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
L_801E371C:
    // 0x801E371C: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x801E3720: nop

    // 0x801E3724: bc1fl       L_801E3734
    if (!c1cs) {
        // 0x801E3728: lwc1        $f6, 0x44($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E3734;
    }
    goto skip_3;
    // 0x801E3728: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x801E372C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x801E3730: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
L_801E3734:
    // 0x801E3734: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801E3738: b           L_801E37D0
    // 0x801E373C: swc1        $f8, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f8.u32l;
        goto L_801E37D0;
    // 0x801E373C: swc1        $f8, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f8.u32l;
L_801E3740:
    // 0x801E3740: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E3744: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E3748: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801E374C: nop

    // 0x801E3750: bc1fl       L_801E3760
    if (!c1cs) {
        // 0x801E3754: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801E3760;
    }
    goto skip_4;
    // 0x801E3754: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_4:
    // 0x801E3758: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801E375C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801E3760:
    // 0x801E3760: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x801E3764: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E3768: nop

    // 0x801E376C: bc1fl       L_801E377C
    if (!c1cs) {
        // 0x801E3770: lwc1        $f10, 0x40($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
            goto L_801E377C;
    }
    goto skip_5;
    // 0x801E3770: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    skip_5:
    // 0x801E3774: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801E3778: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
L_801E377C:
    // 0x801E377C: lui         $at, 0xC320
    ctx->r1 = S32(0XC320 << 16);
    // 0x801E3780: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E3784: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801E3788: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x801E378C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E3790: swc1        $f16, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f16.u32l;
    // 0x801E3794: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E3798: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x801E379C: nop

    // 0x801E37A0: bc1fl       L_801E37B0
    if (!c1cs) {
        // 0x801E37A4: lwc1        $f4, 0x44($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E37B0;
    }
    goto skip_6;
    // 0x801E37A4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    skip_6:
    // 0x801E37A8: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x801E37AC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
L_801E37B0:
    // 0x801E37B0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801E37B4: nop

    // 0x801E37B8: bc1fl       L_801E37C8
    if (!c1cs) {
        // 0x801E37BC: lwc1        $f6, 0x44($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E37C8;
    }
    goto skip_7;
    // 0x801E37BC: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    skip_7:
    // 0x801E37C0: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801E37C4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
L_801E37C8:
    // 0x801E37C8: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801E37CC: swc1        $f8, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f8.u32l;
L_801E37D0:
    // 0x801E37D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E37D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E37D8: jr          $ra
    // 0x801E37DC: nop

    TRACE_RETURN()
    return;
    // 0x801E37DC: nop

;}
RECOMP_FUNC void func_801FED3C_62A11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FED3C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801FED40: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FED44: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801FED48: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801FED4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FED50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FED54: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801FED58: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FED5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FED60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FED64: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801FED68: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x801FED6C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801FED70: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x801FED74: jal         0x801D2F40
    // 0x801FED78: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FED78: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801FED7C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FED80: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801FED84: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801FED88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FED8C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801FED90: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801FED94: sub.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d - ctx->f0.d;
    // 0x801FED98: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801FED9C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FEDA0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FEDA4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FEDA8: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    // 0x801FEDAC: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801FEDB0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801FEDB4: lw          $t9, 0x1E4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1E4);
    // 0x801FEDB8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801FEDBC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x801FEDC0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801FEDC4: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x801FEDC8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801FEDCC: lhu         $v1, 0x307C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307C);
    // 0x801FEDD0: andi        $t1, $v1, 0x10
    ctx->r9 = ctx->r3 & 0X10;
    // 0x801FEDD4: beql        $t1, $zero, L_801FEE18
    if (ctx->r9 == 0) {
        // 0x801FEDD8: andi        $t6, $v1, 0xC030
        ctx->r14 = ctx->r3 & 0XC030;
            goto L_801FEE18;
    }
    goto skip_0;
    // 0x801FEDD8: andi        $t6, $v1, 0xC030
    ctx->r14 = ctx->r3 & 0XC030;
    skip_0:
    // 0x801FEDDC: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801FEDE0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801FEDE4: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x801FEDE8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801FEDEC: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801FEDF0: lw          $t4, 0x1E4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1E4);
    // 0x801FEDF4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FEDF8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FEDFC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801FEE00: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x801FEE04: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801FEE08: addu        $v0, $t2, $t5
    ctx->r2 = ADD32(ctx->r10, ctx->r13);
    // 0x801FEE0C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801FEE10: lhu         $v1, 0x307C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307C);
    // 0x801FEE14: andi        $t6, $v1, 0xC030
    ctx->r14 = ctx->r3 & 0XC030;
L_801FEE18:
    // 0x801FEE18: beql        $t6, $zero, L_801FEF04
    if (ctx->r14 == 0) {
        // 0x801FEE1C: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_801FEF04;
    }
    goto skip_1;
    // 0x801FEE1C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_1:
    // 0x801FEE20: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FEE24: lwc1        $f18, 0x98($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801FEE28: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x801FEE2C: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x801FEE30: nop

    // 0x801FEE34: bc1fl       L_801FEEA0
    if (!c1cs) {
        // 0x801FEE38: lwc1        $f4, 0x3088($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
            goto L_801FEEA0;
    }
    goto skip_2;
    // 0x801FEE38: lwc1        $f4, 0x3088($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
    skip_2:
    // 0x801FEE3C: lwc1        $f4, 0x3088($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
    // 0x801FEE40: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801FEE44: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FEE48: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x801FEE4C: nop

    // 0x801FEE50: bc1fl       L_801FEE80
    if (!c1cs) {
        // 0x801FEE54: lwc1        $f6, 0xA0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801FEE80;
    }
    goto skip_3;
    // 0x801FEE54: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    skip_3:
    // 0x801FEE58: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEE5C: lui         $at, 0x4026
    ctx->r1 = S32(0X4026 << 16);
    // 0x801FEE60: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801FEE64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801FEE68: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801FEE6C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801FEE70: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801FEE74: b           L_801FEF00
    // 0x801FEE78: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
        goto L_801FEF00;
    // 0x801FEE78: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x801FEE7C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
L_801FEE80:
    // 0x801FEE80: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801FEE84: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FEE88: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801FEE8C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801FEE90: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801FEE94: b           L_801FEF00
    // 0x801FEE98: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
        goto L_801FEF00;
    // 0x801FEE98: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
    // 0x801FEE9C: lwc1        $f4, 0x3088($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3088);
L_801FEEA0:
    // 0x801FEEA0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801FEEA4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FEEA8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FEEAC: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801FEEB0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801FEEB4: nop

    // 0x801FEEB8: bc1fl       L_801FEEE8
    if (!c1cs) {
        // 0x801FEEBC: lwc1        $f8, 0xA0($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801FEEE8;
    }
    goto skip_4;
    // 0x801FEEBC: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    skip_4:
    // 0x801FEEC0: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEEC4: lui         $at, 0x4026
    ctx->r1 = S32(0X4026 << 16);
    // 0x801FEEC8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801FEECC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801FEED0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801FEED4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801FEED8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801FEEDC: b           L_801FEF00
    // 0x801FEEE0: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
        goto L_801FEF00;
    // 0x801FEEE0: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
    // 0x801FEEE4: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
L_801FEEE8:
    // 0x801FEEE8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801FEEEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801FEEF0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801FEEF4: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801FEEF8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801FEEFC: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
L_801FEF00:
    // 0x801FEF00: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_801FEF04:
    // 0x801FEF04: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEF08: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801FEF0C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801FEF10: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801FEF14: nop

    // 0x801FEF18: bc1fl       L_801FEF2C
    if (!c1cs) {
        // 0x801FEF1C: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_801FEF2C;
    }
    goto skip_5;
    // 0x801FEF1C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_5:
    // 0x801FEF20: swc1        $f12, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f12.u32l;
    // 0x801FEF24: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEF28: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_801FEF2C:
    // 0x801FEF2C: nop

    // 0x801FEF30: bc1fl       L_801FEF48
    if (!c1cs) {
        // 0x801FEF34: trunc.w.s   $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801FEF48;
    }
    goto skip_6;
    // 0x801FEF34: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_6:
    // 0x801FEF38: swc1        $f2, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f2.u32l;
    // 0x801FEF3C: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEF40: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801FEF44: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
L_801FEF48:
    // 0x801FEF48: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x801FEF4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FEF50: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801FEF54: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801FEF58: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801FEF5C: jal         0x801D4AEC
    // 0x801FEF60: sw          $t9, 0x70($t7)
    MEM_W(0X70, ctx->r15) = ctx->r25;
    func_801D4AEC_5FFECC(rdram, ctx);
        goto after_1;
    // 0x801FEF60: sw          $t9, 0x70($t7)
    MEM_W(0X70, ctx->r15) = ctx->r25;
    after_1:
    // 0x801FEF64: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801FEF68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FEF6C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801FEF70: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801FEF74: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x801FEF78: nop

    // 0x801FEF7C: bc1f        L_801FEF90
    if (!c1cs) {
        // 0x801FEF80: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801FEF90;
    }
    // 0x801FEF80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FEF84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FEF88: nop

    // 0x801FEF8C: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
L_801FEF90:
    // 0x801FEF90: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x801FEF94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FEF98: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801FEF9C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x801FEFA0: nop

    // 0x801FEFA4: bc1f        L_801FEFB8
    if (!c1cs) {
        // 0x801FEFA8: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801FEFB8;
    }
    // 0x801FEFA8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801FEFAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FEFB0: nop

    // 0x801FEFB4: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
L_801FEFB8:
    // 0x801FEFB8: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801FEFBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FEFC0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FEFC4: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801FEFC8: nop

    // 0x801FEFCC: bc1f        L_801FEFE4
    if (!c1cs) {
        // 0x801FEFD0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801FEFE4;
    }
    // 0x801FEFD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FEFD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FEFD8: nop

    // 0x801FEFDC: swc1        $f10, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f10.u32l;
    // 0x801FEFE0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
L_801FEFE4:
    // 0x801FEFE4: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801FEFE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FEFEC: nop

    // 0x801FEFF0: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x801FEFF4: nop

    // 0x801FEFF8: bc1f        L_801FF00C
    if (!c1cs) {
        // 0x801FEFFC: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801FF00C;
    }
    // 0x801FEFFC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801FF000: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FF004: nop

    // 0x801FF008: swc1        $f18, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f18.u32l;
L_801FF00C:
    // 0x801FF00C: jal         0x801D4BF4
    // 0x801FF010: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_2;
    // 0x801FF010: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_2:
    // 0x801FF014: lw          $t0, 0x94($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X94);
    // 0x801FF018: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801FF01C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801FF020: bgez        $t0, L_801FF034
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801FF024: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801FF034;
    }
    // 0x801FF024: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801FF028: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FF02C: nop

    // 0x801FF030: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801FF034:
    // 0x801FF034: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801FF038: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801FF03C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FF040: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801FF044: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801FF048: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801FF04C: nop

    // 0x801FF050: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801FF054: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801FF058: nop

    // 0x801FF05C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801FF060: beql        $t3, $zero, L_801FF0B0
    if (ctx->r11 == 0) {
        // 0x801FF064: mfc1        $t3, $f18
        ctx->r11 = (int32_t)ctx->f18.u32l;
            goto L_801FF0B0;
    }
    goto skip_7;
    // 0x801FF064: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    skip_7:
    // 0x801FF068: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FF06C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801FF070: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801FF074: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801FF078: nop

    // 0x801FF07C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801FF080: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801FF084: nop

    // 0x801FF088: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801FF08C: bne         $t3, $zero, L_801FF0A4
    if (ctx->r11 != 0) {
        // 0x801FF090: nop
    
            goto L_801FF0A4;
    }
    // 0x801FF090: nop

    // 0x801FF094: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x801FF098: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FF09C: b           L_801FF0BC
    // 0x801FF0A0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801FF0BC;
    // 0x801FF0A0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801FF0A4:
    // 0x801FF0A4: b           L_801FF0BC
    // 0x801FF0A8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801FF0BC;
    // 0x801FF0A8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801FF0AC: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
L_801FF0B0:
    // 0x801FF0B0: nop

    // 0x801FF0B4: bltz        $t3, L_801FF0A4
    if (SIGNED(ctx->r11) < 0) {
        // 0x801FF0B8: nop
    
            goto L_801FF0A4;
    }
    // 0x801FF0B8: nop

L_801FF0BC:
    // 0x801FF0BC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801FF0C0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801FF0C4: sw          $t3, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r11;
    // 0x801FF0C8: bgez        $t3, L_801FF0E0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801FF0CC: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801FF0E0;
    }
    // 0x801FF0CC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801FF0D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801FF0D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FF0D8: nop

    // 0x801FF0DC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_801FF0E0:
    // 0x801FF0E0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801FF0E4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801FF0E8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FF0EC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801FF0F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FF0F4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801FF0F8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801FF0FC: nop

    // 0x801FF100: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801FF104: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801FF108: nop

    // 0x801FF10C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801FF110: beql        $t5, $zero, L_801FF160
    if (ctx->r13 == 0) {
        // 0x801FF114: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_801FF160;
    }
    goto skip_8;
    // 0x801FF114: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_8:
    // 0x801FF118: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FF11C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801FF120: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801FF124: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801FF128: nop

    // 0x801FF12C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801FF130: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801FF134: nop

    // 0x801FF138: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801FF13C: bne         $t5, $zero, L_801FF154
    if (ctx->r13 != 0) {
        // 0x801FF140: nop
    
            goto L_801FF154;
    }
    // 0x801FF140: nop

    // 0x801FF144: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x801FF148: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FF14C: b           L_801FF16C
    // 0x801FF150: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_801FF16C;
    // 0x801FF150: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_801FF154:
    // 0x801FF154: b           L_801FF16C
    // 0x801FF158: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_801FF16C;
    // 0x801FF158: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801FF15C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_801FF160:
    // 0x801FF160: nop

    // 0x801FF164: bltz        $t5, L_801FF154
    if (SIGNED(ctx->r13) < 0) {
        // 0x801FF168: nop
    
            goto L_801FF154;
    }
    // 0x801FF168: nop

L_801FF16C:
    // 0x801FF16C: lw          $t6, 0x80($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X80);
    // 0x801FF170: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801FF174: sw          $t5, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r13;
    // 0x801FF178: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x801FF17C: bgtz        $t8, L_801FF1A8
    if (SIGNED(ctx->r24) > 0) {
        // 0x801FF180: sw          $t8, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r24;
            goto L_801FF1A8;
    }
    // 0x801FF180: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x801FF184: jal         0x80037C9C
    // 0x801FF188: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_3;
    // 0x801FF188: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x801FF18C: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x801FF190: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x801FF194: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FF198: jal         0x80037C20
    // 0x801FF19C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_4;
    // 0x801FF19C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x801FF1A0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x801FF1A4: sw          $t7, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r15;
L_801FF1A8:
    // 0x801FF1A8: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801FF1AC: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801FF1B0: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801FF1B4: jal         0x8000E630
    // 0x801FF1B8: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_5;
    // 0x801FF1B8: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    after_5:
    // 0x801FF1BC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FF1C0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801FF1C4: jal         0x8000E9F4
    // 0x801FF1C8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_6;
    // 0x801FF1C8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x801FF1CC: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x801FF1D0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801FF1D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801FF1D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF1DC: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x801FF1E0: jal         0x801D6A30
    // 0x801FF1E4: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    func_801D6A30_601E10(rdram, ctx);
        goto after_7;
    // 0x801FF1E4: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_7:
    // 0x801FF1E8: lw          $t0, 0x7C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X7C);
    // 0x801FF1EC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801FF1F0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x801FF1F4: bgtz        $t1, L_801FF280
    if (SIGNED(ctx->r9) > 0) {
        // 0x801FF1F8: sw          $t1, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r9;
            goto L_801FF280;
    }
    // 0x801FF1F8: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801FF1FC: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FF200: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FF204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FF208: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FF20C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801FF210: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x801FF214: bc1fl       L_801FF23C
    if (!c1cs) {
        // 0x801FF218: sw          $zero, 0x34($t4)
        MEM_W(0X34, ctx->r12) = 0;
            goto L_801FF23C;
    }
    goto skip_9;
    // 0x801FF218: sw          $zero, 0x34($t4)
    MEM_W(0X34, ctx->r12) = 0;
    skip_9:
    // 0x801FF21C: jal         0x801D2EE4
    // 0x801FF220: addiu       $a1, $a1, -0x4BF0
    ctx->r5 = ADD32(ctx->r5, -0X4BF0);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_8;
    // 0x801FF220: addiu       $a1, $a1, -0x4BF0
    ctx->r5 = ADD32(ctx->r5, -0X4BF0);
    after_8:
    // 0x801FF224: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF228: jal         0x8003521C
    // 0x801FF22C: addiu       $a0, $a0, -0xD6C
    ctx->r4 = ADD32(ctx->r4, -0XD6C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801FF22C: addiu       $a0, $a0, -0xD6C
    ctx->r4 = ADD32(ctx->r4, -0XD6C);
    after_9:
    // 0x801FF230: b           L_801FF284
    // 0x801FF234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FF284;
    // 0x801FF234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FF238: sw          $zero, 0x34($t4)
    MEM_W(0X34, ctx->r12) = 0;
L_801FF23C:
    // 0x801FF23C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x801FF240: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801FF244: sw          $zero, 0x70($t2)
    MEM_W(0X70, ctx->r10) = 0;
    // 0x801FF248: lhu         $t5, 0x16($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X16);
    // 0x801FF24C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x801FF250: bgez        $t5, L_801FF264
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801FF254: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801FF264;
    }
    // 0x801FF254: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801FF258: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FF25C: nop

    // 0x801FF260: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_801FF264:
    // 0x801FF264: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801FF268: lhu         $t6, 0x16($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X16);
    // 0x801FF26C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF270: addiu       $a0, $a0, -0xBA0
    ctx->r4 = ADD32(ctx->r4, -0XBA0);
    // 0x801FF274: addiu       $t8, $t6, 0x20
    ctx->r24 = ADD32(ctx->r14, 0X20);
    // 0x801FF278: jal         0x8003521C
    // 0x801FF27C: sh          $t8, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801FF27C: sh          $t8, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r24;
    after_10:
L_801FF280:
    // 0x801FF280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FF284:
    // 0x801FF284: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801FF288: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801FF28C: jr          $ra
    // 0x801FF290: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801FF290: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80202EA4_62E284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202EA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80202EA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80202EAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80202EB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80202EB4: jal         0x80203F88
    // 0x80202EB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x80202EB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80202EBC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80202EC0: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x80202EC4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80202EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202ECC: lbu         $t7, 0xB($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XB);
    // 0x80202ED0: beq         $t7, $zero, L_80202F38
    if (ctx->r15 == 0) {
        // 0x80202ED4: nop
    
            goto L_80202F38;
    }
    // 0x80202ED4: nop

    // 0x80202ED8: jal         0x801D31F0
    // 0x80202EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_1;
    // 0x80202EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80202EE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80202EE4: nop

    // 0x80202EE8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80202EEC: nop

    // 0x80202EF0: bc1f        L_80202F40
    if (!c1cs) {
        // 0x80202EF4: nop
    
            goto L_80202F40;
    }
    // 0x80202EF4: nop

    // 0x80202EF8: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x80202EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202F00: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80202F04: bgtz        $t9, L_80202F40
    if (SIGNED(ctx->r25) > 0) {
        // 0x80202F08: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_80202F40;
    }
    // 0x80202F08: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x80202F0C: jal         0x80203BC0
    // 0x80202F10: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_2;
    // 0x80202F10: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    after_2:
    // 0x80202F14: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x80202F18: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x80202F1C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80202F20: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80202F24: bne         $at, $zero, L_80202F30
    if (ctx->r1 != 0) {
        // 0x80202F28: sw          $t2, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r10;
            goto L_80202F30;
    }
    // 0x80202F28: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x80202F2C: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
L_80202F30:
    // 0x80202F30: b           L_80202F40
    // 0x80202F34: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
        goto L_80202F40;
    // 0x80202F34: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
L_80202F38:
    // 0x80202F38: jal         0x801D31F0
    // 0x80202F3C: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_3;
    // 0x80202F3C: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    after_3:
L_80202F40:
    // 0x80202F40: jal         0x802043E4
    // 0x80202F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802043E4_62F7C4(rdram, ctx);
        goto after_4;
    // 0x80202F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80202F48: beq         $v0, $zero, L_80202F7C
    if (ctx->r2 == 0) {
        // 0x80202F4C: addiu       $t6, $zero, 0x8
        ctx->r14 = ADD32(0, 0X8);
            goto L_80202F7C;
    }
    // 0x80202F4C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80202F50: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x80202F54: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80202F58: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80202F5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80202F60: sw          $zero, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = 0;
    // 0x80202F64: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x80202F68: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x80202F6C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80202F70: addiu       $a0, $a0, 0x2F90
    ctx->r4 = ADD32(ctx->r4, 0X2F90);
    // 0x80202F74: jal         0x8003521C
    // 0x80202F78: sb          $t7, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80202F78: sb          $t7, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r15;
    after_5:
L_80202F7C:
    // 0x80202F7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80202F80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80202F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80202F88: jr          $ra
    // 0x80202F8C: nop

    TRACE_RETURN()
    return;
    // 0x80202F8C: nop

;}
RECOMP_FUNC void func_802004D0_62B8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802004D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802004D4: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x802004D8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802004DC: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x802004E0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802004E4: bne         $t7, $zero, L_802004F8
    if (ctx->r15 != 0) {
        // 0x802004E8: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_802004F8;
    }
    // 0x802004E8: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x802004EC: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x802004F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802004F4: sb          $t9, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r25;
L_802004F8:
    // 0x802004F8: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x802004FC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80200500: jr          $ra
    // 0x80200504: sb          $t1, 0x2C1($t2)
    MEM_B(0X2C1, ctx->r10) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x80200504: sb          $t1, 0x2C1($t2)
    MEM_B(0X2C1, ctx->r10) = ctx->r9;
;}
RECOMP_FUNC void func_801CB620_5F6A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB628: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB62C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CB630: jal         0x8003FF50
    // 0x801CB634: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB634: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x801CB638: jal         0x80013940
    // 0x801CB63C: nop

    func_80013940_14540(rdram, ctx);
        goto after_1;
    // 0x801CB63C: nop

    after_1:
    // 0x801CB640: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB644: jal         0x8003521C
    // 0x801CB648: addiu       $a0, $a0, -0x49A4
    ctx->r4 = ADD32(ctx->r4, -0X49A4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801CB648: addiu       $a0, $a0, -0x49A4
    ctx->r4 = ADD32(ctx->r4, -0X49A4);
    after_2:
    // 0x801CB64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB654: jr          $ra
    // 0x801CB658: nop

    TRACE_RETURN()
    return;
    // 0x801CB658: nop

;}
RECOMP_FUNC void func_801EEF40_61A320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEF40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801EEF44: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801EEF48: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801EEF4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EEF50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EEF54: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801EEF58: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801EEF5C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801EEF60: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801EEF64: lw          $s0, 0x1D8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1D8);
    // 0x801EEF68: beql        $s0, $zero, L_801EF258
    if (ctx->r16 == 0) {
        // 0x801EEF6C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EF258;
    }
    goto skip_0;
    // 0x801EEF6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EEF70: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801EEF74: beql        $v0, $zero, L_801EF258
    if (ctx->r2 == 0) {
        // 0x801EEF78: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EF258;
    }
    goto skip_1;
    // 0x801EEF78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801EEF7C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x801EEF80: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x801EEF84: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x801EEF88: andi        $t7, $v1, 0x1000
    ctx->r15 = ctx->r3 & 0X1000;
    // 0x801EEF8C: beql        $t7, $zero, L_801EEF9C
    if (ctx->r15 == 0) {
        // 0x801EEF90: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_801EEF9C;
    }
    goto skip_2;
    // 0x801EEF90: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    skip_2:
    // 0x801EEF94: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801EEF98: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
L_801EEF9C:
    // 0x801EEF9C: beq         $t8, $zero, L_801EF24C
    if (ctx->r24 == 0) {
        // 0x801EEFA0: nop
    
            goto L_801EF24C;
    }
    // 0x801EEFA0: nop

    // 0x801EEFA4: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x801EEFA8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x801EEFAC: lbu         $t0, 0x4C($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4C);
    // 0x801EEFB0: addiu       $t1, $t0, -0x32
    ctx->r9 = ADD32(ctx->r8, -0X32);
    // 0x801EEFB4: sltiu       $at, $t1, 0x2A
    ctx->r1 = ctx->r9 < 0X2A ? 1 : 0;
    // 0x801EEFB8: beq         $at, $zero, L_801EEFD4
    if (ctx->r1 == 0) {
        // 0x801EEFBC: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_801EEFD4;
    }
    // 0x801EEFBC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801EEFC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EEFC4: addu        $at, $at, $t1
    gpr jr_addend_801EEFCC = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801EEFC8: lw          $t1, -0x1D4C($at)
    ctx->r9 = ADD32(ctx->r1, -0X1D4C);
    // 0x801EEFCC: jr          $t1
    // 0x801EEFD0: nop

    switch (jr_addend_801EEFCC >> 2) {
        case 0: goto L_801EF028; break;
        case 1: goto L_801EEFD4; break;
        case 2: goto L_801EEFD4; break;
        case 3: goto L_801EEFD4; break;
        case 4: goto L_801EEFD4; break;
        case 5: goto L_801EEFD4; break;
        case 6: goto L_801EEFD4; break;
        case 7: goto L_801EEFD4; break;
        case 8: goto L_801EEFD4; break;
        case 9: goto L_801EEFD4; break;
        case 10: goto L_801EEFD4; break;
        case 11: goto L_801EF0E8; break;
        case 12: goto L_801EF158; break;
        case 13: goto L_801EEFD4; break;
        case 14: goto L_801EEFD4; break;
        case 15: goto L_801EEFD4; break;
        case 16: goto L_801EEFD4; break;
        case 17: goto L_801EEFD4; break;
        case 18: goto L_801EEFD4; break;
        case 19: goto L_801EEFD4; break;
        case 20: goto L_801EF120; break;
        case 21: goto L_801EEFD4; break;
        case 22: goto L_801EEFD4; break;
        case 23: goto L_801EEFD4; break;
        case 24: goto L_801EEFD4; break;
        case 25: goto L_801EEFD4; break;
        case 26: goto L_801EEFD4; break;
        case 27: goto L_801EEFD4; break;
        case 28: goto L_801EEFD4; break;
        case 29: goto L_801EEFD4; break;
        case 30: goto L_801EEFD4; break;
        case 31: goto L_801EF088; break;
        case 32: goto L_801EEFD4; break;
        case 33: goto L_801EEFD4; break;
        case 34: goto L_801EEFD4; break;
        case 35: goto L_801EEFD4; break;
        case 36: goto L_801EEFD4; break;
        case 37: goto L_801EEFD4; break;
        case 38: goto L_801EEFD4; break;
        case 39: goto L_801EEFD4; break;
        case 40: goto L_801EF1A0; break;
        case 41: goto L_801EF0F0; break;
        default: switch_error(__func__, 0x801EEFCC, 0x8020E2B4);
    }
    // 0x801EEFD0: nop

L_801EEFD4:
    // 0x801EEFD4: andi        $t2, $v1, 0x20
    ctx->r10 = ctx->r3 & 0X20;
    // 0x801EEFD8: bne         $t2, $zero, L_801EF018
    if (ctx->r10 != 0) {
        // 0x801EEFDC: nop
    
            goto L_801EF018;
    }
    // 0x801EEFDC: nop

    // 0x801EEFE0: jal         0x801D5938
    // 0x801EEFE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_0;
    // 0x801EEFE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801EEFE8: jal         0x801EF2C8
    // 0x801EEFEC: nop

    func_801EF2C8_61A6A8(rdram, ctx);
        goto after_1;
    // 0x801EEFEC: nop

    after_1:
    // 0x801EEFF0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EEFF4: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EEFF8: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    // 0x801EEFFC: addiu       $a1, $a1, -0x7E74
    ctx->r5 = ADD32(ctx->r5, -0X7E74);
    // 0x801EF000: jal         0x8003522C
    // 0x801EF004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801EF004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801EF008: jal         0x801CEE80
    // 0x801EF00C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_3;
    // 0x801EF00C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x801EF010: b           L_801EF1D8
    // 0x801EF014: nop

        goto L_801EF1D8;
    // 0x801EF014: nop

L_801EF018:
    // 0x801EF018: jal         0x801D3894
    // 0x801EF01C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_4;
    // 0x801EF01C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801EF020: b           L_801EF258
    // 0x801EF024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF258;
    // 0x801EF024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF028:
    // 0x801EF028: andi        $t4, $v1, 0x9
    ctx->r12 = ctx->r3 & 0X9;
    // 0x801EF02C: bne         $t4, $zero, L_801EF078
    if (ctx->r12 != 0) {
        // 0x801EF030: nop
    
            goto L_801EF078;
    }
    // 0x801EF030: nop

    // 0x801EF034: lw          $t5, 0xE4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XE4);
    // 0x801EF038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF03C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801EF040: jal         0x801D5938
    // 0x801EF044: sw          $t6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r14;
    func_801D5938_600D18(rdram, ctx);
        goto after_5;
    // 0x801EF044: sw          $t6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r14;
    after_5:
    // 0x801EF048: jal         0x801EF2C8
    // 0x801EF04C: nop

    func_801EF2C8_61A6A8(rdram, ctx);
        goto after_6;
    // 0x801EF04C: nop

    after_6:
    // 0x801EF050: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EF054: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EF058: sw          $t7, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r15;
    // 0x801EF05C: addiu       $a1, $a1, -0x7E74
    ctx->r5 = ADD32(ctx->r5, -0X7E74);
    // 0x801EF060: jal         0x8003522C
    // 0x801EF064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_7;
    // 0x801EF064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801EF068: jal         0x801CEE80
    // 0x801EF06C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_8;
    // 0x801EF06C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x801EF070: b           L_801EF1D8
    // 0x801EF074: nop

        goto L_801EF1D8;
    // 0x801EF074: nop

L_801EF078:
    // 0x801EF078: jal         0x801D3894
    // 0x801EF07C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_9;
    // 0x801EF07C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801EF080: b           L_801EF258
    // 0x801EF084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF258;
    // 0x801EF084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF088:
    // 0x801EF088: andi        $t8, $v1, 0x12
    ctx->r24 = ctx->r3 & 0X12;
    // 0x801EF08C: bne         $t8, $zero, L_801EF0D8
    if (ctx->r24 != 0) {
        // 0x801EF090: nop
    
            goto L_801EF0D8;
    }
    // 0x801EF090: nop

    // 0x801EF094: lw          $t9, 0xE4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XE4);
    // 0x801EF098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF09C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801EF0A0: jal         0x801D5938
    // 0x801EF0A4: sw          $t0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r8;
    func_801D5938_600D18(rdram, ctx);
        goto after_10;
    // 0x801EF0A4: sw          $t0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r8;
    after_10:
    // 0x801EF0A8: jal         0x801EF2C8
    // 0x801EF0AC: nop

    func_801EF2C8_61A6A8(rdram, ctx);
        goto after_11;
    // 0x801EF0AC: nop

    after_11:
    // 0x801EF0B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801EF0B4: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EF0B8: sw          $t1, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r9;
    // 0x801EF0BC: addiu       $a1, $a1, -0x7E74
    ctx->r5 = ADD32(ctx->r5, -0X7E74);
    // 0x801EF0C0: jal         0x8003522C
    // 0x801EF0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_12;
    // 0x801EF0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801EF0C8: jal         0x801CEE80
    // 0x801EF0CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_13;
    // 0x801EF0CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_13:
    // 0x801EF0D0: b           L_801EF1D8
    // 0x801EF0D4: nop

        goto L_801EF1D8;
    // 0x801EF0D4: nop

L_801EF0D8:
    // 0x801EF0D8: jal         0x801D3894
    // 0x801EF0DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_14;
    // 0x801EF0DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x801EF0E0: b           L_801EF258
    // 0x801EF0E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF258;
    // 0x801EF0E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF0E8:
    // 0x801EF0E8: jal         0x801CEE80
    // 0x801EF0EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_15;
    // 0x801EF0EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_15:
L_801EF0F0:
    // 0x801EF0F0: jal         0x801EF2C8
    // 0x801EF0F4: nop

    func_801EF2C8_61A6A8(rdram, ctx);
        goto after_16;
    // 0x801EF0F4: nop

    after_16:
    // 0x801EF0F8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x801EF0FC: sw          $t2, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r10;
    // 0x801EF100: jal         0x801D5938
    // 0x801EF104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_17;
    // 0x801EF104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x801EF108: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EF10C: addiu       $a1, $a1, -0x7C98
    ctx->r5 = ADD32(ctx->r5, -0X7C98);
    // 0x801EF110: jal         0x8003522C
    // 0x801EF114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_18;
    // 0x801EF114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x801EF118: b           L_801EF1D8
    // 0x801EF11C: nop

        goto L_801EF1D8;
    // 0x801EF11C: nop

L_801EF120:
    // 0x801EF120: jal         0x801CEE80
    // 0x801EF124: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_19;
    // 0x801EF124: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_19:
    // 0x801EF128: jal         0x801EF2C8
    // 0x801EF12C: nop

    func_801EF2C8_61A6A8(rdram, ctx);
        goto after_20;
    // 0x801EF12C: nop

    after_20:
    // 0x801EF130: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801EF134: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    // 0x801EF138: jal         0x801D5938
    // 0x801EF13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_21;
    // 0x801EF13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x801EF140: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EF144: addiu       $a1, $a1, -0x7C18
    ctx->r5 = ADD32(ctx->r5, -0X7C18);
    // 0x801EF148: jal         0x8003522C
    // 0x801EF14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_22;
    // 0x801EF14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x801EF150: b           L_801EF1D8
    // 0x801EF154: nop

        goto L_801EF1D8;
    // 0x801EF154: nop

L_801EF158:
    // 0x801EF158: lw          $t4, 0xE0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE0);
    // 0x801EF15C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EF160: beq         $t4, $at, L_801EF1D8
    if (ctx->r12 == ctx->r1) {
        // 0x801EF164: nop
    
            goto L_801EF1D8;
    }
    // 0x801EF164: nop

    // 0x801EF168: jal         0x801CEE80
    // 0x801EF16C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_23;
    // 0x801EF16C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_23:
    // 0x801EF170: jal         0x801EF2C8
    // 0x801EF174: nop

    func_801EF2C8_61A6A8(rdram, ctx);
        goto after_24;
    // 0x801EF174: nop

    after_24:
    // 0x801EF178: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801EF17C: sw          $t5, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r13;
    // 0x801EF180: jal         0x801D5938
    // 0x801EF184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_25;
    // 0x801EF184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x801EF188: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EF18C: addiu       $a1, $a1, -0x7208
    ctx->r5 = ADD32(ctx->r5, -0X7208);
    // 0x801EF190: jal         0x8003522C
    // 0x801EF194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_26;
    // 0x801EF194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x801EF198: b           L_801EF1D8
    // 0x801EF19C: nop

        goto L_801EF1D8;
    // 0x801EF19C: nop

L_801EF1A0:
    // 0x801EF1A0: lw          $t6, 0xE0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE0);
    // 0x801EF1A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801EF1A8: beq         $t6, $at, L_801EF1D8
    if (ctx->r14 == ctx->r1) {
        // 0x801EF1AC: nop
    
            goto L_801EF1D8;
    }
    // 0x801EF1AC: nop

    // 0x801EF1B0: jal         0x801EF280
    // 0x801EF1B4: nop

    func_801EF280_61A660(rdram, ctx);
        goto after_27;
    // 0x801EF1B4: nop

    after_27:
    // 0x801EF1B8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801EF1BC: sw          $t7, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r15;
    // 0x801EF1C0: jal         0x801D5938
    // 0x801EF1C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_28;
    // 0x801EF1C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x801EF1C8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EF1CC: addiu       $a1, $a1, -0x61F0
    ctx->r5 = ADD32(ctx->r5, -0X61F0);
    // 0x801EF1D0: jal         0x8003522C
    // 0x801EF1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_29;
    // 0x801EF1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
L_801EF1D8:
    // 0x801EF1D8: jal         0x801D36CC
    // 0x801EF1DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_30;
    // 0x801EF1DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x801EF1E0: jal         0x801D3954
    // 0x801EF1E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801D3954_5FED34(rdram, ctx);
        goto after_31;
    // 0x801EF1E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_31:
    // 0x801EF1E8: bne         $v0, $zero, L_801EF248
    if (ctx->r2 != 0) {
        // 0x801EF1EC: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_801EF248;
    }
    // 0x801EF1EC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x801EF1F0: lbu         $t9, 0x4C($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4C);
    // 0x801EF1F4: addiu       $t0, $t9, -0x32
    ctx->r8 = ADD32(ctx->r25, -0X32);
    // 0x801EF1F8: sltiu       $at, $t0, 0x20
    ctx->r1 = ctx->r8 < 0X20 ? 1 : 0;
    // 0x801EF1FC: beq         $at, $zero, L_801EF240
    if (ctx->r1 == 0) {
        // 0x801EF200: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_801EF240;
    }
    // 0x801EF200: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x801EF204: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EF208: addu        $at, $at, $t0
    gpr jr_addend_801EF210 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801EF20C: lw          $t0, -0x1CA4($at)
    ctx->r8 = ADD32(ctx->r1, -0X1CA4);
    // 0x801EF210: jr          $t0
    // 0x801EF214: nop

    switch (jr_addend_801EF210 >> 2) {
        case 0: goto L_801EF218; break;
        case 1: goto L_801EF218; break;
        case 2: goto L_801EF240; break;
        case 3: goto L_801EF240; break;
        case 4: goto L_801EF240; break;
        case 5: goto L_801EF240; break;
        case 6: goto L_801EF240; break;
        case 7: goto L_801EF240; break;
        case 8: goto L_801EF240; break;
        case 9: goto L_801EF240; break;
        case 10: goto L_801EF218; break;
        case 11: goto L_801EF240; break;
        case 12: goto L_801EF240; break;
        case 13: goto L_801EF240; break;
        case 14: goto L_801EF240; break;
        case 15: goto L_801EF240; break;
        case 16: goto L_801EF240; break;
        case 17: goto L_801EF240; break;
        case 18: goto L_801EF240; break;
        case 19: goto L_801EF240; break;
        case 20: goto L_801EF240; break;
        case 21: goto L_801EF240; break;
        case 22: goto L_801EF240; break;
        case 23: goto L_801EF240; break;
        case 24: goto L_801EF240; break;
        case 25: goto L_801EF240; break;
        case 26: goto L_801EF240; break;
        case 27: goto L_801EF240; break;
        case 28: goto L_801EF240; break;
        case 29: goto L_801EF240; break;
        case 30: goto L_801EF218; break;
        case 31: goto L_801EF218; break;
        default: switch_error(__func__, 0x801EF210, 0x8020E35C);
    }
    // 0x801EF214: nop

L_801EF218:
    // 0x801EF218: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801EF21C: addiu       $t1, $t1, -0x7C98
    ctx->r9 = ADD32(ctx->r9, -0X7C98);
    // 0x801EF220: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801EF224: jal         0x801D5938
    // 0x801EF228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_32;
    // 0x801EF228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x801EF22C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x801EF230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF234: sw          $zero, 0x34($t2)
    MEM_W(0X34, ctx->r10) = 0;
    // 0x801EF238: jal         0x8003522C
    // 0x801EF23C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8003522C_35E2C(rdram, ctx);
        goto after_33;
    // 0x801EF23C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_33:
L_801EF240:
    // 0x801EF240: jal         0x801EF280
    // 0x801EF244: nop

    func_801EF280_61A660(rdram, ctx);
        goto after_34;
    // 0x801EF244: nop

    after_34:
L_801EF248:
    // 0x801EF248: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_801EF24C:
    // 0x801EF24C: jal         0x801D3894
    // 0x801EF250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_35;
    // 0x801EF250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x801EF254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF258:
    // 0x801EF258: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EF25C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801EF260: jr          $ra
    // 0x801EF264: nop

    TRACE_RETURN()
    return;
    // 0x801EF264: nop

;}
RECOMP_FUNC void func_801F4A38_61FE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4A38: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801F4A3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4A48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4A4C: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801F4A50: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801F4A54: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F4A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F4A5C: jal         0x801F72B4
    // 0x801F4A60: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_801F72B4_622694(rdram, ctx);
        goto after_0;
    // 0x801F4A60: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x801F4A64: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801F4A68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F4A6C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801F4A70: lwc1        $f6, 0x74($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X74);
    // 0x801F4A74: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F4A78: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801F4A7C: nop

    // 0x801F4A80: bc1fl       L_801F4ABC
    if (!c1cs) {
        // 0x801F4A84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4ABC;
    }
    goto skip_0;
    // 0x801F4A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F4A88: jal         0x801F718C
    // 0x801F4A8C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801F718C_62256C(rdram, ctx);
        goto after_1;
    // 0x801F4A8C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x801F4A90: bne         $v0, $zero, L_801F4AB8
    if (ctx->r2 != 0) {
        // 0x801F4A94: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_801F4AB8;
    }
    // 0x801F4A94: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801F4A98: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F4A9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F4AA0: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x801F4AA4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4AA8: sw          $t7, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r15;
    // 0x801F4AAC: addiu       $a0, $a0, 0x4AC8
    ctx->r4 = ADD32(ctx->r4, 0X4AC8);
    // 0x801F4AB0: jal         0x8003521C
    // 0x801F4AB4: swc1        $f10, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F4AB4: swc1        $f10, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f10.u32l;
    after_2:
L_801F4AB8:
    // 0x801F4AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4ABC:
    // 0x801F4ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4AC0: jr          $ra
    // 0x801F4AC4: nop

    TRACE_RETURN()
    return;
    // 0x801F4AC4: nop

;}
RECOMP_FUNC void func_801D86B4_603A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D86B4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D86B8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D86BC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D86C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D86C4: lbu         $v1, 0x166($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X166);
    // 0x801D86C8: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x801D86CC: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801D86D0: blez        $v1, L_801D86F4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D86D4: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_801D86F4;
    }
    // 0x801D86D4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801D86D8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801D86DC: bne         $t7, $zero, L_801D86F4
    if (ctx->r15 != 0) {
        // 0x801D86E0: sb          $t6, 0x26($v0)
        MEM_B(0X26, ctx->r2) = ctx->r14;
            goto L_801D86F4;
    }
    // 0x801D86E0: sb          $t6, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r14;
    // 0x801D86E4: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x801D86E8: sb          $zero, 0x25($v0)
    MEM_B(0X25, ctx->r2) = 0;
    // 0x801D86EC: sb          $zero, 0x27($v0)
    MEM_B(0X27, ctx->r2) = 0;
    // 0x801D86F0: sb          $zero, 0x28($v0)
    MEM_B(0X28, ctx->r2) = 0;
L_801D86F4:
    // 0x801D86F4: lbu         $a0, 0x24($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X24);
    // 0x801D86F8: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x801D86FC: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801D8700: beq         $a0, $zero, L_801D8728
    if (ctx->r4 == 0) {
        // 0x801D8704: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_801D8728;
    }
    // 0x801D8704: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801D8708: beq         $a0, $at, L_801D879C
    if (ctx->r4 == ctx->r1) {
        // 0x801D870C: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_801D879C;
    }
    // 0x801D870C: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x801D8710: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D8714: beq         $v1, $at, L_801D87EC
    if (ctx->r3 == ctx->r1) {
        // 0x801D8718: sll         $t3, $a1, 2
        ctx->r11 = S32(ctx->r5 << 2);
            goto L_801D87EC;
    }
    // 0x801D8718: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x801D871C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D8720: beq         $v1, $at, L_801D886C
    if (ctx->r3 == ctx->r1) {
        // 0x801D8724: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_801D886C;
    }
    // 0x801D8724: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_801D8728:
    // 0x801D8728: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x801D872C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x801D8730: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x801D8734: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x801D8738: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x801D873C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801D8740: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x801D8744: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x801D8748: lhu         $t1, 0x307C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X307C);
    // 0x801D874C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D8750: addiu       $t5, $zero, 0x12
    ctx->r13 = ADD32(0, 0X12);
    // 0x801D8754: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x801D8758: beq         $t2, $zero, L_801D8870
    if (ctx->r10 == 0) {
        // 0x801D875C: nop
    
            goto L_801D8870;
    }
    // 0x801D875C: nop

    // 0x801D8760: sb          $t4, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r12;
    // 0x801D8764: sb          $t5, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r13;
    // 0x801D8768: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x801D876C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801D8770: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D8774: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x801D8778: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x801D877C: lhu         $t9, 0x307C($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X307C);
    // 0x801D8780: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x801D8784: beq         $t0, $zero, L_801D8794
    if (ctx->r8 == 0) {
        // 0x801D8788: nop
    
            goto L_801D8794;
    }
    // 0x801D8788: nop

    // 0x801D878C: jr          $ra
    // 0x801D8790: sb          $t1, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x801D8790: sb          $t1, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r9;
L_801D8794:
    // 0x801D8794: jr          $ra
    // 0x801D8798: sb          $t2, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x801D8798: sb          $t2, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r10;
L_801D879C:
    // 0x801D879C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x801D87A0: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x801D87A4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x801D87A8: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x801D87AC: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801D87B0: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x801D87B4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801D87B8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x801D87BC: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x801D87C0: lhu         $t7, 0x307C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X307C);
    // 0x801D87C4: lbu         $t8, 0x27($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X27);
    // 0x801D87C8: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    // 0x801D87CC: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x801D87D0: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x801D87D4: beq         $t9, $zero, L_801D8870
    if (ctx->r25 == 0) {
        // 0x801D87D8: nop
    
            goto L_801D8870;
    }
    // 0x801D87D8: nop

    // 0x801D87DC: sb          $t0, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r8;
    // 0x801D87E0: sb          $t1, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r9;
    // 0x801D87E4: jr          $ra
    // 0x801D87E8: sb          $zero, 0x28($v0)
    MEM_B(0X28, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x801D87E8: sb          $zero, 0x28($v0)
    MEM_B(0X28, ctx->r2) = 0;
L_801D87EC:
    // 0x801D87EC: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x801D87F0: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x801D87F4: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x801D87F8: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x801D87FC: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801D8800: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801D8804: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801D8808: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x801D880C: addu        $t5, $t4, $a3
    ctx->r13 = ADD32(ctx->r12, ctx->r7);
    // 0x801D8810: lhu         $t6, 0x307A($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X307A);
    // 0x801D8814: lbu         $t7, 0x27($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X27);
    // 0x801D8818: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x801D881C: beql        $t8, $zero, L_801D8858
    if (ctx->r24 == 0) {
        // 0x801D8820: sb          $zero, 0x26($v0)
        MEM_B(0X26, ctx->r2) = 0;
            goto L_801D8858;
    }
    goto skip_0;
    // 0x801D8820: sb          $zero, 0x26($v0)
    MEM_B(0X26, ctx->r2) = 0;
    skip_0:
    // 0x801D8824: lbu         $t9, 0x28($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X28);
    // 0x801D8828: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801D882C: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x801D8830: slti        $at, $t1, 0x11
    ctx->r1 = SIGNED(ctx->r9) < 0X11 ? 1 : 0;
    // 0x801D8834: bne         $at, $zero, L_801D8870
    if (ctx->r1 != 0) {
        // 0x801D8838: sb          $t0, 0x28($v0)
        MEM_B(0X28, ctx->r2) = ctx->r8;
            goto L_801D8870;
    }
    // 0x801D8838: sb          $t0, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r8;
    // 0x801D883C: lbu         $t2, 0x24($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X24);
    // 0x801D8840: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x801D8844: sb          $t4, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r12;
    // 0x801D8848: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801D884C: jr          $ra
    // 0x801D8850: sb          $t3, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x801D8850: sb          $t3, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r11;
    // 0x801D8854: sb          $zero, 0x26($v0)
    MEM_B(0X26, ctx->r2) = 0;
L_801D8858:
    // 0x801D8858: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x801D885C: sb          $zero, 0x25($v0)
    MEM_B(0X25, ctx->r2) = 0;
    // 0x801D8860: sb          $zero, 0x27($v0)
    MEM_B(0X27, ctx->r2) = 0;
    // 0x801D8864: jr          $ra
    // 0x801D8868: sb          $zero, 0x28($v0)
    MEM_B(0X28, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x801D8868: sb          $zero, 0x28($v0)
    MEM_B(0X28, ctx->r2) = 0;
L_801D886C:
    // 0x801D886C: sb          $t5, 0x25($v0)
    MEM_B(0X25, ctx->r2) = ctx->r13;
L_801D8870:
    // 0x801D8870: jr          $ra
    // 0x801D8874: nop

    TRACE_RETURN()
    return;
    // 0x801D8874: nop

;}
RECOMP_FUNC void func_8020814C_63352C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020814C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80208150: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80208154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80208158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020815C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80208160: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80208164: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80208168: addiu       $t9, $zero, 0x136
    ctx->r25 = ADD32(0, 0X136);
    // 0x8020816C: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x80208170: sb          $t6, 0x2C0($v1)
    MEM_B(0X2C0, ctx->r3) = ctx->r14;
    // 0x80208174: sb          $zero, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = 0;
    // 0x80208178: sb          $zero, 0x2C2($v1)
    MEM_B(0X2C2, ctx->r3) = 0;
    // 0x8020817C: sb          $zero, 0x2C3($v1)
    MEM_B(0X2C3, ctx->r3) = 0;
    // 0x80208180: sw          $t7, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->r15;
    // 0x80208184: sw          $t8, 0x1F0($v1)
    MEM_W(0X1F0, ctx->r3) = ctx->r24;
    // 0x80208188: sw          $t9, 0x1F4($v1)
    MEM_W(0X1F4, ctx->r3) = ctx->r25;
    // 0x8020818C: sw          $t0, 0x1F8($v1)
    MEM_W(0X1F8, ctx->r3) = ctx->r8;
    // 0x80208190: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    // 0x80208194: jal         0x80038BC8
    // 0x80208198: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x80208198: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8020819C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x802081A0: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x802081A4: jal         0x80034EF8
    // 0x802081A8: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x802081A8: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    after_1:
    // 0x802081AC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802081B0: addiu       $a0, $a0, -0x7E14
    ctx->r4 = ADD32(ctx->r4, -0X7E14);
    // 0x802081B4: jal         0x80034DD8
    // 0x802081B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x802081B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802081BC: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x802081C0: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x802081C4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802081C8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802081CC: sw          $zero, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = 0;
    // 0x802081D0: addiu       $a1, $a1, 0x1ED8
    ctx->r5 = ADD32(ctx->r5, 0X1ED8);
    // 0x802081D4: jal         0x8003522C
    // 0x802081D8: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x802081D8: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    after_3:
    // 0x802081DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802081E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802081E4: jr          $ra
    // 0x802081E8: nop

    TRACE_RETURN()
    return;
    // 0x802081E8: nop

;}
RECOMP_FUNC void func_801F234C_61D72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F234C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F2350: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F2354: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F2358: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F235C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F2360: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801F2364: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F2368: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F236C: jal         0x801D365C
    // 0x801F2370: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_0;
    // 0x801F2370: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F2374: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F2378: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F237C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801F2380: lw          $t8, 0x1CC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1CC);
    // 0x801F2384: bne         $v0, $t8, L_801F23BC
    if (ctx->r2 != ctx->r24) {
        // 0x801F2388: nop
    
            goto L_801F23BC;
    }
    // 0x801F2388: nop

    // 0x801F238C: lbu         $t0, 0xE($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XE);
    // 0x801F2390: bne         $t0, $zero, L_801F23BC
    if (ctx->r8 != 0) {
        // 0x801F2394: nop
    
            goto L_801F23BC;
    }
    // 0x801F2394: nop

    // 0x801F2398: lbu         $t1, 0x2C5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801F239C: bne         $t1, $zero, L_801F23BC
    if (ctx->r9 != 0) {
        // 0x801F23A0: nop
    
            goto L_801F23BC;
    }
    // 0x801F23A0: nop

    // 0x801F23A4: lbu         $t2, 0x30($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X30);
    // 0x801F23A8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801F23AC: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    // 0x801F23B0: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x801F23B4: jal         0x80038BC8
    // 0x801F23B8: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801F23B8: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    after_1:
L_801F23BC:
    // 0x801F23BC: jal         0x801D36C4
    // 0x801F23C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_2;
    // 0x801F23C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F23C4: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    // 0x801F23C8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801F23CC: bgez        $t5, L_801F2404
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801F23D0: sw          $t5, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r13;
            goto L_801F2404;
    }
    // 0x801F23D0: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x801F23D4: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x801F23D8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801F23DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F23E0: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x801F23E4: jal         0x801D60E4
    // 0x801F23E8: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_3;
    // 0x801F23E8: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    after_3:
    // 0x801F23EC: jal         0x801F732C
    // 0x801F23F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_4;
    // 0x801F23F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F23F4: beq         $v0, $zero, L_801F2404
    if (ctx->r2 == 0) {
        // 0x801F23F8: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801F2404;
    }
    // 0x801F23F8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F23FC: jal         0x8003521C
    // 0x801F2400: addiu       $a0, $a0, 0x2418
    ctx->r4 = ADD32(ctx->r4, 0X2418);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F2400: addiu       $a0, $a0, 0x2418
    ctx->r4 = ADD32(ctx->r4, 0X2418);
    after_5:
L_801F2404:
    // 0x801F2404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F2408: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F240C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F2410: jr          $ra
    // 0x801F2414: nop

    TRACE_RETURN()
    return;
    // 0x801F2414: nop

;}
RECOMP_FUNC void func_801D0C70_5FC050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0C70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D0C74: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D0C78: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D0C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0C80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D0C84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D0C88: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D0C8C: lwc1        $f0, 0x188($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X188);
    // 0x801D0C90: lui         $at, 0x4079
    ctx->r1 = S32(0X4079 << 16);
    // 0x801D0C94: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D0C98: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D0C9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D0CA0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801D0CA4: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D0CA8: bc1fl       L_801D0CC0
    if (!c1cs) {
        // 0x801D0CAC: cvt.d.s     $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
            goto L_801D0CC0;
    }
    goto skip_0;
    // 0x801D0CAC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    skip_0:
    // 0x801D0CB0: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x801D0CB4: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D0CB8: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x801D0CBC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
L_801D0CC0:
    // 0x801D0CC0: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801D0CC4: nop

    // 0x801D0CC8: bc1fl       L_801D0CFC
    if (!c1cs) {
        // 0x801D0CCC: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801D0CFC;
    }
    goto skip_1;
    // 0x801D0CCC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x801D0CD0: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x801D0CD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D0CD8: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x801D0CDC: beq         $a0, $zero, L_801D0CF8
    if (ctx->r4 == 0) {
        // 0x801D0CE0: swc1        $f8, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
            goto L_801D0CF8;
    }
    // 0x801D0CE0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x801D0CE4: jal         0x80024888
    // 0x801D0CE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80024888_25488(rdram, ctx);
        goto after_0;
    // 0x801D0CE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D0CEC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0CF0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D0CF4: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
L_801D0CF8:
    // 0x801D0CF8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_801D0CFC:
    // 0x801D0CFC: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D0D00: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D0D04: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D0D08: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D0D0C: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D0D10: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D0D14: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D0D18: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x801D0D1C: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x801D0D20: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D0D24: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x801D0D28: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x801D0D2C: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801D0D30: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x801D0D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D0D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0D3C: jr          $ra
    // 0x801D0D40: nop

    TRACE_RETURN()
    return;
    // 0x801D0D40: nop

;}
RECOMP_FUNC void func_801ED8D4_618CB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED8D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801ED8D8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801ED8DC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801ED8E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801ED8E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801ED8E8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801ED8EC: lbu         $t6, 0x2C1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C1);
    // 0x801ED8F0: addiu       $t0, $v0, 0xA0
    ctx->r8 = ADD32(ctx->r2, 0XA0);
    // 0x801ED8F4: bnel        $t6, $zero, L_801ED9DC
    if (ctx->r14 != 0) {
        // 0x801ED8F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801ED9DC;
    }
    goto skip_0;
    // 0x801ED8F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801ED8FC: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801ED900: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801ED904: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801ED908: blez        $v0, L_801ED93C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801ED90C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_801ED93C;
    }
    // 0x801ED90C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801ED910: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
    // 0x801ED914: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x801ED918: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x801ED91C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x801ED920: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801ED924: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x801ED928: jal         0x801D15BC
    // 0x801ED92C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801ED92C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x801ED930: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801ED934: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801ED938: lw          $v0, 0x7C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X7C);
L_801ED93C:
    // 0x801ED93C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x801ED940: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x801ED944: bgtz        $v0, L_801ED9D8
    if (SIGNED(ctx->r2) > 0) {
        // 0x801ED948: sw          $t2, 0x7C($t3)
        MEM_W(0X7C, ctx->r11) = ctx->r10;
            goto L_801ED9D8;
    }
    // 0x801ED948: sw          $t2, 0x7C($t3)
    MEM_W(0X7C, ctx->r11) = ctx->r10;
    // 0x801ED94C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801ED950: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801ED954: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ED958: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801ED95C: jal         0x801D4EB8
    // 0x801ED960: lw          $a3, 0x14($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X14);
    func_801D4EB8_600298(rdram, ctx);
        goto after_1;
    // 0x801ED960: lw          $a3, 0x14($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X14);
    after_1:
    // 0x801ED964: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801ED968: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801ED96C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ED970: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801ED974: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801ED978: jal         0x801D4D0C
    // 0x801ED97C: nop

    func_801D4D0C_6000EC(rdram, ctx);
        goto after_2;
    // 0x801ED97C: nop

    after_2:
    // 0x801ED980: beq         $v0, $zero, L_801ED9D8
    if (ctx->r2 == 0) {
        // 0x801ED984: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801ED9D8;
    }
    // 0x801ED984: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED988: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ED98C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801ED990: jal         0x801D5064
    // 0x801ED994: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    func_801D5064_600444(rdram, ctx);
        goto after_3;
    // 0x801ED994: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_3:
    // 0x801ED998: beq         $v0, $zero, L_801ED9D8
    if (ctx->r2 == 0) {
        // 0x801ED99C: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801ED9D8;
    }
    // 0x801ED99C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801ED9A0: addiu       $v0, $v0, -0x1130
    ctx->r2 = ADD32(ctx->r2, -0X1130);
    // 0x801ED9A4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801ED9A8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801ED9AC: addiu       $a1, $a1, 0x4BC0
    ctx->r5 = ADD32(ctx->r5, 0X4BC0);
    // 0x801ED9B0: sb          $zero, 0x2C1($t4)
    MEM_B(0X2C1, ctx->r12) = 0;
    // 0x801ED9B4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801ED9B8: sb          $zero, 0x2C2($t5)
    MEM_B(0X2C2, ctx->r13) = 0;
    // 0x801ED9BC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801ED9C0: sb          $zero, 0x2C3($t6)
    MEM_B(0X2C3, ctx->r14) = 0;
    // 0x801ED9C4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801ED9C8: jal         0x8003522C
    // 0x801ED9CC: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801ED9CC: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    after_4:
    // 0x801ED9D0: jal         0x80034ED4
    // 0x801ED9D4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_5;
    // 0x801ED9D4: nop

    after_5:
L_801ED9D8:
    // 0x801ED9D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801ED9DC:
    // 0x801ED9DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801ED9E0: jr          $ra
    // 0x801ED9E4: nop

    TRACE_RETURN()
    return;
    // 0x801ED9E4: nop

;}
RECOMP_FUNC void func_801D8B48_603F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8B50: jal         0x801D9030
    // 0x801D8B54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D9030_604410(rdram, ctx);
        goto after_0;
    // 0x801D8B54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D8B58: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8B5C: jal         0x8003521C
    // 0x801D8B60: addiu       $a0, $a0, -0x748C
    ctx->r4 = ADD32(ctx->r4, -0X748C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D8B60: addiu       $a0, $a0, -0x748C
    ctx->r4 = ADD32(ctx->r4, -0X748C);
    after_1:
    // 0x801D8B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8B6C: jr          $ra
    // 0x801D8B70: nop

    TRACE_RETURN()
    return;
    // 0x801D8B70: nop

;}
RECOMP_FUNC void func_801F2788_61DB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2788: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F278C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F2790: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F2794: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F2798: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F279C: jal         0x801D3018
    // 0x801F27A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F27A0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F27A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F27A8: nop

    // 0x801F27AC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F27B0: nop

    // 0x801F27B4: bc1fl       L_801F27C8
    if (!c1cs) {
        // 0x801F27B8: lui         $at, 0x4080
        ctx->r1 = S32(0X4080 << 16);
            goto L_801F27C8;
    }
    goto skip_0;
    // 0x801F27B8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    skip_0:
    // 0x801F27BC: jal         0x801F7AD0
    // 0x801F27C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F7AD0_622EB0(rdram, ctx);
        goto after_1;
    // 0x801F27C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F27C4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
L_801F27C8:
    // 0x801F27C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F27CC: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801F27D0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F27D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F27D8: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x801F27DC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x801F27E0: jal         0x801D655C
    // 0x801F27E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D655C_60193C(rdram, ctx);
        goto after_2;
    // 0x801F27E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801F27E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F27EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F27F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F27F4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801F27F8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801F27FC: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x801F2800: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801F2804: jal         0x801D5D98
    // 0x801F2808: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    func_801D5D98_601178(rdram, ctx);
        goto after_3;
    // 0x801F2808: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x801F280C: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801F2810: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F2814: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F2818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F281C: jal         0x801D5C30
    // 0x801F2820: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_4;
    // 0x801F2820: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x801F2824: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x801F2828: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F282C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F2830: bne         $t7, $zero, L_801F2840
    if (ctx->r15 != 0) {
        // 0x801F2834: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_801F2840;
    }
    // 0x801F2834: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801F2838: jal         0x8003521C
    // 0x801F283C: addiu       $a0, $a0, 0x2854
    ctx->r4 = ADD32(ctx->r4, 0X2854);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F283C: addiu       $a0, $a0, 0x2854
    ctx->r4 = ADD32(ctx->r4, 0X2854);
    after_5:
L_801F2840:
    // 0x801F2840: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F2844: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F2848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F284C: jr          $ra
    // 0x801F2850: nop

    TRACE_RETURN()
    return;
    // 0x801F2850: nop

;}
RECOMP_FUNC void func_801D3A68_5FEE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3A68: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D3A6C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D3A70: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x801D3A74: addu        $v1, $t6, $a0
    ctx->r3 = ADD32(ctx->r14, ctx->r4);
    // 0x801D3A78: bgtz        $v1, L_801D3A88
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D3A7C: sw          $v1, 0x64($v0)
        MEM_W(0X64, ctx->r2) = ctx->r3;
            goto L_801D3A88;
    }
    // 0x801D3A7C: sw          $v1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r3;
    // 0x801D3A80: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x801D3A84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D3A88:
    // 0x801D3A88: slti        $at, $v1, 0x3E7
    ctx->r1 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x801D3A8C: bne         $at, $zero, L_801D3A9C
    if (ctx->r1 != 0) {
        // 0x801D3A90: nop
    
            goto L_801D3A9C;
    }
    // 0x801D3A90: nop

    // 0x801D3A94: addiu       $v1, $zero, 0x3E7
    ctx->r3 = ADD32(0, 0X3E7);
    // 0x801D3A98: sw          $v1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r3;
L_801D3A9C:
    // 0x801D3A9C: jr          $ra
    // 0x801D3AA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3AA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801F38DC_61ECBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F38DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F38E0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F38E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F38E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F38EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F38F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F38F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F38F8: jal         0x801F76D0
    // 0x801F38FC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F38FC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x801F3900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3904: jal         0x801D31F0
    // 0x801F3908: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_1;
    // 0x801F3908: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x801F390C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F3910: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801F3914: jal         0x801D3118
    // 0x801F3918: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_2;
    // 0x801F3918: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
    // 0x801F391C: beql        $v0, $zero, L_801F3940
    if (ctx->r2 == 0) {
        // 0x801F3920: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F3940;
    }
    goto skip_0;
    // 0x801F3920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F3924: jal         0x801F9150
    // 0x801F3928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F9150_624530(rdram, ctx);
        goto after_3;
    // 0x801F3928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F392C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3930: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x801F3934: jal         0x8003521C
    // 0x801F3938: addiu       $a0, $a0, 0x3950
    ctx->r4 = ADD32(ctx->r4, 0X3950);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F3938: addiu       $a0, $a0, 0x3950
    ctx->r4 = ADD32(ctx->r4, 0X3950);
    after_4:
    // 0x801F393C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F3940:
    // 0x801F3940: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3948: jr          $ra
    // 0x801F394C: nop

    TRACE_RETURN()
    return;
    // 0x801F394C: nop

;}
RECOMP_FUNC void func_801F833C_62371C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F833C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F8340: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F8344: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801F8348: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F834C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801F8350: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801F8354: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801F8358: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F835C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F8360: jal         0x801D614C
    // 0x801F8364: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801F8364: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F8368: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801F836C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x801F8370: bgez        $v0, L_801F84B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801F8374: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801F84B8;
    }
    // 0x801F8374: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801F8378: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x801F837C: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x801F8380: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F8384: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801F8388: addiu       $v0, $v0, -0x4C80
    ctx->r2 = ADD32(ctx->r2, -0X4C80);
    // 0x801F838C: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x801F8390: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x801F8394: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F8398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F839C: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x801F83A0: mflo        $t0
    ctx->r8 = lo;
    // 0x801F83A4: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x801F83A8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x801F83AC: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x801F83B0: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x801F83B4: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801F83B8: mflo        $t3
    ctx->r11 = lo;
    // 0x801F83BC: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x801F83C0: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x801F83C4: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x801F83C8: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x801F83CC: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801F83D0: mflo        $t6
    ctx->r14 = lo;
    // 0x801F83D4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801F83D8: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x801F83DC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801F83E0: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801F83E4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801F83E8: jal         0x8000E808
    // 0x801F83EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x801F83EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x801F83F0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F83F4: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801F83F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F83FC: jal         0x8000ED00
    // 0x801F8400: lw          $a0, 0x1CC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_2;
    // 0x801F8400: lw          $a0, 0x1CC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1CC);
    after_2:
    // 0x801F8404: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x801F8408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F840C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F8410: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801F8414: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801F8418: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x801F841C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x801F8420: bc1fl       L_801F8450
    if (!c1cs) {
        // 0x801F8424: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801F8450;
    }
    goto skip_0;
    // 0x801F8424: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_0:
    // 0x801F8428: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F842C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F8430: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801F8434: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x801F8438: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x801F843C: jal         0x8000E39C
    // 0x801F8440: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801F8440: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x801F8444: b           L_801F845C
    // 0x801F8448: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
        goto L_801F845C;
    // 0x801F8448: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x801F844C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801F8450:
    // 0x801F8450: jal         0x8000E39C
    // 0x801F8454: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_4;
    // 0x801F8454: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x801F8458: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
L_801F845C:
    // 0x801F845C: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801F8460: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8464: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F8468: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801F846C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F8470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F8474: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801F8478: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801F847C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F8480: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801F8484: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F8488: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F848C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F8490: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801F8494: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F8498: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F849C: jal         0x801E006C
    // 0x801F84A0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_5;
    // 0x801F84A0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x801F84A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F84A8: jal         0x8003521C
    // 0x801F84AC: addiu       $a0, $a0, -0x7A38
    ctx->r4 = ADD32(ctx->r4, -0X7A38);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F84AC: addiu       $a0, $a0, -0x7A38
    ctx->r4 = ADD32(ctx->r4, -0X7A38);
    after_6:
    // 0x801F84B0: b           L_801F85B8
    // 0x801F84B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801F85B8;
    // 0x801F84B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F84B8:
    // 0x801F84B8: jal         0x801D365C
    // 0x801F84BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_7;
    // 0x801F84BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801F84C0: bne         $v0, $zero, L_801F84D8
    if (ctx->r2 != 0) {
        // 0x801F84C4: nop
    
            goto L_801F84D8;
    }
    // 0x801F84C4: nop

    // 0x801F84C8: jal         0x801D36CC
    // 0x801F84CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_8;
    // 0x801F84CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801F84D0: beql        $v0, $zero, L_801F85B8
    if (ctx->r2 == 0) {
        // 0x801F84D4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801F85B8;
    }
    goto skip_1;
    // 0x801F84D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
L_801F84D8:
    // 0x801F84D8: jal         0x801D3854
    // 0x801F84DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_9;
    // 0x801F84DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801F84E0: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x801F84E4: bne         $at, $zero, L_801F8508
    if (ctx->r1 != 0) {
        // 0x801F84E8: nop
    
            goto L_801F8508;
    }
    // 0x801F84E8: nop

    // 0x801F84EC: jal         0x801D3A68
    // 0x801F84F0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_10;
    // 0x801F84F0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_10:
    // 0x801F84F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801F84F8: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801F84FC: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801F8500: jal         0x801D7438
    // 0x801F8504: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_11;
    // 0x801F8504: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    after_11:
L_801F8508:
    // 0x801F8508: jal         0x801D365C
    // 0x801F850C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_12;
    // 0x801F850C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801F8510: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F8514: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F8518: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x801F851C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801F8520: lw          $t2, 0x1CC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X1CC);
    // 0x801F8524: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F8528: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F852C: bne         $v0, $t2, L_801F8568
    if (ctx->r2 != ctx->r10) {
        // 0x801F8530: addiu       $a1, $v1, 0xA0
        ctx->r5 = ADD32(ctx->r3, 0XA0);
            goto L_801F8568;
    }
    // 0x801F8530: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801F8534: lbu         $t4, 0xE($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XE);
    // 0x801F8538: bne         $t4, $zero, L_801F8570
    if (ctx->r12 != 0) {
        // 0x801F853C: nop
    
            goto L_801F8570;
    }
    // 0x801F853C: nop

    // 0x801F8540: lbu         $t5, 0x2C5($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801F8544: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801F8548: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801F854C: bne         $t5, $zero, L_801F8570
    if (ctx->r13 != 0) {
        // 0x801F8550: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_801F8570;
    }
    // 0x801F8550: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F8554: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F8558: jal         0x8000F3D8
    // 0x801F855C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_13;
    // 0x801F855C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_13:
    // 0x801F8560: b           L_801F8570
    // 0x801F8564: nop

        goto L_801F8570;
    // 0x801F8564: nop

L_801F8568:
    // 0x801F8568: jal         0x8000F3D8
    // 0x801F856C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_14;
    // 0x801F856C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_14:
L_801F8570:
    // 0x801F8570: jal         0x801CEE80
    // 0x801F8574: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_15;
    // 0x801F8574: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_15:
    // 0x801F8578: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F857C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F8580: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801F8584: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F8588: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F858C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801F8590: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801F8594: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801F8598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F859C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801F85A0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801F85A4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F85A8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801F85AC: jal         0x801E1B30
    // 0x801F85B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_16;
    // 0x801F85B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x801F85B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F85B8:
    // 0x801F85B8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801F85BC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801F85C0: jr          $ra
    // 0x801F85C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801F85C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801FBC2C_62700C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBC2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FBC30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FBC34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FBC38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FBC3C: jal         0x801D3018
    // 0x801FBC40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FBC40: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FBC44: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FBC48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FBC4C: jal         0x801D3F00
    // 0x801FBC50: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801FBC50: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x801FBC54: beq         $v0, $zero, L_801FBC98
    if (ctx->r2 == 0) {
        // 0x801FBC58: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801FBC98;
    }
    // 0x801FBC58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FBC5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FBC60: jal         0x801D3E90
    // 0x801FBC64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3E90_5FF270(rdram, ctx);
        goto after_2;
    // 0x801FBC64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x801FBC68: beq         $v0, $zero, L_801FBC98
    if (ctx->r2 == 0) {
        // 0x801FBC6C: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_801FBC98;
    }
    // 0x801FBC6C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FBC70: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801FBC74: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FBC78: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801FBC7C: lui         $a2, 0xC2A0
    ctx->r6 = S32(0XC2A0 << 16);
    // 0x801FBC80: lui         $a3, 0xC42F
    ctx->r7 = S32(0XC42F << 16);
    // 0x801FBC84: jal         0x8000E39C
    // 0x801FBC88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801FBC88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_3:
    // 0x801FBC8C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBC90: jal         0x8003521C
    // 0x801FBC94: addiu       $a0, $a0, -0x4358
    ctx->r4 = ADD32(ctx->r4, -0X4358);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FBC94: addiu       $a0, $a0, -0x4358
    ctx->r4 = ADD32(ctx->r4, -0X4358);
    after_4:
L_801FBC98:
    // 0x801FBC98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FBC9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FBCA0: jr          $ra
    // 0x801FBCA4: nop

    TRACE_RETURN()
    return;
    // 0x801FBCA4: nop

;}
