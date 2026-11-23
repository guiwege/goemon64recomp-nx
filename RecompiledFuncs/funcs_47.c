#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80221220_5DC6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221220: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80221224: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80221228: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8022122C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x80221230: lui         $t8, 0xD
    ctx->r24 = S32(0XD << 16);
    // 0x80221234: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80221238: sw          $a0, -0x764($at)
    MEM_W(-0X764, ctx->r1) = ctx->r4;
    // 0x8022123C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80221240: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80221244: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80221248: lw          $t8, -0x764($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X764);
    // 0x8022124C: sw          $t8, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->r24;
    // 0x80221250: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x80221254: jr          $ra
    // 0x80221258: sb          $zero, 0xCD($t9)
    MEM_B(0XCD, ctx->r25) = 0;
    TRACE_RETURN()
    return;
    // 0x80221258: sb          $zero, 0xCD($t9)
    MEM_B(0XCD, ctx->r25) = 0;
;}
RECOMP_FUNC void func_80222A48_5DDF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222A48: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80222A4C: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80222A50: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80222A54: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80222A58: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80222A5C: nop

    // 0x80222A60: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80222A64: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80222A68: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80222A6C: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80222A70: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80222A74: lwc1        $f18, 0x0($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80222A78: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80222A7C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80222A80: nop

    // 0x80222A84: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80222A88: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80222A8C: jr          $ra
    // 0x80222A90: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80222A90: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80210B1C_5CBFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210B20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210B24: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210B28: jal         0x80013AC4
    // 0x80210B2C: addiu       $a0, $a0, -0x1A7C
    ctx->r4 = ADD32(ctx->r4, -0X1A7C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210B2C: addiu       $a0, $a0, -0x1A7C
    ctx->r4 = ADD32(ctx->r4, -0X1A7C);
    after_0:
    // 0x80210B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210B38: jr          $ra
    // 0x80210B3C: nop

    TRACE_RETURN()
    return;
    // 0x80210B3C: nop

;}
RECOMP_FUNC void func_8020E404_5C98D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E40C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E410: jal         0x80013AC4
    // 0x8020E414: addiu       $a0, $a0, -0x3A18
    ctx->r4 = ADD32(ctx->r4, -0X3A18);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E414: addiu       $a0, $a0, -0x3A18
    ctx->r4 = ADD32(ctx->r4, -0X3A18);
    after_0:
    // 0x8020E418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E41C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E420: jr          $ra
    // 0x8020E424: nop

    TRACE_RETURN()
    return;
    // 0x8020E424: nop

;}
RECOMP_FUNC void func_8020E914_5C9DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E91C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E920: jal         0x80013AC4
    // 0x8020E924: addiu       $a0, $a0, -0x36AC
    ctx->r4 = ADD32(ctx->r4, -0X36AC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E924: addiu       $a0, $a0, -0x36AC
    ctx->r4 = ADD32(ctx->r4, -0X36AC);
    after_0:
    // 0x8020E928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E930: jr          $ra
    // 0x8020E934: nop

    TRACE_RETURN()
    return;
    // 0x8020E934: nop

;}
RECOMP_FUNC void func_8021021C_5CB6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021021C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210224: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210228: jal         0x80013AC4
    // 0x8021022C: addiu       $a0, $a0, -0x2200
    ctx->r4 = ADD32(ctx->r4, -0X2200);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021022C: addiu       $a0, $a0, -0x2200
    ctx->r4 = ADD32(ctx->r4, -0X2200);
    after_0:
    // 0x80210230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210238: jr          $ra
    // 0x8021023C: nop

    TRACE_RETURN()
    return;
    // 0x8021023C: nop

;}
RECOMP_FUNC void func_80210F78_5CC448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210F80: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210F84: jal         0x80013AC4
    // 0x80210F88: addiu       $a0, $a0, -0x17BC
    ctx->r4 = ADD32(ctx->r4, -0X17BC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210F88: addiu       $a0, $a0, -0x17BC
    ctx->r4 = ADD32(ctx->r4, -0X17BC);
    after_0:
    // 0x80210F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210F94: jr          $ra
    // 0x80210F98: nop

    TRACE_RETURN()
    return;
    // 0x80210F98: nop

;}
RECOMP_FUNC void func_80224ABC_5DFF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224ABC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80224AC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80224AC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80224AC8: addiu       $t6, $a0, 0xAE
    ctx->r14 = ADD32(ctx->r4, 0XAE);
    // 0x80224ACC: addiu       $t7, $a0, 0xAD
    ctx->r15 = ADD32(ctx->r4, 0XAD);
    // 0x80224AD0: addiu       $t8, $a0, 0xAC
    ctx->r24 = ADD32(ctx->r4, 0XAC);
    // 0x80224AD4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80224AD8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80224ADC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80224AE0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80224AE4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80224AE8: jal         0x80224560
    // 0x80224AEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80224560_5DFA30(rdram, ctx);
        goto after_0;
    // 0x80224AEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80224AF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80224AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80224AF8: jr          $ra
    // 0x80224AFC: nop

    TRACE_RETURN()
    return;
    // 0x80224AFC: nop

;}
RECOMP_FUNC void func_8020EB54_5CA024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EB54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EB58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EB5C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EB60: jal         0x80013AC4
    // 0x8020EB64: addiu       $a0, $a0, -0x357C
    ctx->r4 = ADD32(ctx->r4, -0X357C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EB64: addiu       $a0, $a0, -0x357C
    ctx->r4 = ADD32(ctx->r4, -0X357C);
    after_0:
    // 0x8020EB68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EB6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EB70: jr          $ra
    // 0x8020EB74: nop

    TRACE_RETURN()
    return;
    // 0x8020EB74: nop

;}
RECOMP_FUNC void func_80212EA8_5CE378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212EA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80212EAC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80212EB0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80212EB4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80212EB8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80212EBC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80212EC0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80212EC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80212EC8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80212ECC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80212ED0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80212ED4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80212ED8: lw          $a3, 0xBC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XBC);
    // 0x80212EDC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80212EE0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80212EE4: bnel        $a3, $zero, L_80212F00
    if (ctx->r7 != 0) {
        // 0x80212EE8: lhu         $v1, 0x8A($s4)
        ctx->r3 = MEM_HU(ctx->r20, 0X8A);
            goto L_80212F00;
    }
    goto skip_0;
    // 0x80212EE8: lhu         $v1, 0x8A($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X8A);
    skip_0:
    // 0x80212EEC: jal         0x80034ED4
    // 0x80212EF0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80212EF0: nop

    after_0:
    // 0x80212EF4: b           L_80213098
    // 0x80212EF8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80213098;
    // 0x80212EF8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80212EFC: lhu         $v1, 0x8A($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X8A);
L_80212F00:
    // 0x80212F00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80212F04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80212F08: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x80212F0C: beq         $t6, $zero, L_80212F5C
    if (ctx->r14 == 0) {
        // 0x80212F10: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80212F5C;
    }
    // 0x80212F10: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80212F14: andi        $t7, $a0, 0x2
    ctx->r15 = ctx->r4 & 0X2;
    // 0x80212F18: subu        $t8, $a1, $t7
    ctx->r24 = SUB32(ctx->r5, ctx->r15);
    // 0x80212F1C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80212F20: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x80212F24: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80212F28: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80212F2C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80212F30: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80212F34: lhu         $t9, 0x8A($s4)
    ctx->r25 = MEM_HU(ctx->r20, 0X8A);
    // 0x80212F38: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80212F3C: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80212F40: subu        $t1, $a1, $t0
    ctx->r9 = SUB32(ctx->r5, ctx->r8);
    // 0x80212F44: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80212F48: nop

    // 0x80212F4C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80212F50: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80212F54: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x80212F58: lhu         $v1, 0x8A($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X8A);
