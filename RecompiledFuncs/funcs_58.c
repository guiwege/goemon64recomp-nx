#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80201018_62C3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201018: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020101C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80201024: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80201028: addiu       $t6, $zero, 0x321
    ctx->r14 = ADD32(0, 0X321);
    // 0x8020102C: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x80201030: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80201034: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x80201038: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8020103C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80201040: lbu         $t9, 0x12($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X12);
    // 0x80201044: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x80201048: addiu       $a0, $a0, 0x1088
    ctx->r4 = ADD32(ctx->r4, 0X1088);
    // 0x8020104C: bgtz        $t9, L_80201068
    if (SIGNED(ctx->r25) > 0) {
        // 0x80201050: nop
    
            goto L_80201068;
    }
    // 0x80201050: nop

    // 0x80201054: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201058: jal         0x8003521C
    // 0x8020105C: addiu       $a0, $a0, 0xBA4
    ctx->r4 = ADD32(ctx->r4, 0XBA4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8020105C: addiu       $a0, $a0, 0xBA4
    ctx->r4 = ADD32(ctx->r4, 0XBA4);
    after_0:
    // 0x80201060: b           L_80201070
    // 0x80201064: nop

        goto L_80201070;
    // 0x80201064: nop

L_80201068:
    // 0x80201068: jal         0x8003521C
    // 0x8020106C: sw          $t0, 0x7C($t1)
    MEM_W(0X7C, ctx->r9) = ctx->r8;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x8020106C: sw          $t0, 0x7C($t1)
    MEM_W(0X7C, ctx->r9) = ctx->r8;
    after_1:
L_80201070:
    // 0x80201070: jal         0x8020407C
    // 0x80201074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8020407C_62F45C(rdram, ctx);
        goto after_2;
    // 0x80201074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80201078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020107C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80201080: jr          $ra
    // 0x80201084: nop

    TRACE_RETURN()
    return;
    // 0x80201084: nop

;}
RECOMP_FUNC void func_801D2EE4_5FE2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2EE8: beq         $a0, $zero, L_801D2F30
    if (ctx->r4 == 0) {
        // 0x801D2EEC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_801D2F30;
    }
    // 0x801D2EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2EF0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801D2EF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D2EF8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D2EFC: sw          $t6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r14;
    // 0x801D2F00: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x801D2F04: lbu         $t7, 0x4($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X4);
    // 0x801D2F08: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x801D2F0C: bgez        $t7, L_801D2F20
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801D2F10: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801D2F20;
    }
    // 0x801D2F10: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D2F14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D2F18: nop

    // 0x801D2F1C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801D2F20:
    // 0x801D2F20: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    // 0x801D2F24: lhu         $t8, 0x6($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X6);
    // 0x801D2F28: jal         0x80014218
    // 0x801D2F2C: sh          $t8, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r24;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x801D2F2C: sh          $t8, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r24;
    after_0:
L_801D2F30:
    // 0x801D2F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2F38: jr          $ra
    // 0x801D2F3C: nop

    TRACE_RETURN()
    return;
    // 0x801D2F3C: nop

;}
RECOMP_FUNC void func_801E641C_6117FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E641C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6424: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E6428: jal         0x801EF268
    // 0x801E642C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF268_61A648(rdram, ctx);
        goto after_0;
    // 0x801E642C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E6430: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6434: addiu       $a1, $a1, -0x4E48
    ctx->r5 = ADD32(ctx->r5, -0X4E48);
    // 0x801E6438: jal         0x801D31CC
    // 0x801E643C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E643C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E6440: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6444: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E6448: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E644C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E6450: jal         0x801D34D0
    // 0x801E6454: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E6454: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x801E6458: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E645C: jal         0x8003521C
    // 0x801E6460: addiu       $a0, $a0, 0x6474
    ctx->r4 = ADD32(ctx->r4, 0X6474);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E6460: addiu       $a0, $a0, 0x6474
    ctx->r4 = ADD32(ctx->r4, 0X6474);
    after_3:
    // 0x801E6464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E6468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E646C: jr          $ra
    // 0x801E6470: nop

    TRACE_RETURN()
    return;
    // 0x801E6470: nop

;}
RECOMP_FUNC void func_801E5BDC_610FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5BE4: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801E5BE8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E5BEC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E5BF0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801E5BF4: bgtz        $v0, L_801E5D28
    if (SIGNED(ctx->r2) > 0) {
        // 0x801E5BF8: sw          $t6, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r14;
            goto L_801E5D28;
    }
    // 0x801E5BF8: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801E5BFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E5C00: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801E5C04: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x801E5C08: jal         0x801D2F40
    // 0x801E5C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801E5C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x801E5C10: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x801E5C14: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E5C18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E5C1C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E5C20: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801E5C24: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801E5C28: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801E5C2C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5C30: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801E5C34: bc1fl       L_801E5C4C
    if (!c1cs) {
        // 0x801E5C38: sw          $a2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r6;
            goto L_801E5C4C;
    }
    goto skip_0;
    // 0x801E5C38: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    skip_0:
    // 0x801E5C3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E5C40: nop

    // 0x801E5C44: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
    // 0x801E5C48: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
L_801E5C4C:
    // 0x801E5C4C: jal         0x801D606C
    // 0x801E5C50: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D606C_60144C(rdram, ctx);
        goto after_1;
    // 0x801E5C50: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x801E5C54: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5C58: lui         $at, 0xC4E1
    ctx->r1 = S32(0XC4E1 << 16);
    // 0x801E5C5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E5C60: lwc1        $f10, 0x10($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801E5C64: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801E5C68: lui         $a1, 0xBEB3
    ctx->r5 = S32(0XBEB3 << 16);
    // 0x801E5C6C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801E5C70: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x801E5C74: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801E5C78: bc1fl       L_801E5C94
    if (!c1cs) {
        // 0x801E5C7C: sw          $a2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r6;
            goto L_801E5C94;
    }
    goto skip_1;
    // 0x801E5C7C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    skip_1:
    // 0x801E5C80: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E5C84: nop

    // 0x801E5C88: swc1        $f16, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f16.u32l;
    // 0x801E5C8C: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x801E5C90: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
L_801E5C94:
    // 0x801E5C94: jal         0x801D6508
    // 0x801E5C98: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801E5C98: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x801E5C9C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801E5CA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5CA4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5CA8: lwc1        $f18, 0x74($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X74);
    // 0x801E5CAC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801E5CB0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x801E5CB4: nop

    // 0x801E5CB8: bc1fl       L_801E5D04
    if (!c1cs) {
        // 0x801E5CBC: lhu         $t1, 0x14($a2)
        ctx->r9 = MEM_HU(ctx->r6, 0X14);
            goto L_801E5D04;
    }
    goto skip_2;
    // 0x801E5CBC: lhu         $t1, 0x14($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X14);
    skip_2:
    // 0x801E5CC0: lhu         $t7, 0x14($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X14);
    // 0x801E5CC4: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801E5CC8: addiu       $t8, $t7, -0xF
    ctx->r24 = ADD32(ctx->r15, -0XF);
    // 0x801E5CCC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801E5CD0: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x801E5CD4: beq         $at, $zero, L_801E5CE0
    if (ctx->r1 == 0) {
        // 0x801E5CD8: sh          $t8, 0x14($a2)
        MEM_H(0X14, ctx->r6) = ctx->r24;
            goto L_801E5CE0;
    }
    // 0x801E5CD8: sh          $t8, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r24;
    // 0x801E5CDC: sh          $t0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r8;
L_801E5CE0:
    // 0x801E5CE0: jal         0x801D4338
    // 0x801E5CE4: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    func_801D4338_5FF718(rdram, ctx);
        goto after_3;
    // 0x801E5CE4: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    after_3:
    // 0x801E5CE8: beq         $v0, $zero, L_801E5D28
    if (ctx->r2 == 0) {
        // 0x801E5CEC: lui         $a0, 0x801E
        ctx->r4 = S32(0X801E << 16);
            goto L_801E5D28;
    }
    // 0x801E5CEC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5CF0: jal         0x8003521C
    // 0x801E5CF4: addiu       $a0, $a0, 0x5D38
    ctx->r4 = ADD32(ctx->r4, 0X5D38);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E5CF4: addiu       $a0, $a0, 0x5D38
    ctx->r4 = ADD32(ctx->r4, 0X5D38);
    after_4:
    // 0x801E5CF8: b           L_801E5D2C
    // 0x801E5CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E5D2C;
    // 0x801E5CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E5D00: lhu         $t1, 0x14($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X14);
L_801E5D04:
    // 0x801E5D04: addiu       $t2, $t1, -0xF
    ctx->r10 = ADD32(ctx->r9, -0XF);
    // 0x801E5D08: andi        $v0, $t2, 0xFFFF
    ctx->r2 = ctx->r10 & 0XFFFF;
    // 0x801E5D0C: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x801E5D10: bne         $at, $zero, L_801E5D28
    if (ctx->r1 != 0) {
        // 0x801E5D14: sh          $t2, 0x14($a2)
        MEM_H(0X14, ctx->r6) = ctx->r10;
            goto L_801E5D28;
    }
    // 0x801E5D14: sh          $t2, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r10;
    // 0x801E5D18: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x801E5D1C: beq         $at, $zero, L_801E5D28
    if (ctx->r1 == 0) {
        // 0x801E5D20: addiu       $t3, $zero, 0x200
        ctx->r11 = ADD32(0, 0X200);
            goto L_801E5D28;
    }
    // 0x801E5D20: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x801E5D24: sh          $t3, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r11;
L_801E5D28:
    // 0x801E5D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5D2C:
    // 0x801E5D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5D30: jr          $ra
    // 0x801E5D34: nop

    TRACE_RETURN()
    return;
    // 0x801E5D34: nop

;}
RECOMP_FUNC void func_80200148_62B528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200148: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020014C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80200150: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80200154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200158: addiu       $t6, $v1, 0x140
    ctx->r14 = ADD32(ctx->r3, 0X140);
    // 0x8020015C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80200160: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80200164: lw          $v0, 0x1D8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1D8);
    // 0x80200168: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8020016C: jal         0x8000DD04
    // 0x80200170: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    func_8000DD04_E904(rdram, ctx);
        goto after_0;
    // 0x80200170: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    after_0:
    // 0x80200174: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80200178: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020017C: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x80200180: beq         $t8, $at, L_80200198
    if (ctx->r24 == ctx->r1) {
        // 0x80200184: nop
    
            goto L_80200198;
    }
    // 0x80200184: nop

    // 0x80200188: jal         0x80034ED4
    // 0x8020018C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x8020018C: nop

    after_1:
    // 0x80200190: b           L_802001EC
    // 0x80200194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802001EC;
    // 0x80200194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200198:
    // 0x80200198: jal         0x801D365C
    // 0x8020019C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_2;
    // 0x8020019C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x802001A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802001A4: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x802001A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x802001AC: lw          $t9, 0x1CC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1CC);
    // 0x802001B0: bne         $v0, $t9, L_802001E0
    if (ctx->r2 != ctx->r25) {
        // 0x802001B4: nop
    
            goto L_802001E0;
    }
    // 0x802001B4: nop

    // 0x802001B8: lbu         $t1, 0xE($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XE);
    // 0x802001BC: bne         $t1, $zero, L_802001E0
    if (ctx->r9 != 0) {
        // 0x802001C0: nop
    
            goto L_802001E0;
    }
    // 0x802001C0: nop

    // 0x802001C4: lbu         $t2, 0x2C5($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2C5);
    // 0x802001C8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x802001CC: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    // 0x802001D0: bne         $t2, $zero, L_802001E0
    if (ctx->r10 != 0) {
        // 0x802001D4: nop
    
            goto L_802001E0;
    }
    // 0x802001D4: nop

    // 0x802001D8: jal         0x80038BC8
    // 0x802001DC: sb          $zero, 0x30($t3)
    MEM_B(0X30, ctx->r11) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x802001DC: sb          $zero, 0x30($t3)
    MEM_B(0X30, ctx->r11) = 0;
    after_3:
L_802001E0:
    // 0x802001E0: jal         0x801D36C4
    // 0x802001E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_4;
    // 0x802001E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x802001E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802001EC:
    // 0x802001EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802001F0: jr          $ra
    // 0x802001F4: nop

    TRACE_RETURN()
    return;
    // 0x802001F4: nop

;}
RECOMP_FUNC void func_801F85C8_6239A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F85C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F85CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F85D0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801F85D4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801F85D8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F85DC: jal         0x801D614C
    // 0x801F85E0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801F85E0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x801F85E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F85E8: lwc1        $f4, 0x78($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801F85EC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801F85F0: nop

    // 0x801F85F4: bc1fl       L_801F8620
    if (!c1cs) {
        // 0x801F85F8: lwc1        $f6, 0x10($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
            goto L_801F8620;
    }
    goto skip_0;
    // 0x801F85F8: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x801F85FC: lw          $t6, 0x7C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X7C);
    // 0x801F8600: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F8604: bgez        $t7, L_801F861C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801F8608: sw          $t7, 0x7C($s1)
        MEM_W(0X7C, ctx->r17) = ctx->r15;
            goto L_801F861C;
    }
    // 0x801F8608: sw          $t7, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r15;
    // 0x801F860C: jal         0x80035020
    // 0x801F8610: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x801F8610: nop

    after_1:
    // 0x801F8614: b           L_801F8700
    // 0x801F8618: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801F8700;
    // 0x801F8618: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F861C:
    // 0x801F861C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
L_801F8620:
    // 0x801F8620: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801F8624: nop

    // 0x801F8628: bc1f        L_801F8640
    if (!c1cs) {
        // 0x801F862C: nop
    
            goto L_801F8640;
    }
    // 0x801F862C: nop

    // 0x801F8630: jal         0x80035020
    // 0x801F8634: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x801F8634: nop

    after_2:
    // 0x801F8638: b           L_801F8700
    // 0x801F863C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801F8700;
    // 0x801F863C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F8640:
    // 0x801F8640: jal         0x801D365C
    // 0x801F8644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_3;
    // 0x801F8644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801F8648: bne         $v0, $zero, L_801F8660
    if (ctx->r2 != 0) {
        // 0x801F864C: nop
    
            goto L_801F8660;
    }
    // 0x801F864C: nop

    // 0x801F8650: jal         0x801D36CC
    // 0x801F8654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_4;
    // 0x801F8654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801F8658: beq         $v0, $zero, L_801F86F4
    if (ctx->r2 == 0) {
        // 0x801F865C: nop
    
            goto L_801F86F4;
    }
    // 0x801F865C: nop

L_801F8660:
    // 0x801F8660: jal         0x801D3854
    // 0x801F8664: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_5;
    // 0x801F8664: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801F8668: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x801F866C: bne         $at, $zero, L_801F8690
    if (ctx->r1 != 0) {
        // 0x801F8670: nop
    
            goto L_801F8690;
    }
    // 0x801F8670: nop

    // 0x801F8674: jal         0x801D3A68
    // 0x801F8678: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_6;
    // 0x801F8678: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x801F867C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801F8680: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801F8684: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x801F8688: jal         0x801D7438
    // 0x801F868C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_7;
    // 0x801F868C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_7:
L_801F8690:
    // 0x801F8690: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F8694: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F8698: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F869C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F86A0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801F86A4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F86A8: jal         0x8000F3D8
    // 0x801F86AC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_8;
    // 0x801F86AC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_8:
    // 0x801F86B0: jal         0x801CEE80
    // 0x801F86B4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_9;
    // 0x801F86B4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x801F86B8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F86BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F86C0: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F86C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F86C8: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F86CC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801F86D0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801F86D4: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801F86D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F86DC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801F86E0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801F86E4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F86E8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801F86EC: jal         0x801E1B30
    // 0x801F86F0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_10;
    // 0x801F86F0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_10:
L_801F86F4:
    // 0x801F86F4: jal         0x801D3894
    // 0x801F86F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_11;
    // 0x801F86F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x801F86FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F8700:
    // 0x801F8700: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801F8704: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801F8708: jr          $ra
    // 0x801F870C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801F870C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801F9678_624A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9678: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F967C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F9680: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F9684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9688: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x801F968C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F9690: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801F9694: jal         0x8003767C
    // 0x801F9698: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8003767C_3827C(rdram, ctx);
        goto after_0;
    // 0x801F9698: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F969C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801F96A0: beq         $v0, $zero, L_801F96C4
    if (ctx->r2 == 0) {
        // 0x801F96A4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801F96C4;
    }
    // 0x801F96A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F96A8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801F96AC: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801F96B0: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801F96B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801F96B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801F96BC: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x801F96C0: beq         $t7, $at, L_801F96E4
    if (ctx->r15 == ctx->r1) {
        // 0x801F96C4: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_801F96E4;
    }
