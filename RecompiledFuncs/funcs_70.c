#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E8E58_614238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8E58: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E8E5C: lw          $v1, -0x1130($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X1130);
    // 0x801E8E60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E8E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E8E68: addiu       $t6, $v1, 0x140
    ctx->r14 = ADD32(ctx->r3, 0X140);
    // 0x801E8E6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E8E70: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801E8E74: lui         $at, 0xC25C
    ctx->r1 = S32(0XC25C << 16);
    // 0x801E8E78: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801E8E7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E8E80: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E8E84: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E8E88: ldc1        $f8, -0x1EF0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1EF0);
    // 0x801E8E8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E8E90: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801E8E94: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801E8E98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E8E9C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E8EA0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E8EA4: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x801E8EA8: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E8EAC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801E8EB0: nop

    // 0x801E8EB4: bc1fl       L_801E8EC4
    if (!c1cs) {
        // 0x801E8EB8: lwc1        $f4, 0x4($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
            goto L_801E8EC4;
    }
    goto skip_0;
    // 0x801E8EB8: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x801E8EBC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x801E8EC0: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
L_801E8EC4:
    // 0x801E8EC4: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801E8EC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E8ECC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E8ED0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x801E8ED4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E8ED8: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x801E8EDC: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x801E8EE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E8EE4: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801E8EE8: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x801E8EEC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E8EF0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E8EF4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E8EF8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x801E8EFC: nop

    // 0x801E8F00: subu        $t3, $t1, $t0
    ctx->r11 = SUB32(ctx->r9, ctx->r8);
    // 0x801E8F04: jal         0x8000E630
    // 0x801E8F08: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801E8F08: andi        $a1, $t3, 0xFFFF
    ctx->r5 = ctx->r11 & 0XFFFF;
    after_0:
    // 0x801E8F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E8F10: jal         0x801D2F40
    // 0x801E8F14: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801E8F14: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x801E8F18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E8F1C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x801E8F20: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801E8F24: nop

    // 0x801E8F28: bc1fl       L_801E8F94
    if (!c1cs) {
        // 0x801E8F2C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E8F94;
    }
    goto skip_1;
    // 0x801E8F2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E8F30: lw          $t5, 0x90($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X90);
    // 0x801E8F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E8F38: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8F3C: beq         $t5, $zero, L_801E8F60
    if (ctx->r13 == 0) {
        // 0x801E8F40: nop
    
            goto L_801E8F60;
    }
    // 0x801E8F40: nop

    // 0x801E8F44: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8F48: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    // 0x801E8F4C: jal         0x801D2EE4
    // 0x801E8F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801E8F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E8F54: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x801E8F58: b           L_801E8F74
    // 0x801E8F5C: sw          $zero, 0x90($t6)
    MEM_W(0X90, ctx->r14) = 0;
        goto L_801E8F74;
    // 0x801E8F5C: sw          $zero, 0x90($t6)
    MEM_W(0X90, ctx->r14) = 0;
L_801E8F60:
    // 0x801E8F60: jal         0x801D2EE4
    // 0x801E8F64: addiu       $a1, $a1, -0x4E70
    ctx->r5 = ADD32(ctx->r5, -0X4E70);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801E8F64: addiu       $a1, $a1, -0x4E70
    ctx->r5 = ADD32(ctx->r5, -0X4E70);
    after_3:
    // 0x801E8F68: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x801E8F6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E8F70: sw          $t7, 0x90($t8)
    MEM_W(0X90, ctx->r24) = ctx->r15;
L_801E8F74:
    // 0x801E8F74: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801E8F78: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E8F7C: lbu         $t1, 0xF($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0XF);
    // 0x801E8F80: bnel        $t1, $zero, L_801E8F94
    if (ctx->r9 != 0) {
        // 0x801E8F84: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E8F94;
    }
    goto skip_2;
    // 0x801E8F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801E8F88: jal         0x8003521C
    // 0x801E8F8C: addiu       $a0, $a0, -0x705C
    ctx->r4 = ADD32(ctx->r4, -0X705C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E8F8C: addiu       $a0, $a0, -0x705C
    ctx->r4 = ADD32(ctx->r4, -0X705C);
    after_4:
    // 0x801E8F90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E8F94:
    // 0x801E8F94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E8F98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E8F9C: jr          $ra
    // 0x801E8FA0: nop

    TRACE_RETURN()
    return;
    // 0x801E8FA0: nop

;}
RECOMP_FUNC void func_801CC89C_5F7C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC89C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CC8A0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CC8A4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CC8A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CC8AC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801CC8B0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CC8B4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801CC8B8: lbu         $t6, 0x2C2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C2);
    // 0x801CC8BC: addiu       $t1, $v0, 0x100
    ctx->r9 = ADD32(ctx->r2, 0X100);
    // 0x801CC8C0: addiu       $t2, $v0, 0x118
    ctx->r10 = ADD32(ctx->r2, 0X118);
    // 0x801CC8C4: bne         $t6, $zero, L_801CCA4C
    if (ctx->r14 != 0) {
        // 0x801CC8C8: addiu       $v1, $v0, 0x130
        ctx->r3 = ADD32(ctx->r2, 0X130);
            goto L_801CCA4C;
    }
    // 0x801CC8C8: addiu       $v1, $v0, 0x130
    ctx->r3 = ADD32(ctx->r2, 0X130);
    // 0x801CC8CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC8D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC8D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC8D8: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x801CC8DC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CC8E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CC8E4: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801CC8E8: addu        $a1, $v1, $at
    ctx->r5 = ADD32(ctx->r3, ctx->r1);
    // 0x801CC8EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CC8F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CC8F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CC8F8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CC8FC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CC900: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x801CC904: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x801CC908: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x801CC90C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CC910: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CC914: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CC918: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CC91C: jal         0x8000DBF0
    // 0x801CC920: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801CC920: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CC924: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x801CC928: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x801CC92C: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x801CC930: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC934: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC938: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC93C: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x801CC940: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CC944: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CC948: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801CC94C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CC950: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CC954: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CC958: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CC95C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CC960: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801CC964: addu        $a1, $t1, $at
    ctx->r5 = ADD32(ctx->r9, ctx->r1);
    // 0x801CC968: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CC96C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CC970: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CC974: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CC978: jal         0x8000DBF0
    // 0x801CC97C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801CC97C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801CC980: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x801CC984: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC988: lwc1        $f2, -0x30C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X30C0);
    // 0x801CC98C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x801CC990: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x801CC994: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x801CC998: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x801CC99C: lbu         $v1, 0x9C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X9C);
    // 0x801CC9A0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CC9A4: addiu       $a1, $a1, -0x70B0
    ctx->r5 = ADD32(ctx->r5, -0X70B0);
    // 0x801CC9A8: sb          $v1, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r3;
    // 0x801CC9AC: sb          $v1, 0x3($t1)
    MEM_B(0X3, ctx->r9) = ctx->r3;
    // 0x801CC9B0: lbu         $v1, 0x9D($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X9D);
    // 0x801CC9B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC9B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC9BC: sb          $v1, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r3;
    // 0x801CC9C0: sb          $v1, 0x4($t1)
    MEM_B(0X4, ctx->r9) = ctx->r3;
    // 0x801CC9C4: lbu         $v1, 0x9E($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X9E);
    // 0x801CC9C8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CC9CC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801CC9D0: sb          $v1, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r3;
    // 0x801CC9D4: sb          $v1, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r3;
    // 0x801CC9D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CC9DC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CC9E0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CC9E4: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801CC9E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CC9EC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801CC9F0: addiu       $a2, $a2, -0x5B90
    ctx->r6 = ADD32(ctx->r6, -0X5B90);
    // 0x801CC9F4: addiu       $a0, $a0, -0x297C
    ctx->r4 = ADD32(ctx->r4, -0X297C);
    // 0x801CC9F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CC9FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CCA00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CCA04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CCA08: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CCA0C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CCA10: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CCA14: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CCA18: jal         0x80035854
    // 0x801CCA1C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_2;
    // 0x801CCA1C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801CCA20: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x801CCA24: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x801CCA28: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x801CCA2C: sw          $v0, 0x1CC($t3)
    MEM_W(0X1CC, ctx->r11) = ctx->r2;
    // 0x801CCA30: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x801CCA34: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801CCA38: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCA3C: addiu       $a0, $a0, -0x35A4
    ctx->r4 = ADD32(ctx->r4, -0X35A4);
    // 0x801CCA40: sw          $v1, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r3;
    // 0x801CCA44: jal         0x8003521C
    // 0x801CCA48: sb          $t4, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r12;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801CCA48: sb          $t4, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r12;
    after_3:
L_801CCA4C:
    // 0x801CCA4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801CCA50: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801CCA54: jr          $ra
    // 0x801CCA58: nop

    TRACE_RETURN()
    return;
    // 0x801CCA58: nop

;}
RECOMP_FUNC void func_801DF610_60A9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF610: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801DF614: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801DF618: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801DF61C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DF620: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801DF624: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF628: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DF62C: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801DF630: addiu       $a1, $a1, -0x5060
    ctx->r5 = ADD32(ctx->r5, -0X5060);
    // 0x801DF634: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DF638: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DF63C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DF640: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801DF644: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801DF648: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801DF64C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DF650: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DF654: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801DF658: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801DF65C: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801DF660: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801DF664: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801DF668: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801DF66C: addiu       $a0, $a0, -0x868
    ctx->r4 = ADD32(ctx->r4, -0X868);
    // 0x801DF670: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801DF674: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801DF678: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801DF67C: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801DF680: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801DF684: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801DF688: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801DF68C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DF690: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801DF694: jal         0x80035728
    // 0x801DF698: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035728_36328(rdram, ctx);
        goto after_0;
    // 0x801DF698: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801DF69C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801DF6A0: beq         $v0, $zero, L_801DF780
    if (ctx->r2 == 0) {
        // 0x801DF6A4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801DF780;
    }
    // 0x801DF6A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801DF6A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801DF6AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF6B0: lwc1        $f18, 0x70($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801DF6B4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x801DF6B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DF6BC: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801DF6C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DF6C4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DF6C8: addiu       $t4, $zero, 0x4A8
    ctx->r12 = ADD32(0, 0X4A8);
    // 0x801DF6CC: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x801DF6D0: swc1        $f4, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f4.u32l;
    // 0x801DF6D4: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801DF6D8: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801DF6DC: swc1        $f8, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f8.u32l;
    // 0x801DF6E0: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801DF6E4: sw          $s0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r16;
    // 0x801DF6E8: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801DF6EC: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801DF6F0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x801DF6F4: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DF6F8: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x801DF6FC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801DF700: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801DF704: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DF708: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801DF70C: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x801DF710: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801DF714: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801DF718: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801DF71C: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x801DF720: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801DF724: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801DF728: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801DF72C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801DF730: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801DF734: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801DF738: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801DF73C: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801DF740: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    // 0x801DF744: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DF748: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801DF74C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x801DF750: jal         0x8000DBF0
    // 0x801DF754: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801DF754: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DF758: beq         $v0, $zero, L_801DF770
    if (ctx->r2 == 0) {
        // 0x801DF75C: lw          $a0, 0x5C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X5C);
            goto L_801DF770;
    }
    // 0x801DF75C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x801DF760: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x801DF764: sb          $t5, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r13;
    // 0x801DF768: b           L_801DF784
    // 0x801DF76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DF784;
    // 0x801DF76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DF770:
    // 0x801DF770: jal         0x80034EF8
    // 0x801DF774: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801DF774: nop

    after_2:
    // 0x801DF778: b           L_801DF784
    // 0x801DF77C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DF784;
    // 0x801DF77C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF780:
    // 0x801DF780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF784:
    // 0x801DF784: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801DF788: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801DF78C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801DF790: jr          $ra
    // 0x801DF794: nop

    TRACE_RETURN()
    return;
    // 0x801DF794: nop

;}
RECOMP_FUNC void func_802050E4_6304C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802050E4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802050E8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802050EC: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x802050F0: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x802050F4: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802050F8: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x802050FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80205100: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80205104: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80205108: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8020510C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80205110: addiu       $a2, $a2, 0x170
    ctx->r6 = ADD32(ctx->r6, 0X170);
    // 0x80205114: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80205118: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x8020511C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205120: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80205124: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80205128: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8020512C: addiu       $t9, $zero, 0x4AE
    ctx->r25 = ADD32(0, 0X4AE);
    // 0x80205130: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80205134: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80205138: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8020513C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80205140: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80205144: addiu       $a3, $a3, -0x5238
    ctx->r7 = ADD32(ctx->r7, -0X5238);
    // 0x80205148: addiu       $a1, $a1, 0x5380
    ctx->r5 = ADD32(ctx->r5, 0X5380);
    // 0x8020514C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80205150: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80205154: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x80205158: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x8020515C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x80205160: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80205164: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x80205168: jal         0x800358E8
    // 0x8020516C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x8020516C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80205170: beq         $v0, $zero, L_80205230
    if (ctx->r2 == 0) {
        // 0x80205174: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80205230;
    }
    // 0x80205174: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80205178: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x8020517C: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x80205180: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80205184: sw          $s1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r17;
    // 0x80205188: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8020518C: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x80205190: addiu       $v0, $v0, -0x47A0
    ctx->r2 = ADD32(ctx->r2, -0X47A0);
    // 0x80205194: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80205198: lbu         $t2, 0x1A($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1A);
    // 0x8020519C: lbu         $t4, 0x1B($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1B);
    // 0x802051A0: lbu         $t5, 0x1C($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1C);
    // 0x802051A4: lbu         $t6, 0x1D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1D);
    // 0x802051A8: lbu         $t7, 0x1E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1E);
    // 0x802051AC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802051B0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802051B4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802051B8: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x802051BC: lbu         $a2, 0x18($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X18);
    // 0x802051C0: lbu         $a3, 0x19($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X19);
    // 0x802051C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802051C8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x802051CC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802051D0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802051D4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802051D8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x802051DC: jal         0x8000E030
    // 0x802051E0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x802051E0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_1:
    // 0x802051E4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x802051E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802051EC: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x802051F0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802051F4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x802051F8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x802051FC: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x80205200: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
    // 0x80205204: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80205208: jal         0x8000ED00
    // 0x8020520C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8000ED00_F900(rdram, ctx);
        goto after_2;
    // 0x8020520C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80205210: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80205214: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80205218: lwc1        $f14, 0x8($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8020521C: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x80205220: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x80205224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80205228: jal         0x8000E39C
    // 0x8020522C: div.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x8020522C: div.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    after_3:
L_80205230:
    // 0x80205230: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80205234: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80205238: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8020523C: jr          $ra
    // 0x80205240: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80205240: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801D2C24_5FE004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2C2C: jal         0x800141C4
    // 0x801D2C30: addiu       $a0, $zero, 0x4B1
    ctx->r4 = ADD32(0, 0X4B1);
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801D2C30: addiu       $a0, $zero, 0x4B1
    ctx->r4 = ADD32(0, 0X4B1);
    after_0:
    // 0x801D2C34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D2C38: addiu       $v1, $v1, -0x1120
    ctx->r3 = ADD32(ctx->r3, -0X1120);
    // 0x801D2C3C: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801D2C40: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D2C44: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801D2C48: addiu       $t6, $t6, 0x610
    ctx->r14 = ADD32(ctx->r14, 0X610);
    // 0x801D2C4C: addiu       $t9, $t9, 0xC78
    ctx->r25 = ADD32(ctx->r25, 0XC78);
    // 0x801D2C50: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x801D2C54: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x801D2C58: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801D2C5C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x801D2C60: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801D2C64: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801D2C68: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x801D2C6C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x801D2C70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2C78: sw          $t8, -0x70A0($at)
    MEM_W(-0X70A0, ctx->r1) = ctx->r24;
    // 0x801D2C7C: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x801D2C80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2C88: jr          $ra
    // 0x801D2C8C: sw          $t3, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x801D2C8C: sw          $t3, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void func_80201598_62C978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020159C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802015A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802015A4: jal         0x801D600C
    // 0x802015A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D600C_6013EC(rdram, ctx);
        goto after_0;
    // 0x802015A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802015AC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802015B0: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x802015B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802015B8: lwc1        $f0, 0x8($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X8);
    // 0x802015BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802015C0: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x802015C4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x802015C8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802015CC: bc1t        L_802015EC
    if (c1cs) {
        // 0x802015D0: nop
    
            goto L_802015EC;
    }
    // 0x802015D0: nop

    // 0x802015D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802015D8: nop

    // 0x802015DC: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x802015E0: nop

    // 0x802015E4: bc1f        L_80201600
    if (!c1cs) {
        // 0x802015E8: nop
    
            goto L_80201600;
    }
    // 0x802015E8: nop

L_802015EC:
    // 0x802015EC: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x802015F0: jal         0x80200684
    // 0x802015F4: sb          $zero, 0xF($t7)
    MEM_B(0XF, ctx->r15) = 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_1;
    // 0x802015F4: sb          $zero, 0xF($t7)
    MEM_B(0XF, ctx->r15) = 0;
    after_1:
    // 0x802015F8: b           L_8020160C
    // 0x802015FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8020160C;
    // 0x802015FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80201600:
    // 0x80201600: jal         0x8020407C
    // 0x80201604: nop

    func_8020407C_62F45C(rdram, ctx);
        goto after_2;
    // 0x80201604: nop

    after_2:
    // 0x80201608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020160C:
    // 0x8020160C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80201610: jr          $ra
    // 0x80201614: nop

    TRACE_RETURN()
    return;
    // 0x80201614: nop

;}
RECOMP_FUNC void func_801D2CFC_5FE0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2D04: jal         0x800141C4
    // 0x801D2D08: addiu       $a0, $zero, 0x4B4
    ctx->r4 = ADD32(0, 0X4B4);
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801D2D08: addiu       $a0, $zero, 0x4B4
    ctx->r4 = ADD32(0, 0X4B4);
    after_0:
    // 0x801D2D0C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D2D10: addiu       $v1, $v1, -0x1120
    ctx->r3 = ADD32(ctx->r3, -0X1120);
    // 0x801D2D14: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801D2D18: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D2D1C: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801D2D20: addiu       $t6, $t6, 0x31C0
    ctx->r14 = ADD32(ctx->r14, 0X31C0);
    // 0x801D2D24: addiu       $t9, $t9, 0x3D64
    ctx->r25 = ADD32(ctx->r25, 0X3D64);
    // 0x801D2D28: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x801D2D2C: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x801D2D30: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801D2D34: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x801D2D38: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801D2D3C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801D2D40: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x801D2D44: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x801D2D48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2D50: sw          $t8, -0x70A0($at)
    MEM_W(-0X70A0, ctx->r1) = ctx->r24;
    // 0x801D2D54: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x801D2D58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2D60: jr          $ra
    // 0x801D2D64: sw          $t3, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x801D2D64: sw          $t3, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void func_801E8CDC_6140BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8CE4: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x801E8CE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E8CEC: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E8CF0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E8CF4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E8CF8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801E8CFC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E8D00: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x801E8D04: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801E8D08: bc1fl       L_801E8D40
    if (!c1cs) {
        // 0x801E8D0C: lwc1        $f8, 0x94($a2)
        ctx->f8.u32l = MEM_W(ctx->r6, 0X94);
            goto L_801E8D40;
    }
    goto skip_0;
    // 0x801E8D0C: lwc1        $f8, 0x94($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X94);
    skip_0:
    // 0x801E8D10: lwc1        $f6, 0x94($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801E8D14: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x801E8D18: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E8D1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E8D20: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E8D24: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801E8D28: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x801E8D2C: sub.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d - ctx->f16.d;
    // 0x801E8D30: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E8D34: b           L_801E8DE8
    // 0x801E8D38: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
        goto L_801E8DE8;
    // 0x801E8D38: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x801E8D3C: lwc1        $f8, 0x94($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X94);