L_80212F5C:
    // 0x80212F5C: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x80212F60: bne         $v1, $zero, L_80213094
    if (ctx->r3 != 0) {
        // 0x80212F64: sh          $t2, 0x8A($s4)
        MEM_H(0X8A, ctx->r20) = ctx->r10;
            goto L_80213094;
    }
    // 0x80212F64: sh          $t2, 0x8A($s4)
    MEM_H(0X8A, ctx->r20) = ctx->r10;
    // 0x80212F68: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80212F6C: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x80212F70: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x80212F74: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x80212F78: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80212F7C: addiu       $fp, $fp, 0x3E10
    ctx->r30 = ADD32(ctx->r30, 0X3E10);
    // 0x80212F80: addiu       $s6, $s6, 0x71A8
    ctx->r22 = ADD32(ctx->r22, 0X71A8);
    // 0x80212F84: addiu       $s5, $s5, 0x27EC
    ctx->r21 = ADD32(ctx->r21, 0X27EC);
    // 0x80212F88: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80212F8C: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x80212F90: addiu       $s7, $zero, 0xAA
    ctx->r23 = ADD32(0, 0XAA);
    // 0x80212F94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80212F98:
    // 0x80212F98: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80212F9C: jalr        $s6
    // 0x80212FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_1;
    // 0x80212FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80212FA4: beq         $v0, $zero, L_80212FF4
    if (ctx->r2 == 0) {
        // 0x80212FA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80212FF4;
    }
    // 0x80212FA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80212FAC: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80212FB0: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x80212FB4: addiu       $s3, $s3, 0x3EA0
    ctx->r19 = ADD32(ctx->r19, 0X3EA0);
    // 0x80212FB8: mflo        $s1
    ctx->r17 = lo;
    // 0x80212FBC: andi        $t3, $s1, 0xFFFF
    ctx->r11 = ctx->r17 & 0XFFFF;
    // 0x80212FC0: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80212FC4: jalr        $fp
    // 0x80212FC8: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_2;
    // 0x80212FC8: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    after_2:
    // 0x80212FCC: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80212FD0: swc1        $f20, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f20.u32l;
    // 0x80212FD4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80212FD8: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x80212FDC: jalr        $s3
    // 0x80212FE0: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_3;
    // 0x80212FE0: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x80212FE4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80212FE8: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x80212FEC: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x80212FF0: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
L_80212FF4:
    // 0x80212FF4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80212FF8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80212FFC: bnel        $s2, $at, L_80212F98
    if (ctx->r18 != ctx->r1) {
        // 0x80213000: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80212F98;
    }
    goto skip_1;
    // 0x80213000: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_1:
    // 0x80213004: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213008: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x8021300C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80213010: jal         0x802171A8
    // 0x80213014: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_4;
    // 0x80213014: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80213018: beq         $v0, $zero, L_80213028
    if (ctx->r2 == 0) {
        // 0x8021301C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80213028;
    }
    // 0x8021301C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213020: jal         0x80219E08
    // 0x80213024: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_80219E08_5D52D8(rdram, ctx);
        goto after_5;
    // 0x80213024: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
L_80213028:
    // 0x80213028: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x8021302C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80213030: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x80213034: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x80213038: addiu       $s1, $s1, -0x3410
    ctx->r17 = ADD32(ctx->r17, -0X3410);
    // 0x8021303C: addiu       $s0, $s0, -0xBE0
    ctx->r16 = ADD32(ctx->r16, -0XBE0);
    // 0x80213040: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80213044: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80213048: addiu       $a0, $zero, 0x26E
    ctx->r4 = ADD32(0, 0X26E);
    // 0x8021304C: jalr        $s0
    // 0x80213050: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x80213050: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    after_6:
    // 0x80213054: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80213058: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    // 0x8021305C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80213060: jalr        $s0
    // 0x80213064: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x80213064: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    after_7:
    // 0x80213068: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8021306C: addiu       $at, $zero, -0x285
    ctx->r1 = ADD32(0, -0X285);
    // 0x80213070: lw          $t5, 0x68($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X68);
    // 0x80213074: sw          $zero, 0x38($t4)
    MEM_W(0X38, ctx->r12) = 0;
    // 0x80213078: sw          $zero, 0x34($t4)
    MEM_W(0X34, ctx->r12) = 0;
    // 0x8021307C: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80213080: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80213084: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80213088: sw          $t6, 0x68($t4)
    MEM_W(0X68, ctx->r12) = ctx->r14;
    // 0x8021308C: jal         0x80034ED4
    // 0x80213090: sw          $t8, 0x68($t4)
    MEM_W(0X68, ctx->r12) = ctx->r24;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_8;
    // 0x80213090: sw          $t8, 0x68($t4)
    MEM_W(0X68, ctx->r12) = ctx->r24;
    after_8:
L_80213094:
    // 0x80213094: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80213098:
    // 0x80213098: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8021309C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802130A0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802130A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802130A8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802130AC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802130B0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802130B4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802130B8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802130BC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802130C0: jr          $ra
    // 0x802130C4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x802130C4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_802103A8_5CB878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802103A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802103AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802103B0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802103B4: jal         0x80013AC4
    // 0x802103B8: addiu       $a0, $a0, -0x2078
    ctx->r4 = ADD32(ctx->r4, -0X2078);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802103B8: addiu       $a0, $a0, -0x2078
    ctx->r4 = ADD32(ctx->r4, -0X2078);
    after_0:
    // 0x802103BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802103C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802103C4: jr          $ra
    // 0x802103C8: nop

    TRACE_RETURN()
    return;
    // 0x802103C8: nop

;}
RECOMP_FUNC void func_80216AB8_5D1F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216AB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80216ABC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80216AC0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80216AC4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80216AC8: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80216ACC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80216AD0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80216AD4: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x80216AD8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80216ADC: beq         $t6, $zero, L_80216CC0
    if (ctx->r14 == 0) {
        // 0x80216AE0: sll         $t7, $v0, 7
        ctx->r15 = S32(ctx->r2 << 7);
            goto L_80216CC0;
    }
    // 0x80216AE0: sll         $t7, $v0, 7
    ctx->r15 = S32(ctx->r2 << 7);
    // 0x80216AE4: bltz        $t7, L_80216BF0
    if (SIGNED(ctx->r15) < 0) {
        // 0x80216AE8: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_80216BF0;
    }
    // 0x80216AE8: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80216AEC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80216AF0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80216AF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80216AF8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80216AFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216B00: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80216B04: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80216B08: addiu       $s1, $zero, -0x5
    ctx->r17 = ADD32(0, -0X5);
    // 0x80216B0C: lbu         $v0, 0x7C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7C);
L_80216B10:
    // 0x80216B10: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x80216B14: bnel        $t8, $zero, L_80216BE0
    if (ctx->r24 != 0) {
        // 0x80216B18: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80216BE0;
    }
    goto skip_0;
    // 0x80216B18: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80216B1C: lhu         $t9, 0x7E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X7E);
    // 0x80216B20: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216B24: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216B28: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80216B2C: and         $t3, $v0, $s1
    ctx->r11 = ctx->r2 & ctx->r17;
    // 0x80216B30: bgez        $t9, L_80216B44
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80216B34: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80216B44;
    }
    // 0x80216B34: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80216B38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80216B3C: nop

    // 0x80216B40: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80216B44:
    // 0x80216B44: mul.s       $f16, $f8, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x80216B48: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80216B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80216B50: div.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f24.fl);
    // 0x80216B54: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80216B58: bne         $t0, $zero, L_80216BA0
    if (ctx->r8 != 0) {
        // 0x80216B5C: swc1        $f6, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
            goto L_80216BA0;
    }
    // 0x80216B5C: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x80216B60: jal         0x8001B5AC
    // 0x80216B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80216B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80216B68: sub.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80216B6C: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216B70: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80216B74: nop

    // 0x80216B78: bc1fl       L_80216BE0
    if (!c1cs) {
        // 0x80216B7C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80216BE0;
    }
    goto skip_1;
    // 0x80216B7C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x80216B80: jal         0x8001B5AC
    // 0x80216B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x80216B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80216B88: lbu         $t1, 0x7C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X7C);
    // 0x80216B8C: sub.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80216B90: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x80216B94: sb          $t2, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r10;
    // 0x80216B98: b           L_80216BDC
    // 0x80216B9C: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
        goto L_80216BDC;
    // 0x80216B9C: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
L_80216BA0:
    // 0x80216BA0: jal         0x8001B5AC
    // 0x80216BA4: sb          $t3, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r11;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_2;
    // 0x80216BA4: sb          $t3, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r11;
    after_2:
    // 0x80216BA8: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216BAC: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80216BB0: nop

    // 0x80216BB4: bc1fl       L_80216BE0
    if (!c1cs) {
        // 0x80216BB8: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80216BE0;
    }
    goto skip_2;
    // 0x80216BB8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x80216BBC: jal         0x8001B5AC
    // 0x80216BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_3;
    // 0x80216BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80216BC4: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216BC8: lbu         $t4, 0x7C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X7C);
    // 0x80216BCC: sub.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x80216BD0: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x80216BD4: sb          $t5, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r13;
    // 0x80216BD8: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
L_80216BDC:
    // 0x80216BDC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80216BE0:
    // 0x80216BE0: bnel        $s0, $zero, L_80216B10
    if (ctx->r16 != 0) {
        // 0x80216BE4: lbu         $v0, 0x7C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X7C);
            goto L_80216B10;
    }
    goto skip_3;
    // 0x80216BE4: lbu         $v0, 0x7C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7C);
    skip_3:
    // 0x80216BE8: b           L_80216CC4
    // 0x80216BEC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80216CC4;
    // 0x80216BEC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80216BF0:
    // 0x80216BF0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80216BF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80216BF8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80216BFC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80216C00: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80216C04: addiu       $s1, $zero, -0x5
    ctx->r17 = ADD32(0, -0X5);
    // 0x80216C08: lbu         $v0, 0x7C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7C);