L_801F96C4:
    // 0x801F96C4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801F96C8: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801F96CC: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801F96D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F96D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801F96D8: lhu         $t9, -0x51EA($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X51EA);
    // 0x801F96DC: bnel        $t9, $at, L_801F9704
    if (ctx->r25 != ctx->r1) {
        // 0x801F96E0: lwc1        $f4, 0xC($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
            goto L_801F9704;
    }
    goto skip_0;
    // 0x801F96E0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    skip_0:
L_801F96E4:
    // 0x801F96E4: jal         0x80038BC8
    // 0x801F96E8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801F96E8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x801F96EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F96F0: jal         0x8003521C
    // 0x801F96F4: addiu       $a0, $a0, -0x6360
    ctx->r4 = ADD32(ctx->r4, -0X6360);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F96F4: addiu       $a0, $a0, -0x6360
    ctx->r4 = ADD32(ctx->r4, -0X6360);
    after_2:
    // 0x801F96F8: b           L_801F9770
    // 0x801F96FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F9770;
    // 0x801F96FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9700: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
L_801F9704:
    // 0x801F9704: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801F9708: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F970C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F9710: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F9714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F9718: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F971C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F9720: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x801F9724: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x801F9728: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F972C: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x801F9730: jal         0x801D5064
    // 0x801F9734: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D5064_600444(rdram, ctx);
        goto after_3;
    // 0x801F9734: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_3:
    // 0x801F9738: beq         $v0, $zero, L_801F9764
    if (ctx->r2 == 0) {
        // 0x801F973C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801F9764;
    }
    // 0x801F973C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F9740: lw          $t0, 0x7C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X7C);
    // 0x801F9744: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x801F9748: bne         $t1, $zero, L_801F976C
    if (ctx->r9 != 0) {
        // 0x801F974C: sw          $t1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r9;
            goto L_801F976C;
    }
    // 0x801F974C: sw          $t1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r9;
    // 0x801F9750: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9754: jal         0x8003521C
    // 0x801F9758: addiu       $a0, $a0, -0x6884
    ctx->r4 = ADD32(ctx->r4, -0X6884);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F9758: addiu       $a0, $a0, -0x6884
    ctx->r4 = ADD32(ctx->r4, -0X6884);
    after_4:
    // 0x801F975C: b           L_801F9770
    // 0x801F9760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F9770;
    // 0x801F9760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F9764:
    // 0x801F9764: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x801F9768: sw          $t3, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r11;
L_801F976C:
    // 0x801F976C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F9770:
    // 0x801F9770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F9774: jr          $ra
    // 0x801F9778: nop

    TRACE_RETURN()
    return;
    // 0x801F9778: nop

;}
RECOMP_FUNC void func_80207C08_632FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207C0C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80207C10: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80207C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80207C1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80207C20: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x80207C24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80207C28: bnel        $t7, $at, L_80207C80
    if (ctx->r15 != ctx->r1) {
        // 0x80207C2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80207C80;
    }
    goto skip_0;
    // 0x80207C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80207C30: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80207C34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80207C38: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80207C3C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80207C40: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80207C44: jal         0x801D4D0C
    // 0x80207C48: nop

    func_801D4D0C_6000EC(rdram, ctx);
        goto after_0;
    // 0x80207C48: nop

    after_0:
    // 0x80207C4C: beq         $v0, $zero, L_80207C7C
    if (ctx->r2 == 0) {
        // 0x80207C50: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_80207C7C;
    }
    // 0x80207C50: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80207C54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80207C58: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80207C5C: jal         0x801E4194
    // 0x80207C60: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801E4194_60F574(rdram, ctx);
        goto after_1;
    // 0x80207C60: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x80207C64: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80207C68: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80207C6C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207C70: addiu       $a0, $a0, 0x7C8C
    ctx->r4 = ADD32(ctx->r4, 0X7C8C);
    // 0x80207C74: jal         0x8003521C
    // 0x80207C78: sw          $t8, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80207C78: sw          $t8, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = ctx->r24;
    after_2:
L_80207C7C:
    // 0x80207C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207C80:
    // 0x80207C80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207C84: jr          $ra
    // 0x80207C88: nop

    TRACE_RETURN()
    return;
    // 0x80207C88: nop

;}
RECOMP_FUNC void func_80208898_633C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208898: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020889C: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x802088A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802088A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802088A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802088AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802088B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802088B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802088B8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x802088BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802088C0: swc1        $f0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f0.u32l;
    // 0x802088C4: swc1        $f0, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f0.u32l;
    // 0x802088C8: swc1        $f0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f0.u32l;
    // 0x802088CC: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
    // 0x802088D0: swc1        $f0, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f0.u32l;
    // 0x802088D4: swc1        $f4, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->f4.u32l;
    // 0x802088D8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802088DC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802088E0: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x802088E4: sw          $t6, 0x1EC($t7)
    MEM_W(0X1EC, ctx->r15) = ctx->r14;
    // 0x802088E8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802088EC: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x802088F0: addiu       $t2, $zero, 0xE0
    ctx->r10 = ADD32(0, 0XE0);
    // 0x802088F4: sw          $t8, 0x1F4($t9)
    MEM_W(0X1F4, ctx->r25) = ctx->r24;
    // 0x802088F8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x802088FC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80208900: sw          $t0, 0x1F0($t1)
    MEM_W(0X1F0, ctx->r9) = ctx->r8;
    // 0x80208904: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80208908: jal         0x8003D428
    // 0x8020890C: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    func_8003D428_3E028(rdram, ctx);
        goto after_0;
    // 0x8020890C: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    after_0:
    // 0x80208910: jal         0x8000C838
    // 0x80208914: nop

    func_8000C838_D438(rdram, ctx);
        goto after_1;
    // 0x80208914: nop

    after_1:
    // 0x80208918: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8020891C: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x80208920: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80208924: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80208928: addiu       $a1, $a1, -0x4984
    ctx->r5 = ADD32(ctx->r5, -0X4984);
    // 0x8020892C: sb          $zero, 0x2C1($t4)
    MEM_B(0X2C1, ctx->r12) = 0;
    // 0x80208930: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80208934: sb          $zero, 0x2C2($t5)
    MEM_B(0X2C2, ctx->r13) = 0;
    // 0x80208938: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8020893C: sb          $zero, 0x2C3($t6)
    MEM_B(0X2C3, ctx->r14) = 0;
    // 0x80208940: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80208944: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    // 0x80208948: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8020894C: jal         0x8003522C
    // 0x80208950: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x80208950: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80208954: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80208958: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x8020895C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208960: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x80208964: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80208968: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020896C: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x80208970: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x80208974: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x80208978: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x8020897C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80208980: jal         0x80034ED4
    // 0x80208984: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x80208984: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    after_3:
    // 0x80208988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020898C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80208990: jr          $ra
    // 0x80208994: nop

    TRACE_RETURN()
    return;
    // 0x80208994: nop

;}
RECOMP_FUNC void func_801F7074_622454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7074: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F7078: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x801F707C: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801F7080: jr          $ra
    // 0x801F7084: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801F7084: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801FC454_627834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC454: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FC458: jr          $ra
    // 0x801FC45C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801FC45C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DBB34_606F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBB34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DBB38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DBB3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DBB40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DBB44: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DBB48: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DBB4C: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DBB50: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801DBB54: jal         0x801D620C
    // 0x801DBB58: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    func_801D620C_6015EC(rdram, ctx);
        goto after_0;
    // 0x801DBB58: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    after_0:
    // 0x801DBB5C: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x801DBB60: lwc1        $f6, 0xA8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x801DBB64: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801DBB68: lwc1        $f16, 0xAC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x801DBB6C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DBB70: lwc1        $f6, 0xB0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801DBB74: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801DBB78: lw          $t6, 0x88($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X88);
    // 0x801DBB7C: swc1        $f8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f8.u32l;
    // 0x801DBB80: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DBB84: addiu       $a2, $t6, 0x1
    ctx->r6 = ADD32(ctx->r14, 0X1);
    // 0x801DBB88: sw          $a2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r6;
    // 0x801DBB8C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DBB90: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
    // 0x801DBB94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBB98: lw          $a1, 0x84($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X84);
    // 0x801DBB9C: swc1        $f8, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f8.u32l;
    // 0x801DBBA0: jal         0x801DBFB4
    // 0x801DBBA4: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    func_801DBFB4_607394(rdram, ctx);
        goto after_1;
    // 0x801DBBA4: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_1:
    // 0x801DBBA8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DBBAC: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x801DBBB0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801DBBB4: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x801DBBB8: bgez        $v0, L_801DBBD4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801DBBBC: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801DBBD4;
    }
    // 0x801DBBBC: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801DBBC0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DBBC4: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801DBBC8: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
    // 0x801DBBCC: jal         0x8003521C
    // 0x801DBBD0: addiu       $a0, $a0, -0x4418
    ctx->r4 = ADD32(ctx->r4, -0X4418);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801DBBD0: addiu       $a0, $a0, -0x4418
    ctx->r4 = ADD32(ctx->r4, -0X4418);
    after_2:
L_801DBBD4:
    // 0x801DBBD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DBBD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DBBDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DBBE0: jr          $ra
    // 0x801DBBE4: nop

    TRACE_RETURN()
    return;
    // 0x801DBBE4: nop

;}
RECOMP_FUNC void func_801D5E9C_60127C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5E9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D5EA0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801D5EA4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801D5EA8: beq         $a0, $zero, L_801D5F24
    if (ctx->r4 == 0) {
        // 0x801D5EAC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801D5F24;
    }
    // 0x801D5EAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D5EB0: beql        $a1, $zero, L_801D5F28
    if (ctx->r5 == 0) {
        // 0x801D5EB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D5F28;
    }
    goto skip_0;
    // 0x801D5EB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801D5EB8: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801D5EBC: beql        $v0, $zero, L_801D5F28
    if (ctx->r2 == 0) {
        // 0x801D5EC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D5F28;
    }
    goto skip_1;
    // 0x801D5EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801D5EC4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801D5EC8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D5ECC: beql        $v1, $zero, L_801D5F28
    if (ctx->r3 == 0) {
        // 0x801D5ED0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D5F28;
    }
    goto skip_2;
    // 0x801D5ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801D5ED4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801D5ED8: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801D5EDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D5EE0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801D5EE4: jal         0x801D5F34
    // 0x801D5EE8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_801D5F34_601314(rdram, ctx);
        goto after_0;
    // 0x801D5EE8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D5EEC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801D5EF0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D5EF4: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801D5EF8: sh          $t6, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r14;
    // 0x801D5EFC: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801D5F00: sh          $t7, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r15;
    // 0x801D5F04: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801D5F08: sh          $t8, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r24;
    // 0x801D5F0C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801D5F10: swc1        $f6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f6.u32l;
    // 0x801D5F14: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801D5F18: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x801D5F1C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801D5F20: swc1        $f10, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f10.u32l;
L_801D5F24:
    // 0x801D5F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D5F28:
    // 0x801D5F28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D5F2C: jr          $ra
    // 0x801D5F30: nop

    TRACE_RETURN()
    return;
    // 0x801D5F30: nop

;}
RECOMP_FUNC void func_80202028_62D408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202028: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8020202C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80202030: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80202034: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x80202038: addiu       $a2, $a2, 0x59B0
    ctx->r6 = ADD32(ctx->r6, 0X59B0);
    // 0x8020203C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80202040: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80202044: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80202048: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8020204C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80202050: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80202054: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80202058: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8020205C: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80202060: addiu       $a3, $a3, -0x5198
    ctx->r7 = ADD32(ctx->r7, -0X5198);
    // 0x80202064: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80202068: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8020206C: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x80202070: addiu       $a1, $a1, 0x212C
    ctx->r5 = ADD32(ctx->r5, 0X212C);
    // 0x80202074: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80202078: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x8020207C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80202080: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x80202084: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80202088: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8020208C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80202090: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80202094: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80202098: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8020209C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802020A0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802020A4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x802020A8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x802020AC: jal         0x800358E8
    // 0x802020B0: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x802020B0: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x802020B4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802020B8: beq         $v0, $zero, L_8020211C
    if (ctx->r2 == 0) {
        // 0x802020BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020211C;
    }
    // 0x802020BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802020C0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802020C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802020C8: addiu       $t1, $zero, 0x97
    ctx->r9 = ADD32(0, 0X97);
    // 0x802020CC: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x802020D0: lbu         $t0, 0x5($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X5);
    // 0x802020D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802020D8: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x802020DC: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x802020E0: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x802020E4: addiu       $t5, $zero, 0x1F4
    ctx->r13 = ADD32(0, 0X1F4);
    // 0x802020E8: sh          $t1, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r9;
    // 0x802020EC: sb          $t2, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r10;
    // 0x802020F0: sh          $t3, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r11;
    // 0x802020F4: sh          $t4, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r12;
    // 0x802020F8: sh          $t5, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r13;
    // 0x802020FC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80202100: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80202104: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x80202108: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8020210C: jal         0x80203F5C
    // 0x80202110: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80202110: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80202114: jal         0x80203F88
    // 0x80202118: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80202118: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_2:
L_8020211C:
    // 0x8020211C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80202120: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80202124: jr          $ra
    // 0x80202128: nop

    TRACE_RETURN()
    return;
    // 0x80202128: nop

;}
RECOMP_FUNC void func_801DFB90_60AF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFB90: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801DFB94: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DFB98: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DFB9C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x801DFBA0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801DFBA4: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x801DFBA8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801DFBAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DFBB0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801DFBB4: bc1f        L_801DFBC4
    if (!c1cs) {
        // 0x801DFBB8: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_801DFBC4;
    }
    // 0x801DFBB8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801DFBBC: b           L_801DFBC8
    // 0x801DFBC0: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_801DFBC8;
    // 0x801DFBC0: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_801DFBC4:
    // 0x801DFBC4: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801DFBC8:
    // 0x801DFBC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DFBCC: ldc1        $f6, -0x2480($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2480);
    // 0x801DFBD0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801DFBD4: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x801DFBD8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801DFBDC: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801DFBE0: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x801DFBE4: jal         0x8000DD58
    // 0x801DFBE8: nop

    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801DFBE8: nop

    after_0:
    // 0x801DFBEC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DFBF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DFBF4: ldc1        $f8, -0x2478($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2478);
    // 0x801DFBF8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801DFBFC: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801DFC00: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801DFC04: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DFC08: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801DFC0C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801DFC10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DFC14: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801DFC18: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DFC1C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DFC20: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801DFC24: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801DFC28: sub.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d - ctx->f8.d;
    // 0x801DFC2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DFC30: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DFC34: bc1f        L_801DFC44
    if (!c1cs) {
        // 0x801DFC38: add.s       $f20, $f20, $f6
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
            goto L_801DFC44;
    }
    // 0x801DFC38: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x801DFC3C: b           L_801DFC48
    // 0x801DFC40: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801DFC48;
    // 0x801DFC40: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
L_801DFC44:
    // 0x801DFC44: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801DFC48:
    // 0x801DFC48: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801DFC4C: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801DFC50: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x801DFC54: jal         0x8000DD58
    // 0x801DFC58: nop

    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801DFC58: nop

    after_1:
    // 0x801DFC5C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801DFC60: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DFC64: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DFC68: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x801DFC6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DFC70: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DFC74: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801DFC78: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DFC7C: div.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x801DFC80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DFC84: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801DFC88: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DFC8C: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801DFC90: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801DFC94: mul.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x801DFC98: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x801DFC9C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DFCA0: sub.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d - ctx->f8.d;
    // 0x801DFCA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DFCA8: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x801DFCAC: bc1f        L_801DFCBC
    if (!c1cs) {
        // 0x801DFCB0: add.s       $f14, $f14, $f10
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
            goto L_801DFCBC;
    }
    // 0x801DFCB0: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x801DFCB4: b           L_801DFCC0
    // 0x801DFCB8: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
        goto L_801DFCC0;
    // 0x801DFCB8: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
L_801DFCBC:
    // 0x801DFCBC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_801DFCC0:
    // 0x801DFCC0: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801DFCC4: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    // 0x801DFCC8: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801DFCCC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x801DFCD0: jal         0x8000DD58
    // 0x801DFCD4: nop

    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801DFCD4: nop

    after_2:
    // 0x801DFCD8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801DFCDC: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DFCE0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DFCE4: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x801DFCE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DFCEC: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DFCF0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801DFCF4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DFCF8: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x801DFCFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DFD00: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801DFD04: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DFD08: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x801DFD0C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801DFD10: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801DFD14: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801DFD18: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DFD1C: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801DFD20: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801DFD24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DFD28: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801DFD2C: bc1f        L_801DFD3C
    if (!c1cs) {
        // 0x801DFD30: add.s       $f12, $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
            goto L_801DFD3C;
    }
    // 0x801DFD30: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x801DFD34: b           L_801DFD40
    // 0x801DFD38: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801DFD40;
    // 0x801DFD38: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