L_801E8D40:
    // 0x801E8D40: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801E8D44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E8D48: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E8D4C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E8D50: div.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x801E8D54: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E8D58: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E8D5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E8D60: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801E8D64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E8D68: sub.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f4.d - ctx->f16.d;
    // 0x801E8D6C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801E8D70: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E8D74: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x801E8D78: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
    // 0x801E8D7C: lwc1        $f16, 0x28($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X28);
    // 0x801E8D80: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x801E8D84: nop

    // 0x801E8D88: bc1fl       L_801E8DEC
    if (!c1cs) {
        // 0x801E8D8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E8DEC;
    }
    goto skip_1;
    // 0x801E8D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E8D90: swc1        $f2, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f2.u32l;
    // 0x801E8D94: sw          $v1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r3;
    // 0x801E8D98: sb          $v1, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r3;
    // 0x801E8D9C: lw          $t6, 0xE8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE8);
    // 0x801E8DA0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8DA4: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    // 0x801E8DA8: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x801E8DAC: bne         $at, $zero, L_801E8DD4
    if (ctx->r1 != 0) {
        // 0x801E8DB0: nop
    
            goto L_801E8DD4;
    }
    // 0x801E8DB0: nop

    // 0x801E8DB4: sw          $zero, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = 0;
    // 0x801E8DB8: jal         0x801EF2B0
    // 0x801E8DBC: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    func_801EF2B0_61A690(rdram, ctx);
        goto after_0;
    // 0x801E8DBC: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    after_0:
    // 0x801E8DC0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E8DC4: jal         0x8003521C
    // 0x801E8DC8: addiu       $a0, $a0, 0x5DAC
    ctx->r4 = ADD32(ctx->r4, 0X5DAC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E8DC8: addiu       $a0, $a0, 0x5DAC
    ctx->r4 = ADD32(ctx->r4, 0X5DAC);
    after_1:
    // 0x801E8DCC: b           L_801E8DEC
    // 0x801E8DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8DEC;
    // 0x801E8DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8DD4:
    // 0x801E8DD4: jal         0x801D2EE4
    // 0x801E8DD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801E8DD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x801E8DDC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E8DE0: jal         0x8003521C
    // 0x801E8DE4: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E8DE4: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    after_3:
L_801E8DE8:
    // 0x801E8DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8DEC:
    // 0x801E8DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E8DF0: jr          $ra
    // 0x801E8DF4: nop

    TRACE_RETURN()
    return;
    // 0x801E8DF4: nop

;}
RECOMP_FUNC void func_802060D8_6314B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802060D8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802060DC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802060E0: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x802060E4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802060E8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802060EC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802060F0: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x802060F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802060F8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802060FC: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x80206100: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80206104: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80206108: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020610C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80206110: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80206114: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80206118: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8020611C: addiu       $t8, $zero, 0x4B5
    ctx->r24 = ADD32(0, 0X4B5);
    // 0x80206120: addiu       $a1, $a1, 0x61B8
    ctx->r5 = ADD32(ctx->r5, 0X61B8);
    // 0x80206124: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80206128: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8020612C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80206130: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80206134: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80206138: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8020613C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80206140: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80206144: jal         0x800358E8
    // 0x80206148: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80206148: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8020614C: beq         $v0, $zero, L_802061A8
    if (ctx->r2 == 0) {
        // 0x80206150: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802061A8;
    }
    // 0x80206150: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80206154: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x80206158: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8020615C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80206160: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x80206164: lbu         $t1, 0x5B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5B);
    // 0x80206168: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x8020616C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80206170: addiu       $a1, $a1, -0x5530
    ctx->r5 = ADD32(ctx->r5, -0X5530);
    // 0x80206174: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80206178: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8020617C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80206180: jal         0x8000DF10
    // 0x80206184: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x80206184: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_1:
    // 0x80206188: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8020618C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206190: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x80206194: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80206198: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8020619C: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x802061A0: sw          $t3, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r11;
    // 0x802061A4: sb          $t4, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r12;
L_802061A8:
    // 0x802061A8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802061AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802061B0: jr          $ra
    // 0x802061B4: nop

    TRACE_RETURN()
    return;
    // 0x802061B4: nop

;}
RECOMP_FUNC void func_802095E8_6349C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802095E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802095EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802095F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802095F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802095F8: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x802095FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80209600: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80209604: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80209608: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020960C: jal         0x801D15BC
    // 0x80209610: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x80209610: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x80209614: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80209618: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8020961C: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    // 0x80209620: jal         0x801D5064
    // 0x80209624: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_801D5064_600444(rdram, ctx);
        goto after_1;
    // 0x80209624: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_1:
    // 0x80209628: beq         $v0, $zero, L_8020969C
    if (ctx->r2 == 0) {
        // 0x8020962C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8020969C;
    }
    // 0x8020962C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80209630: jal         0x80037C9C
    // 0x80209634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x80209634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80209638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8020963C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80209640: jal         0x80037C20
    // 0x80209644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x80209644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80209648: jal         0x80038BC8
    // 0x8020964C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x8020964C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80209650: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80209654: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80209658: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x8020965C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80209660: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80209664: lbu         $t8, -0x521C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X521C);
    // 0x80209668: bne         $t8, $at, L_80209688
    if (ctx->r24 != ctx->r1) {
        // 0x8020966C: nop
    
            goto L_80209688;
    }
    // 0x8020966C: nop

    // 0x80209670: jal         0x801D3AA4
    // 0x80209674: nop

    func_801D3AA4_5FEE84(rdram, ctx);
        goto after_5;
    // 0x80209674: nop

    after_5:
    // 0x80209678: jal         0x800374EC
    // 0x8020967C: nop

    func_800374EC_380EC(rdram, ctx);
        goto after_6;
    // 0x8020967C: nop

    after_6:
    // 0x80209680: b           L_80209690
    // 0x80209684: nop

        goto L_80209690;
    // 0x80209684: nop

L_80209688:
    // 0x80209688: jal         0x80037090
    // 0x8020968C: nop

    func_80037090_37C90(rdram, ctx);
        goto after_7;
    // 0x8020968C: nop

    after_7:
L_80209690:
    // 0x80209690: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80209694: jal         0x8003521C
    // 0x80209698: addiu       $a0, $a0, -0x6954
    ctx->r4 = ADD32(ctx->r4, -0X6954);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x80209698: addiu       $a0, $a0, -0x6954
    ctx->r4 = ADD32(ctx->r4, -0X6954);
    after_8:
L_8020969C:
    // 0x8020969C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802096A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802096A4: jr          $ra
    // 0x802096A8: nop

    TRACE_RETURN()
    return;
    // 0x802096A8: nop

;}
RECOMP_FUNC void func_801CF3DC_5FA7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF3DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CF3E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CF3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CF3E8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CF3EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CF3F0: addiu       $a1, $a1, -0xBD0
    ctx->r5 = ADD32(ctx->r5, -0XBD0);
    // 0x801CF3F4: jal         0x80034E08
    // 0x801CF3F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801CF3F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801CF3FC: beq         $v0, $zero, L_801CF41C
    if (ctx->r2 == 0) {
        // 0x801CF400: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801CF41C;
    }
    // 0x801CF400: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801CF404: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CF408: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x801CF40C: sw          $t6, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r14;
    // 0x801CF410: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x801CF414: sw          $t8, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r24;
    // 0x801CF418: sw          $t7, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r15;
L_801CF41C:
    // 0x801CF41C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CF420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CF424: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CF428: jr          $ra
    // 0x801CF42C: nop

    TRACE_RETURN()
    return;
    // 0x801CF42C: nop

;}
RECOMP_FUNC void func_801CD684_5F8A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD684: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801CD688: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x801CD68C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801CD690: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD694: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x801CD698: lwc1        $f0, -0x3048($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3048);
    // 0x801CD69C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801CD6A0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x801CD6A4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x801CD6A8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x801CD6AC: lw          $s4, -0x1130($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X1130);
    // 0x801CD6B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CD6B4: addiu       $t7, $zero, 0x8C
    ctx->r15 = ADD32(0, 0X8C);
    // 0x801CD6B8: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x801CD6BC: addiu       $t9, $zero, -0x3C
    ctx->r25 = ADD32(0, -0X3C);
    // 0x801CD6C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801CD6C4: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x801CD6C8: sh          $t7, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r15;
    // 0x801CD6CC: sh          $t8, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r24;
    // 0x801CD6D0: sh          $t9, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r25;
    // 0x801CD6D4: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CD6D8: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CD6DC: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x801CD6E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CD6E4: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CD6E8: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CD6EC: addiu       $s1, $s1, -0x5B90
    ctx->r17 = ADD32(ctx->r17, -0X5B90);
    // 0x801CD6F0: addiu       $a1, $a1, -0x61D0
    ctx->r5 = ADD32(ctx->r5, -0X61D0);
    // 0x801CD6F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD6F8: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    // 0x801CD6FC: addiu       $t1, $zero, 0x4A8
    ctx->r9 = ADD32(0, 0X4A8);
    // 0x801CD700: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801CD704: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x801CD708: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801CD70C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CD710: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801CD714: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CD718: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CD71C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CD720: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CD724: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CD728: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CD72C: jal         0x8000DBF0
    // 0x801CD730: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801CD730: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801CD734: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD738: lwc1        $f0, -0x3044($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3044);
    // 0x801CD73C: addiu       $s2, $zero, 0x9
    ctx->r18 = ADD32(0, 0X9);
    // 0x801CD740: sw          $v0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r2;
    // 0x801CD744: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x801CD748: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CD74C: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CD750: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CD754: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801CD758: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CD75C: addiu       $a1, $a1, -0x5F20
    ctx->r5 = ADD32(ctx->r5, -0X5F20);
    // 0x801CD760: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD764: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x801CD768: addiu       $t3, $zero, 0x4A8
    ctx->r11 = ADD32(0, 0X4A8);
    // 0x801CD76C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801CD770: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801CD774: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CD778: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CD77C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CD780: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CD784: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CD788: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801CD78C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CD790: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CD794: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CD798: jal         0x8000DBF0
    // 0x801CD79C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801CD79C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801CD7A0: sw          $v0, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r2;
    // 0x801CD7A4: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x801CD7A8: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CD7AC: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CD7B0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801CD7B4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CD7B8: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CD7BC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801CD7C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CD7C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801CD7C8: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x801CD7CC: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CD7D0: addiu       $a1, $a1, -0x41C0
    ctx->r5 = ADD32(ctx->r5, -0X41C0);
    // 0x801CD7D4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801CD7D8: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x801CD7DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD7E0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CD7E4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CD7E8: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x801CD7EC: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801CD7F0: addiu       $a2, $a2, -0x5718
    ctx->r6 = ADD32(ctx->r6, -0X5718);
    // 0x801CD7F4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CD7F8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801CD7FC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CD800: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CD804: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD808: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x801CD80C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CD810: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801CD814: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801CD818: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801CD81C: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x801CD820: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CD824: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x801CD828: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801CD82C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CD830: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801CD834: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CD838: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x801CD83C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801CD840: jal         0x8000DBF0
    // 0x801CD844: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x801CD844: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x801CD848: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x801CD84C: addiu       $s2, $s2, -0x5044
    ctx->r18 = ADD32(ctx->r18, -0X5044);
    // 0x801CD850: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801CD854: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD858: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CD85C: jal         0x8000E160
    // 0x801CD860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000E160_ED60(rdram, ctx);
        goto after_3;
    // 0x801CD860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801CD864: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CD868: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD86C: jal         0x8000E160
    // 0x801CD870: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000E160_ED60(rdram, ctx);
        goto after_4;
    // 0x801CD870: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x801CD874: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CD878: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD87C: jal         0x8000E160
    // 0x801CD880: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8000E160_ED60(rdram, ctx);
        goto after_5;
    // 0x801CD880: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x801CD884: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801CD888: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x801CD88C: sw          $s1, 0x4C($s4)
    MEM_W(0X4C, ctx->r20) = ctx->r17;
    // 0x801CD890: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CD894: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CD898: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CD89C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CD8A0: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CD8A4: addiu       $a1, $a1, -0x43C0
    ctx->r5 = ADD32(ctx->r5, -0X43C0);
    // 0x801CD8A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD8AC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CD8B0: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x801CD8B4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CD8B8: addiu       $t2, $zero, 0x4A8
    ctx->r10 = ADD32(0, 0X4A8);
    // 0x801CD8BC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CD8C0: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x801CD8C4: addiu       $a2, $a2, -0x5718
    ctx->r6 = ADD32(ctx->r6, -0X5718);
    // 0x801CD8C8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CD8CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801CD8D0: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x801CD8D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CD8D8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801CD8DC: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801CD8E0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801CD8E4: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801CD8E8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801CD8EC: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801CD8F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CD8F4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801CD8F8: jal         0x8000DBF0
    // 0x801CD8FC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_6;
    // 0x801CD8FC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x801CD900: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801CD904: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CD908: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD90C: jal         0x8000E160
    // 0x801CD910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000E160_ED60(rdram, ctx);
        goto after_7;
    // 0x801CD910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801CD914: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CD918: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD91C: jal         0x8000E160
    // 0x801CD920: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000E160_ED60(rdram, ctx);
        goto after_8;
    // 0x801CD920: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x801CD924: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CD928: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD92C: jal         0x8000E160
    // 0x801CD930: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8000E160_ED60(rdram, ctx);
        goto after_9;
    // 0x801CD930: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_9:
    // 0x801CD934: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801CD938: sb          $t3, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r11;
    // 0x801CD93C: sw          $s1, 0x50($s4)
    MEM_W(0X50, ctx->r20) = ctx->r17;
    // 0x801CD940: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CD944: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CD948: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CD94C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CD950: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CD954: addiu       $a1, $a1, -0x4000
    ctx->r5 = ADD32(ctx->r5, -0X4000);
    // 0x801CD958: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD95C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801CD960: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x801CD964: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CD968: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801CD96C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801CD970: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x801CD974: addiu       $a2, $a2, -0x5718
    ctx->r6 = ADD32(ctx->r6, -0X5718);
    // 0x801CD978: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CD97C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CD980: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x801CD984: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CD988: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CD98C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801CD990: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801CD994: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801CD998: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x801CD99C: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801CD9A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CD9A4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801CD9A8: jal         0x8000DBF0
    // 0x801CD9AC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_10;
    // 0x801CD9AC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x801CD9B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801CD9B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CD9B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD9BC: jal         0x8000E160
    // 0x801CD9C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000E160_ED60(rdram, ctx);
        goto after_11;
    // 0x801CD9C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x801CD9C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CD9C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CD9CC: jal         0x8000E160
    // 0x801CD9D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000E160_ED60(rdram, ctx);
        goto after_12;
    // 0x801CD9D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x801CD9D4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801CD9D8: sb          $t8, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r24;
    // 0x801CD9DC: sw          $s1, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r17;
    // 0x801CD9E0: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CD9E4: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CD9E8: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CD9EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CD9F0: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CD9F4: addiu       $a1, $a1, -0x3E90
    ctx->r5 = ADD32(ctx->r5, -0X3E90);
    // 0x801CD9F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD9FC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801CDA00: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x801CDA04: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CDA08: addiu       $t2, $zero, 0x4A8
    ctx->r10 = ADD32(0, 0X4A8);
    // 0x801CDA0C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CDA10: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x801CDA14: addiu       $a2, $a2, -0x5718
    ctx->r6 = ADD32(ctx->r6, -0X5718);
    // 0x801CDA18: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CDA1C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801CDA20: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x801CDA24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CDA28: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801CDA2C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801CDA30: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x801CDA34: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801CDA38: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x801CDA3C: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801CDA40: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CDA44: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801CDA48: jal         0x8000DBF0
    // 0x801CDA4C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_13;
    // 0x801CDA4C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x801CDA50: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801CDA54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CDA58: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CDA5C: jal         0x8000E160
    // 0x801CDA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000E160_ED60(rdram, ctx);
        goto after_14;
    // 0x801CDA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x801CDA64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CDA68: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801CDA6C: jal         0x8000E160
    // 0x801CDA70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000E160_ED60(rdram, ctx);
        goto after_15;
    // 0x801CDA70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x801CDA74: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801CDA78: sb          $t3, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r11;
    // 0x801CDA7C: sw          $s1, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r17;
    // 0x801CDA80: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CDA84: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CDA88: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x801CDA8C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801CDA90: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CDA94: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801CDA98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CDA9C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CDAA0: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x801CDAA4: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x801CDAA8: lui         $s2, 0x1000
    ctx->r18 = S32(0X1000 << 16);
    // 0x801CDAAC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801CDAB0: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x801CDAB4: addiu       $t4, $t4, 0x8E8
    ctx->r12 = ADD32(ctx->r12, 0X8E8);
    // 0x801CDAB8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CDABC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801CDAC0: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x801CDAC4: addiu       $t8, $zero, 0x4A8
    ctx->r24 = ADD32(0, 0X4A8);
    // 0x801CDAC8: addiu       $a2, $a2, -0x5B00
    ctx->r6 = ADD32(ctx->r6, -0X5B00);
    // 0x801CDACC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801CDAD0: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801CDAD4: addu        $a1, $s2, $t4
    ctx->r5 = ADD32(ctx->r18, ctx->r12);
    // 0x801CDAD8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CDADC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801CDAE0: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x801CDAE4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CDAE8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801CDAEC: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801CDAF0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CDAF4: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x801CDAF8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801CDAFC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x801CDB00: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801CDB04: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CDB08: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801CDB0C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CDB10: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x801CDB14: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801CDB18: jal         0x8000DBF0
    // 0x801CDB1C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_16;
    // 0x801CDB1C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_16:
    // 0x801CDB20: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801CDB24: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
    // 0x801CDB28: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801CDB2C: sw          $v0, 0x54($s4)
    MEM_W(0X54, ctx->r20) = ctx->r2;
    // 0x801CDB30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CDB34: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CDB38: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDB3C: ldc1        $f6, -0x3040($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3040);
    // 0x801CDB40: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801CDB44: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CDB48: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801CDB4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDB50: ldc1        $f4, -0x3038($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3038);
    // 0x801CDB54: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x801CDB58: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CDB5C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x801CDB60: addiu       $s1, $s1, -0x5830
    ctx->r17 = ADD32(ctx->r17, -0X5830);
    // 0x801CDB64: addiu       $t0, $t0, 0x828
    ctx->r8 = ADD32(ctx->r8, 0X828);
    // 0x801CDB68: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801CDB6C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CDB70: addiu       $t4, $zero, 0x4A8
    ctx->r12 = ADD32(0, 0X4A8);
    // 0x801CDB74: addu        $a1, $s2, $t0
    ctx->r5 = ADD32(ctx->r18, ctx->r8);
    // 0x801CDB78: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801CDB7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801CDB80: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x801CDB84: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CDB88: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CDB8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801CDB90: lhu         $t1, 0x14($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X14);
    // 0x801CDB94: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801CDB98: lhu         $t2, 0x16($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X16);
    // 0x801CDB9C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801CDBA0: lhu         $t3, 0x18($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X18);
    // 0x801CDBA4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801CDBA8: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801CDBAC: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801CDBB0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x801CDBB4: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801CDBB8: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801CDBBC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x801CDBC0: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801CDBC4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CDBC8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x801CDBCC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801CDBD0: jal         0x8000DBF0
    // 0x801CDBD4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_17;
    // 0x801CDBD4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x801CDBD8: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x801CDBDC: sb          $t5, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r13;
    // 0x801CDBE0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801CDBE4: sw          $v0, 0x58($s4)
    MEM_W(0X58, ctx->r20) = ctx->r2;
    // 0x801CDBE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CDBEC: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CDBF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDBF4: ldc1        $f18, -0x3030($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3030);
    // 0x801CDBF8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CDBFC: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801CDC00: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801CDC04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDC08: ldc1        $f16, -0x3028($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X3028);
    // 0x801CDC0C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801CDC10: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CDC14: addiu       $t6, $t6, 0x878
    ctx->r14 = ADD32(ctx->r14, 0X878);
    // 0x801CDC18: addiu       $t0, $zero, 0x4A8
    ctx->r8 = ADD32(0, 0X4A8);
    // 0x801CDC1C: addu        $a1, $s2, $t6
    ctx->r5 = ADD32(ctx->r18, ctx->r14);
    // 0x801CDC20: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801CDC24: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CDC28: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CDC2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801CDC30: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CDC34: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x801CDC38: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801CDC3C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801CDC40: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x801CDC44: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CDC48: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x801CDC4C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CDC50: lhu         $t9, 0x18($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X18);
    // 0x801CDC54: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801CDC58: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801CDC5C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801CDC60: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801CDC64: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801CDC68: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801CDC6C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801CDC70: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801CDC74: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CDC78: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801CDC7C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801CDC80: jal         0x8000DBF0
    // 0x801CDC84: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_18;
    // 0x801CDC84: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x801CDC88: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x801CDC8C: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x801CDC90: sw          $v0, 0x5C($s4)
    MEM_W(0X5C, ctx->r20) = ctx->r2;
    // 0x801CDC94: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801CDC98: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801CDC9C: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x801CDCA0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801CDCA4: lhu         $t3, -0x520C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X520C);
    // 0x801CDCA8: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x801CDCAC: beq         $at, $zero, L_801CDCE4
    if (ctx->r1 == 0) {
        // 0x801CDCB0: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_801CDCE4;
    }
    // 0x801CDCB0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801CDCB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDCB8: addu        $at, $at, $t3
    gpr jr_addend_801CDCC0 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801CDCBC: lw          $t3, -0x3020($at)
    ctx->r11 = ADD32(ctx->r1, -0X3020);
    // 0x801CDCC0: jr          $t3
    // 0x801CDCC4: nop

    switch (jr_addend_801CDCC0 >> 2) {
        case 0: goto L_801CDCE4; break;
        case 1: goto L_801CDCE4; break;
        case 2: goto L_801CDCC8; break;
        case 3: goto L_801CDCE4; break;
        case 4: goto L_801CDCE4; break;
        default: switch_error(__func__, 0x801CDCC0, 0x8020CFE0);
    }
    // 0x801CDCC4: nop

