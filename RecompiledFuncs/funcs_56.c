#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E2874_60DC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2874: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E2878: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E287C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E2880: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2884: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E2888: bne         $a1, $zero, L_801E28A0
    if (ctx->r5 != 0) {
        // 0x801E288C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_801E28A0;
    }
    // 0x801E288C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E2890: jal         0x80034ED4
    // 0x801E2894: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2894: nop

    after_0:
    // 0x801E2898: b           L_801E2924
    // 0x801E289C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E2924;
    // 0x801E289C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E28A0:
    // 0x801E28A0: lw          $t6, 0xA0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA0);
    // 0x801E28A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E28A8: jal         0x801D614C
    // 0x801E28AC: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801E28AC: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    after_1:
    // 0x801E28B0: lbu         $t7, 0x90($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X90);
    // 0x801E28B4: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    // 0x801E28B8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801E28BC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801E28C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E28C4: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x801E28C8: subu        $v0, $t9, $t8
    ctx->r2 = SUB32(ctx->r25, ctx->r24);
    // 0x801E28CC: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x801E28D0: lw          $a2, 0x90($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X90);
    // 0x801E28D4: lw          $a3, 0x94($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X94);
    // 0x801E28D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801E28DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E28E0: jal         0x8000DF10
    // 0x801E28E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801E28E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x801E28E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E28EC: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801E28F0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E28F4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801E28F8: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x801E28FC: lbu         $a3, 0xA7($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XA7);
    // 0x801E2900: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x801E2904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E2908: jal         0x801D3324
    // 0x801E290C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D3324_5FE704(rdram, ctx);
        goto after_3;
    // 0x801E290C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801E2910: bnel        $v0, $zero, L_801E2924
    if (ctx->r2 != 0) {
        // 0x801E2914: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E2924;
    }
    goto skip_0;
    // 0x801E2914: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E2918: jal         0x80034ED4
    // 0x801E291C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801E291C: nop

    after_4:
    // 0x801E2920: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2924:
    // 0x801E2924: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2928: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E292C: jr          $ra
    // 0x801E2930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E2930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801F9624_624A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9624: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F9628: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x801F962C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F9630: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F9634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F963C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F9640: swc1        $f4, 0x188($v0)
    MEM_W(0X188, ctx->r2) = ctx->f4.u32l;
    // 0x801F9644: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801F9648: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F964C: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801F9650: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801F9654: bne         $t7, $at, L_801F9668
    if (ctx->r15 != ctx->r1) {
        // 0x801F9658: sw          $t7, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r15;
            goto L_801F9668;
    }
    // 0x801F9658: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x801F965C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9660: jal         0x8003521C
    // 0x801F9664: addiu       $a0, $a0, -0x6988
    ctx->r4 = ADD32(ctx->r4, -0X6988);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F9664: addiu       $a0, $a0, -0x6988
    ctx->r4 = ADD32(ctx->r4, -0X6988);
    after_0:
L_801F9668:
    // 0x801F9668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F966C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9670: jr          $ra
    // 0x801F9674: nop

    TRACE_RETURN()
    return;
    // 0x801F9674: nop

;}
RECOMP_FUNC void func_801EDC3C_61901C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDC3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EDC40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EDC44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EDC48: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801EDC4C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801EDC50: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801EDC54: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801EDC58: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801EDC5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EDC60: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801EDC64: bgtz        $t7, L_801EDCF8
    if (SIGNED(ctx->r15) > 0) {
        // 0x801EDC68: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_801EDCF8;
    }
    // 0x801EDC68: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x801EDC6C: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x801EDC70: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x801EDC74: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801EDC78: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801EDC7C: slti        $at, $t0, 0x156
    ctx->r1 = SIGNED(ctx->r8) < 0X156 ? 1 : 0;
    // 0x801EDC80: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x801EDC84: beq         $at, $zero, L_801EDC98
    if (ctx->r1 == 0) {
        // 0x801EDC88: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_801EDC98;
    }
    // 0x801EDC88: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801EDC8C: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801EDC90: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801EDC94: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
L_801EDC98:
    // 0x801EDC98: lwc1        $f12, 0x94($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801EDC9C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801EDCA0: jal         0x8000E630
    // 0x801EDCA4: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801EDCA4: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_0:
    // 0x801EDCA8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801EDCAC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801EDCB0: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801EDCB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EDCB8: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801EDCBC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801EDCC0: addiu       $at, $zero, 0x155
    ctx->r1 = ADD32(0, 0X155);
    // 0x801EDCC4: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x801EDCC8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EDCCC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EDCD0: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801EDCD4: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x801EDCD8: bne         $t1, $at, L_801EDCF8
    if (ctx->r9 != ctx->r1) {
        // 0x801EDCDC: nop
    
            goto L_801EDCF8;
    }
    // 0x801EDCDC: nop

    // 0x801EDCE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EDCE4: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801EDCE8: addiu       $a0, $a0, -0x22EC
    ctx->r4 = ADD32(ctx->r4, -0X22EC);
    // 0x801EDCEC: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x801EDCF0: jal         0x8003521C
    // 0x801EDCF4: swc1        $f0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f0.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801EDCF4: swc1        $f0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f0.u32l;
    after_1:
L_801EDCF8:
    // 0x801EDCF8: jal         0x801EE658
    // 0x801EDCFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EE658_619A38(rdram, ctx);
        goto after_2;
    // 0x801EDCFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801EDD00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EDD04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EDD08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EDD0C: jr          $ra
    // 0x801EDD10: nop

    TRACE_RETURN()
    return;
    // 0x801EDD10: nop

;}
RECOMP_FUNC void func_801E3030_60E410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3030: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801E3034: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E3038: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E303C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801E3040: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801E3044: addiu       $t6, $t6, -0x4EC0
    ctx->r14 = ADD32(ctx->r14, -0X4EC0);
    // 0x801E3048: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801E304C: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x801E3050: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E3054: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801E3058: lw          $v1, -0x1100($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1100);
    // 0x801E305C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E3060: bne         $v1, $zero, L_801E3078
    if (ctx->r3 != 0) {
        // 0x801E3064: addiu       $v0, $v1, 0x4
        ctx->r2 = ADD32(ctx->r3, 0X4);
            goto L_801E3078;
    }
    // 0x801E3064: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x801E3068: jal         0x80034ED4
    // 0x801E306C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E306C: nop

    after_0:
    // 0x801E3070: b           L_801E3190
    // 0x801E3074: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801E3190;
    // 0x801E3074: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E3078:
    // 0x801E3078: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E307C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801E3080: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E3084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E3088: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x801E308C: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x801E3090: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x801E3094: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E3098: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x801E309C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E30A0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801E30A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E30A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E30AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E30B0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801E30B4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801E30B8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801E30BC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801E30C0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801E30C4: jal         0x8000DBF0
    // 0x801E30C8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801E30C8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801E30CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E30D0: lwc1        $f2, -0x2340($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2340);
    // 0x801E30D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E30D8: sb          $t3, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r11;
    // 0x801E30DC: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801E30E0: lw          $t4, -0x1100($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1100);
    // 0x801E30E4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801E30E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E30EC: lbu         $v1, 0xC($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0XC);
    // 0x801E30F0: addiu       $t8, $t8, -0x4F60
    ctx->r24 = ADD32(ctx->r24, -0X4F60);
    // 0x801E30F4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E30F8: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x801E30FC: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x801E3100: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x801E3104: addu        $t0, $t5, $t8
    ctx->r8 = ADD32(ctx->r13, ctx->r24);
    // 0x801E3108: lhu         $t7, 0x4($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X4);
    // 0x801E310C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E3110: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x801E3114: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x801E3118: addiu       $a2, $a2, -0x4F18
    ctx->r6 = ADD32(ctx->r6, -0X4F18);
    // 0x801E311C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E3120: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E3124: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E3128: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E312C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801E3130: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801E3134: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801E3138: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801E313C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801E3140: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801E3144: jal         0x8000DBF0
    // 0x801E3148: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x801E3148: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    after_2:
    // 0x801E314C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E3150: addiu       $v1, $v1, -0x1100
    ctx->r3 = ADD32(ctx->r3, -0X1100);
    // 0x801E3154: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801E3158: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801E315C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801E3160: sb          $zero, 0xD($t6)
    MEM_B(0XD, ctx->r14) = 0;
    // 0x801E3164: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801E3168: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E316C: addiu       $a0, $a0, 0x319C
    ctx->r4 = ADD32(ctx->r4, 0X319C);
    // 0x801E3170: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    // 0x801E3174: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x801E3178: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801E317C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x801E3180: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801E3184: jal         0x8003521C
    // 0x801E3188: swc1        $f4, 0x90($t2)
    MEM_W(0X90, ctx->r10) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E3188: swc1        $f4, 0x90($t2)
    MEM_W(0X90, ctx->r10) = ctx->f4.u32l;
    after_3:
    // 0x801E318C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E3190:
    // 0x801E3190: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801E3194: jr          $ra
    // 0x801E3198: nop

    TRACE_RETURN()
    return;
    // 0x801E3198: nop

;}
RECOMP_FUNC void func_801F0138_61B518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0138: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F013C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801F0140: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F0144: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F0148: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F014C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F0150: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801F0154: jal         0x801D3018
    // 0x801F0158: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F0158: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F015C: jal         0x801F76D0
    // 0x801F0160: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F0160: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x801F0164: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F0168: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x801F016C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F0170: lui         $a2, 0xC3FA
    ctx->r6 = S32(0XC3FA << 16);
    // 0x801F0174: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x801F0178: jal         0x801D46B8
    // 0x801F017C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_2;
    // 0x801F017C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_2:
    // 0x801F0180: jal         0x801D619C
    // 0x801F0184: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D619C_60157C(rdram, ctx);
        goto after_3;
    // 0x801F0184: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x801F0188: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F018C: lui         $a2, 0xC3FA
    ctx->r6 = S32(0XC3FA << 16);
    // 0x801F0190: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x801F0194: jal         0x8000EB50
    // 0x801F0198: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000EB50_F750(rdram, ctx);
        goto after_4;
    // 0x801F0198: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_4:
    // 0x801F019C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801F01A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F01A4: jal         0x801D3F00
    // 0x801F01A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_5;
    // 0x801F01A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x801F01AC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801F01B0: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x801F01B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F01B8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F01BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F01C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801F01C4: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801F01C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F01CC: bc1fl       L_801F01F4
    if (!c1cs) {
        // 0x801F01D0: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801F01F4;
    }
    goto skip_0;
    // 0x801F01D0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x801F01D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F01D8: nop

    // 0x801F01DC: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801F01E0: nop

    // 0x801F01E4: bc1fl       L_801F01F4
    if (!c1cs) {
        // 0x801F01E8: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801F01F4;
    }
    goto skip_1;
    // 0x801F01E8: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x801F01EC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x801F01F0: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_801F01F4:
    // 0x801F01F4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F01F8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801F01FC: nop

    // 0x801F0200: bc1f        L_801F022C
    if (!c1cs) {
        // 0x801F0204: nop
    
            goto L_801F022C;
    }
    // 0x801F0204: nop

    // 0x801F0208: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F020C: nop

    // 0x801F0210: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x801F0214: nop

    // 0x801F0218: bc1f        L_801F022C
    if (!c1cs) {
        // 0x801F021C: nop
    
            goto L_801F022C;
    }
    // 0x801F021C: nop

    // 0x801F0220: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801F0224: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801F0228: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_801F022C:
    // 0x801F022C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F0230: lwc1        $f8, -0x1ACC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1ACC);
    // 0x801F0234: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F0238: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F023C: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801F0240: nop

    // 0x801F0244: bc1fl       L_801F0270
    if (!c1cs) {
        // 0x801F0248: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801F0270;
    }
    goto skip_2;
    // 0x801F0248: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_2:
    // 0x801F024C: lwc1        $f10, -0x1AC8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1AC8);
    // 0x801F0250: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801F0254: nop

    // 0x801F0258: bc1fl       L_801F0270
    if (!c1cs) {
        // 0x801F025C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801F0270;
    }
    goto skip_3;
    // 0x801F025C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_3:
    // 0x801F0260: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801F0264: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x801F0268: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x801F026C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_801F0270:
    // 0x801F0270: bnel        $s0, $at, L_801F0290
    if (ctx->r16 != ctx->r1) {
        // 0x801F0274: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F0290;
    }
    goto skip_4;
    // 0x801F0274: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x801F0278: jal         0x801D31CC
    // 0x801F027C: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_6;
    // 0x801F027C: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    after_6:
    // 0x801F0280: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0284: jal         0x8003521C
    // 0x801F0288: addiu       $a0, $a0, 0x2A0
    ctx->r4 = ADD32(ctx->r4, 0X2A0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F0288: addiu       $a0, $a0, 0x2A0
    ctx->r4 = ADD32(ctx->r4, 0X2A0);
    after_7:
    // 0x801F028C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F0290:
    // 0x801F0290: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F0294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F0298: jr          $ra
    // 0x801F029C: nop

    TRACE_RETURN()
    return;
    // 0x801F029C: nop

;}
RECOMP_FUNC void func_801EBBA8_616F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBBA8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EBBAC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EBBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EBBB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EBBB8: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EBBBC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801EBBC0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801EBBC4: lw          $t7, 0xD8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD8);
    // 0x801EBBC8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801EBBCC: beql        $t7, $at, L_801EBBF0
    if (ctx->r15 == ctx->r1) {
        // 0x801EBBD0: lwc1        $f2, 0x90($a3)
        ctx->f2.u32l = MEM_W(ctx->r7, 0X90);
            goto L_801EBBF0;
    }
    goto skip_0;
    // 0x801EBBD0: lwc1        $f2, 0x90($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X90);
    skip_0:
    // 0x801EBBD4: jal         0x80038BC8
    // 0x801EBBD8: ori         $a0, $zero, 0x8122
    ctx->r4 = 0 | 0X8122;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EBBD8: ori         $a0, $zero, 0x8122
    ctx->r4 = 0 | 0X8122;
    after_0:
    // 0x801EBBDC: jal         0x80034ED4
    // 0x801EBBE0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801EBBE0: nop

    after_1:
    // 0x801EBBE4: b           L_801EBCA8
    // 0x801EBBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801EBCA8;
    // 0x801EBBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBBEC: lwc1        $f2, 0x90($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X90);
L_801EBBF0:
    // 0x801EBBF0: lwc1        $f12, 0x1C($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x801EBBF4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EBBF8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801EBBFC: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x801EBC00: nop

    // 0x801EBC04: bc1fl       L_801EBC4C
    if (!c1cs) {
        // 0x801EBC08: sw          $a2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r6;
            goto L_801EBC4C;
    }
    goto skip_1;
    // 0x801EBC08: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    skip_1:
    // 0x801EBC0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EBC10: lwc1        $f8, 0x20($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X20);
    // 0x801EBC14: div.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801EBC18: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x801EBC1C: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    // 0x801EBC20: swc1        $f6, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f6.u32l;
    // 0x801EBC24: lwc1        $f10, 0x90($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X90);
    // 0x801EBC28: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801EBC2C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801EBC30: swc1        $f18, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f18.u32l;
    // 0x801EBC34: lwc1        $f6, 0x90($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X90);
    // 0x801EBC38: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801EBC3C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801EBC40: b           L_801EBC5C
    // 0x801EBC44: swc1        $f8, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f8.u32l;
        goto L_801EBC5C;
    // 0x801EBC44: swc1        $f8, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f8.u32l;
    // 0x801EBC48: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
L_801EBC4C:
    // 0x801EBC4C: jal         0x801D614C
    // 0x801EBC50: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D614C_60152C(rdram, ctx);
        goto after_2;
    // 0x801EBC50: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x801EBC54: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801EBC58: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
L_801EBC5C:
    // 0x801EBC5C: lw          $t8, 0x7C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X7C);
    // 0x801EBC60: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x801EBC64: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801EBC68: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801EBC6C: nop

    // 0x801EBC70: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801EBC74: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801EBC78: jal         0x801D3018
    // 0x801EBC7C: nop

    func_801D3018_5FE3F8(rdram, ctx);
        goto after_3;
    // 0x801EBC7C: nop

    after_3:
    // 0x801EBC80: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801EBC84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801EBC88: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801EBC8C: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x801EBC90: nop

    // 0x801EBC94: bc1fl       L_801EBCA8
    if (!c1cs) {
        // 0x801EBC98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EBCA8;
    }
    goto skip_2;
    // 0x801EBC98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801EBC9C: jal         0x80034ED4
    // 0x801EBCA0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801EBCA0: nop

    after_4:
    // 0x801EBCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EBCA8:
    // 0x801EBCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EBCAC: jr          $ra
    // 0x801EBCB0: nop

    TRACE_RETURN()
    return;
    // 0x801EBCB0: nop

;}
RECOMP_FUNC void func_801F0E00_61C1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0E00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F0E04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0E08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F0E0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0E10: jal         0x801F76D0
    // 0x801F0E14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F0E14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F0E18: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801F0E1C: jal         0x801D2F40
    // 0x801F0E20: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F0E20: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_1:
    // 0x801F0E24: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801F0E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F0E2C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801F0E30: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F0E34: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F0E38: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801F0E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0E40: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801F0E44: nop

    // 0x801F0E48: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801F0E4C: beql        $v0, $zero, L_801F0E9C
    if (ctx->r2 == 0) {
        // 0x801F0E50: mfc1        $v0, $f4
        ctx->r2 = (int32_t)ctx->f4.u32l;
            goto L_801F0E9C;
    }
    goto skip_0;
    // 0x801F0E50: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x801F0E54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0E58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F0E5C: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801F0E60: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801F0E64: nop

    // 0x801F0E68: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801F0E6C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801F0E70: nop

    // 0x801F0E74: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801F0E78: bne         $v0, $zero, L_801F0E90
    if (ctx->r2 != 0) {
        // 0x801F0E7C: nop
    
            goto L_801F0E90;
    }
    // 0x801F0E7C: nop

    // 0x801F0E80: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x801F0E84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F0E88: b           L_801F0EA8
    // 0x801F0E8C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_801F0EA8;
    // 0x801F0E8C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_801F0E90:
    // 0x801F0E90: b           L_801F0EA8
    // 0x801F0E94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801F0EA8;
    // 0x801F0E94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801F0E98: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