L_801DFD3C:
    // 0x801DFD3C: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801DFD40:
    // 0x801DFD40: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801DFD44: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x801DFD48: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    // 0x801DFD4C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801DFD50: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x801DFD54: jal         0x8000DD58
    // 0x801DFD58: nop

    func_8000DD58_E958(rdram, ctx);
        goto after_3;
    // 0x801DFD58: nop

    after_3:
    // 0x801DFD5C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DFD60: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DFD64: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DFD68: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801DFD6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DFD70: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DFD74: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801DFD78: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x801DFD7C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801DFD80: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DFD84: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801DFD88: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801DFD8C: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801DFD90: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DFD94: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801DFD98: sltiu       $at, $t0, 0xB
    ctx->r1 = ctx->r8 < 0XB ? 1 : 0;
    // 0x801DFD9C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801DFDA0: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801DFDA4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x801DFDA8: sub.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d - ctx->f8.d;
    // 0x801DFDAC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DFDB0: beq         $at, $zero, L_801DFDCC
    if (ctx->r1 == 0) {
        // 0x801DFDB4: add.s       $f0, $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
            goto L_801DFDCC;
    }
    // 0x801DFDB4: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x801DFDB8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DFDBC: addu        $at, $at, $t0
    gpr jr_addend_801DFDC4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801DFDC0: lw          $t0, -0x2470($at)
    ctx->r8 = ADD32(ctx->r1, -0X2470);
    // 0x801DFDC4: jr          $t0
    // 0x801DFDC8: nop

    switch (jr_addend_801DFDC4 >> 2) {
        case 0: goto L_801DFDCC; break;
        case 1: goto L_801DFDF8; break;
        case 2: goto L_801DFE3C; break;
        case 3: goto L_801DFE68; break;
        case 4: goto L_801DFEB4; break;
        case 5: goto L_801DFEE0; break;
        case 6: goto L_801DFF2C; break;
        case 7: goto L_801DFF80; break;
        case 8: goto L_801DFFA0; break;
        case 9: goto L_801DFFEC; break;
        case 10: goto L_801E000C; break;
        default: switch_error(__func__, 0x801DFDC4, 0x8020DB90);
    }
    // 0x801DFDC8: nop

L_801DFDCC:
    // 0x801DFDCC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFDD0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFDD4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFDDC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFDE0: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFDE4: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DFDE8: jal         0x801E1958
    // 0x801DFDEC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_4;
    // 0x801DFDEC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x801DFDF0: b           L_801E0054
    // 0x801DFDF4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFDF4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFDF8:
    // 0x801DFDF8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFDFC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFE00: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFE04: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801DFE08: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801DFE0C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801DFE10: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801DFE14: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801DFE18: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801DFE1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFE20: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFE24: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFE28: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DFE2C: jal         0x801E1E24
    // 0x801DFE30: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_5;
    // 0x801DFE30: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x801DFE34: b           L_801E0054
    // 0x801DFE38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFE38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFE3C:
    // 0x801DFE3C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFE40: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFE44: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFE4C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFE50: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFE54: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DFE58: jal         0x801E2238
    // 0x801DFE5C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_801E2238_60D618(rdram, ctx);
        goto after_6;
    // 0x801DFE5C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x801DFE60: b           L_801E0054
    // 0x801DFE64: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFE64: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFE68:
    // 0x801DFE68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DFE6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DFE70: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFE74: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFE78: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFE7C: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801DFE80: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x801DFE84: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801DFE88: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801DFE8C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x801DFE90: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801DFE94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFE98: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFE9C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFEA0: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x801DFEA4: jal         0x801E1E24
    // 0x801DFEA8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_7;
    // 0x801DFEA8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x801DFEAC: b           L_801E0054
    // 0x801DFEB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFEB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFEB4:
    // 0x801DFEB4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFEB8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFEBC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFEC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFEC4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFEC8: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFECC: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801DFED0: jal         0x801E1A44
    // 0x801DFED4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_801E1A44_60CE24(rdram, ctx);
        goto after_8;
    // 0x801DFED4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x801DFED8: b           L_801E0054
    // 0x801DFEDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFEDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFEE0:
    // 0x801DFEE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DFEE4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFEE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DFEEC: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801DFEF0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFEF4: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFEF8: div.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801DFEFC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFF04: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801DFF08: lwc1        $f4, 0x74($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801DFF0C: div.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801DFF10: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DFF14: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801DFF18: div.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801DFF1C: jal         0x801E1238
    // 0x801DFF20: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E1238_60C618(rdram, ctx);
        goto after_9;
    // 0x801DFF20: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x801DFF24: b           L_801E0054
    // 0x801DFF28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFF28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFF2C:
    // 0x801DFF2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DFF30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DFF34: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DFF38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DFF3C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFF40: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFF44: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFF48: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x801DFF4C: addiu       $t8, $zero, 0x60
    ctx->r24 = ADD32(0, 0X60);
    // 0x801DFF50: addiu       $t9, $zero, 0x60
    ctx->r25 = ADD32(0, 0X60);
    // 0x801DFF54: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x801DFF58: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801DFF5C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801DFF60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFF64: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFF68: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801DFF6C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801DFF70: jal         0x801E1E24
    // 0x801DFF74: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_10;
    // 0x801DFF74: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x801DFF78: b           L_801E0054
    // 0x801DFF7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFF7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFF80:
    // 0x801DFF80: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFF84: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFF88: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFF90: jal         0x801E16D0
    // 0x801DFF94: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E16D0_60CAB0(rdram, ctx);
        goto after_11;
    // 0x801DFF94: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x801DFF98: b           L_801E0054
    // 0x801DFF9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFF9C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFFA0:
    // 0x801DFFA0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DFFA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801DFFA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DFFAC: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801DFFB0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFFB4: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFFB8: div.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801DFFBC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFFC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFFC4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DFFC8: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801DFFCC: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801DFFD0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801DFFD4: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801DFFD8: div.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801DFFDC: jal         0x801E1314
    // 0x801DFFE0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E1314_60C6F4(rdram, ctx);
        goto after_12;
    // 0x801DFFE0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x801DFFE4: b           L_801E0054
    // 0x801DFFE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801DFFE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DFFEC:
    // 0x801DFFEC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DFFF0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DFFF4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DFFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFFFC: jal         0x802050E4
    // 0x801E0000: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_802050E4_6304C4(rdram, ctx);
        goto after_13;
    // 0x801E0000: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x801E0004: b           L_801E0054
    // 0x801E0008: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E0054;
    // 0x801E0008: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E000C:
    // 0x801E000C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0010: lwc1        $f8, -0x2444($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2444);
    // 0x801E0014: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E0018: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801E001C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801E0020: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x801E0024: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x801E0028: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x801E002C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x801E0030: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x801E0034: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E0038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E003C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801E0040: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801E0044: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x801E0048: jal         0x801E1E24
    // 0x801E004C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_14;
    // 0x801E004C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x801E0050: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E0054:
    // 0x801E0054: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E0058: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x801E005C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801E0060: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E0064: jr          $ra
    // 0x801E0068: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801E0068: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801E83E8_6137C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E83E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E83EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E83F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E83F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E83F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E83FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E8400: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801E8404: lwc1        $f10, 0x78($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801E8408: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801E840C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801E8410: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E8414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E8418: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x801E841C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8420: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x801E8424: addiu       $a1, $a1, -0x4E78
    ctx->r5 = ADD32(ctx->r5, -0X4E78);
    // 0x801E8428: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E842C: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x801E8430: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x801E8434: jal         0x801D2EE4
    // 0x801E8438: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_0;
    // 0x801E8438: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x801E843C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8440: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E8444: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E8448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E844C: jal         0x801D34D0
    // 0x801E8450: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_1;
    // 0x801E8450: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x801E8454: jal         0x80038BC8
    // 0x801E8458: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E8458: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    after_2:
    // 0x801E845C: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x801E8460: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E8464: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    // 0x801E8468: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E846C: jal         0x8003521C
    // 0x801E8470: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E8470: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    after_3:
    // 0x801E8474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8478: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E847C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E8480: jr          $ra
    // 0x801E8484: nop

    TRACE_RETURN()
    return;
    // 0x801E8484: nop

;}
RECOMP_FUNC void func_801F5AD4_620EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5AD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F5AD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5ADC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F5AE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F5AE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F5AE8: jal         0x801F7074
    // 0x801F5AEC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F5AEC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801F5AF0: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F5AF4: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F5AF8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801F5AFC: nop

    // 0x801F5B00: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801F5B04: jal         0x800417E0
    // 0x801F5B08: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x801F5B08: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x801F5B0C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F5B10: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801F5B14: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F5B18: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801F5B1C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801F5B20: jal         0x8000E28C
    // 0x801F5B24: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_2;
    // 0x801F5B24: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    after_2:
    // 0x801F5B28: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801F5B2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F5B30: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x801F5B34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F5B38: sw          $v0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r2;
    // 0x801F5B3C: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x801F5B40: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801F5B44: addiu       $a1, $a1, -0x4D50
    ctx->r5 = ADD32(ctx->r5, -0X4D50);
    // 0x801F5B48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5B4C: swc1        $f8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f8.u32l;
    // 0x801F5B50: jal         0x801D2EE4
    // 0x801F5B54: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801F5B54: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x801F5B58: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F5B5C: jal         0x8003521C
    // 0x801F5B60: addiu       $a0, $a0, 0x5B78
    ctx->r4 = ADD32(ctx->r4, 0X5B78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F5B60: addiu       $a0, $a0, 0x5B78
    ctx->r4 = ADD32(ctx->r4, 0X5B78);
    after_4:
    // 0x801F5B64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5B68: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F5B6C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F5B70: jr          $ra
    // 0x801F5B74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F5B74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E26A4_60DA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E26A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E26A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E26AC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801E26B0: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E26B4: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E26B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E26BC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801E26C0: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E26C4: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E26C8: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E26CC: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E26D0: addiu       $t9, $zero, 0x4AC
    ctx->r25 = ADD32(0, 0X4AC);
    // 0x801E26D4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E26D8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E26DC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E26E0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E26E4: addiu       $a1, $a1, 0x2CC8
    ctx->r5 = ADD32(ctx->r5, 0X2CC8);
    // 0x801E26E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E26EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E26F0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E26F4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E26F8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E26FC: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E2700: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E2704: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E2708: jal         0x800358E8
    // 0x801E270C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E270C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E2710: beq         $v0, $zero, L_801E2780
    if (ctx->r2 == 0) {
        // 0x801E2714: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E2780;
    }
    // 0x801E2714: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E2718: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E271C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x801E2720: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x801E2724: swc1        $f8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f8.u32l;
    // 0x801E2728: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E272C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E2730: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E2734: swc1        $f10, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f10.u32l;
    // 0x801E2738: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E273C: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x801E2740: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
    // 0x801E2744: sw          $t0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r8;
    // 0x801E2748: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x801E274C: sw          $t1, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r9;
    // 0x801E2750: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x801E2754: lbu         $t2, 0x5B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X5B);
    // 0x801E2758: addiu       $t3, $t3, -0x51E0
    ctx->r11 = ADD32(ctx->r11, -0X51E0);
    // 0x801E275C: sw          $t3, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r11;
    // 0x801E2760: sw          $t2, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r10;
    // 0x801E2764: jal         0x801E18E4
    // 0x801E2768: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E2768: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E276C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E2770: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801E2774: jal         0x801D31CC
    // 0x801E2778: addiu       $a1, $a1, -0x5DE8
    ctx->r5 = ADD32(ctx->r5, -0X5DE8);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801E2778: addiu       $a1, $a1, -0x5DE8
    ctx->r5 = ADD32(ctx->r5, -0X5DE8);
    after_2:
    // 0x801E277C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E2780:
    // 0x801E2780: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E2784: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E2788: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E278C: jr          $ra
    // 0x801E2790: nop

    TRACE_RETURN()
    return;
    // 0x801E2790: nop

;}
RECOMP_FUNC void func_801D9474_604854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9474: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D9478: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D947C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D9480: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801D9484: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D9488: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801D948C: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801D9490: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801D9494: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x801D9498: bne         $a0, $at, L_801D94B0
    if (ctx->r4 != ctx->r1) {
        // 0x801D949C: lw          $v1, -0x1130($v1)
        ctx->r3 = MEM_W(ctx->r3, -0X1130);
            goto L_801D94B0;
    }
    // 0x801D949C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D94A0: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x801D94A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D94A8: b           L_801D94BC
    // 0x801D94AC: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
        goto L_801D94BC;
    // 0x801D94AC: lw          $t0, 0x28($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X28);
L_801D94B0:
    // 0x801D94B0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801D94B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D94B8: lw          $t0, 0x20($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X20);
L_801D94BC:
    // 0x801D94BC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D94C0: addiu       $a1, $a1, 0x40C
    ctx->r5 = ADD32(ctx->r5, 0X40C);
    // 0x801D94C4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D94C8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D94CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D94D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D94D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D94D8: ldc1        $f8, -0x26F0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X26F0);
    // 0x801D94DC: mul.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x801D94E0: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x801D94E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D94E8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D94EC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D94F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D94F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D94F8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D94FC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D9500: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801D9504: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801D9508: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801D950C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801D9510: addiu       $a2, $a2, -0x5AA0
    ctx->r6 = ADD32(ctx->r6, -0X5AA0);
    // 0x801D9514: addiu       $a0, $a0, -0x68FC
    ctx->r4 = ADD32(ctx->r4, -0X68FC);
    // 0x801D9518: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D951C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D9520: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x801D9524: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D9528: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D952C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D9530: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D9534: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D9538: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801D953C: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x801D9540: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x801D9544: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x801D9548: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801D954C: jal         0x80035854
    // 0x801D9550: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801D9550: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x801D9554: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D9558: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x801D955C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x801D9560: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D9564: beq         $v0, $zero, L_801D96EC
    if (ctx->r2 == 0) {
        // 0x801D9568: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D96EC;
    }
    // 0x801D9568: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D956C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801D9570: addiu       $a2, $a2, 0x488
    ctx->r6 = ADD32(ctx->r6, 0X488);
    // 0x801D9574: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801D9578: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D957C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801D9580: addiu       $t8, $zero, 0x4A8
    ctx->r24 = ADD32(0, 0X4A8);
    // 0x801D9584: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801D9588: addiu       $a3, $a3, -0x5AA0
    ctx->r7 = ADD32(ctx->r7, -0X5AA0);
    // 0x801D958C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801D9590: addiu       $a1, $a1, -0x6268
    ctx->r5 = ADD32(ctx->r5, -0X6268);
    // 0x801D9594: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D9598: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801D959C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801D95A0: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801D95A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D95A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D95AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801D95B0: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801D95B4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801D95B8: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801D95BC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D95C0: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x801D95C4: jal         0x800358E8
    // 0x801D95C8: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x801D95C8: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    after_1:
    // 0x801D95CC: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x801D95D0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x801D95D4: bne         $v0, $zero, L_801D95EC
    if (ctx->r2 != 0) {
        // 0x801D95D8: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_801D95EC;
    }
    // 0x801D95D8: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x801D95DC: jal         0x80034EF8
    // 0x801D95E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801D95E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D95E4: b           L_801D96F0
    // 0x801D95E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D96F0;
    // 0x801D95E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D95EC:
    // 0x801D95EC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801D95F0: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x801D95F4: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x801D95F8: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x801D95FC: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x801D9600: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801D9604: addiu       $a3, $zero, 0x4A8
    ctx->r7 = ADD32(0, 0X4A8);
    // 0x801D9608: jal         0x8000E100
    // 0x801D960C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    func_8000E100_ED00(rdram, ctx);
        goto after_3;
    // 0x801D960C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_3:
    // 0x801D9610: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801D9614: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x801D9618: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x801D961C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x801D9620: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x801D9624: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
    // 0x801D9628: sw          $t1, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r9;
    // 0x801D962C: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801D9630: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801D9634: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801D9638: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x801D963C: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x801D9640: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x801D9644: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801D9648: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
    // 0x801D964C: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x801D9650: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D9654: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D9658: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x801D965C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9660: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D9664: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D9668: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D966C: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x801D9670: addiu       $t9, $zero, -0x16
    ctx->r25 = ADD32(0, -0X16);
    // 0x801D9674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D9678: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801D967C: ldc1        $f10, -0x26E8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X26E8);
    // 0x801D9680: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x801D9684: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D9688: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801D968C: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x801D9690: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x801D9694: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D9698: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801D969C: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x801D96A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D96A4: trunc.w.d   $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x801D96A8: swc1        $f18, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
    // 0x801D96AC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D96B0: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D96B4: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801D96B8: trunc.w.s   $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D96BC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x801D96C0: nop

    // 0x801D96C4: sw          $t5, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r13;
    // 0x801D96C8: lhu         $t6, 0x16($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X16);
    // 0x801D96CC: sw          $t6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r14;
    // 0x801D96D0: lhu         $t7, 0x14($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X14);
    // 0x801D96D4: sw          $t8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r24;
    // 0x801D96D8: sw          $t9, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r25;
    // 0x801D96DC: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x801D96E0: sw          $t0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r8;
    // 0x801D96E4: b           L_801D96F0
    // 0x801D96E8: sw          $t7, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r15;
        goto L_801D96F0;
    // 0x801D96E8: sw          $t7, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r15;