L_801CDCC8:
    // 0x801CDCC8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CDCCC: addiu       $a0, $a0, -0x5220
    ctx->r4 = ADD32(ctx->r4, -0X5220);
    // 0x801CDCD0: jal         0x80034DD8
    // 0x801CDCD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_19;
    // 0x801CDCD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x801CDCD8: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801CDCDC: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801CDCE0: sw          $v0, 0x1DC($t4)
    MEM_W(0X1DC, ctx->r12) = ctx->r2;
L_801CDCE4:
    // 0x801CDCE4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDCE8: jal         0x8003521C
    // 0x801CDCEC: addiu       $a0, $a0, -0x22F0
    ctx->r4 = ADD32(ctx->r4, -0X22F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_20;
    // 0x801CDCEC: addiu       $a0, $a0, -0x22F0
    ctx->r4 = ADD32(ctx->r4, -0X22F0);
    after_20:
    // 0x801CDCF0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801CDCF4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801CDCF8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x801CDCFC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x801CDD00: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x801CDD04: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x801CDD08: jr          $ra
    // 0x801CDD0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801CDD0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80202A10_62DDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80202A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202A18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80202A1C: lhu         $t6, 0x18($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X18);
    // 0x80202A20: addiu       $at, $zero, 0x3B0
    ctx->r1 = ADD32(0, 0X3B0);
    // 0x80202A24: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80202A28: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x80202A2C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80202A30: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80202A34: bne         $t9, $at, L_80202A44
    if (ctx->r25 != ctx->r1) {
        // 0x80202A38: sh          $t8, 0x18($a1)
        MEM_H(0X18, ctx->r5) = ctx->r24;
            goto L_80202A44;
    }
    // 0x80202A38: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x80202A3C: jal         0x8003521C
    // 0x80202A40: addiu       $a0, $a0, 0x2A54
    ctx->r4 = ADD32(ctx->r4, 0X2A54);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80202A40: addiu       $a0, $a0, 0x2A54
    ctx->r4 = ADD32(ctx->r4, 0X2A54);
    after_0:
L_80202A44:
    // 0x80202A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80202A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80202A4C: jr          $ra
    // 0x80202A50: nop

    TRACE_RETURN()
    return;
    // 0x80202A50: nop

;}
RECOMP_FUNC void func_801E3360_60E740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3360: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E3364: lw          $v0, -0x1100($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1100);
    // 0x801E3368: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E336C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801E3370: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E3374: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x801E3378: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E337C: beq         $v0, $zero, L_801E339C
    if (ctx->r2 == 0) {
        // 0x801E3380: andi        $t8, $a2, 0xFF
        ctx->r24 = ctx->r6 & 0XFF;
            goto L_801E339C;
    }
    // 0x801E3380: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x801E3384: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x801E3388: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E338C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x801E3390: sb          $t7, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r15;
    // 0x801E3394: sb          $t8, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r24;
    // 0x801E3398: sb          $t9, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r25;
L_801E339C:
    // 0x801E339C: jr          $ra
    // 0x801E33A0: nop

    TRACE_RETURN()
    return;
    // 0x801E33A0: nop

;}
RECOMP_FUNC void func_801FCB88_627F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCB88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FCB8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FCB90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FCB94: jal         0x801D614C
    // 0x801FCB98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801FCB98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FCB9C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801FCBA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FCBA4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FCBA8: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x801FCBAC: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801FCBB0: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x801FCBB4: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801FCBB8: lwc1        $f4, -0x1578($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1578);
    // 0x801FCBBC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FCBC0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801FCBC4: nop

    // 0x801FCBC8: bc1fl       L_801FCC58
    if (!c1cs) {
        // 0x801FCBCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FCC58;
    }
    goto skip_0;
    // 0x801FCBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FCBD0: lwc1        $f6, -0x1574($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1574);
    // 0x801FCBD4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801FCBD8: nop

    // 0x801FCBDC: bc1fl       L_801FCC58
    if (!c1cs) {
        // 0x801FCBE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FCC58;
    }
    goto skip_1;
    // 0x801FCBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801FCBE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FCBE8: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801FCBEC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FCBF0: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x801FCBF4: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801FCBF8: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    // 0x801FCBFC: bc1fl       L_801FCC24
    if (!c1cs) {
        // 0x801FCC00: mtc1        $at, $f19
        ctx->f_odd[(19 - 1) * 2] = ctx->r1;
            goto L_801FCC24;
    }
    goto skip_2;
    // 0x801FCC00: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    skip_2:
    // 0x801FCC04: lui         $at, 0xC008
    ctx->r1 = S32(0XC008 << 16);
    // 0x801FCC08: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801FCC0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FCC10: nop

    // 0x801FCC14: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FCC18: b           L_801FCC34
    // 0x801FCC1C: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
        goto L_801FCC34;
    // 0x801FCC1C: swc1        $f16, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f16.u32l;
    // 0x801FCC20: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
L_801FCC24:
    // 0x801FCC24: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801FCC28: nop

    // 0x801FCC2C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801FCC30: swc1        $f4, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f4.u32l;
L_801FCC34:
    // 0x801FCC34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FCC38: lwc1        $f6, -0x1570($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1570);
    // 0x801FCC3C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801FCC40: jal         0x801D31CC
    // 0x801FCC44: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801FCC44: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
    after_1:
    // 0x801FCC48: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FCC4C: jal         0x8003521C
    // 0x801FCC50: addiu       $a0, $a0, -0x339C
    ctx->r4 = ADD32(ctx->r4, -0X339C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FCC50: addiu       $a0, $a0, -0x339C
    ctx->r4 = ADD32(ctx->r4, -0X339C);
    after_2:
    // 0x801FCC54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FCC58:
    // 0x801FCC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FCC5C: jr          $ra
    // 0x801FCC60: nop

    TRACE_RETURN()
    return;
    // 0x801FCC60: nop

;}
RECOMP_FUNC void func_8020143C_62C81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020143C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80201440: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80201444: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80201448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020144C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80201450: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80201454: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x80201458: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x8020145C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80201460: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80201464: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80201468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8020146C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80201470: lui         $a1, 0xC366
    ctx->r5 = S32(0XC366 << 16);
    // 0x80201474: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80201478: nop

    // 0x8020147C: bc1f        L_80201494
    if (!c1cs) {
        // 0x80201480: nop
    
            goto L_80201494;
    }
    // 0x80201480: nop

    // 0x80201484: jal         0x801D6244
    // 0x80201488: lui         $a1, 0x4366
    ctx->r5 = S32(0X4366 << 16);
    func_801D6244_601624(rdram, ctx);
        goto after_0;
    // 0x80201488: lui         $a1, 0x4366
    ctx->r5 = S32(0X4366 << 16);
    after_0:
    // 0x8020148C: b           L_802014A0
    // 0x80201490: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
        goto L_802014A0;
    // 0x80201490: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_80201494:
    // 0x80201494: jal         0x801D6244
    // 0x80201498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6244_601624(rdram, ctx);
        goto after_1;
    // 0x80201498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8020149C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_802014A0:
    // 0x802014A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802014A4: lui         $a1, 0xC352
    ctx->r5 = S32(0XC352 << 16);
    // 0x802014A8: jal         0x801D6330
    // 0x802014AC: sb          $v1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r3;
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x802014AC: sb          $v1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r3;
    after_2:
    // 0x802014B0: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    // 0x802014B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802014B8: jal         0x801D641C
    // 0x802014BC: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    func_801D641C_6017FC(rdram, ctx);
        goto after_3;
    // 0x802014BC: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    after_3:
    // 0x802014C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802014C4: addiu       $a1, $a1, -0x10C0
    ctx->r5 = ADD32(ctx->r5, -0X10C0);
    // 0x802014C8: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x802014CC: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x802014D0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x802014D4: lbu         $t8, 0x10($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X10);
    // 0x802014D8: beq         $t8, $zero, L_802014FC
    if (ctx->r24 == 0) {
        // 0x802014DC: nop
    
            goto L_802014FC;
    }
    // 0x802014DC: nop

    // 0x802014E0: jal         0x80200684
    // 0x802014E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_4;
    // 0x802014E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802014E8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802014EC: addiu       $a1, $a1, -0x10C0
    ctx->r5 = ADD32(ctx->r5, -0X10C0);
    // 0x802014F0: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x802014F4: b           L_80201584
    // 0x802014F8: sb          $zero, 0xF($t9)
    MEM_B(0XF, ctx->r25) = 0;
        goto L_80201584;
    // 0x802014F8: sb          $zero, 0xF($t9)
    MEM_B(0XF, ctx->r25) = 0;
L_802014FC:
    // 0x802014FC: beq         $v1, $zero, L_8020157C
    if (ctx->r3 == 0) {
        // 0x80201500: lbu         $t0, 0x26($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X26);
            goto L_8020157C;
    }
    // 0x80201500: lbu         $t0, 0x26($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X26);
    // 0x80201504: beq         $t0, $zero, L_8020157C
    if (ctx->r8 == 0) {
        // 0x80201508: nop
    
            goto L_8020157C;
    }
    // 0x80201508: nop

    // 0x8020150C: beq         $a0, $zero, L_8020157C
    if (ctx->r4 == 0) {
        // 0x80201510: lw          $t1, 0x2C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X2C);
            goto L_8020157C;
    }
    // 0x80201510: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80201514: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80201518: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8020151C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80201520: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80201524: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80201528: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8020152C: bc1fl       L_80201554
    if (!c1cs) {
        // 0x80201530: mtc1        $at, $f5
        ctx->f_odd[(5 - 1) * 2] = ctx->r1;
            goto L_80201554;
    }
    goto skip_0;
    // 0x80201530: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x80201534: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80201538: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8020153C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80201540: nop

    // 0x80201544: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80201548: b           L_80201564
    // 0x8020154C: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
        goto L_80201564;
    // 0x8020154C: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
    // 0x80201550: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
L_80201554:
    // 0x80201554: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80201558: nop

    // 0x8020155C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80201560: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
L_80201564:
    // 0x80201564: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x80201568: addiu       $a0, $a0, 0x1598
    ctx->r4 = ADD32(ctx->r4, 0X1598);
    // 0x8020156C: jal         0x8003521C
    // 0x80201570: sb          $t2, 0xF($t3)
    MEM_B(0XF, ctx->r11) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80201570: sb          $t2, 0xF($t3)
    MEM_B(0XF, ctx->r11) = ctx->r10;
    after_5:
    // 0x80201574: b           L_80201588
    // 0x80201578: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80201588;
    // 0x80201578: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8020157C:
    // 0x8020157C: jal         0x8020407C
    // 0x80201580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_6;
    // 0x80201580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_80201584:
    // 0x80201584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80201588:
    // 0x80201588: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8020158C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80201590: jr          $ra
    // 0x80201594: nop

    TRACE_RETURN()
    return;
    // 0x80201594: nop

;}
RECOMP_FUNC void func_801FD114_6284F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FD118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FD11C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801FD120: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FD124: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801FD128: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801FD12C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FD130: jal         0x801D3B18
    // 0x801FD134: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801FD134: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x801FD138: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x801FD13C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FD140: jal         0x801D6244
    // 0x801FD144: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801D6244_601624(rdram, ctx);
        goto after_1;
    // 0x801FD144: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x801FD148: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801FD14C: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x801FD150: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x801FD154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FD158: jal         0x801D6330
    // 0x801FD15C: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x801FD15C: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    after_2:
    // 0x801FD160: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801FD164: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801FD168: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x801FD16C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FD170: jal         0x801D641C
    // 0x801FD174: lui         $a1, 0xC461
    ctx->r5 = S32(0XC461 << 16);
    func_801D641C_6017FC(rdram, ctx);
        goto after_3;
    // 0x801FD174: lui         $a1, 0xC461
    ctx->r5 = S32(0XC461 << 16);
    after_3:
    // 0x801FD178: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801FD17C: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x801FD180: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801FD184: bne         $t8, $at, L_801FD1BC
    if (ctx->r24 != ctx->r1) {
        // 0x801FD188: addiu       $t9, $zero, 0x64
        ctx->r25 = ADD32(0, 0X64);
            goto L_801FD1BC;
    }
    // 0x801FD188: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x801FD18C: sw          $t9, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->r25;
    // 0x801FD190: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801FD194: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x801FD198: jal         0x801FFE34
    // 0x801FD19C: sb          $zero, 0x815($t0)
    MEM_B(0X815, ctx->r8) = 0;
    func_801FFE34_62B214(rdram, ctx);
        goto after_4;
    // 0x801FD19C: sb          $zero, 0x815($t0)
    MEM_B(0X815, ctx->r8) = 0;
    after_4:
    // 0x801FD1A0: jal         0x80038BC8
    // 0x801FD1A4: addiu       $a0, $zero, 0x152
    ctx->r4 = ADD32(0, 0X152);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801FD1A4: addiu       $a0, $zero, 0x152
    ctx->r4 = ADD32(0, 0X152);
    after_5:
    // 0x801FD1A8: jal         0x80038BC8
    // 0x801FD1AC: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801FD1AC: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_6:
    // 0x801FD1B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD1B4: jal         0x8003521C
    // 0x801FD1B8: addiu       $a0, $a0, -0x2E30
    ctx->r4 = ADD32(ctx->r4, -0X2E30);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801FD1B8: addiu       $a0, $a0, -0x2E30
    ctx->r4 = ADD32(ctx->r4, -0X2E30);
    after_7:
L_801FD1BC:
    // 0x801FD1BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FD1C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801FD1C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801FD1C8: jr          $ra
    // 0x801FD1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801FD1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801D9E80_605260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9E80: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D9E84: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801D9E88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D9E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9E90: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801D9E94: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801D9E98: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801D9E9C: jal         0x801D619C
    // 0x801D9EA0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801D619C_60157C(rdram, ctx);
        goto after_0;
    // 0x801D9EA0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D9EA4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D9EA8: jal         0x801DA3CC
    // 0x801D9EAC: lw          $a1, 0x90($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X90);
    func_801DA3CC_6057AC(rdram, ctx);
        goto after_1;
    // 0x801D9EAC: lw          $a1, 0x90($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X90);
    after_1:
    // 0x801D9EB0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D9EB4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801D9EB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D9EBC: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x801D9EC0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801D9EC4: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x801D9EC8: beql        $a1, $zero, L_801DA034
    if (ctx->r5 == 0) {
        // 0x801D9ECC: lw          $t8, 0x7C($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X7C);
            goto L_801DA034;
    }
    goto skip_0;
    // 0x801D9ECC: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    skip_0:
    // 0x801D9ED0: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801D9ED4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801D9ED8: lw          $t0, 0x1D8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1D8);
    // 0x801D9EDC: bnel        $a1, $t0, L_801DA004
    if (ctx->r5 != ctx->r8) {
        // 0x801D9EE0: lw          $t6, 0x64($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X64);
            goto L_801DA004;
    }
    goto skip_1;
    // 0x801D9EE0: lw          $t6, 0x64($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X64);
    skip_1:
    // 0x801D9EE4: lw          $t1, 0x64($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X64);
    // 0x801D9EE8: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x801D9EEC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x801D9EF0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x801D9EF4: beql        $t2, $zero, L_801D9F10
    if (ctx->r10 == 0) {
        // 0x801D9EF8: mtc1        $at, $f1
        ctx->f_odd[(1 - 1) * 2] = ctx->r1;
            goto L_801D9F10;
    }
    goto skip_2;
    // 0x801D9EF8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    skip_2:
    // 0x801D9EFC: jal         0x801DA07C
    // 0x801D9F00: nop

    func_801DA07C_60545C(rdram, ctx);
        goto after_2;
    // 0x801D9F00: nop

    after_2:
    // 0x801D9F04: b           L_801DA070
    // 0x801D9F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA070;
    // 0x801D9F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D9F0C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