L_80216C0C:
    // 0x80216C0C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80216C10: bnel        $t6, $zero, L_80216CB8
    if (ctx->r14 != 0) {
        // 0x80216C14: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80216CB8;
    }
    goto skip_4;
    // 0x80216C14: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_4:
    // 0x80216C18: lhu         $t7, 0x7E($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X7E);
    // 0x80216C1C: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216C20: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80216C24: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80216C28: bgez        $t7, L_80216C3C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80216C2C: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80216C3C;
    }
    // 0x80216C2C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80216C30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80216C34: nop

    // 0x80216C38: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_80216C3C:
    // 0x80216C3C: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x80216C40: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80216C44: div.s       $f6, $f18, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f24.fl);
    // 0x80216C48: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80216C4C: bne         $t8, $zero, L_80216C78
    if (ctx->r24 != 0) {
        // 0x80216C50: swc1        $f8, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
            goto L_80216C78;
    }
    // 0x80216C50: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x80216C54: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216C58: ori         $t9, $v0, 0x2
    ctx->r25 = ctx->r2 | 0X2;
    // 0x80216C5C: c.le.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl <= ctx->f20.fl;
    // 0x80216C60: nop

    // 0x80216C64: bc1fl       L_80216CB8
    if (!c1cs) {
        // 0x80216C68: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80216CB8;
    }
    goto skip_5;
    // 0x80216C68: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x80216C6C: swc1        $f20, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f20.u32l;
    // 0x80216C70: b           L_80216CB4
    // 0x80216C74: sb          $t9, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r25;
        goto L_80216CB4;
    // 0x80216C74: sb          $t9, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r25;
L_80216C78:
    // 0x80216C78: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216C7C: and         $t0, $v0, $s1
    ctx->r8 = ctx->r2 & ctx->r17;
    // 0x80216C80: sb          $t0, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r8;
    // 0x80216C84: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x80216C88: nop

    // 0x80216C8C: bc1fl       L_80216CB8
    if (!c1cs) {
        // 0x80216C90: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80216CB8;
    }
    goto skip_6;
    // 0x80216C90: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_6:
    // 0x80216C94: jal         0x8001B5AC
    // 0x80216C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_4;
    // 0x80216C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80216C9C: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80216CA0: lbu         $t1, 0x7C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X7C);
    // 0x80216CA4: add.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80216CA8: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x80216CAC: sb          $t2, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r10;
    // 0x80216CB0: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
L_80216CB4:
    // 0x80216CB4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80216CB8:
    // 0x80216CB8: bnel        $s0, $zero, L_80216C0C
    if (ctx->r16 != 0) {
        // 0x80216CBC: lbu         $v0, 0x7C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X7C);
            goto L_80216C0C;
    }
    goto skip_7;
    // 0x80216CBC: lbu         $v0, 0x7C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7C);
    skip_7:
L_80216CC0:
    // 0x80216CC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80216CC4:
    // 0x80216CC4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80216CC8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80216CCC: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80216CD0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80216CD4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80216CD8: jr          $ra
    // 0x80216CDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80216CDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021D6E4_5D8BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D6E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021D6E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021D6EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021D6F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021D6F4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021D6F8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8021D6FC: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8021D700: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x8021D704: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8021D708: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8021D70C: jal         0x8001B6A4
    // 0x8021D710: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_0;
    // 0x8021D710: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8021D714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021D718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021D71C: jr          $ra
    // 0x8021D720: nop

    TRACE_RETURN()
    return;
    // 0x8021D720: nop

;}
RECOMP_FUNC void func_80210E58_5CC328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210E58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210E60: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210E64: jal         0x80013AC4
    // 0x80210E68: addiu       $a0, $a0, -0x1878
    ctx->r4 = ADD32(ctx->r4, -0X1878);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210E68: addiu       $a0, $a0, -0x1878
    ctx->r4 = ADD32(ctx->r4, -0X1878);
    after_0:
    // 0x80210E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210E74: jr          $ra
    // 0x80210E78: nop

    TRACE_RETURN()
    return;
    // 0x80210E78: nop

;}
RECOMP_FUNC void func_80211194_5CC664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021119C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802111A0: jal         0x80013AC4
    // 0x802111A4: addiu       $a0, $a0, -0x1674
    ctx->r4 = ADD32(ctx->r4, -0X1674);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802111A4: addiu       $a0, $a0, -0x1674
    ctx->r4 = ADD32(ctx->r4, -0X1674);
    after_0:
    // 0x802111A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802111AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802111B0: jr          $ra
    // 0x802111B4: nop

    TRACE_RETURN()
    return;
    // 0x802111B4: nop

;}
RECOMP_FUNC void func_80210558_5CBA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210558: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021055C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210560: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210564: jal         0x80013AC4
    // 0x80210568: addiu       $a0, $a0, -0x1ED0
    ctx->r4 = ADD32(ctx->r4, -0X1ED0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210568: addiu       $a0, $a0, -0x1ED0
    ctx->r4 = ADD32(ctx->r4, -0X1ED0);
    after_0:
    // 0x8021056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210574: jr          $ra
    // 0x80210578: nop

    TRACE_RETURN()
    return;
    // 0x80210578: nop

;}
RECOMP_FUNC void func_8021A764_5D5C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A764: beq         $a3, $zero, L_8021A78C
    if (ctx->r7 == 0) {
        // 0x8021A768: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_8021A78C;
    }
    // 0x8021A768: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021A76C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021A770: beq         $a3, $at, L_8021A7AC
    if (ctx->r7 == ctx->r1) {
        // 0x8021A774: sll         $t4, $a2, 3
        ctx->r12 = S32(ctx->r6 << 3);
            goto L_8021A7AC;
    }
    // 0x8021A774: sll         $t4, $a2, 3
    ctx->r12 = S32(ctx->r6 << 3);
    // 0x8021A778: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021A77C: beq         $a3, $at, L_8021A7C8
    if (ctx->r7 == ctx->r1) {
        // 0x8021A780: sll         $t8, $a2, 3
        ctx->r24 = S32(ctx->r6 << 3);
            goto L_8021A7C8;
    }
    // 0x8021A780: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x8021A784: jr          $ra
    // 0x8021A788: nop

    TRACE_RETURN()
    return;
    // 0x8021A788: nop

L_8021A78C:
    // 0x8021A78C: lw          $t6, 0x48($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X48);
    // 0x8021A790: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8021A794: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x8021A798: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8021A79C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8021A7A0: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x8021A7A4: jr          $ra
    // 0x8021A7A8: sw          $t8, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x8021A7A8: sw          $t8, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r24;
L_8021A7AC:
    // 0x8021A7AC: lw          $t1, 0x40($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X40);
    // 0x8021A7B0: lui         $at, 0xF700
    ctx->r1 = S32(0XF700 << 16);
    // 0x8021A7B4: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x8021A7B8: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x8021A7BC: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x8021A7C0: jr          $ra
    // 0x8021A7C4: sw          $t3, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x8021A7C4: sw          $t3, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r11;
L_8021A7C8:
    // 0x8021A7C8: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x8021A7CC: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x8021A7D0: addu        $t0, $v0, $t8
    ctx->r8 = ADD32(ctx->r2, ctx->r24);
    // 0x8021A7D4: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8021A7D8: addu        $t9, $t7, $at
    ctx->r25 = ADD32(ctx->r15, ctx->r1);
    // 0x8021A7DC: sw          $t9, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r25;
    // 0x8021A7E0: jr          $ra
    // 0x8021A7E4: nop

    TRACE_RETURN()
    return;
    // 0x8021A7E4: nop

;}
RECOMP_FUNC void func_8020EB78_5CA048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EB78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EB7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EB80: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EB84: jal         0x80013AC4
    // 0x8020EB88: addiu       $a0, $a0, -0x3560
    ctx->r4 = ADD32(ctx->r4, -0X3560);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EB88: addiu       $a0, $a0, -0x3560
    ctx->r4 = ADD32(ctx->r4, -0X3560);
    after_0:
    // 0x8020EB8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EB90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EB94: jr          $ra
    // 0x8020EB98: nop

    TRACE_RETURN()
    return;
    // 0x8020EB98: nop

