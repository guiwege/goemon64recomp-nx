#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8000EDB0_F9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EDB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EDB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EDB8: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000EDBC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000EDC0: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000EDC4: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000EDC8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000EDCC: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000EDD0: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000EDD4: nop

    // 0x8000EDD8: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000EDDC: jal         0x800417E0
    // 0x8000EDE0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000EDE0: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x8000EDE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000EDEC: jr          $ra
    // 0x8000EDF0: nop

    TRACE_RETURN()
    return;
    // 0x8000EDF0: nop

;}
RECOMP_FUNC void func_8000EC04_F804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EC04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000EC08: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8000EC0C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8000EC10: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000EC14: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000EC18: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8000EC1C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000EC20: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000EC24: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000EC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EC2C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x8000EC30: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000EC34: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000EC38: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8000EC3C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000EC40: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x8000EC44: jal         0x800417E0
    // 0x8000EC48: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000EC48: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x8000EC4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000EC50: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000EC54: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8000EC58: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8000EC5C: nop

    // 0x8000EC60: bc1fl       L_8000EC74
    if (!c1cs) {
        // 0x8000EC64: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8000EC74;
    }
    goto skip_0;
    // 0x8000EC64: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x8000EC68: b           L_8000EC74
    // 0x8000EC6C: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_8000EC74;
    // 0x8000EC6C: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x8000EC70: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8000EC74:
    // 0x8000EC74: jal         0x800040A8
    // 0x8000EC78: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8000EC78: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_1:
    // 0x8000EC7C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8000EC80: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x8000EC84: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x8000EC88: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8000EC8C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x8000EC90: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000EC94: jal         0x800040A8
    // 0x8000EC98: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x8000EC98: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8000EC9C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8000ECA0: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x8000ECA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000ECA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8000ECAC: jr          $ra
    // 0x8000ECB0: nop

    TRACE_RETURN()
    return;
    // 0x8000ECB0: nop

;}
RECOMP_FUNC void _Printf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80040FD0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80040FD4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80040FD8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80040FDC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80040FE0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80040FE4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80040FE8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80040FEC: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x80040FF0: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x80040FF4: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x80040FF8: lui         $s7, 0x8008
    ctx->r23 = S32(0X8008 << 16);
    // 0x80040FFC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80041000: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80041004: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80041008: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004100C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80041010: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80041014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80041018: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x8004101C: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x80041020: addiu       $s7, $s7, -0x6B80
    ctx->r23 = ADD32(ctx->r23, -0X6B80);
    // 0x80041024: addiu       $s6, $s6, -0x2EEC
    ctx->r22 = ADD32(ctx->r22, -0X2EEC);
    // 0x80041028: addiu       $s5, $s5, -0x6B5C
    ctx->r21 = ADD32(ctx->r21, -0X6B5C);
    // 0x8004102C: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
L_80041030:
    // 0x80041030: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80041034: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80041038: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
    // 0x8004103C: beq         $v0, $zero, L_80041064
    if (ctx->r2 == 0) {
        // 0x80041040: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80041064;
    }
    // 0x80041040: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80041044: beql        $v1, $v0, L_80041068
    if (ctx->r3 == ctx->r2) {
        // 0x80041048: subu        $v0, $s2, $a3
        ctx->r2 = SUB32(ctx->r18, ctx->r7);
            goto L_80041068;
    }
    goto skip_0;
    // 0x80041048: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
    skip_0:
    // 0x8004104C: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
L_80041050:
    // 0x80041050: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041054: beq         $v0, $zero, L_80041064
    if (ctx->r2 == 0) {
        // 0x80041058: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80041064;
    }
    // 0x80041058: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004105C: bnel        $v1, $v0, L_80041050
    if (ctx->r3 != ctx->r2) {
        // 0x80041060: lbu         $v0, 0x1($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X1);
            goto L_80041050;
    }
    goto skip_1;
    // 0x80041060: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    skip_1:
L_80041064:
    // 0x80041064: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
L_80041068:
    // 0x80041068: blez        $v0, L_800410A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004106C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_800410A0;
    }
    // 0x8004106C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80041070: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80041074: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80041078: jalr        $s4
    // 0x8004107C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x8004107C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_0:
    // 0x80041080: beq         $v0, $zero, L_80041098
    if (ctx->r2 == 0) {
        // 0x80041084: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80041098;
    }
    // 0x80041084: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80041088: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x8004108C: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80041090: b           L_800410A0
    // 0x80041094: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_800410A0;
    // 0x80041094: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_80041098:
    // 0x80041098: b           L_800415E8
    // 0x8004109C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x8004109C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800410A0:
    // 0x800410A0: bne         $s0, $zero, L_800410B0
    if (ctx->r16 != 0) {
        // 0x800410A4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800410B0;
    }
    // 0x800410A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800410A8: b           L_800415E8
    // 0x800410AC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x800410AC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800410B0:
    // 0x800410B0: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x800410B4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x800410B8: jal         0x8004A4F4
    // 0x800410BC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    strchr_recomp(rdram, ctx);
        goto after_1;
    // 0x800410BC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x800410C0: beq         $v0, $zero, L_80041100
    if (ctx->r2 == 0) {
        // 0x800410C4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80041100;
    }
    // 0x800410C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800410C8:
    // 0x800410C8: subu        $t9, $s0, $s6
    ctx->r25 = SUB32(ctx->r16, ctx->r22);
    // 0x800410CC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800410D0: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x800410D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800410D8: lw          $t7, -0x2EE4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2EE4);
    // 0x800410DC: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x800410E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800410E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800410E8: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x800410EC: sw          $t9, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r25;
    // 0x800410F0: jal         0x8004A4F4
    // 0x800410F4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    strchr_recomp(rdram, ctx);
        goto after_2;
    // 0x800410F4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_2:
    // 0x800410F8: bne         $v0, $zero, L_800410C8
    if (ctx->r2 != 0) {
        // 0x800410FC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800410C8;
    }
    // 0x800410FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80041100:
    // 0x80041100: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x80041104: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80041108: lw          $t8, 0xE4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE4);
    // 0x8004110C: bne         $v0, $t6, L_80041154
    if (ctx->r2 != ctx->r14) {
        // 0x80041110: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_80041154;
    }
    // 0x80041110: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80041114: addiu       $t7, $t8, 0x3
    ctx->r15 = ADD32(ctx->r24, 0X3);
    // 0x80041118: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8004111C: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80041120: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x80041124: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x80041128: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8004112C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041130: bgez        $t8, L_8004114C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80041134: sw          $t8, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->r24;
            goto L_8004114C;
    }
    // 0x80041134: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x80041138: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x8004113C: negu        $t7, $t8
    ctx->r15 = SUB32(0, ctx->r24);
    // 0x80041140: sw          $t7, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r15;
    // 0x80041144: ori         $t9, $t6, 0x4
    ctx->r25 = ctx->r14 | 0X4;
    // 0x80041148: sw          $t9, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r25;
L_8004114C:
    // 0x8004114C: b           L_800411B0
    // 0x80041150: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_800411B0;
    // 0x80041150: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_80041154:
    // 0x80041154: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x80041158: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x8004115C: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80041160: bne         $at, $zero, L_800411B0
    if (ctx->r1 != 0) {
        // 0x80041164: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_800411B0;
    }
    // 0x80041164: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80041168: beql        $at, $zero, L_800411B4
    if (ctx->r1 == 0) {
        // 0x8004116C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_800411B4;
    }
    goto skip_2;
    // 0x8004116C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_2:
    // 0x80041170: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
L_80041174:
    // 0x80041174: slti        $at, $t8, 0x3E7
    ctx->r1 = SIGNED(ctx->r24) < 0X3E7 ? 1 : 0;
    // 0x80041178: beql        $at, $zero, L_80041198
    if (ctx->r1 == 0) {
        // 0x8004117C: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_80041198;
    }
    goto skip_3;
    // 0x8004117C: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_3:
    // 0x80041180: multu       $t8, $fp
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041184: mflo        $t7
    ctx->r15 = lo;
    // 0x80041188: addu        $t6, $a1, $t7
    ctx->r14 = ADD32(ctx->r5, ctx->r15);
    // 0x8004118C: addiu       $t9, $t6, -0x30
    ctx->r25 = ADD32(ctx->r14, -0X30);
    // 0x80041190: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x80041194: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_80041198:
    // 0x80041198: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004119C: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x800411A0: bne         $at, $zero, L_800411B0
    if (ctx->r1 != 0) {
        // 0x800411A4: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_800411B0;
    }
    // 0x800411A4: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x800411A8: bnel        $at, $zero, L_80041174
    if (ctx->r1 != 0) {
        // 0x800411AC: lw          $t8, 0xC8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XC8);
            goto L_80041174;
    }
    goto skip_4;
    // 0x800411AC: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    skip_4:
L_800411B0:
    // 0x800411B0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_800411B4:
    // 0x800411B4: beq         $a1, $at, L_800411C8
    if (ctx->r5 == ctx->r1) {
        // 0x800411B8: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_800411C8;
    }
    // 0x800411B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800411BC: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    // 0x800411C0: b           L_8004125C
    // 0x800411C4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_8004125C;
    // 0x800411C4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_800411C8:
    // 0x800411C8: lbu         $t7, 0x1($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X1);
    // 0x800411CC: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x800411D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800411D4: bne         $v0, $t7, L_80041200
    if (ctx->r2 != ctx->r15) {
        // 0x800411D8: addiu       $t9, $t6, 0x3
        ctx->r25 = ADD32(ctx->r14, 0X3);
            goto L_80041200;
    }
    // 0x800411D8: addiu       $t9, $t6, 0x3
    ctx->r25 = ADD32(ctx->r14, 0X3);
    // 0x800411DC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800411E0: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x800411E4: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x800411E8: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x800411EC: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x800411F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800411F4: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x800411F8: b           L_8004125C
    // 0x800411FC: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_8004125C;
    // 0x800411FC: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_80041200:
    // 0x80041200: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x80041204: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80041208: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x8004120C: bne         $at, $zero, L_8004125C
    if (ctx->r1 != 0) {
        // 0x80041210: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_8004125C;
    }
    // 0x80041210: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80041214: beq         $at, $zero, L_8004125C
    if (ctx->r1 == 0) {
        // 0x80041218: nop
    
            goto L_8004125C;
    }
    // 0x80041218: nop

    // 0x8004121C: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
L_80041220:
    // 0x80041220: slti        $at, $t9, 0x3E7
    ctx->r1 = SIGNED(ctx->r25) < 0X3E7 ? 1 : 0;
    // 0x80041224: beql        $at, $zero, L_80041244
    if (ctx->r1 == 0) {
        // 0x80041228: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_80041244;
    }
    goto skip_5;
    // 0x80041228: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_5:
    // 0x8004122C: multu       $t9, $fp
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041230: mflo        $t7
    ctx->r15 = lo;
    // 0x80041234: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x80041238: addiu       $t6, $t8, -0x30
    ctx->r14 = ADD32(ctx->r24, -0X30);
    // 0x8004123C: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x80041240: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_80041244:
    // 0x80041244: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041248: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x8004124C: bne         $at, $zero, L_8004125C
    if (ctx->r1 != 0) {
        // 0x80041250: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_8004125C;
    }
    // 0x80041250: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80041254: bnel        $at, $zero, L_80041220
    if (ctx->r1 != 0) {
        // 0x80041258: lw          $t9, 0xC4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XC4);
            goto L_80041220;
    }
    goto skip_6;
    // 0x80041258: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    skip_6:
L_8004125C:
    // 0x8004125C: jal         0x8004A4F4
    // 0x80041260: addiu       $a0, $a0, -0x2EF0
    ctx->r4 = ADD32(ctx->r4, -0X2EF0);
    strchr_recomp(rdram, ctx);
        goto after_3;
    // 0x80041260: addiu       $a0, $a0, -0x2EF0
    ctx->r4 = ADD32(ctx->r4, -0X2EF0);
    after_3:
    // 0x80041264: beq         $v0, $zero, L_8004127C
    if (ctx->r2 == 0) {
        // 0x80041268: addiu       $s0, $sp, 0xA0
        ctx->r16 = ADD32(ctx->r29, 0XA0);
            goto L_8004127C;
    }
    // 0x80041268: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x8004126C: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x80041270: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041274: b           L_80041280
    // 0x80041278: sb          $t9, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r25;
        goto L_80041280;
    // 0x80041278: sb          $t9, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r25;
L_8004127C:
    // 0x8004127C: sb          $zero, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = 0;
L_80041280:
    // 0x80041280: lbu         $t7, 0xD4($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD4);
    // 0x80041284: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x80041288: addiu       $a2, $sp, 0xE4
    ctx->r6 = ADD32(ctx->r29, 0XE4);
    // 0x8004128C: bne         $v0, $t7, L_800412AC
    if (ctx->r2 != ctx->r15) {
        // 0x80041290: addiu       $a3, $sp, 0x74
        ctx->r7 = ADD32(ctx->r29, 0X74);
            goto L_800412AC;
    }
    // 0x80041290: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    // 0x80041294: lbu         $t8, 0x0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X0);
    // 0x80041298: addiu       $t6, $zero, 0x4C
    ctx->r14 = ADD32(0, 0X4C);
    // 0x8004129C: bne         $v0, $t8, L_800412AC
    if (ctx->r2 != ctx->r24) {
        // 0x800412A0: nop
    
            goto L_800412AC;
    }
    // 0x800412A0: nop

    // 0x800412A4: sb          $t6, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r14;
    // 0x800412A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800412AC:
    // 0x800412AC: jal         0x80040960
    // 0x800412B0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    _Putfld(rdram, ctx);
        goto after_4;
    // 0x800412B0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_4:
    // 0x800412B4: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x800412B8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x800412BC: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x800412C0: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x800412C4: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x800412C8: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x800412CC: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x800412D0: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x800412D4: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x800412D8: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x800412DC: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x800412E0: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x800412E4: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x800412E8: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x800412EC: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x800412F0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x800412F4: bne         $t8, $zero, L_80041360
    if (ctx->r24 != 0) {
        // 0x800412F8: slt         $t6, $zero, $t9
        ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
            goto L_80041360;
    }
    // 0x800412F8: slt         $t6, $zero, $t9
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800412FC: beql        $t6, $zero, L_80041364
    if (ctx->r14 == 0) {
        // 0x80041300: lw          $t9, 0xAC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XAC);
            goto L_80041364;
    }
    goto skip_7;
    // 0x80041300: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    skip_7:
    // 0x80041304: beq         $t6, $zero, L_80041360
    if (ctx->r14 == 0) {
        // 0x80041308: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80041360;
    }
    // 0x80041308: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x8004130C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80041310:
    // 0x80041310: bne         $at, $zero, L_80041320
    if (ctx->r1 != 0) {
        // 0x80041314: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80041320;
    }
    // 0x80041314: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80041318: b           L_80041320
    // 0x8004131C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80041320;
    // 0x8004131C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80041320:
    // 0x80041320: blez        $s0, L_80041354
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80041324: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80041354;
    }
    // 0x80041324: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80041328: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8004132C: jalr        $s4
    // 0x80041330: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x80041330: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x80041334: beq         $v0, $zero, L_8004134C
    if (ctx->r2 == 0) {
        // 0x80041338: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_8004134C;
    }
    // 0x80041338: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8004133C: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80041340: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x80041344: b           L_80041354
    // 0x80041348: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_80041354;
    // 0x80041348: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_8004134C:
    // 0x8004134C: b           L_800415E8
    // 0x80041350: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x80041350: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80041354:
    // 0x80041354: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80041358: bgtzl       $s1, L_80041310
    if (SIGNED(ctx->r17) > 0) {
        // 0x8004135C: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80041310;
    }
    goto skip_8;
    // 0x8004135C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_8:
L_80041360:
    // 0x80041360: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
L_80041364:
    // 0x80041364: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80041368: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8004136C: blezl       $t9, L_800413A4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80041370: lw          $t9, 0xB0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB0);
            goto L_800413A4;
    }
    goto skip_9;
    // 0x80041370: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    skip_9:
    // 0x80041374: jalr        $s4
    // 0x80041378: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x80041378: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_6:
    // 0x8004137C: beq         $v0, $zero, L_80041398
    if (ctx->r2 == 0) {
        // 0x80041380: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80041398;
    }
    // 0x80041380: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80041384: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80041388: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x8004138C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80041390: b           L_800413A0
    // 0x80041394: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_800413A0;
    // 0x80041394: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_80041398:
    // 0x80041398: b           L_800415E8
    // 0x8004139C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x8004139C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800413A0:
    // 0x800413A0: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
L_800413A4:
    // 0x800413A4: slt         $t6, $zero, $t9
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800413A8: beql        $t6, $zero, L_80041410
    if (ctx->r14 == 0) {
        // 0x800413AC: lw          $t9, 0xB4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB4);
            goto L_80041410;
    }
    goto skip_10;
    // 0x800413AC: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    skip_10:
    // 0x800413B0: beq         $t6, $zero, L_8004140C
    if (ctx->r14 == 0) {
        // 0x800413B4: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_8004140C;
    }
    // 0x800413B4: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x800413B8: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_800413BC:
    // 0x800413BC: bne         $at, $zero, L_800413CC
    if (ctx->r1 != 0) {
        // 0x800413C0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800413CC;
    }
    // 0x800413C0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800413C4: b           L_800413CC
    // 0x800413C8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_800413CC;
    // 0x800413C8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_800413CC:
    // 0x800413CC: blez        $s0, L_80041400
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800413D0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80041400;
    }
    // 0x800413D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800413D4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800413D8: jalr        $s4
    // 0x800413DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x800413DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x800413E0: beq         $v0, $zero, L_800413F8
    if (ctx->r2 == 0) {
        // 0x800413E4: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800413F8;
    }
    // 0x800413E4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800413E8: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x800413EC: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800413F0: b           L_80041400
    // 0x800413F4: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_80041400;
    // 0x800413F4: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_800413F8:
    // 0x800413F8: b           L_800415E8
    // 0x800413FC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x800413FC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80041400:
    // 0x80041400: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80041404: bgtzl       $s1, L_800413BC
    if (SIGNED(ctx->r17) > 0) {
        // 0x80041408: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800413BC;
    }
    goto skip_11;
    // 0x80041408: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_11:
L_8004140C:
    // 0x8004140C: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
L_80041410:
    // 0x80041410: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80041414: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x80041418: blezl       $t9, L_80041450
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8004141C: lw          $t9, 0xB8($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XB8);
            goto L_80041450;
    }
    goto skip_12;
    // 0x8004141C: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    skip_12:
    // 0x80041420: jalr        $s4
    // 0x80041424: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x80041424: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_8:
    // 0x80041428: beq         $v0, $zero, L_80041444
    if (ctx->r2 == 0) {
        // 0x8004142C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80041444;
    }
    // 0x8004142C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80041430: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80041434: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80041438: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8004143C: b           L_8004144C
    // 0x80041440: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_8004144C;
    // 0x80041440: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_80041444:
    // 0x80041444: b           L_800415E8
    // 0x80041448: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x80041448: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_8004144C:
    // 0x8004144C: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
L_80041450:
    // 0x80041450: slt         $t6, $zero, $t9
    ctx->r14 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80041454: beql        $t6, $zero, L_800414BC
    if (ctx->r14 == 0) {
        // 0x80041458: lw          $t9, 0xBC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XBC);
            goto L_800414BC;
    }
    goto skip_13;
    // 0x80041458: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    skip_13:
    // 0x8004145C: beq         $t6, $zero, L_800414B8
    if (ctx->r14 == 0) {
        // 0x80041460: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_800414B8;
    }
    // 0x80041460: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80041464: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80041468:
    // 0x80041468: bne         $at, $zero, L_80041478
    if (ctx->r1 != 0) {
        // 0x8004146C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80041478;
    }
    // 0x8004146C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80041470: b           L_80041478
    // 0x80041474: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80041478;
    // 0x80041474: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80041478:
    // 0x80041478: blez        $s0, L_800414AC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8004147C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_800414AC;
    }
    // 0x8004147C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80041480: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80041484: jalr        $s4
    // 0x80041488: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x80041488: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x8004148C: beq         $v0, $zero, L_800414A4
    if (ctx->r2 == 0) {
        // 0x80041490: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800414A4;
    }
    // 0x80041490: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80041494: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80041498: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x8004149C: b           L_800414AC
    // 0x800414A0: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_800414AC;
    // 0x800414A0: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_800414A4:
    // 0x800414A4: b           L_800415E8
    // 0x800414A8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x800414A8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800414AC:
    // 0x800414AC: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800414B0: bgtzl       $s1, L_80041468
    if (SIGNED(ctx->r17) > 0) {
        // 0x800414B4: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80041468;
    }
    goto skip_14;
    // 0x800414B4: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_14:
L_800414B8:
    // 0x800414B8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
L_800414BC:
    // 0x800414BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800414C0: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x800414C4: blez        $t9, L_800414FC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800414C8: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_800414FC;
    }
    // 0x800414C8: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x800414CC: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x800414D0: jalr        $s4
    // 0x800414D4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x800414D4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_10:
    // 0x800414D8: beq         $v0, $zero, L_800414F4
    if (ctx->r2 == 0) {
        // 0x800414DC: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800414F4;
    }
    // 0x800414DC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800414E0: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x800414E4: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x800414E8: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x800414EC: b           L_800414FC
    // 0x800414F0: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_800414FC;
    // 0x800414F0: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_800414F4:
    // 0x800414F4: b           L_800415E8
    // 0x800414F8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x800414F8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800414FC:
    // 0x800414FC: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x80041500: slt         $t8, $zero, $t9
    ctx->r24 = SIGNED(0) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80041504: beql        $t8, $zero, L_8004156C
    if (ctx->r24 == 0) {
        // 0x80041508: lw          $t9, 0xD0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XD0);
            goto L_8004156C;
    }
    goto skip_15;
    // 0x80041508: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    skip_15:
    // 0x8004150C: beq         $t8, $zero, L_80041568
    if (ctx->r24 == 0) {
        // 0x80041510: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80041568;
    }
    // 0x80041510: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80041514: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80041518:
    // 0x80041518: bne         $at, $zero, L_80041528
    if (ctx->r1 != 0) {
        // 0x8004151C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80041528;
    }
    // 0x8004151C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80041520: b           L_80041528
    // 0x80041524: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80041528;
    // 0x80041524: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80041528:
    // 0x80041528: blez        $s0, L_8004155C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8004152C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8004155C;
    }
    // 0x8004152C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80041530: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80041534: jalr        $s4
    // 0x80041538: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x80041538: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x8004153C: beq         $v0, $zero, L_80041554
    if (ctx->r2 == 0) {
        // 0x80041540: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80041554;
    }
    // 0x80041540: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80041544: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80041548: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8004154C: b           L_8004155C
    // 0x80041550: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_8004155C;
    // 0x80041550: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_80041554:
    // 0x80041554: b           L_800415E8
    // 0x80041558: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x80041558: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_8004155C:
    // 0x8004155C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80041560: bgtzl       $s1, L_80041518
    if (SIGNED(ctx->r17) > 0) {
        // 0x80041564: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80041518;
    }
    goto skip_16;
    // 0x80041564: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_16:
L_80041568:
    // 0x80041568: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
L_8004156C:
    // 0x8004156C: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x80041570: andi        $t8, $t9, 0x4
    ctx->r24 = ctx->r25 & 0X4;
    // 0x80041574: beq         $t8, $zero, L_800415E0
    if (ctx->r24 == 0) {
        // 0x80041578: slt         $t7, $zero, $t6
        ctx->r15 = SIGNED(0) < SIGNED(ctx->r14) ? 1 : 0;
            goto L_800415E0;
    }
    // 0x80041578: slt         $t7, $zero, $t6
    ctx->r15 = SIGNED(0) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8004157C: beq         $t7, $zero, L_800415E0
    if (ctx->r15 == 0) {
        // 0x80041580: nop
    
            goto L_800415E0;
    }
    // 0x80041580: nop

    // 0x80041584: beq         $t7, $zero, L_800415E0
    if (ctx->r15 == 0) {
        // 0x80041588: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_800415E0;
    }
    // 0x80041588: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8004158C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80041590:
    // 0x80041590: bne         $at, $zero, L_800415A0
    if (ctx->r1 != 0) {
        // 0x80041594: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800415A0;
    }
    // 0x80041594: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80041598: b           L_800415A0
    // 0x8004159C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_800415A0;
    // 0x8004159C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_800415A0:
    // 0x800415A0: blez        $s0, L_800415D4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800415A4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_800415D4;
    }
    // 0x800415A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800415A8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800415AC: jalr        $s4
    // 0x800415B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_12;
    // 0x800415B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x800415B4: beq         $v0, $zero, L_800415CC
    if (ctx->r2 == 0) {
        // 0x800415B8: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800415CC;
    }
    // 0x800415B8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800415BC: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x800415C0: addu        $t8, $t9, $s0
    ctx->r24 = ADD32(ctx->r25, ctx->r16);
    // 0x800415C4: b           L_800415D4
    // 0x800415C8: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
        goto L_800415D4;
    // 0x800415C8: sw          $t8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r24;
L_800415CC:
    // 0x800415CC: b           L_800415E8
    // 0x800415D0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_800415E8;
    // 0x800415D0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_800415D4:
    // 0x800415D4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800415D8: bgtzl       $s1, L_80041590
    if (SIGNED(ctx->r17) > 0) {
        // 0x800415DC: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80041590;
    }
    goto skip_17;
    // 0x800415DC: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_17:
L_800415E0:
    // 0x800415E0: b           L_80041030
    // 0x800415E4: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
        goto L_80041030;
    // 0x800415E4: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