L_801D96EC:
    // 0x801D96EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D96F0:
    // 0x801D96F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D96F4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801D96F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801D96FC: jr          $ra
    // 0x801D9700: nop

    TRACE_RETURN()
    return;
    // 0x801D9700: nop

;}
RECOMP_FUNC void func_801FA7D8_625BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA7D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801FA7DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801FA7E0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801FA7E4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801FA7E8: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FA7EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FA7F0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FA7F4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FA7F8: bgez        $t7, L_801FA894
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801FA7FC: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801FA894;
    }
    // 0x801FA7FC: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801FA800: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FA804: jal         0x801D2F40
    // 0x801FA808: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FA808: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_0:
    // 0x801FA80C: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801FA810: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FA814: ldc1        $f8, -0x1738($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1738);
    // 0x801FA818: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FA81C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801FA820: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801FA824: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801FA828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FA82C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801FA830: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FA834: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x801FA838: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801FA83C: swc1        $f16, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f16.u32l;
    // 0x801FA840: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801FA844: lw          $t0, 0x2C8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C8);
    // 0x801FA848: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x801FA84C: bnel        $t1, $zero, L_801FA8F4
    if (ctx->r9 != 0) {
        // 0x801FA850: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801FA8F4;
    }
    goto skip_0;
    // 0x801FA850: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x801FA854: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FA858: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FA85C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801FA860: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801FA864: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801FA868: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FA86C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FA870: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801FA874: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801FA878: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801FA87C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801FA880: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801FA884: jal         0x801DFB90
    // 0x801FA888: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x801FA888: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801FA88C: b           L_801FA8F4
    // 0x801FA890: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801FA8F4;
    // 0x801FA890: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801FA894:
    // 0x801FA894: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801FA898: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801FA89C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801FA8A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FA8A4: lw          $t3, 0x2C8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X2C8);
    // 0x801FA8A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801FA8AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801FA8B0: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x801FA8B4: bne         $t4, $zero, L_801FA8F0
    if (ctx->r12 != 0) {
        // 0x801FA8B8: lui         $a3, 0x3F4C
        ctx->r7 = S32(0X3F4C << 16);
            goto L_801FA8F0;
    }
    // 0x801FA8B8: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x801FA8BC: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FA8C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FA8C4: lui         $at, 0xC3EB
    ctx->r1 = S32(0XC3EB << 16);
    // 0x801FA8C8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801FA8CC: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801FA8D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FA8D4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FA8D8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801FA8DC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801FA8E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801FA8E4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801FA8E8: jal         0x801DFB90
    // 0x801FA8EC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_2;
    // 0x801FA8EC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_2:
L_801FA8F0:
    // 0x801FA8F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801FA8F4:
    // 0x801FA8F4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801FA8F8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801FA8FC: jr          $ra
    // 0x801FA900: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801FA900: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80207158_632538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207158: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8020715C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80207160: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80207164: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80207168: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8020716C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80207170: lw          $a2, 0x78($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X78);
    // 0x80207174: lwc1        $f14, 0x74($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80207178: lwc1        $f12, 0x70($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8020717C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80207180: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80207184: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80207188: jal         0x8000EDF4
    // 0x8020718C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EDF4_F9F4(rdram, ctx);
        goto after_0;
    // 0x8020718C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80207190: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80207194: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80207198: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8020719C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802071A0: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x802071A4: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802071A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802071AC: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x802071B0: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x802071B4: bc1f        L_80207224
    if (!c1cs) {
        // 0x802071B8: addiu       $t7, $sp, 0x3C
        ctx->r15 = ADD32(ctx->r29, 0X3C);
            goto L_80207224;
    }
    // 0x802071B8: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x802071BC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802071C0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802071C4: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x802071C8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x802071CC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802071D0: lwc1        $f12, -0x1174($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1174);
    // 0x802071D4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x802071D8: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x802071DC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802071E0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802071E4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802071E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802071EC: jal         0x8000E4E4
    // 0x802071F0: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_1;
    // 0x802071F0: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x802071F4: lwc1        $f18, 0x70($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X70);
    // 0x802071F8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802071FC: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80207200: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80207204: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x80207208: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x8020720C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80207210: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80207214: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x80207218: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8020721C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80207220: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
L_80207224:
    // 0x80207224: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x80207228: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x8020722C: beql        $at, $zero, L_80207240
    if (ctx->r1 == 0) {
        // 0x80207230: lw          $t0, 0x4C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X4C);
            goto L_80207240;
    }
    goto skip_0;
    // 0x80207230: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x80207234: jal         0x801D614C
    // 0x80207238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_2;
    // 0x80207238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8020723C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
L_80207240:
    // 0x80207240: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x80207244: c.le.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl <= ctx->f8.fl;
    // 0x80207248: nop

    // 0x8020724C: bc1f        L_80207264
    if (!c1cs) {
        // 0x80207250: nop
    
            goto L_80207264;
    }
    // 0x80207250: nop

    // 0x80207254: jal         0x80034ED4
    // 0x80207258: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x80207258: nop

    after_3:
    // 0x8020725C: b           L_80207278
    // 0x80207260: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80207278;
    // 0x80207260: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80207264:
    // 0x80207264: jal         0x80207698
    // 0x80207268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80207698_632A78(rdram, ctx);
        goto after_4;
    // 0x80207268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8020726C: jal         0x802074EC
    // 0x80207270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802074EC_6328CC(rdram, ctx);
        goto after_5;
    // 0x80207270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80207274: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80207278:
    // 0x80207278: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8020727C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80207280: jr          $ra
    // 0x80207284: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80207284: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801FFE34_62B214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFE34: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FFE38: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FFE3C: addiu       $t6, $zero, 0x5B
    ctx->r14 = ADD32(0, 0X5B);
    // 0x801FFE40: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801FFE44: jr          $ra
    // 0x801FFE48: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801FFE48: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801FACBC_62609C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FACBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FACC0: jr          $ra
    // 0x801FACC4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801FACC4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E1E24_60D204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1E24: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E1E28: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1E2C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1E30: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E1E34: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E1E38: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E1E3C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E1E40: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1E44: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E1E48: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1E4C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1E50: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1E54: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E1E58: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1E5C: addiu       $t9, $zero, 0x4AB
    ctx->r25 = ADD32(0, 0X4AB);
    // 0x801E1E60: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E1E64: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E1E68: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1E6C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E1E70: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E1E74: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E1E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E1E7C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1E80: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1E84: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E1E88: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E1E8C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E1E90: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E1E94: jal         0x800358E8
    // 0x801E1E98: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E1E98: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1E9C: beq         $v0, $zero, L_801E1F08
    if (ctx->r2 == 0) {
        // 0x801E1EA0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E1F08;
    }
    // 0x801E1EA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E1EA4: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1EA8: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E1EAC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E1EB0: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E1EB4: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E1EB8: addiu       $t3, $t3, -0x4FB0
    ctx->r11 = ADD32(ctx->r11, -0X4FB0);
    // 0x801E1EBC: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x801E1EC0: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E1EC4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E1EC8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801E1ECC: addiu       $t6, $t6, -0x54E0
    ctx->r14 = ADD32(ctx->r14, -0X54E0);
    // 0x801E1ED0: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E1ED4: lhu         $t0, 0x72($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X72);
    // 0x801E1ED8: sw          $t0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r8;
    // 0x801E1EDC: lhu         $t1, 0x76($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X76);
    // 0x801E1EE0: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x801E1EE4: lhu         $t2, 0x7A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X7A);
    // 0x801E1EE8: sw          $t3, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r11;
    // 0x801E1EEC: sw          $t4, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r12;
    // 0x801E1EF0: sw          $t5, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r13;
    // 0x801E1EF4: sw          $t6, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r14;
    // 0x801E1EF8: sw          $t2, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r10;
    // 0x801E1EFC: jal         0x801E18E4
    // 0x801E1F00: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E1F00: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E1F04: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E1F08:
    // 0x801E1F08: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1F0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E1F10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E1F14: jr          $ra
    // 0x801E1F18: nop

    TRACE_RETURN()
    return;
    // 0x801E1F18: nop

;}
RECOMP_FUNC void func_801E2B78_60DF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2B78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2B80: bne         $a1, $zero, L_801E2B98
    if (ctx->r5 != 0) {
        // 0x801E2B84: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_801E2B98;
    }
    // 0x801E2B84: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E2B88: jal         0x80034ED4
    // 0x801E2B8C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2B8C: nop

    after_0:
    // 0x801E2B90: b           L_801E2C14
    // 0x801E2B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E2C14;
    // 0x801E2B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E2B98:
    // 0x801E2B98: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x801E2B9C: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801E2BA0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E2BA4: sb          $t6, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r14;
    // 0x801E2BA8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x801E2BAC: jal         0x801D6508
    // 0x801E2BB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801E2BB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E2BB4: jal         0x801D60E4
    // 0x801E2BB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D60E4_6014C4(rdram, ctx);
        goto after_2;
    // 0x801E2BB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801E2BBC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801E2BC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2BC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E2BC8: lw          $t8, 0xA4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XA4);
    // 0x801E2BCC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801E2BD0: bgez        $t8, L_801E2BE4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801E2BD4: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801E2BE4;
    }
    // 0x801E2BD4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E2BD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E2BDC: nop

    // 0x801E2BE0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801E2BE4:
    // 0x801E2BE4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801E2BE8: jal         0x801D2F40
    // 0x801E2BEC: nop

    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801E2BEC: nop

    after_3:
    // 0x801E2BF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E2BF4: nop

    // 0x801E2BF8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801E2BFC: nop

    // 0x801E2C00: bc1fl       L_801E2C14
    if (!c1cs) {
        // 0x801E2C04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E2C14;
    }
    goto skip_0;
    // 0x801E2C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E2C08: jal         0x80034ED4
    // 0x801E2C0C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801E2C0C: nop

    after_4:
    // 0x801E2C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E2C14:
    // 0x801E2C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2C18: jr          $ra
    // 0x801E2C1C: nop

    TRACE_RETURN()
    return;
    // 0x801E2C1C: nop

;}
RECOMP_FUNC void func_801E319C_60E57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E319C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E31A0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E31A4: lw          $a2, -0x1130($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1130);
    // 0x801E31A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E31AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E31B0: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801E31B4: lwc1        $f4, 0x74($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X74);
    // 0x801E31B8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E31BC: addiu       $t0, $t0, -0x1100
    ctx->r8 = ADD32(ctx->r8, -0X1100);
    // 0x801E31C0: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801E31C4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x801E31C8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E31CC: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x801E31D0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801E31D4: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x801E31D8: nop

    // 0x801E31DC: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x801E31E0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801E31E4: bgez        $t9, L_801E31F8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801E31E8: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_801E31F8;
    }
    // 0x801E31E8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801E31EC: addiu       $v0, $t9, 0x400
    ctx->r2 = ADD32(ctx->r25, 0X400);
    // 0x801E31F0: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x801E31F4: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
L_801E31F8:
    // 0x801E31F8: lwc1        $f10, 0x78($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X78);
    // 0x801E31FC: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801E3200: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E3204: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x801E3208: nop

    // 0x801E320C: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x801E3210: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801E3214: bgez        $t5, L_801E3228
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801E3218: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_801E3228;
    }
    // 0x801E3218: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x801E321C: addiu       $v1, $t5, 0x400
    ctx->r3 = ADD32(ctx->r13, 0X400);
    // 0x801E3220: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801E3224: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
L_801E3228:
    // 0x801E3228: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x801E322C: sh          $v1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r3;
    // 0x801E3230: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x801E3234: lbu         $t8, 0xD($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XD);
    // 0x801E3238: beql        $t8, $zero, L_801E3290
    if (ctx->r24 == 0) {
        // 0x801E323C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E3290;
    }
    goto skip_0;
    // 0x801E323C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E3240: lbu         $v1, 0xC($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XC);
    // 0x801E3244: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801E3248: addiu       $t1, $t1, -0x4F60
    ctx->r9 = ADD32(ctx->r9, -0X4F60);
    // 0x801E324C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x801E3250: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x801E3254: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801E3258: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x801E325C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801E3260: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E3264: sw          $t2, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r10;
    // 0x801E3268: lhu         $t3, 0x4($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X4);
    // 0x801E326C: sh          $t3, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r11;
    // 0x801E3270: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E3274: jal         0x80014218
    // 0x801E3278: swc1        $f4, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->f4.u32l;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x801E3278: swc1        $f4, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->f4.u32l;
    after_0:
    // 0x801E327C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E3280: addiu       $t0, $t0, -0x1100
    ctx->r8 = ADD32(ctx->r8, -0X1100);
    // 0x801E3284: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x801E3288: sb          $zero, 0xD($t4)
    MEM_B(0XD, ctx->r12) = 0;
    // 0x801E328C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E3290:
    // 0x801E3290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E3294: jr          $ra
    // 0x801E3298: nop

    TRACE_RETURN()
    return;
    // 0x801E3298: nop