;}
RECOMP_FUNC void func_80225250_5E0720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225250: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225254: lw          $v1, -0x4BF0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4BF0);
    // 0x80225258: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022525C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225260: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80225264: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80225268: bne         $v1, $at, L_80225278
    if (ctx->r3 != ctx->r1) {
        // 0x8022526C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80225278;
    }
    // 0x8022526C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225270: b           L_80225394
    // 0x80225274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80225394;
    // 0x80225274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225278:
    // 0x80225278: bnel        $v1, $zero, L_80225304
    if (ctx->r3 != 0) {
        // 0x8022527C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80225304;
    }
    goto skip_0;
    // 0x8022527C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x80225280: jal         0x80224EF8
    // 0x80225284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80224EF8_5E03C8(rdram, ctx);
        goto after_0;
    // 0x80225284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80225288: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022528C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80225290: addiu       $a1, $a1, -0x53C8
    ctx->r5 = ADD32(ctx->r5, -0X53C8);
    // 0x80225294: addiu       $a0, $a0, -0x4BE0
    ctx->r4 = ADD32(ctx->r4, -0X4BE0);
    // 0x80225298: jal         0x80048984
    // 0x8022529C: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x8022529C: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    after_1:
    // 0x802252A0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802252A4: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x802252A8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802252AC: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x802252B0: jal         0x800042AC
    // 0x802252B4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_800042AC_4EAC(rdram, ctx);
        goto after_2;
    // 0x802252B4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_2:
    // 0x802252B8: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x802252BC: addiu       $a3, $a3, -0x3A38
    ctx->r7 = ADD32(ctx->r7, -0X3A38);
    // 0x802252C0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x802252C4: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x802252C8: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x802252CC: addu        $v0, $t6, $t0
    ctx->r2 = ADD32(ctx->r14, ctx->r8);
    // 0x802252D0: lhu         $t7, 0x30AA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X30AA);
    // 0x802252D4: lhu         $t8, 0x307A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X307A);
    // 0x802252D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802252DC: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x802252E0: sh          $t9, 0x30F2($v0)
    MEM_H(0X30F2, ctx->r2) = ctx->r25;
    // 0x802252E4: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x802252E8: addu        $v0, $t1, $t0
    ctx->r2 = ADD32(ctx->r9, ctx->r8);
    // 0x802252EC: lhu         $t2, 0x30AC($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X30AC);
    // 0x802252F0: lhu         $t3, 0x307C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X307C);
    // 0x802252F4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x802252F8: sh          $t4, 0x30F4($v0)
    MEM_H(0X30F4, ctx->r2) = ctx->r12;
    // 0x802252FC: lw          $v1, -0x4BF0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4BF0);
    // 0x80225300: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80225304:
    // 0x80225304: bnel        $v1, $at, L_80225398
    if (ctx->r3 != ctx->r1) {
        // 0x80225308: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80225398;
    }
    goto skip_1;
    // 0x80225308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8022530C: jal         0x80225000
    // 0x80225310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80225000_5E04D0(rdram, ctx);
        goto after_3;
    // 0x80225310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80225314: lhu         $t6, 0x9C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X9C);
    // 0x80225318: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022531C: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x80225320: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225324: addiu       $a3, $a3, -0x3A38
    ctx->r7 = ADD32(ctx->r7, -0X3A38);
    // 0x80225328: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x8022532C: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x80225330: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x80225334: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225338: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022533C: addiu       $a1, $a1, -0x53C0
    ctx->r5 = ADD32(ctx->r5, -0X53C0);
    // 0x80225340: addiu       $a0, $a0, -0x4BE0
    ctx->r4 = ADD32(ctx->r4, -0X4BE0);
    // 0x80225344: mflo        $t7
    ctx->r15 = lo;
    // 0x80225348: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8022534C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80225350: sh          $v0, 0x30F4($t9)
    MEM_H(0X30F4, ctx->r25) = ctx->r2;
    // 0x80225354: lhu         $t3, 0x9C($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X9C);
    // 0x80225358: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x8022535C: lhu         $t1, 0xEA($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XEA);
    // 0x80225360: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225364: mflo        $t4
    ctx->r12 = lo;
    // 0x80225368: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x8022536C: addu        $t5, $t6, $t0
    ctx->r13 = ADD32(ctx->r14, ctx->r8);
    // 0x80225370: sh          $t1, 0x30F2($t5)
    MEM_H(0X30F2, ctx->r13) = ctx->r9;
    // 0x80225374: jal         0x80048984
    // 0x80225378: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x80225378: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    after_4:
    // 0x8022537C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80225380: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x80225384: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80225388: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x8022538C: jal         0x800042AC
    // 0x80225390: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_800042AC_4EAC(rdram, ctx);
        goto after_5;
    // 0x80225390: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_5:
L_80225394:
    // 0x80225394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80225398:
    // 0x80225398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022539C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802253A0: jr          $ra
    // 0x802253A4: nop

    TRACE_RETURN()
    return;
    // 0x802253A4: nop

;}
RECOMP_FUNC void func_8020D724_5C8BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020D728: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8020D72C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8020D730: addiu       $t6, $t6, -0x3340
    ctx->r14 = ADD32(ctx->r14, -0X3340);
    // 0x8020D734: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D738: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8020D73C: sw          $t6, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = ctx->r14;
    // 0x8020D740: addiu       $s0, $s0, -0x33D0
    ctx->r16 = ADD32(ctx->r16, -0X33D0);
    // 0x8020D744: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8020D748: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020D74C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020D750: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8020D754: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8020D758: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020D75C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020D760: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020D764: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8020D768: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8020D76C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x8020D770: sw          $a0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r4;
    // 0x8020D774: addiu       $s1, $s1, 0x3C50
    ctx->r17 = ADD32(ctx->r17, 0X3C50);
    // 0x8020D778: sb          $t7, 0xD8($s0)
    MEM_B(0XD8, ctx->r16) = ctx->r15;
    // 0x8020D77C: sh          $zero, 0x10A($s0)
    MEM_H(0X10A, ctx->r16) = 0;
    // 0x8020D780: sw          $v0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r2;
    // 0x8020D784: sw          $t8, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r24;
    // 0x8020D788: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    // 0x8020D78C: sw          $t9, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r25;
    // 0x8020D790: sw          $v0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r2;
    // 0x8020D794: sw          $t0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r8;
    // 0x8020D798: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8020D79C: lw          $a0, 0x90($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X90);
    // 0x8020D7A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020D7A4: jal         0x80034E08
    // 0x8020D7A8: swc1        $f4, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f4.u32l;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020D7A8: swc1        $f4, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f4.u32l;
    after_0:
    // 0x8020D7AC: sw          $v0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r2;
    // 0x8020D7B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020D7B4: jal         0x80034DD8
    // 0x8020D7B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x8020D7B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8020D7BC: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x8020D7C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020D7C4: jal         0x80034DD8
    // 0x8020D7C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x8020D7C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8020D7CC: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x8020D7D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020D7D4: jal         0x80034DD8
    // 0x8020D7D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_3;
    // 0x8020D7D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8020D7DC: sw          $v0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r2;
    // 0x8020D7E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D7E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8020D7E8: jal         0x80034E08
    // 0x8020D7EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_4;
    // 0x8020D7EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8020D7F0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8020D7F4: lw          $a0, 0x90($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X90);
    // 0x8020D7F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8020D7FC: jal         0x80034E08
    // 0x8020D800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_5;
    // 0x8020D800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8020D804: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
    // 0x8020D808: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x8020D80C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8020D810: jal         0x80034E08
    // 0x8020D814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_6;
    // 0x8020D814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8020D818: jal         0x80023EE4
    // 0x8020D81C: sw          $v0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r2;
    func_80023EE4_24AE4(rdram, ctx);
        goto after_7;
    // 0x8020D81C: sw          $v0, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r2;
    after_7:
    // 0x8020D820: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D824: sw          $zero, 0x158($s0)
    MEM_W(0X158, ctx->r16) = 0;
    // 0x8020D828: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x8020D82C: jal         0x8003521C
    // 0x8020D830: addiu       $a0, $a0, -0x27B8
    ctx->r4 = ADD32(ctx->r4, -0X27B8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x8020D830: addiu       $a0, $a0, -0x27B8
    ctx->r4 = ADD32(ctx->r4, -0X27B8);
    after_8:
    // 0x8020D834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8020D838: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8020D83C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8020D840: jr          $ra
    // 0x8020D844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8020D844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80210C60_5CC130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210C68: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210C6C: jal         0x80013AC4
    // 0x80210C70: addiu       $a0, $a0, -0x199C
    ctx->r4 = ADD32(ctx->r4, -0X199C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210C70: addiu       $a0, $a0, -0x199C
    ctx->r4 = ADD32(ctx->r4, -0X199C);
    after_0:
    // 0x80210C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210C7C: jr          $ra
    // 0x80210C80: nop

    TRACE_RETURN()
    return;
    // 0x80210C80: nop

;}
RECOMP_FUNC void func_8021B55C_5D6A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B55C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021B560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B564: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021B568: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021B56C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021B570: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021B574: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021B578: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021B57C: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021B580: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021B584: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8021B588: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021B58C: jal         0x8021ADD0
    // 0x8021B590: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x8021B590: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8021B594: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8021B598: addiu       $t6, $v0, -0x200
    ctx->r14 = ADD32(ctx->r2, -0X200);
    // 0x8021B59C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8021B5A0: andi        $t8, $t6, 0x3FF
    ctx->r24 = ctx->r14 & 0X3FF;
    // 0x8021B5A4: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8021B5A8: sh          $t8, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r24;
    // 0x8021B5AC: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x8021B5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B5B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021B5B8: jr          $ra
    // 0x8021B5BC: nop

    TRACE_RETURN()
    return;
    // 0x8021B5BC: nop

;}
RECOMP_FUNC void func_8021505C_5D052C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021505C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215060: jr          $ra
    // 0x80215064: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80215064: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020E980_5C9E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E988: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E98C: jal         0x80013AC4
    // 0x8020E990: addiu       $a0, $a0, -0x3694
    ctx->r4 = ADD32(ctx->r4, -0X3694);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E990: addiu       $a0, $a0, -0x3694
    ctx->r4 = ADD32(ctx->r4, -0X3694);
    after_0:
    // 0x8020E994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E99C: jr          $ra
    // 0x8020E9A0: nop

    TRACE_RETURN()
    return;
    // 0x8020E9A0: nop