L_800415E8:
    // 0x800415E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800415EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800415F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800415F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800415F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800415FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80041600: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80041604: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80041608: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8004160C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80041610: jr          $ra
    // 0x80041614: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    TRACE_RETURN()
    return;
    // 0x80041614: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_800040D0_4CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800040D0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800040D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800040D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800040DC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x800040E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800040E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800040E8: bc1fl       L_800040FC
    if (!c1cs) {
        // 0x800040EC: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_800040FC;
    }
    goto skip_0;
    // 0x800040EC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_0:
    // 0x800040F0: b           L_800040FC
    // 0x800040F4: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_800040FC;
    // 0x800040F4: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x800040F8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800040FC:
    // 0x800040FC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80004100: nop

    // 0x80004104: bc1f        L_80004114
    if (!c1cs) {
        // 0x80004108: nop
    
            goto L_80004114;
    }
    // 0x80004108: nop

    // 0x8000410C: b           L_80004160
    // 0x80004110: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_80004160;
    // 0x80004110: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80004114:
    // 0x80004114: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80004118: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x8000411C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80004120: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80004124: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80004128: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8000412C: c.eq.d      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.d == ctx->f2.d;
    // 0x80004130: mov.d       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.d = ctx->f2.d;
    // 0x80004134: bc1tl       L_80004150
    if (c1cs) {
        // 0x80004138: c.lt.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
            goto L_80004150;
    }
    goto skip_1;
    // 0x80004138: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    skip_1:
    // 0x8000413C: jal         0x800166E0
    // 0x80004140: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    func_800166E0_172E0(rdram, ctx);
        goto after_0;
    // 0x80004140: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    after_0:
    // 0x80004144: b           L_80004164
    // 0x80004148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80004164;
    // 0x80004148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000414C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
L_80004150:
    // 0x80004150: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80004154: bc1fl       L_80004164
    if (!c1cs) {
        // 0x80004158: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80004164;
    }
    goto skip_2;
    // 0x80004158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8000415C: lwc1        $f0, -0x5728($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5728);
L_80004160:
    // 0x80004160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80004164:
    // 0x80004164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004168: jr          $ra
    // 0x8000416C: nop

    TRACE_RETURN()
    return;
    // 0x8000416C: nop

;}
RECOMP_FUNC void alSynStartVoiceParams(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80048444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048448: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004844C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80048450: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80048454: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80048458: beql        $t6, $zero, L_80048518
    if (ctx->r14 == 0) {
        // 0x8004845C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048518;
    }
    goto skip_0;
    // 0x8004845C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80048460: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80048464: jal         0x80047960
    // 0x80048468: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80048468: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004846C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80048470: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80048474: beq         $v0, $zero, L_80048514
    if (ctx->r2 == 0) {
        // 0x80048478: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80048514;
    }
    // 0x80048478: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004847C: lbu         $v1, 0x3B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3B);
    // 0x80048480: bgez        $v1, L_80048494
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80048484: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80048494;
    }
    // 0x80048484: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80048488: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x8004848C: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x80048490: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80048494:
    // 0x80048494: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80048498: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x8004849C: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x800484A0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x800484A4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x800484A8: sh          $t2, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r10;
    // 0x800484AC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800484B0: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x800484B4: lh          $t3, 0x1A($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X1A);
    // 0x800484B8: sh          $t3, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r11;
    // 0x800484BC: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x800484C0: sb          $t4, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r12;
    // 0x800484C4: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x800484C8: sb          $v1, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r3;
    // 0x800484CC: sh          $t5, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r13;
    // 0x800484D0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800484D4: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x800484D8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800484DC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x800484E0: jal         0x80047858
    // 0x800484E4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    _timeToSamples(rdram, ctx);
        goto after_1;
    // 0x800484E4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x800484E8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800484EC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x800484F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800484F4: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x800484F8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800484FC: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x80048500: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x80048504: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x80048508: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004850C: jalr        $t9
    // 0x80048510: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80048510: nop

    after_2:
L_80048514:
    // 0x80048514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048518:
    // 0x80048518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004851C: jr          $ra
    // 0x80048520: nop

    TRACE_RETURN()
    return;
    // 0x80048520: nop

;}
RECOMP_FUNC void func_8000C430_D030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C430: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C434: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C438: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C43C: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C440: beq         $v0, $zero, L_8000C44C
    if (ctx->r2 == 0) {
        // 0x8000C444: nop
    
            goto L_8000C44C;
    }
    // 0x8000C444: nop

    // 0x8000C448: sh          $a1, 0x70($v0)
    MEM_H(0X70, ctx->r2) = ctx->r5;
L_8000C44C:
    // 0x8000C44C: jr          $ra
    // 0x8000C450: nop

    TRACE_RETURN()
    return;
    // 0x8000C450: nop

;}
RECOMP_FUNC void func_80029560_2A160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029560: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x80029564: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80029568: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002956C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80029570: sw          $a1, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r5;
    // 0x80029574: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x80029578: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002957C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80029580: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x80029584: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x80029588: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x8002958C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x80029590: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x80029594: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x80029598: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x8002959C: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x800295A0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x800295A4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x800295A8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x800295AC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x800295B0: sw          $a0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r4;
    // 0x800295B4: sw          $a2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r6;
    // 0x800295B8: sw          $a3, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r7;
    // 0x800295BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800295C0: bgez        $zero, L_800295D8
    if (SIGNED(0) >= 0) {
        // 0x800295C4: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800295D8;
    }
    // 0x800295C4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800295C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800295CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800295D0: nop

    // 0x800295D4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_800295D8:
    // 0x800295D8: lwc1        $f8, 0x1B8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x800295DC: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
    // 0x800295E0: swc1        $f0, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f0.u32l;
    // 0x800295E4: cvt.d.s     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f2.d = CVT_D_S(ctx->f8.fl);
    // 0x800295E8: swc1        $f0, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f0.u32l;
    // 0x800295EC: c.eq.d      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.d == ctx->f2.d;
    // 0x800295F0: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x800295F4: swc1        $f12, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f12.u32l;
    // 0x800295F8: lwc1        $f14, 0x1B0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x800295FC: bc1f        L_80029678
    if (!c1cs) {
        // 0x80029600: lui         $v0, 0x8017
        ctx->r2 = S32(0X8017 << 16);
            goto L_80029678;
    }
    // 0x80029600: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80029604: lwc1        $f12, 0x1AC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x80029608: jal         0x80029E08
    // 0x8002960C: lw          $a2, 0x1B4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B4);
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x8002960C: lw          $a2, 0x1B4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B4);
    after_0:
    // 0x80029610: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80029614: addiu       $t7, $sp, 0xEC
    ctx->r15 = ADD32(ctx->r29, 0XEC);
    // 0x80029618: sh          $v0, 0x124($sp)
    MEM_H(0X124, ctx->r29) = ctx->r2;
    // 0x8002961C: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x80029620: sh          $zero, 0x122($sp)
    MEM_H(0X122, ctx->r29) = 0;
    // 0x80029624: addiu       $t9, $t7, 0x48
    ctx->r25 = ADD32(ctx->r15, 0X48);
    // 0x80029628: lw          $t6, 0x1A8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A8);
    // 0x8002962C: swc1        $f0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f0.u32l;
    // 0x80029630: swc1        $f0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f0.u32l;
    // 0x80029634: swc1        $f0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f0.u32l;
    // 0x80029638: swc1        $f0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f0.u32l;
    // 0x8002963C: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
    // 0x80029640: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x80029644: swc1        $f0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f0.u32l;
    // 0x80029648: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
L_8002964C:
    // 0x8002964C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80029650: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80029654: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80029658: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8002965C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80029660: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80029664: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80029668: bne         $t7, $t9, L_8002964C
    if (ctx->r15 != ctx->r25) {
        // 0x8002966C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8002964C;
    }
    // 0x8002966C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80029670: b           L_80029DCC
    // 0x80029674: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_80029DCC;
    // 0x80029674: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_80029678:
    // 0x80029678: lw          $v0, -0x70A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X70A0);
    // 0x8002967C: sh          $zero, 0x124($sp)
    MEM_H(0X124, ctx->r29) = 0;
    // 0x80029680: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029684: bne         $v0, $zero, L_800296C4
    if (ctx->r2 != 0) {
        // 0x80029688: addiu       $t5, $zero, 0xFF
        ctx->r13 = ADD32(0, 0XFF);
            goto L_800296C4;
    }
    // 0x80029688: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8002968C: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x80029690: addiu       $t6, $t9, 0x48
    ctx->r14 = ADD32(ctx->r25, 0X48);
    // 0x80029694: lw          $t8, 0x1A8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A8);
L_80029698:
    // 0x80029698: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8002969C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x800296A0: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x800296A4: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x800296A8: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x800296AC: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x800296B0: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x800296B4: bne         $t9, $t6, L_80029698
    if (ctx->r25 != ctx->r14) {
        // 0x800296B8: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80029698;
    }
    // 0x800296B8: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x800296BC: b           L_80029DCC
    // 0x800296C0: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_80029DCC;
    // 0x800296C0: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_800296C4:
    // 0x800296C4: c.lt.d      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.d < ctx->f18.d;
    // 0x800296C8: lwc1        $f10, -0x3E08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3E08);
    // 0x800296CC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800296D0: lwc1        $f4, -0x3E04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3E04);
    // 0x800296D4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800296D8: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x800296DC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800296E0: lw          $t3, -0x709C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X709C);
    // 0x800296E4: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x800296E8: bc1f        L_800296F8
    if (!c1cs) {
        // 0x800296EC: swc1        $f4, 0x15C($sp)
        MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
            goto L_800296F8;
    }
    // 0x800296EC: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
    // 0x800296F0: b           L_80029708
    // 0x800296F4: swc1        $f12, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f12.u32l;
        goto L_80029708;
    // 0x800296F4: swc1        $f12, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f12.u32l;
L_800296F8:
    // 0x800296F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800296FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80029700: nop

    // 0x80029704: swc1        $f6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f6.u32l;
L_80029708:
    // 0x80029708: lwc1        $f12, 0x1B0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002970C: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x80029710: ori         $s2, $zero, 0xFFFF
    ctx->r18 = 0 | 0XFFFF;
    // 0x80029714: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x80029718: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