;}
RECOMP_FUNC void func_801DBA08_606DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBA08: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x801DBA0C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801DBA10: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801DBA14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801DBA18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801DBA1C: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x801DBA20: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801DBA24: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801DBA28: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x801DBA2C: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x801DBA30: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801DBA34: lw          $v0, 0x18($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X18);
    // 0x801DBA38: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DBA3C: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x801DBA40: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x801DBA44: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801DBA48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DBA4C: subu        $t4, $t9, $t8
    ctx->r12 = SUB32(ctx->r25, ctx->r24);
    // 0x801DBA50: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x801DBA54: addiu       $t6, $t2, -0x100
    ctx->r14 = ADD32(ctx->r10, -0X100);
    // 0x801DBA58: andi        $a2, $t6, 0xFFFF
    ctx->r6 = ctx->r14 & 0XFFFF;
    // 0x801DBA5C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DBA60: andi        $a1, $t4, 0xFFFF
    ctx->r5 = ctx->r12 & 0XFFFF;
    // 0x801DBA64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801DBA68: jal         0x8000E68C
    // 0x801DBA6C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_8000E68C_F28C(rdram, ctx);
        goto after_0;
    // 0x801DBA6C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x801DBA70: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801DBA74: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DBA78: addiu       $t8, $s0, 0xA8
    ctx->r24 = ADD32(ctx->r16, 0XA8);
    // 0x801DBA7C: addiu       $t3, $s0, 0xAC
    ctx->r11 = ADD32(ctx->r16, 0XAC);
    // 0x801DBA80: addiu       $t4, $s0, 0xB0
    ctx->r12 = ADD32(ctx->r16, 0XB0);
    // 0x801DBA84: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801DBA88: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801DBA8C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DBA90: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801DBA94: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x801DBA98: jal         0x8000E4E4
    // 0x801DBA9C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_1;
    // 0x801DBA9C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x801DBAA0: lw          $a1, 0xEC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XEC);
    // 0x801DBAA4: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x801DBAA8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DBAAC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801DBAB0: addiu       $t7, $t7, -0x62EC
    ctx->r15 = ADD32(ctx->r15, -0X62EC);
    // 0x801DBAB4: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x801DBAB8: swc1        $f4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f4.u32l;
    // 0x801DBABC: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801DBAC0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x801DBAC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBAC8: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
    // 0x801DBACC: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801DBAD0: swc1        $f8, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f8.u32l;
    // 0x801DBAD4: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801DBAD8: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x801DBADC: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801DBAE0: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x801DBAE4: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801DBAE8: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x801DBAEC: lh          $t9, 0xC($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XC);
    // 0x801DBAF0: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801DBAF4: jal         0x801DBF20
    // 0x801DBAF8: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    func_801DBF20_607300(rdram, ctx);
        goto after_2;
    // 0x801DBAF8: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    after_2:
    // 0x801DBAFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801DBB00: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801DBB04: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DBB08: sw          $v0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r2;
    // 0x801DBB0C: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    // 0x801DBB10: sw          $t8, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r24;
    // 0x801DBB14: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x801DBB18: jal         0x8003521C
    // 0x801DBB1C: addiu       $a0, $a0, -0x44CC
    ctx->r4 = ADD32(ctx->r4, -0X44CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801DBB1C: addiu       $a0, $a0, -0x44CC
    ctx->r4 = ADD32(ctx->r4, -0X44CC);
    after_3:
    // 0x801DBB20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801DBB24: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801DBB28: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x801DBB2C: jr          $ra
    // 0x801DBB30: nop

    TRACE_RETURN()
    return;
    // 0x801DBB30: nop

;}
RECOMP_FUNC void func_801EB3BC_61679C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB3BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EB3C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EB3C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EB3C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EB3CC: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x801EB3D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801EB3D4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801EB3D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EB3DC: beq         $v1, $zero, L_801EB428
    if (ctx->r3 == 0) {
        // 0x801EB3E0: addiu       $a1, $v0, 0x140
        ctx->r5 = ADD32(ctx->r2, 0X140);
            goto L_801EB428;
    }
    // 0x801EB3E0: addiu       $a1, $v0, 0x140
    ctx->r5 = ADD32(ctx->r2, 0X140);
    // 0x801EB3E4: lw          $t6, 0x1CC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1CC);
    // 0x801EB3E8: bne         $t6, $v1, L_801EB420
    if (ctx->r14 != ctx->r3) {
        // 0x801EB3EC: nop
    
            goto L_801EB420;
    }
    // 0x801EB3EC: nop

    // 0x801EB3F0: lbu         $t7, 0xE($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XE);
    // 0x801EB3F4: bne         $t7, $zero, L_801EB420
    if (ctx->r15 != 0) {
        // 0x801EB3F8: nop
    
            goto L_801EB420;
    }
    // 0x801EB3F8: nop

    // 0x801EB3FC: lbu         $t8, 0x2C5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2C5);
    // 0x801EB400: bne         $t8, $zero, L_801EB420
    if (ctx->r24 != 0) {
        // 0x801EB404: nop
    
            goto L_801EB420;
    }
    // 0x801EB404: nop

    // 0x801EB408: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x801EB40C: jal         0x80038BC8
    // 0x801EB410: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EB410: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    after_0:
    // 0x801EB414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EB418: jal         0x801EB454
    // 0x801EB41C: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    func_801EB454_616834(rdram, ctx);
        goto after_1;
    // 0x801EB41C: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    after_1:
L_801EB420:
    // 0x801EB420: jal         0x801D36C4
    // 0x801EB424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_2;
    // 0x801EB424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_801EB428:
    // 0x801EB428: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x801EB42C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801EB430: bgtz        $t0, L_801EB440
    if (SIGNED(ctx->r8) > 0) {
        // 0x801EB434: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_801EB440;
    }
    // 0x801EB434: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801EB438: jal         0x80035020
    // 0x801EB43C: nop

    func_80035020_35C20(rdram, ctx);
        goto after_3;
    // 0x801EB43C: nop

    after_3:
L_801EB440:
    // 0x801EB440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EB444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EB448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EB44C: jr          $ra
    // 0x801EB450: nop

    TRACE_RETURN()
    return;
    // 0x801EB450: nop

;}
RECOMP_FUNC void func_801F89D8_623DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F89D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F89DC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F89E0: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F89E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F89E8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801F89EC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801F89F0: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F89F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F89F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F89FC: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801F8A00: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F8A04: sltiu       $at, $t8, 0x14
    ctx->r1 = ctx->r24 < 0X14 ? 1 : 0;
    // 0x801F8A08: beql        $at, $zero, L_801F8A2C
    if (ctx->r1 == 0) {
        // 0x801F8A0C: lhu         $t0, 0x16($s1)
        ctx->r8 = MEM_HU(ctx->r17, 0X16);
            goto L_801F8A2C;
    }
    goto skip_0;
    // 0x801F8A0C: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
    skip_0:
    // 0x801F8A10: jal         0x80035020
    // 0x801F8A14: sb          $t9, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r25;
    func_80035020_35C20(rdram, ctx);
        goto after_0;
    // 0x801F8A14: sb          $t9, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r25;
    after_0:
    // 0x801F8A18: jal         0x80038BC8
    // 0x801F8A1C: ori         $a0, $zero, 0x8130
    ctx->r4 = 0 | 0X8130;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801F8A1C: ori         $a0, $zero, 0x8130
    ctx->r4 = 0 | 0X8130;
    after_1:
    // 0x801F8A20: b           L_801F8BA0
    // 0x801F8A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F8BA0;
    // 0x801F8A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F8A28: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
L_801F8A2C:
    // 0x801F8A2C: lw          $t1, 0x98($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X98);
    // 0x801F8A30: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801F8A34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F8A38: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801F8A3C: sh          $t2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r10;
    // 0x801F8A40: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801F8A44: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801F8A48: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801F8A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F8A50: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801F8A54: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F8A58: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801F8A5C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x801F8A60: jal         0x8000DF10
    // 0x801F8A64: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801F8A64: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_2:
    // 0x801F8A68: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F8A6C: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F8A70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8A74: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801F8A78: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x801F8A7C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F8A80: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801F8A84: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801F8A88: sw          $t7, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r15;
    // 0x801F8A8C: jal         0x800417E0
    // 0x801F8A90: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_3;
    // 0x801F8A90: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_3:
    // 0x801F8A94: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x801F8A98: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F8A9C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F8AA0: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801F8AA4: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x801F8AA8: nop

    // 0x801F8AAC: bc1fl       L_801F8B1C
    if (!c1cs) {
        // 0x801F8AB0: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_801F8B1C;
    }
    goto skip_1;
    // 0x801F8AB0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_1:
    // 0x801F8AB4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F8AB8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F8ABC: swc1        $f14, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f14.u32l;
    // 0x801F8AC0: swc1        $f14, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f14.u32l;
    // 0x801F8AC4: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801F8AC8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801F8ACC: bgtz        $t9, L_801F8AF8
    if (SIGNED(ctx->r25) > 0) {
        // 0x801F8AD0: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_801F8AF8;
    }
    // 0x801F8AD0: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801F8AD4: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801F8AD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F8ADC: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x801F8AE0: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801F8AE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F8AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F8AEC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F8AF0: jal         0x801F8BB0
    // 0x801F8AF4: nop

    func_801F8BB0_623F90(rdram, ctx);
        goto after_4;
    // 0x801F8AF4: nop

    after_4:
L_801F8AF8:
    // 0x801F8AF8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F8AFC: addiu       $v1, $v1, -0x10F4
    ctx->r3 = ADD32(ctx->r3, -0X10F4);
    // 0x801F8B00: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F8B04: slti        $at, $v0, 0x320
    ctx->r1 = SIGNED(ctx->r2) < 0X320 ? 1 : 0;
    // 0x801F8B08: bne         $at, $zero, L_801F8B9C
    if (ctx->r1 != 0) {
        // 0x801F8B0C: addiu       $t2, $v0, -0x3
        ctx->r10 = ADD32(ctx->r2, -0X3);
            goto L_801F8B9C;
    }
    // 0x801F8B0C: addiu       $t2, $v0, -0x3
    ctx->r10 = ADD32(ctx->r2, -0X3);
    // 0x801F8B10: b           L_801F8B9C
    // 0x801F8B14: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_801F8B9C;
    // 0x801F8B14: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x801F8B18: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_801F8B1C:
    // 0x801F8B1C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F8B20: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F8B24: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801F8B28: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801F8B2C: jal         0x8000E39C
    // 0x801F8B30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_5;
    // 0x801F8B30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_5:
    // 0x801F8B34: jal         0x801D6124
    // 0x801F8B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6124_601504(rdram, ctx);
        goto after_6;
    // 0x801F8B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801F8B3C: lw          $t3, 0x7C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X7C);
    // 0x801F8B40: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F8B44: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x801F8B48: bgtz        $t4, L_801F8B74
    if (SIGNED(ctx->r12) > 0) {
        // 0x801F8B4C: sw          $t4, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r12;
            goto L_801F8B74;
    }
    // 0x801F8B4C: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x801F8B50: lwc1        $f10, 0x90($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801F8B54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F8B58: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x801F8B5C: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801F8B60: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F8B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F8B68: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801F8B6C: jal         0x801F8BB0
    // 0x801F8B70: nop

    func_801F8BB0_623F90(rdram, ctx);
        goto after_7;
    // 0x801F8B70: nop

    after_7:
L_801F8B74:
    // 0x801F8B74: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    // 0x801F8B78: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x801F8B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F8B80: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801F8B84: bgtz        $t8, L_801F8B9C
    if (SIGNED(ctx->r24) > 0) {
        // 0x801F8B88: sw          $t8, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r24;
            goto L_801F8B9C;
    }
    // 0x801F8B88: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x801F8B8C: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x801F8B90: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
    // 0x801F8B94: jal         0x801F8E78
    // 0x801F8B98: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801F8E78_624258(rdram, ctx);
        goto after_8;
    // 0x801F8B98: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_8:
L_801F8B9C:
    // 0x801F8B9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F8BA0:
    // 0x801F8BA0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801F8BA4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801F8BA8: jr          $ra
    // 0x801F8BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F8BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D4278_5FF658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4278: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D427C: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D4280: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D4284: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801D4288: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801D428C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D4290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D4294: bne         $t6, $zero, L_801D42A4
    if (ctx->r14 != 0) {
        // 0x801D4298: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_801D42A4;
    }
    // 0x801D4298: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801D429C: b           L_801D4328
    // 0x801D42A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4328;
    // 0x801D42A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D42A4:
    // 0x801D42A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D42A8: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D42AC: bne         $t7, $zero, L_801D42BC
    if (ctx->r15 != 0) {
        // 0x801D42B0: nop
    
            goto L_801D42BC;
    }
    // 0x801D42B0: nop

    // 0x801D42B4: b           L_801D4328
    // 0x801D42B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4328;
    // 0x801D42B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D42BC:
    // 0x801D42BC: bne         $a1, $zero, L_801D42CC
    if (ctx->r5 != 0) {
        // 0x801D42C0: nop
    
            goto L_801D42CC;
    }
    // 0x801D42C0: nop

    // 0x801D42C4: b           L_801D4328
    // 0x801D42C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4328;
    // 0x801D42C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D42CC:
    // 0x801D42CC: bne         $a2, $zero, L_801D42DC
    if (ctx->r6 != 0) {
        // 0x801D42D0: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801D42DC;
    }
    // 0x801D42D0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D42D4: b           L_801D4328
    // 0x801D42D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4328;
    // 0x801D42D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D42DC:
    // 0x801D42DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D42E0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801D42E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D42E8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x801D42EC: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x801D42F0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801D42F4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x801D42F8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x801D42FC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D4300: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D4304: jal         0x8002A7BC
    // 0x801D4308: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_8002A7BC_2B3BC(rdram, ctx);
        goto after_0;
    // 0x801D4308: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801D430C: lh          $t8, 0x54($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X54);
    // 0x801D4310: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D4314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4318: bne         $t8, $at, L_801D4328
    if (ctx->r24 != ctx->r1) {
        // 0x801D431C: nop
    
            goto L_801D4328;
    }
    // 0x801D431C: nop

    // 0x801D4320: b           L_801D4328
    // 0x801D4324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D4328;
    // 0x801D4324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D4328:
    // 0x801D4328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D432C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801D4330: jr          $ra
    // 0x801D4334: nop

    TRACE_RETURN()
    return;
    // 0x801D4334: nop

;}
RECOMP_FUNC void func_801D08C8_5FBCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D08C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D08CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D08D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D08D4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801D08D8: jal         0x801D2C90
    // 0x801D08DC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801D2C90_5FE070(rdram, ctx);
        goto after_0;
    // 0x801D08DC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D08E0: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801D08E4: lw          $s0, -0x1130($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X1130);
    // 0x801D08E8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D08EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D08F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D08F4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801D08F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D08FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0900: swc1        $f0, 0x178($s0)
    MEM_W(0X178, ctx->r16) = ctx->f0.u32l;
    // 0x801D0904: swc1        $f0, 0x17C($s0)
    MEM_W(0X17C, ctx->r16) = ctx->f0.u32l;
    // 0x801D0908: swc1        $f0, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->f0.u32l;
    // 0x801D090C: swc1        $f4, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f4.u32l;
    // 0x801D0910: swc1        $f6, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f6.u32l;
    // 0x801D0914: lwc1        $f8, -0x2E2C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E2C);
    // 0x801D0918: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D091C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0920: addiu       $a0, $a0, 0xAA4
    ctx->r4 = ADD32(ctx->r4, 0XAA4);
    // 0x801D0924: sb          $t6, 0x190($s0)
    MEM_B(0X190, ctx->r16) = ctx->r14;
    // 0x801D0928: sw          $zero, 0x194($s0)
    MEM_W(0X194, ctx->r16) = 0;
    // 0x801D092C: swc1        $f8, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->f8.u32l;
    // 0x801D0930: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D0934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D0938: jal         0x80034DD8
    // 0x801D093C: addiu       $s0, $s0, 0x178
    ctx->r16 = ADD32(ctx->r16, 0X178);
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801D093C: addiu       $s0, $s0, 0x178
    ctx->r16 = ADD32(ctx->r16, 0X178);
    after_1:
    // 0x801D0940: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801D0944: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x801D0948: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D094C: jal         0x80034DD8
    // 0x801D0950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x801D0950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801D0954: addiu       $t7, $zero, -0x44C
    ctx->r15 = ADD32(0, -0X44C);
    // 0x801D0958: sw          $t7, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r15;
    // 0x801D095C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x801D0960: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D0964: jal         0x80034DD8
    // 0x801D0968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_3;
    // 0x801D0968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801D096C: addiu       $t8, $zero, -0x898
    ctx->r24 = ADD32(0, -0X898);
    // 0x801D0970: sw          $t8, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r24;
    // 0x801D0974: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0978: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x801D097C: jal         0x8003521C
    // 0x801D0980: addiu       $a0, $a0, 0x998
    ctx->r4 = ADD32(ctx->r4, 0X998);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801D0980: addiu       $a0, $a0, 0x998
    ctx->r4 = ADD32(ctx->r4, 0X998);
    after_4:
    // 0x801D0984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D098C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D0990: jr          $ra
    // 0x801D0994: nop

    TRACE_RETURN()
    return;
    // 0x801D0994: nop