L_801D9F10:
    // 0x801D9F10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9F14: ldc1        $f2, -0x26D8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X26D8);
    // 0x801D9F18: sw          $a1, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->r5;
    // 0x801D9F1C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x801D9F20: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x801D9F24: lwc1        $f4, 0xA4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801D9F28: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    // 0x801D9F2C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D9F30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9F34: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D9F38: lwc1        $f4, 0xA8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801D9F3C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D9F40: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x801D9F44: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D9F48: swc1        $f18, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f18.u32l;
    // 0x801D9F4C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D9F50: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D9F54: lwc1        $f4, 0xAC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x801D9F58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D9F5C: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x801D9F60: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D9F64: swc1        $f18, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f18.u32l;
    // 0x801D9F68: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D9F6C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D9F70: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D9F74: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x801D9F78: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D9F7C: swc1        $f18, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f18.u32l;
    // 0x801D9F80: lwc1        $f4, 0x1C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x801D9F84: lwc1        $f16, 0x20($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X20);
    // 0x801D9F88: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    // 0x801D9F8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D9F90: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D9F94: div.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f2.d);
    // 0x801D9F98: div.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f2.d);
    // 0x801D9F9C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D9FA0: lwc1        $f8, 0x24($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X24);
    // 0x801D9FA4: swc1        $f10, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f10.u32l;
    // 0x801D9FA8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D9FAC: div.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x801D9FB0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D9FB4: swc1        $f6, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f6.u32l;
    // 0x801D9FB8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D9FBC: jal         0x80038BC8
    // 0x801D9FC0: swc1        $f18, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f18.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801D9FC0: swc1        $f18, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f18.u32l;
    after_3:
    // 0x801D9FC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D9FC8: jal         0x80037C9C
    // 0x801D9FCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80037C9C_3889C(rdram, ctx);
        goto after_4;
    // 0x801D9FCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x801D9FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D9FD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D9FD8: jal         0x80037C20
    // 0x801D9FDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_5;
    // 0x801D9FDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_5:
    // 0x801D9FE0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x801D9FE4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801D9FE8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9FEC: addiu       $a0, $a0, -0x5DD8
    ctx->r4 = ADD32(ctx->r4, -0X5DD8);
    // 0x801D9FF0: jal         0x8003521C
    // 0x801D9FF4: sw          $t4, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->r12;
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801D9FF4: sw          $t4, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->r12;
    after_6:
    // 0x801D9FF8: b           L_801DA070
    // 0x801D9FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA070;
    // 0x801D9FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA000: lw          $t6, 0x64($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X64);
L_801DA004:
    // 0x801DA004: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x801DA008: beq         $t7, $zero, L_801DA020
    if (ctx->r15 == 0) {
        // 0x801DA00C: nop
    
            goto L_801DA020;
    }
    // 0x801DA00C: nop

    // 0x801DA010: jal         0x801DA07C
    // 0x801DA014: nop

    func_801DA07C_60545C(rdram, ctx);
        goto after_7;
    // 0x801DA014: nop

    after_7:
    // 0x801DA018: b           L_801DA070
    // 0x801DA01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA070;
    // 0x801DA01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA020:
    // 0x801DA020: jal         0x801D36BC
    // 0x801DA024: nop

    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_8;
    // 0x801DA024: nop

    after_8:
    // 0x801DA028: b           L_801DA070
    // 0x801DA02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA070;
    // 0x801DA02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA030: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
L_801DA034:
    // 0x801DA034: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801DA038: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801DA03C: bgez        $t9, L_801DA054
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801DA040: sw          $t9, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r25;
            goto L_801DA054;
    }
    // 0x801DA040: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801DA044: jal         0x801DA07C
    // 0x801DA048: nop

    func_801DA07C_60545C(rdram, ctx);
        goto after_9;
    // 0x801DA048: nop

    after_9:
    // 0x801DA04C: b           L_801DA070
    // 0x801DA050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA070;
    // 0x801DA050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA054:
    // 0x801DA054: jal         0x801D4338
    // 0x801DA058: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_801D4338_5FF718(rdram, ctx);
        goto after_10;
    // 0x801DA058: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_10:
    // 0x801DA05C: beq         $v0, $zero, L_801DA06C
    if (ctx->r2 == 0) {
        // 0x801DA060: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_801DA06C;
    }
    // 0x801DA060: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801DA064: jal         0x801DA07C
    // 0x801DA068: nop

    func_801DA07C_60545C(rdram, ctx);
        goto after_11;
    // 0x801DA068: nop

    after_11:
L_801DA06C:
    // 0x801DA06C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA070:
    // 0x801DA070: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DA074: jr          $ra
    // 0x801DA078: nop

    TRACE_RETURN()
    return;
    // 0x801DA078: nop

;}
RECOMP_FUNC void func_801F4220_61F600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F4224: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F4228: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801F422C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801F4230: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4234: jal         0x801F76D0
    // 0x801F4238: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F4238: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801F423C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F4240: jal         0x801D2F40
    // 0x801F4244: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F4244: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_1:
    // 0x801F4248: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F424C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F4250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F4254: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801F4258: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F425C: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801F4260: nop

    // 0x801F4264: bc1fl       L_801F427C
    if (!c1cs) {
        // 0x801F4268: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_801F427C;
    }
    goto skip_0;
    // 0x801F4268: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    skip_0:
    // 0x801F426C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F4270: nop

    // 0x801F4274: swc1        $f8, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f8.u32l;
    // 0x801F4278: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
L_801F427C:
    // 0x801F427C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F4280: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801F4284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4288: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F428C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F4290: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801F4294: jal         0x801D3B18
    // 0x801F4298: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_2;
    // 0x801F4298: nop

    after_2:
    // 0x801F429C: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x801F42A0: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x801F42A4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x801F42A8: addiu       $t1, $zero, 0x3FC
    ctx->r9 = ADD32(0, 0X3FC);
    // 0x801F42AC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801F42B0: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801F42B4: sltiu       $at, $t9, 0x280
    ctx->r1 = ctx->r25 < 0X280 ? 1 : 0;
    // 0x801F42B8: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x801F42BC: beq         $at, $zero, L_801F42CC
    if (ctx->r1 == 0) {
        // 0x801F42C0: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_801F42CC;
    }
    // 0x801F42C0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801F42C4: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
    // 0x801F42C8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_801F42CC:
    // 0x801F42CC: sltiu       $at, $v0, 0x381
    ctx->r1 = ctx->r2 < 0X381 ? 1 : 0;
    // 0x801F42D0: bnel        $at, $zero, L_801F42E4
    if (ctx->r1 != 0) {
        // 0x801F42D4: lw          $t2, 0x98($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X98);
            goto L_801F42E4;
    }
    goto skip_1;
    // 0x801F42D4: lw          $t2, 0x98($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X98);
    skip_1:
    // 0x801F42D8: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
    // 0x801F42DC: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x801F42E0: lw          $t2, 0x98($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X98);
L_801F42E4:
    // 0x801F42E4: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801F42E8: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801F42EC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801F42F0: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801F42F4: jal         0x8000E630
    // 0x801F42F8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_8000E630_F230(rdram, ctx);
        goto after_3;
    // 0x801F42F8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x801F42FC: jal         0x801F732C
    // 0x801F4300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_4;
    // 0x801F4300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F4304: lw          $t3, 0x80($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X80);
    // 0x801F4308: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F430C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x801F4310: bne         $t4, $zero, L_801F4358
    if (ctx->r12 != 0) {
        // 0x801F4314: sw          $t4, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r12;
            goto L_801F4358;
    }
    // 0x801F4314: sw          $t4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r12;
    // 0x801F4318: lwc1        $f6, 0x20($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801F431C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F4320: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F4324: ldc1        $f10, -0x1978($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1978);
    // 0x801F4328: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801F432C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F4330: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801F4334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801F4338: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801F433C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801F4340: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801F4344: jal         0x8000E39C
    // 0x801F4348: nop

    func_8000E39C_EF9C(rdram, ctx);
        goto after_5;
    // 0x801F4348: nop

    after_5:
    // 0x801F434C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4350: jal         0x8003521C
    // 0x801F4354: addiu       $a0, $a0, 0x436C
    ctx->r4 = ADD32(ctx->r4, 0X436C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F4354: addiu       $a0, $a0, 0x436C
    ctx->r4 = ADD32(ctx->r4, 0X436C);
    after_6:
L_801F4358:
    // 0x801F4358: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F435C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4360: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801F4364: jr          $ra
    // 0x801F4368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F4368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801ED378_618758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED378: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801ED37C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801ED380: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801ED384: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801ED388: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801ED38C: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x801ED390: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x801ED394: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801ED398: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801ED39C: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x801ED3A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801ED3A4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801ED3A8: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x801ED3AC: sb          $t8, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r24;
    // 0x801ED3B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801ED3B4: jal         0x801D44D8
    // 0x801ED3B8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_801D44D8_5FF8B8(rdram, ctx);
        goto after_0;
    // 0x801ED3B8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x801ED3BC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801ED3C0: beq         $v0, $zero, L_801ED4B8
    if (ctx->r2 == 0) {
        // 0x801ED3C4: lwc1        $f4, 0x54($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
            goto L_801ED4B8;
    }
    // 0x801ED3C4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801ED3C8: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x801ED3CC: swc1        $f4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f4.u32l;
    // 0x801ED3D0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801ED3D4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801ED3D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801ED3DC: swc1        $f6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f6.u32l;
    // 0x801ED3E0: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801ED3E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED3E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801ED3EC: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
    // 0x801ED3F0: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x801ED3F4: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801ED3F8: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801ED3FC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801ED400: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x801ED404: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801ED408: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801ED40C: nop

    // 0x801ED410: bc1fl       L_801ED424
    if (!c1cs) {
        // 0x801ED414: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_801ED424;
    }
    goto skip_0;
    // 0x801ED414: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_0:
    // 0x801ED418: b           L_801ED434
    // 0x801ED41C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_801ED434;
    // 0x801ED41C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801ED420: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_801ED424:
    // 0x801ED424: nop

    // 0x801ED428: bc1fl       L_801ED438
    if (!c1cs) {
        // 0x801ED42C: div.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
            goto L_801ED438;
    }
    goto skip_1;
    // 0x801ED42C: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    skip_1:
    // 0x801ED430: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801ED434:
    // 0x801ED434: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
L_801ED438:
    // 0x801ED438: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801ED43C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801ED440: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801ED444: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801ED448: swc1        $f12, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f12.u32l;
    // 0x801ED44C: sw          $t1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r9;
    // 0x801ED450: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ED454: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801ED458: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801ED45C: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801ED460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED464: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801ED468: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801ED46C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801ED470: swc1        $f10, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f10.u32l;
    // 0x801ED474: lwc1        $f16, 0x9C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x801ED478: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x801ED47C: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x801ED480: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801ED484: jal         0x8000DF10
    // 0x801ED488: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801ED488: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x801ED48C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED490: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x801ED494: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x801ED498: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ED49C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x801ED4A0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ED4A4: addiu       $a0, $a0, -0x2B2C
    ctx->r4 = ADD32(ctx->r4, -0X2B2C);
    // 0x801ED4A8: jal         0x8003521C
    // 0x801ED4AC: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801ED4AC: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    after_2:
    // 0x801ED4B0: b           L_801ED4C4
    // 0x801ED4B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801ED4C4;
    // 0x801ED4B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801ED4B8:
    // 0x801ED4B8: jal         0x80034ED4
    // 0x801ED4BC: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801ED4BC: nop

    after_3:
    // 0x801ED4C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801ED4C4:
    // 0x801ED4C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801ED4C8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x801ED4CC: jr          $ra
    // 0x801ED4D0: nop

    TRACE_RETURN()
    return;
    // 0x801ED4D0: nop

;}
RECOMP_FUNC void func_80202A9C_62DE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202A9C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80202AA0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80202AA4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80202AA8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80202AAC: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x80202AB0: addiu       $a2, $a2, 0x4540
    ctx->r6 = ADD32(ctx->r6, 0X4540);
    // 0x80202AB4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80202AB8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80202ABC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80202AC0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80202AC4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80202AC8: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80202ACC: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80202AD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80202AD4: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80202AD8: addiu       $a3, $a3, -0x5430
    ctx->r7 = ADD32(ctx->r7, -0X5430);
    // 0x80202ADC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80202AE0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80202AE4: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x80202AE8: addiu       $a1, $a1, 0x2BE4
    ctx->r5 = ADD32(ctx->r5, 0X2BE4);
    // 0x80202AEC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80202AF0: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80202AF4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80202AF8: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x80202AFC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80202B00: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80202B04: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80202B08: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80202B0C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80202B10: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80202B14: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80202B18: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80202B1C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80202B20: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x80202B24: jal         0x800358E8
    // 0x80202B28: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80202B28: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80202B2C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x80202B30: beq         $v0, $zero, L_80202BD0
    if (ctx->r2 == 0) {
        // 0x80202B34: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80202BD0;
    }
    // 0x80202B34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80202B38: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x80202B3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80202B40: addiu       $t1, $zero, 0x9B
    ctx->r9 = ADD32(0, 0X9B);
    // 0x80202B44: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x80202B48: lbu         $t0, 0x5($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X5);
    // 0x80202B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202B50: lui         $a2, 0xC32E
    ctx->r6 = S32(0XC32E << 16);
    // 0x80202B54: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x80202B58: sh          $t1, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r9;
    // 0x80202B5C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80202B60: lui         $a3, 0xC210
    ctx->r7 = S32(0XC210 << 16);
    // 0x80202B64: jal         0x80203F5C
    // 0x80202B68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80202B68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80202B6C: jal         0x80203F88
    // 0x80202B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80202B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80202B74: jal         0x8020302C
    // 0x80202B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020302C_62E40C(rdram, ctx);
        goto after_3;
    // 0x80202B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80202B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202B80: jal         0x802032E8
    // 0x80202B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802032E8_62E6C8(rdram, ctx);
        goto after_4;
    // 0x80202B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80202B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202B8C: jal         0x802032E8
    // 0x80202B90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802032E8_62E6C8(rdram, ctx);
        goto after_5;
    // 0x80202B90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80202B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202B98: jal         0x802032E8
    // 0x80202B9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_802032E8_62E6C8(rdram, ctx);
        goto after_6;
    // 0x80202B9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80202BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202BA4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x80202BA8: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80202BAC: lui         $a3, 0xC3E1
    ctx->r7 = S32(0XC3E1 << 16);
    // 0x80202BB0: jal         0x802046F0
    // 0x80202BB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802046F0_62FAD0(rdram, ctx);
        goto after_7;
    // 0x80202BB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80202BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202BBC: lui         $a1, 0x4250
    ctx->r5 = S32(0X4250 << 16);
    // 0x80202BC0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x80202BC4: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x80202BC8: jal         0x802046F0
    // 0x80202BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802046F0_62FAD0(rdram, ctx);
        goto after_8;
    // 0x80202BCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_80202BD0:
    // 0x80202BD0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80202BD4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80202BD8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80202BDC: jr          $ra
    // 0x80202BE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80202BE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801D39E0_5FEDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D39E0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D39E4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D39E8: lw          $v1, 0x68($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X68);
    // 0x801D39EC: slti        $at, $v1, 0x3E7
    ctx->r1 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x801D39F0: bne         $at, $zero, L_801D3A00
    if (ctx->r1 != 0) {
        // 0x801D39F4: nop
    
            goto L_801D3A00;
    }
    // 0x801D39F4: nop

    // 0x801D39F8: addiu       $v1, $zero, 0x3E7
    ctx->r3 = ADD32(0, 0X3E7);
    // 0x801D39FC: sw          $v1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r3;
L_801D3A00:
    // 0x801D3A00: bgtz        $v1, L_801D3A10
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D3A04: nop
    
            goto L_801D3A10;
    }
    // 0x801D3A04: nop

    // 0x801D3A08: sw          $zero, 0x68($v0)
    MEM_W(0X68, ctx->r2) = 0;
    // 0x801D3A0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D3A10:
    // 0x801D3A10: jr          $ra
    // 0x801D3A14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3A14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80209480_634860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80209480: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80209484: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80209488: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8020948C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80209490: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x80209494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80209498: bnel        $v0, $zero, L_802094C8
    if (ctx->r2 != 0) {
        // 0x8020949C: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_802094C8;
    }
    goto skip_0;
    // 0x8020949C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x802094A0: jal         0x80038BC8
    // 0x802094A4: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x802094A4: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x802094A8: jal         0x80038BC8
    // 0x802094AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x802094AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x802094B0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802094B4: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x802094B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802094BC: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x802094C0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x802094C4: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
L_802094C8:
    // 0x802094C8: bgez        $t8, L_802095D4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802094CC: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_802095D4;
    }
    // 0x802094CC: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x802094D0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802094D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802094D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802094DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802094E0: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802094E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802094E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802094EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802094F0: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x802094F4: swc1        $f8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f8.u32l;
    // 0x802094F8: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802094FC: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80209500: nop

    // 0x80209504: bc1fl       L_80209518
    if (!c1cs) {
        // 0x80209508: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80209518;
    }
    goto skip_1;
    // 0x80209508: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x8020950C: b           L_80209518
    // 0x80209510: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_80209518;
    // 0x80209510: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80209514: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80209518:
    // 0x80209518: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8020951C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80209520: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80209524: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80209528: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8020952C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80209530: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80209534: nop

    // 0x80209538: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x8020953C: beql        $a3, $zero, L_8020958C
    if (ctx->r7 == 0) {
        // 0x80209540: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_8020958C;
    }
    goto skip_2;
    // 0x80209540: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x80209544: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80209548: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8020954C: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x80209550: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80209554: nop

    // 0x80209558: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020955C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80209560: nop

    // 0x80209564: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80209568: bne         $a3, $zero, L_80209580
    if (ctx->r7 != 0) {
        // 0x8020956C: nop
    
            goto L_80209580;
    }
    // 0x8020956C: nop

    // 0x80209570: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80209574: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80209578: b           L_80209598
    // 0x8020957C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_80209598;
    // 0x8020957C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_80209580:
    // 0x80209580: b           L_80209598
    // 0x80209584: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80209598;
    // 0x80209584: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80209588: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_8020958C:
    // 0x8020958C: nop

    // 0x80209590: bltz        $a3, L_80209580
    if (SIGNED(ctx->r7) < 0) {
        // 0x80209594: nop
    
            goto L_80209580;
    }
    // 0x80209594: nop

L_80209598:
    // 0x80209598: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8020959C: andi        $t1, $a3, 0xFFFF
    ctx->r9 = ctx->r7 & 0XFFFF;
    // 0x802095A0: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x802095A4: jal         0x801D15BC
    // 0x802095A8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_2;
    // 0x802095A8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x802095AC: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x802095B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802095B4: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802095B8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802095BC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802095C0: nop

    // 0x802095C4: bc1fl       L_802095D8
    if (!c1cs) {
        // 0x802095C8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802095D8;
    }
    goto skip_3;
    // 0x802095C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x802095CC: jal         0x8003521C
    // 0x802095D0: addiu       $a0, $a0, -0x6A18
    ctx->r4 = ADD32(ctx->r4, -0X6A18);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x802095D0: addiu       $a0, $a0, -0x6A18
    ctx->r4 = ADD32(ctx->r4, -0X6A18);
    after_3:
L_802095D4:
    // 0x802095D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802095D8:
    // 0x802095D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802095DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802095E0: jr          $ra
    // 0x802095E4: nop

    TRACE_RETURN()
    return;
    // 0x802095E4: nop