L_8002971C:
    // 0x8002971C: multu       $a1, $t4
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029720: lwc1        $f4, 0x1AC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x80029724: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80029728: mflo        $t7
    ctx->r15 = lo;
    // 0x8002972C: addu        $a2, $t3, $t7
    ctx->r6 = ADD32(ctx->r11, ctx->r15);
    // 0x80029730: lhu         $t1, 0x0($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X0);
    // 0x80029734: multu       $a1, $s1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029738: mflo        $t6
    ctx->r14 = lo;
    // 0x8002973C: addu        $v0, $t3, $t6
    ctx->r2 = ADD32(ctx->r11, ctx->r14);
    // 0x80029740: lh          $t9, 0x6($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6);
    // 0x80029744: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80029748: nop

    // 0x8002974C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80029750: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80029754: nop

    // 0x80029758: bc1tl       L_80029814
    if (c1cs) {
        // 0x8002975C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_0;
    // 0x8002975C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_0:
    // 0x80029760: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x80029764: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80029768: nop

    // 0x8002976C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80029770: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80029774: nop

    // 0x80029778: bc1tl       L_80029814
    if (c1cs) {
        // 0x8002977C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_1;
    // 0x8002977C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_1:
    // 0x80029780: lh          $t7, 0xA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XA);
    // 0x80029784: lwc1        $f2, 0x1B4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80029788: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002978C: nop

    // 0x80029790: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80029794: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x80029798: nop

    // 0x8002979C: bc1tl       L_80029814
    if (c1cs) {
        // 0x800297A0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_2;
    // 0x800297A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_2:
    // 0x800297A4: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x800297A8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800297AC: nop

    // 0x800297B0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800297B4: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x800297B8: nop

    // 0x800297BC: bc1tl       L_80029814
    if (c1cs) {
        // 0x800297C0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_3;
    // 0x800297C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_3:
    // 0x800297C4: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    // 0x800297C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800297CC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800297D0: nop

    // 0x800297D4: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800297D8: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x800297DC: nop

    // 0x800297E0: bc1tl       L_80029814
    if (c1cs) {
        // 0x800297E4: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_4;
    // 0x800297E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_4:
    // 0x800297E8: swc1        $f12, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f12.u32l;
    // 0x800297EC: lh          $t8, 0xE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE);
    // 0x800297F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800297F4: lwc1        $f4, 0x1B0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x800297F8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800297FC: add.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x80029800: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80029804: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80029808: nop

    // 0x8002980C: bc1f        L_80029958
    if (!c1cs) {
        // 0x80029810: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029958;
    }
    // 0x80029810: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_80029814:
    // 0x80029814: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80029818: lwc1        $f0, 0x1AC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x8002981C: bne         $s2, $t1, L_8002985C
    if (ctx->r18 != ctx->r9) {
        // 0x80029820: lwc1        $f2, 0x1B4($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1B4);
            goto L_8002985C;
    }
    // 0x80029820: lwc1        $f2, 0x1B4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80029824: addiu       $t6, $sp, 0xEC
    ctx->r14 = ADD32(ctx->r29, 0XEC);
    // 0x80029828: addiu       $t8, $t6, 0x48
    ctx->r24 = ADD32(ctx->r14, 0X48);
    // 0x8002982C: lw          $t7, 0x1A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A8);
L_80029830:
    // 0x80029830: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80029834: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80029838: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8002983C: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80029840: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80029844: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x80029848: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8002984C: bne         $t6, $t8, L_80029830
    if (ctx->r14 != ctx->r24) {
        // 0x80029850: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80029830;
    }
    // 0x80029850: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80029854: b           L_80029DCC
    // 0x80029858: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_80029DCC;
    // 0x80029858: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_8002985C:
    // 0x8002985C: multu       $t1, $t4
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029860: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x80029864: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80029868: mflo        $t9
    ctx->r25 = lo;
    // 0x8002986C: addu        $t8, $t3, $t9
    ctx->r24 = ADD32(ctx->r11, ctx->r25);
    // 0x80029870: lhu         $t1, 0x0($t8)
    ctx->r9 = MEM_HU(ctx->r24, 0X0);
    // 0x80029874: multu       $a1, $s1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029878: mflo        $t6
    ctx->r14 = lo;
    // 0x8002987C: addu        $v0, $t3, $t6
    ctx->r2 = ADD32(ctx->r11, ctx->r14);
    // 0x80029880: lh          $t7, 0x6($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6);
    // 0x80029884: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80029888: nop

    // 0x8002988C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80029890: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80029894: nop

    // 0x80029898: bc1tl       L_80029814
    if (c1cs) {
        // 0x8002989C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_5;
    // 0x8002989C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_5:
    // 0x800298A0: lh          $t9, 0xC($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XC);
    // 0x800298A4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800298A8: nop

    // 0x800298AC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800298B0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800298B4: nop

    // 0x800298B8: bc1tl       L_80029814
    if (c1cs) {
        // 0x800298BC: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_6;
    // 0x800298BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_6:
    // 0x800298C0: lh          $t8, 0xA($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XA);
    // 0x800298C4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800298C8: nop

    // 0x800298CC: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800298D0: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x800298D4: nop

    // 0x800298D8: bc1tl       L_80029814
    if (c1cs) {
        // 0x800298DC: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_7;
    // 0x800298DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_7:
    // 0x800298E0: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x800298E4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800298E8: nop

    // 0x800298EC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800298F0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x800298F4: nop

    // 0x800298F8: bc1tl       L_80029814
    if (c1cs) {
        // 0x800298FC: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_8;
    // 0x800298FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_8:
    // 0x80029900: lh          $t7, 0x8($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X8);
    // 0x80029904: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80029908: nop

    // 0x8002990C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80029910: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80029914: nop

    // 0x80029918: bc1tl       L_80029814
    if (c1cs) {
        // 0x8002991C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_9;
    // 0x8002991C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_9:
    // 0x80029920: lh          $t9, 0xE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XE);
    // 0x80029924: add.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x80029928: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002992C: nop

    // 0x80029930: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80029934: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80029938: nop

    // 0x8002993C: bc1tl       L_80029814
    if (c1cs) {
        // 0x80029940: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80029814;
    }
    goto skip_10;
    // 0x80029940: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_10:
    // 0x80029944: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80029948: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x8002994C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80029950: addu        $a2, $t3, $t8
    ctx->r6 = ADD32(ctx->r11, ctx->r24);
    // 0x80029954: swc1        $f12, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f12.u32l;
L_80029958:
    // 0x80029958: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8002995C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80029960: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80029964: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80029968: addiu       $a1, $v1, 0x3
    ctx->r5 = ADD32(ctx->r3, 0X3);
    // 0x8002996C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80029970: lhu         $s5, 0x2($a2)
    ctx->r21 = MEM_HU(ctx->r6, 0X2);
    // 0x80029974: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80029978: andi        $ra, $t6, 0xFFFF
    ctx->r31 = ctx->r14 & 0XFFFF;
    // 0x8002997C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80029980: andi        $t0, $s3, 0xFFFF
    ctx->r8 = ctx->r19 & 0XFFFF;
    // 0x80029984: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
L_80029988:
    // 0x80029988: multu       $a1, $t4
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002998C: lwc1        $f6, 0x1AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x80029990: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80029994: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80029998: mflo        $t7
    ctx->r15 = lo;
    // 0x8002999C: addu        $a2, $t3, $t7
    ctx->r6 = ADD32(ctx->r11, ctx->r15);
    // 0x800299A0: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x800299A4: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800299A8: mflo        $t9
    ctx->r25 = lo;
    // 0x800299AC: addu        $v0, $s4, $t9
    ctx->r2 = ADD32(ctx->r20, ctx->r25);
    // 0x800299B0: lwc1        $f26, 0x0($v0)
    ctx->f26.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800299B4: lwc1        $f28, 0x8($v0)
    ctx->f28.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800299B8: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800299BC: mul.s       $f20, $f6, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x800299C0: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800299C4: lbu         $a3, 0x10($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X10);
    // 0x800299C8: mul.s       $f22, $f8, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x800299CC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800299D0: mul.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x800299D4: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x800299D8: add.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f10.fl;
    // 0x800299DC: add.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x800299E0: add.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x800299E4: beq         $a3, $zero, L_80029A00
    if (ctx->r7 == 0) {
        // 0x800299E8: mov.s       $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
            goto L_80029A00;
    }
    // 0x800299E8: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
    // 0x800299EC: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x800299F0: c.lt.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d < ctx->f18.d;
    // 0x800299F4: nop

    // 0x800299F8: bc1fl       L_80029B6C
    if (!c1cs) {
        // 0x800299FC: cvt.d.s     $f6, $f24
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
            goto L_80029B6C;
    }
    goto skip_11;
    // 0x800299FC: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
    skip_11:
L_80029A00:
    // 0x80029A00: mul.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x80029A04: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80029A08: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x80029A0C: c.eq.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d == ctx->f10.d;
    // 0x80029A10: nop

    // 0x80029A14: bc1fl       L_80029A2C
    if (!c1cs) {
        // 0x80029A18: neg.s       $f6, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
            goto L_80029A2C;
    }
    goto skip_12;
    // 0x80029A18: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    skip_12:
    // 0x80029A1C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80029A20: b           L_80029A34
    // 0x80029A24: nop

        goto L_80029A34;
    // 0x80029A24: nop

    // 0x80029A28: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
L_80029A2C:
    // 0x80029A2C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80029A30: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
L_80029A34:
    // 0x80029A34: bne         $a0, $zero, L_80029B28
    if (ctx->r4 != 0) {
        // 0x80029A38: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_80029B28;
    }
    // 0x80029A38: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029A3C: ldc1        $f4, -0x3E00($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3E00);
    // 0x80029A40: cvt.d.s     $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f10.d = CVT_D_S(ctx->f30.fl);
    // 0x80029A44: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029A48: c.eq.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d == ctx->f10.d;
    // 0x80029A4C: nop

    // 0x80029A50: bc1t        L_80029AA8
    if (c1cs) {
        // 0x80029A54: nop
    
            goto L_80029AA8;
    }
    // 0x80029A54: nop

    // 0x80029A58: ldc1        $f6, -0x3DF8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3DF8);
    // 0x80029A5C: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x80029A60: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029A64: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80029A68: nop

    // 0x80029A6C: bc1f        L_80029AA8
    if (!c1cs) {
        // 0x80029A70: nop
    
            goto L_80029AA8;
    }
    // 0x80029A70: nop

    // 0x80029A74: ldc1        $f8, -0x3DF0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3DF0);
    // 0x80029A78: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80029A7C: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x80029A80: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x80029A84: nop

    // 0x80029A88: bc1f        L_80029AA8
    if (!c1cs) {
        // 0x80029A8C: nop
    
            goto L_80029AA8;
    }
    // 0x80029A8C: nop

    // 0x80029A90: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80029A94: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80029A98: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80029A9C: add.s       $f4, $f20, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x80029AA0: add.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x80029AA4: add.s       $f24, $f10, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f16.fl;
L_80029AA8:
    // 0x80029AA8: beql        $t2, $zero, L_80029B2C
    if (ctx->r10 == 0) {
        // 0x80029AAC: cvt.d.s     $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
            goto L_80029B2C;
    }
    goto skip_13;
    // 0x80029AAC: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    skip_13:
    // 0x80029AB0: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x80029AB4: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80029AB8: c.eq.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d == ctx->f6.d;
    // 0x80029ABC: nop

    // 0x80029AC0: bc1fl       L_80029B2C
    if (!c1cs) {
        // 0x80029AC4: cvt.d.s     $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
            goto L_80029B2C;
    }
    goto skip_14;
    // 0x80029AC4: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    skip_14:
    // 0x80029AC8: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80029ACC: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x80029AD0: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80029AD4: nop

    // 0x80029AD8: bc1fl       L_80029B2C
    if (!c1cs) {
        // 0x80029ADC: cvt.d.s     $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
            goto L_80029B2C;
    }
    goto skip_15;
    // 0x80029ADC: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    skip_15:
    // 0x80029AE0: c.eq.s      $f10, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f10.fl == ctx->f26.fl;
    // 0x80029AE4: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x80029AE8: bc1fl       L_80029B2C
    if (!c1cs) {
        // 0x80029AEC: cvt.d.s     $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
            goto L_80029B2C;
    }
    goto skip_16;
    // 0x80029AEC: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    skip_16:
    // 0x80029AF0: c.eq.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl == ctx->f14.fl;
    // 0x80029AF4: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x80029AF8: bc1fl       L_80029B2C
    if (!c1cs) {
        // 0x80029AFC: cvt.d.s     $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
            goto L_80029B2C;
    }
    goto skip_17;
    // 0x80029AFC: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    skip_17:
    // 0x80029B00: c.eq.s      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.fl == ctx->f28.fl;
    // 0x80029B04: lwc1        $f4, 0x150($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X150);
    // 0x80029B08: bc1fl       L_80029B2C
    if (!c1cs) {
        // 0x80029B0C: cvt.d.s     $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
            goto L_80029B2C;
    }
    goto skip_18;
    // 0x80029B0C: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    skip_18:
    // 0x80029B10: c.eq.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl == ctx->f16.fl;
    // 0x80029B14: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80029B18: bc1fl       L_80029B2C
    if (!c1cs) {
        // 0x80029B1C: cvt.d.s     $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
            goto L_80029B2C;
    }
    goto skip_19;
    // 0x80029B1C: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    skip_19:
    // 0x80029B20: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80029B24: nop

L_80029B28:
    // 0x80029B28: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
L_80029B2C:
    // 0x80029B2C: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x80029B30: nop

    // 0x80029B34: bc1fl       L_80029B6C
    if (!c1cs) {
        // 0x80029B38: cvt.d.s     $f6, $f24
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
            goto L_80029B6C;
    }
    goto skip_20;
    // 0x80029B38: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
    skip_20:
    // 0x80029B3C: c.le.s      $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f12.fl <= ctx->f30.fl;
    // 0x80029B40: nop

    // 0x80029B44: bc1fl       L_80029B6C
    if (!c1cs) {
        // 0x80029B48: cvt.d.s     $f6, $f24
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
            goto L_80029B6C;
    }
    goto skip_21;
    // 0x80029B48: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
    skip_21:
    // 0x80029B4C: mov.s       $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    ctx->f30.fl = ctx->f12.fl;
    // 0x80029B50: swc1        $f26, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f26.u32l;
    // 0x80029B54: swc1        $f14, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f14.u32l;
    // 0x80029B58: swc1        $f28, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f28.u32l;
    // 0x80029B5C: swc1        $f16, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f16.u32l;
    // 0x80029B60: swc1        $f24, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f24.u32l;
    // 0x80029B64: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x80029B68: cvt.d.s     $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f6.d = CVT_D_S(ctx->f24.fl);
L_80029B6C:
    // 0x80029B6C: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x80029B70: nop

    // 0x80029B74: bc1fl       L_80029CB4
    if (!c1cs) {
        // 0x80029B78: lh          $v0, 0x4($a2)
        ctx->r2 = MEM_H(ctx->r6, 0X4);
            goto L_80029CB4;
    }
    goto skip_22;
    // 0x80029B78: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
    skip_22:
    // 0x80029B7C: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    // 0x80029B80: lwc1        $f14, 0x1B8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x80029B84: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029B88: bne         $v0, $zero, L_80029CA8
    if (ctx->r2 != 0) {
        // 0x80029B8C: nop
    
            goto L_80029CA8;
    }
    // 0x80029B8C: nop

    // 0x80029B90: mul.s       $f0, $f14, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f30.fl);
    // 0x80029B94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80029B98: addiu       $t2, $zero, 0x7FFF
    ctx->r10 = ADD32(0, 0X7FFF);
    // 0x80029B9C: andi        $a1, $ra, 0xFFFF
    ctx->r5 = ctx->r31 & 0XFFFF;
    // 0x80029BA0: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80029BA4: andi        $s0, $t5, 0xFF
    ctx->r16 = ctx->r13 & 0XFF;
    // 0x80029BA8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80029BAC: nop

    // 0x80029BB0: bc1fl       L_80029BC8
    if (!c1cs) {
        // 0x80029BB4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80029BC8;
    }
    goto skip_23;
    // 0x80029BB4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_23:
    // 0x80029BB8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80029BBC: b           L_80029BCC
    // 0x80029BC0: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_80029BCC;
    // 0x80029BC0: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x80029BC4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80029BC8:
    // 0x80029BC8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80029BCC:
    // 0x80029BCC: ldc1        $f10, -0x3DE8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3DE8);
    // 0x80029BD0: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80029BD4: andi        $t8, $t0, 0xFFFF
    ctx->r24 = ctx->r8 & 0XFFFF;
    // 0x80029BD8: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x80029BDC: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80029BE0: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x80029BE4: bc1fl       L_80029C2C
    if (!c1cs) {
        // 0x80029BE8: add.s       $f10, $f2, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
            goto L_80029C2C;
    }
    goto skip_24;
    // 0x80029BE8: add.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
    skip_24:
    // 0x80029BEC: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80029BF0: c.eq.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d == ctx->f6.d;
    // 0x80029BF4: nop

    // 0x80029BF8: bc1tl       L_80029C2C
    if (c1cs) {
        // 0x80029BFC: add.s       $f10, $f2, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
            goto L_80029C2C;
    }
    goto skip_25;
    // 0x80029BFC: add.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
    skip_25:
    // 0x80029C00: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80029C04: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029C08: c.le.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d <= ctx->f8.d;
    // 0x80029C0C: nop

    // 0x80029C10: bc1f        L_80029C24
    if (!c1cs) {
        // 0x80029C14: nop
    
            goto L_80029C24;
    }
    // 0x80029C14: nop

    // 0x80029C18: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029C1C: b           L_80029C28
    // 0x80029C20: lwc1        $f2, -0x3DE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3DE0);
        goto L_80029C28;
    // 0x80029C20: lwc1        $f2, -0x3DE0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3DE0);
L_80029C24:
    // 0x80029C24: lwc1        $f2, -0x3DDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3DDC);
L_80029C28:
    // 0x80029C28: add.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
L_80029C2C:
    // 0x80029C2C: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80029C30: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80029C34: bne         $t8, $zero, L_80029C7C
    if (ctx->r24 != 0) {
        // 0x80029C38: swc1        $f10, 0x148($sp)
        MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
            goto L_80029C7C;
    }
    // 0x80029C38: swc1        $f10, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
    // 0x80029C3C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80029C40: sh          $t6, 0x124($sp)
    MEM_H(0X124, ctx->r29) = ctx->r14;
    // 0x80029C44: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x80029C48: addiu       $t6, $t9, 0x48
    ctx->r14 = ADD32(ctx->r25, 0X48);
    // 0x80029C4C: lw          $t7, 0x1A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A8);
L_80029C50:
    // 0x80029C50: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80029C54: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80029C58: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80029C5C: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80029C60: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80029C64: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x80029C68: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80029C6C: bne         $t9, $t6, L_80029C50
    if (ctx->r25 != ctx->r14) {
        // 0x80029C70: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80029C50;
    }
    // 0x80029C70: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80029C74: b           L_80029DCC
    // 0x80029C78: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_80029DCC;
    // 0x80029C78: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_80029C7C:
    // 0x80029C7C: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80029C80: lwc1        $f8, 0x170($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X170);
    // 0x80029C84: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x80029C88: swc1        $f6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f6.u32l;
    // 0x80029C8C: lwc1        $f10, 0x168($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X168);
    // 0x80029C90: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x80029C94: swc1        $f8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f8.u32l;
    // 0x80029C98: swc1        $f4, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f4.u32l;
    // 0x80029C9C: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x80029CA0: b           L_80029988
    // 0x80029CA4: swc1        $f6, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f6.u32l;
        goto L_80029988;
    // 0x80029CA4: swc1        $f6, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f6.u32l;
L_80029CA8:
    // 0x80029CA8: b           L_80029988
    // 0x80029CAC: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
        goto L_80029988;
    // 0x80029CAC: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80029CB0: lh          $v0, 0x4($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X4);
L_80029CB4:
    // 0x80029CB4: bne         $v0, $zero, L_80029DC4
    if (ctx->r2 != 0) {
        // 0x80029CB8: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_80029DC4;
    }
    // 0x80029CB8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80029CBC: bne         $t2, $at, L_80029D78
    if (ctx->r10 != ctx->r1) {
        // 0x80029CC0: nop
    
            goto L_80029D78;
    }
    // 0x80029CC0: nop

    // 0x80029CC4: bne         $s0, $zero, L_80029CEC
    if (ctx->r16 != 0) {
        // 0x80029CC8: lwc1        $f8, 0x174($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X174);
            goto L_80029CEC;
    }
    // 0x80029CC8: lwc1        $f8, 0x174($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X174);
    // 0x80029CCC: lwc1        $f4, 0x170($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X170);
    // 0x80029CD0: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x80029CD4: lwc1        $f6, 0x168($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X168);
    // 0x80029CD8: swc1        $f8, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f8.u32l;
    // 0x80029CDC: andi        $s0, $t5, 0xFF
    ctx->r16 = ctx->r13 & 0XFF;
    // 0x80029CE0: swc1        $f4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f4.u32l;
    // 0x80029CE4: swc1        $f10, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f10.u32l;
    // 0x80029CE8: swc1        $f6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f6.u32l;
L_80029CEC:
    // 0x80029CEC: lwc1        $f8, 0x148($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80029CF0: lwc1        $f4, 0x1B0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x80029CF4: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80029CF8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029CFC: sub.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80029D00: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x80029D04: mul.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80029D08: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80029D0C: nop

    // 0x80029D10: bc1tl       L_80029D34
    if (c1cs) {
        // 0x80029D14: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80029D34;
    }
    goto skip_26;
    // 0x80029D14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_26:
    // 0x80029D18: ldc1        $f10, -0x3DD8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3DD8);
    // 0x80029D1C: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x80029D20: c.eq.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d == ctx->f6.d;
    // 0x80029D24: nop

    // 0x80029D28: bc1f        L_80029D78
    if (!c1cs) {
        // 0x80029D2C: nop
    
            goto L_80029D78;
    }
    // 0x80029D2C: nop

    // 0x80029D30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80029D34:
    // 0x80029D34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80029D38: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x80029D3C: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x80029D40: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    // 0x80029D44: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x80029D48: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x80029D4C: lwc1        $f4, 0x150($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X150);
    // 0x80029D50: sh          $t8, 0x124($sp)
    MEM_H(0X124, ctx->r29) = ctx->r24;
    // 0x80029D54: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x80029D58: swc1        $f2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f2.u32l;
    // 0x80029D5C: swc1        $f0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f0.u32l;
    // 0x80029D60: sb          $s0, 0x120($sp)
    MEM_B(0X120, ctx->r29) = ctx->r16;
    // 0x80029D64: sh          $s5, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r21;
    // 0x80029D68: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x80029D6C: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x80029D70: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    // 0x80029D74: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
L_80029D78:
    // 0x80029D78: bne         $s2, $t1, L_80029DB8
    if (ctx->r18 != ctx->r9) {
        // 0x80029D7C: lwc1        $f12, 0x1B0($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1B0);
            goto L_80029DB8;
    }
    // 0x80029D7C: lwc1        $f12, 0x1B0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x80029D80: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x80029D84: addiu       $t8, $t9, 0x48
    ctx->r24 = ADD32(ctx->r25, 0X48);
    // 0x80029D88: lw          $t6, 0x1A8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A8);
L_80029D8C:
    // 0x80029D8C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80029D90: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80029D94: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80029D98: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80029D9C: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80029DA0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80029DA4: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80029DA8: bne         $t9, $t8, L_80029D8C
    if (ctx->r25 != ctx->r24) {
        // 0x80029DAC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80029D8C;
    }
    // 0x80029DAC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80029DB0: b           L_80029DCC
    // 0x80029DB4: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
        goto L_80029DCC;
    // 0x80029DB4: lw          $v0, 0x1A8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A8);
L_80029DB8:
    // 0x80029DB8: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x80029DBC: b           L_8002971C
    // 0x80029DC0: swc1        $f12, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f12.u32l;
        goto L_8002971C;
    // 0x80029DC0: swc1        $f12, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f12.u32l;
L_80029DC4:
    // 0x80029DC4: b           L_80029988
    // 0x80029DC8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
        goto L_80029988;
    // 0x80029DC8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
L_80029DCC:
    // 0x80029DCC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80029DD0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80029DD4: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80029DD8: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80029DDC: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x80029DE0: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x80029DE4: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x80029DE8: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80029DEC: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80029DF0: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x80029DF4: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80029DF8: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x80029DFC: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x80029E00: jr          $ra
    // 0x80029E04: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    TRACE_RETURN()
    return;
    // 0x80029E04: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void func_8003D310_3DF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D318: jal         0x8003F1D8
    // 0x8003D31C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x8003D31C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003D320: beql        $v0, $zero, L_8003D33C
    if (ctx->r2 == 0) {
        // 0x8003D324: lw          $v0, 0x18($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X18);
            goto L_8003D33C;
    }
    goto skip_0;
    // 0x8003D324: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x8003D328: jal         0x8003D428
    // 0x8003D32C: nop

    func_8003D428_3E028(rdram, ctx);
        goto after_1;
    // 0x8003D32C: nop

    after_1:
    // 0x8003D330: jal         0x8000C838
    // 0x8003D334: nop

    func_8000C838_D438(rdram, ctx);
        goto after_2;
    // 0x8003D334: nop

    after_2:
    // 0x8003D338: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
L_8003D33C:
    // 0x8003D33C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003D340: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D344: sw          $t6, 0x7900($at)
    MEM_W(0X7900, ctx->r1) = ctx->r14;
    // 0x8003D348: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003D34C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8003D350: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8003D354: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8003D358: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D35C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8003D360: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x8003D364: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8003D368: sw          $t7, 0x7904($at)
    MEM_W(0X7904, ctx->r1) = ctx->r15;
    // 0x8003D36C: lw          $a0, 0x79A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X79A0);
    // 0x8003D370: jal         0x8003D468
    // 0x8003D374: lh          $a1, -0x79F8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X79F8);
    func_8003D468_3E068(rdram, ctx);
        goto after_3;
    // 0x8003D374: lh          $a1, -0x79F8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X79F8);
    after_3:
    // 0x8003D378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D37C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D380: jr          $ra
    // 0x8003D384: nop

    TRACE_RETURN()
    return;
    // 0x8003D384: nop

;}
RECOMP_FUNC void func_800035D0_41D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800035D0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800035D4: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x800035D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800035DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800035E0: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x800035E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800035E8: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x800035EC: lbu         $t6, -0x5228($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5228);
    // 0x800035F0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800035F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800035F8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800035FC: sb          $t7, -0x5228($at)
    MEM_B(-0X5228, ctx->r1) = ctx->r15;
    // 0x80003600: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80003604: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000360C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80003610: jal         0x80003428
    // 0x80003614: sb          $zero, -0x5227($at)
    MEM_B(-0X5227, ctx->r1) = 0;
    func_80003428_4028(rdram, ctx);
        goto after_0;
    // 0x80003614: sb          $zero, -0x5227($at)
    MEM_B(-0X5227, ctx->r1) = 0;
    after_0:
    // 0x80003618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000361C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003620: jr          $ra
    // 0x80003624: nop

    TRACE_RETURN()
    return;
    // 0x80003624: nop

;}
RECOMP_FUNC void func_8000AAE8_B6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000AAE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000AAEC:
    // 0x8000AAEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000AAF0: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8000AAF4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000AAF8: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8000AAFC: addiu       $a0, $a0, 0x374
    ctx->r4 = ADD32(ctx->r4, 0X374);
    // 0x8000AB00: bne         $at, $zero, L_8000AAEC
    if (ctx->r1 != 0) {
        // 0x8000AB04: sb          $zero, -0x4($a0)
        MEM_B(-0X4, ctx->r4) = 0;
            goto L_8000AAEC;
    }
    // 0x8000AB04: sb          $zero, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = 0;
    // 0x8000AB08: jr          $ra
    // 0x8000AB0C: nop

    TRACE_RETURN()
    return;
    // 0x8000AB0C: nop

;}
RECOMP_FUNC void func_800196F0_1A2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800196F0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800196F4: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x800196F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800196FC: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x80019700: addiu       $t7, $t7, -0x48E0
    ctx->r15 = ADD32(ctx->r15, -0X48E0);
    // 0x80019704: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80019708: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8001970C: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x80019710: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80019714: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80019718: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8001971C: addiu       $t6, $t6, -0x48D8
    ctx->r14 = ADD32(ctx->r14, -0X48D8);
    // 0x80019720: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80019724: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80019728: addiu       $t8, $sp, 0x80
    ctx->r24 = ADD32(ctx->r29, 0X80);
    // 0x8001972C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80019730: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x80019734: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x80019738: lui         $v0, 0xFFF
    ctx->r2 = S32(0XFFF << 16);
    // 0x8001973C: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x80019740: and         $t8, $t7, $v0
    ctx->r24 = ctx->r15 & ctx->r2;
    // 0x80019744: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x80019748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001974C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80019750: beq         $v0, $t8, L_80019D30
    if (ctx->r2 == ctx->r24) {
        // 0x80019754: or          $t4, $zero, $zero
        ctx->r12 = 0 | 0;
            goto L_80019D30;
    }
    // 0x80019754: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x80019758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001975C: lw          $t6, -0x7ADC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7ADC);
    // 0x80019760: slti        $at, $zero, 0x6
    ctx->r1 = SIGNED(0) < 0X6 ? 1 : 0;
    // 0x80019764: bne         $t6, $zero, L_80019A1C
    if (ctx->r14 != 0) {
        // 0x80019768: nop
    
            goto L_80019A1C;
    }
    // 0x80019768: nop

    // 0x8001976C: beq         $at, $zero, L_800197F0
    if (ctx->r1 == 0) {
        // 0x80019770: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800197F0;
    }
    // 0x80019770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80019774: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80019778: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8001977C: addiu       $t2, $t2, -0x3A34
    ctx->r10 = ADD32(ctx->r10, -0X3A34);
    // 0x80019780: addiu       $t5, $t5, -0x7B60
    ctx->r13 = ADD32(ctx->r13, -0X7B60);
    // 0x80019784: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80019788: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x8001978C: lui         $t0, 0xBC00
    ctx->r8 = S32(0XBC00 << 16);
L_80019790:
    // 0x80019790: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x80019794: addu        $t7, $t9, $a0
    ctx->r15 = ADD32(ctx->r25, ctx->r4);
    // 0x80019798: lw          $t8, 0x38($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X38);
    // 0x8001979C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x800197A0: beql        $t8, $zero, L_800197E4
    if (ctx->r24 == 0) {
        // 0x800197A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800197E4;
    }
    goto skip_0;
    // 0x800197A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x800197A8: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x800197AC: addiu       $t7, $t9, 0x20
    ctx->r15 = ADD32(ctx->r25, 0X20);
    // 0x800197B0: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800197B4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800197B8: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x800197BC: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x800197C0: or          $t9, $t6, $t0
    ctx->r25 = ctx->r14 | ctx->r8;
    // 0x800197C4: ori         $t7, $t9, 0x6
    ctx->r15 = ctx->r25 | 0X6;
    // 0x800197C8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800197CC: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x800197D0: addu        $t6, $t8, $a0
    ctx->r14 = ADD32(ctx->r24, ctx->r4);
    // 0x800197D4: lw          $t9, 0x38($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X38);
    // 0x800197D8: addu        $t7, $t9, $t1
    ctx->r15 = ADD32(ctx->r25, ctx->r9);
    // 0x800197DC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800197E0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_800197E4:
    // 0x800197E4: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x800197E8: bne         $at, $zero, L_80019790
    if (ctx->r1 != 0) {
        // 0x800197EC: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80019790;
    }
    // 0x800197EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800197F0:
    // 0x800197F0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800197F4: addiu       $t5, $t5, -0x7B60
    ctx->r13 = ADD32(ctx->r13, -0X7B60);
    // 0x800197F8: lw          $t0, 0x0($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X0);
    // 0x800197FC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80019800: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80019804: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    // 0x80019808: addiu       $t2, $t2, -0x3A34
    ctx->r10 = ADD32(ctx->r10, -0X3A34);
    // 0x8001980C: addiu       $a1, $a1, -0x7AD8
    ctx->r5 = ADD32(ctx->r5, -0X7AD8);
    // 0x80019810: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x80019814: bltz        $t8, L_8001982C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80019818: lui         $at, 0x8FFF
        ctx->r1 = S32(0X8FFF << 16);
            goto L_8001982C;
    }
    // 0x80019818: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8001981C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80019820: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80019824: and         $t9, $a0, $at
    ctx->r25 = ctx->r4 & ctx->r1;
    // 0x80019828: beq         $t6, $t9, L_800199A0
    if (ctx->r14 == ctx->r25) {
        // 0x8001982C: lui         $at, 0x8FFF
        ctx->r1 = S32(0X8FFF << 16);
            goto L_800199A0;
    }
L_8001982C:
    // 0x8001982C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80019830: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80019834: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80019838: and         $v0, $a0, $at
    ctx->r2 = ctx->r4 & ctx->r1;
    // 0x8001983C: beq         $v0, $zero, L_8001997C
    if (ctx->r2 == 0) {
        // 0x80019840: addiu       $a1, $a1, -0x7AD8
        ctx->r5 = ADD32(ctx->r5, -0X7AD8);
            goto L_8001997C;
    }
    // 0x80019840: addiu       $a1, $a1, -0x7AD8
    ctx->r5 = ADD32(ctx->r5, -0X7AD8);
    // 0x80019844: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80019848: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    // 0x8001984C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x80019850: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80019854: bgezl       $t7, L_80019958
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80019858: lw          $v1, 0x0($t2)
        ctx->r3 = MEM_W(ctx->r10, 0X0);
            goto L_80019958;
    }
    goto skip_1;
    // 0x80019858: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    skip_1:
    // 0x8001985C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80019860: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80019864: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80019868: bne         $t8, $t6, L_80019874
    if (ctx->r24 != ctx->r14) {
        // 0x8001986C: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_80019874;
    }
    // 0x8001986C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80019870: beq         $t9, $t7, L_800199C0
    if (ctx->r25 == ctx->r15) {
        // 0x80019874: lui         $t0, 0x601
        ctx->r8 = S32(0X601 << 16);
            goto L_800199C0;
    }
L_80019874:
    // 0x80019874: lui         $t0, 0x601
    ctx->r8 = S32(0X601 << 16);
L_80019878:
    // 0x80019878: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
L_8001987C:
    // 0x8001987C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80019880: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80019884: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80019888: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x8001988C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80019890: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x80019894: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80019898: bne         $t7, $t9, L_800198AC
    if (ctx->r15 != ctx->r25) {
        // 0x8001989C: nop
    
            goto L_800198AC;
    }
    // 0x8001989C: nop

    // 0x800198A0: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x800198A4: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x800198A8: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
L_800198AC:
    // 0x800198AC: beq         $a2, $zero, L_800198D4
    if (ctx->r6 == 0) {
        // 0x800198B0: lw          $v1, 0x0($t2)
        ctx->r3 = MEM_W(ctx->r10, 0X0);
            goto L_800198D4;
    }
    // 0x800198B0: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x800198B4: bne         $a2, $v0, L_800198D4
    if (ctx->r6 != ctx->r2) {
        // 0x800198B8: nop
    
            goto L_800198D4;
    }
    // 0x800198B8: nop

    // 0x800198BC: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x800198C0: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x800198C4: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x800198C8: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x800198CC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800198D0: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
L_800198D4:
    // 0x800198D4: beql        $t4, $zero, L_8001991C
    if (ctx->r12 == 0) {
        // 0x800198D8: addiu       $t6, $v1, 0x8
        ctx->r14 = ADD32(ctx->r3, 0X8);
            goto L_8001991C;
    }
    goto skip_2;
    // 0x800198D8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    skip_2:
    // 0x800198DC: lb          $t6, 0x0($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X0);
    // 0x800198E0: bnel        $t1, $t6, L_8001991C
    if (ctx->r9 != ctx->r14) {
        // 0x800198E4: addiu       $t6, $v1, 0x8
        ctx->r14 = ADD32(ctx->r3, 0X8);
            goto L_8001991C;
    }
    goto skip_3;
    // 0x800198E4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    skip_3:
    // 0x800198E8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800198EC: sltu        $at, $a0, $t3
    ctx->r1 = ctx->r4 < ctx->r11 ? 1 : 0;
    // 0x800198F0: bne         $at, $zero, L_80019918
    if (ctx->r1 != 0) {
        // 0x800198F4: sltu        $at, $a0, $a2
        ctx->r1 = ctx->r4 < ctx->r6 ? 1 : 0;
            goto L_80019918;
    }
    // 0x800198F4: sltu        $at, $a0, $a2
    ctx->r1 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x800198F8: beql        $at, $zero, L_8001991C
    if (ctx->r1 == 0) {
        // 0x800198FC: addiu       $t6, $v1, 0x8
        ctx->r14 = ADD32(ctx->r3, 0X8);
            goto L_8001991C;
    }
    goto skip_4;
    // 0x800198FC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    skip_4:
    // 0x80019900: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x80019904: addu        $t9, $t7, $a3
    ctx->r25 = ADD32(ctx->r15, ctx->r7);
    // 0x80019908: subu        $t8, $t9, $t3
    ctx->r24 = SUB32(ctx->r25, ctx->r11);
    // 0x8001990C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80019910: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80019914: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
L_80019918:
    // 0x80019918: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
L_8001991C:
    // 0x8001991C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80019920: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80019924: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80019928: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x8001992C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x80019930: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80019934: lw          $t7, 0x4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4);
    // 0x80019938: bne         $t8, $t6, L_80019878
    if (ctx->r24 != ctx->r14) {
        // 0x8001993C: lw          $t9, 0x8C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X8C);
            goto L_80019878;
    }
    // 0x8001993C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80019940: bnel        $t9, $t7, L_8001987C
    if (ctx->r25 != ctx->r15) {
        // 0x80019944: lw          $t8, 0x0($t2)
        ctx->r24 = MEM_W(ctx->r10, 0X0);
            goto L_8001987C;
    }
    goto skip_5;
    // 0x80019944: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    skip_5:
    // 0x80019948: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x8001994C: b           L_800199C0
    // 0x80019950: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
        goto L_800199C0;
    // 0x80019950: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    // 0x80019954: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
L_80019958:
    // 0x80019958: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8001995C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80019960: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80019964: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80019968: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8001996C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80019970: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x80019974: b           L_800199C0
    // 0x80019978: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
        goto L_800199C0;
    // 0x80019978: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
L_8001997C:
    // 0x8001997C: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019980: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80019984: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80019988: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8001998C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80019990: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80019994: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x80019998: b           L_800199C0
    // 0x8001999C: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
        goto L_800199C0;
    // 0x8001999C: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
L_800199A0:
    // 0x800199A0: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x800199A4: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x800199A8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x800199AC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x800199B0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800199B4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800199B8: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800199BC: lw          $a0, 0x30($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X30);
L_800199C0:
    // 0x800199C0: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800199C4: bgez        $t7, L_80019A44
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800199C8: lui         $a1, 0x8017
        ctx->r5 = S32(0X8017 << 16);
            goto L_80019A44;
    }
    // 0x800199C8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800199CC: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x800199D0: lui         $t9, 0x384
    ctx->r25 = S32(0X384 << 16);
    // 0x800199D4: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x800199D8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x800199DC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x800199E0: addiu       $a1, $a1, -0x7AF8
    ctx->r5 = ADD32(ctx->r5, -0X7AF8);
    // 0x800199E4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800199E8: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800199EC: lui         $t9, 0x382
    ctx->r25 = S32(0X382 << 16);
    // 0x800199F0: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x800199F4: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x800199F8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x800199FC: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019A00: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80019A04: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80019A08: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019A0C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80019A10: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x80019A14: b           L_80019A44
    // 0x80019A18: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
        goto L_80019A44;
    // 0x80019A18: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
L_80019A1C:
    // 0x80019A1C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80019A20: addiu       $t2, $t2, -0x3A34
    ctx->r10 = ADD32(ctx->r10, -0X3A34);
    // 0x80019A24: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019A28: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80019A2C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80019A30: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80019A34: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80019A38: addiu       $t5, $t5, -0x7B60
    ctx->r13 = ADD32(ctx->r13, -0X7B60);
    // 0x80019A3C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80019A40: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_80019A44:
    // 0x80019A44: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x80019A48: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80019A4C: beql        $t6, $zero, L_80019D34
    if (ctx->r14 == 0) {
        // 0x80019A50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80019D34;
    }
    goto skip_6;
    // 0x80019A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x80019A54: lbu         $t7, -0x7AD3($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7AD3);
    // 0x80019A58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80019A5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019A60: beq         $t7, $zero, L_80019A88
    if (ctx->r15 == 0) {
        // 0x80019A64: sw          $a1, -0x7ADC($at)
        MEM_W(-0X7ADC, ctx->r1) = ctx->r5;
            goto L_80019A88;
    }
    // 0x80019A64: sw          $a1, -0x7ADC($at)
    MEM_W(-0X7ADC, ctx->r1) = ctx->r5;
    // 0x80019A68: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019A6C: lw          $ra, 0x90($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X90);
    // 0x80019A70: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80019A74: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80019A78: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80019A7C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019A80: b           L_80019CA8
    // 0x80019A84: sw          $ra, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r31;
        goto L_80019CA8;
    // 0x80019A84: sw          $ra, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r31;
L_80019A88:
    // 0x80019A88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80019A8C: lw          $t6, -0x7AD0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7AD0);
    // 0x80019A90: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80019A94: addiu       $t7, $t7, -0x7AC7
    ctx->r15 = ADD32(ctx->r15, -0X7AC7);
    // 0x80019A98: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x80019A9C: bne         $at, $zero, L_80019C78
    if (ctx->r1 != 0) {
        // 0x80019AA0: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_80019C78;
    }
    // 0x80019AA0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80019AA4: lw          $t0, 0x0($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X0);
    // 0x80019AA8: lw          $a0, -0x39E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39E4);
    // 0x80019AAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80019AB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80019AB4: bne         $t0, $a0, L_80019B24
    if (ctx->r8 != ctx->r4) {
        // 0x80019AB8: lw          $ra, 0x90($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X90);
            goto L_80019B24;
    }
    // 0x80019AB8: lw          $ra, 0x90($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X90);
    // 0x80019ABC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80019AC0: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x80019AC4: beql        $v0, $zero, L_80019B28
    if (ctx->r2 == 0) {
        // 0x80019AC8: lhu         $t8, 0x34($t0)
        ctx->r24 = MEM_HU(ctx->r8, 0X34);
            goto L_80019B28;
    }
    goto skip_7;
    // 0x80019AC8: lhu         $t8, 0x34($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X34);
    skip_7:
    // 0x80019ACC: lbu         $v1, 0x60($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X60);
    // 0x80019AD0: lui         $t8, 0x900
    ctx->r24 = S32(0X900 << 16);
    // 0x80019AD4: addiu       $t8, $t8, 0x50F8
    ctx->r24 = ADD32(ctx->r24, 0X50F8);
    // 0x80019AD8: bne         $v1, $zero, L_80019AE8
    if (ctx->r3 != 0) {
        // 0x80019ADC: nop
    
            goto L_80019AE8;
    }
    // 0x80019ADC: nop

    // 0x80019AE0: beql        $ra, $t8, L_80019B4C
    if (ctx->r31 == ctx->r24) {
        // 0x80019AE4: lui         $at, 0x4020
        ctx->r1 = S32(0X4020 << 16);
            goto L_80019B4C;
    }
    goto skip_8;
    // 0x80019AE4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    skip_8:
L_80019AE8:
    // 0x80019AE8: bne         $a1, $v1, L_80019AF8
    if (ctx->r5 != ctx->r3) {
        // 0x80019AEC: lui         $t9, 0x900
        ctx->r25 = S32(0X900 << 16);
            goto L_80019AF8;
    }
    // 0x80019AEC: lui         $t9, 0x900
    ctx->r25 = S32(0X900 << 16);
    // 0x80019AF0: addiu       $t9, $t9, 0x56E8
    ctx->r25 = ADD32(ctx->r25, 0X56E8);
    // 0x80019AF4: beq         $ra, $t9, L_80019B48
    if (ctx->r31 == ctx->r25) {
        // 0x80019AF8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80019B48;
    }
L_80019AF8:
    // 0x80019AF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80019AFC: bne         $v1, $at, L_80019B0C
    if (ctx->r3 != ctx->r1) {
        // 0x80019B00: lui         $t6, 0x900
        ctx->r14 = S32(0X900 << 16);
            goto L_80019B0C;
    }
    // 0x80019B00: lui         $t6, 0x900
    ctx->r14 = S32(0X900 << 16);
    // 0x80019B04: addiu       $t6, $t6, 0x4AA8
    ctx->r14 = ADD32(ctx->r14, 0X4AA8);
    // 0x80019B08: beq         $ra, $t6, L_80019B48
    if (ctx->r31 == ctx->r14) {
        // 0x80019B0C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80019B48;
    }
L_80019B0C:
    // 0x80019B0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80019B10: bne         $v1, $at, L_80019B24
    if (ctx->r3 != ctx->r1) {
        // 0x80019B14: lui         $t7, 0x900
        ctx->r15 = S32(0X900 << 16);
            goto L_80019B24;
    }
    // 0x80019B14: lui         $t7, 0x900
    ctx->r15 = S32(0X900 << 16);
    // 0x80019B18: addiu       $t7, $t7, 0x4A88
    ctx->r15 = ADD32(ctx->r15, 0X4A88);
    // 0x80019B1C: beql        $ra, $t7, L_80019B4C
    if (ctx->r31 == ctx->r15) {
        // 0x80019B20: lui         $at, 0x4020
        ctx->r1 = S32(0X4020 << 16);
            goto L_80019B4C;
    }
    goto skip_9;
    // 0x80019B20: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    skip_9:
L_80019B24:
    // 0x80019B24: lhu         $t8, 0x34($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X34);
L_80019B28:
    // 0x80019B28: addiu       $at, $zero, 0x4D9
    ctx->r1 = ADD32(0, 0X4D9);
    // 0x80019B2C: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x80019B30: bne         $t8, $at, L_80019B3C
    if (ctx->r24 != ctx->r1) {
        // 0x80019B34: addiu       $t9, $t9, 0x5588
        ctx->r25 = ADD32(ctx->r25, 0X5588);
            goto L_80019B3C;
    }
    // 0x80019B34: addiu       $t9, $t9, 0x5588
    ctx->r25 = ADD32(ctx->r25, 0X5588);
    // 0x80019B38: beq         $ra, $t9, L_80019B48
    if (ctx->r31 == ctx->r25) {
        // 0x80019B3C: lui         $t6, 0x8007
        ctx->r14 = S32(0X8007 << 16);
            goto L_80019B48;
    }
L_80019B3C:
    // 0x80019B3C: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80019B40: addiu       $t6, $t6, -0x2008
    ctx->r14 = ADD32(ctx->r14, -0X2008);
    // 0x80019B44: bne         $ra, $t6, L_80019B58
    if (ctx->r31 != ctx->r14) {
        // 0x80019B48: lui         $at, 0x4020
        ctx->r1 = S32(0X4020 << 16);
            goto L_80019B58;
    }
L_80019B48:
    // 0x80019B48: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
L_80019B4C:
    // 0x80019B4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80019B50: b           L_80019B9C
    // 0x80019B54: nop

        goto L_80019B9C;
    // 0x80019B54: nop

L_80019B58:
    // 0x80019B58: bne         $t0, $a0, L_80019B84
    if (ctx->r8 != ctx->r4) {
        // 0x80019B5C: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_80019B84;
    }
    // 0x80019B5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80019B60: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x80019B64: beq         $v0, $zero, L_80019B84
    if (ctx->r2 == 0) {
        // 0x80019B68: nop
    
            goto L_80019B84;
    }
    // 0x80019B68: nop

    // 0x80019B6C: lbu         $t7, 0x60($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X60);
    // 0x80019B70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80019B74: lui         $t8, 0x900
    ctx->r24 = S32(0X900 << 16);
    // 0x80019B78: bne         $t7, $at, L_80019B84
    if (ctx->r15 != ctx->r1) {
        // 0x80019B7C: addiu       $t8, $t8, 0x4958
        ctx->r24 = ADD32(ctx->r24, 0X4958);
            goto L_80019B84;
    }
    // 0x80019B7C: addiu       $t8, $t8, 0x4958
    ctx->r24 = ADD32(ctx->r24, 0X4958);
    // 0x80019B80: beq         $ra, $t8, L_80019B90
    if (ctx->r31 == ctx->r24) {
        // 0x80019B84: lui         $t9, 0x8007
        ctx->r25 = S32(0X8007 << 16);
            goto L_80019B90;
    }
L_80019B84:
    // 0x80019B84: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80019B88: addiu       $t9, $t9, -0x1FE0
    ctx->r25 = ADD32(ctx->r25, -0X1FE0);
    // 0x80019B8C: bne         $ra, $t9, L_80019B9C
    if (ctx->r31 != ctx->r25) {
        // 0x80019B90: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80019B9C;
    }
L_80019B90:
    // 0x80019B90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80019B94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80019B98: nop

L_80019B9C:
    // 0x80019B9C: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80019BA0: addiu       $v1, $v1, -0x7AFC
    ctx->r3 = ADD32(ctx->r3, -0X7AFC);
    // 0x80019BA4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80019BA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019BAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80019BB0: sw          $v0, -0x7688($at)
    MEM_W(-0X7688, ctx->r1) = ctx->r2;
    // 0x80019BB4: addiu       $t6, $v0, 0x40
    ctx->r14 = ADD32(ctx->r2, 0X40);
    // 0x80019BB8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80019BBC: lbu         $t7, -0x7AD4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7AD4);
    // 0x80019BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80019BC4: beq         $t7, $zero, L_80019BD8
    if (ctx->r15 == 0) {
        // 0x80019BC8: nop
    
            goto L_80019BD8;
    }
    // 0x80019BC8: nop

    // 0x80019BCC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80019BD0: jal         0x8001965C
    // 0x80019BD4: addiu       $a0, $a0, -0x76C8
    ctx->r4 = ADD32(ctx->r4, -0X76C8);
    func_8001965C_1A25C(rdram, ctx);
        goto after_0;
    // 0x80019BD4: addiu       $a0, $a0, -0x76C8
    ctx->r4 = ADD32(ctx->r4, -0X76C8);
    after_0:
L_80019BD8:
    // 0x80019BD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80019BDC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80019BE0: lw          $a1, -0x7688($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7688);
    // 0x80019BE4: jal         0x8001F5F8
    // 0x80019BE8: addiu       $a0, $a0, -0x76C8
    ctx->r4 = ADD32(ctx->r4, -0X76C8);
    func_8001F5F8_201F8(rdram, ctx);
        goto after_1;
    // 0x80019BE8: addiu       $a0, $a0, -0x76C8
    ctx->r4 = ADD32(ctx->r4, -0X76C8);
    after_1:
    // 0x80019BEC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80019BF0: addiu       $t2, $t2, -0x3A34
    ctx->r10 = ADD32(ctx->r10, -0X3A34);
    // 0x80019BF4: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019BF8: lui         $t9, 0x104
    ctx->r25 = S32(0X104 << 16);
    // 0x80019BFC: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80019C00: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80019C04: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80019C08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80019C0C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019C10: lw          $t6, -0x7688($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7688);
    // 0x80019C14: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80019C18: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80019C1C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80019C20: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80019C24: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019C28: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80019C2C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80019C30: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80019C34: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80019C38: addiu       $t5, $t5, -0x7B60
    ctx->r13 = ADD32(ctx->r13, -0X7B60);
    // 0x80019C3C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019C40: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80019C44: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80019C48: lbu         $t7, 0x93($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X93);
    // 0x80019C4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80019C50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80019C54: lw          $t9, -0x4960($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4960);
    // 0x80019C58: lui         $t7, 0xBD00
    ctx->r15 = S32(0XBD00 << 16);
    // 0x80019C5C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80019C60: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019C64: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80019C68: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80019C6C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80019C70: b           L_80019CA8
    // 0x80019C74: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_80019CA8;
    // 0x80019C74: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80019C78:
    // 0x80019C78: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019C7C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80019C80: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80019C84: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80019C88: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019C8C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80019C90: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80019C94: lbu         $t7, 0x93($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X93);
    // 0x80019C98: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80019C9C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80019CA0: lw          $t9, -0x4960($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4960);
    // 0x80019CA4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_80019CA8:
    // 0x80019CA8: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80019CAC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80019CB0: addiu       $a1, $a1, -0x7B04
    ctx->r5 = ADD32(ctx->r5, -0X7B04);
    // 0x80019CB4: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80019CB8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80019CBC: bgezl       $t8, L_80019D34
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80019CC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80019D34;
    }
    goto skip_10;
    // 0x80019CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_10:
    // 0x80019CC4: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019CC8: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x80019CCC: ori         $t6, $t6, 0x2
    ctx->r14 = ctx->r14 | 0X2;
    // 0x80019CD0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80019CD4: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x80019CD8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80019CDC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80019CE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80019CE4: ori         $at, $at, 0x20
    ctx->r1 = ctx->r1 | 0X20;
    // 0x80019CE8: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80019CEC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80019CF0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80019CF4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80019CF8: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80019CFC: lui         $at, 0x300
    ctx->r1 = S32(0X300 << 16);
    // 0x80019D00: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80019D04: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80019D08: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x80019D0C: addiu       $t9, $t8, 0x86
    ctx->r25 = ADD32(ctx->r24, 0X86);
    // 0x80019D10: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x80019D14: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80019D18: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80019D1C: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x80019D20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80019D24: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80019D28: lw          $t6, -0x7B58($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B58);
    // 0x80019D2C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80019D30:
    // 0x80019D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019D34:
    // 0x80019D34: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80019D38: jr          $ra
    // 0x80019D3C: nop

    TRACE_RETURN()
    return;
    // 0x80019D3C: nop

;}
RECOMP_FUNC void func_800141C4_14DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800141C4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800141C8: bne         $a0, $zero, L_800141D8
    if (ctx->r4 != 0) {
        // 0x800141CC: addiu       $v1, $v1, 0x7FC0
        ctx->r3 = ADD32(ctx->r3, 0X7FC0);
            goto L_800141D8;
    }
    // 0x800141CC: addiu       $v1, $v1, 0x7FC0
    ctx->r3 = ADD32(ctx->r3, 0X7FC0);
    // 0x800141D0: jr          $ra
    // 0x800141D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x800141D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800141D8:
    // 0x800141D8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800141DC: lhu         $t6, 0x7FC0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7FC0);
    // 0x800141E0: beql        $t6, $zero, L_80014210
    if (ctx->r14 == 0) {
        // 0x800141E4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80014210;
    }
    goto skip_0;
    // 0x800141E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x800141E8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
L_800141EC:
    // 0x800141EC: bnel        $a0, $v0, L_80014200
    if (ctx->r4 != ctx->r2) {
        // 0x800141F0: lhu         $v0, 0x8($v1)
        ctx->r2 = MEM_HU(ctx->r3, 0X8);
            goto L_80014200;
    }
    goto skip_1;
    // 0x800141F0: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    skip_1:
    // 0x800141F4: jr          $ra
    // 0x800141F8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    TRACE_RETURN()
    return;
    // 0x800141F8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800141FC: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
L_80014200:
    // 0x80014200: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80014204: bne         $v0, $zero, L_800141EC
    if (ctx->r2 != 0) {
        // 0x80014208: nop
    
            goto L_800141EC;
    }
    // 0x80014208: nop

    // 0x8001420C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80014210:
    // 0x80014210: jr          $ra
    // 0x80014214: nop

    TRACE_RETURN()
    return;
    // 0x80014214: nop

;}
RECOMP_FUNC void func_8003B4EC_3C0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B4EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B4F0: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B4F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B4F8: lbu         $t6, 0x1D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1D);
    // 0x8003B4FC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003B500: sb          $t7, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r15;
    // 0x8003B504: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B508: lbu         $t8, 0x1D($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1D);
    // 0x8003B50C: beql        $t8, $zero, L_8003B554
    if (ctx->r24 == 0) {
        // 0x8003B510: lbu         $t0, 0x1C($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X1C);
            goto L_8003B554;
    }
    goto skip_0;
    // 0x8003B510: lbu         $t0, 0x1C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1C);
    skip_0:
    // 0x8003B514: lhu         $v1, 0x18($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X18);
    // 0x8003B518: lh          $t9, 0x1E($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X1E);
    // 0x8003B51C: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8003B520: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8003B524: beql        $at, $zero, L_8003B538
    if (ctx->r1 == 0) {
        // 0x8003B528: ori         $at, $zero, 0xFF01
        ctx->r1 = 0 | 0XFF01;
            goto L_8003B538;
    }
    goto skip_1;
    // 0x8003B528: ori         $at, $zero, 0xFF01
    ctx->r1 = 0 | 0XFF01;
    skip_1:
    // 0x8003B52C: b           L_8003B548
    // 0x8003B530: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
        goto L_8003B548;
    // 0x8003B530: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8003B534: ori         $at, $zero, 0xFF01
    ctx->r1 = 0 | 0XFF01;