;}
RECOMP_FUNC void func_80218F30_5D4400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218F30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80218F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80218F38: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80218F3C: jal         0x80218E7C
    // 0x80218F40: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80218E7C_5D434C(rdram, ctx);
        goto after_0;
    // 0x80218F40: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80218F44: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80218F48: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80218F4C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80218F50: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x80218F54: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80218F58: beql        $t7, $zero, L_80218FDC
    if (ctx->r15 == 0) {
        // 0x80218F5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80218FDC;
    }
    goto skip_0;
    // 0x80218F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80218F60: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x80218F64: lbu         $t8, 0x76($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X76);
    // 0x80218F68: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80218F6C: jal         0x80034ED4
    // 0x80218F70: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80218F70: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_1:
    // 0x80218F74: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80218F78: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218F7C: addiu       $a1, $a1, 0x3ED0
    ctx->r5 = ADD32(ctx->r5, 0X3ED0);
    // 0x80218F80: beq         $v1, $zero, L_80218FD8
    if (ctx->r3 == 0) {
        // 0x80218F84: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_80218FD8;
    }
    // 0x80218F84: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80218F88: lw          $a0, -0x3344($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3344);
    // 0x80218F8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80218F90: jal         0x80034E08
    // 0x80218F94: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x80218F94: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x80218F98: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80218F9C: beq         $v0, $zero, L_80218FD4
    if (ctx->r2 == 0) {
        // 0x80218FA0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80218FD4;
    }
    // 0x80218FA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80218FA4: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80218FA8: sb          $zero, 0x77($v0)
    MEM_B(0X77, ctx->r2) = 0;
    // 0x80218FAC: sw          $v1, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r3;
    // 0x80218FB0: sw          $t9, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r25;
    // 0x80218FB4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80218FB8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80218FBC: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x80218FC0: addiu       $t1, $t0, 0x5
    ctx->r9 = ADD32(ctx->r8, 0X5);
    // 0x80218FC4: jal         0x80035244
    // 0x80218FC8: sb          $t1, 0x76($v0)
    MEM_B(0X76, ctx->r2) = ctx->r9;
    func_80035244_35E44(rdram, ctx);
        goto after_3;
    // 0x80218FC8: sb          $t1, 0x76($v0)
    MEM_B(0X76, ctx->r2) = ctx->r9;
    after_3:
    // 0x80218FCC: b           L_80218FDC
    // 0x80218FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80218FDC;
    // 0x80218FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218FD4:
    // 0x80218FD4: sb          $zero, 0x10($v1)
    MEM_B(0X10, ctx->r3) = 0;
L_80218FD8:
    // 0x80218FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218FDC:
    // 0x80218FDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80218FE0: jr          $ra
    // 0x80218FE4: nop

    TRACE_RETURN()
    return;
    // 0x80218FE4: nop

;}
RECOMP_FUNC void func_80212174_5CD644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021217C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80212180: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80212184: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80212188: addiu       $t8, $zero, 0x22A
    ctx->r24 = ADD32(0, 0X22A);
    // 0x8021218C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80212190: bne         $v0, $zero, L_802121DC
    if (ctx->r2 != 0) {
        // 0x80212194: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_802121DC;
    }
    // 0x80212194: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80212198: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x8021219C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x802121A0: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x802121A4: sb          $t9, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r25;
    // 0x802121A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802121AC: jal         0x80216DF8
    // 0x802121B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_0;
    // 0x802121B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x802121B4: jal         0x8021A310
    // 0x802121B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8021A310_5D57E0(rdram, ctx);
        goto after_1;
    // 0x802121B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x802121BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802121C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802121C4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x802121C8: jal         0x80224ABC
    // 0x802121CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_2;
    // 0x802121CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x802121D0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802121D4: jal         0x8003521C
    // 0x802121D8: addiu       $a0, $a0, 0x21EC
    ctx->r4 = ADD32(ctx->r4, 0X21EC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x802121D8: addiu       $a0, $a0, 0x21EC
    ctx->r4 = ADD32(ctx->r4, 0X21EC);
    after_3:
L_802121DC:
    // 0x802121DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802121E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802121E4: jr          $ra
    // 0x802121E8: nop

    TRACE_RETURN()
    return;
    // 0x802121E8: nop

;}
RECOMP_FUNC void func_80210CA8_5CC178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210CB0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210CB4: jal         0x80013AC4
    // 0x80210CB8: addiu       $a0, $a0, -0x1978
    ctx->r4 = ADD32(ctx->r4, -0X1978);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210CB8: addiu       $a0, $a0, -0x1978
    ctx->r4 = ADD32(ctx->r4, -0X1978);
    after_0:
    // 0x80210CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210CC4: jr          $ra
    // 0x80210CC8: nop

    TRACE_RETURN()
    return;
    // 0x80210CC8: nop

;}
RECOMP_FUNC void func_8021816C_5D363C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021816C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80218170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80218174: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218178: addiu       $a1, $a1, 0x27EC
    ctx->r5 = ADD32(ctx->r5, 0X27EC);
    // 0x8021817C: jal         0x802171A8
    // 0x80218180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x80218180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80218184: beq         $v0, $zero, L_80218220
    if (ctx->r2 == 0) {
        // 0x80218188: sw          $v0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r2;
            goto L_80218220;
    }
    // 0x80218188: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8021818C: jal         0x802192B4
    // 0x80218190: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_802192B4_5D4784(rdram, ctx);
        goto after_1;
    // 0x80218190: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x80218194: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80218198: jal         0x802192B4
    // 0x8021819C: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x8021819C: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_2:
    // 0x802181A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802181A4: jal         0x802192B4
    // 0x802181A8: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    func_802192B4_5D4784(rdram, ctx);
        goto after_3;
    // 0x802181A8: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_3:
    // 0x802181AC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802181B0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802181B4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802181B8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802181BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802181C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802181C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802181C8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802181CC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802181D0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802181D4: addiu       $t8, $zero, 0x340
    ctx->r24 = ADD32(0, 0X340);
    // 0x802181D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802181DC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802181E0: subu        $a2, $t8, $t7
    ctx->r6 = SUB32(ctx->r24, ctx->r15);
    // 0x802181E4: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x802181E8: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x802181EC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802181F0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x802181F4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x802181F8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802181FC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80218200: jal         0x8021F154
    // 0x80218204: nop

    func_8021F154_5DA624(rdram, ctx);
        goto after_4;
    // 0x80218204: nop

    after_4:
    // 0x80218208: jal         0x802192B4
    // 0x8021820C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_802192B4_5D4784(rdram, ctx);
        goto after_5;
    // 0x8021820C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
    // 0x80218210: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x80218214: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80218218: b           L_80218224
    // 0x8021821C: sh          $t0, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r8;
        goto L_80218224;
    // 0x8021821C: sh          $t0, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r8;
L_80218220:
    // 0x80218220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218224:
    // 0x80218224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80218228: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8021822C: jr          $ra
    // 0x80218230: nop

    TRACE_RETURN()
    return;
    // 0x80218230: nop