;}
RECOMP_FUNC void func_801F6450_621830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6450: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F6454: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F6458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F645C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6460: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F6464: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F6468: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801F646C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F6470: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F6474: jal         0x801F76D0
    // 0x801F6478: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F6478: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F647C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F6480: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6484: lwc1        $f4, 0x90($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801F6488: lhu         $a1, 0x96($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X96);
    // 0x801F648C: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801F6490: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F6494: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x801F6498: swc1        $f8, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f8.u32l;
    // 0x801F649C: jal         0x8000E630
    // 0x801F64A0: lwc1        $f12, 0x90($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801F64A0: lwc1        $f12, 0x90($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X90);
    after_1:
    // 0x801F64A4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801F64A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F64AC: jal         0x8000E9F4
    // 0x801F64B0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_2;
    // 0x801F64B0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_2:
    // 0x801F64B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801F64B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F64BC: jal         0x801D3018
    // 0x801F64C0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_3;
    // 0x801F64C0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_3:
    // 0x801F64C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801F64C8: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x801F64CC: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x801F64D0: bnel        $t9, $zero, L_801F64F0
    if (ctx->r25 != 0) {
        // 0x801F64D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F64F0;
    }
    goto skip_0;
    // 0x801F64D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F64D8: jal         0x801F7004
    // 0x801F64DC: sw          $t0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r8;
    func_801F7004_6223E4(rdram, ctx);
        goto after_4;
    // 0x801F64DC: sw          $t0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r8;
    after_4:
    // 0x801F64E0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F64E4: jal         0x8003521C
    // 0x801F64E8: addiu       $a0, $a0, 0x6500
    ctx->r4 = ADD32(ctx->r4, 0X6500);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F64E8: addiu       $a0, $a0, 0x6500
    ctx->r4 = ADD32(ctx->r4, 0X6500);
    after_5:
    // 0x801F64EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F64F0:
    // 0x801F64F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F64F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F64F8: jr          $ra
    // 0x801F64FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F64FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801F30A0_61E480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F30A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F30A4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F30A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F30AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F30B0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801F30B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F30B8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801F30BC: jal         0x801D3018
    // 0x801F30C0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F30C0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F30C4: jal         0x801F76D0
    // 0x801F30C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F30C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F30CC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F30D0: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801F30D4: lw          $a2, 0x94($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X94);
    // 0x801F30D8: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801F30DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F30E0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x801F30E4: jal         0x801D46B8
    // 0x801F30E8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_2;
    // 0x801F30E8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x801F30EC: jal         0x801D614C
    // 0x801F30F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_3;
    // 0x801F30F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F30F4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x801F30F8: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F30FC: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F3100: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F3104: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F3108: addiu       $t7, $v0, 0x14
    ctx->r15 = ADD32(ctx->r2, 0X14);
    // 0x801F310C: addiu       $t8, $v0, 0x16
    ctx->r24 = ADD32(ctx->r2, 0X16);
    // 0x801F3110: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801F3114: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801F3118: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801F311C: jal         0x8000EC04
    // 0x801F3120: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_4;
    // 0x801F3120: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x801F3124: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801F3128: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801F312C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F3130: jal         0x8000ED00
    // 0x801F3134: lw          $a0, 0x1CC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_5;
    // 0x801F3134: lw          $a0, 0x1CC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1CC);
    after_5:
    // 0x801F3138: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F313C: lwc1        $f4, -0x1998($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1998);
    // 0x801F3140: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3144: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801F3148: nop

    // 0x801F314C: bc1fl       L_801F3190
    if (!c1cs) {
        // 0x801F3150: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F3190;
    }
    goto skip_0;
    // 0x801F3150: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x801F3154: lwc1        $f6, -0x1994($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1994);
    // 0x801F3158: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F315C: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    // 0x801F3160: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801F3164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3168: bc1fl       L_801F3190
    if (!c1cs) {
        // 0x801F316C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F3190;
    }
    goto skip_1;
    // 0x801F316C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x801F3170: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801F3174: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x801F3178: jal         0x801D31CC
    // 0x801F317C: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_6;
    // 0x801F317C: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    after_6:
    // 0x801F3180: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3184: jal         0x8003521C
    // 0x801F3188: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F3188: addiu       $a0, $a0, 0x31A0
    ctx->r4 = ADD32(ctx->r4, 0X31A0);
    after_7:
    // 0x801F318C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F3190:
    // 0x801F3190: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801F3194: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F3198: jr          $ra
    // 0x801F319C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801F319C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801FD088_628468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD088: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FD08C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FD090: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FD094: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FD098: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FD09C: jal         0x801D3F00
    // 0x801FD0A0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_0;
    // 0x801FD0A0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x801FD0A4: beq         $v0, $zero, L_801FD104
    if (ctx->r2 == 0) {
        // 0x801FD0A8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801FD104;
    }
    // 0x801FD0A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FD0AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FD0B0: jal         0x801D3E90
    // 0x801FD0B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3E90_5FF270(rdram, ctx);
        goto after_1;
    // 0x801FD0B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x801FD0B8: beq         $v0, $zero, L_801FD104
    if (ctx->r2 == 0) {
        // 0x801FD0BC: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_801FD104;
    }
    // 0x801FD0BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801FD0C0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801FD0C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FD0C8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801FD0CC: lui         $a2, 0xC2A0
    ctx->r6 = S32(0XC2A0 << 16);
    // 0x801FD0D0: lui         $a3, 0xC461
    ctx->r7 = S32(0XC461 << 16);
    // 0x801FD0D4: jal         0x8000E39C
    // 0x801FD0D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801FD0D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_2:
    // 0x801FD0DC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FD0E0: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    // 0x801FD0E4: jal         0x801D31CC
    // 0x801FD0E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801FD0E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x801FD0EC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FD0F0: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x801FD0F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD0F8: addiu       $a0, $a0, -0x2EEC
    ctx->r4 = ADD32(ctx->r4, -0X2EEC);
    // 0x801FD0FC: jal         0x8003521C
    // 0x801FD100: sb          $zero, 0x817($t7)
    MEM_B(0X817, ctx->r15) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FD100: sb          $zero, 0x817($t7)
    MEM_B(0X817, ctx->r15) = 0;
    after_4:
L_801FD104:
    // 0x801FD104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FD108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FD10C: jr          $ra
    // 0x801FD110: nop

    TRACE_RETURN()
    return;
    // 0x801FD110: nop

;}
RECOMP_FUNC void func_801E6150_611530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6158: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E615C: jal         0x801EF268
    // 0x801E6160: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF268_61A648(rdram, ctx);
        goto after_0;
    // 0x801E6160: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E6164: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6168: addiu       $a1, $a1, -0x4E68
    ctx->r5 = ADD32(ctx->r5, -0X4E68);
    // 0x801E616C: jal         0x801D2EE4
    // 0x801E6170: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801E6170: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E6174: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6178: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E617C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E6184: jal         0x801D34D0
    // 0x801E6188: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E6188: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x801E618C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6190: jal         0x8003521C
    // 0x801E6194: addiu       $a0, $a0, 0x61A8
    ctx->r4 = ADD32(ctx->r4, 0X61A8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E6194: addiu       $a0, $a0, 0x61A8
    ctx->r4 = ADD32(ctx->r4, 0X61A8);
    after_3:
    // 0x801E6198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E619C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E61A0: jr          $ra
    // 0x801E61A4: nop

    TRACE_RETURN()
    return;
    // 0x801E61A4: nop

;}
RECOMP_FUNC void func_801D6B50_601F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6B50: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6B54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6B5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6B60: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D6B64: jal         0x801D6CB0
    // 0x801D6B68: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    func_801D6CB0_602090(rdram, ctx);
        goto after_0;
    // 0x801D6B68: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    after_0:
    // 0x801D6B6C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x801D6B70: jal         0x801D603C
    // 0x801D6B74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D603C_60141C(rdram, ctx);
        goto after_1;
    // 0x801D6B74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801D6B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6B7C: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x801D6B80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D6B84: jr          $ra
    // 0x801D6B88: nop

    TRACE_RETURN()
    return;
    // 0x801D6B88: nop

;}
RECOMP_FUNC void func_80200AD0_62BEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200AD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80200ADC: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x80200AE0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80200AE4: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x80200AE8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80200AEC: sw          $a2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r6;
    // 0x80200AF0: sw          $t8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r24;
    // 0x80200AF4: beq         $at, $zero, L_80200B14
    if (ctx->r1 == 0) {
        // 0x80200AF8: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_80200B14;
    }
    // 0x80200AF8: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x80200AFC: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80200B00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80200B04: addu        $at, $at, $t9
    gpr jr_addend_80200B0C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80200B08: lw          $t9, -0x1370($at)
    ctx->r25 = ADD32(ctx->r1, -0X1370);
    // 0x80200B0C: jr          $t9
    // 0x80200B10: nop

    switch (jr_addend_80200B0C >> 2) {
        case 0: goto L_80200B14; break;
        case 1: goto L_80200B24; break;
        case 2: goto L_80200B38; break;
        case 3: goto L_80200B4C; break;
        case 4: goto L_80200B60; break;
        case 5: goto L_80200B74; break;
        case 6: goto L_80200B88; break;
        default: switch_error(__func__, 0x80200B0C, 0x8020EC90);
    }
    // 0x80200B10: nop

L_80200B14:
    // 0x80200B14: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80200B18: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x80200B1C: b           L_80200B94
    // 0x80200B20: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
        goto L_80200B94;
    // 0x80200B20: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
L_80200B24:
    // 0x80200B24: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80200B28: jal         0x8003522C
    // 0x80200B2C: addiu       $a1, $a1, 0x13D0
    ctx->r5 = ADD32(ctx->r5, 0X13D0);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x80200B2C: addiu       $a1, $a1, 0x13D0
    ctx->r5 = ADD32(ctx->r5, 0X13D0);
    after_0:
    // 0x80200B30: b           L_80200B98
    // 0x80200B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200B98;
    // 0x80200B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200B38:
    // 0x80200B38: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80200B3C: jal         0x8003522C
    // 0x80200B40: addiu       $a1, $a1, 0x1218
    ctx->r5 = ADD32(ctx->r5, 0X1218);
    func_8003522C_35E2C(rdram, ctx);
        goto after_1;
    // 0x80200B40: addiu       $a1, $a1, 0x1218
    ctx->r5 = ADD32(ctx->r5, 0X1218);
    after_1:
    // 0x80200B44: b           L_80200B98
    // 0x80200B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200B98;
    // 0x80200B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200B4C:
    // 0x80200B4C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80200B50: jal         0x8003522C
    // 0x80200B54: addiu       $a1, $a1, 0x1618
    ctx->r5 = ADD32(ctx->r5, 0X1618);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x80200B54: addiu       $a1, $a1, 0x1618
    ctx->r5 = ADD32(ctx->r5, 0X1618);
    after_2:
    // 0x80200B58: b           L_80200B98
    // 0x80200B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200B98;
    // 0x80200B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200B60:
    // 0x80200B60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80200B64: jal         0x8003522C
    // 0x80200B68: addiu       $a1, $a1, 0x1770
    ctx->r5 = ADD32(ctx->r5, 0X1770);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x80200B68: addiu       $a1, $a1, 0x1770
    ctx->r5 = ADD32(ctx->r5, 0X1770);
    after_3:
    // 0x80200B6C: b           L_80200B98
    // 0x80200B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200B98;
    // 0x80200B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200B74:
    // 0x80200B74: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80200B78: jal         0x8003522C
    // 0x80200B7C: addiu       $a1, $a1, 0x18B4
    ctx->r5 = ADD32(ctx->r5, 0X18B4);
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x80200B7C: addiu       $a1, $a1, 0x18B4
    ctx->r5 = ADD32(ctx->r5, 0X18B4);
    after_4:
    // 0x80200B80: b           L_80200B98
    // 0x80200B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80200B98;
    // 0x80200B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200B88:
    // 0x80200B88: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80200B8C: jal         0x8003522C
    // 0x80200B90: addiu       $a1, $a1, 0x1018
    ctx->r5 = ADD32(ctx->r5, 0X1018);
    func_8003522C_35E2C(rdram, ctx);
        goto after_5;
    // 0x80200B90: addiu       $a1, $a1, 0x1018
    ctx->r5 = ADD32(ctx->r5, 0X1018);
    after_5:
L_80200B94:
    // 0x80200B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200B98:
    // 0x80200B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200B9C: jr          $ra
    // 0x80200BA0: nop

    TRACE_RETURN()
    return;
    // 0x80200BA0: nop

;}
RECOMP_FUNC void func_801DCF18_6082F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCF18: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DCF1C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801DCF20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DCF24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DCF28: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801DCF2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DCF30: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801DCF34: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
    // 0x801DCF38: jal         0x801DD394
    // 0x801DCF3C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_801DD394_608774(rdram, ctx);
        goto after_0;
    // 0x801DCF3C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DCF40: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x801DCF44: beq         $v0, $zero, L_801DCF54
    if (ctx->r2 == 0) {
        // 0x801DCF48: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_801DCF54;
    }
    // 0x801DCF48: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801DCF4C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801DCF50: sw          $t8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r24;
L_801DCF54:
    // 0x801DCF54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DCF58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DCF5C: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801DCF60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DCF64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DCF68: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DCF6C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801DCF70: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DCF74: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801DCF78: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x801DCF7C: bgtzl       $t9, L_801DCF90
    if (SIGNED(ctx->r25) > 0) {
        // 0x801DCF80: lwc1        $f10, 0x9C($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X9C);
            goto L_801DCF90;
    }
    goto skip_0;
    // 0x801DCF80: lwc1        $f10, 0x9C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X9C);
    skip_0:
    // 0x801DCF84: sw          $zero, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = 0;
    // 0x801DCF88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801DCF8C: lwc1        $f10, 0x9C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X9C);
L_801DCF90:
    // 0x801DCF90: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x801DCF94: swc1        $f16, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f16.u32l;
    // 0x801DCF98: lwc1        $f18, 0x9C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801DCF9C: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x801DCFA0: nop

    // 0x801DCFA4: bc1fl       L_801DCFC0
    if (!c1cs) {
        // 0x801DCFA8: lw          $t1, 0x94($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X94);
            goto L_801DCFC0;
    }
    goto skip_1;
    // 0x801DCFA8: lw          $t1, 0x94($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X94);
    skip_1:
    // 0x801DCFAC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801DCFB0: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x801DCFB4: swc1        $f0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f0.u32l;
    // 0x801DCFB8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x801DCFBC: lw          $t1, 0x94($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X94);
L_801DCFC0:
    // 0x801DCFC0: bnel        $t1, $zero, L_801DD000
    if (ctx->r9 != 0) {
        // 0x801DCFC4: lwc1        $f10, 0x98($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X98);
            goto L_801DD000;
    }
    goto skip_2;
    // 0x801DCFC4: lwc1        $f10, 0x98($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X98);
    skip_2:
    // 0x801DCFC8: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801DCFCC: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x801DCFD0: swc1        $f6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f6.u32l;
    // 0x801DCFD4: lwc1        $f8, 0x98($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801DCFD8: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801DCFDC: nop

    // 0x801DCFE0: bc1f        L_801DD034
    if (!c1cs) {
        // 0x801DCFE4: nop
    
            goto L_801DD034;
    }
    // 0x801DCFE4: nop

    // 0x801DCFE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801DCFEC: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x801DCFF0: swc1        $f0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f0.u32l;
    // 0x801DCFF4: b           L_801DD034
    // 0x801DCFF8: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_801DD034;
    // 0x801DCFF8: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801DCFFC: lwc1        $f10, 0x98($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X98);
L_801DD000:
    // 0x801DD000: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801DD004: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DD008: sub.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x801DD00C: swc1        $f16, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f16.u32l;
    // 0x801DD010: lwc1        $f18, 0x98($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801DD014: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x801DD018: nop

    // 0x801DD01C: bc1f        L_801DD034
    if (!c1cs) {
        // 0x801DD020: nop
    
            goto L_801DD034;
    }
    // 0x801DD020: nop

    // 0x801DD024: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801DD028: andi        $t3, $v1, 0xFF
    ctx->r11 = ctx->r3 & 0XFF;
    // 0x801DD02C: swc1        $f0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f0.u32l;
    // 0x801DD030: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
L_801DD034:
    // 0x801DD034: jal         0x801DD3DC
    // 0x801DD038: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    func_801DD3DC_6087BC(rdram, ctx);
        goto after_1;
    // 0x801DD038: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    after_1:
    // 0x801DD03C: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x801DD040: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DD044: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD048: bne         $v1, $at, L_801DD05C
    if (ctx->r3 != ctx->r1) {
        // 0x801DD04C: lui         $a0, 0x801E
        ctx->r4 = S32(0X801E << 16);
            goto L_801DD05C;
    }
    // 0x801DD04C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD050: sb          $zero, 0xD($t4)
    MEM_B(0XD, ctx->r12) = 0;
    // 0x801DD054: jal         0x8003521C
    // 0x801DD058: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801DD058: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    after_2:
L_801DD05C:
    // 0x801DD05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DD064: jr          $ra
    // 0x801DD068: nop

    TRACE_RETURN()
    return;
    // 0x801DD068: nop

;}
RECOMP_FUNC void func_801ECF30_618310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECF30: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801ECF34: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801ECF38: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801ECF3C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801ECF40: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x801ECF44: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x801ECF48: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801ECF4C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801ECF50: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801ECF54: lw          $s1, 0x1D8($t6)
    ctx->r17 = MEM_W(ctx->r14, 0X1D8);
    // 0x801ECF58: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801ECF5C: lw          $t7, 0xB0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XB0);
    // 0x801ECF60: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
    // 0x801ECF64: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x801ECF68: beql        $t8, $zero, L_801ED10C
    if (ctx->r24 == 0) {
        // 0x801ECF6C: lw          $t5, 0xB0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0XB0);
            goto L_801ED10C;
    }
    goto skip_0;
    // 0x801ECF6C: lw          $t5, 0xB0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XB0);
    skip_0:
    // 0x801ECF70: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x801ECF74: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x801ECF78: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x801ECF7C: addiu       $v0, $t9, 0x1
    ctx->r2 = ADD32(ctx->r25, 0X1);
    // 0x801ECF80: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x801ECF84: bne         $at, $zero, L_801ED048
    if (ctx->r1 != 0) {
        // 0x801ECF88: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_801ED048;
    }
    // 0x801ECF88: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x801ECF8C: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x801ECF90: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x801ECF94: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801ECF98: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ECF9C: subu        $a1, $t2, $t1
    ctx->r5 = SUB32(ctx->r10, ctx->r9);
    // 0x801ECFA0: andi        $t3, $a1, 0xFFFF
    ctx->r11 = ctx->r5 & 0XFFFF;
    // 0x801ECFA4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x801ECFA8: jal         0x8000E630
    // 0x801ECFAC: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801ECFAC: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x801ECFB0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801ECFB4: addiu       $a1, $a1, -0x4550
    ctx->r5 = ADD32(ctx->r5, -0X4550);
    // 0x801ECFB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ECFBC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801ECFC0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801ECFC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801ECFC8: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801ECFCC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801ECFD0: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801ECFD4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801ECFD8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801ECFDC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ECFE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ECFE4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801ECFE8: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801ECFEC: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801ECFF0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801ECFF4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801ECFF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ECFFC: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801ED000: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801ED004: addiu       $a0, $a0, -0x2C88
    ctx->r4 = ADD32(ctx->r4, -0X2C88);
    // 0x801ED008: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801ED00C: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x801ED010: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801ED014: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x801ED018: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801ED01C: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x801ED020: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801ED024: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801ED028: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801ED02C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801ED030: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801ED034: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801ED038: jal         0x80035854
    // 0x801ED03C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801ED03C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801ED040: b           L_801ED10C
    // 0x801ED044: lw          $t5, 0xB0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XB0);
        goto L_801ED10C;
    // 0x801ED044: lw          $t5, 0xB0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XB0);