L_801F0E9C:
    // 0x801F0E9C: nop

    // 0x801F0EA0: bltz        $v0, L_801F0E90
    if (SIGNED(ctx->r2) < 0) {
        // 0x801F0EA4: nop
    
            goto L_801F0E90;
    }
    // 0x801F0EA4: nop

L_801F0EA8:
    // 0x801F0EA8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801F0EAC: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F0EB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F0EB4: ldc1        $f10, -0x1AB0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1AB0);
    // 0x801F0EB8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F0EBC: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801F0EC0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801F0EC4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801F0EC8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801F0ECC: swc1        $f18, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f18.u32l;
    // 0x801F0ED0: lwc1        $f4, 0x74($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F0ED4: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x801F0ED8: nop

    // 0x801F0EDC: bc1f        L_801F0EE8
    if (!c1cs) {
        // 0x801F0EE0: nop
    
            goto L_801F0EE8;
    }
    // 0x801F0EE0: nop

    // 0x801F0EE4: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
L_801F0EE8:
    // 0x801F0EE8: jal         0x801D619C
    // 0x801F0EEC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_801D619C_60157C(rdram, ctx);
        goto after_2;
    // 0x801F0EEC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_2:
    // 0x801F0EF0: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x801F0EF4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F0EF8: bnel        $v0, $zero, L_801F0F2C
    if (ctx->r2 != 0) {
        // 0x801F0EFC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F0F2C;
    }
    goto skip_1;
    // 0x801F0EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F0F00: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F0F04: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801F0F08: nop

    // 0x801F0F0C: bc1fl       L_801F0F2C
    if (!c1cs) {
        // 0x801F0F10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F0F2C;
    }
    goto skip_2;
    // 0x801F0F10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801F0F14: jal         0x801F7004
    // 0x801F0F18: nop

    func_801F7004_6223E4(rdram, ctx);
        goto after_3;
    // 0x801F0F18: nop

    after_3:
    // 0x801F0F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0F20: jal         0x801F0690
    // 0x801F0F24: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_801F0690_61BA70(rdram, ctx);
        goto after_4;
    // 0x801F0F24: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_4:
    // 0x801F0F28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F0F2C:
    // 0x801F0F2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F0F30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F0F34: jr          $ra
    // 0x801F0F38: nop

    TRACE_RETURN()
    return;
    // 0x801F0F38: nop

;}
RECOMP_FUNC void func_802087D0_633BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802087D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802087D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802087D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802087DC: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x802087E0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802087E4: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x802087E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802087EC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802087F0: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x802087F4: bgtz        $t7, L_80208888
    if (SIGNED(ctx->r15) > 0) {
        // 0x802087F8: addiu       $v0, $v0, 0xA0
        ctx->r2 = ADD32(ctx->r2, 0XA0);
            goto L_80208888;
    }
    // 0x802087F8: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x802087FC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80208800: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80208804: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208808: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8020880C: jal         0x801D4EB8
    // 0x80208810: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    func_801D4EB8_600298(rdram, ctx);
        goto after_0;
    // 0x80208810: lw          $a3, 0x14($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X14);
    after_0:
    // 0x80208814: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80208818: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8020881C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208820: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80208824: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80208828: jal         0x801D4D0C
    // 0x8020882C: nop

    func_801D4D0C_6000EC(rdram, ctx);
        goto after_1;
    // 0x8020882C: nop

    after_1:
    // 0x80208830: beq         $v0, $zero, L_80208888
    if (ctx->r2 == 0) {
        // 0x80208834: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80208888;
    }
    // 0x80208834: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80208838: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8020883C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80208840: jal         0x801D5064
    // 0x80208844: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    func_801D5064_600444(rdram, ctx);
        goto after_2;
    // 0x80208844: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_2:
    // 0x80208848: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020884C: beq         $v0, $zero, L_80208888
    if (ctx->r2 == 0) {
        // 0x80208850: addiu       $v1, $v1, -0x1130
        ctx->r3 = ADD32(ctx->r3, -0X1130);
            goto L_80208888;
    }
    // 0x80208850: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x80208854: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80208858: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8020885C: addiu       $a1, $a1, -0x4984
    ctx->r5 = ADD32(ctx->r5, -0X4984);
    // 0x80208860: sb          $zero, 0x2C1($t9)
    MEM_B(0X2C1, ctx->r25) = 0;
    // 0x80208864: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80208868: sb          $zero, 0x2C2($t0)
    MEM_B(0X2C2, ctx->r8) = 0;
    // 0x8020886C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80208870: sb          $zero, 0x2C3($t1)
    MEM_B(0X2C3, ctx->r9) = 0;
    // 0x80208874: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80208878: jal         0x8003522C
    // 0x8020887C: lw          $a0, 0x1D8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x8020887C: lw          $a0, 0x1D8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1D8);
    after_3:
    // 0x80208880: jal         0x80034ED4
    // 0x80208884: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x80208884: nop

    after_4:
L_80208888:
    // 0x80208888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020888C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80208890: jr          $ra
    // 0x80208894: nop

    TRACE_RETURN()
    return;
    // 0x80208894: nop

;}
RECOMP_FUNC void func_801D2F40_5FE320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2F40: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D2F44: bnel        $a0, $zero, L_801D2F5C
    if (ctx->r4 != 0) {
        // 0x801D2F48: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801D2F5C;
    }
    goto skip_0;
    // 0x801D2F48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x801D2F4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D2F50: jr          $ra
    // 0x801D2F54: nop

    TRACE_RETURN()
    return;
    // 0x801D2F54: nop

    // 0x801D2F58: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_801D2F5C:
    // 0x801D2F5C: nop

    // 0x801D2F60: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x801D2F64: nop

    // 0x801D2F68: bc1fl       L_801D2FC0
    if (!c1cs) {
        // 0x801D2F6C: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_801D2FC0;
    }
    goto skip_1;
    // 0x801D2F6C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_1:
    // 0x801D2F70: lwc1        $f0, 0x94($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801D2F74: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D2F78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D2F7C: div.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    // 0x801D2F80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D2F84: nop

    // 0x801D2F88: sub.s       $f14, $f0, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801D2F8C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D2F90: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x801D2F94: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D2F98: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x801D2F9C: nop

    // 0x801D2FA0: bc1f        L_801D2FB4
    if (!c1cs) {
        // 0x801D2FA4: nop
    
            goto L_801D2FB4;
    }
    // 0x801D2FA4: nop

    // 0x801D2FA8: swc1        $f14, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f14.u32l;
    // 0x801D2FAC: jr          $ra
    // 0x801D2FB0: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    TRACE_RETURN()
    return;
    // 0x801D2FB0: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801D2FB4:
    // 0x801D2FB4: jr          $ra
    // 0x801D2FB8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    TRACE_RETURN()
    return;
    // 0x801D2FB8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801D2FBC: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_801D2FC0:
    // 0x801D2FC0: nop

    // 0x801D2FC4: bc1fl       L_801D2FD8
    if (!c1cs) {
        // 0x801D2FC8: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_801D2FD8;
    }
    goto skip_2;
    // 0x801D2FC8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_2:
    // 0x801D2FCC: b           L_801D2FD8
    // 0x801D2FD0: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_801D2FD8;
    // 0x801D2FD0: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x801D2FD4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801D2FD8:
    // 0x801D2FD8: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801D2FDC: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D2FE0: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D2FE4: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801D2FE8: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x801D2FEC: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D2FF0: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x801D2FF4: nop

    // 0x801D2FF8: bc1fl       L_801D3010
    if (!c1cs) {
        // 0x801D2FFC: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801D3010;
    }
    goto skip_3;
    // 0x801D2FFC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x801D3000: swc1        $f16, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f16.u32l;
    // 0x801D3004: jr          $ra
    // 0x801D3008: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    TRACE_RETURN()
    return;
    // 0x801D3008: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x801D300C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801D3010:
    // 0x801D3010: jr          $ra
    // 0x801D3014: nop

    TRACE_RETURN()
    return;
    // 0x801D3014: nop

;}
RECOMP_FUNC void func_801D36BC_5FEA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D36BC: jr          $ra
    // 0x801D36C0: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801D36C0: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801FB6A0_626A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB6A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB6A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FB6AC: jal         0x801FFE6C
    // 0x801FB6B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FB6B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FB6B4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FB6B8: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FB6BC: jal         0x801FFE14
    // 0x801FB6C0: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    func_801FFE14_62B1F4(rdram, ctx);
        goto after_1;
    // 0x801FB6C0: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    after_1:
    // 0x801FB6C4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801FB6C8: addiu       $t7, $zero, 0x82
    ctx->r15 = ADD32(0, 0X82);
    // 0x801FB6CC: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x801FB6D0: sh          $t7, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r15;
    // 0x801FB6D4: sw          $t8, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r24;
    // 0x801FB6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB6E0: jr          $ra
    // 0x801FB6E4: nop

    TRACE_RETURN()
    return;
    // 0x801FB6E4: nop

;}
RECOMP_FUNC void func_801E3F78_60F358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3F78: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E3F7C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E3F80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3F84: lwc1        $f0, -0x2318($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2318);
    // 0x801E3F88: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801E3F8C: addiu       $a1, $a1, -0x6610
    ctx->r5 = ADD32(ctx->r5, -0X6610);
    // 0x801E3F90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E3F94: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E3F98: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E3F9C: lui         $at, 0xC448
    ctx->r1 = S32(0XC448 << 16);
    // 0x801E3FA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E3FA4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E3FA8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E3FAC: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E3FB0: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E3FB4: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E3FB8: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801E3FBC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801E3FC0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801E3FC4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801E3FC8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801E3FCC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801E3FD0: addiu       $a2, $a2, -0x5D30
    ctx->r6 = ADD32(ctx->r6, -0X5D30);
    // 0x801E3FD4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E3FD8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801E3FDC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E3FE0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E3FE4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E3FE8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801E3FEC: jal         0x8000DBF0
    // 0x801E3FF0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801E3FF0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801E3FF4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801E3FF8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E3FFC: addiu       $a1, $a1, -0x5D30
    ctx->r5 = ADD32(ctx->r5, -0X5D30);
    // 0x801E4000: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x801E4004: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x801E4008: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x801E400C: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x801E4010: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x801E4014: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x801E4018: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801E401C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E4020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E4024: jal         0x8000DF10
    // 0x801E4028: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801E4028: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x801E402C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E4030: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x801E4034: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x801E4038: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E403C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x801E4040: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x801E4044: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4048: addiu       $a0, $a0, 0x4068
    ctx->r4 = ADD32(ctx->r4, 0X4068);
    // 0x801E404C: sw          $t1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r9;
    // 0x801E4050: jal         0x8003521C
    // 0x801E4054: sb          $t2, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E4054: sb          $t2, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r10;
    after_2:
    // 0x801E4058: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801E405C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E4060: jr          $ra
    // 0x801E4064: nop

    TRACE_RETURN()
    return;
    // 0x801E4064: nop

;}
RECOMP_FUNC void func_801D3F00_5FF2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D3F08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D3F0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D3F10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D3F14: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801D3F18: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x801D3F1C: lhu         $a2, 0x1E($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X1E);
    // 0x801D3F20: jal         0x801D3F38
    // 0x801D3F24: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    func_801D3F38_5FF318(rdram, ctx);
        goto after_0;
    // 0x801D3F24: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x801D3F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D3F30: jr          $ra
    // 0x801D3F34: nop

    TRACE_RETURN()
    return;
    // 0x801D3F34: nop

;}
RECOMP_FUNC void func_801F72B4_622694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F72B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F72B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F72BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801F72C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F72C4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801F72C8: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x801F72CC: jal         0x801F71DC
    // 0x801F72D0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_801F71DC_6225BC(rdram, ctx);
        goto after_0;
    // 0x801F72D0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F72D4: bne         $v0, $zero, L_801F7300
    if (ctx->r2 != 0) {
        // 0x801F72D8: lui         $at, 0xC2DC
        ctx->r1 = S32(0XC2DC << 16);
            goto L_801F7300;
    }
    // 0x801F72D8: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801F72DC: jal         0x801F7168
    // 0x801F72E0: nop

    func_801F7168_622548(rdram, ctx);
        goto after_1;
    // 0x801F72E0: nop

    after_1:
    // 0x801F72E4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801F72E8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F72EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F72F0: lwc1        $f6, 0x20($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X20);
    // 0x801F72F4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F72F8: b           L_801F7308
    // 0x801F72FC: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
        goto L_801F7308;
    // 0x801F72FC: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_801F7300:
    // 0x801F7300: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F7304: nop

L_801F7308:
    // 0x801F7308: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x801F730C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801F7310: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801F7314: jal         0x801D6A30
    // 0x801F7318: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    func_801D6A30_601E10(rdram, ctx);
        goto after_2;
    // 0x801F7318: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x801F731C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7320: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F7324: jr          $ra
    // 0x801F7328: nop

    TRACE_RETURN()
    return;
    // 0x801F7328: nop

;}
RECOMP_FUNC void func_801F5710_620AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5710: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F5714: lw          $v1, -0x1130($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X1130);
    // 0x801F5718: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F571C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5720: addiu       $t6, $v1, 0x140
    ctx->r14 = ADD32(ctx->r3, 0X140);
    // 0x801F5724: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F5728: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801F572C: lui         $at, 0xC25C
    ctx->r1 = S32(0XC25C << 16);
    // 0x801F5730: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801F5734: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F5738: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F573C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F5740: ldc1        $f8, -0x1970($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1970);
    // 0x801F5744: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F5748: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801F574C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F5750: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5754: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F5758: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F575C: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x801F5760: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F5764: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801F5768: nop

    // 0x801F576C: bc1fl       L_801F577C
    if (!c1cs) {
        // 0x801F5770: lwc1        $f4, 0x4($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
            goto L_801F577C;
    }
    goto skip_0;
    // 0x801F5770: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x801F5774: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x801F5778: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
L_801F577C:
    // 0x801F577C: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801F5780: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F5784: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F5788: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x801F578C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F5790: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x801F5794: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801F5798: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F579C: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801F57A0: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x801F57A4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801F57A8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801F57AC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801F57B0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x801F57B4: nop

    // 0x801F57B8: subu        $t3, $t1, $t0
    ctx->r11 = SUB32(ctx->r9, ctx->r8);
    // 0x801F57BC: jal         0x8000E630
    // 0x801F57C0: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801F57C0: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    after_0:
    // 0x801F57C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F57C8: jal         0x801D2F40
    // 0x801F57CC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F57CC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x801F57D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F57D4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801F57D8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801F57DC: nop

    // 0x801F57E0: bc1fl       L_801F5880
    if (!c1cs) {
        // 0x801F57E4: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_801F5880;
    }
    goto skip_1;
    // 0x801F57E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801F57E8: lw          $v0, 0x90($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X90);
    // 0x801F57EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F57F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F57F4: beq         $v0, $zero, L_801F5824
    if (ctx->r2 == 0) {
        // 0x801F57F8: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_801F5824;
    }
    // 0x801F57F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F57FC: beq         $v0, $at, L_801F5834
    if (ctx->r2 == ctx->r1) {
        // 0x801F5800: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F5834;
    }
    // 0x801F5800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5804: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F5808: beq         $v0, $at, L_801F5848
    if (ctx->r2 == ctx->r1) {
        // 0x801F580C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F5848;
    }
    // 0x801F580C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5810: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F5814: beq         $v0, $at, L_801F585C
    if (ctx->r2 == ctx->r1) {
        // 0x801F5818: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F585C;
    }
    // 0x801F5818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F581C: b           L_801F5870
    // 0x801F5820: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
        goto L_801F5870;
    // 0x801F5820: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
L_801F5824:
    // 0x801F5824: jal         0x801D2EE4
    // 0x801F5828: addiu       $a1, $a1, -0x4D48
    ctx->r5 = ADD32(ctx->r5, -0X4D48);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801F5828: addiu       $a1, $a1, -0x4D48
    ctx->r5 = ADD32(ctx->r5, -0X4D48);
    after_2:
    // 0x801F582C: b           L_801F586C
    // 0x801F5830: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_801F586C;
    // 0x801F5830: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801F5834:
    // 0x801F5834: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F5838: jal         0x801D2EE4
    // 0x801F583C: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801F583C: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    after_3:
    // 0x801F5840: b           L_801F586C
    // 0x801F5844: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_801F586C;
    // 0x801F5844: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801F5848:
    // 0x801F5848: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F584C: jal         0x801D2EE4
    // 0x801F5850: addiu       $a1, $a1, -0x4D48
    ctx->r5 = ADD32(ctx->r5, -0X4D48);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801F5850: addiu       $a1, $a1, -0x4D48
    ctx->r5 = ADD32(ctx->r5, -0X4D48);
    after_4:
    // 0x801F5854: b           L_801F586C
    // 0x801F5858: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_801F586C;
    // 0x801F5858: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801F585C:
    // 0x801F585C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F5860: jal         0x801D2EE4
    // 0x801F5864: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_5;
    // 0x801F5864: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    after_5:
    // 0x801F5868: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_801F586C:
    // 0x801F586C: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