;}
RECOMP_FUNC void func_8020E668_5C9B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E66C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E670: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E674: jal         0x80013AC4
    // 0x8020E678: addiu       $a0, $a0, -0x38A0
    ctx->r4 = ADD32(ctx->r4, -0X38A0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E678: addiu       $a0, $a0, -0x38A0
    ctx->r4 = ADD32(ctx->r4, -0X38A0);
    after_0:
    // 0x8020E67C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E684: jr          $ra
    // 0x8020E688: nop

    TRACE_RETURN()
    return;
    // 0x8020E688: nop

;}
RECOMP_FUNC void func_8020F118_5CA5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F120: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F124: jal         0x80013AC4
    // 0x8020F128: addiu       $a0, $a0, -0x3160
    ctx->r4 = ADD32(ctx->r4, -0X3160);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F128: addiu       $a0, $a0, -0x3160
    ctx->r4 = ADD32(ctx->r4, -0X3160);
    after_0:
    // 0x8020F12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F134: jr          $ra
    // 0x8020F138: nop

    TRACE_RETURN()
    return;
    // 0x8020F138: nop

;}
RECOMP_FUNC void func_802106C0_5CBB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802106C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802106C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802106C8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802106CC: jal         0x80013AC4
    // 0x802106D0: addiu       $a0, $a0, -0x1D90
    ctx->r4 = ADD32(ctx->r4, -0X1D90);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802106D0: addiu       $a0, $a0, -0x1D90
    ctx->r4 = ADD32(ctx->r4, -0X1D90);
    after_0:
    // 0x802106D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802106D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802106DC: jr          $ra
    // 0x802106E0: nop

    TRACE_RETURN()
    return;
    // 0x802106E0: nop

;}
RECOMP_FUNC void func_8020F604_5CAAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F60C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F610: jal         0x80013AC4
    // 0x8020F614: addiu       $a0, $a0, -0x2E34
    ctx->r4 = ADD32(ctx->r4, -0X2E34);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F614: addiu       $a0, $a0, -0x2E34
    ctx->r4 = ADD32(ctx->r4, -0X2E34);
    after_0:
    // 0x8020F618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F61C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F620: jr          $ra
    // 0x8020F624: nop

    TRACE_RETURN()
    return;
    // 0x8020F624: nop

;}
RECOMP_FUNC void func_8020F670_5CAB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F678: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F67C: jal         0x80013AC4
    // 0x8020F680: addiu       $a0, $a0, -0x2DD8
    ctx->r4 = ADD32(ctx->r4, -0X2DD8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F680: addiu       $a0, $a0, -0x2DD8
    ctx->r4 = ADD32(ctx->r4, -0X2DD8);
    after_0:
    // 0x8020F684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F68C: jr          $ra
    // 0x8020F690: nop

    TRACE_RETURN()
    return;
    // 0x8020F690: nop

;}
RECOMP_FUNC void func_8020FBA4_5CB074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FBA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FBA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FBAC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FBB0: jal         0x80013AC4
    // 0x8020FBB4: addiu       $a0, $a0, -0x2938
    ctx->r4 = ADD32(ctx->r4, -0X2938);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FBB4: addiu       $a0, $a0, -0x2938
    ctx->r4 = ADD32(ctx->r4, -0X2938);
    after_0:
    // 0x8020FBB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FBC0: jr          $ra
    // 0x8020FBC4: nop

    TRACE_RETURN()
    return;
    // 0x8020FBC4: nop

;}
RECOMP_FUNC void func_80212CA0_5CE170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212CA0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80212CA4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80212CA8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80212CAC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80212CB0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80212CB4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80212CB8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80212CBC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80212CC0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80212CC4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80212CC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80212CCC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80212CD0: lw          $a3, 0xBC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XBC);
    // 0x80212CD4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80212CD8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80212CDC: beq         $a3, $zero, L_80212E6C
    if (ctx->r7 == 0) {
        // 0x80212CE0: nop
    
            goto L_80212E6C;
    }
    // 0x80212CE0: nop

    // 0x80212CE4: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x80212CE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80212CEC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80212CF0: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x80212CF4: beq         $t6, $zero, L_80212D44
    if (ctx->r14 == 0) {
        // 0x80212CF8: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80212D44;
    }
    // 0x80212CF8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80212CFC: andi        $t7, $a0, 0x2
    ctx->r15 = ctx->r4 & 0X2;
    // 0x80212D00: subu        $t8, $a1, $t7
    ctx->r24 = SUB32(ctx->r5, ctx->r15);
    // 0x80212D04: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80212D08: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x80212D0C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80212D10: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80212D14: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80212D18: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80212D1C: lhu         $t9, 0x8A($s4)
    ctx->r25 = MEM_HU(ctx->r20, 0X8A);
    // 0x80212D20: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80212D24: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80212D28: subu        $t1, $a1, $t0
    ctx->r9 = SUB32(ctx->r5, ctx->r8);
    // 0x80212D2C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80212D30: nop

    // 0x80212D34: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80212D38: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80212D3C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x80212D40: lhu         $v1, 0x8A($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X8A);
L_80212D44:
    // 0x80212D44: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x80212D48: bne         $v1, $zero, L_80212E74
    if (ctx->r3 != 0) {
        // 0x80212D4C: sh          $t2, 0x8A($s4)
        MEM_H(0X8A, ctx->r20) = ctx->r10;
            goto L_80212E74;
    }
    // 0x80212D4C: sh          $t2, 0x8A($s4)
    MEM_H(0X8A, ctx->r20) = ctx->r10;
    // 0x80212D50: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80212D54: lui         $s5, 0x8021
    ctx->r21 = S32(0X8021 << 16);
    // 0x80212D58: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x80212D5C: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x80212D60: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80212D64: addiu       $fp, $fp, 0x3E10
    ctx->r30 = ADD32(ctx->r30, 0X3E10);
    // 0x80212D68: addiu       $s6, $s6, 0x71A8
    ctx->r22 = ADD32(ctx->r22, 0X71A8);
    // 0x80212D6C: addiu       $s5, $s5, 0x27EC
    ctx->r21 = ADD32(ctx->r21, 0X27EC);
    // 0x80212D70: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80212D74: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x80212D78: addiu       $s7, $zero, 0xAA
    ctx->r23 = ADD32(0, 0XAA);
    // 0x80212D7C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80212D80:
    // 0x80212D80: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80212D84: jalr        $s6
    // 0x80212D88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_0;
    // 0x80212D88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80212D8C: beq         $v0, $zero, L_80212DDC
    if (ctx->r2 == 0) {
        // 0x80212D90: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80212DDC;
    }
    // 0x80212D90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80212D94: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80212D98: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x80212D9C: addiu       $s3, $s3, 0x3EA0
    ctx->r19 = ADD32(ctx->r19, 0X3EA0);
    // 0x80212DA0: mflo        $s1
    ctx->r17 = lo;
    // 0x80212DA4: andi        $t3, $s1, 0xFFFF
    ctx->r11 = ctx->r17 & 0XFFFF;
    // 0x80212DA8: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80212DAC: jalr        $fp
    // 0x80212DB0: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    LOOKUP_FUNC(ctx->r30)(rdram, ctx);
        goto after_1;
    // 0x80212DB0: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    after_1:
    // 0x80212DB4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80212DB8: swc1        $f20, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f20.u32l;
    // 0x80212DBC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80212DC0: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x80212DC4: jalr        $s3
    // 0x80212DC8: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_2;
    // 0x80212DC8: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x80212DCC: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80212DD0: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x80212DD4: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
    // 0x80212DD8: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
L_80212DDC:
    // 0x80212DDC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80212DE0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80212DE4: bnel        $s2, $at, L_80212D80
    if (ctx->r18 != ctx->r1) {
        // 0x80212DE8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80212D80;
    }
    goto skip_0;
    // 0x80212DE8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_0:
    // 0x80212DEC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80212DF0: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x80212DF4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80212DF8: jal         0x802171A8
    // 0x80212DFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_3;
    // 0x80212DFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80212E00: beq         $v0, $zero, L_80212E10
    if (ctx->r2 == 0) {
        // 0x80212E04: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80212E10;
    }
    // 0x80212E04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80212E08: jal         0x80219E08
    // 0x80212E0C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_80219E08_5D52D8(rdram, ctx);
        goto after_4;
    // 0x80212E0C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