L_8003B538:
    // 0x8003B538: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8003B53C: bne         $at, $zero, L_8003B548
    if (ctx->r1 != 0) {
        // 0x8003B540: nop
    
            goto L_8003B548;
    }
    // 0x8003B540: nop

    // 0x8003B544: ori         $v1, $zero, 0xFF00
    ctx->r3 = 0 | 0XFF00;
L_8003B548:
    // 0x8003B548: jr          $ra
    // 0x8003B54C: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8003B54C: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x8003B550: lbu         $t0, 0x1C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1C);
L_8003B554:
    // 0x8003B554: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8003B558: sh          $t1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r9;
    // 0x8003B55C: jr          $ra
    // 0x8003B560: nop

    TRACE_RETURN()
    return;
    // 0x8003B560: nop

;}
RECOMP_FUNC void func_8003D388_3DF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003D394: jal         0x8003F1D8
    // 0x8003D398: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x8003D398: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003D39C: beql        $v0, $zero, L_8003D3B8
    if (ctx->r2 == 0) {
        // 0x8003D3A0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8003D3B8;
    }
    goto skip_0;
    // 0x8003D3A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8003D3A4: jal         0x8003D428
    // 0x8003D3A8: nop

    func_8003D428_3E028(rdram, ctx);
        goto after_1;
    // 0x8003D3A8: nop

    after_1:
    // 0x8003D3AC: jal         0x8000C838
    // 0x8003D3B0: nop

    func_8000C838_D438(rdram, ctx);
        goto after_2;
    // 0x8003D3B0: nop

    after_2:
    // 0x8003D3B4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8003D3B8:
    // 0x8003D3B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003D3BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D3C0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8003D3C4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8003D3C8: lw          $v0, -0x3A00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A00);
    // 0x8003D3CC: sw          $v1, 0x7900($at)
    MEM_W(0X7900, ctx->r1) = ctx->r3;
    // 0x8003D3D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D3D4: beq         $v0, $zero, L_8003D3EC
    if (ctx->r2 == 0) {
        // 0x8003D3D8: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_8003D3EC;
    }
    // 0x8003D3D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8003D3DC: lbu         $t7, 0x60($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X60);
    // 0x8003D3E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D3E4: b           L_8003D3F0
    // 0x8003D3E8: sw          $t7, 0x7904($at)
    MEM_W(0X7904, ctx->r1) = ctx->r15;
        goto L_8003D3F0;
    // 0x8003D3E8: sw          $t7, 0x7904($at)
    MEM_W(0X7904, ctx->r1) = ctx->r15;
L_8003D3EC:
    // 0x8003D3EC: sw          $t8, 0x7904($at)
    MEM_W(0X7904, ctx->r1) = ctx->r24;
L_8003D3F0:
    // 0x8003D3F0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8003D3F4: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003D3F8: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8003D3FC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8003D400: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x8003D404: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8003D408: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x8003D40C: lw          $a0, 0x79A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X79A0);
    // 0x8003D410: jal         0x8003D468
    // 0x8003D414: lh          $a1, -0x79F8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X79F8);
    func_8003D468_3E068(rdram, ctx);
        goto after_3;
    // 0x8003D414: lh          $a1, -0x79F8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X79F8);
    after_3:
    // 0x8003D418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D41C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D420: jr          $ra
    // 0x8003D424: nop

    TRACE_RETURN()
    return;
    // 0x8003D424: nop

;}
RECOMP_FUNC void func_800077B8_83B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800077B8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800077BC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x800077C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800077C4: addiu       $t3, $zero, -0x4
    ctx->r11 = ADD32(0, -0X4);
    // 0x800077C8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800077CC: addiu       $t1, $zero, -0x2
    ctx->r9 = ADD32(0, -0X2);
    // 0x800077D0: addiu       $t0, $zero, -0x3
    ctx->r8 = ADD32(0, -0X3);
L_800077D4:
    // 0x800077D4: lw          $t6, 0x2B8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2B8);
    // 0x800077D8: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x800077DC: lw          $v0, 0x2A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2A0);
    // 0x800077E0: beq         $t6, $zero, L_8000783C
    if (ctx->r14 == 0) {
        // 0x800077E4: lw          $a1, 0x29C($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X29C);
            goto L_8000783C;
    }
    // 0x800077E4: lw          $a1, 0x29C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X29C);
    // 0x800077E8: andi        $t7, $a3, 0x2
    ctx->r15 = ctx->r7 & 0X2;
    // 0x800077EC: beq         $t7, $zero, L_8000783C
    if (ctx->r15 == 0) {
        // 0x800077F0: nop
    
            goto L_8000783C;
    }
    // 0x800077F0: nop

    // 0x800077F4: beql        $v0, $zero, L_8000781C
    if (ctx->r2 == 0) {
        // 0x800077F8: sw          $a1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r5;
            goto L_8000781C;
    }
    goto skip_0;
    // 0x800077F8: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    skip_0:
    // 0x800077FC: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x80007800: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x80007804: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80007808: beql        $t9, $zero, L_8000781C
    if (ctx->r25 == 0) {
        // 0x8000780C: sw          $a1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r5;
            goto L_8000781C;
    }
    goto skip_1;
    // 0x8000780C: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
    skip_1:
    // 0x80007810: b           L_80007944
    // 0x80007814: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_80007944;
    // 0x80007814: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80007818: sw          $a1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r5;
L_8000781C:
    // 0x8000781C: lw          $t4, 0x29C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X29C);
    // 0x80007820: sw          $zero, 0x2B8($a0)
    MEM_W(0X2B8, ctx->r4) = 0;
    // 0x80007824: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x80007828: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8000782C: bne         $t5, $zero, L_80007944
    if (ctx->r13 != 0) {
        // 0x80007830: sw          $t5, 0x29C($a0)
        MEM_W(0X29C, ctx->r4) = ctx->r13;
            goto L_80007944;
    }
    // 0x80007830: sw          $t5, 0x29C($a0)
    MEM_W(0X29C, ctx->r4) = ctx->r13;
    // 0x80007834: b           L_80007944
    // 0x80007838: sw          $zero, 0x2A4($a0)
    MEM_W(0X2A4, ctx->r4) = 0;
        goto L_80007944;
    // 0x80007838: sw          $zero, 0x2A4($a0)
    MEM_W(0X2A4, ctx->r4) = 0;
L_8000783C:
    // 0x8000783C: beq         $v0, $zero, L_80007944
    if (ctx->r2 == 0) {
        // 0x80007840: nop
    
            goto L_80007944;
    }
    // 0x80007840: nop

    // 0x80007844: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x80007848: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8000784C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80007850: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x80007854: beq         $at, $zero, L_80007944
    if (ctx->r1 == 0) {
        // 0x80007858: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80007944;
    }
    // 0x80007858: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000785C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80007860: addu        $at, $at, $t9
    gpr jr_addend_80007868 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80007864: lw          $t9, -0x5640($at)
    ctx->r25 = ADD32(ctx->r1, -0X5640);
    // 0x80007868: jr          $t9
    // 0x8000786C: nop

    switch (jr_addend_80007868 >> 2) {
        case 0: goto L_80007944; break;
        case 1: goto L_800078F0; break;
        case 2: goto L_80007870; break;
        case 3: goto L_80007944; break;
        case 4: goto L_80007944; break;
        case 5: goto L_800078F0; break;
        case 6: goto L_800078F0; break;
        default: switch_error(__func__, 0x80007868, 0x8007A9C0);
    }
    // 0x8000786C: nop

L_80007870:
    // 0x80007870: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80007874: andi        $t6, $a3, 0x2
    ctx->r14 = ctx->r7 & 0X2;
    // 0x80007878: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x8000787C: beq         $t5, $zero, L_800078C4
    if (ctx->r13 == 0) {
        // 0x80007880: nop
    
            goto L_800078C4;
    }
    // 0x80007880: nop

    // 0x80007884: beq         $t6, $zero, L_80007944
    if (ctx->r14 == 0) {
        // 0x80007888: nop
    
            goto L_80007944;
    }
    // 0x80007888: nop

    // 0x8000788C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80007890: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80007894: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x80007898: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8000789C: beql        $t8, $zero, L_800078B0
    if (ctx->r24 == 0) {
        // 0x800078A0: lw          $t9, 0x2A0($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X2A0);
            goto L_800078B0;
    }
    goto skip_2;
    // 0x800078A0: lw          $t9, 0x2A0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2A0);
    skip_2:
    // 0x800078A4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x800078A8: and         $v1, $v1, $t1
    ctx->r3 = ctx->r3 & ctx->r9;
    // 0x800078AC: lw          $t9, 0x2A0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2A0);
L_800078B0:
    // 0x800078B0: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x800078B4: bne         $t4, $zero, L_80007944
    if (ctx->r12 != 0) {
        // 0x800078B8: sw          $t4, 0x2A0($a0)
        MEM_W(0X2A0, ctx->r4) = ctx->r12;
            goto L_80007944;
    }
    // 0x800078B8: sw          $t4, 0x2A0($a0)
    MEM_W(0X2A0, ctx->r4) = ctx->r12;
    // 0x800078BC: b           L_80007944
    // 0x800078C0: sw          $zero, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = 0;
        goto L_80007944;
    // 0x800078C0: sw          $zero, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = 0;
L_800078C4:
    // 0x800078C4: bne         $a3, $t2, L_80007944
    if (ctx->r7 != ctx->r10) {
        // 0x800078C8: nop
    
            goto L_80007944;
    }
    // 0x800078C8: nop

    // 0x800078CC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x800078D0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800078D4: lw          $t6, 0x2A0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2A0);
    // 0x800078D8: and         $v1, $a3, $t3
    ctx->r3 = ctx->r7 & ctx->r11;
    // 0x800078DC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800078E0: bne         $t7, $zero, L_80007944
    if (ctx->r15 != 0) {
        // 0x800078E4: sw          $t7, 0x2A0($a0)
        MEM_W(0X2A0, ctx->r4) = ctx->r15;
            goto L_80007944;
    }
    // 0x800078E4: sw          $t7, 0x2A0($a0)
    MEM_W(0X2A0, ctx->r4) = ctx->r15;
    // 0x800078E8: b           L_80007944
    // 0x800078EC: sw          $zero, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = 0;
        goto L_80007944;
    // 0x800078EC: sw          $zero, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = 0;
L_800078F0:
    // 0x800078F0: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x800078F4: andi        $t4, $a3, 0x2
    ctx->r12 = ctx->r7 & 0X2;
    // 0x800078F8: andi        $t9, $a1, 0x2
    ctx->r25 = ctx->r5 & 0X2;
    // 0x800078FC: beq         $t9, $zero, L_80007918
    if (ctx->r25 == 0) {
        // 0x80007900: andi        $t5, $a1, 0x1
        ctx->r13 = ctx->r5 & 0X1;
            goto L_80007918;
    }
    // 0x80007900: andi        $t5, $a1, 0x1
    ctx->r13 = ctx->r5 & 0X1;
    // 0x80007904: beq         $t4, $zero, L_80007944
    if (ctx->r12 == 0) {
        // 0x80007908: nop
    
            goto L_80007944;
    }
    // 0x80007908: nop

    // 0x8000790C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80007910: b           L_80007944
    // 0x80007914: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
        goto L_80007944;
    // 0x80007914: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
L_80007918:
    // 0x80007918: beq         $t5, $zero, L_80007944
    if (ctx->r13 == 0) {
        // 0x8000791C: andi        $t6, $a3, 0x1
        ctx->r14 = ctx->r7 & 0X1;
            goto L_80007944;
    }
    // 0x8000791C: andi        $t6, $a3, 0x1
    ctx->r14 = ctx->r7 & 0X1;
    // 0x80007920: beq         $t6, $zero, L_80007944
    if (ctx->r14 == 0) {
        // 0x80007924: nop
    
            goto L_80007944;
    }
    // 0x80007924: nop

    // 0x80007928: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8000792C: lw          $t7, 0x2A0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2A0);
    // 0x80007930: and         $v1, $a3, $t1
    ctx->r3 = ctx->r7 & ctx->r9;
    // 0x80007934: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80007938: bne         $t8, $zero, L_80007944
    if (ctx->r24 != 0) {
        // 0x8000793C: sw          $t8, 0x2A0($a0)
        MEM_W(0X2A0, ctx->r4) = ctx->r24;
            goto L_80007944;
    }
    // 0x8000793C: sw          $t8, 0x2A0($a0)
    MEM_W(0X2A0, ctx->r4) = ctx->r24;
    // 0x80007940: sw          $zero, 0x2A8($a0)
    MEM_W(0X2A8, ctx->r4) = 0;