L_801F5870:
    // 0x801F5870: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801F5874: andi        $t6, $t5, 0x3
    ctx->r14 = ctx->r13 & 0X3;
    // 0x801F5878: sw          $t6, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r14;
    // 0x801F587C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_801F5880:
    // 0x801F5880: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F5884: lbu         $t8, 0xF($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XF);
    // 0x801F5888: bnel        $t8, $zero, L_801F589C
    if (ctx->r24 != 0) {
        // 0x801F588C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F589C;
    }
    goto skip_2;
    // 0x801F588C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801F5890: jal         0x8003521C
    // 0x801F5894: addiu       $a0, $a0, 0x58AC
    ctx->r4 = ADD32(ctx->r4, 0X58AC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F5894: addiu       $a0, $a0, 0x58AC
    ctx->r4 = ADD32(ctx->r4, 0X58AC);
    after_6:
    // 0x801F5898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F589C:
    // 0x801F589C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F58A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F58A4: jr          $ra
    // 0x801F58A8: nop

    TRACE_RETURN()
    return;
    // 0x801F58A8: nop

;}
RECOMP_FUNC void func_80204618_62F9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204618: addiu       $t6, $zero, 0x1DA
    ctx->r14 = ADD32(0, 0X1DA);
    // 0x8020461C: jr          $ra
    // 0x80204620: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80204620: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801FB274_626654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB274: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801FB278: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801FB27C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801FB280: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FB284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FB288: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801FB28C: addiu       $v1, $t6, -0x1
    ctx->r3 = ADD32(ctx->r14, -0X1);
    // 0x801FB290: andi        $t8, $v1, 0x7
    ctx->r24 = ctx->r3 & 0X7;
    // 0x801FB294: bne         $t8, $zero, L_801FB2FC
    if (ctx->r24 != 0) {
        // 0x801FB298: sw          $v1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r3;
            goto L_801FB2FC;
    }
    // 0x801FB298: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
    // 0x801FB29C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x801FB2A0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801FB2A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB2A8: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801FB2AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801FB2B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB2B4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FB2B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FB2BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FB2C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB2C4: lwc1        $f8, 0x10($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X10);
    // 0x801FB2C8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801FB2CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB2D0: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801FB2D4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FB2D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801FB2DC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801FB2E0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801FB2E4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801FB2E8: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801FB2EC: jal         0x801DFB90
    // 0x801FB2F0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x801FB2F0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801FB2F4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801FB2F8: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
L_801FB2FC:
    // 0x801FB2FC: andi        $t0, $v1, 0x3
    ctx->r8 = ctx->r3 & 0X3;
    // 0x801FB300: bne         $t0, $zero, L_801FB368
    if (ctx->r8 != 0) {
        // 0x801FB304: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_801FB368;
    }
    // 0x801FB304: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801FB308: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801FB30C: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x801FB310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB314: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801FB318: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801FB31C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB320: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FB324: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FB328: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FB32C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB330: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801FB334: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801FB338: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB33C: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801FB340: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801FB344: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FB348: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801FB34C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801FB350: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801FB354: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801FB358: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801FB35C: jal         0x801DFB90
    // 0x801FB360: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x801FB360: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801FB364: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_801FB368:
    // 0x801FB368: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801FB36C: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801FB370: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x801FB374: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801FB378: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801FB37C: lbu         $t3, -0x521C($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X521C);
    // 0x801FB380: bnel        $t3, $at, L_801FB3B8
    if (ctx->r11 != ctx->r1) {
        // 0x801FB384: lw          $t4, 0x80($a0)
        ctx->r12 = MEM_W(ctx->r4, 0X80);
            goto L_801FB3B8;
    }
    goto skip_0;
    // 0x801FB384: lw          $t4, 0x80($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X80);
    skip_0:
    // 0x801FB388: jal         0x8003F1D8
    // 0x801FB38C: nop

    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_2;
    // 0x801FB38C: nop

    after_2:
    // 0x801FB390: bnel        $v0, $zero, L_801FB3DC
    if (ctx->r2 != 0) {
        // 0x801FB394: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801FB3DC;
    }
    goto skip_1;
    // 0x801FB394: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801FB398: jal         0x80038BC8
    // 0x801FB39C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801FB39C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_3:
    // 0x801FB3A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB3A4: jal         0x8003521C
    // 0x801FB3A8: addiu       $a0, $a0, -0x4C18
    ctx->r4 = ADD32(ctx->r4, -0X4C18);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FB3A8: addiu       $a0, $a0, -0x4C18
    ctx->r4 = ADD32(ctx->r4, -0X4C18);
    after_4:
    // 0x801FB3AC: b           L_801FB3DC
    // 0x801FB3B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801FB3DC;
    // 0x801FB3B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801FB3B4: lw          $t4, 0x80($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X80);
L_801FB3B8:
    // 0x801FB3B8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801FB3BC: bne         $t5, $zero, L_801FB3D8
    if (ctx->r13 != 0) {
        // 0x801FB3C0: sw          $t5, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r13;
            goto L_801FB3D8;
    }
    // 0x801FB3C0: sw          $t5, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r13;
    // 0x801FB3C4: jal         0x80038BC8
    // 0x801FB3C8: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801FB3C8: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x801FB3CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB3D0: jal         0x8003521C
    // 0x801FB3D4: addiu       $a0, $a0, -0x4C18
    ctx->r4 = ADD32(ctx->r4, -0X4C18);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801FB3D4: addiu       $a0, $a0, -0x4C18
    ctx->r4 = ADD32(ctx->r4, -0X4C18);
    after_6:
L_801FB3D8:
    // 0x801FB3D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801FB3DC:
    // 0x801FB3DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801FB3E0: jr          $ra
    // 0x801FB3E4: nop

    TRACE_RETURN()
    return;
    // 0x801FB3E4: nop

;}
RECOMP_FUNC void func_801EA900_615CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA900: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EA904: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EA908: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EA90C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EA910: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801EA914: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801EA918: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801EA91C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801EA920: lhu         $t8, 0x16($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X16);
    // 0x801EA924: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EA928: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x801EA92C: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801EA930: jal         0x801D614C
    // 0x801EA934: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801EA934: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x801EA938: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EA93C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EA940: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801EA944: nop

    // 0x801EA948: bc1f        L_801EA960
    if (!c1cs) {
        // 0x801EA94C: nop
    
            goto L_801EA960;
    }
    // 0x801EA94C: nop

    // 0x801EA950: jal         0x80034ED4
    // 0x801EA954: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801EA954: nop

    after_1:
    // 0x801EA958: b           L_801EAA68
    // 0x801EA95C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801EAA68;
    // 0x801EA95C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EA960:
    // 0x801EA960: jal         0x801D365C
    // 0x801EA964: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_2;
    // 0x801EA964: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x801EA968: bne         $v0, $zero, L_801EA980
    if (ctx->r2 != 0) {
        // 0x801EA96C: nop
    
            goto L_801EA980;
    }
    // 0x801EA96C: nop

    // 0x801EA970: jal         0x801D36CC
    // 0x801EA974: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_3;
    // 0x801EA974: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x801EA978: beq         $v0, $zero, L_801EAA5C
    if (ctx->r2 == 0) {
        // 0x801EA97C: nop
    
            goto L_801EAA5C;
    }
    // 0x801EA97C: nop

L_801EA980:
    // 0x801EA980: jal         0x801D3854
    // 0x801EA984: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D3854_5FEC34(rdram, ctx);
        goto after_4;
    // 0x801EA984: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x801EA988: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x801EA98C: bne         $at, $zero, L_801EA9B0
    if (ctx->r1 != 0) {
        // 0x801EA990: nop
    
            goto L_801EA9B0;
    }
    // 0x801EA990: nop

    // 0x801EA994: jal         0x801D3A68
    // 0x801EA998: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_5;
    // 0x801EA998: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x801EA99C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801EA9A0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801EA9A4: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x801EA9A8: jal         0x801D7438
    // 0x801EA9AC: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_6;
    // 0x801EA9AC: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_6:
L_801EA9B0:
    // 0x801EA9B0: jal         0x801D365C
    // 0x801EA9B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_7;
    // 0x801EA9B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x801EA9B8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801EA9BC: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801EA9C0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801EA9C4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801EA9C8: lw          $t0, 0x1CC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1CC);
    // 0x801EA9CC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801EA9D0: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801EA9D4: bne         $v0, $t0, L_801EAA10
    if (ctx->r2 != ctx->r8) {
        // 0x801EA9D8: addiu       $a1, $v1, 0xA0
        ctx->r5 = ADD32(ctx->r3, 0XA0);
            goto L_801EAA10;
    }
    // 0x801EA9D8: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801EA9DC: lbu         $t2, 0xE($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XE);
    // 0x801EA9E0: bne         $t2, $zero, L_801EAA18
    if (ctx->r10 != 0) {
        // 0x801EA9E4: nop
    
            goto L_801EAA18;
    }
    // 0x801EA9E4: nop

    // 0x801EA9E8: lbu         $t3, 0x2C5($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801EA9EC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801EA9F0: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801EA9F4: bne         $t3, $zero, L_801EAA18
    if (ctx->r11 != 0) {
        // 0x801EA9F8: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_801EAA18;
    }
    // 0x801EA9F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801EA9FC: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801EAA00: jal         0x8000F3D8
    // 0x801EAA04: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_8;
    // 0x801EAA04: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_8:
    // 0x801EAA08: b           L_801EAA18
    // 0x801EAA0C: nop

        goto L_801EAA18;
    // 0x801EAA0C: nop

L_801EAA10:
    // 0x801EAA10: jal         0x8000F3D8
    // 0x801EAA14: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_9;
    // 0x801EAA14: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_9:
L_801EAA18:
    // 0x801EAA18: jal         0x801CEE80
    // 0x801EAA1C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_10;
    // 0x801EAA1C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_10:
    // 0x801EAA20: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EAA24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EAA28: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EAA2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EAA30: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EAA34: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801EAA38: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801EAA3C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801EAA40: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801EAA44: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801EAA48: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801EAA4C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EAA50: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801EAA54: jal         0x801E1B30
    // 0x801EAA58: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_11;
    // 0x801EAA58: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_11:
L_801EAA5C:
    // 0x801EAA5C: jal         0x801D3894
    // 0x801EAA60: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D3894_5FEC74(rdram, ctx);
        goto after_12;
    // 0x801EAA60: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_12:
    // 0x801EAA64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EAA68:
    // 0x801EAA68: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801EAA6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EAA70: jr          $ra
    // 0x801EAA74: nop

    TRACE_RETURN()
    return;
    // 0x801EAA74: nop

;}
RECOMP_FUNC void func_801EEE54_61A234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEE54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EEE58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EEE5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EEE60: jal         0x801D4338
    // 0x801EEE64: lui         $a1, 0xC25C
    ctx->r5 = S32(0XC25C << 16);
    func_801D4338_5FF718(rdram, ctx);
        goto after_0;
    // 0x801EEE64: lui         $a1, 0xC25C
    ctx->r5 = S32(0XC25C << 16);
    after_0:
    // 0x801EEE68: beq         $v0, $zero, L_801EEE84
    if (ctx->r2 == 0) {
        // 0x801EEE6C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801EEE84;
    }
    // 0x801EEE6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801EEE70: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801EEE74: jal         0x801D6508
    // 0x801EEE78: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801EEE78: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
    // 0x801EEE7C: b           L_801EEE94
    // 0x801EEE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801EEE94;
    // 0x801EEE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EEE84:
    // 0x801EEE84: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801EEE88: jal         0x801D6508
    // 0x801EEE8C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801EEE8C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_2:
    // 0x801EEE90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EEE94:
    // 0x801EEE94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EEE98: jr          $ra
    // 0x801EEE9C: nop

    TRACE_RETURN()
    return;
    // 0x801EEE9C: nop

;}
RECOMP_FUNC void func_801D7084_602464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7084: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D7088: lw          $a2, -0x1130($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1130);
    // 0x801D708C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801D7090: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x801D7094: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D7098: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D709C: addiu       $v1, $a2, 0x130
    ctx->r3 = ADD32(ctx->r6, 0X130);
    // 0x801D70A0: addiu       $a3, $a2, 0x138
    ctx->r7 = ADD32(ctx->r6, 0X138);
    // 0x801D70A4: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x801D70A8: addu        $t3, $v1, $t0
    ctx->r11 = ADD32(ctx->r3, ctx->r8);
    // 0x801D70AC: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x801D70B0: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x801D70B4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x801D70B8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801D70BC: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801D70C0: beq         $at, $zero, L_801D70F0
    if (ctx->r1 == 0) {
        // 0x801D70C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D70F0;
    }
    // 0x801D70C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D70C8: subu        $t8, $t4, $t7
    ctx->r24 = SUB32(ctx->r12, ctx->r15);
    // 0x801D70CC: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
    // 0x801D70D0: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x801D70D4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x801D70D8: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x801D70DC: bnel        $at, $zero, L_801D7128
    if (ctx->r1 != 0) {
        // 0x801D70E0: lbu         $v1, 0x1($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X1);
            goto L_801D7128;
    }
    goto skip_0;
    // 0x801D70E0: lbu         $v1, 0x1($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X1);
    skip_0:
    // 0x801D70E4: sb          $v1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r3;
    // 0x801D70E8: b           L_801D7124
    // 0x801D70EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D7124;
    // 0x801D70EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D70F0:
    // 0x801D70F0: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x801D70F4: beq         $at, $zero, L_801D7120
    if (ctx->r1 == 0) {
        // 0x801D70F8: addu        $t5, $t4, $a1
        ctx->r13 = ADD32(ctx->r12, ctx->r5);
            goto L_801D7120;
    }
    // 0x801D70F8: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x801D70FC: sb          $t5, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r13;
    // 0x801D7100: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x801D7104: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x801D7108: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D710C: bnel        $at, $zero, L_801D7128
    if (ctx->r1 != 0) {
        // 0x801D7110: lbu         $v1, 0x1($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X1);
            goto L_801D7128;
    }
    goto skip_1;
    // 0x801D7110: lbu         $v1, 0x1($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X1);
    skip_1:
    // 0x801D7114: sb          $v1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r3;
    // 0x801D7118: b           L_801D7124
    // 0x801D711C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D7124;
    // 0x801D711C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D7120:
    // 0x801D7120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D7124:
    // 0x801D7124: lbu         $v1, 0x1($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X1);
L_801D7128:
    // 0x801D7128: lbu         $a0, 0x1($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X1);
    // 0x801D712C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D7130: beq         $at, $zero, L_801D715C
    if (ctx->r1 == 0) {
        // 0x801D7134: subu        $t7, $a0, $a1
        ctx->r15 = SUB32(ctx->r4, ctx->r5);
            goto L_801D715C;
    }
    // 0x801D7134: subu        $t7, $a0, $a1
    ctx->r15 = SUB32(ctx->r4, ctx->r5);
    // 0x801D7138: sb          $t7, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r15;
    // 0x801D713C: lbu         $v1, 0x1($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X1);
    // 0x801D7140: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x801D7144: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801D7148: bnel        $at, $zero, L_801D7194
    if (ctx->r1 != 0) {
        // 0x801D714C: lbu         $v1, 0x2($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X2);
            goto L_801D7194;
    }
    goto skip_2;
    // 0x801D714C: lbu         $v1, 0x2($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2);
    skip_2:
    // 0x801D7150: sb          $v1, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r3;
    // 0x801D7154: b           L_801D7190
    // 0x801D7158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D7190;
    // 0x801D7158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D715C:
    // 0x801D715C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D7160: beq         $at, $zero, L_801D718C
    if (ctx->r1 == 0) {
        // 0x801D7164: addu        $t9, $a0, $a1
        ctx->r25 = ADD32(ctx->r4, ctx->r5);
            goto L_801D718C;
    }
    // 0x801D7164: addu        $t9, $a0, $a1
    ctx->r25 = ADD32(ctx->r4, ctx->r5);
    // 0x801D7168: sb          $t9, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r25;
    // 0x801D716C: lbu         $v1, 0x1($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X1);
    // 0x801D7170: andi        $t5, $t9, 0xFF
    ctx->r13 = ctx->r25 & 0XFF;
    // 0x801D7174: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D7178: bnel        $at, $zero, L_801D7194
    if (ctx->r1 != 0) {
        // 0x801D717C: lbu         $v1, 0x2($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X2);
            goto L_801D7194;
    }
    goto skip_3;
    // 0x801D717C: lbu         $v1, 0x2($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2);
    skip_3:
    // 0x801D7180: sb          $v1, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r3;
    // 0x801D7184: b           L_801D7190
    // 0x801D7188: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D7190;
    // 0x801D7188: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D718C:
    // 0x801D718C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D7190:
    // 0x801D7190: lbu         $v1, 0x2($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2);
L_801D7194:
    // 0x801D7194: lbu         $a0, 0x2($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X2);
    // 0x801D7198: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D719C: beq         $at, $zero, L_801D71C8
    if (ctx->r1 == 0) {
        // 0x801D71A0: subu        $t6, $a0, $a1
        ctx->r14 = SUB32(ctx->r4, ctx->r5);
            goto L_801D71C8;
    }
    // 0x801D71A0: subu        $t6, $a0, $a1
    ctx->r14 = SUB32(ctx->r4, ctx->r5);
    // 0x801D71A4: sb          $t6, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r14;
    // 0x801D71A8: lbu         $v1, 0x2($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2);
    // 0x801D71AC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801D71B0: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801D71B4: bnel        $at, $zero, L_801D7200
    if (ctx->r1 != 0) {
        // 0x801D71B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801D7200;
    }
    goto skip_4;
    // 0x801D71B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_4:
    // 0x801D71BC: sb          $v1, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r3;
    // 0x801D71C0: b           L_801D71FC
    // 0x801D71C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D71FC;
    // 0x801D71C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D71C8:
    // 0x801D71C8: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D71CC: beq         $at, $zero, L_801D71F8
    if (ctx->r1 == 0) {
        // 0x801D71D0: addu        $t8, $a0, $a1
        ctx->r24 = ADD32(ctx->r4, ctx->r5);
            goto L_801D71F8;
    }
    // 0x801D71D0: addu        $t8, $a0, $a1
    ctx->r24 = ADD32(ctx->r4, ctx->r5);
    // 0x801D71D4: sb          $t8, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r24;
    // 0x801D71D8: lbu         $v1, 0x2($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X2);
    // 0x801D71DC: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x801D71E0: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D71E4: bnel        $at, $zero, L_801D7200
    if (ctx->r1 != 0) {
        // 0x801D71E8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801D7200;
    }
    goto skip_5;
    // 0x801D71E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_5:
    // 0x801D71EC: sb          $v1, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r3;
    // 0x801D71F0: b           L_801D71FC
    // 0x801D71F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D71FC;
    // 0x801D71F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D71F8:
    // 0x801D71F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D71FC:
    // 0x801D71FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_801D7200:
    // 0x801D7200: bnel        $v0, $at, L_801D7214
    if (ctx->r2 != ctx->r1) {
        // 0x801D7204: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D7214;
    }
    goto skip_6;
    // 0x801D7204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x801D7208: jr          $ra
    // 0x801D720C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D720C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D7210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D7214:
    // 0x801D7214: jr          $ra
    // 0x801D7218: nop

    TRACE_RETURN()
    return;
    // 0x801D7218: nop