L_80212E10:
    // 0x80212E10: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80212E14: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80212E18: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x80212E1C: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x80212E20: addiu       $s1, $s1, -0x3410
    ctx->r17 = ADD32(ctx->r17, -0X3410);
    // 0x80212E24: addiu       $s0, $s0, -0xBE0
    ctx->r16 = ADD32(ctx->r16, -0XBE0);
    // 0x80212E28: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80212E2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80212E30: addiu       $a0, $zero, 0x26E
    ctx->r4 = ADD32(0, 0X26E);
    // 0x80212E34: jalr        $s0
    // 0x80212E38: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x80212E38: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    after_5:
    // 0x80212E3C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80212E40: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    // 0x80212E44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80212E48: jalr        $s0
    // 0x80212E4C: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x80212E4C: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    after_6:
    // 0x80212E50: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80212E54: addiu       $at, $zero, -0x285
    ctx->r1 = ADD32(0, -0X285);
    // 0x80212E58: lw          $t5, 0x68($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X68);
    // 0x80212E5C: sw          $zero, 0x38($t4)
    MEM_W(0X38, ctx->r12) = 0;
    // 0x80212E60: sw          $zero, 0x34($t4)
    MEM_W(0X34, ctx->r12) = 0;
    // 0x80212E64: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80212E68: sw          $t6, 0x68($t4)
    MEM_W(0X68, ctx->r12) = ctx->r14;
L_80212E6C:
    // 0x80212E6C: jal         0x80034ED4
    // 0x80212E70: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_7;
    // 0x80212E70: nop

    after_7:
L_80212E74:
    // 0x80212E74: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80212E78: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80212E7C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80212E80: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80212E84: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80212E88: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80212E8C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80212E90: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80212E94: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80212E98: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80212E9C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80212EA0: jr          $ra
    // 0x80212EA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80212EA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80211170_5CC640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211178: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021117C: jal         0x80013AC4
    // 0x80211180: addiu       $a0, $a0, -0x1688
    ctx->r4 = ADD32(ctx->r4, -0X1688);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211180: addiu       $a0, $a0, -0x1688
    ctx->r4 = ADD32(ctx->r4, -0X1688);
    after_0:
    // 0x80211184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021118C: jr          $ra
    // 0x80211190: nop

    TRACE_RETURN()
    return;
    // 0x80211190: nop

;}
RECOMP_FUNC void func_8020F550_5CAA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F558: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F55C: jal         0x80013AC4
    // 0x8020F560: addiu       $a0, $a0, -0x2E6C
    ctx->r4 = ADD32(ctx->r4, -0X2E6C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F560: addiu       $a0, $a0, -0x2E6C
    ctx->r4 = ADD32(ctx->r4, -0X2E6C);
    after_0:
    // 0x8020F564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F56C: jr          $ra
    // 0x8020F570: nop

    TRACE_RETURN()
    return;
    // 0x8020F570: nop

;}
RECOMP_FUNC void func_802159A4_5D0E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802159A4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802159A8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x802159AC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802159B0: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802159B4: lwc1        $f2, 0xC($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XC);
    // 0x802159B8: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802159BC: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802159C0: bgez        $t6, L_802159D8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802159C4: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802159D8;
    }
    // 0x802159C4: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802159C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802159CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802159D0: nop

    // 0x802159D4: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_802159D8:
    // 0x802159D8: sub.s       $f8, $f14, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x802159DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802159E0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802159E4: nop

    // 0x802159E8: bc1f        L_80215A6C
    if (!c1cs) {
        // 0x802159EC: nop
    
            goto L_80215A6C;
    }
    // 0x802159EC: nop

    // 0x802159F0: add.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x802159F4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802159F8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802159FC: nop

    // 0x80215A00: bc1f        L_80215A6C
    if (!c1cs) {
        // 0x80215A04: nop
    
            goto L_80215A6C;
    }
    // 0x80215A04: nop

    // 0x80215A08: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80215A0C: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80215A10: sub.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x80215A14: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x80215A18: nop

    // 0x80215A1C: bc1f        L_80215A6C
    if (!c1cs) {
        // 0x80215A20: nop
    
            goto L_80215A6C;
    }
    // 0x80215A20: nop

    // 0x80215A24: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x80215A28: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80215A2C: nop

    // 0x80215A30: bc1f        L_80215A6C
    if (!c1cs) {
        // 0x80215A34: nop
    
            goto L_80215A6C;
    }
    // 0x80215A34: nop

    // 0x80215A38: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80215A3C: sub.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80215A40: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80215A44: nop

    // 0x80215A48: bc1f        L_80215A6C
    if (!c1cs) {
        // 0x80215A4C: nop
    
            goto L_80215A6C;
    }
    // 0x80215A4C: nop

    // 0x80215A50: add.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80215A54: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80215A58: nop

    // 0x80215A5C: bc1f        L_80215A6C
    if (!c1cs) {
        // 0x80215A60: nop
    
            goto L_80215A6C;
    }
    // 0x80215A60: nop

    // 0x80215A64: jr          $ra
    // 0x80215A68: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    TRACE_RETURN()
    return;
    // 0x80215A68: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80215A6C:
    // 0x80215A6C: jr          $ra
    // 0x80215A70: nop

    TRACE_RETURN()
    return;
    // 0x80215A70: nop

;}
RECOMP_FUNC void func_8020F598_5CAA68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F59C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F5A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F5A4: jal         0x80013AC4
    // 0x8020F5A8: addiu       $a0, $a0, -0x2E5C
    ctx->r4 = ADD32(ctx->r4, -0X2E5C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F5A8: addiu       $a0, $a0, -0x2E5C
    ctx->r4 = ADD32(ctx->r4, -0X2E5C);
    after_0:
    // 0x8020F5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F5B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F5B4: jr          $ra
    // 0x8020F5B8: nop

    TRACE_RETURN()
    return;
    // 0x8020F5B8: nop

;}
RECOMP_FUNC void func_8022026C_5DB73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022026C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80220270: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x80220274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220278: addiu       $t9, $t9, 0x6B7C
    ctx->r25 = ADD32(ctx->r25, 0X6B7C);
    // 0x8022027C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80220280: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80220284: jalr        $t9
    // 0x80220288: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80220288: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8022028C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80220290: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80220294: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80220298: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x8022029C: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x802202A0: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x802202A4: lw          $t0, 0x3018($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X3018);
    // 0x802202A8: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x802202AC: sb          $t6, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r14;
    // 0x802202B0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x802202B4: lbu         $t1, 0x23($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X23);
    // 0x802202B8: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x802202BC: lw          $t4, 0x3018($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3018);
    // 0x802202C0: sb          $t1, 0xE($t4)
    MEM_B(0XE, ctx->r12) = ctx->r9;
    // 0x802202C4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802202C8: lbu         $t5, 0x27($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X27);
    // 0x802202CC: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x802202D0: lw          $t8, 0x3018($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3018);
    // 0x802202D4: sb          $t5, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r13;
    // 0x802202D8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802202DC: addu        $t0, $t6, $v1
    ctx->r8 = ADD32(ctx->r14, ctx->r3);
    // 0x802202E0: lw          $t2, 0x3018($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X3018);
    // 0x802202E4: sb          $zero, 0x10($t2)
    MEM_B(0X10, ctx->r10) = 0;
    // 0x802202E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802202EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802202F0: jr          $ra
    // 0x802202F4: nop

    TRACE_RETURN()
    return;
    // 0x802202F4: nop

;}
RECOMP_FUNC void func_80211704_5CCBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211704: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211708: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021170C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211710: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211714: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80211718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021171C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80211720: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80211724: bgez        $t6, L_8021173C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80211728: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_8021173C;
    }
    // 0x80211728: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8021172C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80211730: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80211734: nop

    // 0x80211738: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_8021173C:
    // 0x8021173C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211740: ldc1        $f10, -0x6138($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6138);
    // 0x80211744: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211748: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8021174C: sub.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d - ctx->f10.d;
    // 0x80211750: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80211754: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211758: nop

    // 0x8021175C: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80211760: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80211764: nop

    // 0x80211768: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8021176C: beql        $t8, $zero, L_802117C0
    if (ctx->r24 == 0) {
        // 0x80211770: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_802117C0;
    }
    goto skip_0;
    // 0x80211770: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x80211774: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80211778: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021177C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80211780: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x80211784: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80211788: nop

    // 0x8021178C: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80211790: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80211794: nop

    // 0x80211798: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8021179C: bne         $t8, $zero, L_802117B4
    if (ctx->r24 != 0) {
        // 0x802117A0: nop
    
            goto L_802117B4;
    }
    // 0x802117A0: nop

    // 0x802117A4: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x802117A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802117AC: b           L_802117CC
    // 0x802117B0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802117CC;
    // 0x802117B0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802117B4:
    // 0x802117B4: b           L_802117CC
    // 0x802117B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802117CC;
    // 0x802117B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802117BC: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_802117C0:
    // 0x802117C0: nop

    // 0x802117C4: bltz        $t8, L_802117B4
    if (SIGNED(ctx->r24) < 0) {
        // 0x802117C8: nop
    
            goto L_802117B4;
    }
    // 0x802117C8: nop