L_80007944:
    // 0x80007944: beql        $v1, $a3, L_80007958
    if (ctx->r3 == ctx->r7) {
        // 0x80007948: lw          $s0, 0x4($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X4);
            goto L_80007958;
    }
    goto skip_3;
    // 0x80007948: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    skip_3:
    // 0x8000794C: b           L_800077D4
    // 0x80007950: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_800077D4;
    // 0x80007950: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80007954: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
L_80007958:
    // 0x80007958: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8000795C: jr          $ra
    // 0x80007960: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x80007960: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80035A5C_3665C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035A5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80035A60: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80035A64: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80035A68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035A6C: beq         $a0, $zero, L_80035B30
    if (ctx->r4 == 0) {
        // 0x80035A70: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80035B30;
    }
    // 0x80035A70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80035A74: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x80035A78: beql        $a0, $zero, L_80035B34
    if (ctx->r4 == 0) {
        // 0x80035A7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80035B34;
    }
    goto skip_0;
    // 0x80035A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80035A80: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
    // 0x80035A84: sw          $a2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r6;
    // 0x80035A88: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x80035A8C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80035A90: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x80035A94: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80035A98: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x80035A9C: lhu         $t6, 0x3A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3A);
    // 0x80035AA0: sh          $t6, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r14;
    // 0x80035AA4: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x80035AA8: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    // 0x80035AAC: lhu         $t8, 0x42($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X42);
    // 0x80035AB0: sh          $t8, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r24;
    // 0x80035AB4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80035AB8: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
    // 0x80035ABC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80035AC0: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x80035AC4: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80035AC8: swc1        $f16, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f16.u32l;
    // 0x80035ACC: lhu         $t9, 0x52($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X52);
    // 0x80035AD0: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
    // 0x80035AD4: lhu         $t0, 0x5A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X5A);
    // 0x80035AD8: sh          $t0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r8;
    // 0x80035ADC: lhu         $t1, 0x56($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X56);
    // 0x80035AE0: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x80035AE4: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x80035AE8: sh          $zero, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = 0;
    // 0x80035AEC: sh          $t1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r9;
    // 0x80035AF0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80035AF4: jal         0x80014218
    // 0x80035AF8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x80035AF8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80035AFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80035B00: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80035B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80035B08: sb          $zero, 0x64($a0)
    MEM_B(0X64, ctx->r4) = 0;
    // 0x80035B0C: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x80035B10: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x80035B14: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x80035B18: sb          $zero, 0x7C($a0)
    MEM_B(0X7C, ctx->r4) = 0;
    // 0x80035B1C: sh          $zero, 0x7E($a0)
    MEM_H(0X7E, ctx->r4) = 0;
    // 0x80035B20: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x80035B24: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x80035B28: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80035B2C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
L_80035B30:
    // 0x80035B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035B34:
    // 0x80035B34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80035B38: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80035B3C: jr          $ra
    // 0x80035B40: nop

    TRACE_RETURN()
    return;
    // 0x80035B40: nop

;}
RECOMP_FUNC void func_80023394_23F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80023398: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x8002339C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800233A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800233A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800233A8: addiu       $t6, $t6, -0x7600
    ctx->r14 = ADD32(ctx->r14, -0X7600);
    // 0x800233AC: lui         $a2, 0x4E47
    ctx->r6 = S32(0X4E47 << 16);
    // 0x800233B0: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x800233B4: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x800233B8: addiu       $t8, $a0, 0x3F0
    ctx->r24 = ADD32(ctx->r4, 0X3F0);
    // 0x800233BC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800233C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800233C4: addiu       $a3, $a3, -0x2E90
    ctx->r7 = ADD32(ctx->r7, -0X2E90);
    // 0x800233C8: ori         $a2, $a2, 0x3545
    ctx->r6 = ctx->r6 | 0X3545;
    // 0x800233CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800233D0: jal         0x80044500
    // 0x800233D4: addiu       $a1, $zero, 0x4134
    ctx->r5 = ADD32(0, 0X4134);
    osPfsAllocateFile_recomp(rdram, ctx);
        goto after_0;
    // 0x800233D4: addiu       $a1, $zero, 0x4134
    ctx->r5 = ADD32(0, 0X4134);
    after_0:
    // 0x800233D8: beq         $v0, $zero, L_800233EC
    if (ctx->r2 == 0) {
        // 0x800233DC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800233EC;
    }
    // 0x800233DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800233E0: jal         0x80023ADC
    // 0x800233E4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80023ADC_246DC(rdram, ctx);
        goto after_1;
    // 0x800233E4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800233E8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_800233EC:
    // 0x800233EC: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800233F0: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x800233F4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800233F8: sw          $a0, 0x3FC($t9)
    MEM_W(0X3FC, ctx->r25) = ctx->r4;
    // 0x800233FC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80023400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80023404: lw          $v0, 0x3FC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X3FC);
    // 0x80023408: jr          $ra
    // 0x8002340C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8002340C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000AD08_B908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000AD08: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8000AD0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000AD10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000AD14: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000AD18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000AD1C: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x8000AD20: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000AD24: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x8000AD28: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000AD2C: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x8000AD30: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000AD34: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000AD38: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x8000AD3C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000AD40: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000AD44: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x8000AD48: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8000AD4C: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000AD50: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8000AD54: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8000AD58: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000AD5C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000AD60: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8000AD64: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000AD68: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8000AD6C: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8000AD70: mul.s       $f8, $f2, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8000AD74: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000AD78: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8000AD7C: mul.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8000AD80: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000AD84: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000AD88: nop

    // 0x8000AD8C: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8000AD90: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000AD94: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8000AD98: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000AD9C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000ADA0: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000ADA4: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000ADA8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000ADAC: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x8000ADB0: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8000ADB4: bc1f        L_8000ADC0
    if (!c1cs) {
        // 0x8000ADB8: nop
    
            goto L_8000ADC0;
    }
    // 0x8000ADB8: nop

    // 0x8000ADBC: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
L_8000ADC0:
    // 0x8000ADC0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8000ADC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000ADC8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000ADCC: c.eq.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl == ctx->f10.fl;
    // 0x8000ADD0: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x8000ADD4: bc1tl       L_8000AE30
    if (c1cs) {
        // 0x8000ADD8: sh          $zero, 0x6($s0)
        MEM_H(0X6, ctx->r16) = 0;
            goto L_8000AE30;
    }
    goto skip_0;
    // 0x8000ADD8: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    skip_0:
    // 0x8000ADDC: mov.s       $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = ctx->f10.fl;
    // 0x8000ADE0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8000ADE4: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x8000ADE8: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x8000ADEC: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x8000ADF0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x8000ADF4: jal         0x800417E0
    // 0x8000ADF8: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x8000ADF8: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8000ADFC: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8000AE00: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8000AE04: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8000AE08: div.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000AE0C: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8000AE10: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8000AE14: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8000AE18: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8000AE1C: nop

    // 0x8000AE20: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x8000AE24: b           L_8000AE30
    // 0x8000AE28: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
        goto L_8000AE30;
    // 0x8000AE28: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8000AE2C: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_8000AE30:
    // 0x8000AE30: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8000AE34: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000AE38: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8000AE3C: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8000AE40: sub.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8000AE44: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8000AE48: nop

    // 0x8000AE4C: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8000AE50: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8000AE54: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000AE58: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000AE5C: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000AE60: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8000AE64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000AE68: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8000AE6C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8000AE70: nop

    // 0x8000AE74: bc1f        L_8000AE88
    if (!c1cs) {
        // 0x8000AE78: nop
    
            goto L_8000AE88;
    }
    // 0x8000AE78: nop

    // 0x8000AE7C: lhu         $t8, 0x6($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X6);
    // 0x8000AE80: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x8000AE84: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
L_8000AE88:
    // 0x8000AE88: lhu         $t0, 0x6($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6);
    // 0x8000AE8C: lb          $t2, 0x65($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X65);
    // 0x8000AE90: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8000AE94: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8000AE98: beq         $t2, $zero, L_8000AF94
    if (ctx->r10 == 0) {
        // 0x8000AE9C: sh          $t1, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r9;
            goto L_8000AF94;
    }
    // 0x8000AE9C: sh          $t1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r9;
    // 0x8000AEA0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000AEA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000AEA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000AEAC: div.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8000AEB0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000AEB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000AEB8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8000AEBC: mul.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000AEC0: nop

    // 0x8000AEC4: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8000AEC8: nop

    // 0x8000AECC: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8000AED0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8000AED4: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000AED8: lwc1        $f10, -0x5510($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5510);
    // 0x8000AEDC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8000AEE0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000AEE4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8000AEE8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8000AEEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8000AEF0: lwc1        $f6, 0x68($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X68);
    // 0x8000AEF4: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x8000AEF8: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x8000AEFC: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x8000AF00: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8000AF04: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x8000AF08: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8000AF0C: jal         0x8000AFA8
    // 0x8000AF10: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8000AFA8_BBA8(rdram, ctx);
        goto after_1;
    // 0x8000AF10: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8000AF14: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x8000AF18: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000AF1C: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8000AF20: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000AF24: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8000AF28: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8000AF2C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000AF30: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8000AF34: lb          $t3, 0x65($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X65);
    // 0x8000AF38: bltzl       $t3, L_8000AF98
    if (SIGNED(ctx->r11) < 0) {
        // 0x8000AF3C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8000AF98;
    }
    goto skip_1;
    // 0x8000AF3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x8000AF40: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8000AF44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000AF48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000AF4C: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8000AF50: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8000AF54: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000AF58: nop

    // 0x8000AF5C: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8000AF60: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8000AF64: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8000AF68: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8000AF6C: mul.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8000AF70: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8000AF74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000AF78: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000AF7C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8000AF80: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8000AF84: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x8000AF88: jal         0x8000AFA8
    // 0x8000AF8C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_8000AFA8_BBA8(rdram, ctx);
        goto after_2;
    // 0x8000AF8C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x8000AF90: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8000AF94:
    // 0x8000AF94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8000AF98:
    // 0x8000AF98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000AF9C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x8000AFA0: jr          $ra
    // 0x8000AFA4: nop

    TRACE_RETURN()
    return;
    // 0x8000AFA4: nop

;}
RECOMP_FUNC void func_8001B2C8_1BEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001B2C8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001B2CC: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8001B2D0: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8001B2D4: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8001B2D8: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8001B2DC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001B2E0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001B2E4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001B2E8: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8001B2EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001B2F0: lw          $t0, -0x7AE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AE0);
L_8001B2F4:
    // 0x8001B2F4: addu        $t7, $a0, $t0
    ctx->r15 = ADD32(ctx->r4, ctx->r8);
    // 0x8001B2F8: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x8001B2FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001B300: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x8001B304: slti        $at, $v0, 0x78
    ctx->r1 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x8001B308: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8001B30C: beq         $at, $zero, L_8001B3F8
    if (ctx->r1 == 0) {
        // 0x8001B310: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8001B3F8;
    }
    // 0x8001B310: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001B314: slti        $at, $v0, 0x60
    ctx->r1 = SIGNED(ctx->r2) < 0X60 ? 1 : 0;
    // 0x8001B318: bne         $at, $zero, L_8001B334
    if (ctx->r1 != 0) {
        // 0x8001B31C: addu        $t9, $t8, $t0
        ctx->r25 = ADD32(ctx->r24, ctx->r8);
            goto L_8001B334;
    }
    // 0x8001B31C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x8001B320: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x8001B324: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x8001B328: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8001B32C: b           L_8001B368
    // 0x8001B330: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
        goto L_8001B368;
    // 0x8001B330: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
L_8001B334:
    // 0x8001B334: slti        $at, $a1, 0x40
    ctx->r1 = SIGNED(ctx->r5) < 0X40 ? 1 : 0;
    // 0x8001B338: bnel        $at, $zero, L_8001B354
    if (ctx->r1 != 0) {
        // 0x8001B33C: slti        $at, $a1, 0x20
        ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
            goto L_8001B354;
    }
    goto skip_0;
    // 0x8001B33C: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
    skip_0:
    // 0x8001B340: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001B344: andi        $t3, $v1, 0xFF
    ctx->r11 = ctx->r3 & 0XFF;
    // 0x8001B348: b           L_8001B368
    // 0x8001B34C: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
        goto L_8001B368;
    // 0x8001B34C: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x8001B350: slti        $at, $a1, 0x20
    ctx->r1 = SIGNED(ctx->r5) < 0X20 ? 1 : 0;
L_8001B354:
    // 0x8001B354: bne         $at, $zero, L_8001B368
    if (ctx->r1 != 0) {
        // 0x8001B358: nop
    
            goto L_8001B368;
    }
    // 0x8001B358: nop

    // 0x8001B35C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8001B360: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x8001B364: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_8001B368:
    // 0x8001B368: bltz        $s0, L_8001B3B0
    if (SIGNED(ctx->r16) < 0) {
        // 0x8001B36C: andi        $t3, $a1, 0x1F
        ctx->r11 = ctx->r5 & 0X1F;
            goto L_8001B3B0;
    }
    // 0x8001B36C: andi        $t3, $a1, 0x1F
    ctx->r11 = ctx->r5 & 0X1F;
    // 0x8001B370: andi        $t5, $a1, 0x1F
    ctx->r13 = ctx->r5 & 0X1F;
    // 0x8001B374: beq         $t5, $zero, L_8001B384
    if (ctx->r13 == 0) {
        // 0x8001B378: slt         $at, $s0, $t5
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_8001B384;
    }
    // 0x8001B378: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8001B37C: beq         $at, $zero, L_8001B3AC
    if (ctx->r1 == 0) {
        // 0x8001B380: or          $t1, $t5, $zero
        ctx->r9 = ctx->r13 | 0;
            goto L_8001B3AC;
    }
    // 0x8001B380: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
L_8001B384:
    // 0x8001B384: addu        $t6, $a0, $s0
    ctx->r14 = ADD32(ctx->r4, ctx->r16);
    // 0x8001B388: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x8001B38C: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8001B390: sll         $t9, $v1, 8
    ctx->r25 = S32(ctx->r3 << 8);
    // 0x8001B394: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001B398: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x8001B39C: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
    // 0x8001B3A0: lw          $t0, -0x7AE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AE0);
    // 0x8001B3A4: b           L_8001B3B0
    // 0x8001B3A8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_8001B3B0;
    // 0x8001B3A8: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_8001B3AC:
    // 0x8001B3AC: subu        $s0, $s0, $t1
    ctx->r16 = SUB32(ctx->r16, ctx->r9);
L_8001B3B0:
    // 0x8001B3B0: beq         $t3, $zero, L_8001B3C4
    if (ctx->r11 == 0) {
        // 0x8001B3B4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8001B3C4;
    }
    // 0x8001B3B4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001B3B8: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001B3BC: beq         $at, $zero, L_8001B3E4
    if (ctx->r1 == 0) {
        // 0x8001B3C0: or          $t1, $t3, $zero
        ctx->r9 = ctx->r11 | 0;
            goto L_8001B3E4;
    }
    // 0x8001B3C0: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
L_8001B3C4:
    // 0x8001B3C4: addu        $t4, $a3, $s1
    ctx->r12 = ADD32(ctx->r7, ctx->r17);
    // 0x8001B3C8: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x8001B3CC: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x8001B3D0: sll         $t7, $v1, 8
    ctx->r15 = S32(ctx->r3 << 8);
    // 0x8001B3D4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B3D8: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8001B3DC: b           L_8001B59C
    // 0x8001B3E0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8001B59C;
    // 0x8001B3E0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8001B3E4:
    // 0x8001B3E4: addu        $a0, $a3, $t1
    ctx->r4 = ADD32(ctx->r7, ctx->r9);
    // 0x8001B3E8: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8001B3EC: subu        $s1, $s1, $t1
    ctx->r17 = SUB32(ctx->r17, ctx->r9);
    // 0x8001B3F0: b           L_8001B2F4
    // 0x8001B3F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_8001B2F4;
    // 0x8001B3F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_8001B3F8:
    // 0x8001B3F8: slti        $at, $a1, 0xF0
    ctx->r1 = SIGNED(ctx->r5) < 0XF0 ? 1 : 0;
    // 0x8001B3FC: beq         $at, $zero, L_8001B4F8
    if (ctx->r1 == 0) {
        // 0x8001B400: andi        $t9, $a1, 0xF
        ctx->r25 = ctx->r5 & 0XF;
            goto L_8001B4F8;
    }
    // 0x8001B400: andi        $t9, $a1, 0xF
    ctx->r25 = ctx->r5 & 0XF;
    // 0x8001B404: slti        $at, $a1, 0xD8
    ctx->r1 = SIGNED(ctx->r5) < 0XD8 ? 1 : 0;
    // 0x8001B408: bne         $at, $zero, L_8001B428
    if (ctx->r1 != 0) {
        // 0x8001B40C: addiu       $t6, $a1, -0x78
        ctx->r14 = ADD32(ctx->r5, -0X78);
            goto L_8001B428;
    }
    // 0x8001B40C: addiu       $t6, $a1, -0x78
    ctx->r14 = ADD32(ctx->r5, -0X78);
    // 0x8001B410: addu        $t2, $a0, $t0
    ctx->r10 = ADD32(ctx->r4, ctx->r8);
    // 0x8001B414: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001B418: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x8001B41C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8001B420: b           L_8001B45C
    // 0x8001B424: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
        goto L_8001B45C;
    // 0x8001B424: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
L_8001B428:
    // 0x8001B428: slti        $at, $a1, 0xB8
    ctx->r1 = SIGNED(ctx->r5) < 0XB8 ? 1 : 0;
    // 0x8001B42C: bnel        $at, $zero, L_8001B448
    if (ctx->r1 != 0) {
        // 0x8001B430: slti        $at, $a1, 0x98
        ctx->r1 = SIGNED(ctx->r5) < 0X98 ? 1 : 0;
            goto L_8001B448;
    }
    goto skip_1;
    // 0x8001B430: slti        $at, $a1, 0x98
    ctx->r1 = SIGNED(ctx->r5) < 0X98 ? 1 : 0;
    skip_1:
    // 0x8001B434: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001B438: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x8001B43C: b           L_8001B45C
    // 0x8001B440: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
        goto L_8001B45C;
    // 0x8001B440: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x8001B444: slti        $at, $a1, 0x98
    ctx->r1 = SIGNED(ctx->r5) < 0X98 ? 1 : 0;
L_8001B448:
    // 0x8001B448: bnel        $at, $zero, L_8001B460
    if (ctx->r1 != 0) {
        // 0x8001B44C: andi        $t7, $t6, 0x1F
        ctx->r15 = ctx->r14 & 0X1F;
            goto L_8001B460;
    }
    goto skip_2;
    // 0x8001B44C: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    skip_2:
    // 0x8001B450: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8001B454: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x8001B458: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8001B45C:
    // 0x8001B45C: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
L_8001B460:
    // 0x8001B460: andi        $t1, $t7, 0xFFFF
    ctx->r9 = ctx->r15 & 0XFFFF;
    // 0x8001B464: beq         $t1, $zero, L_8001B478
    if (ctx->r9 == 0) {
        // 0x8001B468: andi        $v0, $t7, 0xFFFF
        ctx->r2 = ctx->r15 & 0XFFFF;
            goto L_8001B478;
    }
    // 0x8001B468: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x8001B46C: addiu       $v0, $t1, 0x2
    ctx->r2 = ADD32(ctx->r9, 0X2);
    // 0x8001B470: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8001B474: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8001B478:
    // 0x8001B478: bltz        $s0, L_8001B4B8
    if (SIGNED(ctx->r16) < 0) {
        // 0x8001B47C: nop
    
            goto L_8001B4B8;
    }
    // 0x8001B47C: nop

    // 0x8001B480: beq         $v0, $zero, L_8001B490
    if (ctx->r2 == 0) {
        // 0x8001B484: slt         $at, $s0, $v0
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8001B490;
    }
    // 0x8001B484: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001B488: beq         $at, $zero, L_8001B4B4
    if (ctx->r1 == 0) {
        // 0x8001B48C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8001B4B4;
    }
    // 0x8001B48C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8001B490:
    // 0x8001B490: addu        $t9, $a0, $t0
    ctx->r25 = ADD32(ctx->r4, ctx->r8);
    // 0x8001B494: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x8001B498: sll         $t3, $v1, 8
    ctx->r11 = S32(ctx->r3 << 8);
    // 0x8001B49C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001B4A0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001B4A4: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    // 0x8001B4A8: lw          $t0, -0x7AE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AE0);
    // 0x8001B4AC: b           L_8001B4B8
    // 0x8001B4B0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_8001B4B8;
    // 0x8001B4B0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_8001B4B4:
    // 0x8001B4B4: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
L_8001B4B8:
    // 0x8001B4B8: beq         $v0, $zero, L_8001B4C8
    if (ctx->r2 == 0) {
        // 0x8001B4BC: slt         $at, $s1, $v0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8001B4C8;
    }
    // 0x8001B4BC: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001B4C0: beq         $at, $zero, L_8001B4E4
    if (ctx->r1 == 0) {
        // 0x8001B4C4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8001B4E4;
    }
    // 0x8001B4C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8001B4C8:
    // 0x8001B4C8: addu        $t5, $a0, $t0
    ctx->r13 = ADD32(ctx->r4, ctx->r8);
    // 0x8001B4CC: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x8001B4D0: sll         $t7, $v1, 8
    ctx->r15 = S32(ctx->r3 << 8);
    // 0x8001B4D4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B4D8: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x8001B4DC: b           L_8001B59C
    // 0x8001B4E0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8001B59C;
    // 0x8001B4E0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8001B4E4:
    // 0x8001B4E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001B4E8: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8001B4EC: subu        $s1, $s1, $a1
    ctx->r17 = SUB32(ctx->r17, ctx->r5);
    // 0x8001B4F0: b           L_8001B2F4
    // 0x8001B4F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_8001B2F4;
    // 0x8001B4F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_8001B4F8:
    // 0x8001B4F8: bltz        $s0, L_8001B544
    if (SIGNED(ctx->r16) < 0) {
        // 0x8001B4FC: andi        $t2, $a1, 0xF
        ctx->r10 = ctx->r5 & 0XF;
            goto L_8001B544;
    }
    // 0x8001B4FC: andi        $t2, $a1, 0xF
    ctx->r10 = ctx->r5 & 0XF;
    // 0x8001B500: beq         $t2, $zero, L_8001B510
    if (ctx->r10 == 0) {
        // 0x8001B504: slt         $at, $s0, $t2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_8001B510;
    }
    // 0x8001B504: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8001B508: beq         $at, $zero, L_8001B540
    if (ctx->r1 == 0) {
        // 0x8001B50C: or          $t1, $t2, $zero
        ctx->r9 = ctx->r10 | 0;
            goto L_8001B540;
    }
    // 0x8001B50C: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
L_8001B510:
    // 0x8001B510: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x8001B514: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8001B518: addu        $v0, $t4, $t0
    ctx->r2 = ADD32(ctx->r12, ctx->r8);
    // 0x8001B51C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8001B520: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x8001B524: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001B528: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8001B52C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8001B530: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x8001B534: lw          $t0, -0x7AE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7AE0);
    // 0x8001B538: b           L_8001B544
    // 0x8001B53C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_8001B544;
    // 0x8001B53C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_8001B540:
    // 0x8001B540: subu        $s0, $s0, $t1
    ctx->r16 = SUB32(ctx->r16, ctx->r9);
L_8001B544:
    // 0x8001B544: beq         $t9, $zero, L_8001B558
    if (ctx->r25 == 0) {
        // 0x8001B548: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8001B558;
    }
    // 0x8001B548: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001B54C: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8001B550: beq         $at, $zero, L_8001B580
    if (ctx->r1 == 0) {
        // 0x8001B554: or          $t1, $t9, $zero
        ctx->r9 = ctx->r25 | 0;
            goto L_8001B580;
    }
    // 0x8001B554: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
L_8001B558:
    // 0x8001B558: sll         $t2, $s1, 1
    ctx->r10 = S32(ctx->r17 << 1);
    // 0x8001B55C: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x8001B560: addu        $v1, $t3, $t0
    ctx->r3 = ADD32(ctx->r11, ctx->r8);
    // 0x8001B564: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8001B568: lbu         $t4, 0x1($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1);
    // 0x8001B56C: sll         $t5, $t6, 8
    ctx->r13 = S32(ctx->r14 << 8);
    // 0x8001B570: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x8001B574: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x8001B578: b           L_8001B59C
    // 0x8001B57C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8001B59C;
    // 0x8001B57C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8001B580:
    // 0x8001B580: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8001B584: addu        $v0, $a3, $t8
    ctx->r2 = ADD32(ctx->r7, ctx->r24);
    // 0x8001B588: addu        $t9, $v0, $t0
    ctx->r25 = ADD32(ctx->r2, ctx->r8);
    // 0x8001B58C: subu        $s1, $s1, $t1
    ctx->r17 = SUB32(ctx->r17, ctx->r9);
    // 0x8001B590: lbu         $v1, -0x2($t9)
    ctx->r3 = MEM_BU(ctx->r25, -0X2);
    // 0x8001B594: b           L_8001B2F4
    // 0x8001B598: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
        goto L_8001B2F4;
    // 0x8001B598: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
L_8001B59C:
    // 0x8001B59C: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8001B5A0: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8001B5A4: jr          $ra
    // 0x8001B5A8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8001B5A8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8000C838_D438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C838: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C83C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000C840: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000C844: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000C848: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8000C84C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_8000C850:
    // 0x8000C850: jal         0x8000C878
    // 0x8000C854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000C878_D478(rdram, ctx);
        goto after_0;
    // 0x8000C854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000C858: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000C85C: bne         $s0, $s1, L_8000C850
    if (ctx->r16 != ctx->r17) {
        // 0x8000C860: nop
    
            goto L_8000C850;
    }
    // 0x8000C860: nop

    // 0x8000C864: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C868: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000C86C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000C870: jr          $ra
    // 0x8000C874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8000C874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000A130_AD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000A134: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000A138: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000A13C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000A140: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8000A144: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000A148: addiu       $s0, $s0, -0x5AC
    ctx->r16 = ADD32(ctx->r16, -0X5AC);
    // 0x8000A14C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000A150: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