;}
RECOMP_FUNC void func_801F9DB4_625194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9DB4: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F9DB8: addiu       $t0, $t0, -0x1130
    ctx->r8 = ADD32(ctx->r8, -0X1130);
    // 0x801F9DBC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x801F9DC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F9DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9DC8: lw          $a3, 0x1D8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1D8);
    // 0x801F9DCC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F9DD0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801F9DD4: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x801F9DD8: addiu       $t7, $zero, 0x36
    ctx->r15 = ADD32(0, 0X36);
    // 0x801F9DDC: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x801F9DE0: addiu       $t9, $zero, 0xB8
    ctx->r25 = ADD32(0, 0XB8);
    // 0x801F9DE4: sb          $t1, 0x2C0($v1)
    MEM_B(0X2C0, ctx->r3) = ctx->r9;
    // 0x801F9DE8: sb          $zero, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = 0;
    // 0x801F9DEC: sb          $t1, 0x2C2($v1)
    MEM_B(0X2C2, ctx->r3) = ctx->r9;
    // 0x801F9DF0: sb          $zero, 0x2C3($v1)
    MEM_B(0X2C3, ctx->r3) = 0;
    // 0x801F9DF4: sw          $t6, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->r14;
    // 0x801F9DF8: sw          $t7, 0x1F0($v1)
    MEM_W(0X1F0, ctx->r3) = ctx->r15;
    // 0x801F9DFC: sw          $t8, 0x1F4($v1)
    MEM_W(0X1F4, ctx->r3) = ctx->r24;
    // 0x801F9E00: sw          $t9, 0x1F8($v1)
    MEM_W(0X1F8, ctx->r3) = ctx->r25;
    // 0x801F9E04: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801F9E08: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x801F9E0C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801F9E10: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801F9E14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F9E18: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F9E1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F9E20: addiu       $t2, $zero, 0x1380
    ctx->r10 = ADD32(0, 0X1380);
    // 0x801F9E24: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F9E28: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801F9E2C: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801F9E30: sh          $t2, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r10;
    // 0x801F9E34: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x801F9E38: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x801F9E3C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801F9E40: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x801F9E44: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x801F9E48: lw          $a0, 0x1DC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1DC);
    // 0x801F9E4C: jal         0x80034EF8
    // 0x801F9E50: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801F9E50: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801F9E54: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F9E58: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801F9E5C: jal         0x80034EF8
    // 0x801F9E60: lw          $a0, 0x1D4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1D4);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x801F9E60: lw          $a0, 0x1D4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1D4);
    after_1:
    // 0x801F9E64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9E68: addiu       $a0, $a0, -0x6154
    ctx->r4 = ADD32(ctx->r4, -0X6154);
    // 0x801F9E6C: jal         0x80034DD8
    // 0x801F9E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x801F9E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801F9E74: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801F9E78: lw          $t5, -0x1130($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1130);
    // 0x801F9E7C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801F9E80: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F9E84: sw          $zero, 0x1D4($t5)
    MEM_W(0X1D4, ctx->r13) = 0;
    // 0x801F9E88: addiu       $a1, $a1, -0x6A8
    ctx->r5 = ADD32(ctx->r5, -0X6A8);
    // 0x801F9E8C: jal         0x8003522C
    // 0x801F9E90: lw          $a0, 0x1D8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801F9E90: lw          $a0, 0x1D8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1D8);
    after_3:
    // 0x801F9E94: jal         0x80038BC8
    // 0x801F9E98: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801F9E98: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x801F9E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9EA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F9EA4: jr          $ra
    // 0x801F9EA8: nop

    TRACE_RETURN()
    return;
    // 0x801F9EA8: nop

;}
RECOMP_FUNC void func_801F4CF4_6200D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4CF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F4CF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F4CFC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801F4D00: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801F4D04: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F4D08: jal         0x801F76D0
    // 0x801F4D0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F4D0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x801F4D10: jal         0x801F7074
    // 0x801F4D14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801F7074_622454(rdram, ctx);
        goto after_1;
    // 0x801F4D14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801F4D18: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801F4D1C: jal         0x801D3A18
    // 0x801F4D20: sw          $t6, 0xE0($s1)
    MEM_W(0XE0, ctx->r17) = ctx->r14;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_2;
    // 0x801F4D20: sw          $t6, 0xE0($s1)
    MEM_W(0XE0, ctx->r17) = ctx->r14;
    after_2:
    // 0x801F4D24: beq         $v0, $zero, L_801F4D3C
    if (ctx->r2 == 0) {
        // 0x801F4D28: nop
    
            goto L_801F4D3C;
    }
    // 0x801F4D28: nop

    // 0x801F4D2C: jal         0x801F701C
    // 0x801F4D30: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_3;
    // 0x801F4D30: nop

    after_3:
    // 0x801F4D34: b           L_801F4D48
    // 0x801F4D38: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
        goto L_801F4D48;
    // 0x801F4D38: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
L_801F4D3C:
    // 0x801F4D3C: jal         0x801F705C
    // 0x801F4D40: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_4;
    // 0x801F4D40: nop

    after_4:
    // 0x801F4D44: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
L_801F4D48:
    // 0x801F4D48: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F4D4C: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x801F4D50: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F4D54: nop

    // 0x801F4D58: bc1fl       L_801F4DC4
    if (!c1cs) {
        // 0x801F4D5C: lwc1        $f8, 0x94($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
            goto L_801F4DC4;
    }
    goto skip_0;
    // 0x801F4D5C: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x801F4D60: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801F4D64: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x801F4D68: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F4D6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F4D70: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F4D74: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F4D78: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801F4D7C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x801F4D80: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F4D84: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x801F4D88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F4D8C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F4D90: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F4D94: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F4D98: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x801F4D9C: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F4DA0: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801F4DA4: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801F4DA8: nop

    // 0x801F4DAC: bc1f        L_801F4E1C
    if (!c1cs) {
        // 0x801F4DB0: nop
    
            goto L_801F4E1C;
    }
    // 0x801F4DB0: nop

    // 0x801F4DB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F4DB8: b           L_801F4E1C
    // 0x801F4DBC: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
        goto L_801F4E1C;
    // 0x801F4DBC: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x801F4DC0: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
L_801F4DC4:
    // 0x801F4DC4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F4DC8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F4DCC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F4DD0: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F4DD4: div.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801F4DD8: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x801F4DDC: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801F4DE0: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x801F4DE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F4DE8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801F4DEC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F4DF0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F4DF4: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x801F4DF8: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F4DFC: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801F4E00: c.le.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d <= ctx->f6.d;
    // 0x801F4E04: nop

    // 0x801F4E08: bc1f        L_801F4E1C
    if (!c1cs) {
        // 0x801F4E0C: nop
    
            goto L_801F4E1C;
    }
    // 0x801F4E0C: nop

    // 0x801F4E10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4E14: nop

    // 0x801F4E18: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
L_801F4E1C:
    // 0x801F4E1C: jal         0x801D60E4
    // 0x801F4E20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_5;
    // 0x801F4E20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801F4E24: lui         $a1, 0xBE2E
    ctx->r5 = S32(0XBE2E << 16);
    // 0x801F4E28: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x801F4E2C: jal         0x801D6508
    // 0x801F4E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_6;
    // 0x801F4E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801F4E34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F4E38: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F4E3C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801F4E40: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x801F4E44: nop

    // 0x801F4E48: bc1fl       L_801F5180
    if (!c1cs) {
        // 0x801F4E4C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801F5180;
    }
    goto skip_1;
    // 0x801F4E4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801F4E50: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F4E54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F4E58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4E5C: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801F4E60: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801F4E64: jal         0x801D4408
    // 0x801F4E68: nop

    func_801D4408_5FF7E8(rdram, ctx);
        goto after_7;
    // 0x801F4E68: nop

    after_7:
    // 0x801F4E6C: beql        $v0, $zero, L_801F5180
    if (ctx->r2 == 0) {
        // 0x801F4E70: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801F5180;
    }
    goto skip_2;
    // 0x801F4E70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801F4E74: jal         0x80038BC8
    // 0x801F4E78: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    func_80038BC8_397C8(rdram, ctx);
        goto after_8;
    // 0x801F4E78: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_8:
    // 0x801F4E7C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F4E80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F4E84: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F4E88: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801F4E8C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x801F4E90: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F4E94: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801F4E98: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801F4E9C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F4EA0: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801F4EA4: lwc1        $f4, 0x70($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801F4EA8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x801F4EAC: lwc1        $f10, 0x78($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801F4EB0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F4EB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4EB8: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F4EBC: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x801F4EC0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F4EC4: div.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801F4EC8: neg.d       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = -ctx->f16.d;
    // 0x801F4ECC: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x801F4ED0: swc1        $f18, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f18.u32l;
    // 0x801F4ED4: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801F4ED8: swc1        $f8, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f8.u32l;
    // 0x801F4EDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F4EE0: swc1        $f16, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f16.u32l;
    // 0x801F4EE4: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F4EE8: mul.s       $f18, $f6, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801F4EEC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801F4EF0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F4EF4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801F4EF8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F4EFC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801F4F00: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F4F04: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F4F08: jal         0x801E006C
    // 0x801F4F0C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_9;
    // 0x801F4F0C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x801F4F10: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F4F14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4F18: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F4F1C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F4F20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F4F24: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801F4F28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4F2C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F4F30: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x801F4F34: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F4F38: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F4F3C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F4F40: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801F4F44: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F4F48: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801F4F4C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F4F50: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F4F54: jal         0x801E006C
    // 0x801F4F58: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801F4F58: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x801F4F5C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F4F60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F4F64: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F4F68: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F4F6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4F70: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801F4F74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4F78: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F4F7C: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x801F4F80: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F4F84: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801F4F88: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F4F8C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F4F90: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F4F94: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F4F98: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F4F9C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F4FA0: jal         0x801E006C
    // 0x801F4FA4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801F4FA4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x801F4FA8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F4FAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F4FB0: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F4FB4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F4FB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F4FBC: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801F4FC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4FC4: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F4FC8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801F4FCC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F4FD0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801F4FD4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F4FD8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801F4FDC: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F4FE0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801F4FE4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F4FE8: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F4FEC: jal         0x801E006C
    // 0x801F4FF0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_12;
    // 0x801F4FF0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x801F4FF4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F4FF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4FFC: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5000: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F5004: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5008: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801F500C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5010: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F5014: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x801F5018: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F501C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F5020: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5024: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801F5028: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F502C: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801F5030: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F5034: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F5038: jal         0x801E006C
    // 0x801F503C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_13;
    // 0x801F503C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x801F5040: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F5044: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F5048: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F504C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F5050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F5054: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801F5058: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F505C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F5060: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x801F5064: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F5068: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801F506C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5070: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F5074: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F5078: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F507C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F5080: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F5084: jal         0x801E006C
    // 0x801F5088: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_14;
    // 0x801F5088: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x801F508C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F5090: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5094: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5098: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F509C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F50A0: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801F50A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F50A8: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F50AC: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x801F50B0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F50B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801F50B8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F50BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801F50C0: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F50C4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801F50C8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F50CC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F50D0: jal         0x801E006C
    // 0x801F50D4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_15;
    // 0x801F50D4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x801F50D8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F50DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F50E0: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F50E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F50E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F50EC: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801F50F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F50F4: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x801F50F8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x801F50FC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F5100: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F5104: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5108: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801F510C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F5110: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801F5114: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F5118: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F511C: jal         0x801E006C
    // 0x801F5120: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_16;
    // 0x801F5120: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x801F5124: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801F5128: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F512C: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5130: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F5134: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F5138: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801F513C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5140: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x801F5144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F5148: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F514C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801F5150: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5154: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F5158: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F515C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F5160: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F5164: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F5168: jal         0x801E006C
    // 0x801F516C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_17;
    // 0x801F516C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_17:
    // 0x801F5170: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F5174: jal         0x8003521C
    // 0x801F5178: addiu       $a0, $a0, 0x5190
    ctx->r4 = ADD32(ctx->r4, 0X5190);
    func_8003521C_35E1C(rdram, ctx);
        goto after_18;
    // 0x801F5178: addiu       $a0, $a0, 0x5190
    ctx->r4 = ADD32(ctx->r4, 0X5190);
    after_18:
    // 0x801F517C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F5180:
    // 0x801F5180: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801F5184: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801F5188: jr          $ra
    // 0x801F518C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801F518C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801D3018_5FE3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3018: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D301C: bnel        $a0, $zero, L_801D3034
    if (ctx->r4 != 0) {
        // 0x801D3020: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_801D3034;
    }
    goto skip_0;
    // 0x801D3020: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x801D3024: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3028: jr          $ra
    // 0x801D302C: nop

    TRACE_RETURN()
    return;
    // 0x801D302C: nop

    // 0x801D3030: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_801D3034:
    // 0x801D3034: nop

    // 0x801D3038: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x801D303C: nop

    // 0x801D3040: bc1fl       L_801D309C
    if (!c1cs) {
        // 0x801D3044: c.lt.s      $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
            goto L_801D309C;
    }
    goto skip_1;
    // 0x801D3044: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    skip_1:
    // 0x801D3048: lwc1        $f14, 0x94($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801D304C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D3050: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D3054: div.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x801D3058: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D305C: nop

    // 0x801D3060: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x801D3064: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D3068: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x801D306C: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D3070: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x801D3074: nop

    // 0x801D3078: bc1f        L_801D3090
    if (!c1cs) {
        // 0x801D307C: nop
    
            goto L_801D3090;
    }
    // 0x801D307C: nop

    // 0x801D3080: sub.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x801D3084: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x801D3088: jr          $ra
    // 0x801D308C: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801D308C: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
L_801D3090:
    // 0x801D3090: jr          $ra
    // 0x801D3094: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    TRACE_RETURN()
    return;
    // 0x801D3094: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801D3098: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
L_801D309C:
    // 0x801D309C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D30A0: bc1fl       L_801D30B4
    if (!c1cs) {
        // 0x801D30A4: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_801D30B4;
    }
    goto skip_2;
    // 0x801D30A4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_2:
    // 0x801D30A8: b           L_801D30B4
    // 0x801D30AC: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_801D30B4;
    // 0x801D30AC: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x801D30B0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801D30B4:
    // 0x801D30B4: lwc1        $f14, 0x94($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801D30B8: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D30BC: div.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x801D30C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D30C4: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x801D30C8: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D30CC: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x801D30D0: nop

    // 0x801D30D4: bc1fl       L_801D30F8
    if (!c1cs) {
        // 0x801D30D8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801D30F8;
    }
    goto skip_3;
    // 0x801D30D8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x801D30DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D30E0: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x801D30E4: sub.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x801D30E8: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x801D30EC: jr          $ra
    // 0x801D30F0: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801D30F0: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x801D30F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801D30F8:
    // 0x801D30F8: jr          $ra
    // 0x801D30FC: nop

    TRACE_RETURN()
    return;
    // 0x801D30FC: nop

;}
RECOMP_FUNC void func_801ECD54_618134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECD54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801ECD58: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801ECD5C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801ECD60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801ECD64: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801ECD68: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801ECD6C: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801ECD70: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801ECD74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801ECD78: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801ECD7C: beq         $t8, $at, L_801ECD90
    if (ctx->r24 == ctx->r1) {
        // 0x801ECD80: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_801ECD90;
    }
    // 0x801ECD80: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801ECD84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801ECD88: nop

    // 0x801ECD8C: swc1        $f4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f4.u32l;
L_801ECD90:
    // 0x801ECD90: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801ECD94: lwc1        $f8, 0xA8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x801ECD98: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801ECD9C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801ECDA0: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x801ECDA4: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801ECDA8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801ECDAC: nop

    // 0x801ECDB0: bc1fl       L_801ECDF4
    if (!c1cs) {
        // 0x801ECDB4: trunc.w.s   $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801ECDF4;
    }
    goto skip_0;
    // 0x801ECDB4: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_0:
    // 0x801ECDB8: jal         0x80034ED4
    // 0x801ECDBC: swc1        $f2, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f2.u32l;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801ECDBC: swc1        $f2, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f2.u32l;
    after_0:
    // 0x801ECDC0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801ECDC4: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801ECDC8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801ECDCC: lw          $a0, 0x1D8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1D8);
    // 0x801ECDD0: lw          $t0, 0xD8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD8);
    // 0x801ECDD4: bnel        $t0, $at, L_801ECDF0
    if (ctx->r8 != ctx->r1) {
        // 0x801ECDD8: lwc1        $f0, 0xA0($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801ECDF0;
    }
    goto skip_1;
    // 0x801ECDD8: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    skip_1:
    // 0x801ECDDC: jal         0x801EC2F0
    // 0x801ECDE0: nop

    func_801EC2F0_6176D0(rdram, ctx);
        goto after_1;
    // 0x801ECDE0: nop

    after_1:
    // 0x801ECDE4: b           L_801ECDF0
    // 0x801ECDE8: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
        goto L_801ECDF0;
    // 0x801ECDE8: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801ECDEC: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
L_801ECDF0:
    // 0x801ECDF0: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
L_801ECDF4:
    // 0x801ECDF4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ECDF8: addiu       $t1, $zero, 0xA1
    ctx->r9 = ADD32(0, 0XA1);
    // 0x801ECDFC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801ECE00: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x801ECE04: addiu       $a1, $a1, -0x5288
    ctx->r5 = ADD32(ctx->r5, -0X5288);
    // 0x801ECE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECE0C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x801ECE10: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    // 0x801ECE14: jal         0x8000DF10
    // 0x801ECE18: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801ECE18: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_2:
    // 0x801ECE1C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ECE20: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801ECE24: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x801ECE28: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ECE2C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x801ECE30: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x801ECE34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801ECE38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801ECE3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801ECE40: jr          $ra
    // 0x801ECE44: nop

    TRACE_RETURN()
    return;
    // 0x801ECE44: nop