L_802117CC:
    // 0x802117CC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802117D0: sb          $t8, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r24;
    // 0x802117D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802117D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802117DC: jal         0x8021DEC4
    // 0x802117E0: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    func_8021DEC4_5D9394(rdram, ctx);
        goto after_0;
    // 0x802117E0: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    after_0:
    // 0x802117E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802117E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802117EC: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x802117F0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802117F4: bgez        $t9, L_8021180C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802117F8: cvt.d.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
            goto L_8021180C;
    }
    // 0x802117F8: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x802117FC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80211800: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80211804: nop

    // 0x80211808: add.d       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f8.d + ctx->f6.d;
L_8021180C:
    // 0x8021180C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211810: ldc1        $f10, -0x6130($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X6130);
    // 0x80211814: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80211818: nop

    // 0x8021181C: bc1fl       L_80211830
    if (!c1cs) {
        // 0x80211820: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80211830;
    }
    goto skip_1;
    // 0x80211820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80211824: jal         0x80034ED4
    // 0x80211828: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80211828: nop

    after_1:
    // 0x8021182C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80211830:
    // 0x80211830: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211834: jr          $ra
    // 0x80211838: nop

    TRACE_RETURN()
    return;
    // 0x80211838: nop

;}
RECOMP_FUNC void func_80226724_5E1BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022672C: jal         0x80225E60
    // 0x80226730: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80225E60_5E1330(rdram, ctx);
        goto after_0;
    // 0x80226730: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80226734: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80226738: jal         0x80225000
    // 0x8022673C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80225000_5E04D0(rdram, ctx);
        goto after_1;
    // 0x8022673C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80226740: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80226744: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x80226748: jal         0x80226580
    // 0x8022674C: lhu         $a1, 0xEA($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XEA);
    func_80226580_5E1A50(rdram, ctx);
        goto after_2;
    // 0x8022674C: lhu         $a1, 0xEA($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XEA);
    after_2:
    // 0x80226750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226754: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80226758: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022675C: jr          $ra
    // 0x80226760: nop

    TRACE_RETURN()
    return;
    // 0x80226760: nop

;}
RECOMP_FUNC void func_80222C10_5DE0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222C10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80222C14: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80222C18: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x80222C1C: beq         $t7, $zero, L_80222C2C
    if (ctx->r15 == 0) {
        // 0x80222C20: nop
    
            goto L_80222C2C;
    }
    // 0x80222C20: nop

    // 0x80222C24: lwc1        $f4, 0xC0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x80222C28: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
L_80222C2C:
    // 0x80222C2C: jr          $ra
    // 0x80222C30: nop

    TRACE_RETURN()
    return;
    // 0x80222C30: nop

;}
RECOMP_FUNC void func_80214FA4_5D0474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214FA8: jr          $ra
    // 0x80214FAC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214FAC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8022306C_5DE53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022306C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80223070: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80223074: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x80223078: addiu       $t7, $t7, -0x4C60
    ctx->r15 = ADD32(ctx->r15, -0X4C60);
    // 0x8022307C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80223080: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80223084: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x80223088: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    // 0x8022308C: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80223090: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x80223094: jr          $ra
    // 0x80223098: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80223098: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_80210CCC_5CC19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210CD4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210CD8: jal         0x80013AC4
    // 0x80210CDC: addiu       $a0, $a0, -0x1960
    ctx->r4 = ADD32(ctx->r4, -0X1960);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210CDC: addiu       $a0, $a0, -0x1960
    ctx->r4 = ADD32(ctx->r4, -0X1960);
    after_0:
    // 0x80210CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210CE8: jr          $ra
    // 0x80210CEC: nop

    TRACE_RETURN()
    return;
    // 0x80210CEC: nop

;}
RECOMP_FUNC void func_80214CB8_5D0188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214CB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80214CBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80214CC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80214CC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80214CC8: jal         0x80221A90
    // 0x80214CCC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80221A90_5DCF60(rdram, ctx);
        goto after_0;
    // 0x80214CCC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80214CD0: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x80214CD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214CD8: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x80214CDC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80214CE0: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x80214CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214CE8: jal         0x80216E1C
    // 0x80214CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80216E1C_5D22EC(rdram, ctx);
        goto after_1;
    // 0x80214CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80214CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214CF4: jal         0x80219E08
    // 0x80214CF8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_80219E08_5D52D8(rdram, ctx);
        goto after_2;
    // 0x80214CF8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x80214CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214D00: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x80214D04: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80214D08: jal         0x80218DA8
    // 0x80214D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80218DA8_5D4278(rdram, ctx);
        goto after_3;
    // 0x80214D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80214D10: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x80214D14: lui         $at, 0xF7FF
    ctx->r1 = S32(0XF7FF << 16);
    // 0x80214D18: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80214D1C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80214D20: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80214D24: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x80214D28: jal         0x8003521C
    // 0x80214D2C: addiu       $a0, $a0, 0x4C0C
    ctx->r4 = ADD32(ctx->r4, 0X4C0C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80214D2C: addiu       $a0, $a0, 0x4C0C
    ctx->r4 = ADD32(ctx->r4, 0X4C0C);
    after_4:
    // 0x80214D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80214D34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80214D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80214D3C: jr          $ra
    // 0x80214D40: nop

    TRACE_RETURN()
    return;
    // 0x80214D40: nop

;}
RECOMP_FUNC void func_8022082C_5DBCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022082C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80220830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220834: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80220838: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x8022083C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80220840: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80220844: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x80220848: bnel        $t6, $at, L_802208B8
    if (ctx->r14 != ctx->r1) {
        // 0x8022084C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802208B8;
    }
    goto skip_0;
    // 0x8022084C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80220850: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x80220854: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80220858: lwc1        $f4, -0x3234($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3234);
    // 0x8022085C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80220860: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80220864: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80220868: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x8022086C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80220870: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80220874: jal         0x80221C0C
    // 0x80220878: nop

    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_0;
    // 0x80220878: nop

    after_0:
    // 0x8022087C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80220880: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80220884: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x80220888: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8022088C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80220890: bne         $v0, $t9, L_802208A0
    if (ctx->r2 != ctx->r25) {
        // 0x80220894: nop
    
            goto L_802208A0;
    }
    // 0x80220894: nop

    // 0x80220898: b           L_802208A0
    // 0x8022089C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802208A0;
    // 0x8022089C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802208A0:
    // 0x802208A0: jal         0x8003D388
    // 0x802208A4: lhu         $a0, 0xA4($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA4);
    func_8003D388_3DF88(rdram, ctx);
        goto after_1;
    // 0x802208A4: lhu         $a0, 0xA4($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA4);
    after_1:
    // 0x802208A8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802208AC: jal         0x8003521C
    // 0x802208B0: addiu       $a0, $a0, 0x8C4
    ctx->r4 = ADD32(ctx->r4, 0X8C4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x802208B0: addiu       $a0, $a0, 0x8C4
    ctx->r4 = ADD32(ctx->r4, 0X8C4);
    after_2:
    // 0x802208B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802208B8:
    // 0x802208B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802208BC: jr          $ra
    // 0x802208C0: nop

    TRACE_RETURN()
    return;
    // 0x802208C0: nop

;}
RECOMP_FUNC void func_802222FC_5DD7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802222FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80222300: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80222304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022230C: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80222310: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80222314: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80222318: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8022231C: jal         0x802192B4
    // 0x80222320: subu        $a0, $t8, $t7
    ctx->r4 = SUB32(ctx->r24, ctx->r15);
    func_802192B4_5D4784(rdram, ctx);
        goto after_0;
    // 0x80222320: subu        $a0, $t8, $t7
    ctx->r4 = SUB32(ctx->r24, ctx->r15);
    after_0:
    // 0x80222324: bne         $v0, $zero, L_80222334
    if (ctx->r2 != 0) {
        // 0x80222328: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80222334;
    }
    // 0x80222328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022232C: b           L_80222338
    // 0x80222330: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80222338;
    // 0x80222330: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80222334:
    // 0x80222334: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80222338:
    // 0x80222338: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8022233C: jr          $ra
    // 0x80222340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80222340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8020DEAC_5C937C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DEAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DEB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DEB4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DEB8: jal         0x80013AC4
    // 0x8020DEBC: addiu       $a0, $a0, -0x3D64
    ctx->r4 = ADD32(ctx->r4, -0X3D64);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DEBC: addiu       $a0, $a0, -0x3D64
    ctx->r4 = ADD32(ctx->r4, -0X3D64);
    after_0:
    // 0x8020DEC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DEC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DEC8: jr          $ra
    // 0x8020DECC: nop

    TRACE_RETURN()
    return;
    // 0x8020DECC: nop

;}