L_801ED048:
    // 0x801ED048: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801ED04C: bne         $v0, $at, L_801ED108
    if (ctx->r2 != ctx->r1) {
        // 0x801ED050: addiu       $t9, $zero, 0x400
        ctx->r25 = ADD32(0, 0X400);
            goto L_801ED108;
    }
    // 0x801ED050: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x801ED054: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x801ED058: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801ED05C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ED060: subu        $a1, $t9, $t8
    ctx->r5 = SUB32(ctx->r25, ctx->r24);
    // 0x801ED064: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x801ED068: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x801ED06C: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x801ED070: jal         0x8000E630
    // 0x801ED074: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    func_8000E630_F230(rdram, ctx);
        goto after_2;
    // 0x801ED074: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_2:
    // 0x801ED078: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801ED07C: addiu       $a1, $a1, -0x4550
    ctx->r5 = ADD32(ctx->r5, -0X4550);
    // 0x801ED080: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED084: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801ED088: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801ED08C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801ED090: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801ED094: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801ED098: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801ED09C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801ED0A0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801ED0A4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ED0A8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801ED0AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801ED0B0: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801ED0B4: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801ED0B8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801ED0BC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801ED0C0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801ED0C4: addiu       $t4, $zero, 0x4A8
    ctx->r12 = ADD32(0, 0X4A8);
    // 0x801ED0C8: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801ED0CC: addiu       $a0, $a0, -0x2C88
    ctx->r4 = ADD32(ctx->r4, -0X2C88);
    // 0x801ED0D0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801ED0D4: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x801ED0D8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801ED0DC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x801ED0E0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801ED0E4: lhu         $t3, 0x18($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X18);
    // 0x801ED0E8: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801ED0EC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801ED0F0: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801ED0F4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801ED0F8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x801ED0FC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801ED100: jal         0x80035854
    // 0x801ED104: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_3;
    // 0x801ED104: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_3:
L_801ED108:
    // 0x801ED108: lw          $t5, 0xB0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XB0);
L_801ED10C:
    // 0x801ED10C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801ED110: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x801ED114: beql        $t6, $zero, L_801ED360
    if (ctx->r14 == 0) {
        // 0x801ED118: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_801ED360;
    }
    goto skip_1;
    // 0x801ED118: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_1:
    // 0x801ED11C: lw          $t7, 0x80($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X80);
    // 0x801ED120: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x801ED124: addiu       $t8, $sp, 0x6C
    ctx->r24 = ADD32(ctx->r29, 0X6C);
    // 0x801ED128: addiu       $v0, $t7, 0x1
    ctx->r2 = ADD32(ctx->r15, 0X1);
    // 0x801ED12C: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x801ED130: bne         $at, $zero, L_801ED248
    if (ctx->r1 != 0) {
        // 0x801ED134: sw          $v0, 0x80($s2)
        MEM_W(0X80, ctx->r18) = ctx->r2;
            goto L_801ED248;
    }
    // 0x801ED134: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x801ED138: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801ED13C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801ED140: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801ED144: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801ED148: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x801ED14C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801ED150: sw          $zero, 0x80($s2)
    MEM_W(0X80, ctx->r18) = 0;
    // 0x801ED154: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x801ED158: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801ED15C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801ED160: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801ED164: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801ED168: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801ED16C: addiu       $t0, $sp, 0x68
    ctx->r8 = ADD32(ctx->r29, 0X68);
    // 0x801ED170: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801ED174: jal         0x8000E808
    // 0x801ED178: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000E808_F408(rdram, ctx);
        goto after_4;
    // 0x801ED178: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_4:
    // 0x801ED17C: lwc1        $f18, 0x70($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801ED180: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801ED184: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ED188: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x801ED18C: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801ED190: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801ED194: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801ED198: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x801ED19C: lwc1        $f6, 0x78($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801ED1A0: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x801ED1A4: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x801ED1A8: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x801ED1AC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801ED1B0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801ED1B4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801ED1B8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801ED1BC: jal         0x8000E4E4
    // 0x801ED1C0: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_5;
    // 0x801ED1C0: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x801ED1C4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801ED1C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801ED1CC: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801ED1D0: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801ED1D4: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801ED1D8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801ED1DC: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801ED1E0: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801ED1E4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801ED1E8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801ED1EC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801ED1F0: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801ED1F4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801ED1F8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801ED1FC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801ED200: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801ED204: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801ED208: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801ED20C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x801ED210: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801ED214: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801ED218: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801ED21C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801ED220: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801ED224: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x801ED228: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801ED22C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801ED230: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801ED234: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x801ED238: jal         0x801E1E24
    // 0x801ED23C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_6;
    // 0x801ED23C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x801ED240: b           L_801ED360
    // 0x801ED244: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_801ED360;
    // 0x801ED244: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801ED248:
    // 0x801ED248: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801ED24C: bne         $v0, $at, L_801ED35C
    if (ctx->r2 != ctx->r1) {
        // 0x801ED250: addiu       $a3, $sp, 0x70
        ctx->r7 = ADD32(ctx->r29, 0X70);
            goto L_801ED35C;
    }
    // 0x801ED250: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x801ED254: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801ED258: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801ED25C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801ED260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801ED264: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x801ED268: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801ED26C: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x801ED270: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x801ED274: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x801ED278: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801ED27C: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801ED280: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801ED284: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801ED288: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x801ED28C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801ED290: jal         0x8000E808
    // 0x801ED294: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000E808_F408(rdram, ctx);
        goto after_7;
    // 0x801ED294: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_7:
    // 0x801ED298: lwc1        $f8, 0x70($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801ED29C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801ED2A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801ED2A4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x801ED2A8: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801ED2AC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801ED2B0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801ED2B4: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801ED2B8: lwc1        $f16, 0x78($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801ED2BC: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x801ED2C0: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x801ED2C4: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x801ED2C8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801ED2CC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801ED2D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801ED2D4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801ED2D8: jal         0x8000E4E4
    // 0x801ED2DC: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_8;
    // 0x801ED2DC: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x801ED2E0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801ED2E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801ED2E8: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801ED2EC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801ED2F0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801ED2F4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801ED2F8: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801ED2FC: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801ED300: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801ED304: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801ED308: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801ED30C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801ED310: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x801ED314: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801ED318: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801ED31C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801ED320: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801ED324: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801ED328: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x801ED32C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801ED330: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801ED334: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801ED338: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x801ED33C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801ED340: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x801ED344: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801ED348: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801ED34C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801ED350: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x801ED354: jal         0x801E1E24
    // 0x801ED358: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_9;
    // 0x801ED358: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_9:
L_801ED35C:
    // 0x801ED35C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801ED360:
    // 0x801ED360: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801ED364: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801ED368: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x801ED36C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x801ED370: jr          $ra
    // 0x801ED374: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x801ED374: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_801E25C4_60D9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E25C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E25C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E25CC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E25D0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801E25D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E25D8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x801E25DC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x801E25E0: jal         0x80036260
    // 0x801E25E4: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x801E25E4: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801E25E8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E25EC: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E25F0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E25F4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E25F8: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E25FC: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E2600: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E2604: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801E2608: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801E260C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801E2610: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801E2614: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801E2618: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801E261C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E2624: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801E2628: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E262C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801E2630: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E2634: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E2638: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E263C: jal         0x8000DBF0
    // 0x801E2640: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801E2640: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801E2644: beq         $v0, $zero, L_801E2684
    if (ctx->r2 == 0) {
        // 0x801E2648: addiu       $t0, $zero, 0x5
        ctx->r8 = ADD32(0, 0X5);
            goto L_801E2684;
    }
    // 0x801E2648: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x801E264C: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x801E2650: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E2654: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801E2658: sw          $t0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r8;
    // 0x801E265C: sw          $t1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r9;
    // 0x801E2660: addiu       $a1, $a1, -0x5DF0
    ctx->r5 = ADD32(ctx->r5, -0X5DF0);
    // 0x801E2664: jal         0x801D31CC
    // 0x801E2668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801E2668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E266C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E2670: addiu       $a1, $a1, 0x2C20
    ctx->r5 = ADD32(ctx->r5, 0X2C20);
    // 0x801E2674: jal         0x8003522C
    // 0x801E2678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801E2678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E267C: b           L_801E2690
    // 0x801E2680: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_801E2690;
    // 0x801E2680: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801E2684:
    // 0x801E2684: jal         0x80034ED4
    // 0x801E2688: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801E2688: nop

    after_4:
    // 0x801E268C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E2690:
    // 0x801E2690: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E2694: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801E2698: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E269C: jr          $ra
    // 0x801E26A0: nop

    TRACE_RETURN()
    return;
    // 0x801E26A0: nop

;}
RECOMP_FUNC void func_801EEEC0_61A2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEEC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EEEC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EEEC8: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801EEECC: lui         $a1, 0xBE99
    ctx->r5 = S32(0XBE99 << 16);
    // 0x801EEED0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801EEED4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801EEED8: jal         0x801D6508
    // 0x801EEEDC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_801D6508_6018E8(rdram, ctx);
        goto after_0;
    // 0x801EEEDC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x801EEEE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801EEEE4: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x801EEEE8: jal         0x801D725C
    // 0x801EEEEC: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    func_801D725C_60263C(rdram, ctx);
        goto after_1;
    // 0x801EEEEC: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    after_1:
    // 0x801EEEF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801EEEF4: jal         0x801D4408
    // 0x801EEEF8: lui         $a1, 0xC25C
    ctx->r5 = S32(0XC25C << 16);
    func_801D4408_5FF7E8(rdram, ctx);
        goto after_2;
    // 0x801EEEF8: lui         $a1, 0xC25C
    ctx->r5 = S32(0XC25C << 16);
    after_2:
    // 0x801EEEFC: beq         $v0, $zero, L_801EEF0C
    if (ctx->r2 == 0) {
        // 0x801EEF00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EEF0C;
    }
    // 0x801EEF00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EEF04: b           L_801EEF38
    // 0x801EEF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801EEF38;
    // 0x801EEF08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801EEF0C:
    // 0x801EEF0C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801EEF10: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x801EEF14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EEF18: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x801EEF1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801EEF20: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801EEF24: nop

    // 0x801EEF28: bc1f        L_801EEF38
    if (!c1cs) {
        // 0x801EEF2C: nop
    
            goto L_801EEF38;
    }
    // 0x801EEF2C: nop

    // 0x801EEF30: b           L_801EEF38
    // 0x801EEF34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801EEF38;
    // 0x801EEF34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801EEF38:
    // 0x801EEF38: jr          $ra
    // 0x801EEF3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801EEF3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801E8220_613600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8220: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E8224: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E8228: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E822C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E8230: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801E8234: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E8238: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E823C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801E8240: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E8244: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E8248: lwc1        $f6, 0x94($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801E824C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E8250: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E8254: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E8258: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x801E825C: nop

    // 0x801E8260: bc1f        L_801E828C
    if (!c1cs) {
        // 0x801E8264: nop
    
            goto L_801E828C;
    }
    // 0x801E8264: nop

    // 0x801E8268: lw          $t9, 0xE4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XE4);
    // 0x801E826C: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x801E8270: beq         $at, $zero, L_801E828C
    if (ctx->r1 == 0) {
        // 0x801E8274: nop
    
            goto L_801E828C;
    }
    // 0x801E8274: nop

    // 0x801E8278: lw          $t0, 0x174($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X174);
    // 0x801E827C: bne         $t0, $zero, L_801E828C
    if (ctx->r8 != 0) {
        // 0x801E8280: nop
    
            goto L_801E828C;
    }
    // 0x801E8280: nop

    // 0x801E8284: jal         0x801EF268
    // 0x801E8288: nop

    func_801EF268_61A648(rdram, ctx);
        goto after_0;
    // 0x801E8288: nop

    after_0:
L_801E828C:
    // 0x801E828C: jal         0x801D5B70
    // 0x801E8290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5B70_600F50(rdram, ctx);
        goto after_1;
    // 0x801E8290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E8294: jal         0x801EA074
    // 0x801E8298: nop

    func_801EA074_615454(rdram, ctx);
        goto after_2;
    // 0x801E8298: nop

    after_2:
    // 0x801E829C: jal         0x801EEEC0
    // 0x801E82A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_3;
    // 0x801E82A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E82A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801E82A8: jal         0x801D2F40
    // 0x801E82AC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_4;
    // 0x801E82AC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_4:
    // 0x801E82B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E82B4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E82B8: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E82BC: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x801E82C0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801E82C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E82C8: bc1fl       L_801E8358
    if (!c1cs) {
        // 0x801E82CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E8358;
    }
    goto skip_0;
    // 0x801E82CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801E82D0: jal         0x801D34D0
    // 0x801E82D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_5;
    // 0x801E82D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x801E82D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x801E82DC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E82E0: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x801E82E4: lw          $t2, 0x34($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X34);
    // 0x801E82E8: addiu       $a0, $a0, -0x6E44
    ctx->r4 = ADD32(ctx->r4, -0X6E44);
    // 0x801E82EC: bnel        $s0, $t2, L_801E8308
    if (ctx->r16 != ctx->r10) {
        // 0x801E82F0: lw          $t4, 0xE4($s0)
        ctx->r12 = MEM_W(ctx->r16, 0XE4);
            goto L_801E8308;
    }
    goto skip_1;
    // 0x801E82F0: lw          $t4, 0xE4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE4);
    skip_1:
    // 0x801E82F4: jal         0x8003521C
    // 0x801E82F8: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801E82F8: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    after_6:
    // 0x801E82FC: b           L_801E8358
    // 0x801E8300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E8358;
    // 0x801E8300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8304: lw          $t4, 0xE4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE4);
L_801E8308:
    // 0x801E8308: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801E830C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8310: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x801E8314: bne         $at, $zero, L_801E833C
    if (ctx->r1 != 0) {
        // 0x801E8318: nop
    
            goto L_801E833C;
    }
    // 0x801E8318: nop

    // 0x801E831C: jal         0x801EF2B0
    // 0x801E8320: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    func_801EF2B0_61A690(rdram, ctx);
        goto after_7;
    // 0x801E8320: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    after_7:
    // 0x801E8324: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E8328: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801E832C: jal         0x8003521C
    // 0x801E8330: addiu       $a0, $a0, 0x5DAC
    ctx->r4 = ADD32(ctx->r4, 0X5DAC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801E8330: addiu       $a0, $a0, 0x5DAC
    ctx->r4 = ADD32(ctx->r4, 0X5DAC);
    after_8:
    // 0x801E8334: b           L_801E8358
    // 0x801E8338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E8358;
    // 0x801E8338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E833C:
    // 0x801E833C: jal         0x801D2EE4
    // 0x801E8340: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_9;
    // 0x801E8340: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    after_9:
    // 0x801E8344: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E8348: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801E834C: jal         0x8003521C
    // 0x801E8350: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801E8350: addiu       $a0, $a0, 0x52D8
    ctx->r4 = ADD32(ctx->r4, 0X52D8);
    after_10:
    // 0x801E8354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E8358:
    // 0x801E8358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E835C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E8360: jr          $ra
    // 0x801E8364: nop

    TRACE_RETURN()
    return;
    // 0x801E8364: nop

;}
RECOMP_FUNC void func_801FBD6C_62714C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBD6C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FBD70: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FBD74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801FBD78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FBD7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FBD80: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801FBD84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FBD88: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801FBD8C: jal         0x801FFDFC
    // 0x801FBD90: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_0;
    // 0x801FBD90: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    after_0:
    // 0x801FBD94: jal         0x801FFE6C
    // 0x801FBD98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_1;
    // 0x801FBD98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801FBD9C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FBDA0: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x801FBDA4: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801FBDA8: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x801FBDAC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801FBDB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801FBDB4: sb          $t8, 0x815($t9)
    MEM_B(0X815, ctx->r25) = ctx->r24;
    // 0x801FBDB8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x801FBDBC: jal         0x801D39A0
    // 0x801FBDC0: sb          $zero, 0x817($t0)
    MEM_B(0X817, ctx->r8) = 0;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_2;
    // 0x801FBDC0: sb          $zero, 0x817($t0)
    MEM_B(0X817, ctx->r8) = 0;
    after_2:
    // 0x801FBDC4: beq         $v0, $zero, L_801FBDDC
    if (ctx->r2 == 0) {
        // 0x801FBDC8: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801FBDDC;
    }
    // 0x801FBDC8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBDCC: jal         0x8003521C
    // 0x801FBDD0: addiu       $a0, $a0, -0x4444
    ctx->r4 = ADD32(ctx->r4, -0X4444);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FBDD0: addiu       $a0, $a0, -0x4444
    ctx->r4 = ADD32(ctx->r4, -0X4444);
    after_3:
    // 0x801FBDD4: b           L_801FBED4
    // 0x801FBDD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801FBED4;
    // 0x801FBDD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FBDDC:
    // 0x801FBDDC: jal         0x801D3A18
    // 0x801FBDE0: nop

    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_4;
    // 0x801FBDE0: nop

    after_4:
    // 0x801FBDE4: beq         $v0, $zero, L_801FBE00
    if (ctx->r2 == 0) {
        // 0x801FBDE8: lw          $t3, 0x2C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X2C);
            goto L_801FBE00;
    }
    // 0x801FBDE8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x801FBDEC: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801FBDF0: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801FBDF4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801FBDF8: b           L_801FBED0
    // 0x801FBDFC: sb          $t1, 0x2C4($t2)
    MEM_B(0X2C4, ctx->r10) = ctx->r9;
        goto L_801FBED0;
    // 0x801FBDFC: sb          $t1, 0x2C4($t2)
    MEM_B(0X2C4, ctx->r10) = ctx->r9;
L_801FBE00:
    // 0x801FBE00: lbu         $t4, 0xE($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XE);
    // 0x801FBE04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801FBE08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBE0C: bne         $t4, $at, L_801FBE24
    if (ctx->r12 != ctx->r1) {
        // 0x801FBE10: nop
    
            goto L_801FBE24;
    }
    // 0x801FBE10: nop

    // 0x801FBE14: jal         0x8003521C
    // 0x801FBE18: addiu       $a0, $a0, -0x614
    ctx->r4 = ADD32(ctx->r4, -0X614);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FBE18: addiu       $a0, $a0, -0x614
    ctx->r4 = ADD32(ctx->r4, -0X614);
    after_5:
    // 0x801FBE1C: b           L_801FBED4
    // 0x801FBE20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801FBED4;
    // 0x801FBE20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FBE24:
    // 0x801FBE24: jal         0x801FBEE4
    // 0x801FBE28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FBEE4_6272C4(rdram, ctx);
        goto after_6;
    // 0x801FBE28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801FBE2C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801FBE30: jal         0x801D3018
    // 0x801FBE34: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_7;
    // 0x801FBE34: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_7:
    // 0x801FBE38: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FBE3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FBE40: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801FBE44: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FBE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FBE4C: lui         $a1, 0xC3C8
    ctx->r5 = S32(0XC3C8 << 16);
    // 0x801FBE50: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x801FBE54: jal         0x801D655C
    // 0x801FBE58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D655C_60193C(rdram, ctx);
        goto after_8;
    // 0x801FBE58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x801FBE5C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FBE60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FBE64: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801FBE68: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FBE6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FBE70: lui         $a1, 0xC316
    ctx->r5 = S32(0XC316 << 16);
    // 0x801FBE74: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x801FBE78: jal         0x801D66AC
    // 0x801FBE7C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D66AC_601A8C(rdram, ctx);
        goto after_9;
    // 0x801FBE7C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x801FBE80: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FBE84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FBE88: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801FBE8C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801FBE90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FBE94: lui         $a1, 0xC42F
    ctx->r5 = S32(0XC42F << 16);
    // 0x801FBE98: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x801FBE9C: jal         0x801D67FC
    // 0x801FBEA0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801D67FC_601BDC(rdram, ctx);
        goto after_10;
    // 0x801FBEA0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x801FBEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FBEA8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x801FBEAC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801FBEB0: jal         0x801D5D98
    // 0x801FBEB4: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_11;
    // 0x801FBEB4: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_11:
    // 0x801FBEB8: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801FBEBC: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801FBEC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801FBEC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FBEC8: jal         0x801D5C30
    // 0x801FBECC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_12;
    // 0x801FBECC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_12:
L_801FBED0:
    // 0x801FBED0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FBED4:
    // 0x801FBED4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FBED8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801FBEDC: jr          $ra
    // 0x801FBEE0: nop

    TRACE_RETURN()
    return;
    // 0x801FBEE0: nop

;}
RECOMP_FUNC void func_801DE354_609734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE354: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DE358: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801DE35C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE360: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801DE364: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801DE368: jal         0x801CEE80
    // 0x801DE36C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_0;
    // 0x801DE36C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x801DE370: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x801DE374: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801DE378: slti        $at, $t6, 0x1F
    ctx->r1 = SIGNED(ctx->r14) < 0X1F ? 1 : 0;
    // 0x801DE37C: beql        $at, $zero, L_801DE3D0
    if (ctx->r1 == 0) {
        // 0x801DE380: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_801DE3D0;
    }
    goto skip_0;
    // 0x801DE380: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x801DE384: lw          $t7, 0xA8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XA8);
    // 0x801DE388: addiu       $t9, $t9, -0x6100
    ctx->r25 = ADD32(ctx->r25, -0X6100);
    // 0x801DE38C: lwc1        $f4, 0xAC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x801DE390: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DE394: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DE398: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DE39C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x801DE3A0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DE3A4: lwc1        $f10, 0xB0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801DE3A8: lw          $t1, 0xB4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XB4);
    // 0x801DE3AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DE3B0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    // 0x801DE3B4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DE3B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DE3BC: swc1        $f18, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f18.u32l;
    // 0x801DE3C0: lh          $t2, 0x14($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X14);
    // 0x801DE3C4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x801DE3C8: sw          $t3, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r11;
    // 0x801DE3CC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801DE3D0:
    // 0x801DE3D0: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x801DE3D4: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x801DE3D8: jal         0x801D53EC
    // 0x801DE3DC: lhu         $a3, 0xB6($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XB6);
    func_801D53EC_6007CC(rdram, ctx);
        goto after_1;
    // 0x801DE3DC: lhu         $a3, 0xB6($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XB6);
    after_1:
    // 0x801DE3E0: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801DE3E4: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801DE3E8: lw          $t6, 0x80($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X80);
    // 0x801DE3EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801DE3F0: lw          $t5, 0x1D8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1D8);
    // 0x801DE3F4: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x801DE3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE3FC: lw          $t0, 0x18($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X18);
    // 0x801DE400: bne         $v1, $at, L_801DE41C
    if (ctx->r3 != ctx->r1) {
        // 0x801DE404: sw          $v1, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r3;
            goto L_801DE41C;
    }
    // 0x801DE404: sw          $v1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r3;
    // 0x801DE408: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801DE40C: jal         0x801E0E7C
    // 0x801DE410: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_801E0E7C_60C25C(rdram, ctx);
        goto after_2;
    // 0x801DE410: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_2:
    // 0x801DE414: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801DE418: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801DE41C:
    // 0x801DE41C: beq         $v1, $zero, L_801DE42C
    if (ctx->r3 == 0) {
        // 0x801DE420: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801DE42C;
    }
    // 0x801DE420: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DE424: bnel        $v1, $at, L_801DE490
    if (ctx->r3 != ctx->r1) {
        // 0x801DE428: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_801DE490;
    }
    goto skip_1;
    // 0x801DE428: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    skip_1:
L_801DE42C:
    // 0x801DE42C: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801DE430: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801DE434: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE438: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DE43C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DE440: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801DE444: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DE448: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801DE44C: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801DE450: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DE454: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801DE458: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801DE45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE460: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DE464: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801DE468: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801DE46C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE470: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DE474: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DE478: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DE47C: jal         0x801DFB90
    // 0x801DE480: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_3;
    // 0x801DE480: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x801DE484: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801DE488: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x801DE48C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
L_801DE490:
    // 0x801DE490: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE494: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DE498: bnel        $v1, $at, L_801DE4EC
    if (ctx->r3 != ctx->r1) {
        // 0x801DE49C: lw          $t8, 0x94($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X94);
            goto L_801DE4EC;
    }
    goto skip_2;
    // 0x801DE49C: lw          $t8, 0x94($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X94);
    skip_2:
    // 0x801DE4A0: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801DE4A4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DE4A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE4AC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801DE4B0: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801DE4B4: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801DE4B8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801DE4BC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DE4C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE4C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801DE4C8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x801DE4CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801DE4D0: lwc1        $f10, 0x10($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801DE4D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DE4D8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DE4DC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DE4E0: jal         0x801DFB90
    // 0x801DE4E4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_4;
    // 0x801DE4E4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801DE4E8: lw          $t8, 0x94($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X94);
L_801DE4EC:
    // 0x801DE4EC: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DE4F0: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801DE4F4: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x801DE4F8: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
    // 0x801DE4FC: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801DE500: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DE504: jal         0x8000EE50
    // 0x801DE508: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8000EE50_FA50(rdram, ctx);
        goto after_5;
    // 0x801DE508: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_5:
    // 0x801DE50C: jal         0x801DF200
    // 0x801DE510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF200_60A5E0(rdram, ctx);
        goto after_6;
    // 0x801DE510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801DE514: beql        $v0, $zero, L_801DE53C
    if (ctx->r2 == 0) {
        // 0x801DE518: lw          $t4, 0x7C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X7C);
            goto L_801DE53C;
    }
    goto skip_3;
    // 0x801DE518: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    skip_3:
    // 0x801DE51C: jal         0x801D614C
    // 0x801DE520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_7;
    // 0x801DE520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801DE524: lw          $t2, 0x98($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X98);
    // 0x801DE528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE52C: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x801DE530: jal         0x801DF5C4
    // 0x801DE534: sw          $t3, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r11;
    func_801DF5C4_60A9A4(rdram, ctx);
        goto after_8;
    // 0x801DE534: sw          $t3, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r11;
    after_8:
    // 0x801DE538: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
L_801DE53C:
    // 0x801DE53C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE540: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x801DE544: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801DE548: bgtz        $t5, L_801DE578
    if (SIGNED(ctx->r13) > 0) {
        // 0x801DE54C: sw          $t5, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r13;
            goto L_801DE578;
    }
    // 0x801DE54C: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x801DE550: jal         0x80037C9C
    // 0x801DE554: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    func_80037C9C_3889C(rdram, ctx);
        goto after_9;
    // 0x801DE554: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    after_9:
    // 0x801DE558: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x801DE55C: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x801DE560: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE564: jal         0x80037C20
    // 0x801DE568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_10;
    // 0x801DE568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x801DE56C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE570: jal         0x8003521C
    // 0x801DE574: addiu       $a0, $a0, -0x1A74
    ctx->r4 = ADD32(ctx->r4, -0X1A74);
    func_8003521C_35E1C(rdram, ctx);
        goto after_11;
    // 0x801DE574: addiu       $a0, $a0, -0x1A74
    ctx->r4 = ADD32(ctx->r4, -0X1A74);
    after_11:
L_801DE578:
    // 0x801DE578: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801DE57C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801DE580: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801DE584: jr          $ra
    // 0x801DE588: nop

    TRACE_RETURN()
    return;
    // 0x801DE588: nop

;}
RECOMP_FUNC void func_80201374_62C754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201374: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80201378: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x8020137C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80201380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201384: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80201388: sb          $zero, 0x7($t6)
    MEM_B(0X7, ctx->r14) = 0;
    // 0x8020138C: jal         0x801D614C
    // 0x80201390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x80201390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80201394: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80201398: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x8020139C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x802013A0: bne         $t8, $zero, L_802013B8
    if (ctx->r24 != 0) {
        // 0x802013A4: sw          $t8, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r24;
            goto L_802013B8;
    }
    // 0x802013A4: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x802013A8: jal         0x80200684
    // 0x802013AC: nop

    func_80200684_62BA64(rdram, ctx);
        goto after_1;
    // 0x802013AC: nop

    after_1:
    // 0x802013B0: b           L_802013C4
    // 0x802013B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802013C4;
    // 0x802013B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802013B8:
    // 0x802013B8: jal         0x8020407C
    // 0x802013BC: nop

    func_8020407C_62F45C(rdram, ctx);
        goto after_2;
    // 0x802013BC: nop

    after_2:
    // 0x802013C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802013C4:
    // 0x802013C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802013C8: jr          $ra
    // 0x802013CC: nop

    TRACE_RETURN()
    return;
    // 0x802013CC: nop

;}
RECOMP_FUNC void func_801D06E4_5FBAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D06E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D06E8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D06EC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D06F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D06F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D06F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D06FC: lbu         $t6, 0x2C0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C0);
    // 0x801D0700: addiu       $v1, $v0, 0x140
    ctx->r3 = ADD32(ctx->r2, 0X140);
    // 0x801D0704: bnel        $t6, $zero, L_801D0764
    if (ctx->r14 != 0) {
        // 0x801D0708: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D0764;
    }
    goto skip_0;
    // 0x801D0708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D070C: jal         0x801D39A0
    // 0x801D0710: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_0;
    // 0x801D0710: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D0714: bne         $v0, $zero, L_801D0754
    if (ctx->r2 != 0) {
        // 0x801D0718: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_801D0754;
    }
    // 0x801D0718: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801D071C: jal         0x801D3A18
    // 0x801D0720: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_1;
    // 0x801D0720: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801D0724: bne         $v0, $zero, L_801D0754
    if (ctx->r2 != 0) {
        // 0x801D0728: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_801D0754;
    }
    // 0x801D0728: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801D072C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D0730: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D0734: lbu         $t7, 0x2C5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2C5);
    // 0x801D0738: bnel        $t7, $zero, L_801D0758
    if (ctx->r15 != 0) {
        // 0x801D073C: sw          $zero, 0x34($v1)
        MEM_W(0X34, ctx->r3) = 0;
            goto L_801D0758;
    }
    goto skip_1;
    // 0x801D073C: sw          $zero, 0x34($v1)
    MEM_W(0X34, ctx->r3) = 0;
    skip_1:
    // 0x801D0740: lw          $a0, 0x1E4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1E4);
    // 0x801D0744: jal         0x801D7670
    // 0x801D0748: lw          $a1, 0x1E8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1E8);
    func_801D7670_602A50(rdram, ctx);
        goto after_2;
    // 0x801D0748: lw          $a1, 0x1E8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1E8);
    after_2:
    // 0x801D074C: b           L_801D0764
    // 0x801D0750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D0764;
    // 0x801D0750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D0754:
    // 0x801D0754: sw          $zero, 0x34($v1)
    MEM_W(0X34, ctx->r3) = 0;
L_801D0758:
    // 0x801D0758: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x801D075C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x801D0760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D0764:
    // 0x801D0764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0768: jr          $ra
    // 0x801D076C: nop

    TRACE_RETURN()
    return;
    // 0x801D076C: nop

;}
RECOMP_FUNC void func_801F14FC_61C8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F14FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F1500: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801F1504: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F1508: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F150C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F1510: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F1514: jal         0x801D3018
    // 0x801F1518: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F1518: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F151C: jal         0x801F76D0
    // 0x801F1520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F1520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F1524: lwc1        $f12, 0xB0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801F1528: lwc1        $f14, 0xB4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x801F152C: lw          $a2, 0xB8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB8);
    // 0x801F1530: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801F1534: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F1538: jal         0x801D46B8
    // 0x801F153C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_2;
    // 0x801F153C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_2:
    // 0x801F1540: jal         0x801D619C
    // 0x801F1544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_3;
    // 0x801F1544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F1548: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x801F154C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F1550: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F1554: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F1558: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F155C: addiu       $t7, $v0, 0x14
    ctx->r15 = ADD32(ctx->r2, 0X14);
    // 0x801F1560: addiu       $t8, $v0, 0x16
    ctx->r24 = ADD32(ctx->r2, 0X16);
    // 0x801F1564: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801F1568: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801F156C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801F1570: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801F1574: jal         0x8000EC04
    // 0x801F1578: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_4;
    // 0x801F1578: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x801F157C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x801F1580: lwc1        $f0, 0xB0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801F1584: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F1588: lwc1        $f12, 0x8($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X8);
    // 0x801F158C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801F1590: nop

    // 0x801F1594: bc1fl       L_801F1608
    if (!c1cs) {
        // 0x801F1598: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_801F1608;
    }
    goto skip_0;
    // 0x801F1598: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_0:
    // 0x801F159C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801F15A0: nop

    // 0x801F15A4: bc1fl       L_801F1608
    if (!c1cs) {
        // 0x801F15A8: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_801F1608;
    }
    goto skip_1;
    // 0x801F15A8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_1:
    // 0x801F15AC: jal         0x8000DD58
    // 0x801F15B0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801F15B0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_5:
    // 0x801F15B4: addiu       $t0, $zero, -0x64
    ctx->r8 = ADD32(0, -0X64);
    // 0x801F15B8: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x801F15BC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x801F15C0: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x801F15C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F15C8: jal         0x8000DD58
    // 0x801F15CC: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801F15CC: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    after_6:
    // 0x801F15D0: addiu       $t2, $v0, -0x6E
    ctx->r10 = ADD32(ctx->r2, -0X6E);
    // 0x801F15D4: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x801F15D8: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    // 0x801F15DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F15E0: jal         0x8000DD58
    // 0x801F15E4: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_7;
    // 0x801F15E4: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    after_7:
    // 0x801F15E8: addiu       $t3, $zero, -0xC8
    ctx->r11 = ADD32(0, -0XC8);
    // 0x801F15EC: subu        $t4, $t3, $v0
    ctx->r12 = SUB32(ctx->r11, ctx->r2);
    // 0x801F15F0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x801F15F4: nop

    // 0x801F15F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F15FC: b           L_801F1674
    // 0x801F1600: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_801F1674;
    // 0x801F1600: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
    // 0x801F1604: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_801F1608:
    // 0x801F1608: nop

    // 0x801F160C: bc1f        L_801F1674
    if (!c1cs) {
        // 0x801F1610: nop
    
            goto L_801F1674;
    }
    // 0x801F1610: nop

    // 0x801F1614: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801F1618: nop

    // 0x801F161C: bc1f        L_801F1674
    if (!c1cs) {
        // 0x801F1620: nop
    
            goto L_801F1674;
    }
    // 0x801F1620: nop

    // 0x801F1624: jal         0x8000DD58
    // 0x801F1628: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801F1628: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_8:
    // 0x801F162C: addiu       $t5, $v0, 0x64
    ctx->r13 = ADD32(ctx->r2, 0X64);
    // 0x801F1630: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801F1634: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x801F1638: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F163C: jal         0x8000DD58
    // 0x801F1640: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801F1640: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    after_9:
    // 0x801F1644: addiu       $t6, $v0, -0x6E
    ctx->r14 = ADD32(ctx->r2, -0X6E);
    // 0x801F1648: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801F164C: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    // 0x801F1650: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F1654: jal         0x8000DD58
    // 0x801F1658: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801F1658: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    after_10:
    // 0x801F165C: addiu       $t7, $zero, -0xC8
    ctx->r15 = ADD32(0, -0XC8);
    // 0x801F1660: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x801F1664: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801F1668: nop

    // 0x801F166C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F1670: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_801F1674:
    // 0x801F1674: jal         0x801F1B78
    // 0x801F1678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F1B78_61CF58(rdram, ctx);
        goto after_11;
    // 0x801F1678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801F167C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801F1680: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801F1684: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F1688: jr          $ra
    // 0x801F168C: nop

    TRACE_RETURN()
    return;
    // 0x801F168C: nop

;}
RECOMP_FUNC void func_801FACC8_6260A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FACC8: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x801FACCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FACD0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801FACD4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801FACD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FACDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FACE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FACE4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801FACE8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x801FACEC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x801FACF0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x801FACF4: jal         0x8000DD58
    // 0x801FACF8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801FACF8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801FACFC: addiu       $a1, $v0, -0x80
    ctx->r5 = ADD32(ctx->r2, -0X80);
    // 0x801FAD00: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801FAD04: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x801FAD08: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x801FAD0C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801FAD10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801FAD14: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801FAD18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FAD1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FAD20: jal         0x8000E808
    // 0x801FAD24: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x801FAD24: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x801FAD28: jal         0x8000DD58
    // 0x801FAD2C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801FAD2C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_2:
    // 0x801FAD30: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801FAD34: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801FAD38: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801FAD3C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801FAD40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801FAD44: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801FAD48: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801FAD4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FAD50: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801FAD54: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801FAD58: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801FAD5C: jal         0x8000DDC0
    // 0x801FAD60: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_8000DDC0_E9C0(rdram, ctx);
        goto after_3;
    // 0x801FAD60: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x801FAD64: beq         $v0, $zero, L_801FAD7C
    if (ctx->r2 == 0) {
        // 0x801FAD68: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_801FAD7C;
    }
    // 0x801FAD68: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801FAD6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FAD70: ldc1        $f16, -0x1730($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X1730);
    // 0x801FAD74: b           L_801FAD88
    // 0x801FAD78: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
        goto L_801FAD88;
    // 0x801FAD78: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
L_801FAD7C:
    // 0x801FAD7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FAD80: ldc1        $f18, -0x1728($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1728);
    // 0x801FAD84: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
L_801FAD88:
    // 0x801FAD88: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801FAD8C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801FAD90: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801FAD94: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801FAD98: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x801FAD9C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801FADA0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FADA4: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801FADA8: jal         0x801E1238
    // 0x801FADAC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_801E1238_60C618(rdram, ctx);
        goto after_4;
    // 0x801FADAC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x801FADB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FADB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801FADB8: jr          $ra
    // 0x801FADBC: nop

    TRACE_RETURN()
    return;
    // 0x801FADBC: nop

;}
RECOMP_FUNC void func_801D603C_60141C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D603C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6040: beq         $v0, $zero, L_801D6064
    if (ctx->r2 == 0) {
        // 0x801D6044: nop
    
            goto L_801D6064;
    }
    // 0x801D6044: nop

    // 0x801D6048: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
L_801D604C:
    // 0x801D604C: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D6050: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6054: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x801D6058: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801D605C: bnel        $v0, $zero, L_801D604C
    if (ctx->r2 != 0) {
        // 0x801D6060: lwc1        $f4, 0xC($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801D604C;
    }
    goto skip_0;
    // 0x801D6060: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
L_801D6064:
    // 0x801D6064: jr          $ra
    // 0x801D6068: nop

    TRACE_RETURN()
    return;
    // 0x801D6068: nop

;}
RECOMP_FUNC void func_801D31CC_5FE5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D31CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D31D0: beq         $a0, $zero, L_801D31E0
    if (ctx->r4 == 0) {
        // 0x801D31D4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_801D31E0;
    }
    // 0x801D31D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D31D8: jal         0x801D2EE4
    // 0x801D31DC: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_0;
    // 0x801D31DC: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