;}
RECOMP_FUNC void func_801EF630_61AA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EF634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF638: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801EF63C: jal         0x801F7168
    // 0x801EF640: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F7168_622548(rdram, ctx);
        goto after_0;
    // 0x801EF640: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EF644: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801EF648: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801EF64C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EF650: lwc1        $f6, 0x20($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801EF654: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801EF658: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801EF65C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EF660: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801EF664: jal         0x801D326C
    // 0x801EF668: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801D326C_5FE64C(rdram, ctx);
        goto after_1;
    // 0x801EF668: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801EF66C: lui         $a1, 0xBDCC
    ctx->r5 = S32(0XBDCC << 16);
    // 0x801EF670: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801EF674: jal         0x801D6508
    // 0x801EF678: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801EF678: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801EF67C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801EF680: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801EF684: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801EF688: lwc1        $f18, 0x74($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X74);
    // 0x801EF68C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x801EF690: nop

    // 0x801EF694: bc1fl       L_801EF6F8
    if (!c1cs) {
        // 0x801EF698: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF6F8;
    }
    goto skip_0;
    // 0x801EF698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801EF69C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801EF6A0: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x801EF6A4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801EF6A8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801EF6AC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801EF6B0: nop

    // 0x801EF6B4: bc1fl       L_801EF6F8
    if (!c1cs) {
        // 0x801EF6B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF6F8;
    }
    goto skip_1;
    // 0x801EF6B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801EF6BC: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801EF6C0: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    // 0x801EF6C4: jal         0x8003D310
    // 0x801EF6C8: sb          $t9, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = ctx->r25;
    func_8003D310_3DF10(rdram, ctx);
        goto after_3;
    // 0x801EF6C8: sb          $t9, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = ctx->r25;
    after_3:
    // 0x801EF6CC: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x801EF6D0: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801EF6D4: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801EF6D8: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x801EF6DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801EF6E0: jal         0x801F74E4
    // 0x801EF6E4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_4;
    // 0x801EF6E4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_4:
    // 0x801EF6E8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF6EC: jal         0x8003521C
    // 0x801EF6F0: addiu       $a0, $a0, -0x8FC
    ctx->r4 = ADD32(ctx->r4, -0X8FC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801EF6F0: addiu       $a0, $a0, -0x8FC
    ctx->r4 = ADD32(ctx->r4, -0X8FC);
    after_5:
    // 0x801EF6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EF6F8:
    // 0x801EF6F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EF6FC: jr          $ra
    // 0x801EF700: nop

    TRACE_RETURN()
    return;
    // 0x801EF700: nop

;}
RECOMP_FUNC void func_801E5EE0_6112C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5EE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E5EE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E5EE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E5EEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5EF0: jal         0x801D60E4
    // 0x801E5EF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_0;
    // 0x801E5EF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E5EF8: jal         0x801EEE54
    // 0x801E5EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEE54_61A234(rdram, ctx);
        goto after_1;
    // 0x801E5EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E5F00: jal         0x801EEEA0
    // 0x801E5F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEA0_61A280(rdram, ctx);
        goto after_2;
    // 0x801E5F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E5F08: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x801E5F0C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5F10: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E5F14: bgtz        $t7, L_801E5F24
    if (SIGNED(ctx->r15) > 0) {
        // 0x801E5F18: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_801E5F24;
    }
    // 0x801E5F18: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801E5F1C: jal         0x8003521C
    // 0x801E5F20: addiu       $a0, $a0, 0x5F64
    ctx->r4 = ADD32(ctx->r4, 0X5F64);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E5F20: addiu       $a0, $a0, 0x5F64
    ctx->r4 = ADD32(ctx->r4, 0X5F64);
    after_3:
L_801E5F24:
    // 0x801E5F24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5F28: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801E5F2C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x801E5F30: jal         0x801D5D98
    // 0x801E5F34: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_4;
    // 0x801E5F34: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_4:
    // 0x801E5F38: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801E5F3C: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801E5F40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E5F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5F48: jal         0x801D5C30
    // 0x801E5F4C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_5;
    // 0x801E5F4C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_5:
    // 0x801E5F50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E5F54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E5F58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E5F5C: jr          $ra
    // 0x801E5F60: nop

    TRACE_RETURN()
    return;
    // 0x801E5F60: nop

;}
RECOMP_FUNC void func_801DE9D0_609DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE9D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DE9D4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801DE9D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE9DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801DE9E0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801DE9E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DE9E8: jal         0x801CEE80
    // 0x801DE9EC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_0;
    // 0x801DE9EC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x801DE9F0: lw          $t6, 0x80($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X80);
    // 0x801DE9F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801DE9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE9FC: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x801DEA00: bne         $v0, $at, L_801DEA14
    if (ctx->r2 != ctx->r1) {
        // 0x801DEA04: sw          $v0, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r2;
            goto L_801DEA14;
    }
    // 0x801DEA04: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x801DEA08: jal         0x801E0E7C
    // 0x801DEA0C: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    func_801E0E7C_60C25C(rdram, ctx);
        goto after_1;
    // 0x801DEA0C: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    after_1:
    // 0x801DEA10: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
L_801DEA14:
    // 0x801DEA14: beq         $v0, $zero, L_801DEA24
    if (ctx->r2 == 0) {
        // 0x801DEA18: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801DEA24;
    }
    // 0x801DEA18: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DEA1C: bnel        $v0, $at, L_801DEA74
    if (ctx->r2 != ctx->r1) {
        // 0x801DEA20: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_801DEA74;
    }
    goto skip_0;
    // 0x801DEA20: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    skip_0:
L_801DEA24:
    // 0x801DEA24: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DEA28: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801DEA2C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DEA30: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DEA34: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DEA38: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801DEA3C: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801DEA40: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801DEA44: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DEA48: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801DEA4C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801DEA50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEA54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DEA58: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DEA5C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DEA60: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DEA64: jal         0x801DFB90
    // 0x801DEA68: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_2;
    // 0x801DEA68: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801DEA6C: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x801DEA70: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
L_801DEA74:
    // 0x801DEA74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DEA78: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DEA7C: bne         $v0, $at, L_801DEABC
    if (ctx->r2 != ctx->r1) {
        // 0x801DEA80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DEABC;
    }
    // 0x801DEA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEA84: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DEA88: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801DEA8C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801DEA90: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801DEA94: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DEA98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801DEA9C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x801DEAA0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DEAA4: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DEAA8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DEAAC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DEAB0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DEAB4: jal         0x801DFB90
    // 0x801DEAB8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_3;
    // 0x801DEAB8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_3:
L_801DEABC:
    // 0x801DEABC: lw          $t8, 0x94($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X94);
    // 0x801DEAC0: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DEAC4: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801DEAC8: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x801DEACC: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
    // 0x801DEAD0: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801DEAD4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DEAD8: jal         0x8000EE50
    // 0x801DEADC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000EE50_FA50(rdram, ctx);
        goto after_4;
    // 0x801DEADC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801DEAE0: lw          $t1, 0x7C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X7C);
    // 0x801DEAE4: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x801DEAE8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DEAEC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801DEAF0: bgtz        $t2, L_801DEB04
    if (SIGNED(ctx->r10) > 0) {
        // 0x801DEAF4: sw          $t2, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r10;
            goto L_801DEB04;
    }
    // 0x801DEAF4: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801DEAF8: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x801DEAFC: jal         0x8003521C
    // 0x801DEB00: addiu       $a0, $a0, -0x14E8
    ctx->r4 = ADD32(ctx->r4, -0X14E8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801DEB00: addiu       $a0, $a0, -0x14E8
    ctx->r4 = ADD32(ctx->r4, -0X14E8);
    after_5:
L_801DEB04:
    // 0x801DEB04: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801DEB08: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801DEB0C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801DEB10: jr          $ra
    // 0x801DEB14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801DEB14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801F0540_61B920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0540: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0548: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F054C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0550: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x801F0554: jal         0x801F7004
    // 0x801F0558: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    func_801F7004_6223E4(rdram, ctx);
        goto after_0;
    // 0x801F0558: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    after_0:
    // 0x801F055C: jal         0x801F7074
    // 0x801F0560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F7074_622454(rdram, ctx);
        goto after_1;
    // 0x801F0560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F0564: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F0568: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    // 0x801F056C: jal         0x801D31CC
    // 0x801F0570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F0570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F0574: jal         0x801F71DC
    // 0x801F0578: nop

    func_801F71DC_6225BC(rdram, ctx);
        goto after_3;
    // 0x801F0578: nop

    after_3:
    // 0x801F057C: bne         $v0, $zero, L_801F059C
    if (ctx->r2 != 0) {
        // 0x801F0580: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F059C;
    }
    // 0x801F0580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0584: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F0588: addiu       $a1, $a1, 0x3C4
    ctx->r5 = ADD32(ctx->r5, 0X3C4);
    // 0x801F058C: jal         0x8003522C
    // 0x801F0590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801F0590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F0594: b           L_801F05AC
    // 0x801F0598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F05AC;
    // 0x801F0598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F059C:
    // 0x801F059C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F05A0: jal         0x8003522C
    // 0x801F05A4: addiu       $a1, $a1, 0x47C
    ctx->r5 = ADD32(ctx->r5, 0X47C);
    func_8003522C_35E2C(rdram, ctx);
        goto after_5;
    // 0x801F05A4: addiu       $a1, $a1, 0x47C
    ctx->r5 = ADD32(ctx->r5, 0X47C);
    after_5:
    // 0x801F05A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F05AC:
    // 0x801F05AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F05B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F05B4: jr          $ra
    // 0x801F05B8: nop

    TRACE_RETURN()
    return;
    // 0x801F05B8: nop

;}
RECOMP_FUNC void func_801D2384_5FD764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2384: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D2388: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D238C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D2390: beq         $a0, $zero, L_801D27B4
    if (ctx->r4 == 0) {
        // 0x801D2394: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801D27B4;
    }
    // 0x801D2394: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801D2398: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801D239C: addiu       $t0, $v0, 0x240
    ctx->r8 = ADD32(ctx->r2, 0X240);
    // 0x801D23A0: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x801D23A4: beq         $v1, $zero, L_801D27B4
    if (ctx->r3 == 0) {
        // 0x801D23A8: or          $t2, $t0, $zero
        ctx->r10 = ctx->r8 | 0;
            goto L_801D27B4;
    }
    // 0x801D23A8: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    // 0x801D23AC: lbu         $t6, 0x2C0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C0);
    // 0x801D23B0: lhu         $a0, 0x2E($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2E);
    // 0x801D23B4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x801D23B8: beq         $t6, $zero, L_801D23D4
    if (ctx->r14 == 0) {
        // 0x801D23BC: lui         $t5, 0xE700
        ctx->r13 = S32(0XE700 << 16);
            goto L_801D23D4;
    }
    // 0x801D23BC: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x801D23C0: lw          $a0, 0x1EC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1EC);
    // 0x801D23C4: lw          $a1, 0x1F0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1F0);
    // 0x801D23C8: lw          $a2, 0x1F4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1F4);
    // 0x801D23CC: b           L_801D2624
    // 0x801D23D0: lw          $a3, 0x1F8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1F8);
        goto L_801D2624;
    // 0x801D23D0: lw          $a3, 0x1F8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1F8);
L_801D23D4:
    // 0x801D23D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801D23D8: beq         $a0, $at, L_801D2400
    if (ctx->r4 == ctx->r1) {
        // 0x801D23DC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_801D2400;
    }
    // 0x801D23DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801D23E0: beq         $a0, $at, L_801D2400
    if (ctx->r4 == ctx->r1) {
        // 0x801D23E4: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_801D2400;
    }
    // 0x801D23E4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801D23E8: beq         $a0, $at, L_801D2400
    if (ctx->r4 == ctx->r1) {
        // 0x801D23EC: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_801D2400;
    }
    // 0x801D23EC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801D23F0: beq         $a0, $at, L_801D2400
    if (ctx->r4 == ctx->r1) {
        // 0x801D23F4: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_801D2400;
    }
    // 0x801D23F4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801D23F8: bne         $a0, $at, L_801D2418
    if (ctx->r4 != ctx->r1) {
        // 0x801D23FC: lui         $t7, 0x8021
        ctx->r15 = S32(0X8021 << 16);
            goto L_801D2418;
    }
    // 0x801D23FC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
L_801D2400:
    // 0x801D2400: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801D2404: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D2408: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x801D240C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D2410: b           L_801D2514
    // 0x801D2414: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_801D2514;
    // 0x801D2414: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_801D2418:
    // 0x801D2418: lw          $t7, -0x112C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X112C);
    // 0x801D241C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D2420: bne         $t7, $at, L_801D243C
    if (ctx->r15 != ctx->r1) {
        // 0x801D2424: lui         $at, 0x4160
        ctx->r1 = S32(0X4160 << 16);
            goto L_801D243C;
    }
    // 0x801D2424: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801D2428: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D242C: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x801D2430: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D2434: b           L_801D2514
    // 0x801D2438: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_801D2514;
    // 0x801D2438: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_801D243C:
    // 0x801D243C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801D2440: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D2444: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D2448: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D244C: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    // 0x801D2450: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D2454: lwc1        $f6, 0x88($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X88);
    // 0x801D2458: lwc1        $f10, 0x8C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8C);
    // 0x801D245C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801D2460: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D2464: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D2468: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D246C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D2470: lwc1        $f8, 0x78($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X78);
    // 0x801D2474: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D2478: ldc1        $f4, -0x2D90($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2D90);
    // 0x801D247C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2480: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D2484: ldc1        $f8, -0x2D88($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2D88);
    // 0x801D2488: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801D248C: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x801D2490: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x801D2494: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D2498: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x801D249C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x801D24A0: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801D24A4: add.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x801D24A8: sub.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x801D24AC: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801D24B0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D24B4: nop

    // 0x801D24B8: bc1fl       L_801D24C8
    if (!c1cs) {
        // 0x801D24BC: c.lt.s      $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
            goto L_801D24C8;
    }
    goto skip_0;
    // 0x801D24BC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    skip_0:
    // 0x801D24C0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x801D24C4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
L_801D24C8:
    // 0x801D24C8: nop

    // 0x801D24CC: bc1fl       L_801D24E0
    if (!c1cs) {
        // 0x801D24D0: c.lt.s      $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
            goto L_801D24E0;
    }
    goto skip_1;
    // 0x801D24D0: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    skip_1:
    // 0x801D24D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D24D8: nop

    // 0x801D24DC: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
L_801D24E0:
    // 0x801D24E0: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x801D24E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D24E8: swc1        $f18, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f18.u32l;
    // 0x801D24EC: bc1f        L_801D24F8
    if (!c1cs) {
        // 0x801D24F0: lui         $at, 0x4360
        ctx->r1 = S32(0X4360 << 16);
            goto L_801D24F8;
    }
    // 0x801D24F0: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x801D24F4: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
L_801D24F8:
    // 0x801D24F8: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x801D24FC: nop

    // 0x801D2500: bc1fl       L_801D2514
    if (!c1cs) {
        // 0x801D2504: cfc1        $t8, $FpcCsr
        ctx->r24 = get_cop1_cs();
            goto L_801D2514;
    }
    goto skip_2;
    // 0x801D2504: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    skip_2:
    // 0x801D2508: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D250C: nop

    // 0x801D2510: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_801D2514:
    // 0x801D2514: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D2518: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801D251C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x801D2520: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D2524: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801D2528: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801D252C: nop

    // 0x801D2530: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801D2534: beql        $a1, $zero, L_801D2584
    if (ctx->r5 == 0) {
        // 0x801D2538: mfc1        $a1, $f8
        ctx->r5 = (int32_t)ctx->f8.u32l;
            goto L_801D2584;
    }
    goto skip_3;
    // 0x801D2538: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    skip_3:
    // 0x801D253C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D2540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D2544: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801D2548: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801D254C: nop

    // 0x801D2550: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801D2554: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801D2558: nop

    // 0x801D255C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801D2560: bne         $a1, $zero, L_801D2578
    if (ctx->r5 != 0) {
        // 0x801D2564: nop
    
            goto L_801D2578;
    }
    // 0x801D2564: nop

    // 0x801D2568: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801D256C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D2570: b           L_801D2590
    // 0x801D2574: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801D2590;
    // 0x801D2574: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801D2578:
    // 0x801D2578: b           L_801D2590
    // 0x801D257C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801D2590;
    // 0x801D257C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801D2580: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
L_801D2584:
    // 0x801D2584: nop

    // 0x801D2588: bltz        $a1, L_801D2578
    if (SIGNED(ctx->r5) < 0) {
        // 0x801D258C: nop
    
            goto L_801D2578;
    }
    // 0x801D258C: nop

L_801D2590:
    // 0x801D2590: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801D2594: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D2598: addiu       $a2, $zero, 0x136
    ctx->r6 = ADD32(0, 0X136);
    // 0x801D259C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D25A0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801D25A4: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801D25A8: nop

    // 0x801D25AC: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801D25B0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801D25B4: nop

    // 0x801D25B8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801D25BC: beql        $a3, $zero, L_801D260C
    if (ctx->r7 == 0) {
        // 0x801D25C0: mfc1        $a3, $f6
        ctx->r7 = (int32_t)ctx->f6.u32l;
            goto L_801D260C;
    }
    goto skip_4;
    // 0x801D25C0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    skip_4:
    // 0x801D25C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D25C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D25CC: sub.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801D25D0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x801D25D4: nop

    // 0x801D25D8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801D25DC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x801D25E0: nop

    // 0x801D25E4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x801D25E8: bne         $a3, $zero, L_801D2600
    if (ctx->r7 != 0) {
        // 0x801D25EC: nop
    
            goto L_801D2600;
    }
    // 0x801D25EC: nop

    // 0x801D25F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801D25F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D25F8: b           L_801D2618
    // 0x801D25FC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_801D2618;
    // 0x801D25FC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_801D2600:
    // 0x801D2600: b           L_801D2618
    // 0x801D2604: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_801D2618;
    // 0x801D2604: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x801D2608: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
L_801D260C:
    // 0x801D260C: nop

    // 0x801D2610: bltz        $a3, L_801D2600
    if (SIGNED(ctx->r7) < 0) {
        // 0x801D2614: nop
    
            goto L_801D2600;
    }
    // 0x801D2614: nop