L_8000A154:
    // 0x8000A154: jal         0x8000A228
    // 0x8000A158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000A228_AE28(rdram, ctx);
        goto after_0;
    // 0x8000A158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000A15C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000A160: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x8000A164: bne         $s1, $s2, L_8000A154
    if (ctx->r17 != ctx->r18) {
        // 0x8000A168: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_8000A154;
    }
    // 0x8000A168: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x8000A16C: jal         0x8000A18C
    // 0x8000A170: nop

    func_8000A18C_AD8C(rdram, ctx);
        goto after_1;
    // 0x8000A170: nop

    after_1:
    // 0x8000A174: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000A178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A17C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A180: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000A184: jr          $ra
    // 0x8000A188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8000A188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80001928_2528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000192C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001930: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80001934: srl         $t6, $a2, 16
    ctx->r14 = S32(U32(ctx->r6) >> 16);
    // 0x80001938: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8000193C: lui         $at, 0x3C19
    ctx->r1 = S32(0X3C19 << 16);
    // 0x80001940: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80001944: lui         $at, 0x2739
    ctx->r1 = S32(0X2739 << 16);
    // 0x80001948: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x8000194C: lui         $t1, 0x320
    ctx->r9 = S32(0X320 << 16);
    // 0x80001950: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80001954: ori         $t1, $t1, 0x8
    ctx->r9 = ctx->r9 | 0X8;
    // 0x80001958: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000195C: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x80001960: sw          $t1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r9;
    // 0x80001964: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80001968: jal         0x80040620
    // 0x8000196C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8000196C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x80001970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001978: jr          $ra
    // 0x8000197C: nop

    TRACE_RETURN()
    return;
    // 0x8000197C: nop

;}
RECOMP_FUNC void func_8000C5E4_D1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C5E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C5E8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C5EC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C5F0: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C5F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000C5F8: beq         $v0, $zero, L_8000C604
    if (ctx->r2 == 0) {
        // 0x8000C5FC: nop
    
            goto L_8000C604;
    }
    // 0x8000C5FC: nop

    // 0x8000C600: swc1        $f12, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->f12.u32l;
L_8000C604:
    // 0x8000C604: jr          $ra
    // 0x8000C608: nop

    TRACE_RETURN()
    return;
    // 0x8000C608: nop

;}
RECOMP_FUNC void func_8000C454_D054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C454: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C458: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C45C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C460: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C464: beq         $v0, $zero, L_8000C480
    if (ctx->r2 == 0) {
        // 0x8000C468: nop
    
            goto L_8000C480;
    }
    // 0x8000C468: nop

    // 0x8000C46C: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C470: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C474: ori         $t1, $t9, 0x2
    ctx->r9 = ctx->r25 | 0X2;
    // 0x8000C478: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C47C: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
L_8000C480:
    // 0x8000C480: jr          $ra
    // 0x8000C484: nop

    TRACE_RETURN()
    return;
    // 0x8000C484: nop

;}
RECOMP_FUNC void func_80034734_35334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034734: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80034738: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003473C: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80034740: lw          $s0, -0x2CD8($t6)
    ctx->r16 = MEM_W(ctx->r14, -0X2CD8);
    // 0x80034744: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80034748: lui         $s3, 0x8017
    ctx->r19 = S32(0X8017 << 16);
    // 0x8003474C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80034750: addiu       $s3, $s3, -0x254C
    ctx->r19 = ADD32(ctx->r19, -0X254C);
    // 0x80034754: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80034758: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003475C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x80034760: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80034764: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80034768: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003476C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80034770: addiu       $s4, $s4, -0x3340
    ctx->r20 = ADD32(ctx->r20, -0X3340);
    // 0x80034774: lui         $s2, 0x80
    ctx->r18 = S32(0X80 << 16);
    // 0x80034778: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
L_8003477C:
    // 0x8003477C: beq         $s1, $zero, L_8003479C
    if (ctx->r17 == 0) {
        // 0x80034780: addiu       $t0, $s4, 0x7FFF
        ctx->r8 = ADD32(ctx->r20, 0X7FFF);
            goto L_8003479C;
    }
    // 0x80034780: addiu       $t0, $s4, 0x7FFF
    ctx->r8 = ADD32(ctx->r20, 0X7FFF);
    // 0x80034784: lhu         $t7, 0x20($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X20);
    // 0x80034788: lhu         $t8, 0x20($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X20);
    // 0x8003478C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80034790: bnel        $at, $zero, L_80034858
    if (ctx->r1 != 0) {
        // 0x80034794: lw          $t8, 0x0($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X0);
            goto L_80034858;
    }
    goto skip_0;
    // 0x80034794: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x80034798: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003479C:
    // 0x8003479C: lhu         $t9, 0x22($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X22);
    // 0x800347A0: lhu         $t0, 0x2E25($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X2E25);
    // 0x800347A4: and         $t1, $t9, $t0
    ctx->r9 = ctx->r25 & ctx->r8;
    // 0x800347A8: andi        $t2, $t1, 0x7
    ctx->r10 = ctx->r9 & 0X7;
    // 0x800347AC: beql        $t2, $zero, L_800347C0
    if (ctx->r10 == 0) {
        // 0x800347B0: lhu         $v0, 0x20($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X20);
            goto L_800347C0;
    }
    goto skip_1;
    // 0x800347B0: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    skip_1:
    // 0x800347B4: b           L_80034854
    // 0x800347B8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
        goto L_80034854;
    // 0x800347B8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x800347BC: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
L_800347C0:
    // 0x800347C0: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800347C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800347C8: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x800347CC: beq         $v1, $zero, L_800347E8
    if (ctx->r3 == 0) {
        // 0x800347D0: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_800347E8;
    }
    // 0x800347D0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_800347D4:
    // 0x800347D4: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800347D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800347DC: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x800347E0: bne         $v1, $zero, L_800347D4
    if (ctx->r3 != 0) {
        // 0x800347E4: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_800347D4;
    }
    // 0x800347E4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_800347E8:
    // 0x800347E8: jal         0x8001481C
    // 0x800347EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001481C_1541C(rdram, ctx);
        goto after_0;
    // 0x800347EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800347F0: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x800347F4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800347F8: beq         $v0, $zero, L_80034814
    if (ctx->r2 == 0) {
        // 0x800347FC: and         $t5, $v0, $s2
        ctx->r13 = ctx->r2 & ctx->r18;
            goto L_80034814;
    }
    // 0x800347FC: and         $t5, $v0, $s2
    ctx->r13 = ctx->r2 & ctx->r18;
    // 0x80034800: bne         $t5, $zero, L_80034814
    if (ctx->r13 != 0) {
        // 0x80034804: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80034814;
    }
    // 0x80034804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034808: jalr        $v0
    // 0x8003480C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8003480C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x80034810: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_80034814:
    // 0x80034814: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80034818: beq         $v0, $zero, L_80034834
    if (ctx->r2 == 0) {
        // 0x8003481C: and         $t6, $v0, $s2
        ctx->r14 = ctx->r2 & ctx->r18;
            goto L_80034834;
    }
    // 0x8003481C: and         $t6, $v0, $s2
    ctx->r14 = ctx->r2 & ctx->r18;
    // 0x80034820: bne         $t6, $zero, L_80034834
    if (ctx->r14 != 0) {
        // 0x80034824: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80034834;
    }
    // 0x80034824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034828: jalr        $v0
    // 0x8003482C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8003482C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_2:
    // 0x80034830: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_80034834:
    // 0x80034834: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80034838: beq         $v0, $zero, L_80034854
    if (ctx->r2 == 0) {
        // 0x8003483C: and         $t7, $v0, $s2
        ctx->r15 = ctx->r2 & ctx->r18;
            goto L_80034854;
    }
    // 0x8003483C: and         $t7, $v0, $s2
    ctx->r15 = ctx->r2 & ctx->r18;
    // 0x80034840: bne         $t7, $zero, L_80034854
    if (ctx->r15 != 0) {
        // 0x80034844: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80034854;
    }
    // 0x80034844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034848: jalr        $v0
    // 0x8003484C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8003484C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_3:
    // 0x80034850: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_80034854:
    // 0x80034854: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
L_80034858:
    // 0x80034858: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x8003485C: bne         $t8, $zero, L_8003477C
    if (ctx->r24 != 0) {
        // 0x80034860: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_8003477C;
    }
    // 0x80034860: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80034864: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80034868: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003486C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80034870: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80034874: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80034878: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003487C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80034880: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80034884: jr          $ra
    // 0x80034888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80034888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void alLink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047620: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80047624: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80047628: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8004762C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80047630: beq         $v0, $zero, L_8004763C
    if (ctx->r2 == 0) {
        // 0x80047634: nop
    
            goto L_8004763C;
    }
    // 0x80047634: nop

    // 0x80047638: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
L_8004763C:
    // 0x8004763C: jr          $ra
    // 0x80047640: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80047640: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_80006298_6E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006298: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8000629C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x800062A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800062A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800062A8: addiu       $a0, $v0, 0x7FFF
    ctx->r4 = ADD32(ctx->r2, 0X7FFF);
    // 0x800062AC: lhu         $a0, 0x2E3B($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2E3B);
    // 0x800062B0: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x800062B4: beql        $a0, $zero, L_80006310
    if (ctx->r4 == 0) {
        // 0x800062B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80006310;
    }
    goto skip_0;
    // 0x800062B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800062BC: lw          $t6, 0x2E3D($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2E3D);
    // 0x800062C0: beql        $t6, $zero, L_80006310
    if (ctx->r14 == 0) {
        // 0x800062C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80006310;
    }
    goto skip_1;
    // 0x800062C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x800062C8: jal         0x80013B14
    // 0x800062CC: nop

    func_80013B14_14714(rdram, ctx);
        goto after_0;
    // 0x800062CC: nop

    after_0:
    // 0x800062D0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800062D4: jal         0x80001E50
    // 0x800062D8: lhu         $a0, 0x7AFA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AFA);
    func_80001E50_2A50(rdram, ctx);
        goto after_1;
    // 0x800062D8: lhu         $a0, 0x7AFA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AFA);
    after_1:
    // 0x800062DC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800062E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800062E4: jal         0x800141C4
    // 0x800062E8: lhu         $a0, 0x7AFA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AFA);
    func_800141C4_14DC4(rdram, ctx);
        goto after_2;
    // 0x800062E8: lhu         $a0, 0x7AFA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AFA);
    after_2:
    // 0x800062EC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x800062F0: lw          $t7, 0x7AFC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7AFC);
    // 0x800062F4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800062F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800062FC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80006300: sll         $t0, $t9, 24
    ctx->r8 = S32(ctx->r25 << 24);
    // 0x80006304: jal         0x80004964
    // 0x80006308: subu        $a1, $t8, $t0
    ctx->r5 = SUB32(ctx->r24, ctx->r8);
    func_80004964_5564(rdram, ctx);
        goto after_3;
    // 0x80006308: subu        $a1, $t8, $t0
    ctx->r5 = SUB32(ctx->r24, ctx->r8);
    after_3:
    // 0x8000630C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80006310:
    // 0x80006310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80006314: jr          $ra
    // 0x80006318: nop

    TRACE_RETURN()
    return;
    // 0x80006318: nop

;}
RECOMP_FUNC void guLookAtReflectF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046E90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80046E94: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80046E98: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x80046E9C: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x80046EA0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x80046EA4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80046EA8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80046EAC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80046EB0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80046EB4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80046EB8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80046EBC: jal         0x80043BA0
    // 0x80046EC0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80046EC0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80046EC4: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80046EC8: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80046ECC: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80046ED0: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80046ED4: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80046ED8: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80046EDC: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80046EE0: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80046EE4: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80046EE8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80046EEC: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80046EF0: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80046EF4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80046EF8: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x80046EFC: jal         0x800417E0
    // 0x80046F00: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x80046F00: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80046F04: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80046F08: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80046F0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80046F10: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80046F14: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80046F18: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80046F1C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80046F20: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x80046F24: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80046F28: nop

    // 0x80046F2C: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80046F30: nop

    // 0x80046F34: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x80046F38: nop

    // 0x80046F3C: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80046F40: nop

    // 0x80046F44: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80046F48: sub.s       $f26, $f8, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80046F4C: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80046F50: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80046F54: mul.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x80046F58: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80046F5C: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80046F60: nop

    // 0x80046F64: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80046F68: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80046F6C: mul.s       $f4, $f26, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x80046F70: nop

    // 0x80046F74: mul.s       $f6, $f28, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x80046F78: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80046F7C: mul.s       $f10, $f30, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x80046F80: jal         0x800417E0
    // 0x80046F84: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_2;
    // 0x80046F84: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x80046F88: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80046F8C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80046F90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80046F94: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80046F98: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80046F9C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80046FA0: mul.s       $f26, $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x80046FA4: nop

    // 0x80046FA8: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x80046FAC: nop

    // 0x80046FB0: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x80046FB4: nop

    // 0x80046FB8: mul.s       $f10, $f22, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x80046FBC: nop

    // 0x80046FC0: mul.s       $f4, $f24, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x80046FC4: nop

    // 0x80046FC8: mul.s       $f6, $f24, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f26.fl);
    // 0x80046FCC: nop

    // 0x80046FD0: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x80046FD4: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80046FD8: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x80046FDC: nop

    // 0x80046FE0: mul.s       $f4, $f22, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x80046FE4: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x80046FE8: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80046FEC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80046FF0: nop

    // 0x80046FF4: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80046FF8: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x80046FFC: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80047000: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80047004: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80047008: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x8004700C: jal         0x800417E0
    // 0x80047010: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x80047010: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_3:
    // 0x80047014: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80047018: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8004701C: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x80047020: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80047024: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80047028: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8004702C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80047030: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80047034: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80047038: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8004703C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80047040: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80047044: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80047048: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8004704C: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80047050: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80047054: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80047058: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8004705C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x80047060: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80047064: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x80047068: mul.s       $f14, $f26, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x8004706C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x80047070: mul.s       $f2, $f28, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f28.fl, ctx->f16.fl);
    // 0x80047074: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80047078: nop

    // 0x8004707C: bc1fl       L_80047090
    if (!c1cs) {
        // 0x80047080: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80047090;
    }
    goto skip_0;
    // 0x80047080: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_0:
    // 0x80047084: b           L_80047090
    // 0x80047088: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_80047090;
    // 0x80047088: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8004708C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80047090:
    // 0x80047090: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80047094: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80047098: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8004709C: bc1f        L_800470AC
    if (!c1cs) {
        // 0x800470A0: sb          $t8, 0x8($a1)
        MEM_B(0X8, ctx->r5) = ctx->r24;
            goto L_800470AC;
    }
    // 0x800470A0: sb          $t8, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r24;
    // 0x800470A4: b           L_800470B0
    // 0x800470A8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_800470B0;
    // 0x800470A8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800470AC:
    // 0x800470AC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800470B0:
    // 0x800470B0: mul.s       $f2, $f30, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f30.fl, ctx->f16.fl);
    // 0x800470B4: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800470B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800470BC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800470C0: bc1f        L_800470D0
    if (!c1cs) {
        // 0x800470C4: sb          $t1, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r9;
            goto L_800470D0;
    }
    // 0x800470C4: sb          $t1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r9;
    // 0x800470C8: b           L_800470D4
    // 0x800470CC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_800470D4;
    // 0x800470CC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800470D0:
    // 0x800470D0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800470D4:
    // 0x800470D4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800470D8: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x800470DC: nop

    // 0x800470E0: sb          $t4, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r12;
    // 0x800470E4: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800470E8: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x800470EC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800470F0: nop

    // 0x800470F4: bc1fl       L_80047108
    if (!c1cs) {
        // 0x800470F8: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80047108;
    }
    goto skip_1;
    // 0x800470F8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_1:
    // 0x800470FC: b           L_80047108
    // 0x80047100: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80047108;
    // 0x80047100: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80047104: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80047108:
    // 0x80047108: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8004710C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80047110: nop

    // 0x80047114: sb          $t7, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r15;
    // 0x80047118: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8004711C: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80047120: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80047124: nop

    // 0x80047128: bc1fl       L_8004713C
    if (!c1cs) {
        // 0x8004712C: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_8004713C;
    }
    goto skip_2;
    // 0x8004712C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_2:
    // 0x80047130: b           L_8004713C
    // 0x80047134: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8004713C;
    // 0x80047134: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80047138: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8004713C:
    // 0x8004713C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80047140: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80047144: nop

    // 0x80047148: sb          $t0, 0x19($a1)
    MEM_B(0X19, ctx->r5) = ctx->r8;
    // 0x8004714C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80047150: mul.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80047154: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80047158: nop

    // 0x8004715C: bc1fl       L_80047170
    if (!c1cs) {
        // 0x80047160: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80047170;
    }
    goto skip_3;
    // 0x80047160: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_3:
    // 0x80047164: b           L_80047170
    // 0x80047168: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80047170;
    // 0x80047168: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8004716C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80047170:
    // 0x80047170: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80047174: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80047178: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
    // 0x8004717C: sb          $zero, 0x2($a1)
    MEM_B(0X2, ctx->r5) = 0;
    // 0x80047180: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80047184: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80047188: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8004718C: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
    // 0x80047190: sb          $zero, 0x6($a1)
    MEM_B(0X6, ctx->r5) = 0;
    // 0x80047194: sb          $zero, 0x7($a1)
    MEM_B(0X7, ctx->r5) = 0;
    // 0x80047198: sb          $zero, 0x10($a1)
    MEM_B(0X10, ctx->r5) = 0;
    // 0x8004719C: sb          $v0, 0x11($a1)
    MEM_B(0X11, ctx->r5) = ctx->r2;
    // 0x800471A0: sb          $zero, 0x12($a1)
    MEM_B(0X12, ctx->r5) = 0;
    // 0x800471A4: sb          $zero, 0x13($a1)
    MEM_B(0X13, ctx->r5) = 0;
    // 0x800471A8: sb          $zero, 0x14($a1)
    MEM_B(0X14, ctx->r5) = 0;
    // 0x800471AC: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
    // 0x800471B0: sb          $zero, 0x16($a1)
    MEM_B(0X16, ctx->r5) = 0;
    // 0x800471B4: sb          $zero, 0x17($a1)
    MEM_B(0X17, ctx->r5) = 0;
    // 0x800471B8: sb          $t3, 0x1A($a1)
    MEM_B(0X1A, ctx->r5) = ctx->r11;
    // 0x800471BC: swc1        $f26, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f26.u32l;
    // 0x800471C0: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800471C4: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800471C8: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800471CC: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x800471D0: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800471D4: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800471D8: mul.s       $f4, $f16, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f28.fl);
    // 0x800471DC: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800471E0: swc1        $f28, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f28.u32l;
    // 0x800471E4: mul.s       $f8, $f14, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f30.fl);
    // 0x800471E8: swc1        $f30, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f30.u32l;
    // 0x800471EC: swc1        $f20, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f20.u32l;
    // 0x800471F0: swc1        $f22, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f22.u32l;
    // 0x800471F4: swc1        $f24, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f24.u32l;
    // 0x800471F8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800471FC: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x80047200: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x80047204: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x80047208: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004720C: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80047210: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80047214: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80047218: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8004721C: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80047220: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80047224: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80047228: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004722C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80047230: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80047234: swc1        $f8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f8.u32l;
    // 0x80047238: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8004723C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80047240: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80047244: nop

    // 0x80047248: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8004724C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80047250: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x80047254: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x80047258: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8004725C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80047260: mul.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80047264: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80047268: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004726C: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x80047270: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x80047274: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
    // 0x80047278: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8004727C: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x80047280: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x80047284: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x80047288: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x8004728C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80047290: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80047294: jr          $ra
    // 0x80047298: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80047298: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80005B90_6790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80005B90: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80005B94: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80005B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80005B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005BA0: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005BA4: lbu         $v0, 0x2DDB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DDB);
    // 0x80005BA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80005BAC: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005BB0: beql        $v0, $zero, L_80005BDC
    if (ctx->r2 == 0) {
        // 0x80005BB4: lhu         $t6, 0x2E19($t6)
        ctx->r14 = MEM_HU(ctx->r14, 0X2E19);
            goto L_80005BDC;
    }
    goto skip_0;
    // 0x80005BB4: lhu         $t6, 0x2E19($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2E19);
    skip_0:
    // 0x80005BB8: beq         $v0, $at, L_80005C48
    if (ctx->r2 == ctx->r1) {
        // 0x80005BBC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80005C48;
    }
    // 0x80005BBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80005BC0: beq         $v0, $at, L_80005D74
    if (ctx->r2 == ctx->r1) {
        // 0x80005BC4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80005D74;
    }
    // 0x80005BC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80005BC8: beq         $v0, $at, L_80005DD8
    if (ctx->r2 == ctx->r1) {
        // 0x80005BCC: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_80005DD8;
    }
    // 0x80005BCC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005BD0: b           L_80005ED0
    // 0x80005BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80005ED0;
    // 0x80005BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005BD8: lhu         $t6, 0x2E19($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2E19);
L_80005BDC:
    // 0x80005BDC: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80005BE0: bne         $at, $zero, L_80005BEC
    if (ctx->r1 != 0) {
        // 0x80005BE4: addiu       $at, $v1, 0x7FFF
        ctx->r1 = ADD32(ctx->r3, 0X7FFF);
            goto L_80005BEC;
    }
    // 0x80005BE4: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005BE8: sh          $zero, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = 0;
L_80005BEC:
    // 0x80005BEC: jal         0x80005EDC
    // 0x80005BF0: nop

    func_80005EDC_6ADC(rdram, ctx);
        goto after_0;
    // 0x80005BF0: nop

    after_0:
    // 0x80005BF4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005BF8: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80005BFC: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80005C00: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80005C04: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80005C08: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80005C0C: lhu         $t9, 0x3092($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X3092);
    // 0x80005C10: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80005C14: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80005C18: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80005C1C: beq         $t0, $zero, L_80005C30
    if (ctx->r8 == 0) {
        // 0x80005C20: addiu       $t2, $v1, 0x7FFF
        ctx->r10 = ADD32(ctx->r3, 0X7FFF);
            goto L_80005C30;
    }
    // 0x80005C20: addiu       $t2, $v1, 0x7FFF
    ctx->r10 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005C24: ori         $t1, $zero, 0xFFFF
    ctx->r9 = 0 | 0XFFFF;
    // 0x80005C28: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005C2C: sh          $t1, 0x2E3B($at)
    MEM_H(0X2E3B, ctx->r1) = ctx->r9;
L_80005C30:
    // 0x80005C30: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005C34: sh          $zero, 0x2DD1($at)
    MEM_H(0X2DD1, ctx->r1) = 0;
    // 0x80005C38: lbu         $t2, 0x2DDB($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2DDB);
    // 0x80005C3C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80005C40: b           L_80005ECC
    // 0x80005C44: sb          $t3, 0x2DDB($at)
    MEM_B(0X2DDB, ctx->r1) = ctx->r11;
        goto L_80005ECC;
    // 0x80005C44: sb          $t3, 0x2DDB($at)
    MEM_B(0X2DDB, ctx->r1) = ctx->r11;
L_80005C48:
    // 0x80005C48: jal         0x80005FDC
    // 0x80005C4C: nop

    func_80005FDC_6BDC(rdram, ctx);
        goto after_1;
    // 0x80005C4C: nop

    after_1:
    // 0x80005C50: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80005C54: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80005C58: addiu       $t4, $v1, 0x7FFF
    ctx->r12 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005C5C: lhu         $t4, 0x2E3B($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2E3B);
    // 0x80005C60: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80005C64: addiu       $t5, $v1, 0x7FFF
    ctx->r13 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005C68: beq         $t4, $at, L_80005D44
    if (ctx->r12 == ctx->r1) {
        // 0x80005C6C: nop
    
            goto L_80005D44;
    }
    // 0x80005C6C: nop

    // 0x80005C70: lh          $t5, 0x2DB7($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X2DB7);
    // 0x80005C74: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80005C78: bne         $t5, $zero, L_80005D44
    if (ctx->r13 != 0) {
        // 0x80005C7C: nop
    
            goto L_80005D44;
    }
    // 0x80005C7C: nop

    // 0x80005C80: lhu         $t6, 0x71B8($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X71B8);
    // 0x80005C84: addiu       $t8, $v1, 0x7FFF
    ctx->r24 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005C88: lui         $t0, 0x8006
    ctx->r8 = S32(0X8006 << 16);
    // 0x80005C8C: andi        $t7, $t6, 0xD000
    ctx->r15 = ctx->r14 & 0XD000;
    // 0x80005C90: bne         $t7, $zero, L_80005CC4
    if (ctx->r15 != 0) {
        // 0x80005C94: nop
    
            goto L_80005CC4;
    }
    // 0x80005C94: nop

    // 0x80005C98: lhu         $t8, 0x2E19($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2E19);
    // 0x80005C9C: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005CA0: lhu         $t1, 0x2DD1($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X2DD1);
    // 0x80005CA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80005CA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80005CAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80005CB0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80005CB4: lhu         $t0, -0x4E14($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X4E14);
    // 0x80005CB8: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80005CBC: beq         $at, $zero, L_80005D44
    if (ctx->r1 == 0) {
        // 0x80005CC0: nop
    
            goto L_80005D44;
    }
    // 0x80005CC0: nop