;}
RECOMP_FUNC void func_802092F4_6346D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802092F4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802092F8: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x802092FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80209300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80209304: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80209308: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8020930C: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80209310: addiu       $t9, $zero, 0x136
    ctx->r25 = ADD32(0, 0X136);
    // 0x80209314: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x80209318: sb          $t6, 0x2C0($v1)
    MEM_B(0X2C0, ctx->r3) = ctx->r14;
    // 0x8020931C: sb          $zero, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = 0;
    // 0x80209320: sb          $zero, 0x2C2($v1)
    MEM_B(0X2C2, ctx->r3) = 0;
    // 0x80209324: sb          $zero, 0x2C3($v1)
    MEM_B(0X2C3, ctx->r3) = 0;
    // 0x80209328: sw          $t7, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->r15;
    // 0x8020932C: sw          $t8, 0x1F0($v1)
    MEM_W(0X1F0, ctx->r3) = ctx->r24;
    // 0x80209330: sw          $t9, 0x1F4($v1)
    MEM_W(0X1F4, ctx->r3) = ctx->r25;
    // 0x80209334: sw          $t0, 0x1F8($v1)
    MEM_W(0X1F8, ctx->r3) = ctx->r8;
    // 0x80209338: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    // 0x8020933C: jal         0x80038BC8
    // 0x80209340: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x80209340: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80209344: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80209348: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x8020934C: jal         0x80034EF8
    // 0x80209350: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x80209350: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    after_1:
    // 0x80209354: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80209358: addiu       $a0, $a0, -0x6C6C
    ctx->r4 = ADD32(ctx->r4, -0X6C6C);
    // 0x8020935C: jal         0x80034DD8
    // 0x80209360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x80209360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80209364: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80209368: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x8020936C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80209370: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80209374: sw          $zero, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = 0;
    // 0x80209378: addiu       $a1, $a1, -0x4444
    ctx->r5 = ADD32(ctx->r5, -0X4444);
    // 0x8020937C: jal         0x8003522C
    // 0x80209380: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x80209380: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    after_3:
    // 0x80209384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80209388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020938C: jr          $ra
    // 0x80209390: nop

    TRACE_RETURN()
    return;
    // 0x80209390: nop

;}
RECOMP_FUNC void func_801F0CF8_61C0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0CF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0CFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F0D00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F0D04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0D08: lui         $a1, 0xBDCC
    ctx->r5 = S32(0XBDCC << 16);
    // 0x801F0D0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F0D10: jal         0x801D6508
    // 0x801F0D14: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6508_6018E8(rdram, ctx);
        goto after_0;
    // 0x801F0D14: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x801F0D18: jal         0x801D6124
    // 0x801F0D1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D6124_601504(rdram, ctx);
        goto after_1;
    // 0x801F0D1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801F0D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0D24: jal         0x801D2F40
    // 0x801F0D28: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801F0D28: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_2:
    // 0x801F0D2C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F0D30: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801F0D34: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F0D38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F0D3C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F0D40: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x801F0D44: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801F0D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0D4C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x801F0D50: bc1f        L_801F0D64
    if (!c1cs) {
        // 0x801F0D54: nop
    
            goto L_801F0D64;
    }
    // 0x801F0D54: nop

    // 0x801F0D58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F0D5C: nop

    // 0x801F0D60: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
L_801F0D64:
    // 0x801F0D64: jal         0x801D3118
    // 0x801F0D68: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_3;
    // 0x801F0D68: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_3:
    // 0x801F0D6C: beq         $v0, $zero, L_801F0DB0
    if (ctx->r2 == 0) {
        // 0x801F0D70: addiu       $a0, $zero, 0x283
        ctx->r4 = ADD32(0, 0X283);
            goto L_801F0DB0;
    }
    // 0x801F0D70: addiu       $a0, $zero, 0x283
    ctx->r4 = ADD32(0, 0X283);
    // 0x801F0D74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F0D78: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F0D7C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F0D80: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F0D84: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F0D88: jal         0x8000F3D8
    // 0x801F0D8C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801F0D8C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x801F0D90: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801F0D94: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x801F0D98: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801F0D9C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F0DA0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F0DA4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F0DA8: jal         0x801F74E4
    // 0x801F0DAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_5;
    // 0x801F0DAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
L_801F0DB0:
    // 0x801F0DB0: jal         0x801F7168
    // 0x801F0DB4: nop

    func_801F7168_622548(rdram, ctx);
        goto after_6;
    // 0x801F0DB4: nop

    after_6:
    // 0x801F0DB8: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x801F0DBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F0DC0: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F0DC4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F0DC8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0DCC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801F0DD0: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801F0DD4: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801F0DD8: nop

    // 0x801F0DDC: bc1fl       L_801F0DF0
    if (!c1cs) {
        // 0x801F0DE0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F0DF0;
    }
    goto skip_0;
    // 0x801F0DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F0DE4: jal         0x8003521C
    // 0x801F0DE8: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, 0XE00);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F0DE8: addiu       $a0, $a0, 0xE00
    ctx->r4 = ADD32(ctx->r4, 0XE00);
    after_7:
    // 0x801F0DEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F0DF0:
    // 0x801F0DF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F0DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F0DF8: jr          $ra
    // 0x801F0DFC: nop

    TRACE_RETURN()
    return;
    // 0x801F0DFC: nop

;}
RECOMP_FUNC void func_801DC374_607754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC374: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801DC378: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DC37C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DC380: addiu       $t7, $t7, -0x616C
    ctx->r15 = ADD32(ctx->r15, -0X616C);
    // 0x801DC384: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DC388: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DC38C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x801DC390: addiu       $t0, $t7, 0x24
    ctx->r8 = ADD32(ctx->r15, 0X24);
    // 0x801DC394: addiu       $t6, $sp, 0x5C
    ctx->r14 = ADD32(ctx->r29, 0X5C);
L_801DC398:
    // 0x801DC398: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801DC39C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801DC3A0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801DC3A4: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801DC3A8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801DC3AC: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801DC3B0: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801DC3B4: bne         $t7, $t0, L_801DC398
    if (ctx->r15 != ctx->r8) {
        // 0x801DC3B8: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801DC398;
    }
    // 0x801DC3B8: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801DC3BC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801DC3C0: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801DC3C4: addiu       $t2, $t2, -0x6144
    ctx->r10 = ADD32(ctx->r10, -0X6144);
    // 0x801DC3C8: addiu       $t5, $t2, 0x24
    ctx->r13 = ADD32(ctx->r10, 0X24);
    // 0x801DC3CC: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x801DC3D0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
L_801DC3D4:
    // 0x801DC3D4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801DC3D8: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x801DC3DC: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x801DC3E0: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x801DC3E4: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x801DC3E8: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x801DC3EC: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x801DC3F0: bne         $t2, $t5, L_801DC3D4
    if (ctx->r10 != ctx->r13) {
        // 0x801DC3F4: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_801DC3D4;
    }
    // 0x801DC3F4: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x801DC3F8: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801DC3FC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DC400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DC404: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801DC408: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DC40C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DC410: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x801DC414: addiu       $t9, $v0, 0x140
    ctx->r25 = ADD32(ctx->r2, 0X140);
    // 0x801DC418: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
    // 0x801DC41C: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x801DC420: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
    // 0x801DC424: beql        $v1, $zero, L_801DC44C
    if (ctx->r3 == 0) {
        // 0x801DC428: lw          $t8, 0xA4($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XA4);
            goto L_801DC44C;
    }
    goto skip_0;
    // 0x801DC428: lw          $t8, 0xA4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XA4);
    skip_0:
    // 0x801DC42C: beq         $v1, $at, L_801DC478
    if (ctx->r3 == ctx->r1) {
        // 0x801DC430: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DC478;
    }
    // 0x801DC430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DC434: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x801DC438: beql        $v1, $at, L_801DC4B0
    if (ctx->r3 == ctx->r1) {
        // 0x801DC43C: lw          $t4, 0x98($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X98);
            goto L_801DC4B0;
    }
    goto skip_1;
    // 0x801DC43C: lw          $t4, 0x98($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X98);
    skip_1:
    // 0x801DC440: b           L_801DC4CC
    // 0x801DC444: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
        goto L_801DC4CC;
    // 0x801DC444: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x801DC448: lw          $t8, 0xA4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XA4);
L_801DC44C:
    // 0x801DC44C: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x801DC450: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801DC454: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DC458: lw          $t0, 0xA8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XA8);
    // 0x801DC45C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801DC460: jal         0x801DC584
    // 0x801DC464: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_801DC584_607964(rdram, ctx);
        goto after_0;
    // 0x801DC464: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801DC468: jal         0x80038BC8
    // 0x801DC46C: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801DC46C: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    after_1:
    // 0x801DC470: b           L_801DC4C8
    // 0x801DC474: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
        goto L_801DC4C8;
    // 0x801DC474: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
L_801DC478:
    // 0x801DC478: lw          $t7, 0xA4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA4);
    // 0x801DC47C: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x801DC480: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801DC484: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801DC488: lw          $t6, 0xA8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA8);
    // 0x801DC48C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801DC490: addiu       $a2, $zero, -0x32
    ctx->r6 = ADD32(0, -0X32);
    // 0x801DC494: jal         0x801DC584
    // 0x801DC498: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_801DC584_607964(rdram, ctx);
        goto after_2;
    // 0x801DC498: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_2:
    // 0x801DC49C: jal         0x80038BC8
    // 0x801DC4A0: addiu       $a0, $zero, 0x22A
    ctx->r4 = ADD32(0, 0X22A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801DC4A0: addiu       $a0, $zero, 0x22A
    ctx->r4 = ADD32(0, 0X22A);
    after_3:
    // 0x801DC4A4: b           L_801DC4C8
    // 0x801DC4A8: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
        goto L_801DC4C8;
    // 0x801DC4A8: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
    // 0x801DC4AC: lw          $t4, 0x98($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X98);
L_801DC4B0:
    // 0x801DC4B0: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x801DC4B4: sltiu       $at, $t3, 0x7
    ctx->r1 = ctx->r11 < 0X7 ? 1 : 0;
    // 0x801DC4B8: bne         $at, $zero, L_801DC4C4
    if (ctx->r1 != 0) {
        // 0x801DC4BC: sw          $t3, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r11;
            goto L_801DC4C4;
    }
    // 0x801DC4BC: sw          $t3, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r11;
    // 0x801DC4C0: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
L_801DC4C4:
    // 0x801DC4C4: lw          $v1, 0x94($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X94);
L_801DC4C8:
    // 0x801DC4C8: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
L_801DC4CC:
    // 0x801DC4CC: sltiu       $at, $t2, 0xA
    ctx->r1 = ctx->r10 < 0XA ? 1 : 0;
    // 0x801DC4D0: sw          $t2, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r10;
    // 0x801DC4D4: bne         $at, $zero, L_801DC4E4
    if (ctx->r1 != 0) {
        // 0x801DC4D8: or          $v1, $t2, $zero
        ctx->r3 = ctx->r10 | 0;
            goto L_801DC4E4;
    }
    // 0x801DC4D8: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801DC4DC: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801DC4E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801DC4E4:
    // 0x801DC4E4: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x801DC4E8: addu        $t9, $sp, $t1
    ctx->r25 = ADD32(ctx->r29, ctx->r9);
    // 0x801DC4EC: lw          $a1, 0x5C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X5C);
    // 0x801DC4F0: jal         0x801DC8B4
    // 0x801DC4F4: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_801DC8B4_607C94(rdram, ctx);
        goto after_4;
    // 0x801DC4F4: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_4:
    // 0x801DC4F8: lw          $t8, 0x94($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X94);
    // 0x801DC4FC: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801DC500: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x801DC504: addu        $t7, $sp, $t0
    ctx->r15 = ADD32(ctx->r29, ctx->r8);
    // 0x801DC508: jal         0x801DC8B4
    // 0x801DC50C: lw          $a1, 0x34($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X34);
    func_801DC8B4_607C94(rdram, ctx);
        goto after_5;
    // 0x801DC50C: lw          $a1, 0x34($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X34);
    after_5:
    // 0x801DC510: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x801DC514: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801DC518: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x801DC51C: bne         $v0, $at, L_801DC530
    if (ctx->r2 != ctx->r1) {
        // 0x801DC520: addiu       $a0, $zero, 0x32
        ctx->r4 = ADD32(0, 0X32);
            goto L_801DC530;
    }
    // 0x801DC520: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x801DC524: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x801DC528: sb          $t6, 0x2($t4)
    MEM_B(0X2, ctx->r12) = ctx->r14;
    // 0x801DC52C: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
L_801DC530:
    // 0x801DC530: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x801DC534: bne         $t3, $zero, L_801DC570
    if (ctx->r11 != 0) {
        // 0x801DC538: sw          $t3, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r11;
            goto L_801DC570;
    }
    // 0x801DC538: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
    // 0x801DC53C: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x801DC540: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801DC544: jal         0x801DC8B4
    // 0x801DC548: sb          $zero, 0xF($t2)
    MEM_B(0XF, ctx->r10) = 0;
    func_801DC8B4_607C94(rdram, ctx);
        goto after_6;
    // 0x801DC548: sb          $zero, 0xF($t2)
    MEM_B(0XF, ctx->r10) = 0;
    after_6:
    // 0x801DC54C: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801DC550: jal         0x801DC8B4
    // 0x801DC554: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801DC8B4_607C94(rdram, ctx);
        goto after_7;
    // 0x801DC554: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x801DC558: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x801DC55C: sh          $zero, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = 0;
    // 0x801DC560: jal         0x80034EF8
    // 0x801DC564: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_8;
    // 0x801DC564: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_8:
    // 0x801DC568: jal         0x80035020
    // 0x801DC56C: nop

    func_80035020_35C20(rdram, ctx);
        goto after_9;
    // 0x801DC56C: nop

    after_9:
L_801DC570:
    // 0x801DC570: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DC574: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DC578: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x801DC57C: jr          $ra
    // 0x801DC580: nop

    TRACE_RETURN()
    return;
    // 0x801DC580: nop

;}
RECOMP_FUNC void func_801DB200_6065E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB200: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DB204: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DB208: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x801DB20C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DB210: addiu       $t6, $v0, 0x178
    ctx->r14 = ADD32(ctx->r2, 0X178);
    // 0x801DB214: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801DB218: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801DB21C: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x801DB220: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x801DB224: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DB228: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DB22C: jal         0x801D60E4
    // 0x801DB230: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_0;
    // 0x801DB230: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    after_0:
    // 0x801DB234: lui         $a1, 0xBB83
    ctx->r5 = S32(0XBB83 << 16);
    // 0x801DB238: ori         $a1, $a1, 0x126F
    ctx->r5 = ctx->r5 | 0X126F;
    // 0x801DB23C: jal         0x801D6508
    // 0x801DB240: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801DB240: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801DB244: jal         0x801D365C
    // 0x801DB248: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_2;
    // 0x801DB248: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801DB24C: beq         $v0, $zero, L_801DB358
    if (ctx->r2 == 0) {
        // 0x801DB250: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801DB358;
    }
    // 0x801DB250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801DB254: lw          $v1, 0x64($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X64);
    // 0x801DB258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB25C: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x801DB260: beq         $t8, $zero, L_801DB278
    if (ctx->r24 == 0) {
        // 0x801DB264: andi        $t9, $v1, 0x40
        ctx->r25 = ctx->r3 & 0X40;
            goto L_801DB278;
    }
    // 0x801DB264: andi        $t9, $v1, 0x40
    ctx->r25 = ctx->r3 & 0X40;
    // 0x801DB268: jal         0x801DB604
    // 0x801DB26C: sb          $zero, 0x30($s1)
    MEM_B(0X30, ctx->r17) = 0;
    func_801DB604_6069E4(rdram, ctx);
        goto after_3;
    // 0x801DB26C: sb          $zero, 0x30($s1)
    MEM_B(0X30, ctx->r17) = 0;
    after_3:
    // 0x801DB270: b           L_801DB5A0
    // 0x801DB274: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DB5A0;
    // 0x801DB274: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DB278:
    // 0x801DB278: beq         $t9, $zero, L_801DB348
    if (ctx->r25 == 0) {
        // 0x801DB27C: lui         $a0, 0x801E
        ctx->r4 = S32(0X801E << 16);
            goto L_801DB348;
    }
    // 0x801DB27C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB280: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB284: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DB288: sb          $zero, 0x30($s1)
    MEM_B(0X30, ctx->r17) = 0;
    // 0x801DB28C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DB290: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB294: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DB298: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DB29C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801DB2A0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DB2A4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801DB2A8: sub.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x801DB2AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB2B0: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x801DB2B4: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x801DB2B8: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801DB2BC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801DB2C0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x801DB2C4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801DB2C8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801DB2CC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801DB2D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB2D4: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DB2D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB2DC: jal         0x801E1E24
    // 0x801DB2E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_4;
    // 0x801DB2E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x801DB2E4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DB2E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DB2EC: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DB2F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB2F4: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DB2F8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801DB2FC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801DB300: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801DB304: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB308: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB30C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DB310: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB314: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801DB318: jal         0x801E1B30
    // 0x801DB31C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_5;
    // 0x801DB31C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x801DB320: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DB324: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801DB328: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801DB32C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801DB330: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801DB334: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801DB338: jal         0x8000F3D8
    // 0x801DB33C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_6;
    // 0x801DB33C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_6:
    // 0x801DB340: b           L_801DB5A0
    // 0x801DB344: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DB5A0;
    // 0x801DB344: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DB348:
    // 0x801DB348: jal         0x8003521C
    // 0x801DB34C: addiu       $a0, $a0, -0x4A50
    ctx->r4 = ADD32(ctx->r4, -0X4A50);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801DB34C: addiu       $a0, $a0, -0x4A50
    ctx->r4 = ADD32(ctx->r4, -0X4A50);
    after_7:
    // 0x801DB350: b           L_801DB5A0
    // 0x801DB354: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DB5A0;
    // 0x801DB354: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DB358:
    // 0x801DB358: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB35C: jal         0x8000ED00
    // 0x801DB360: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    func_8000ED00_F900(rdram, ctx);
        goto after_8;
    // 0x801DB360: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    after_8:
    // 0x801DB364: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DB368: lwc1        $f10, -0x26A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X26A0);
    // 0x801DB36C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801DB370: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x801DB374: nop

    // 0x801DB378: bc1f        L_801DB390
    if (!c1cs) {
        // 0x801DB37C: nop
    
            goto L_801DB390;
    }
    // 0x801DB37C: nop

    // 0x801DB380: jal         0x80034ED4
    // 0x801DB384: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_9;
    // 0x801DB384: nop

    after_9:
    // 0x801DB388: b           L_801DB5A0
    // 0x801DB38C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DB5A0;
    // 0x801DB38C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DB390:
    // 0x801DB390: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801DB394: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801DB398: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DB39C: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x801DB3A0: lhu         $v0, -0x520C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X520C);
    // 0x801DB3A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB3A8: beq         $v0, $at, L_801DB4D0
    if (ctx->r2 == ctx->r1) {
        // 0x801DB3AC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_801DB4D0;
    }
    // 0x801DB3AC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801DB3B0: beq         $v0, $at, L_801DB4D0
    if (ctx->r2 == ctx->r1) {
        // 0x801DB3B4: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_801DB4D0;
    }
    // 0x801DB3B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801DB3B8: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x801DB3BC: sh          $zero, 0x84($sp)
    MEM_H(0X84, ctx->r29) = 0;
    // 0x801DB3C0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801DB3C4: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    // 0x801DB3C8: jal         0x801D4188
    // 0x801DB3CC: lw          $a1, 0x20($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X20);
    func_801D4188_5FF568(rdram, ctx);
        goto after_10;
    // 0x801DB3CC: lw          $a1, 0x20($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X20);
    after_10:
    // 0x801DB3D0: lh          $t5, 0x84($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X84);
    // 0x801DB3D4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801DB3D8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801DB3DC: beq         $t5, $at, L_801DB418
    if (ctx->r13 == ctx->r1) {
        // 0x801DB3E0: lw          $t6, 0xA4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XA4);
            goto L_801DB418;
    }
    // 0x801DB3E0: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x801DB3E4: lw          $a1, 0x24($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X24);
    // 0x801DB3E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801DB3EC: jal         0x801D4188
    // 0x801DB3F0: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    func_801D4188_5FF568(rdram, ctx);
        goto after_11;
    // 0x801DB3F0: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    after_11:
    // 0x801DB3F4: lh          $t7, 0x84($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X84);
    // 0x801DB3F8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801DB3FC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801DB400: beq         $t7, $at, L_801DB418
    if (ctx->r15 == ctx->r1) {
        // 0x801DB404: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_801DB418;
    }
    // 0x801DB404: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x801DB408: lw          $a1, 0x28($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X28);
    // 0x801DB40C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801DB410: jal         0x801D4188
    // 0x801DB414: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    func_801D4188_5FF568(rdram, ctx);
        goto after_12;
    // 0x801DB414: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    after_12:
L_801DB418:
    // 0x801DB418: lh          $t9, 0x84($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X84);
    // 0x801DB41C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801DB420: bnel        $t9, $at, L_801DB5A0
    if (ctx->r25 != ctx->r1) {
        // 0x801DB424: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801DB5A0;
    }
    goto skip_0;
    // 0x801DB424: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x801DB428: jal         0x801D36C4
    // 0x801DB42C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_13;
    // 0x801DB42C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x801DB430: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB434: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DB438: sb          $zero, 0x30($s1)
    MEM_B(0X30, ctx->r17) = 0;
    // 0x801DB43C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DB440: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DB444: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DB448: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB44C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DB450: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801DB454: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801DB458: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801DB45C: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x801DB460: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DB464: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB468: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801DB46C: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801DB470: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801DB474: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x801DB478: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801DB47C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x801DB480: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801DB484: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801DB488: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801DB48C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB490: jal         0x801E1E24
    // 0x801DB494: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_14;
    // 0x801DB494: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x801DB498: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DB49C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DB4A0: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DB4A4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DB4A8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801DB4AC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801DB4B0: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801DB4B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB4B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DB4BC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801DB4C0: jal         0x801E25C4
    // 0x801DB4C4: nop

    func_801E25C4_60D9A4(rdram, ctx);
        goto after_15;
    // 0x801DB4C4: nop

    after_15:
    // 0x801DB4C8: b           L_801DB5A0
    // 0x801DB4CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DB5A0;
    // 0x801DB4CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DB4D0:
    // 0x801DB4D0: jal         0x801D4338
    // 0x801DB4D4: lui         $a1, 0xC0A0
    ctx->r5 = S32(0XC0A0 << 16);
    func_801D4338_5FF718(rdram, ctx);
        goto after_16;
    // 0x801DB4D4: lui         $a1, 0xC0A0
    ctx->r5 = S32(0XC0A0 << 16);
    after_16:
    // 0x801DB4D8: beq         $v0, $zero, L_801DB59C
    if (ctx->r2 == 0) {
        // 0x801DB4DC: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801DB59C;
    }
    // 0x801DB4DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB4E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DB4E4: sb          $zero, 0x30($s1)
    MEM_B(0X30, ctx->r17) = 0;
    // 0x801DB4E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DB4EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DB4F0: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DB4F4: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DB4F8: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801DB4FC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801DB500: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801DB504: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x801DB508: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB50C: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801DB510: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x801DB514: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801DB518: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801DB51C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801DB520: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x801DB524: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801DB528: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801DB52C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB530: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DB534: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB538: jal         0x801E1E24
    // 0x801DB53C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_17;
    // 0x801DB53C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_17:
    // 0x801DB540: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DB544: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB548: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801DB54C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB550: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DB554: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DB558: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801DB55C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801DB560: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB564: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB568: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DB56C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB570: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801DB574: jal         0x801E1B30
    // 0x801DB578: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_18;
    // 0x801DB578: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_18:
    // 0x801DB57C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DB580: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801DB584: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801DB588: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801DB58C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801DB590: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801DB594: jal         0x8000F3D8
    // 0x801DB598: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_19;
    // 0x801DB598: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_19:
L_801DB59C:
    // 0x801DB59C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DB5A0:
    // 0x801DB5A0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801DB5A4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801DB5A8: jr          $ra
    // 0x801DB5AC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x801DB5AC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80209394_634774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80209394: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80209398: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x8020939C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802093A0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802093A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802093A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802093AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802093B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802093B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802093B8: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x802093BC: lw          $a3, 0x14($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X14);
    // 0x802093C0: swc1        $f14, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f14.u32l;
    // 0x802093C4: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x802093C8: swc1        $f14, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f14.u32l;
    // 0x802093CC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802093D0: jal         0x801D4EB8
    // 0x802093D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D4EB8_600298(rdram, ctx);
        goto after_0;
    // 0x802093D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802093D8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802093DC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802093E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802093E4: lhu         $a0, 0x1A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X1A);
    // 0x802093E8: slti        $at, $a0, 0x1380
    ctx->r1 = SIGNED(ctx->r4) < 0X1380 ? 1 : 0;
    // 0x802093EC: beq         $at, $zero, L_80209410
    if (ctx->r1 == 0) {
        // 0x802093F0: addiu       $t6, $a0, 0xA
        ctx->r14 = ADD32(ctx->r4, 0XA);
            goto L_80209410;
    }
    // 0x802093F0: addiu       $t6, $a0, 0xA
    ctx->r14 = ADD32(ctx->r4, 0XA);
    // 0x802093F4: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x802093F8: slti        $at, $a0, 0x1380
    ctx->r1 = SIGNED(ctx->r4) < 0X1380 ? 1 : 0;
    // 0x802093FC: bne         $at, $zero, L_80209410
    if (ctx->r1 != 0) {
        // 0x80209400: sh          $t6, 0x1A($v1)
        MEM_H(0X1A, ctx->r3) = ctx->r14;
            goto L_80209410;
    }
    // 0x80209400: sh          $t6, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r14;
    // 0x80209404: addiu       $t7, $zero, 0x1380
    ctx->r15 = ADD32(0, 0X1380);
    // 0x80209408: sh          $t7, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r15;
    // 0x8020940C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
L_80209410:
    // 0x80209410: slti        $at, $a0, 0x1381
    ctx->r1 = SIGNED(ctx->r4) < 0X1381 ? 1 : 0;
    // 0x80209414: bne         $at, $zero, L_80209434
    if (ctx->r1 != 0) {
        // 0x80209418: addiu       $t8, $a0, -0xA
        ctx->r24 = ADD32(ctx->r4, -0XA);
            goto L_80209434;
    }
    // 0x80209418: addiu       $t8, $a0, -0xA
    ctx->r24 = ADD32(ctx->r4, -0XA);
    // 0x8020941C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80209420: slti        $at, $t9, 0x1381
    ctx->r1 = SIGNED(ctx->r25) < 0X1381 ? 1 : 0;
    // 0x80209424: beq         $at, $zero, L_80209434
    if (ctx->r1 == 0) {
        // 0x80209428: sh          $t8, 0x1A($v1)
        MEM_H(0X1A, ctx->r3) = ctx->r24;
            goto L_80209434;
    }
    // 0x80209428: sh          $t8, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r24;
    // 0x8020942C: addiu       $t0, $zero, 0x1380
    ctx->r8 = ADD32(0, 0X1380);
    // 0x80209430: sh          $t0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r8;
L_80209434:
    // 0x80209434: beql        $v0, $zero, L_80209474
    if (ctx->r2 == 0) {
        // 0x80209438: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80209474;
    }
    goto skip_0;
    // 0x80209438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8020943C: lhu         $t1, 0x1A($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X1A);
    // 0x80209440: addiu       $at, $zero, 0x1380
    ctx->r1 = ADD32(0, 0X1380);
    // 0x80209444: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80209448: bne         $t1, $at, L_80209470
    if (ctx->r9 != ctx->r1) {
        // 0x8020944C: lui         $t3, 0x8021
        ctx->r11 = S32(0X8021 << 16);
            goto L_80209470;
    }
    // 0x8020944C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80209450: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x80209454: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x80209458: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020945C: sb          $t2, 0x2C1($t3)
    MEM_B(0X2C1, ctx->r11) = ctx->r10;
    // 0x80209460: sw          $t4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r12;
    // 0x80209464: swc1        $f14, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f14.u32l;
    // 0x80209468: jal         0x8003521C
    // 0x8020946C: addiu       $a0, $a0, -0x6B80
    ctx->r4 = ADD32(ctx->r4, -0X6B80);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x8020946C: addiu       $a0, $a0, -0x6B80
    ctx->r4 = ADD32(ctx->r4, -0X6B80);
    after_1:
L_80209470:
    // 0x80209470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80209474:
    // 0x80209474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80209478: jr          $ra
    // 0x8020947C: nop

    TRACE_RETURN()
    return;
    // 0x8020947C: nop

;}
RECOMP_FUNC void func_801DF798_60AB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF798: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DF79C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801DF7A0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801DF7A4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801DF7A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DF7AC: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x801DF7B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF7B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DF7B8: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x801DF7BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DF7C0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801DF7C4: lw          $t7, 0x94($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X94);
    // 0x801DF7C8: lw          $s2, 0x0($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X0);
    // 0x801DF7CC: lw          $a1, 0x70($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X70);
    // 0x801DF7D0: lw          $a3, 0x78($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X78);
    // 0x801DF7D4: lw          $a2, 0x74($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X74);
    // 0x801DF7D8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801DF7DC: jal         0x8000EE50
    // 0x801DF7E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000EE50_FA50(rdram, ctx);
        goto after_0;
    // 0x801DF7E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x801DF7E4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801DF7E8: addiu       $t9, $zero, 0x5B
    ctx->r25 = ADD32(0, 0X5B);
    // 0x801DF7EC: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x801DF7F0: sb          $t9, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r25;
    // 0x801DF7F4: jal         0x801D36C4
    // 0x801DF7F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_1;
    // 0x801DF7F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DF7FC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801DF800: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x801DF804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF808: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801DF80C: swc1        $f4, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f4.u32l;
    // 0x801DF810: lwc1        $f6, 0x24($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801DF814: swc1        $f6, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f6.u32l;
    // 0x801DF818: jal         0x801DEEB8
    // 0x801DF81C: lw          $a1, 0x9C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X9C);
    func_801DEEB8_60A298(rdram, ctx);
        goto after_2;
    // 0x801DF81C: lw          $a1, 0x9C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X9C);
    after_2:
    // 0x801DF820: beq         $s2, $zero, L_801DF850
    if (ctx->r18 == 0) {
        // 0x801DF824: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DF850;
    }
    // 0x801DF824: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF828: jal         0x8000DD04
    // 0x801DF82C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8000DD04_E904(rdram, ctx);
        goto after_3;
    // 0x801DF82C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x801DF830: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DF834: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF838: lwc1        $f8, 0x1C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801DF83C: lwc1        $f16, 0x24($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801DF840: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801DF844: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801DF848: swc1        $f10, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f10.u32l;
    // 0x801DF84C: swc1        $f18, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f18.u32l;
L_801DF850:
    // 0x801DF850: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801DF854: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DF858: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801DF85C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801DF860: jr          $ra
    // 0x801DF864: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801DF864: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801DBFB4_607394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBFB4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801DBFB8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DBFBC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801DBFC0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DBFC4: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801DBFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DBFCC: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801DBFD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DBFD4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801DBFD8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801DBFDC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801DBFE0: bne         $a1, $zero, L_801DBFF0
    if (ctx->r5 != 0) {
        // 0x801DBFE4: cvt.s.d     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
            goto L_801DBFF0;
    }
    // 0x801DBFE4: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801DBFE8: b           L_801DC058
    // 0x801DBFEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DC058;
    // 0x801DBFEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DBFF0:
    // 0x801DBFF0: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801DBFF4: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801DBFF8: lw          $a2, 0x10($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10);
    // 0x801DBFFC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DC000: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DC004: jal         0x8000EB50
    // 0x801DC008: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8000EB50_F750(rdram, ctx);
        goto after_0;
    // 0x801DC008: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801DC00C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801DC010: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC014: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801DC018: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x801DC01C: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801DC020: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801DC024: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DC028: swc1        $f10, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f10.u32l;
    // 0x801DC02C: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801DC030: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DC034: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DC038: swc1        $f16, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f16.u32l;
    // 0x801DC03C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801DC040: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801DC044: sw          $a0, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r4;
    // 0x801DC048: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x801DC04C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x801DC050: swc1        $f18, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->f18.u32l;
    // 0x801DC054: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
L_801DC058:
    // 0x801DC058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC05C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DC060: jr          $ra
    // 0x801DC064: nop

    TRACE_RETURN()
    return;
    // 0x801DC064: nop

;}
RECOMP_FUNC void func_801D6B8C_601F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6B8C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6B90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6B98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6B9C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D6BA0: jal         0x801D6CB0
    // 0x801D6BA4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_801D6CB0_602090(rdram, ctx);
        goto after_0;
    // 0x801D6BA4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x801D6BA8: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x801D6BAC: jal         0x801D606C
    // 0x801D6BB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D606C_60144C(rdram, ctx);
        goto after_1;
    // 0x801D6BB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D6BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6BB8: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x801D6BBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D6BC0: jr          $ra
    // 0x801D6BC4: nop

    TRACE_RETURN()
    return;
    // 0x801D6BC4: nop

;}
RECOMP_FUNC void func_801D3100_5FE4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3100: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D3104: beq         $a0, $zero, L_801D3110
    if (ctx->r4 == 0) {
        // 0x801D3108: nop
    
            goto L_801D3110;
    }
    // 0x801D3108: nop

    // 0x801D310C: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
L_801D3110:
    // 0x801D3110: jr          $ra
    // 0x801D3114: nop

    TRACE_RETURN()
    return;
    // 0x801D3114: nop

;}
RECOMP_FUNC void func_80207A6C_632E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207A70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80207A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207A78: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207A7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80207A80: jal         0x8003521C
    // 0x80207A84: addiu       $a0, $a0, 0x7AA8
    ctx->r4 = ADD32(ctx->r4, 0X7AA8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80207A84: addiu       $a0, $a0, 0x7AA8
    ctx->r4 = ADD32(ctx->r4, 0X7AA8);
    after_0:
    // 0x80207A88: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80207A8C: addiu       $a0, $a0, -0x6948
    ctx->r4 = ADD32(ctx->r4, -0X6948);
    // 0x80207A90: jal         0x80034DD8
    // 0x80207A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x80207A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80207A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207AA0: jr          $ra
    // 0x80207AA4: nop

    TRACE_RETURN()
    return;
    // 0x80207AA4: nop

;}
RECOMP_FUNC void func_801E7AA8_612E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7AA8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801E7AAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E7AB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E7AB4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801E7AB8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801E7ABC: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x801E7AC0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E7AC4: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801E7AC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7ACC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801E7AD0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801E7AD4: nop

    // 0x801E7AD8: bc1fl       L_801E7AEC
    if (!c1cs) {
        // 0x801E7ADC: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_801E7AEC;
    }
    goto skip_0;
    // 0x801E7ADC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x801E7AE0: b           L_801E7AEC
    // 0x801E7AE4: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_801E7AEC;
    // 0x801E7AE4: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x801E7AE8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_801E7AEC:
    // 0x801E7AEC: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E7AF0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801E7AF4: nop

    // 0x801E7AF8: bc1fl       L_801E7B0C
    if (!c1cs) {
        // 0x801E7AFC: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_801E7B0C;
    }
    goto skip_1;
    // 0x801E7AFC: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_1:
    // 0x801E7B00: b           L_801E7B0C
    // 0x801E7B04: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
        goto L_801E7B0C;
    // 0x801E7B04: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x801E7B08: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_801E7B0C:
    // 0x801E7B0C: lwc1        $f2, 0x78($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7B10: add.s       $f6, $f16, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x801E7B14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E7B18: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x801E7B1C: nop

    // 0x801E7B20: bc1fl       L_801E7B34
    if (!c1cs) {
        // 0x801E7B24: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_801E7B34;
    }
    goto skip_2;
    // 0x801E7B24: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_2:
    // 0x801E7B28: b           L_801E7B34
    // 0x801E7B2C: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
        goto L_801E7B34;
    // 0x801E7B2C: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x801E7B30: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_801E7B34:
    // 0x801E7B34: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x801E7B38: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x801E7B3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E7B40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E7B44: c.eq.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d == ctx->f10.d;
    // 0x801E7B48: nop

    // 0x801E7B4C: bc1fl       L_801E7B64
    if (!c1cs) {
        // 0x801E7B50: swc1        $f0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
            goto L_801E7B64;
    }
    goto skip_3;
    // 0x801E7B50: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    skip_3:
    // 0x801E7B54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E7B58: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E7B5C: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801E7B60: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