L_801D2618:
    // 0x801D2618: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801D261C: nop

    // 0x801D2620: nop

L_801D2624:
    // 0x801D2624: sltiu       $at, $a0, 0xA
    ctx->r1 = ctx->r4 < 0XA ? 1 : 0;
    // 0x801D2628: beq         $at, $zero, L_801D2634
    if (ctx->r1 == 0) {
        // 0x801D262C: or          $t3, $t0, $zero
        ctx->r11 = ctx->r8 | 0;
            goto L_801D2634;
    }
    // 0x801D262C: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x801D2630: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_801D2634:
    // 0x801D2634: sltiu       $at, $a0, 0x137
    ctx->r1 = ctx->r4 < 0X137 ? 1 : 0;
    // 0x801D2638: bne         $at, $zero, L_801D2644
    if (ctx->r1 != 0) {
        // 0x801D263C: addiu       $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_801D2644;
    }
    // 0x801D263C: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x801D2640: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
L_801D2644:
    // 0x801D2644: sltiu       $at, $a1, 0xE
    ctx->r1 = ctx->r5 < 0XE ? 1 : 0;
    // 0x801D2648: beql        $at, $zero, L_801D2658
    if (ctx->r1 == 0) {
        // 0x801D264C: sltiu       $at, $a1, 0xE1
        ctx->r1 = ctx->r5 < 0XE1 ? 1 : 0;
            goto L_801D2658;
    }
    goto skip_5;
    // 0x801D264C: sltiu       $at, $a1, 0xE1
    ctx->r1 = ctx->r5 < 0XE1 ? 1 : 0;
    skip_5:
    // 0x801D2650: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801D2654: sltiu       $at, $a1, 0xE1
    ctx->r1 = ctx->r5 < 0XE1 ? 1 : 0;
L_801D2658:
    // 0x801D2658: bnel        $at, $zero, L_801D2668
    if (ctx->r1 != 0) {
        // 0x801D265C: sltiu       $at, $a2, 0xA
        ctx->r1 = ctx->r6 < 0XA ? 1 : 0;
            goto L_801D2668;
    }
    goto skip_6;
    // 0x801D265C: sltiu       $at, $a2, 0xA
    ctx->r1 = ctx->r6 < 0XA ? 1 : 0;
    skip_6:
    // 0x801D2660: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x801D2664: sltiu       $at, $a2, 0xA
    ctx->r1 = ctx->r6 < 0XA ? 1 : 0;
L_801D2668:
    // 0x801D2668: beql        $at, $zero, L_801D2678
    if (ctx->r1 == 0) {
        // 0x801D266C: sltiu       $at, $a2, 0x137
        ctx->r1 = ctx->r6 < 0X137 ? 1 : 0;
            goto L_801D2678;
    }
    goto skip_7;
    // 0x801D266C: sltiu       $at, $a2, 0x137
    ctx->r1 = ctx->r6 < 0X137 ? 1 : 0;
    skip_7:
    // 0x801D2670: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801D2674: sltiu       $at, $a2, 0x137
    ctx->r1 = ctx->r6 < 0X137 ? 1 : 0;
L_801D2678:
    // 0x801D2678: bnel        $at, $zero, L_801D2688
    if (ctx->r1 != 0) {
        // 0x801D267C: sltiu       $at, $a3, 0xE
        ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
            goto L_801D2688;
    }
    goto skip_8;
    // 0x801D267C: sltiu       $at, $a3, 0xE
    ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
    skip_8:
    // 0x801D2680: addiu       $a2, $zero, 0x136
    ctx->r6 = ADD32(0, 0X136);
    // 0x801D2684: sltiu       $at, $a3, 0xE
    ctx->r1 = ctx->r7 < 0XE ? 1 : 0;
L_801D2688:
    // 0x801D2688: beql        $at, $zero, L_801D2698
    if (ctx->r1 == 0) {
        // 0x801D268C: sltiu       $at, $a3, 0xE1
        ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
            goto L_801D2698;
    }
    goto skip_9;
    // 0x801D268C: sltiu       $at, $a3, 0xE1
    ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
    skip_9:
    // 0x801D2690: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x801D2694: sltiu       $at, $a3, 0xE1
    ctx->r1 = ctx->r7 < 0XE1 ? 1 : 0;
L_801D2698:
    // 0x801D2698: bnel        $at, $zero, L_801D26A8
    if (ctx->r1 != 0) {
        // 0x801D269C: mtc1        $a0, $f10
        ctx->f10.u32l = ctx->r4;
            goto L_801D26A8;
    }
    goto skip_10;
    // 0x801D269C: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    skip_10:
    // 0x801D26A0: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
    // 0x801D26A4: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
L_801D26A8:
    // 0x801D26A8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D26AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D26B0: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x801D26B4: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x801D26B8: bgez        $a0, L_801D26D0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801D26BC: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801D26D0;
    }
    // 0x801D26BC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D26C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D26C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D26C8: nop

    // 0x801D26CC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_801D26D0:
    // 0x801D26D0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D26D4: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x801D26D8: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x801D26DC: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D26E0: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D26E4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801D26E8: nop

    // 0x801D26EC: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801D26F0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801D26F4: bgez        $a1, L_801D270C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801D26F8: or          $t5, $t9, $at
        ctx->r13 = ctx->r25 | ctx->r1;
            goto L_801D270C;
    }
    // 0x801D26F8: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x801D26FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D2700: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D2704: nop

    // 0x801D2708: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801D270C:
    // 0x801D270C: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D2710: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x801D2714: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D2718: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D271C: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801D2720: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x801D2724: nop

    // 0x801D2728: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801D272C: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x801D2730: bgez        $a2, L_801D2744
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801D2734: sw          $t9, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r25;
            goto L_801D2744;
    }
    // 0x801D2734: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x801D2738: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D273C: nop

    // 0x801D2740: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_801D2744:
    // 0x801D2744: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D2748: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x801D274C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D2750: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D2754: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801D2758: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x801D275C: nop

    // 0x801D2760: andi        $t5, $t7, 0xFFF
    ctx->r13 = ctx->r15 & 0XFFF;
    // 0x801D2764: bgez        $a3, L_801D2778
    if (SIGNED(ctx->r7) >= 0) {
        // 0x801D2768: sll         $t8, $t5, 12
        ctx->r24 = S32(ctx->r13 << 12);
            goto L_801D2778;
    }
    // 0x801D2768: sll         $t8, $t5, 12
    ctx->r24 = S32(ctx->r13 << 12);
    // 0x801D276C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D2770: nop

    // 0x801D2774: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_801D2778:
    // 0x801D2778: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D277C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D2780: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x801D2784: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D2788: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x801D278C: nop

    // 0x801D2790: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801D2794: or          $t5, $t8, $t7
    ctx->r13 = ctx->r24 | ctx->r15;
    // 0x801D2798: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x801D279C: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x801D27A0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D27A4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x801D27A8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x801D27AC: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x801D27B0: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
L_801D27B4:
    // 0x801D27B4: jr          $ra
    // 0x801D27B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801D27B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801E79E4_612DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E79E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E79E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E79EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E79F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E79F4: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x801E79F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E79FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7A00: bne         $t7, $zero, L_801E7A38
    if (ctx->r15 != 0) {
        // 0x801E7A04: sw          $t6, 0xB0($a0)
        MEM_W(0XB0, ctx->r4) = ctx->r14;
            goto L_801E7A38;
    }
    // 0x801E7A04: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x801E7A08: jal         0x801D6508
    // 0x801E7A0C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    func_801D6508_6018E8(rdram, ctx);
        goto after_0;
    // 0x801E7A0C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_0:
    // 0x801E7A10: addiu       $a0, $s0, 0x74
    ctx->r4 = ADD32(ctx->r16, 0X74);
    // 0x801E7A14: jal         0x801D725C
    // 0x801E7A18: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    func_801D725C_60263C(rdram, ctx);
        goto after_1;
    // 0x801E7A18: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_1:
    // 0x801E7A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7A20: jal         0x801D4338
    // 0x801E7A24: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    func_801D4338_5FF718(rdram, ctx);
        goto after_2;
    // 0x801E7A24: lui         $a1, 0xC234
    ctx->r5 = S32(0XC234 << 16);
    after_2:
    // 0x801E7A28: beq         $v0, $zero, L_801E7A48
    if (ctx->r2 == 0) {
        // 0x801E7A2C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_801E7A48;
    }
    // 0x801E7A2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E7A30: b           L_801E7A48
    // 0x801E7A34: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
        goto L_801E7A48;
    // 0x801E7A34: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
L_801E7A38:
    // 0x801E7A38: jal         0x801EEE54
    // 0x801E7A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEE54_61A234(rdram, ctx);
        goto after_3;
    // 0x801E7A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E7A40: jal         0x801EEEA0
    // 0x801E7A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEA0_61A280(rdram, ctx);
        goto after_4;
    // 0x801E7A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_801E7A48:
    // 0x801E7A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7A4C: jal         0x801D31F0
    // 0x801E7A50: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_5;
    // 0x801E7A50: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_5:
    // 0x801E7A54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E7A58: nop

    // 0x801E7A5C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E7A60: nop

    // 0x801E7A64: bc1fl       L_801E7A98
    if (!c1cs) {
        // 0x801E7A68: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E7A98;
    }
    goto skip_0;
    // 0x801E7A68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E7A6C: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x801E7A70: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E7A74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E7A78: beql        $t9, $zero, L_801E7A98
    if (ctx->r25 == 0) {
        // 0x801E7A7C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E7A98;
    }
    goto skip_1;
    // 0x801E7A7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E7A80: jal         0x801D2EE4
    // 0x801E7A84: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_6;
    // 0x801E7A84: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    after_6:
    // 0x801E7A88: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E7A8C: jal         0x8003521C
    // 0x801E7A90: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801E7A90: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    after_7:
    // 0x801E7A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7A98:
    // 0x801E7A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E7A9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E7AA0: jr          $ra
    // 0x801E7AA4: nop

    TRACE_RETURN()
    return;
    // 0x801E7AA4: nop

;}
RECOMP_FUNC void func_801F2B1C_61DEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2B20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2B24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F2B28: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F2B2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F2B30: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F2B34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F2B38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F2B3C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F2B40: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F2B44: jal         0x801D3B18
    // 0x801F2B48: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801F2B48: nop

    after_0:
    // 0x801F2B4C: beq         $v0, $zero, L_801F2B6C
    if (ctx->r2 == 0) {
        // 0x801F2B50: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_801F2B6C;
    }
    // 0x801F2B50: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801F2B54: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801F2B58: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2B5C: sw          $zero, 0x90($a3)
    MEM_W(0X90, ctx->r7) = 0;
    // 0x801F2B60: sw          $t7, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r15;
    // 0x801F2B64: jal         0x8003521C
    // 0x801F2B68: addiu       $a0, $a0, 0x2B7C
    ctx->r4 = ADD32(ctx->r4, 0X2B7C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F2B68: addiu       $a0, $a0, 0x2B7C
    ctx->r4 = ADD32(ctx->r4, 0X2B7C);
    after_1:
L_801F2B6C:
    // 0x801F2B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F2B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2B74: jr          $ra
    // 0x801F2B78: nop

    TRACE_RETURN()
    return;
    // 0x801F2B78: nop

;}
RECOMP_FUNC void func_801FFA40_62AE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFA40: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FFA44: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FFA48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FFA4C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801FFA50: lw          $t9, -0x10C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10C0);
    // 0x801FFA54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FFA58: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801FFA5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FFA60: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801FFA64: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801FFA68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FFA6C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x801FFA70: jal         0x801D3018
    // 0x801FFA74: sb          $t8, 0x816($t9)
    MEM_B(0X816, ctx->r25) = ctx->r24;
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FFA74: sb          $t8, 0x816($t9)
    MEM_B(0X816, ctx->r25) = ctx->r24;
    after_0:
    // 0x801FFA78: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801FFA7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801FFA80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FFA84: lbu         $t1, 0xE($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XE);
    // 0x801FFA88: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x801FFA8C: bnel        $t1, $at, L_801FFAA0
    if (ctx->r9 != ctx->r1) {
        // 0x801FFA90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FFAA0;
    }
    goto skip_0;
    // 0x801FFA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FFA94: jal         0x801FC3FC
    // 0x801FFA98: sw          $t2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r10;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_1;
    // 0x801FFA98: sw          $t2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r10;
    after_1:
    // 0x801FFA9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FFAA0:
    // 0x801FFAA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FFAA4: jr          $ra
    // 0x801FFAA8: nop

    TRACE_RETURN()
    return;
    // 0x801FFAA8: nop

;}
RECOMP_FUNC void func_801E7064_612444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7064: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E7068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E706C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E7070: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E7074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E707C: jal         0x801D3F00
    // 0x801E7080: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_0;
    // 0x801E7080: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x801E7084: jal         0x801EEEC0
    // 0x801E7088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_1;
    // 0x801E7088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E708C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7090: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x801E7094: jal         0x801D322C
    // 0x801E7098: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    func_801D322C_5FE60C(rdram, ctx);
        goto after_2;
    // 0x801E7098: lui         $a2, 0x4190
    ctx->r6 = S32(0X4190 << 16);
    after_2:
    // 0x801E709C: beql        $v0, $zero, L_801E70B8
    if (ctx->r2 == 0) {
        // 0x801E70A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E70B8;
    }
    goto skip_0;
    // 0x801E70A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801E70A4: jal         0x801EF298
    // 0x801E70A8: nop

    func_801EF298_61A678(rdram, ctx);
        goto after_3;
    // 0x801E70A8: nop

    after_3:
    // 0x801E70AC: jal         0x80038BC8
    // 0x801E70B0: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801E70B0: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    after_4:
    // 0x801E70B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E70B8:
    // 0x801E70B8: jal         0x801D31F0
    // 0x801E70BC: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_5;
    // 0x801E70BC: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_5:
    // 0x801E70C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E70C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E70C8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801E70CC: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801E70D0: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    // 0x801E70D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E70D8: bc1fl       L_801E7124
    if (!c1cs) {
        // 0x801E70DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E7124;
    }
    goto skip_1;
    // 0x801E70DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E70E0: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
    // 0x801E70E4: lwc1        $f4, -0x1F30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1F30);
    // 0x801E70E8: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    // 0x801E70EC: lui         $a3, 0x44FA
    ctx->r7 = S32(0X44FA << 16);
    // 0x801E70F0: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801E70F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801E70F8: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801E70FC: sw          $t7, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r15;
    // 0x801E7100: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
    // 0x801E7104: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801E7108: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801E710C: jal         0x8000F3D8
    // 0x801E7110: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_6;
    // 0x801E7110: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_6:
    // 0x801E7114: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E7118: jal         0x8003521C
    // 0x801E711C: addiu       $a0, $a0, 0x7134
    ctx->r4 = ADD32(ctx->r4, 0X7134);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801E711C: addiu       $a0, $a0, 0x7134
    ctx->r4 = ADD32(ctx->r4, 0X7134);
    after_7:
    // 0x801E7120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7124:
    // 0x801E7124: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E7128: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E712C: jr          $ra
    // 0x801E7130: nop

    TRACE_RETURN()
    return;
    // 0x801E7130: nop

;}
RECOMP_FUNC void func_801F65B8_621998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F65B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F65BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F65C0: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x801F65C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F65C8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801F65CC: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x801F65D0: bgez        $v0, L_801F65E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801F65D4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801F65E4;
    }
    // 0x801F65D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F65D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F65DC: nop

    // 0x801F65E0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801F65E4:
    // 0x801F65E4: lwc1        $f10, 0x90($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F65E8: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x801F65EC: nop

    // 0x801F65F0: bc1tl       L_801F6604
    if (c1cs) {
        // 0x801F65F4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_801F6604;
    }
    goto skip_0;
    // 0x801F65F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x801F65F8: b           L_801F6614
    // 0x801F65FC: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
        goto L_801F6614;
    // 0x801F65FC: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x801F6600: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_801F6604:
    // 0x801F6604: nop

    // 0x801F6608: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801F660C: jal         0x801F0540
    // 0x801F6610: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    func_801F0540_61B920(rdram, ctx);
        goto after_0;
    // 0x801F6610: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_0:
L_801F6614:
    // 0x801F6614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F661C: jr          $ra
    // 0x801F6620: nop

    TRACE_RETURN()
    return;
    // 0x801F6620: nop

;}
RECOMP_FUNC void func_801D721C_6025FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D721C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D7220: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D7224: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D7228: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801D722C: nop

    // 0x801D7230: bc1fl       L_801D7244
    if (!c1cs) {
        // 0x801D7234: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_801D7244;
    }
    goto skip_0;
    // 0x801D7234: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_0:
    // 0x801D7238: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x801D723C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D7240: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