L_80005CC4:
    // 0x80005CC4: jal         0x80038BC8
    // 0x80005CC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x80005CC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x80005CCC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80005CD0: jal         0x800369F0
    // 0x80005CD4: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_800369F0_375F0(rdram, ctx);
        goto after_3;
    // 0x80005CD4: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_3:
    // 0x80005CD8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80005CDC: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80005CE0: addiu       $t2, $v1, 0x7FFF
    ctx->r10 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005CE4: lbu         $t2, 0x2DDB($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2DDB);
    // 0x80005CE8: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005CEC: addiu       $t4, $v1, 0x7FFF
    ctx->r12 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005CF0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80005CF4: sb          $t3, 0x2DDB($at)
    MEM_B(0X2DDB, ctx->r1) = ctx->r11;
    // 0x80005CF8: lhu         $t4, 0x2E19($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2E19);
    // 0x80005CFC: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80005D00: addiu       $t7, $v1, 0x7FFF
    ctx->r15 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005D04: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80005D08: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80005D0C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80005D10: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80005D14: lhu         $t6, -0x4E14($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X4E14);
    // 0x80005D18: lhu         $t7, 0x2DD1($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2DD1);
    // 0x80005D1C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005D20: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80005D24: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80005D28: beq         $at, $zero, L_80005D44
    if (ctx->r1 == 0) {
        // 0x80005D2C: nop
    
            goto L_80005D44;
    }
    // 0x80005D2C: nop

    // 0x80005D30: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80005D34: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80005D38: ori         $t8, $zero, 0xF000
    ctx->r24 = 0 | 0XF000;
    // 0x80005D3C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80005D40: sh          $t8, -0x5230($at)
    MEM_H(-0X5230, ctx->r1) = ctx->r24;
L_80005D44:
    // 0x80005D44: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005D48: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80005D4C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80005D50: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80005D54: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80005D58: addu        $t0, $v0, $a1
    ctx->r8 = ADD32(ctx->r2, ctx->r5);
    // 0x80005D5C: lhu         $t1, 0x2DD0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2DD0);
    // 0x80005D60: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80005D64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80005D68: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80005D6C: b           L_80005ECC
    // 0x80005D70: sh          $t2, -0x5230($at)
    MEM_H(-0X5230, ctx->r1) = ctx->r10;
        goto L_80005ECC;
    // 0x80005D70: sh          $t2, -0x5230($at)
    MEM_H(-0X5230, ctx->r1) = ctx->r10;
L_80005D74:
    // 0x80005D74: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80005D78: jal         0x80036908
    // 0x80005D7C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_80036908_37508(rdram, ctx);
        goto after_4;
    // 0x80005D7C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_4:
    // 0x80005D80: bnel        $v0, $zero, L_80005ED0
    if (ctx->r2 != 0) {
        // 0x80005D84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80005ED0;
    }
    goto skip_1;
    // 0x80005D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80005D88: jal         0x80004910
    // 0x80005D8C: nop

    func_80004910_5510(rdram, ctx);
        goto after_5;
    // 0x80005D8C: nop

    after_5:
    // 0x80005D90: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005D94: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80005D98: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80005D9C: sb          $zero, 0x71BC($at)
    MEM_B(0X71BC, ctx->r1) = 0;
    // 0x80005DA0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80005DA4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80005DA8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80005DAC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80005DB0: jal         0x80003880
    // 0x80005DB4: sb          $t3, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r11;
    func_80003880_4480(rdram, ctx);
        goto after_6;
    // 0x80005DB4: sb          $t3, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r11;
    after_6:
    // 0x80005DB8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80005DBC: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80005DC0: addiu       $t5, $v1, 0x7FFF
    ctx->r13 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005DC4: lbu         $t5, 0x2DDB($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X2DDB);
    // 0x80005DC8: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005DCC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80005DD0: b           L_80005ECC
    // 0x80005DD4: sb          $t6, 0x2DDB($at)
    MEM_B(0X2DDB, ctx->r1) = ctx->r14;
        goto L_80005ECC;
    // 0x80005DD4: sb          $t6, 0x2DDB($at)
    MEM_B(0X2DDB, ctx->r1) = ctx->r14;
L_80005DD8:
    // 0x80005DD8: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80005DDC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80005DE0: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80005DE4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80005DE8: addu        $t7, $v0, $a1
    ctx->r15 = ADD32(ctx->r2, ctx->r5);
    // 0x80005DEC: lbu         $t8, 0x301D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X301D);
    // 0x80005DF0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80005DF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80005DF8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80005DFC: sb          $t9, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r25;
    // 0x80005E00: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80005E04: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x80005E08: lbu         $t2, 0x301D($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X301D);
    // 0x80005E0C: bnel        $t2, $zero, L_80005ED0
    if (ctx->r10 != 0) {
        // 0x80005E10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80005ED0;
    }
    goto skip_2;
    // 0x80005E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80005E14: jal         0x8000383C
    // 0x80005E18: nop

    func_8000383C_443C(rdram, ctx);
        goto after_7;
    // 0x80005E18: nop

    after_7:
    // 0x80005E1C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80005E20: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80005E24: addiu       $t3, $v1, 0x7FFF
    ctx->r11 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005E28: lhu         $t3, 0x2E19($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X2E19);
    // 0x80005E2C: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005E30: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005E34: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80005E38: sh          $t4, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = ctx->r12;
    // 0x80005E3C: lhu         $v0, 0x2E19($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2E19);
    // 0x80005E40: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80005E44: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80005E48: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80005E4C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80005E50: bne         $at, $zero, L_80005E8C
    if (ctx->r1 != 0) {
        // 0x80005E54: addiu       $a0, $a0, -0x3A38
        ctx->r4 = ADD32(ctx->r4, -0X3A38);
            goto L_80005E8C;
    }
    // 0x80005E54: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80005E58: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80005E5C: ori         $at, $zero, 0xE001
    ctx->r1 = 0 | 0XE001;
    // 0x80005E60: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80005E64: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x80005E68: lhu         $t7, 0x2DD0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2DD0);
    // 0x80005E6C: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80005E70: bne         $at, $zero, L_80005E8C
    if (ctx->r1 != 0) {
        // 0x80005E74: addiu       $at, $v1, 0x7FFF
        ctx->r1 = ADD32(ctx->r3, 0X7FFF);
            goto L_80005E8C;
    }
    // 0x80005E74: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005E78: sh          $zero, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = 0;
    // 0x80005E7C: jal         0x80003728
    // 0x80005E80: sh          $zero, 0x2E17($at)
    MEM_H(0X2E17, ctx->r1) = 0;
    func_80003728_4328(rdram, ctx);
        goto after_8;
    // 0x80005E80: sh          $zero, 0x2E17($at)
    MEM_H(0X2E17, ctx->r1) = 0;
    after_8:
    // 0x80005E84: b           L_80005ED0
    // 0x80005E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80005ED0;
    // 0x80005E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80005E8C:
    // 0x80005E8C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80005E90: bne         $at, $zero, L_80005E9C
    if (ctx->r1 != 0) {
        // 0x80005E94: addiu       $at, $v1, 0x7FFF
        ctx->r1 = ADD32(ctx->r3, 0X7FFF);
            goto L_80005E9C;
    }
    // 0x80005E94: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005E98: sh          $zero, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = 0;
L_80005E9C:
    // 0x80005E9C: jal         0x80004910
    // 0x80005EA0: nop

    func_80004910_5510(rdram, ctx);
        goto after_9;
    // 0x80005EA0: nop

    after_9:
    // 0x80005EA4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80005EA8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80005EAC: addiu       $t8, $v1, 0x7FFF
    ctx->r24 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005EB0: lhu         $t8, 0x2E19($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2E19);
    // 0x80005EB4: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80005EB8: sh          $zero, 0x2E17($at)
    MEM_H(0X2E17, ctx->r1) = 0;
    // 0x80005EBC: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x80005EC0: sh          $t9, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = ctx->r25;
    // 0x80005EC4: jal         0x80003728
    // 0x80005EC8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80003728_4328(rdram, ctx);
        goto after_10;
    // 0x80005EC8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_10:
L_80005ECC:
    // 0x80005ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80005ED0:
    // 0x80005ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80005ED4: jr          $ra
    // 0x80005ED8: nop

    TRACE_RETURN()
    return;
    // 0x80005ED8: nop

;}
RECOMP_FUNC void func_8000777C_837C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000777C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007784: lw          $v0, 0x2AC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2AC);
    // 0x80007788: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000778C: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x80007790: bnel        $t6, $at, L_800077AC
    if (ctx->r14 != ctx->r1) {
        // 0x80007794: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800077AC;
    }
    goto skip_0;
    // 0x80007794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80007798: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8000779C: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x800077A0: jal         0x80042B80
    // 0x800077A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    osSpTaskYield_recomp(rdram, ctx);
        goto after_0;
    // 0x800077A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    after_0:
    // 0x800077A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800077AC:
    // 0x800077AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800077B0: jr          $ra
    // 0x800077B4: nop

    TRACE_RETURN()
    return;
    // 0x800077B4: nop

;}
RECOMP_FUNC void func_80023ADC_246DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023ADC: slti        $at, $a0, 0x102
    ctx->r1 = SIGNED(ctx->r4) < 0X102 ? 1 : 0;
    // 0x80023AE0: bne         $at, $zero, L_80023B00
    if (ctx->r1 != 0) {
        // 0x80023AE4: addiu       $at, $zero, 0x102
        ctx->r1 = ADD32(0, 0X102);
            goto L_80023B00;
    }
    // 0x80023AE4: addiu       $at, $zero, 0x102
    ctx->r1 = ADD32(0, 0X102);
    // 0x80023AE8: beq         $a0, $at, L_80023B58
    if (ctx->r4 == ctx->r1) {
        // 0x80023AEC: addiu       $at, $zero, 0x200
        ctx->r1 = ADD32(0, 0X200);
            goto L_80023B58;
    }
    // 0x80023AEC: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x80023AF0: beq         $a0, $at, L_80023B58
    if (ctx->r4 == ctx->r1) {
        // 0x80023AF4: nop
    
            goto L_80023B58;
    }
    // 0x80023AF4: nop

    // 0x80023AF8: jr          $ra
    // 0x80023AFC: nop

    TRACE_RETURN()
    return;
    // 0x80023AFC: nop

L_80023B00:
    // 0x80023B00: slti        $at, $a0, 0x101
    ctx->r1 = SIGNED(ctx->r4) < 0X101 ? 1 : 0;
    // 0x80023B04: bne         $at, $zero, L_80023B1C
    if (ctx->r1 != 0) {
        // 0x80023B08: addiu       $at, $zero, 0x101
        ctx->r1 = ADD32(0, 0X101);
            goto L_80023B1C;
    }
    // 0x80023B08: addiu       $at, $zero, 0x101
    ctx->r1 = ADD32(0, 0X101);
    // 0x80023B0C: beq         $a0, $at, L_80023B58
    if (ctx->r4 == ctx->r1) {
        // 0x80023B10: nop
    
            goto L_80023B58;
    }
    // 0x80023B10: nop

    // 0x80023B14: jr          $ra
    // 0x80023B18: nop

    TRACE_RETURN()
    return;
    // 0x80023B18: nop

L_80023B1C:
    // 0x80023B1C: slti        $at, $a0, 0xC
    ctx->r1 = SIGNED(ctx->r4) < 0XC ? 1 : 0;
    // 0x80023B20: bne         $at, $zero, L_80023B38
    if (ctx->r1 != 0) {
        // 0x80023B24: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_80023B38;
    }
    // 0x80023B24: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x80023B28: beq         $a0, $at, L_80023B58
    if (ctx->r4 == ctx->r1) {
        // 0x80023B2C: nop
    
            goto L_80023B58;
    }
    // 0x80023B2C: nop

    // 0x80023B30: jr          $ra
    // 0x80023B34: nop

    TRACE_RETURN()
    return;
    // 0x80023B34: nop

L_80023B38:
    // 0x80023B38: sltiu       $at, $a0, 0xC
    ctx->r1 = ctx->r4 < 0XC ? 1 : 0;
    // 0x80023B3C: beq         $at, $zero, L_80023B58
    if (ctx->r1 == 0) {
        // 0x80023B40: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_80023B58;
    }
    // 0x80023B40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80023B44: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80023B48: addu        $at, $at, $t6
    gpr jr_addend_80023B50 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80023B4C: lw          $t6, -0x3FEC($at)
    ctx->r14 = ADD32(ctx->r1, -0X3FEC);
    // 0x80023B50: jr          $t6
    // 0x80023B54: nop

    switch (jr_addend_80023B50 >> 2) {
        case 0: goto L_80023B58; break;
        case 1: goto L_80023B58; break;
        case 2: goto L_80023B58; break;
        case 3: goto L_80023B58; break;
        case 4: goto L_80023B58; break;
        case 5: goto L_80023B58; break;
        case 6: goto L_80023B58; break;
        case 7: goto L_80023B58; break;
        case 8: goto L_80023B58; break;
        case 9: goto L_80023B58; break;
        case 10: goto L_80023B58; break;
        case 11: goto L_80023B58; break;
        default: switch_error(__func__, 0x80023B50, 0x8007C014);
    }
    // 0x80023B54: nop

L_80023B58:
    // 0x80023B58: jr          $ra
    // 0x80023B5C: nop

    TRACE_RETURN()
    return;
    // 0x80023B5C: nop

;}
RECOMP_FUNC void func_80039554_3A154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039554: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80039558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003955C: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80039560: lw          $t6, 0xA20($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XA20);
    // 0x80039564: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80039568: addiu       $t9, $t9, -0xEB4
    ctx->r25 = ADD32(ctx->r25, -0XEB4);
    // 0x8003956C: andi        $a0, $t6, 0x7FFF
    ctx->r4 = ctx->r14 & 0X7FFF;
    // 0x80039570: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80039574: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x80039578: lbu         $v0, -0x3E($a1)
    ctx->r2 = MEM_BU(ctx->r5, -0X3E);
    // 0x8003957C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80039580: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x80039584: beq         $v0, $zero, L_80039598
    if (ctx->r2 == 0) {
        // 0x80039588: lui         $t1, 0x801C
        ctx->r9 = S32(0X801C << 16);
            goto L_80039598;
    }
    // 0x80039588: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8003958C: lbu         $t0, -0x1D54($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1D54);
    // 0x80039590: beql        $t0, $v0, L_800395E4
    if (ctx->r8 == ctx->r2) {
        // 0x80039594: slti        $at, $a0, 0xC0
        ctx->r1 = SIGNED(ctx->r4) < 0XC0 ? 1 : 0;
            goto L_800395E4;
    }
    goto skip_0;
    // 0x80039594: slti        $at, $a0, 0xC0
    ctx->r1 = SIGNED(ctx->r4) < 0XC0 ? 1 : 0;
    skip_0:
L_80039598:
    // 0x80039598: lbu         $t1, 0x9D6($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X9D6);
    // 0x8003959C: beql        $t1, $zero, L_800395C8
    if (ctx->r9 == 0) {
        // 0x800395A0: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_800395C8;
    }
    goto skip_1;
    // 0x800395A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    skip_1:
    // 0x800395A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800395A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800395AC: jal         0x80039D60
    // 0x800395B0: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    func_80039D60_3A960(rdram, ctx);
        goto after_0;
    // 0x800395B0: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    after_0:
    // 0x800395B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800395B8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800395BC: b           L_800395E0
    // 0x800395C0: lhu         $a3, 0x26($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X26);
        goto L_800395E0;
    // 0x800395C0: lhu         $a3, 0x26($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X26);
    // 0x800395C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
L_800395C8:
    // 0x800395C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800395CC: jal         0x80039DE4
    // 0x800395D0: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    func_80039DE4_3A9E4(rdram, ctx);
        goto after_1;
    // 0x800395D0: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    after_1:
    // 0x800395D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800395D8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800395DC: lhu         $a3, 0x26($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X26);
L_800395E0:
    // 0x800395E0: slti        $at, $a0, 0xC0
    ctx->r1 = SIGNED(ctx->r4) < 0XC0 ? 1 : 0;
L_800395E4:
    // 0x800395E4: beq         $at, $zero, L_80039674
    if (ctx->r1 == 0) {
        // 0x800395E8: slti        $at, $a0, 0x6F
        ctx->r1 = SIGNED(ctx->r4) < 0X6F ? 1 : 0;
            goto L_80039674;
    }
    // 0x800395E8: slti        $at, $a0, 0x6F
    ctx->r1 = SIGNED(ctx->r4) < 0X6F ? 1 : 0;
    // 0x800395EC: beql        $at, $zero, L_800396D0
    if (ctx->r1 == 0) {
        // 0x800395F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800396D0;
    }
    goto skip_2;
    // 0x800395F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x800395F4: lbu         $v0, -0x3E($a1)
    ctx->r2 = MEM_BU(ctx->r5, -0X3E);
    // 0x800395F8: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x800395FC: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x80039600: beq         $v0, $zero, L_80039640
    if (ctx->r2 == 0) {
        // 0x80039604: nop
    
            goto L_80039640;
    }
    // 0x80039604: nop

    // 0x80039608: lbu         $t2, -0x1D54($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1D54);
    // 0x8003960C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80039614: beq         $t2, $v0, L_80039630
    if (ctx->r10 == ctx->r2) {
        // 0x80039618: andi        $a1, $a3, 0xFFFF
        ctx->r5 = ctx->r7 & 0XFFFF;
            goto L_80039630;
    }
    // 0x80039618: andi        $a1, $a3, 0xFFFF
    ctx->r5 = ctx->r7 & 0XFFFF;
    // 0x8003961C: sh          $a3, 0xA24($at)
    MEM_H(0XA24, ctx->r1) = ctx->r7;
    // 0x80039620: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039624: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80039628: b           L_800396CC
    // 0x8003962C: sb          $t3, 0xA26($at)
    MEM_B(0XA26, ctx->r1) = ctx->r11;
        goto L_800396CC;
    // 0x8003962C: sb          $t3, 0xA26($at)
    MEM_B(0XA26, ctx->r1) = ctx->r11;
L_80039630:
    // 0x80039630: jal         0x8003996C
    // 0x80039634: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8003996C_3A56C(rdram, ctx);
        goto after_2;
    // 0x80039634: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_2:
    // 0x80039638: b           L_800396D0
    // 0x8003963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800396D0;
    // 0x8003963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80039640:
    // 0x80039640: lbu         $t4, 0x9FC($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X9FC);
    // 0x80039644: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039648: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x8003964C: beq         $t4, $a0, L_80039664
    if (ctx->r12 == ctx->r4) {
        // 0x80039650: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_80039664;
    }
    // 0x80039650: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80039654: sh          $a3, 0xA24($at)
    MEM_H(0XA24, ctx->r1) = ctx->r7;
    // 0x80039658: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003965C: b           L_800396CC
    // 0x80039660: sb          $t5, 0xA26($at)
    MEM_B(0XA26, ctx->r1) = ctx->r13;
        goto L_800396CC;
    // 0x80039660: sb          $t5, 0xA26($at)
    MEM_B(0XA26, ctx->r1) = ctx->r13;
L_80039664:
    // 0x80039664: jal         0x800397B8
    // 0x80039668: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    func_800397B8_3A3B8(rdram, ctx);
        goto after_3;
    // 0x80039668: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    after_3:
    // 0x8003966C: b           L_800396D0
    // 0x80039670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800396D0;
    // 0x80039670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80039674:
    // 0x80039674: slti        $at, $a0, 0xC1
    ctx->r1 = SIGNED(ctx->r4) < 0XC1 ? 1 : 0;
    // 0x80039678: beq         $at, $zero, L_800396CC
    if (ctx->r1 == 0) {
        // 0x8003967C: lui         $v0, 0x801C
        ctx->r2 = S32(0X801C << 16);
            goto L_800396CC;
    }
    // 0x8003967C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039680: addiu       $a3, $a0, -0xC0
    ctx->r7 = ADD32(ctx->r4, -0XC0);
    // 0x80039684: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x80039688: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x8003968C: addiu       $t8, $t8, -0xD38
    ctx->r24 = ADD32(ctx->r24, -0XD38);
    // 0x80039690: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80039694: addiu       $v0, $v0, 0x9F0
    ctx->r2 = ADD32(ctx->r2, 0X9F0);
    // 0x80039698: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8003969C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x800396A0: lbu         $t0, 0x1($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X1);
    // 0x800396A4: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x800396A8: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x800396AC: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x800396B0: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x800396B4: sb          $t2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r10;
    // 0x800396B8: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
    // 0x800396BC: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x800396C0: sb          $t0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r8;
    // 0x800396C4: jal         0x80039A70
    // 0x800396C8: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    func_80039A70_3A670(rdram, ctx);
        goto after_4;
    // 0x800396C8: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    after_4:
L_800396CC:
    // 0x800396CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800396D0:
    // 0x800396D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800396D4: jr          $ra
    // 0x800396D8: nop

    TRACE_RETURN()
    return;
    // 0x800396D8: nop

;}
RECOMP_FUNC void func_80023698_24298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023698: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x8002369C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800236A0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800236A4: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x800236A8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x800236AC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x800236B0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x800236B4: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x800236B8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800236BC: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x800236C0: jal         0x80023A1C
    // 0x800236C4: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    func_80023A1C_2461C(rdram, ctx);
        goto after_0;
    // 0x800236C4: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    after_0:
    // 0x800236C8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x800236CC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x800236D0: jal         0x80040620
    // 0x800236D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x800236D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800236D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800236DC: lw          $a0, -0x717C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X717C);
    // 0x800236E0: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x800236E4: addiu       $t0, $sp, 0x4C
    ctx->r8 = ADD32(ctx->r29, 0X4C);
    // 0x800236E8: lw          $a1, 0x3F0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3F0);
    // 0x800236EC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800236F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800236F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800236F8: jal         0x8004525C
    // 0x800236FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_2;
    // 0x800236FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80023700: bne         $v0, $zero, L_80023754
    if (ctx->r2 != 0) {
        // 0x80023704: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80023754;
    }
    // 0x80023704: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80023708: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8002370C: jal         0x80023560
    // 0x80023710: sw          $v0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r2;
    func_80023560_24160(rdram, ctx);
        goto after_3;
    // 0x80023710: sw          $v0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r2;
    after_3:
    // 0x80023714: bne         $v0, $zero, L_80023754
    if (ctx->r2 != 0) {
        // 0x80023718: lw          $a3, 0x14C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X14C);
            goto L_80023754;
    }
    // 0x80023718: lw          $a3, 0x14C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14C);
    // 0x8002371C: addiu       $v1, $sp, 0x50
    ctx->r3 = ADD32(ctx->r29, 0X50);
    // 0x80023720: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80023724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023728: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8002372C: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
L_80023730:
    // 0x80023730: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x80023734: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80023738: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002373C: beq         $t1, $t2, L_8002374C
    if (ctx->r9 == ctx->r10) {
        // 0x80023740: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8002374C;
    }
    // 0x80023740: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80023744: b           L_80023754
    // 0x80023748: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_80023754;
    // 0x80023748: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8002374C:
    // 0x8002374C: bnel        $a1, $a2, L_80023730
    if (ctx->r5 != ctx->r6) {
        // 0x80023750: lbu         $t1, 0x0($v1)
        ctx->r9 = MEM_BU(ctx->r3, 0X0);
            goto L_80023730;
    }
    goto skip_0;
    // 0x80023750: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    skip_0:
L_80023754:
    // 0x80023754: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80023758: jal         0x80023ADC
    // 0x8002375C: sw          $a3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r7;
    func_80023ADC_246DC(rdram, ctx);
        goto after_4;
    // 0x8002375C: sw          $a3, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r7;
    after_4:
    // 0x80023760: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80023764: addiu       $v1, $v1, -0x717C
    ctx->r3 = ADD32(ctx->r3, -0X717C);
    // 0x80023768: lw          $a3, 0x14C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14C);
    // 0x8002376C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80023770: sw          $a3, 0x3FC($t3)
    MEM_W(0X3FC, ctx->r11) = ctx->r7;
    // 0x80023774: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80023778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002377C: lw          $v0, 0x3FC($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X3FC);
    // 0x80023780: jr          $ra
    // 0x80023784: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    TRACE_RETURN()
    return;
    // 0x80023784: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_8003731C_37F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003731C: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80037320: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80037324: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80037328: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8003732C: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80037330: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80037334: addiu       $t7, $t7, -0x2BF0
    ctx->r15 = ADD32(ctx->r15, -0X2BF0);
    // 0x80037338: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003733C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80037340: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80037344: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80037348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003734C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037354: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80037358: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8003735C: sh          $t8, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r24;
    // 0x80037360: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80037364: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x80037368: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8003736C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80037370: sh          $t0, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r8;
    // 0x80037374: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80037378: lhu         $t2, 0x4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X4);
    // 0x8003737C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037380: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80037384: sh          $t2, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r10;
    // 0x80037388: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8003738C: lhu         $t4, 0x6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6);
    // 0x80037390: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80037394: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80037398: sh          $t4, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r12;
    // 0x8003739C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800373A0: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x800373A4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800373A8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800373AC: sh          $t6, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r14;
    // 0x800373B0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800373B4: lhu         $t8, 0xA($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA);
    // 0x800373B8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800373BC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800373C0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x800373C4: jal         0x80003728
    // 0x800373C8: sh          $t8, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r24;
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x800373C8: sh          $t8, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r24;
    after_0:
    // 0x800373CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800373D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800373D4: jr          $ra
    // 0x800373D8: nop

    TRACE_RETURN()
    return;
    // 0x800373D8: nop

;}
RECOMP_FUNC void func_800354B4_360B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800354B8: jr          $ra
    // 0x800354BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800354BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80006F3C_7B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80006F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006F44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80006F48: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80006F4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80006F50: jal         0x800425C0
    // 0x80006F54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80006F54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80006F58: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80006F5C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80006F60: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80006F64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80006F68: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x80006F6C: lw          $t7, 0x298($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X298);
    // 0x80006F70: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80006F74: jal         0x800425C0
    // 0x80006F78: sw          $a1, 0x298($v1)
    MEM_W(0X298, ctx->r3) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80006F78: sw          $a1, 0x298($v1)
    MEM_W(0X298, ctx->r3) = ctx->r5;
    after_1:
    // 0x80006F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006F84: jr          $ra
    // 0x80006F88: nop

    TRACE_RETURN()
    return;
    // 0x80006F88: nop

;}
RECOMP_FUNC void func_8000EE50_FA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EE50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000EE54: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8000EE58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000EE5C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8000EE60: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000EE64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000EE68: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000EE6C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8000EE70: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x8000EE74: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x8000EE78: jal         0x8001D394
    // 0x8000EE7C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x8000EE7C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8000EE80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8000EE84: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8000EE88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000EE8C: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x8000EE90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8000EE94: jal         0x8001DB04
    // 0x8000EE98: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_1;
    // 0x8000EE98: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x8000EE9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000EEA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000EEA4: jr          $ra
    // 0x8000EEA8: nop

    TRACE_RETURN()
    return;
    // 0x8000EEA8: nop