L_801D31E0:
    // 0x801D31E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D31E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D31E8: jr          $ra
    // 0x801D31EC: nop

    TRACE_RETURN()
    return;
    // 0x801D31EC: nop

;}
RECOMP_FUNC void func_801D4AEC_5FFECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4AEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D4AF0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801D4AF4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x801D4AF8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D4AFC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801D4B00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D4B04: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D4B08: lw          $a0, -0x1130($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1130);
    // 0x801D4B0C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801D4B10: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801D4B14: lw          $a3, 0x10($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X10);
    // 0x801D4B18: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x801D4B1C: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x801D4B20: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x801D4B24: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    // 0x801D4B28: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D4B2C: jal         0x8001CC38
    // 0x801D4B30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8001CC38_1D838(rdram, ctx);
        goto after_0;
    // 0x801D4B30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x801D4B34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D4B38: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x801D4B3C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x801D4B40: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D4B44: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801D4B48: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801D4B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4B50: bc1fl       L_801D4BEC
    if (!c1cs) {
        // 0x801D4B54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_801D4BEC;
    }
    goto skip_0;
    // 0x801D4B54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x801D4B58: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x801D4B5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D4B60: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801D4B64: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D4B68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D4B6C: bc1fl       L_801D4B7C
    if (!c1cs) {
        // 0x801D4B70: c.lt.s      $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
            goto L_801D4B7C;
    }
    goto skip_1;
    // 0x801D4B70: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    skip_1:
    // 0x801D4B74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D4B78: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
L_801D4B7C:
    // 0x801D4B7C: nop

    // 0x801D4B80: bc1fl       L_801D4B98
    if (!c1cs) {
        // 0x801D4B84: lwc1        $f0, 0x0($t1)
        ctx->f0.u32l = MEM_W(ctx->r9, 0X0);
            goto L_801D4B98;
    }
    goto skip_2;
    // 0x801D4B84: lwc1        $f0, 0x0($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X0);
    skip_2:
    // 0x801D4B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D4B8C: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x801D4B90: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801D4B94: lwc1        $f0, 0x0($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X0);
L_801D4B98:
    // 0x801D4B98: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D4B9C: nop

    // 0x801D4BA0: bc1fl       L_801D4BB8
    if (!c1cs) {
        // 0x801D4BA4: c.lt.s      $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
            goto L_801D4BB8;
    }
    goto skip_3;
    // 0x801D4BA4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    skip_3:
    // 0x801D4BA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D4BAC: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x801D4BB0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x801D4BB4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
L_801D4BB8:
    // 0x801D4BB8: nop

    // 0x801D4BBC: bc1f        L_801D4BD0
    if (!c1cs) {
        // 0x801D4BC0: nop
    
            goto L_801D4BD0;
    }
    // 0x801D4BC0: nop

    // 0x801D4BC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D4BC8: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x801D4BCC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_801D4BD0:
    // 0x801D4BD0: beq         $v0, $zero, L_801D4BE0
    if (ctx->r2 == 0) {
        // 0x801D4BD4: nop
    
            goto L_801D4BE0;
    }
    // 0x801D4BD4: nop

    // 0x801D4BD8: b           L_801D4BEC
    // 0x801D4BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D4BEC;
    // 0x801D4BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D4BE0:
    // 0x801D4BE0: b           L_801D4BEC
    // 0x801D4BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4BEC;
    // 0x801D4BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4BE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D4BEC:
    // 0x801D4BEC: jr          $ra
    // 0x801D4BF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801D4BF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D822C_60360C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D822C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8230: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D8234: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D8238: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801D823C: lbu         $t7, 0x143($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X143);
    // 0x801D8240: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801D8244: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801D8248: beq         $at, $zero, L_801D8254
    if (ctx->r1 == 0) {
        // 0x801D824C: nop
    
            goto L_801D8254;
    }
    // 0x801D824C: nop

    // 0x801D8250: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
L_801D8254:
    // 0x801D8254: jr          $ra
    // 0x801D8258: nop

    TRACE_RETURN()
    return;
    // 0x801D8258: nop

;}
RECOMP_FUNC void func_801FDF50_629330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FDF50: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FDF54: lw          $v1, -0x10C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X10C0);
    // 0x801FDF58: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FDF5C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FDF60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FDF64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FDF68: lbu         $t8, 0x816($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X816);
    // 0x801FDF6C: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801FDF70: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801FDF74: bne         $t8, $at, L_801FDFF0
    if (ctx->r24 != ctx->r1) {
        // 0x801FDF78: lw          $v0, 0x18($t7)
        ctx->r2 = MEM_W(ctx->r15, 0X18);
            goto L_801FDFF0;
    }
    // 0x801FDF78: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x801FDF7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FDF80: sb          $zero, 0x816($v1)
    MEM_B(0X816, ctx->r3) = 0;
    // 0x801FDF84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FDF88: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801FDF8C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801FDF90: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801FDF94: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FDF98: addiu       $t9, $a0, 0x70
    ctx->r25 = ADD32(ctx->r4, 0X70);
    // 0x801FDF9C: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x801FDFA0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x801FDFA4: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801FDFA8: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801FDFAC: addiu       $t0, $a0, 0x74
    ctx->r8 = ADD32(ctx->r4, 0X74);
    // 0x801FDFB0: addiu       $t1, $a0, 0x78
    ctx->r9 = ADD32(ctx->r4, 0X78);
    // 0x801FDFB4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801FDFB8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801FDFBC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801FDFC0: jal         0x8000E4E4
    // 0x801FDFC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801FDFC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x801FDFC8: jal         0x801FFDFC
    // 0x801FDFCC: nop

    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_1;
    // 0x801FDFCC: nop

    after_1:
    // 0x801FDFD0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FDFD4: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x801FDFD8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FDFDC: addiu       $a1, $a1, -0x216C
    ctx->r5 = ADD32(ctx->r5, -0X216C);
    // 0x801FDFE0: jal         0x8003522C
    // 0x801FDFE4: sw          $t2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r10;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801FDFE4: sw          $t2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r10;
    after_2:
    // 0x801FDFE8: b           L_801FDFFC
    // 0x801FDFEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801FDFFC;
    // 0x801FDFEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FDFF0:
    // 0x801FDFF0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801FDFF4: sb          $t3, 0x816($v1)
    MEM_B(0X816, ctx->r3) = ctx->r11;
    // 0x801FDFF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FDFFC:
    // 0x801FDFFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FE000: jr          $ra
    // 0x801FE004: nop

    TRACE_RETURN()
    return;
    // 0x801FE004: nop

;}
RECOMP_FUNC void func_801D15BC_5FC99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D15BC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D15C0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D15C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D15C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D15CC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D15D0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D15D4: sh          $a0, 0x1B2($v0)
    MEM_H(0X1B2, ctx->r2) = ctx->r4;
    // 0x801D15D8: sh          $a1, 0x1B4($v0)
    MEM_H(0X1B4, ctx->r2) = ctx->r5;
    // 0x801D15DC: sh          $a2, 0x1B6($v0)
    MEM_H(0X1B6, ctx->r2) = ctx->r6;
    // 0x801D15E0: sh          $a3, 0x1B8($v0)
    MEM_H(0X1B8, ctx->r2) = ctx->r7;
    // 0x801D15E4: sb          $zero, 0x1BA($v0)
    MEM_B(0X1BA, ctx->r2) = 0;
    // 0x801D15E8: lbu         $t0, 0x13($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X13);
    // 0x801D15EC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D15F0: addiu       $v0, $v0, 0x1B0
    ctx->r2 = ADD32(ctx->r2, 0X1B0);
    // 0x801D15F4: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x801D15F8: jr          $ra
    // 0x801D15FC: sb          $t0, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x801D15FC: sb          $t0, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_801ECA74_617E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECA74: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801ECA78: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801ECA7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801ECA80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801ECA84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801ECA88: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801ECA8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801ECA90: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801ECA94: jal         0x801ECEDC
    // 0x801ECA98: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801ECA98: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x801ECA9C: bnel        $v0, $zero, L_801ECBB0
    if (ctx->r2 != 0) {
        // 0x801ECAA0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801ECBB0;
    }
    goto skip_0;
    // 0x801ECAA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801ECAA4: jal         0x801ECE48
    // 0x801ECAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801ECE48_618228(rdram, ctx);
        goto after_1;
    // 0x801ECAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801ECAAC: bne         $v0, $zero, L_801ECBAC
    if (ctx->r2 != 0) {
        // 0x801ECAB0: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801ECBAC;
    }
    // 0x801ECAB0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801ECAB4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801ECAB8: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x801ECABC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801ECAC0: lw          $t8, 0x1CC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1CC);
    // 0x801ECAC4: bnel        $t8, $t9, L_801ECB0C
    if (ctx->r24 != ctx->r25) {
        // 0x801ECAC8: lw          $t7, 0x80($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X80);
            goto L_801ECB0C;
    }
    goto skip_1;
    // 0x801ECAC8: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    skip_1:
    // 0x801ECACC: lbu         $t1, 0xE($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XE);
    // 0x801ECAD0: bnel        $t1, $zero, L_801ECB0C
    if (ctx->r9 != 0) {
        // 0x801ECAD4: lw          $t7, 0x80($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X80);
            goto L_801ECB0C;
    }
    goto skip_2;
    // 0x801ECAD4: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    skip_2:
    // 0x801ECAD8: lbu         $t2, 0x2C5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2C5);
    // 0x801ECADC: bnel        $t2, $zero, L_801ECB0C
    if (ctx->r10 != 0) {
        // 0x801ECAE0: lw          $t7, 0x80($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X80);
            goto L_801ECB0C;
    }
    goto skip_3;
    // 0x801ECAE0: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    skip_3:
    // 0x801ECAE4: lbu         $t3, 0x30($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X30);
    // 0x801ECAE8: lw          $t5, 0xB4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XB4);
    // 0x801ECAEC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801ECAF0: andi        $t4, $t3, 0xFFFD
    ctx->r12 = ctx->r11 & 0XFFFD;
    // 0x801ECAF4: bne         $t5, $zero, L_801ECB08
    if (ctx->r13 != 0) {
        // 0x801ECAF8: sb          $t4, 0x30($s0)
        MEM_B(0X30, ctx->r16) = ctx->r12;
            goto L_801ECB08;
    }
    // 0x801ECAF8: sb          $t4, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r12;
    // 0x801ECAFC: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x801ECB00: jal         0x80038BC8
    // 0x801ECB04: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801ECB04: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    after_2:
L_801ECB08:
    // 0x801ECB08: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
L_801ECB0C:
    // 0x801ECB0C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801ECB10: bgez        $t8, L_801ECB94
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801ECB14: sw          $t8, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r24;
            goto L_801ECB94;
    }
    // 0x801ECB14: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x801ECB18: lbu         $t0, 0x30($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X30);
    // 0x801ECB1C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x801ECB20: andi        $t1, $t0, 0xFFFD
    ctx->r9 = ctx->r8 & 0XFFFD;
    // 0x801ECB24: sb          $t1, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r9;
    // 0x801ECB28: jal         0x801D2F40
    // 0x801ECB2C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801ECB2C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x801ECB30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801ECB34: nop

    // 0x801ECB38: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801ECB3C: nop

    // 0x801ECB40: bc1fl       L_801ECB98
    if (!c1cs) {
        // 0x801ECB44: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_801ECB98;
    }
    goto skip_4;
    // 0x801ECB44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x801ECB48: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801ECB4C: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801ECB50: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801ECB54: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801ECB58: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801ECB5C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ECB60: addiu       $a1, $a1, -0x4E58
    ctx->r5 = ADD32(ctx->r5, -0X4E58);
    // 0x801ECB64: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801ECB68: lwc1        $f16, 0x90($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801ECB6C: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x801ECB70: nop

    // 0x801ECB74: bc1fl       L_801ECB98
    if (!c1cs) {
        // 0x801ECB78: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_801ECB98;
    }
    goto skip_5;
    // 0x801ECB78: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x801ECB7C: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    // 0x801ECB80: jal         0x801D2EE4
    // 0x801ECB84: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801ECB84: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x801ECB88: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ECB8C: jal         0x8003521C
    // 0x801ECB90: addiu       $a0, $a0, -0x39E4
    ctx->r4 = ADD32(ctx->r4, -0X39E4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801ECB90: addiu       $a0, $a0, -0x39E4
    ctx->r4 = ADD32(ctx->r4, -0X39E4);
    after_5:
L_801ECB94:
    // 0x801ECB94: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_801ECB98:
    // 0x801ECB98: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801ECB9C: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801ECBA0: addiu       $a2, $t2, 0x8
    ctx->r6 = ADD32(ctx->r10, 0X8);
    // 0x801ECBA4: jal         0x8000E630
    // 0x801ECBA8: addiu       $a3, $t2, 0x10
    ctx->r7 = ADD32(ctx->r10, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_6;
    // 0x801ECBA8: addiu       $a3, $t2, 0x10
    ctx->r7 = ADD32(ctx->r10, 0X10);
    after_6:
L_801ECBAC:
    // 0x801ECBAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801ECBB0:
    // 0x801ECBB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801ECBB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801ECBB8: jr          $ra
    // 0x801ECBBC: nop

    TRACE_RETURN()
    return;
    // 0x801ECBBC: nop

;}
RECOMP_FUNC void func_802079BC_632D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802079BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802079C0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x802079C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802079C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802079CC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802079D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802079D4: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x802079D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802079DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802079E0: addiu       $a3, $zero, 0x77
    ctx->r7 = ADD32(0, 0X77);
    // 0x802079E4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802079E8: addiu       $t7, $zero, 0x136
    ctx->r15 = ADD32(0, 0X136);
    // 0x802079EC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802079F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802079F4: addiu       $v1, $a1, 0xA0
    ctx->r3 = ADD32(ctx->r5, 0XA0);
    // 0x802079F8: sb          $a2, 0x2C0($a1)
    MEM_B(0X2C0, ctx->r5) = ctx->r6;
    // 0x802079FC: sb          $zero, 0x2C1($a1)
    MEM_B(0X2C1, ctx->r5) = 0;
    // 0x80207A00: sb          $a2, 0x2C2($a1)
    MEM_B(0X2C2, ctx->r5) = ctx->r6;
    // 0x80207A04: sb          $zero, 0x2C3($a1)
    MEM_B(0X2C3, ctx->r5) = 0;
    // 0x80207A08: sw          $t6, 0x1EC($a1)
    MEM_W(0X1EC, ctx->r5) = ctx->r14;
    // 0x80207A0C: sw          $a3, 0x1F0($a1)
    MEM_W(0X1F0, ctx->r5) = ctx->r7;
    // 0x80207A10: sw          $t7, 0x1F4($a1)
    MEM_W(0X1F4, ctx->r5) = ctx->r15;
    // 0x80207A14: sw          $a3, 0x1F8($a1)
    MEM_W(0X1F8, ctx->r5) = ctx->r7;
    // 0x80207A18: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80207A1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80207A20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80207A24: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80207A28: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x80207A2C: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x80207A30: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x80207A34: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x80207A38: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x80207A3C: lwc1        $f18, -0x1168($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1168);
    // 0x80207A40: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x80207A44: jal         0x80038BC8
    // 0x80207A48: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x80207A48: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    after_0:
    // 0x80207A4C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207A50: addiu       $a0, $a0, 0x7A6C
    ctx->r4 = ADD32(ctx->r4, 0X7A6C);
    // 0x80207A54: jal         0x80034DD8
    // 0x80207A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x80207A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80207A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207A64: jr          $ra
    // 0x80207A68: nop

    TRACE_RETURN()
    return;
    // 0x80207A68: nop

;}
RECOMP_FUNC void func_80205DEC_6311CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205DEC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80205DF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80205DF4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80205DF8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80205DFC: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80205E00: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80205E04: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80205E08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80205E0C: addiu       $a2, $a2, 0x170
    ctx->r6 = ADD32(ctx->r6, 0X170);
    // 0x80205E10: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80205E14: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80205E18: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205E1C: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80205E20: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80205E24: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80205E28: addiu       $t9, $zero, 0x4AE
    ctx->r25 = ADD32(0, 0X4AE);
    // 0x80205E2C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80205E30: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80205E34: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80205E38: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80205E3C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80205E40: addiu       $a1, $a1, 0x5EF8
    ctx->r5 = ADD32(ctx->r5, 0X5EF8);
    // 0x80205E44: addiu       $a3, $a3, -0x5238
    ctx->r7 = ADD32(ctx->r7, -0X5238);
    // 0x80205E48: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80205E4C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80205E50: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80205E54: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80205E58: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x80205E5C: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x80205E60: jal         0x800358E8
    // 0x80205E64: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80205E64: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80205E68: beq         $v0, $zero, L_80205EE8
    if (ctx->r2 == 0) {
        // 0x80205E6C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80205EE8;
    }
    // 0x80205E6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80205E70: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x80205E74: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80205E78: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x80205E7C: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x80205E80: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80205E84: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80205E88: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80205E8C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80205E90: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80205E94: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80205E98: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x80205E9C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80205EA0: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80205EA4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80205EA8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80205EAC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80205EB0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80205EB4: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80205EB8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80205EBC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80205EC0: jal         0x8000E030
    // 0x80205EC4: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x80205EC4: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_1:
    // 0x80205EC8: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80205ECC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205ED0: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x80205ED4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80205ED8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80205EDC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80205EE0: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x80205EE4: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
L_80205EE8:
    // 0x80205EE8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80205EEC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80205EF0: jr          $ra
    // 0x80205EF4: nop

    TRACE_RETURN()
    return;
    // 0x80205EF4: nop

;}
RECOMP_FUNC void func_801E6474_611854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E647C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E6480: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E6484: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E6488: jal         0x801D3B18
    // 0x801E648C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801E648C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x801E6490: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E6494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E6498: jal         0x801D3F00
    // 0x801E649C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801E649C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x801E64A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E64A4: jal         0x801D31F0
    // 0x801E64A8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_2;
    // 0x801E64A8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_2:
    // 0x801E64AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E64B0: nop

    // 0x801E64B4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E64B8: nop

    // 0x801E64BC: bc1fl       L_801E6510
    if (!c1cs) {
        // 0x801E64C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E6510;
    }
    goto skip_0;
    // 0x801E64C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E64C4: jal         0x80038BC8
    // 0x801E64C8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801E64C8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_3:
    // 0x801E64CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E64D0: addiu       $a1, $a1, -0x4E40
    ctx->r5 = ADD32(ctx->r5, -0X4E40);
    // 0x801E64D4: jal         0x801D2EE4
    // 0x801E64D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801E64D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x801E64DC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E64E0: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E64E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E64E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E64EC: jal         0x801D34D0
    // 0x801E64F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_5;
    // 0x801E64F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x801E64F4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E64F8: jal         0x8003521C
    // 0x801E64FC: addiu       $a0, $a0, 0x651C
    ctx->r4 = ADD32(ctx->r4, 0X651C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801E64FC: addiu       $a0, $a0, 0x651C
    ctx->r4 = ADD32(ctx->r4, 0X651C);
    after_6:
    // 0x801E6500: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801E6504: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x801E6508: sw          $t6, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->r14;
    // 0x801E650C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E6510:
    // 0x801E6510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E6514: jr          $ra
    // 0x801E6518: nop

    TRACE_RETURN()
    return;
    // 0x801E6518: nop

;}