L_801D7244:
    // 0x801D7244: nop

    // 0x801D7248: bc1f        L_801D7254
    if (!c1cs) {
        // 0x801D724C: nop
    
            goto L_801D7254;
    }
    // 0x801D724C: nop

    // 0x801D7250: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
L_801D7254:
    // 0x801D7254: jr          $ra
    // 0x801D7258: nop

    TRACE_RETURN()
    return;
    // 0x801D7258: nop

;}
RECOMP_FUNC void func_801E46C4_60FAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E46C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E46C8: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x801E46CC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E46D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E46D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E46D8: addiu       $t7, $t7, -0x4EB0
    ctx->r15 = ADD32(ctx->r15, -0X4EB0);
    // 0x801E46DC: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x801E46E0: jal         0x801D2EE4
    // 0x801E46E4: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_0;
    // 0x801E46E4: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x801E46E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E46EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E46F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E46F4: jr          $ra
    // 0x801E46F8: nop

    TRACE_RETURN()
    return;
    // 0x801E46F8: nop

;}
RECOMP_FUNC void func_801FE8B4_629C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE8B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FE8B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FE8BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801FE8C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801FE8C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FE8C8: jal         0x801FFE6C
    // 0x801FE8CC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FE8CC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801FE8D0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE8D4: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FE8D8: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FE8DC: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FE8E0: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801FE8E4: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801FE8E8: nop

    // 0x801FE8EC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801FE8F0: jal         0x800417E0
    // 0x801FE8F4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    _nsqrtf(rdram, ctx);
        goto after_1;
    // 0x801FE8F4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x801FE8F8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801FE8FC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801FE900: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801FE904: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801FE908: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801FE90C: jal         0x8000E28C
    // 0x801FE910: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_2;
    // 0x801FE910: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    after_2:
    // 0x801FE914: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801FE918: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FE91C: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x801FE920: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE924: sw          $v0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r2;
    // 0x801FE928: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x801FE92C: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801FE930: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    // 0x801FE934: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FE938: swc1        $f8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f8.u32l;
    // 0x801FE93C: jal         0x801D2EE4
    // 0x801FE940: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801FE940: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x801FE944: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE948: jal         0x8003521C
    // 0x801FE94C: addiu       $a0, $a0, -0x169C
    ctx->r4 = ADD32(ctx->r4, -0X169C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FE94C: addiu       $a0, $a0, -0x169C
    ctx->r4 = ADD32(ctx->r4, -0X169C);
    after_4:
    // 0x801FE950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FE954: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801FE958: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801FE95C: jr          $ra
    // 0x801FE960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801FE960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801CB4C4_5F68A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB4C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB4C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB4CC: jal         0x80004240
    // 0x801CB4D0: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x801CB4D0: nop

    after_0:
    // 0x801CB4D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB4D8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CB4DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB4E0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CB4E4: jal         0x8000A0F0
    // 0x801CB4E8: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    func_8000A0F0_ACF0(rdram, ctx);
        goto after_1;
    // 0x801CB4E8: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    after_1:
    // 0x801CB4EC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB4F0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CB4F4: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CB4F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CB4FC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CB500: lhu         $t8, -0x51EA($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X51EA);
    // 0x801CB504: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB508: beq         $t8, $at, L_801CB524
    if (ctx->r24 == ctx->r1) {
        // 0x801CB50C: nop
    
            goto L_801CB524;
    }
    // 0x801CB50C: nop

    // 0x801CB510: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB514: jal         0x8003488C
    // 0x801CB518: addiu       $a0, $a0, -0x4954
    ctx->r4 = ADD32(ctx->r4, -0X4954);
    func_8003488C_3548C(rdram, ctx);
        goto after_2;
    // 0x801CB518: addiu       $a0, $a0, -0x4954
    ctx->r4 = ADD32(ctx->r4, -0X4954);
    after_2:
    // 0x801CB51C: b           L_801CB52C
    // 0x801CB520: nop

        goto L_801CB52C;
    // 0x801CB520: nop

L_801CB524:
    // 0x801CB524: jal         0x8003488C
    // 0x801CB528: addiu       $a0, $a0, -0x49E0
    ctx->r4 = ADD32(ctx->r4, -0X49E0);
    func_8003488C_3548C(rdram, ctx);
        goto after_3;
    // 0x801CB528: addiu       $a0, $a0, -0x49E0
    ctx->r4 = ADD32(ctx->r4, -0X49E0);
    after_3:
L_801CB52C:
    // 0x801CB52C: jal         0x80035B50
    // 0x801CB530: nop

    func_80035B50_36750(rdram, ctx);
        goto after_4;
    // 0x801CB530: nop

    after_4:
    // 0x801CB534: jal         0x80003478
    // 0x801CB538: nop

    func_80003478_4078(rdram, ctx);
        goto after_5;
    // 0x801CB538: nop

    after_5:
    // 0x801CB53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB544: jr          $ra
    // 0x801CB548: nop

    TRACE_RETURN()
    return;
    // 0x801CB548: nop

;}
RECOMP_FUNC void func_801FC8A4_627C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC8A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FC8A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FC8AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FC8B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FC8B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FC8B8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FC8BC: jal         0x801D3018
    // 0x801FC8C0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FC8C0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x801FC8C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801FC8C8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x801FC8CC: jal         0x801D3118
    // 0x801FC8D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_1;
    // 0x801FC8D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x801FC8D4: beq         $v0, $zero, L_801FC8F8
    if (ctx->r2 == 0) {
        // 0x801FC8D8: addiu       $a0, $zero, 0x248
        ctx->r4 = ADD32(0, 0X248);
            goto L_801FC8F8;
    }
    // 0x801FC8D8: addiu       $a0, $zero, 0x248
    ctx->r4 = ADD32(0, 0X248);
    // 0x801FC8DC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FC8E0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801FC8E4: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801FC8E8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801FC8EC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801FC8F0: jal         0x8000F3D8
    // 0x801FC8F4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_2;
    // 0x801FC8F4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_2:
L_801FC8F8:
    // 0x801FC8F8: lw          $t6, 0x80($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X80);
    // 0x801FC8FC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FC900: bgez        $t7, L_801FC9D0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801FC904: sw          $t7, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r15;
            goto L_801FC9D0;
    }
    // 0x801FC904: sw          $t7, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r15;
    // 0x801FC908: jal         0x801D614C
    // 0x801FC90C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_3;
    // 0x801FC90C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801FC910: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x801FC914: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801FC918: bgez        $t0, L_801FC9D0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801FC91C: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_801FC9D0;
    }
    // 0x801FC91C: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801FC920: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x801FC924: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FC928: addiu       $a0, $a0, -0x361C
    ctx->r4 = ADD32(ctx->r4, -0X361C);
    // 0x801FC92C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801FC930: beq         $t3, $zero, L_801FC988
    if (ctx->r11 == 0) {
        // 0x801FC934: sw          $t3, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r11;
            goto L_801FC988;
    }
    // 0x801FC934: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
    // 0x801FC938: lwc1        $f4, 0x70($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FC93C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FC940: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FC944: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FC948: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801FC94C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801FC950: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801FC954: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x801FC958: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801FC95C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801FC960: sw          $t5, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r13;
    // 0x801FC964: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x801FC968: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801FC96C: jal         0x80200088
    // 0x801FC970: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    func_80200088_62B468(rdram, ctx);
        goto after_4;
    // 0x801FC970: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    after_4:
    // 0x801FC974: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FC978: jal         0x8003521C
    // 0x801FC97C: addiu       $a0, $a0, -0x39C8
    ctx->r4 = ADD32(ctx->r4, -0X39C8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FC97C: addiu       $a0, $a0, -0x39C8
    ctx->r4 = ADD32(ctx->r4, -0X39C8);
    after_5:
    // 0x801FC980: b           L_801FC9D4
    // 0x801FC984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FC9D4;
    // 0x801FC984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FC988:
    // 0x801FC988: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801FC98C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801FC990: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FC994: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x801FC998: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x801FC99C: nop

    // 0x801FC9A0: bc1fl       L_801FC9BC
    if (!c1cs) {
        // 0x801FC9A4: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_801FC9BC;
    }
    goto skip_0;
    // 0x801FC9A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x801FC9A8: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x801FC9AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FC9B0: b           L_801FC9C4
    // 0x801FC9B4: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
        goto L_801FC9C4;
    // 0x801FC9B4: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x801FC9B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_801FC9BC:
    // 0x801FC9BC: nop

    // 0x801FC9C0: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
L_801FC9C4:
    // 0x801FC9C4: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x801FC9C8: jal         0x8003521C
    // 0x801FC9CC: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801FC9CC: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    after_6:
L_801FC9D0:
    // 0x801FC9D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FC9D4:
    // 0x801FC9D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FC9D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FC9DC: jr          $ra
    // 0x801FC9E0: nop

    TRACE_RETURN()
    return;
    // 0x801FC9E0: nop

;}
RECOMP_FUNC void func_8020269C_62DA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020269C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802026A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802026A4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802026A8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802026AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802026B0: jal         0x80203F88
    // 0x802026B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x802026B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x802026B8: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x802026BC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802026C0: blez        $t7, L_8020273C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802026C4: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_8020273C;
    }
    // 0x802026C4: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x802026C8: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x802026CC: bne         $t8, $zero, L_80202740
    if (ctx->r24 != 0) {
        // 0x802026D0: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80202740;
    }
    // 0x802026D0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802026D4: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x802026D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802026DC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x802026E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802026E4: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x802026E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802026EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802026F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802026F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802026F8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802026FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80202700: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80202704: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80202708: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8020270C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80202710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202714: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80202718: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020271C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x80202720: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80202724: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80202728: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8020272C: jal         0x801DFB90
    // 0x80202730: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x80202730: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80202734: b           L_80202744
    // 0x80202738: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
        goto L_80202744;
    // 0x80202738: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_8020273C:
    // 0x8020273C: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
L_80202740:
    // 0x80202740: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_80202744:
    // 0x80202744: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80202748: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8020274C: bne         $t0, $zero, L_802027A8
    if (ctx->r8 != 0) {
        // 0x80202750: sw          $t0, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r8;
            goto L_802027A8;
    }
    // 0x80202750: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
    // 0x80202754: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80202758: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8020275C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80202760: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80202764: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80202768: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8020276C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80202770: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80202774: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80202778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020277C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x80202780: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80202784: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80202788: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x8020278C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80202790: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80202794: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80202798: jal         0x801E006C
    // 0x8020279C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x8020279C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x802027A0: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x802027A4: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
L_802027A8:
    // 0x802027A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802027AC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802027B0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802027B4: jr          $ra
    // 0x802027B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802027B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801D08BC_5FBC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D08BC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D08C0: jr          $ra
    // 0x801D08C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D08C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F6884_621C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6884: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F6888: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F688C: lui         $at, 0xC42F
    ctx->r1 = S32(0XC42F << 16);
    // 0x801F6890: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F6894: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F6898: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x801F689C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801F68A0: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F68A4: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801F68A8: nop

    // 0x801F68AC: bc1tl       L_801F6900
    if (c1cs) {
        // 0x801F68B0: lui         $at, 0x442F
        ctx->r1 = S32(0X442F << 16);
            goto L_801F6900;
    }
    goto skip_0;
    // 0x801F68B0: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    skip_0:
    // 0x801F68B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801F68B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F68BC: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801F68C0: nop

    // 0x801F68C4: bc1tl       L_801F6900
    if (c1cs) {
        // 0x801F68C8: lui         $at, 0x442F
        ctx->r1 = S32(0X442F << 16);
            goto L_801F6900;
    }
    goto skip_1;
    // 0x801F68C8: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    skip_1:
    // 0x801F68CC: lwc1        $f16, -0x1958($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1958);
    // 0x801F68D0: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F68D4: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801F68D8: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x801F68DC: nop

    // 0x801F68E0: bc1tl       L_801F6900
    if (c1cs) {
        // 0x801F68E4: lui         $at, 0x442F
        ctx->r1 = S32(0X442F << 16);
            goto L_801F6900;
    }
    goto skip_2;
    // 0x801F68E4: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    skip_2:
    // 0x801F68E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F68EC: nop

    // 0x801F68F0: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x801F68F4: nop

    // 0x801F68F8: bc1f        L_801F6924
    if (!c1cs) {
        // 0x801F68FC: lui         $at, 0x442F
        ctx->r1 = S32(0X442F << 16);
            goto L_801F6924;
    }
    // 0x801F68FC: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
L_801F6900:
    // 0x801F6900: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801F6904: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F6908: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F690C: lwc1        $f16, -0x1954($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1954);
    // 0x801F6910: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801F6914: swc1        $f2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f2.u32l;
    // 0x801F6918: swc1        $f2, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f2.u32l;
    // 0x801F691C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F6920: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
L_801F6924:
    // 0x801F6924: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801F6928: nop

    // 0x801F692C: bc1fl       L_801F6940
    if (!c1cs) {
        // 0x801F6930: c.le.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
            goto L_801F6940;
    }
    goto skip_3;
    // 0x801F6930: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    skip_3:
    // 0x801F6934: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x801F6938: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F693C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
L_801F6940:
    // 0x801F6940: nop

    // 0x801F6944: bc1fl       L_801F6954
    if (!c1cs) {
        // 0x801F6948: lwc1        $f2, 0x10($v1)
        ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
            goto L_801F6954;
    }
    goto skip_4;
    // 0x801F6948: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x801F694C: swc1        $f14, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f14.u32l;
    // 0x801F6950: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
L_801F6954:
    // 0x801F6954: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x801F6958: nop

    // 0x801F695C: bc1fl       L_801F6970
    if (!c1cs) {
        // 0x801F6960: c.le.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
            goto L_801F6970;
    }
    goto skip_5;
    // 0x801F6960: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    skip_5:
    // 0x801F6964: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x801F6968: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F696C: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
L_801F6970:
    // 0x801F6970: nop

    // 0x801F6974: bc1f        L_801F6980
    if (!c1cs) {
        // 0x801F6978: nop
    
            goto L_801F6980;
    }
    // 0x801F6978: nop

    // 0x801F697C: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
L_801F6980:
    // 0x801F6980: jr          $ra
    // 0x801F6984: nop

    TRACE_RETURN()
    return;
    // 0x801F6984: nop

;}
RECOMP_FUNC void func_801FCC64_628044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCC64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FCC68: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FCC6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FCC70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FCC74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FCC78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FCC7C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801FCC80: jal         0x8000E9F4
    // 0x801FCC84: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_0;
    // 0x801FCC84: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x801FCC88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801FCC8C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x801FCC90: jal         0x801D2F40
    // 0x801FCC94: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801FCC94: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    after_1:
    // 0x801FCC98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FCC9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FCCA0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FCCA4: nop

    // 0x801FCCA8: bc1fl       L_801FCD0C
    if (!c1cs) {
        // 0x801FCCAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FCD0C;
    }
    goto skip_0;
    // 0x801FCCAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801FCCB0: jal         0x8020003C
    // 0x801FCCB4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_8020003C_62B41C(rdram, ctx);
        goto after_2;
    // 0x801FCCB4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_2:
    // 0x801FCCB8: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x801FCCBC: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x801FCCC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FCCC4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FCCC8: beq         $t7, $zero, L_801FCD00
    if (ctx->r15 == 0) {
        // 0x801FCCCC: sw          $t7, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->r15;
            goto L_801FCD00;
    }
    // 0x801FCCCC: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x801FCCD0: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801FCCD4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FCCD8: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801FCCDC: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801FCCE0: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x801FCCE4: jal         0x801D31CC
    // 0x801FCCE8: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801FCCE8: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x801FCCEC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FCCF0: jal         0x8003521C
    // 0x801FCCF4: addiu       $a0, $a0, -0x32E4
    ctx->r4 = ADD32(ctx->r4, -0X32E4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FCCF4: addiu       $a0, $a0, -0x32E4
    ctx->r4 = ADD32(ctx->r4, -0X32E4);
    after_4:
    // 0x801FCCF8: b           L_801FCD0C
    // 0x801FCCFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FCD0C;
    // 0x801FCCFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FCD00:
    // 0x801FCD00: jal         0x801FC3FC
    // 0x801FCD04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_5;
    // 0x801FCD04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801FCD08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FCD0C:
    // 0x801FCD0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FCD10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FCD14: jr          $ra
    // 0x801FCD18: nop

    TRACE_RETURN()
    return;
    // 0x801FCD18: nop

;}