;}
RECOMP_FUNC void func_8003F594_40194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F594: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003F598: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x8003F59C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8003F5A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F5A4: beq         $v0, $zero, L_8003F5BC
    if (ctx->r2 == 0) {
        // 0x8003F5A8: nop
    
            goto L_8003F5BC;
    }
    // 0x8003F5A8: nop

    // 0x8003F5AC: lbu         $t6, 0x60($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X60);
    // 0x8003F5B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F5B4: jr          $ra
    // 0x8003F5B8: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8003F5B8: sw          $t6, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r14;
L_8003F5BC:
    // 0x8003F5BC: sw          $t7, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r15;
    // 0x8003F5C0: jr          $ra
    // 0x8003F5C4: nop

    TRACE_RETURN()
    return;
    // 0x8003F5C4: nop

;}
RECOMP_FUNC void func_8003F62C_4022C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F62C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F634: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F638: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003F63C: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003F640: lbu         $a2, 0x774B($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X774B);
    // 0x8003F644: lbu         $a1, 0x7747($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7747);
    // 0x8003F648: jal         0x80038C30
    // 0x8003F64C: lhu         $a0, 0x7742($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7742);
    func_80038C30_39830(rdram, ctx);
        goto after_0;
    // 0x8003F64C: lhu         $a0, 0x7742($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7742);
    after_0:
    // 0x8003F650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F658: jr          $ra
    // 0x8003F65C: nop

    TRACE_RETURN()
    return;
    // 0x8003F65C: nop

;}
RECOMP_FUNC void func_8001351C_1411C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001351C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80013520: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80013524: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80013528: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001352C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x80013530: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80013534: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    // 0x80013538: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8001353C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80013540: bc1f        L_80013560
    if (!c1cs) {
        // 0x80013544: swc1        $f4, 0x70($a0)
        MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
            goto L_80013560;
    }
    // 0x80013544: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
    // 0x80013548: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001354C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80013550: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80013554: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80013558: b           L_8001356C
    // 0x8001355C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8001356C;
    // 0x8001355C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80013560:
    // 0x80013560: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80013564: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80013568: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_8001356C:
    // 0x8001356C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80013570: lwc1        $f2, 0x20($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80013574: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80013578: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8001357C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80013580: nop

    // 0x80013584: bc1f        L_80013598
    if (!c1cs) {
        // 0x80013588: swc1        $f4, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
            goto L_80013598;
    }
    // 0x80013588: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x8001358C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80013590: b           L_8001359C
    // 0x80013594: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8001359C;
    // 0x80013594: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80013598:
    // 0x80013598: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8001359C:
    // 0x8001359C: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800135A0: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800135A4: lwc1        $f12, 0x1C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x800135A8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800135AC: nop

    // 0x800135B0: bc1f        L_800135C4
    if (!c1cs) {
        // 0x800135B4: swc1        $f6, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
            goto L_800135C4;
    }
    // 0x800135B4: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x800135B8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800135BC: b           L_800135C8
    // 0x800135C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800135C8;
    // 0x800135C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800135C4:
    // 0x800135C4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800135C8:
    // 0x800135C8: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800135CC: jr          $ra
    // 0x800135D0: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x800135D0: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void sprintf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048984: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80048988: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004898C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048990: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80048994: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80048998: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8004899C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800489A0: addiu       $a0, $a0, -0x76A0
    ctx->r4 = ADD32(ctx->r4, -0X76A0);
    // 0x800489A4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x800489A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800489AC: jal         0x80040FD0
    // 0x800489B0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    _Printf(rdram, ctx);
        goto after_0;
    // 0x800489B0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x800489B4: bltz        $v0, L_800489C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x800489B8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800489C8;
    }
    // 0x800489B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800489BC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800489C0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x800489C4: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
L_800489C8:
    // 0x800489C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800489CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800489D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800489D4: jr          $ra
    // 0x800489D8: nop

    TRACE_RETURN()
    return;
    // 0x800489D8: nop

;}
RECOMP_FUNC void func_800012FC_1EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800012FC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80001300: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x80001304: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80001308: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x8000130C: addiu       $t8, $t8, -0x2B20
    ctx->r24 = ADD32(ctx->r24, -0X2B20);
    // 0x80001310: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80001314: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80001318: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8000131C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80001320: jr          $ra
    // 0x80001324: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x80001324: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_80008068_8C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000806C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80008070: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80008074: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80008078: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x8000807C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80008080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80008084: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80008088: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000808C: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80008090: beq         $t6, $at, L_800080AC
    if (ctx->r14 == ctx->r1) {
        // 0x80008094: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800080AC;
    }
    // 0x80008094: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80008098: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8000809C: beq         $t6, $at, L_8000813C
    if (ctx->r14 == ctx->r1) {
        // 0x800080A0: sll         $t7, $a3, 2
        ctx->r15 = S32(ctx->r7 << 2);
            goto L_8000813C;
    }
    // 0x800080A0: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x800080A4: b           L_80008104
    // 0x800080A8: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
        goto L_80008104;
    // 0x800080A8: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
L_800080AC:
    // 0x800080AC: lui         $a0, 0xC
    ctx->r4 = S32(0XC << 16);
    // 0x800080B0: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x800080B4: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x800080B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800080BC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x800080C0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800080C4: addiu       $t2, $t2, -0x3340
    ctx->r10 = ADD32(ctx->r10, -0X3340);
    // 0x800080C8: sll         $t1, $a2, 5
    ctx->r9 = S32(ctx->r6 << 5);
    // 0x800080CC: sw          $zero, 0x2BF8($at)
    MEM_W(0X2BF8, ctx->r1) = 0;
    // 0x800080D0: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x800080D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800080D8:
    // 0x800080D8: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x800080DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800080E0: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x800080E4: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x800080E8: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x800080EC: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x800080F0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800080F4: bne         $at, $zero, L_800080D8
    if (ctx->r1 != 0) {
        // 0x800080F8: sh          $zero, 0x5D18($t5)
        MEM_H(0X5D18, ctx->r13) = 0;
            goto L_800080D8;
    }
    // 0x800080F8: sh          $zero, 0x5D18($t5)
    MEM_H(0X5D18, ctx->r13) = 0;
    // 0x800080FC: b           L_80008140
    // 0x80008100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80008140;
    // 0x80008100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80008104:
    // 0x80008104: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80008108: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x8000810C: lw          $t8, -0x4950($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4950);
    // 0x80008110: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x80008114: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80008118: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000811C: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80008120: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x80008124: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80008128: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8000812C: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80008130: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    // 0x80008134: jal         0x80007DA8
    // 0x80008138: addu        $a0, $t4, $t9
    ctx->r4 = ADD32(ctx->r12, ctx->r25);
    func_80007DA8_89A8(rdram, ctx);
        goto after_0;
    // 0x80008138: addu        $a0, $t4, $t9
    ctx->r4 = ADD32(ctx->r12, ctx->r25);
    after_0:
L_8000813C:
    // 0x8000813C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80008140:
    // 0x80008140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80008144: jr          $ra
    // 0x80008148: nop

    TRACE_RETURN()
    return;
    // 0x80008148: nop

;}
RECOMP_FUNC void func_8000EABC_F6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000EABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000EAC0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000EAC4: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000EAC8: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8000EACC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000EAD0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000EAD4: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000EAD8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000EADC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000EAE0: sub.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8000EAE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EAE8: jal         0x800040A8
    // 0x8000EAEC: sub.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f8.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8000EAEC: sub.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f8.fl;
    after_0:
    // 0x8000EAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000EAF4: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x8000EAF8: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x8000EAFC: andi        $v0, $t7, 0x3FF
    ctx->r2 = ctx->r15 & 0X3FF;
    // 0x8000EB00: jr          $ra
    // 0x8000EB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000EB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000DFA0_EBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DFA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000DFA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000DFA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000DFAC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8000DFB0: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8000DFB4: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x8000DFB8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DFBC: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x8000DFC0: sw          $t8, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r24;
    // 0x8000DFC4: sw          $t7, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r15;
    // 0x8000DFC8: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8000DFCC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8000DFD0: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x8000DFD4: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8000DFD8: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x8000DFDC: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x8000DFE0: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8000DFE4: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8000DFE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000DFEC: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8000DFF0: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8000DFF4: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x8000DFF8: lui         $t0, 0xB800
    ctx->r8 = S32(0XB800 << 16);
    // 0x8000DFFC: sw          $t1, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r9;
    // 0x8000E000: sw          $t0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r8;
    // 0x8000E004: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x8000E008: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8000E00C: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    // 0x8000E010: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000E014: jal         0x80040620
    // 0x8000E018: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8000E018: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_0:
    // 0x8000E01C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E020: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8000E024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000E028: jr          $ra
    // 0x8000E02C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8000E02C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000DDC0_E9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000DDC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000DDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DDC8: jal         0x8000DD58
    // 0x8000DDCC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x8000DDCC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x8000DDD0: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x8000DDD4: bne         $at, $zero, L_8000DDE4
    if (ctx->r1 != 0) {
        // 0x8000DDD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000DDE4;
    }
    // 0x8000DDD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DDDC: b           L_8000DDE8
    // 0x8000DDE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000DDE8;
    // 0x8000DDE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000DDE4:
    // 0x8000DDE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000DDE8:
    // 0x8000DDE8: jr          $ra
    // 0x8000DDEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8000DDEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800248BC_254BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800248BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800248C0: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x800248C4: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x800248C8: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x800248CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800248D0: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x800248D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800248D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800248DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800248E0: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x800248E4: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800248E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800248EC: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x800248F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800248F4: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800248F8: andi        $t8, $a1, 0x400
    ctx->r24 = ctx->r5 & 0X400;
    // 0x800248FC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80024900: div.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80024904: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80024908: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002490C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80024910: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80024914: addu        $a2, $v0, $t9
    ctx->r6 = ADD32(ctx->r2, ctx->r25);
    // 0x80024918: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8002491C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80024920: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80024924: mul.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80024928: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8002492C: div.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80024930: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80024934: beq         $t8, $zero, L_80024944
    if (ctx->r24 == 0) {
        // 0x80024938: nop
    
            goto L_80024944;
    }
    // 0x80024938: nop

    // 0x8002493C: b           L_80024944
    // 0x80024940: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_80024944;
    // 0x80024940: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80024944:
    // 0x80024944: blezl       $a0, L_80024BA0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80024948: lw          $v0, 0x10($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X10);
            goto L_80024BA0;
    }
    goto skip_0;
    // 0x80024948: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    skip_0:
    // 0x8002494C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x80024950: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80024954: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x80024958: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8002495C: lw          $a3, 0x40($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X40);
L_80024960:
    // 0x80024960: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80024964: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80024968: bne         $at, $zero, L_80024B70
    if (ctx->r1 != 0) {
        // 0x8002496C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80024B70;
    }
    // 0x8002496C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80024970: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x80024974: addiu       $t3, $a3, 0x1
    ctx->r11 = ADD32(ctx->r7, 0X1);
    // 0x80024978: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
L_8002497C:
    // 0x8002497C: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x80024980: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x80024984: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80024988: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002498C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80024990: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x80024994: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80024998: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002499C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800249A0: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x800249A4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800249A8: div.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800249AC: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x800249B0: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800249B4: div.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800249B8: bne         $at, $zero, L_80024B54
    if (ctx->r1 != 0) {
        // 0x800249BC: add.s       $f14, $f8, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
            goto L_80024B54;
    }
    // 0x800249BC: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800249C0: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
L_800249C4:
    // 0x800249C4: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x800249C8: addiu       $t9, $a1, -0x1
    ctx->r25 = ADD32(ctx->r5, -0X1);
    // 0x800249CC: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800249D0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800249D4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800249D8: andi        $t1, $a1, 0x1
    ctx->r9 = ctx->r5 & 0X1;
    // 0x800249DC: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x800249E0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800249E4: sub.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x800249E8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800249EC: div.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800249F0: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x800249F4: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800249F8: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800249FC: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80024A00: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80024A04: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80024A08: beq         $t1, $zero, L_80024A20
    if (ctx->r9 == 0) {
        // 0x80024A0C: sh          $t7, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r15;
            goto L_80024A20;
    }
    // 0x80024A0C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80024A10: trunc.w.s   $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80024A14: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80024A18: b           L_80024A88
    // 0x80024A1C: sh          $t9, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r25;
        goto L_80024A88;
    // 0x80024A1C: sh          $t9, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r25;
L_80024A20:
    // 0x80024A20: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x80024A24: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x80024A28: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80024A2C: div         $zero, $t6, $t8
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r24)));
    // 0x80024A30: bne         $t8, $zero, L_80024A3C
    if (ctx->r24 != 0) {
        // 0x80024A34: nop
    
            goto L_80024A3C;
    }
    // 0x80024A34: nop

    // 0x80024A38: break       7
    do_break(2147633720);
L_80024A3C:
    // 0x80024A3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80024A40: bne         $t8, $at, L_80024A54
    if (ctx->r24 != ctx->r1) {
        // 0x80024A44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80024A54;
    }
    // 0x80024A44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80024A48: bne         $t6, $at, L_80024A54
    if (ctx->r14 != ctx->r1) {
        // 0x80024A4C: nop
    
            goto L_80024A54;
    }
    // 0x80024A4C: nop

    // 0x80024A50: break       6
    do_break(2147633744);
L_80024A54:
    // 0x80024A54: mflo        $t9
    ctx->r25 = lo;
    // 0x80024A58: bgez        $t9, L_80024A68
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80024A5C: sra         $t7, $t9, 1
        ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
            goto L_80024A68;
    }
    // 0x80024A5C: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80024A60: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x80024A64: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_80024A68:
    // 0x80024A68: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80024A6C: nop

    // 0x80024A70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80024A74: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80024A78: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80024A7C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80024A80: nop

    // 0x80024A84: sh          $t8, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r24;
L_80024A88:
    // 0x80024A88: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80024A8C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80024A90: andi        $t7, $t9, 0x2
    ctx->r15 = ctx->r25 & 0X2;
    // 0x80024A94: beql        $t7, $zero, L_80024B1C
    if (ctx->r15 == 0) {
        // 0x80024A98: sh          $zero, 0x8($a0)
        MEM_H(0X8, ctx->r4) = 0;
            goto L_80024B1C;
    }
    goto skip_1;
    // 0x80024A98: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    skip_1:
    // 0x80024A9C: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80024AA0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80024AA4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80024AA8: nop

    // 0x80024AAC: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x80024AB0: beq         $t1, $zero, L_80024AD4
    if (ctx->r9 == 0) {
        // 0x80024AB4: sh          $t9, 0x8($a0)
        MEM_H(0X8, ctx->r4) = ctx->r25;
            goto L_80024AD4;
    }
    // 0x80024AB4: sh          $t9, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r25;
    // 0x80024AB8: mul.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80024ABC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80024AC0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80024AC4: nop

    // 0x80024AC8: sll         $t8, $t6, 6
    ctx->r24 = S32(ctx->r14 << 6);
    // 0x80024ACC: b           L_80024B20
    // 0x80024AD0: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
        goto L_80024B20;
    // 0x80024AD0: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
L_80024AD4:
    // 0x80024AD4: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x80024AD8: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80024ADC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80024AE0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80024AE4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80024AE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80024AEC: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x80024AF0: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80024AF4: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80024AF8: add.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x80024AFC: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80024B00: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80024B04: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80024B08: nop

    // 0x80024B0C: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x80024B10: b           L_80024B20
    // 0x80024B14: sh          $t9, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r25;
        goto L_80024B20;
    // 0x80024B14: sh          $t9, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r25;
    // 0x80024B18: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
L_80024B1C:
    // 0x80024B1C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_80024B20:
    // 0x80024B20: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80024B24: sb          $t4, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r12;
    // 0x80024B28: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80024B2C: sb          $t5, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r13;
    // 0x80024B30: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x80024B34: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80024B38: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80024B3C: addiu       $t3, $a3, 0x1
    ctx->r11 = ADD32(ctx->r7, 0X1);
    // 0x80024B40: slt         $at, $a1, $t3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80024B44: bnel        $at, $zero, L_800249C4
    if (ctx->r1 != 0) {
        // 0x80024B48: mtc1        $a3, $f10
        ctx->f10.u32l = ctx->r7;
            goto L_800249C4;
    }
    goto skip_2;
    // 0x80024B48: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    skip_2:
    // 0x80024B4C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x80024B50: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
L_80024B54:
    // 0x80024B54: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80024B58: bnel        $at, $zero, L_8002497C
    if (ctx->r1 != 0) {
        // 0x80024B5C: mtc1        $t1, $f10
        ctx->f10.u32l = ctx->r9;
            goto L_8002497C;
    }
    goto skip_3;
    // 0x80024B5C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    skip_3:
    // 0x80024B60: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80024B64: lw          $a3, 0x40($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X40);
    // 0x80024B68: andi        $t7, $a1, 0x400
    ctx->r15 = ctx->r5 & 0X400;
    // 0x80024B6C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_80024B70:
    // 0x80024B70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80024B74: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80024B78: beq         $a1, $zero, L_80024B88
    if (ctx->r5 == 0) {
        // 0x80024B7C: subu        $t0, $a0, $a3
        ctx->r8 = SUB32(ctx->r4, ctx->r7);
            goto L_80024B88;
    }
    // 0x80024B7C: subu        $t0, $a0, $a3
    ctx->r8 = SUB32(ctx->r4, ctx->r7);
    // 0x80024B80: b           L_80024B8C
    // 0x80024B84: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_80024B8C;
    // 0x80024B84: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80024B88:
    // 0x80024B88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80024B8C:
    // 0x80024B8C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80024B90: bnel        $at, $zero, L_80024960
    if (ctx->r1 != 0) {
        // 0x80024B94: lw          $a3, 0x40($a2)
        ctx->r7 = MEM_W(ctx->r6, 0X40);
            goto L_80024960;
    }
    goto skip_4;
    // 0x80024B94: lw          $a3, 0x40($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X40);
    skip_4:
    // 0x80024B98: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80024B9C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
L_80024BA0:
    // 0x80024BA0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x80024BA4: jr          $ra
    // 0x80024BA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80024BA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void alAuxBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E3B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004E3BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004E3C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004E3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004E3C8: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8004E3CC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004E3D0: addiu       $a1, $a1, 0x790
    ctx->r5 = ADD32(ctx->r5, 0X790);
    // 0x8004E3D4: addiu       $a2, $a2, 0x760
    ctx->r6 = ADD32(ctx->r6, 0X760);
    // 0x8004E3D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004E3DC: jal         0x800518C0
    // 0x8004E3E0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8004E3E0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8004E3E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004E3E8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8004E3EC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8004E3F0: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x8004E3F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8004E3F8: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x8004E3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004E400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004E404: jr          $ra
    // 0x8004E408: nop

    TRACE_RETURN()
    return;
    // 0x8004E408: nop

;}
RECOMP_FUNC void func_80002518_3118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002518: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x8000251C: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80002520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002528: addiu       $t6, $a0, 0x7FFF
    ctx->r14 = ADD32(ctx->r4, 0X7FFF);
    // 0x8000252C: lbu         $t6, 0x2DD7($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2DD7);
    // 0x80002530: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80002534: beq         $at, $zero, L_80002708
    if (ctx->r1 == 0) {
        // 0x80002538: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80002708;
    }
    // 0x80002538: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000253C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80002540: addu        $at, $at, $t6
    gpr jr_addend_80002548 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80002544: lw          $t6, -0x57B8($at)
    ctx->r14 = ADD32(ctx->r1, -0X57B8);
    // 0x80002548: jr          $t6
    // 0x8000254C: nop

    switch (jr_addend_80002548 >> 2) {
        case 0: goto L_80002550; break;
        case 1: goto L_800025B8; break;
        case 2: goto L_80002610; break;
        case 3: goto L_80002660; break;
        case 4: goto L_800026A8; break;
        case 5: goto L_800026B8; break;
        default: switch_error(__func__, 0x80002548, 0x8007A848);
    }
    // 0x8000254C: nop

L_80002550:
    // 0x80002550: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80002554: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80002558: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000255C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80002560: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80002564: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80002568: sb          $t7, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r15;
    // 0x8000256C: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    // 0x80002570: jal         0x80001C00
    // 0x80002574: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x80002574: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x80002578: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8000257C: beq         $v1, $zero, L_80002594
    if (ctx->r3 == 0) {
        // 0x80002580: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_80002594;
    }
    // 0x80002580: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
L_80002584:
    // 0x80002584: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80002588: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x8000258C: bne         $t9, $zero, L_80002584
    if (ctx->r25 != 0) {
        // 0x80002590: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_80002584;
    }
    // 0x80002590: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_80002594:
    // 0x80002594: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80002598: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x8000259C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800025A0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x800025A4: lbu         $t0, -0x522A($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X522A);
    // 0x800025A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800025AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800025B0: b           L_80002708
    // 0x800025B4: sb          $t1, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r9;
        goto L_80002708;
    // 0x800025B4: sb          $t1, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r9;
L_800025B8:
    // 0x800025B8: jal         0x8000383C
    // 0x800025BC: nop

    func_8000383C_443C(rdram, ctx);
        goto after_1;
    // 0x800025BC: nop

    after_1:
    // 0x800025C0: jal         0x801CB6C0
    // 0x800025C4: nop

    func_801CB6C0_69CE30(rdram, ctx);
        goto after_2;
    // 0x800025C4: nop

    after_2:
    // 0x800025C8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800025CC: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x800025D0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800025D4: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800025D8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800025DC: sb          $zero, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = 0;
    // 0x800025E0: jal         0x800369B4
    // 0x800025E4: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_800369B4_375B4(rdram, ctx);
        goto after_3;
    // 0x800025E4: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_3:
    // 0x800025E8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800025EC: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x800025F0: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x800025F4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800025F8: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x800025FC: lbu         $t3, -0x522A($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X522A);
    // 0x80002600: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80002604: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80002608: b           L_80002708
    // 0x8000260C: sb          $t4, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r12;
        goto L_80002708;
    // 0x8000260C: sb          $t4, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r12;
L_80002610:
    // 0x80002610: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80002614: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x80002618: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000261C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80002620: jal         0x80034734
    // 0x80002624: sb          $zero, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = 0;
    func_80034734_35334(rdram, ctx);
        goto after_4;
    // 0x80002624: sb          $zero, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = 0;
    after_4:
    // 0x80002628: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8000262C: jal         0x80036840
    // 0x80002630: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_80036840_37440(rdram, ctx);
        goto after_5;
    // 0x80002630: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_5:
    // 0x80002634: bne         $v0, $zero, L_80002708
    if (ctx->r2 != 0) {
        // 0x80002638: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_80002708;
    }
    // 0x80002638: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000263C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80002640: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80002644: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002648: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8000264C: lbu         $t6, -0x522A($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X522A);
    // 0x80002650: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80002654: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80002658: b           L_80002708
    // 0x8000265C: sb          $t7, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r15;
        goto L_80002708;
    // 0x8000265C: sb          $t7, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r15;
L_80002660:
    // 0x80002660: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80002664: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80002668: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000266C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80002670: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80002674: lhu         $t8, 0x3094($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X3094);
    // 0x80002678: lhu         $t9, 0x307C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X307C);
    // 0x8000267C: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x80002680: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80002684: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80002688: andi        $t1, $t0, 0xD000
    ctx->r9 = ctx->r8 & 0XD000;
    // 0x8000268C: beq         $t1, $zero, L_80002698
    if (ctx->r9 == 0) {
        // 0x80002690: nop
    
            goto L_80002698;
    }
    // 0x80002690: nop

    // 0x80002694: sb          $t2, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = ctx->r10;
L_80002698:
    // 0x80002698: jal         0x800038E4
    // 0x8000269C: nop

    func_800038E4_44E4(rdram, ctx);
        goto after_6;
    // 0x8000269C: nop

    after_6:
    // 0x800026A0: b           L_8000270C
    // 0x800026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000270C;
    // 0x800026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800026A8:
    // 0x800026A8: jal         0x8000394C
    // 0x800026AC: nop

    func_8000394C_454C(rdram, ctx);
        goto after_7;
    // 0x800026AC: nop

    after_7:
    // 0x800026B0: b           L_8000270C
    // 0x800026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000270C;
    // 0x800026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800026B8:
    // 0x800026B8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800026BC: lw          $t3, 0x48D8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X48D8);
    // 0x800026C0: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x800026C4: bnel        $t3, $zero, L_8000270C
    if (ctx->r11 != 0) {
        // 0x800026C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000270C;
    }
    goto skip_0;
    // 0x800026C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800026CC: jal         0x8000383C
    // 0x800026D0: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    func_8000383C_443C(rdram, ctx);
        goto after_8;
    // 0x800026D0: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    after_8:
    // 0x800026D4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800026D8: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x800026DC: addiu       $t4, $a0, 0x7FFF
    ctx->r12 = ADD32(ctx->r4, 0X7FFF);
    // 0x800026E0: lbu         $t4, 0x2DD6($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X2DD6);
    // 0x800026E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800026E8: bne         $t4, $at, L_80002700
    if (ctx->r12 != ctx->r1) {
        // 0x800026EC: nop
    
            goto L_80002700;
    }
    // 0x800026EC: nop

    // 0x800026F0: jal         0x80003728
    // 0x800026F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80003728_4328(rdram, ctx);
        goto after_9;
    // 0x800026F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_9:
    // 0x800026F8: b           L_8000270C
    // 0x800026FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000270C;
    // 0x800026FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002700:
    // 0x80002700: jal         0x80003728
    // 0x80002704: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80003728_4328(rdram, ctx);
        goto after_10;
    // 0x80002704: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_10:
L_80002708:
    // 0x80002708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000270C:
    // 0x8000270C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002710: jr          $ra
    // 0x80002714: nop

    TRACE_RETURN()
    return;
    // 0x80002714: nop

;}
RECOMP_FUNC void func_80007B5C_875C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007B60: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80007B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007B68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80007B6C: jal         0x800079C0
    // 0x80007B70: lw          $a1, 0x38($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X38);
    func_800079C0_85C0(rdram, ctx);
        goto after_0;
    // 0x80007B70: lw          $a1, 0x38($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X38);
    after_0:
    // 0x80007B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007B7C: jr          $ra
    // 0x80007B80: nop

    TRACE_RETURN()
    return;
    // 0x80007B80: nop

;}