L_801E7B64:
    // 0x801E7B64: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801E7B68: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x801E7B6C: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801E7B70: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E7B74: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x801E7B78: jal         0x8001D394
    // 0x801E7B7C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801E7B7C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801E7B80: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x801E7B84: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E7B88: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E7B8C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E7B90: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x801E7B94: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801E7B98: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801E7B9C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x801E7BA0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801E7BA4: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E7BA8: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E7BAC: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801E7BB0: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801E7BB4: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E7BB8: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801E7BBC: jal         0x8001D898
    // 0x801E7BC0: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_1;
    // 0x801E7BC0: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801E7BC4: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E7BC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E7BCC: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x801E7BD0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7BD4: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x801E7BD8: nop

    // 0x801E7BDC: bc1fl       L_801E7BF0
    if (!c1cs) {
        // 0x801E7BE0: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_801E7BF0;
    }
    goto skip_4;
    // 0x801E7BE0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_4:
    // 0x801E7BE4: b           L_801E7BF0
    // 0x801E7BE8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_801E7BF0;
    // 0x801E7BE8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x801E7BEC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_801E7BF0:
    // 0x801E7BF0: ldc1        $f8, -0x1EF8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1EF8);
    // 0x801E7BF4: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x801E7BF8: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E7BFC: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801E7C00: nop

    // 0x801E7C04: bc1tl       L_801E7C40
    if (c1cs) {
        // 0x801E7C08: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E7C40;
    }
    goto skip_5;
    // 0x801E7C08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x801E7C0C: jal         0x800040A8
    // 0x801E7C10: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_2;
    // 0x801E7C10: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_2:
    // 0x801E7C14: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x801E7C18: sh          $v0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r2;
    // 0x801E7C1C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x801E7C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E7C24: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801E7C28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E7C2C: jal         0x8001DB04
    // 0x801E7C30: addiu       $a0, $v1, 0x14
    ctx->r4 = ADD32(ctx->r3, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801E7C30: addiu       $a0, $v1, 0x14
    ctx->r4 = ADD32(ctx->r3, 0X14);
    after_3:
    // 0x801E7C34: lhu         $t6, 0x62($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X62);
    // 0x801E7C38: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
    // 0x801E7C3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E7C40:
    // 0x801E7C40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E7C44: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801E7C48: jr          $ra
    // 0x801E7C4C: nop

    TRACE_RETURN()
    return;
    // 0x801E7C4C: nop

;}
RECOMP_FUNC void func_80206894_631C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206894: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80206898: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8020689C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802068A0: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x802068A4: addiu       $a2, $a2, 0xE9C
    ctx->r6 = ADD32(ctx->r6, 0XE9C);
    // 0x802068A8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802068AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802068B0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802068B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802068B8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802068BC: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802068C0: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x802068C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802068C8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802068CC: addiu       $a3, $a3, -0x5830
    ctx->r7 = ADD32(ctx->r7, -0X5830);
    // 0x802068D0: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x802068D4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x802068D8: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x802068DC: addiu       $a1, $a1, 0x6984
    ctx->r5 = ADD32(ctx->r5, 0X6984);
    // 0x802068E0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802068E4: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x802068E8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802068EC: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x802068F0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x802068F4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802068F8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802068FC: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80206900: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80206904: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80206908: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8020690C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80206910: jal         0x800358E8
    // 0x80206914: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80206914: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80206918: beq         $v0, $zero, L_80206974
    if (ctx->r2 == 0) {
        // 0x8020691C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80206974;
    }
    // 0x8020691C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80206920: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x80206924: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80206928: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8020692C: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x80206930: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80206934: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80206938: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x8020693C: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80206940: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x80206944: addiu       $t6, $zero, -0x28
    ctx->r14 = ADD32(0, -0X28);
    // 0x80206948: sb          $t1, 0x30($v1)
    MEM_B(0X30, ctx->r3) = ctx->r9;
    // 0x8020694C: sw          $t2, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r10;
    // 0x80206950: sb          $t3, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r11;
    // 0x80206954: sh          $a1, 0x4E($v1)
    MEM_H(0X4E, ctx->r3) = ctx->r5;
    // 0x80206958: sh          $t4, 0x50($v1)
    MEM_H(0X50, ctx->r3) = ctx->r12;
    // 0x8020695C: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x80206960: sh          $a1, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r5;
    // 0x80206964: sh          $t5, 0x3E($v1)
    MEM_H(0X3E, ctx->r3) = ctx->r13;
    // 0x80206968: sh          $t6, 0x40($v1)
    MEM_H(0X40, ctx->r3) = ctx->r14;
    // 0x8020696C: jal         0x80038BC8
    // 0x80206970: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80206970: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_1:
L_80206974:
    // 0x80206974: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80206978: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8020697C: jr          $ra
    // 0x80206980: nop

    TRACE_RETURN()
    return;
    // 0x80206980: nop

;}
RECOMP_FUNC void func_80206AA4_631E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206AA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80206AA8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80206AAC: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x80206AB0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80206AB4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80206AB8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80206ABC: lbu         $t7, 0x817($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X817);
    // 0x80206AC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80206AC4: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80206AC8: beq         $t7, $zero, L_80206AF0
    if (ctx->r15 == 0) {
        // 0x80206ACC: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_80206AF0;
    }
    // 0x80206ACC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80206AD0: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x80206AD4: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x80206AD8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80206ADC: slti        $at, $t9, 0xC8
    ctx->r1 = SIGNED(ctx->r25) < 0XC8 ? 1 : 0;
    // 0x80206AE0: bne         $at, $zero, L_80206B08
    if (ctx->r1 != 0) {
        // 0x80206AE4: sw          $t9, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r25;
            goto L_80206B08;
    }
    // 0x80206AE4: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x80206AE8: b           L_80206B08
    // 0x80206AEC: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
        goto L_80206B08;
    // 0x80206AEC: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
L_80206AF0:
    // 0x80206AF0: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x80206AF4: beq         $v0, $zero, L_80206B08
    if (ctx->r2 == 0) {
        // 0x80206AF8: addiu       $t2, $v0, -0x2
        ctx->r10 = ADD32(ctx->r2, -0X2);
            goto L_80206B08;
    }
    // 0x80206AF8: addiu       $t2, $v0, -0x2
    ctx->r10 = ADD32(ctx->r2, -0X2);
    // 0x80206AFC: bgez        $t2, L_80206B08
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80206B00: sw          $t2, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r10;
            goto L_80206B08;
    }
    // 0x80206B00: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x80206B04: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
L_80206B08:
    // 0x80206B08: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x80206B0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80206B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206B14: lbu         $t5, 0x2C4($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2C4);
    // 0x80206B18: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80206B1C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80206B20: bne         $t5, $at, L_80206B2C
    if (ctx->r13 != ctx->r1) {
        // 0x80206B24: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_80206B2C;
    }
    // 0x80206B24: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80206B28: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
L_80206B2C:
    // 0x80206B2C: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x80206B30: addiu       $t6, $zero, 0xB2
    ctx->r14 = ADD32(0, 0XB2);
    // 0x80206B34: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80206B38: beq         $v0, $zero, L_80206BD8
    if (ctx->r2 == 0) {
        // 0x80206B3C: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_80206BD8;
    }
    // 0x80206B3C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80206B40: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80206B44: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80206B48: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80206B4C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80206B50: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80206B54: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80206B58: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80206B5C: jal         0x8000E030
    // 0x80206B60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8000E030_EC30(rdram, ctx);
        goto after_0;
    // 0x80206B60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x80206B64: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206B68: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80206B6C: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x80206B70: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80206B74: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80206B78: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    // 0x80206B7C: lw          $t4, 0x98($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X98);
    // 0x80206B80: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x80206B84: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x80206B88: sw          $t6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r14;
    // 0x80206B8C: jal         0x80003EA0
    // 0x80206B90: lhu         $a0, 0x9A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9A);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x80206B90: lhu         $a0, 0x9A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9A);
    after_1:
    // 0x80206B94: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80206B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80206B9C: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x80206BA0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80206BA4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80206BA8: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x80206BAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80206BB0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80206BB4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80206BB8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80206BBC: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x80206BC0: add.d       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f2.d + ctx->f8.d;
    // 0x80206BC4: sub.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d - ctx->f2.d;
    // 0x80206BC8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80206BCC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80206BD0: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x80206BD4: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
L_80206BD8:
    // 0x80206BD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80206BDC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80206BE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80206BE4: jr          $ra
    // 0x80206BE8: nop

    TRACE_RETURN()
    return;
    // 0x80206BE8: nop

;}
RECOMP_FUNC void func_801F3498_61E878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3498: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F349C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F34A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F34A4: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F34A8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801F34AC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F34B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F34B4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F34B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F34BC: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801F34C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F34C4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801F34C8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F34CC: swc1        $f16, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f16.u32l;
    // 0x801F34D0: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F34D4: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x801F34D8: nop

    // 0x801F34DC: bc1fl       L_801F351C
    if (!c1cs) {
        // 0x801F34E0: lhu         $t6, 0x16($a3)
        ctx->r14 = MEM_HU(ctx->r7, 0X16);
            goto L_801F351C;
    }
    goto skip_0;
    // 0x801F34E0: lhu         $t6, 0x16($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X16);
    skip_0:
    // 0x801F34E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F34E8: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801F34EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F34F0: swc1        $f4, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f4.u32l;
    // 0x801F34F4: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F34F8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801F34FC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801F3500: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801F3504: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801F3508: jal         0x801D3B18
    // 0x801F350C: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801F350C: nop

    after_0:
    // 0x801F3510: b           L_801F35C8
    // 0x801F3514: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
        goto L_801F35C8;
    // 0x801F3514: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801F3518: lhu         $t6, 0x16($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X16);
L_801F351C:
    // 0x801F351C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F3520: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x801F3524: bgez        $t6, L_801F3538
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801F3528: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_801F3538;
    }
    // 0x801F3528: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F352C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F3530: nop

    // 0x801F3534: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_801F3538:
    // 0x801F3538: add.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x801F353C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F3540: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F3544: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801F3548: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F354C: nop

    // 0x801F3550: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801F3554: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F3558: nop

    // 0x801F355C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F3560: beql        $t8, $zero, L_801F35B0
    if (ctx->r24 == 0) {
        // 0x801F3564: mfc1        $t8, $f8
        ctx->r24 = (int32_t)ctx->f8.u32l;
            goto L_801F35B0;
    }
    goto skip_1;
    // 0x801F3564: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x801F3568: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F356C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F3570: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801F3574: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F3578: nop

    // 0x801F357C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801F3580: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F3584: nop

    // 0x801F3588: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F358C: bne         $t8, $zero, L_801F35A4
    if (ctx->r24 != 0) {
        // 0x801F3590: nop
    
            goto L_801F35A4;
    }
    // 0x801F3590: nop

    // 0x801F3594: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x801F3598: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F359C: b           L_801F35BC
    // 0x801F35A0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801F35BC;
    // 0x801F35A0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801F35A4:
    // 0x801F35A4: b           L_801F35BC
    // 0x801F35A8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801F35BC;
    // 0x801F35A8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801F35AC: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
L_801F35B0:
    // 0x801F35B0: nop

    // 0x801F35B4: bltz        $t8, L_801F35A4
    if (SIGNED(ctx->r24) < 0) {
        // 0x801F35B8: nop
    
            goto L_801F35A4;
    }
    // 0x801F35B8: nop

L_801F35BC:
    // 0x801F35BC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801F35C0: sh          $t8, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r24;
    // 0x801F35C4: nop

L_801F35C8:
    // 0x801F35C8: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x801F35CC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F35D0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801F35D4: bgtz        $t0, L_801F3620
    if (SIGNED(ctx->r8) > 0) {
        // 0x801F35D8: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_801F3620;
    }
    // 0x801F35D8: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801F35DC: jal         0x801D2F40
    // 0x801F35E0: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F35E0: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    after_1:
    // 0x801F35E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F35E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F35EC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F35F0: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x801F35F4: nop

    // 0x801F35F8: bc1fl       L_801F3624
    if (!c1cs) {
        // 0x801F35FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F3624;
    }
    goto skip_2;
    // 0x801F35FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801F3600: jal         0x801D31CC
    // 0x801F3604: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F3604: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    after_2:
    // 0x801F3608: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x801F360C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3610: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x801F3614: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x801F3618: jal         0x8003521C
    // 0x801F361C: addiu       $a0, $a0, 0x3634
    ctx->r4 = ADD32(ctx->r4, 0X3634);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F361C: addiu       $a0, $a0, 0x3634
    ctx->r4 = ADD32(ctx->r4, 0X3634);
    after_3:
L_801F3620:
    // 0x801F3620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F3624:
    // 0x801F3624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F362C: jr          $ra
    // 0x801F3630: nop

    TRACE_RETURN()
    return;
    // 0x801F3630: nop

;}
RECOMP_FUNC void func_801DDAF8_608ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDAF8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801DDAFC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DDB00: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DDB04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801DDB08: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x801DDB0C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801DDB10: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801DDB14: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x801DDB18: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801DDB1C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DDB20: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x801DDB24: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x801DDB28: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x801DDB2C: lhu         $a1, 0x16($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X16);
    // 0x801DDB30: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801DDB34: addiu       $a1, $a1, -0x100
    ctx->r5 = ADD32(ctx->r5, -0X100);
    // 0x801DDB38: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801DDB3C: jal         0x8000E630
    // 0x801DDB40: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801DDB40: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x801DDB44: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801DDB48: addiu       $a2, $a2, -0x52A0
    ctx->r6 = ADD32(ctx->r6, -0X52A0);
    // 0x801DDB4C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DDB50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DDB54: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801DDB58: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DDB5C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801DDB60: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801DDB64: lui         $at, 0xC035
    ctx->r1 = S32(0XC035 << 16);
    // 0x801DDB68: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801DDB6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DDB70: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DDB74: lw          $a0, 0x1C8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C8);
    // 0x801DDB78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DDB7C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801DDB80: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801DDB84: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DDB88: ldc1        $f8, -0x2530($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2530);
    // 0x801DDB8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DDB90: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x801DDB94: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801DDB98: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801DDB9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DDBA0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DDBA4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DDBA8: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801DDBAC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DDBB0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801DDBB4: addiu       $t0, $zero, 0x4A8
    ctx->r8 = ADD32(0, 0X4A8);
    // 0x801DDBB8: addiu       $a3, $a3, -0x54E0
    ctx->r7 = ADD32(ctx->r7, -0X54E0);
    // 0x801DDBBC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801DDBC0: lhu         $t9, 0x16($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X16);
    // 0x801DDBC4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801DDBC8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x801DDBCC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801DDBD0: addiu       $a1, $a1, -0x2390
    ctx->r5 = ADD32(ctx->r5, -0X2390);
    // 0x801DDBD4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801DDBD8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801DDBDC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DDBE0: jal         0x800358E8
    // 0x801DDBE4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x801DDBE4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_1:
    // 0x801DDBE8: beq         $v0, $zero, L_801DDC5C
    if (ctx->r2 == 0) {
        // 0x801DDBEC: lw          $t1, 0x60($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X60);
            goto L_801DDC5C;
    }
    // 0x801DDBEC: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x801DDBF0: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x801DDBF4: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801DDBF8: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801DDBFC: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x801DDC00: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DDC04: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801DDC08: sw          $t3, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r11;
    // 0x801DDC0C: swc1        $f18, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f18.u32l;
    // 0x801DDC10: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x801DDC14: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x801DDC18: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801DDC1C: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x801DDC20: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x801DDC24: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801DDC28: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x801DDC2C: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x801DDC30: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x801DDC34: sw          $t6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r14;
    // 0x801DDC38: sb          $t7, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r15;
    // 0x801DDC3C: sh          $t8, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r24;
    // 0x801DDC40: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x801DDC44: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x801DDC48: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x801DDC4C: sw          $t5, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r13;
    // 0x801DDC50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DDC54: b           L_801DDC60
    // 0x801DDC58: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
        goto L_801DDC60;
    // 0x801DDC58: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
L_801DDC5C:
    // 0x801DDC5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DDC60:
    // 0x801DDC60: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801DDC64: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801DDC68: jr          $ra
    // 0x801DDC6C: nop

    TRACE_RETURN()
    return;
    // 0x801DDC6C: nop

;}
RECOMP_FUNC void func_801E8368_613748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E836C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801E8370: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E8374: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E8378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E837C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E8380: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x801E8384: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8388: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x801E838C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801E8390: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8394: jal         0x801D2EE4
    // 0x801E8398: addiu       $a1, $a1, -0x4E78
    ctx->r5 = ADD32(ctx->r5, -0X4E78);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_0;
    // 0x801E8398: addiu       $a1, $a1, -0x4E78
    ctx->r5 = ADD32(ctx->r5, -0X4E78);
    after_0:
    // 0x801E839C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E83A0: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E83A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E83A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E83AC: jal         0x801D34D0
    // 0x801E83B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_1;
    // 0x801E83B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x801E83B4: jal         0x80038BC8
    // 0x801E83B8: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E83B8: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    after_2:
    // 0x801E83BC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801E83C0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E83C4: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    // 0x801E83C8: lw          $t6, 0xE8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XE8);
    // 0x801E83CC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E83D0: jal         0x8003521C
    // 0x801E83D4: sw          $t7, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E83D4: sw          $t7, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r15;
    after_3:
    // 0x801E83D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E83DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E83E0: jr          $ra
    // 0x801E83E4: nop

    TRACE_RETURN()
    return;
    // 0x801E83E4: nop

;}
RECOMP_FUNC void func_801DB6C0_606AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB6C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB6C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB6C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DB6CC: jal         0x801D614C
    // 0x801DB6D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801DB6D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DB6D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DB6D8: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x801DB6DC: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x801DB6E0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801DB6E4: beq         $v1, $zero, L_801DB6F4
    if (ctx->r3 == 0) {
        // 0x801DB6E8: sw          $t6, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r14;
            goto L_801DB6F4;
    }
    // 0x801DB6E8: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
    // 0x801DB6EC: jal         0x80034ED4
    // 0x801DB6F0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801DB6F0: nop

    after_1:
L_801DB6F4:
    // 0x801DB6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB6F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB6FC: jr          $ra
    // 0x801DB700: nop

    TRACE_RETURN()
    return;
    // 0x801DB700: nop

;}
RECOMP_FUNC void func_801F1110_61C4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1110: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F1114: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F1118: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F111C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F1120: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F1124: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801F1128: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F112C: jal         0x801D6508
    // 0x801F1130: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6508_6018E8(rdram, ctx);
        goto after_0;
    // 0x801F1130: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x801F1134: jal         0x801D6124
    // 0x801F1138: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6124_601504(rdram, ctx);
        goto after_1;
    // 0x801F1138: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801F113C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F1140: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F1144: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F1148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F114C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801F1150: nop

    // 0x801F1154: bc1fl       L_801F1208
    if (!c1cs) {
        // 0x801F1158: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F1208;
    }
    goto skip_0;
    // 0x801F1158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F115C: jal         0x801D2F40
    // 0x801F1160: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801F1160: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_2:
    // 0x801F1164: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F1168: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x801F116C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F1170: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F1174: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F1178: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801F117C: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x801F1180: nop

    // 0x801F1184: bc1fl       L_801F119C
    if (!c1cs) {
        // 0x801F1188: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_801F119C;
    }
    goto skip_1;
    // 0x801F1188: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    skip_1:
    // 0x801F118C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F1190: nop

    // 0x801F1194: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x801F1198: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
L_801F119C:
    // 0x801F119C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F11A0: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F11A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F11A8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F11AC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F11B0: jal         0x801F718C
    // 0x801F11B4: nop

    func_801F718C_62256C(rdram, ctx);
        goto after_3;
    // 0x801F11B4: nop

    after_3:
    // 0x801F11B8: bne         $v0, $zero, L_801F1204
    if (ctx->r2 != 0) {
        // 0x801F11BC: addiu       $a0, $zero, 0x282
        ctx->r4 = ADD32(0, 0X282);
            goto L_801F1204;
    }
    // 0x801F11BC: addiu       $a0, $zero, 0x282
    ctx->r4 = ADD32(0, 0X282);
    // 0x801F11C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F11C4: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F11C8: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F11CC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F11D0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F11D4: jal         0x8000F3D8
    // 0x801F11D8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801F11D8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x801F11DC: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x801F11E0: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801F11E4: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801F11E8: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x801F11EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F11F0: jal         0x801F74E4
    // 0x801F11F4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_5;
    // 0x801F11F4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_5:
    // 0x801F11F8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F11FC: jal         0x8003521C
    // 0x801F1200: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F1200: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    after_6:
L_801F1204:
    // 0x801F1204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F1208:
    // 0x801F1208: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F120C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F1210: jr          $ra
    // 0x801F1214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801F1214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801D3954_5FED34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3954: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D3958: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D395C: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x801D3960: subu        $v1, $t6, $a0
    ctx->r3 = SUB32(ctx->r14, ctx->r4);
    // 0x801D3964: bgtz        $v1, L_801D3974
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D3968: sw          $v1, 0x60($v0)
        MEM_W(0X60, ctx->r2) = ctx->r3;
            goto L_801D3974;
    }
    // 0x801D3968: sw          $v1, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r3;
    // 0x801D396C: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x801D3970: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D3974:
    // 0x801D3974: jr          $ra
    // 0x801D3978: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3978: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801ECEDC_6182BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECEDC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801ECEE0: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801ECEE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ECEE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ECEEC: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801ECEF0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801ECEF4: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801ECEF8: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801ECEFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801ECF00: beq         $t8, $at, L_801ECF20
    if (ctx->r24 == ctx->r1) {
        // 0x801ECF04: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_801ECF20;
    }
    // 0x801ECF04: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801ECF08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801ECF0C: addiu       $a1, $a1, -0x32AC
    ctx->r5 = ADD32(ctx->r5, -0X32AC);
    // 0x801ECF10: jal         0x8003522C
    // 0x801ECF14: swc1        $f4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f4.u32l;
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x801ECF14: swc1        $f4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x801ECF18: b           L_801ECF20
    // 0x801ECF1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801ECF20;
    // 0x801ECF1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801ECF20:
    // 0x801ECF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ECF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ECF28: jr          $ra
    // 0x801ECF2C: nop

    TRACE_RETURN()
    return;
    // 0x801ECF2C: nop

;}
RECOMP_FUNC void func_801F2DDC_61E1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2DDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F2DE0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F2DE4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F2DE8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801F2DEC: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x801F2DF0: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x801F2DF4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F2DF8: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801F2DFC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801F2E00: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801F2E04: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x801F2E08: lhu         $a1, 0x92($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X92);
    // 0x801F2E0C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F2E10: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801F2E14: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801F2E18: jal         0x8000E630
    // 0x801F2E1C: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801F2E1C: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    after_0:
    // 0x801F2E20: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F2E24: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801F2E28: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F2E2C: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x801F2E30: lw          $t0, 0x7C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X7C);
    // 0x801F2E34: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x801F2E38: bgtz        $t1, L_801F2EC4
    if (SIGNED(ctx->r9) > 0) {
        // 0x801F2E3C: sw          $t1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r9;
            goto L_801F2EC4;
    }
    // 0x801F2E3C: sw          $t1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r9;
    // 0x801F2E40: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F2E44: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F2E48: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F2E4C: ldc1        $f8, -0x19A0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X19A0);
    // 0x801F2E50: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F2E54: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F2E58: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801F2E5C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801F2E60: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x801F2E64: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801F2E68: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F2E6C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801F2E70: jal         0x8000E39C
    // 0x801F2E74: nop

    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801F2E74: nop

    after_1:
    // 0x801F2E78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801F2E7C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F2E80: addiu       $t3, $s0, 0x14
    ctx->r11 = ADD32(ctx->r16, 0X14);
    // 0x801F2E84: lwc1        $f12, 0x70($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801F2E88: lwc1        $f14, 0x74($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801F2E8C: lw          $a2, 0x78($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X78);
    // 0x801F2E90: addiu       $t4, $s0, 0x16
    ctx->r12 = ADD32(ctx->r16, 0X16);
    // 0x801F2E94: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801F2E98: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801F2E9C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801F2EA0: jal         0x8000EC04
    // 0x801F2EA4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_2;
    // 0x801F2EA4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x801F2EA8: jal         0x801F703C
    // 0x801F2EAC: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    func_801F703C_62241C(rdram, ctx);
        goto after_3;
    // 0x801F2EAC: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    after_3:
    // 0x801F2EB0: jal         0x801F7958
    // 0x801F2EB4: nop

    func_801F7958_622D38(rdram, ctx);
        goto after_4;
    // 0x801F2EB4: nop

    after_4:
    // 0x801F2EB8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2EBC: jal         0x8003521C
    // 0x801F2EC0: addiu       $a0, $a0, 0x2ED8
    ctx->r4 = ADD32(ctx->r4, 0X2ED8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F2EC0: addiu       $a0, $a0, 0x2ED8
    ctx->r4 = ADD32(ctx->r4, 0X2ED8);
    after_5:
L_801F2EC4:
    // 0x801F2EC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801F2EC8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801F2ECC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F2ED0: jr          $ra
    // 0x801F2ED4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801F2ED4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801D397C_5FED5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D397C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D3980: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D3984: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x801D3988: bgtz        $v1, L_801D3998
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D398C: nop
    
            goto L_801D3998;
    }
    // 0x801D398C: nop

    // 0x801D3990: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x801D3994: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D3998:
    // 0x801D3998: jr          $ra
    // 0x801D399C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D399C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801D06A4_5FBA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D06A4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D06A8: lw          $v0, -0x1100($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1100);
    // 0x801D06AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D06B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D06B4: bne         $v0, $zero, L_801D06CC
    if (ctx->r2 != 0) {
        // 0x801D06B8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_801D06CC;
    }
    // 0x801D06B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D06BC: jal         0x801D2384
    // 0x801D06C0: nop

    func_801D2384_5FD764(rdram, ctx);
        goto after_0;
    // 0x801D06C0: nop

    after_0:
    // 0x801D06C4: b           L_801D06D8
    // 0x801D06C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D06D8;
    // 0x801D06C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D06CC:
    // 0x801D06CC: jal         0x801D2384
    // 0x801D06D0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_801D2384_5FD764(rdram, ctx);
        goto after_1;
    // 0x801D06D0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x801D06D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D06D8:
    // 0x801D06D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D06DC: jr          $ra
    // 0x801D06E0: nop

    TRACE_RETURN()
    return;
    // 0x801D06E0: nop

;}
RECOMP_FUNC void func_801FC20C_6275EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC20C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FC210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FC214: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801FC218: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801FC21C: beq         $at, $zero, L_801FC238
    if (ctx->r1 == 0) {
        // 0x801FC220: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801FC238;
    }
    // 0x801FC220: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801FC224: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FC228: addu        $at, $at, $t6
    gpr jr_addend_801FC230 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FC22C: lw          $t6, -0x15C8($at)
    ctx->r14 = ADD32(ctx->r1, -0X15C8);
    // 0x801FC230: jr          $t6
    // 0x801FC234: nop

    switch (jr_addend_801FC230 >> 2) {
        case 0: goto L_801FC238; break;
        case 1: goto L_801FC24C; break;
        case 2: goto L_801FC260; break;
        case 3: goto L_801FC274; break;
        case 4: goto L_801FC288; break;
        case 5: goto L_801FC29C; break;
        case 6: goto L_801FC2B0; break;
        case 7: goto L_801FC2C4; break;
        case 8: goto L_801FC2D8; break;
        case 9: goto L_801FC2EC; break;
        case 10: goto L_801FC300; break;
        default: switch_error(__func__, 0x801FC230, 0x8020EA38);
    }
    // 0x801FC234: nop

L_801FC238:
    // 0x801FC238: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801FC23C: jal         0x801FC328
    // 0x801FC240: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801FC328_627708(rdram, ctx);
        goto after_0;
    // 0x801FC240: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_0:
    // 0x801FC244: b           L_801FC31C
    // 0x801FC248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC24C:
    // 0x801FC24C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801FC250: jal         0x801FC328
    // 0x801FC254: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801FC328_627708(rdram, ctx);
        goto after_1;
    // 0x801FC254: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_1:
    // 0x801FC258: b           L_801FC31C
    // 0x801FC25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC260:
    // 0x801FC260: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801FC264: jal         0x801FC328
    // 0x801FC268: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801FC328_627708(rdram, ctx);
        goto after_2;
    // 0x801FC268: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_2:
    // 0x801FC26C: b           L_801FC31C
    // 0x801FC270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC274:
    // 0x801FC274: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801FC278: jal         0x801FC328
    // 0x801FC27C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801FC328_627708(rdram, ctx);
        goto after_3;
    // 0x801FC27C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_3:
    // 0x801FC280: b           L_801FC31C
    // 0x801FC284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC288:
    // 0x801FC288: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801FC28C: jal         0x801FC328
    // 0x801FC290: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801FC328_627708(rdram, ctx);
        goto after_4;
    // 0x801FC290: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_4:
    // 0x801FC294: b           L_801FC31C
    // 0x801FC298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC29C:
    // 0x801FC29C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801FC2A0: jal         0x801FC328
    // 0x801FC2A4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801FC328_627708(rdram, ctx);
        goto after_5;
    // 0x801FC2A4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_5:
    // 0x801FC2A8: b           L_801FC31C
    // 0x801FC2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC2B0:
    // 0x801FC2B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801FC2B4: jal         0x801FC328
    // 0x801FC2B8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801FC328_627708(rdram, ctx);
        goto after_6;
    // 0x801FC2B8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_6:
    // 0x801FC2BC: b           L_801FC31C
    // 0x801FC2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC2C4:
    // 0x801FC2C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801FC2C8: jal         0x801FC328
    // 0x801FC2CC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801FC328_627708(rdram, ctx);
        goto after_7;
    // 0x801FC2CC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_7:
    // 0x801FC2D0: b           L_801FC31C
    // 0x801FC2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC2D8:
    // 0x801FC2D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801FC2DC: jal         0x801FC328
    // 0x801FC2E0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801FC328_627708(rdram, ctx);
        goto after_8;
    // 0x801FC2E0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_8:
    // 0x801FC2E4: b           L_801FC31C
    // 0x801FC2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC2EC:
    // 0x801FC2EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FC2F0: jal         0x801FC328
    // 0x801FC2F4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_801FC328_627708(rdram, ctx);
        goto after_9;
    // 0x801FC2F4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_9:
    // 0x801FC2F8: b           L_801FC31C
    // 0x801FC2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FC31C;
    // 0x801FC2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC300:
    // 0x801FC300: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801FC304: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801FC308: jal         0x801FC328
    // 0x801FC30C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801FC328_627708(rdram, ctx);
        goto after_10;
    // 0x801FC30C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x801FC310: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FC314: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801FC318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FC31C:
    // 0x801FC31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FC320: jr          $ra
    // 0x801FC324: nop

    TRACE_RETURN()
    return;
    // 0x801FC324: nop

;}
RECOMP_FUNC void func_801FB3E8_6267C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB3E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801FB3EC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801FB3F0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801FB3F4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801FB3F8: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FB3FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FB400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FB404: addiu       $v1, $t6, -0x1
    ctx->r3 = ADD32(ctx->r14, -0X1);
    // 0x801FB408: andi        $t8, $v1, 0x7
    ctx->r24 = ctx->r3 & 0X7;
    // 0x801FB40C: bne         $t8, $zero, L_801FB470
    if (ctx->r24 != 0) {
        // 0x801FB410: sw          $v1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r3;
            goto L_801FB470;
    }
    // 0x801FB410: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
    // 0x801FB414: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801FB418: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801FB41C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB420: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801FB424: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801FB428: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB42C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FB430: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB434: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FB438: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FB43C: lwc1        $f8, 0x10($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X10);
    // 0x801FB440: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801FB444: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB448: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801FB44C: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801FB450: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FB454: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801FB458: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801FB45C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801FB460: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801FB464: jal         0x801DFB90
    // 0x801FB468: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x801FB468: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801FB46C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801FB470:
    // 0x801FB470: andi        $t0, $v1, 0x3
    ctx->r8 = ctx->r3 & 0X3;
    // 0x801FB474: bne         $t0, $zero, L_801FB4D8
    if (ctx->r8 != 0) {
        // 0x801FB478: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801FB4D8;
    }
    // 0x801FB478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB47C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801FB480: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x801FB484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB488: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801FB48C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801FB490: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FB494: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FB498: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB49C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FB4A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801FB4A4: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801FB4A8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801FB4AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB4B0: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x801FB4B4: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801FB4B8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FB4BC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801FB4C0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801FB4C4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801FB4C8: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801FB4CC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801FB4D0: jal         0x801DFB90
    // 0x801FB4D4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x801FB4D4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_1:
L_801FB4D8:
    // 0x801FB4D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB4DC: jal         0x801D6330
    // 0x801FB4E0: lui         $a1, 0xC2FE
    ctx->r5 = S32(0XC2FE << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x801FB4E0: lui         $a1, 0xC2FE
    ctx->r5 = S32(0XC2FE << 16);
    after_2:
    // 0x801FB4E4: beq         $v0, $zero, L_801FB4F8
    if (ctx->r2 == 0) {
        // 0x801FB4E8: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801FB4F8;
    }
    // 0x801FB4E8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB4EC: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801FB4F0: jal         0x8003521C
    // 0x801FB4F4: addiu       $a0, $a0, -0x4AF4
    ctx->r4 = ADD32(ctx->r4, -0X4AF4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FB4F4: addiu       $a0, $a0, -0x4AF4
    ctx->r4 = ADD32(ctx->r4, -0X4AF4);
    after_3:
L_801FB4F8:
    // 0x801FB4F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801FB4FC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801FB500: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801FB504: jr          $ra
    // 0x801FB508: nop

    TRACE_RETURN()
    return;
    // 0x801FB508: nop

;}
RECOMP_FUNC void func_801E6370_611750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6378: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801E637C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801E6380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E6384: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E6388: bgtz        $t7, L_801E6404
    if (SIGNED(ctx->r15) > 0) {
        // 0x801E638C: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801E6404;
    }
    // 0x801E638C: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801E6390: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801E6394: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E6398: jal         0x801D3E90
    // 0x801E639C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_801D3E90_5FF270(rdram, ctx);
        goto after_0;
    // 0x801E639C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801E63A0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801E63A4: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x801E63A8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E63AC: lwc1        $f0, 0x94($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X94);
    // 0x801E63B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E63B4: lwc1        $f10, 0x28($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801E63B8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E63BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E63C0: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801E63C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E63C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E63CC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E63D0: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E63D4: add.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f16.d + ctx->f8.d;
    // 0x801E63D8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E63DC: swc1        $f4, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f4.u32l;
    // 0x801E63E0: lwc1        $f10, 0x28($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801E63E4: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x801E63E8: nop

    // 0x801E63EC: bc1f        L_801E6404
    if (!c1cs) {
        // 0x801E63F0: nop
    
            goto L_801E6404;
    }
    // 0x801E63F0: nop

    // 0x801E63F4: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
    // 0x801E63F8: jal         0x801E599C
    // 0x801E63FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E599C_610D7C(rdram, ctx);
        goto after_1;
    // 0x801E63FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E6400: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_801E6404:
    // 0x801E6404: jal         0x801EEEC0
    // 0x801E6408: nop

    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_2;
    // 0x801E6408: nop

    after_2:
    // 0x801E640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E6410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E6414: jr          $ra
    // 0x801E6418: nop

    TRACE_RETURN()
    return;
    // 0x801E6418: nop

;}
