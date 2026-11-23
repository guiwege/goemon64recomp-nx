#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802192AC_5D477C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802192AC: jr          $ra
    // 0x802192B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x802192B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8020E8A8_5C9D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E8A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E8AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E8B0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E8B4: jal         0x80013AC4
    // 0x8020E8B8: addiu       $a0, $a0, -0x36C4
    ctx->r4 = ADD32(ctx->r4, -0X36C4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E8B8: addiu       $a0, $a0, -0x36C4
    ctx->r4 = ADD32(ctx->r4, -0X36C4);
    after_0:
    // 0x8020E8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E8C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E8C4: jr          $ra
    // 0x8020E8C8: nop

    TRACE_RETURN()
    return;
    // 0x8020E8C8: nop

;}
RECOMP_FUNC void func_8021F6DC_5DABAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F6DC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8021F6E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F6E4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8021F6E8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8021F6EC: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8021F6F0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8021F6F4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8021F6F8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8021F6FC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x8021F700: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8021F704: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x8021F708: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8021F70C: jal         0x8001D394
    // 0x8021F710: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x8021F710: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8021F714: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021F718: lwc1        $f20, 0x3C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021F71C: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x8021F720: nop

    // 0x8021F724: bc1fl       L_8021F750
    if (!c1cs) {
        // 0x8021F728: lwc1        $f16, 0x44($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
            goto L_8021F750;
    }
    goto skip_0;
    // 0x8021F728: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x8021F72C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021F730: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8021F734: nop

    // 0x8021F738: bc1fl       L_8021F750
    if (!c1cs) {
        // 0x8021F73C: lwc1        $f16, 0x44($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
            goto L_8021F750;
    }
    goto skip_1;
    // 0x8021F73C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x8021F740: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x8021F744: b           L_8021F7F0
    // 0x8021F748: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
        goto L_8021F7F0;
    // 0x8021F748: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x8021F74C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
L_8021F750:
    // 0x8021F750: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021F754: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x8021F758: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021F75C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8021F760: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x8021F764: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8021F768: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021F76C: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8021F770: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021F774: div.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8021F778: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021F77C: c.eq.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d == ctx->f8.d;
    // 0x8021F780: nop

    // 0x8021F784: bc1f        L_8021F794
    if (!c1cs) {
        // 0x8021F788: nop
    
            goto L_8021F794;
    }
    // 0x8021F788: nop

    // 0x8021F78C: b           L_8021F7B0
    // 0x8021F790: sh          $t6, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r14;
        goto L_8021F7B0;
    // 0x8021F790: sh          $t6, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r14;
L_8021F794:
    // 0x8021F794: jal         0x8021ADD0
    // 0x8021F798: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_1;
    // 0x8021F798: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8021F79C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021F7A0: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x8021F7A4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8021F7A8: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x8021F7AC: lwc1        $f20, 0x3C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X3C);
L_8021F7B0:
    // 0x8021F7B0: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021F7B4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021F7B8: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x8021F7BC: c.eq.d      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.d == ctx->f10.d;
    // 0x8021F7C0: nop

    // 0x8021F7C4: bc1f        L_8021F7D4
    if (!c1cs) {
        // 0x8021F7C8: nop
    
            goto L_8021F7D4;
    }
    // 0x8021F7C8: nop

    // 0x8021F7CC: b           L_8021F7F0
    // 0x8021F7D0: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
        goto L_8021F7F0;
    // 0x8021F7D0: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
L_8021F7D4:
    // 0x8021F7D4: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8021F7D8: nop

    // 0x8021F7DC: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8021F7E0: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8021F7E4: jal         0x8021ADD0
    // 0x8021F7E8: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_2;
    // 0x8021F7E8: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    after_2:
    // 0x8021F7EC: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
L_8021F7F0:
    // 0x8021F7F0: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8021F7F4: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x8021F7F8: lhu         $t7, 0x3A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3A);
    // 0x8021F7FC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021F800: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8021F804: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x8021F808: subu        $a0, $t8, $t7
    ctx->r4 = SUB32(ctx->r24, ctx->r15);
    // 0x8021F80C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021F810: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x8021F814: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8021F818: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x8021F81C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021F820: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8021F824: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8021F828: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x8021F82C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021F830: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021F834: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8021F838: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021F83C: jal         0x80003EA0
    // 0x8021F840: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x8021F840: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x8021F844: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021F848: jal         0x80003E10
    // 0x8021F84C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80003E10_4A10(rdram, ctx);
        goto after_4;
    // 0x8021F84C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_4:
    // 0x8021F850: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021F854: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021F858: lhu         $t0, 0x38($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X38);
    // 0x8021F85C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021F860: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x8021F864: subu        $a0, $t1, $t0
    ctx->r4 = SUB32(ctx->r9, ctx->r8);
    // 0x8021F868: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021F86C: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x8021F870: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8021F874: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8021F878: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8021F87C: jal         0x80003EA0
    // 0x8021F880: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_5;
    // 0x8021F880: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x8021F884: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021F888: jal         0x80003E10
    // 0x8021F88C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80003E10_4A10(rdram, ctx);
        goto after_6;
    // 0x8021F88C: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_6:
    // 0x8021F890: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021F894: jal         0x80003E10
    // 0x8021F898: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    func_80003E10_4A10(rdram, ctx);
        goto after_7;
    // 0x8021F898: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    after_7:
    // 0x8021F89C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021F8A0: jal         0x80003E10
    // 0x8021F8A4: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    func_80003E10_4A10(rdram, ctx);
        goto after_8;
    // 0x8021F8A4: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    after_8:
    // 0x8021F8A8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021F8AC: jal         0x80003EA0
    // 0x8021F8B0: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_9;
    // 0x8021F8B0: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_9:
    // 0x8021F8B4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021F8B8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021F8BC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021F8C0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021F8C4: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021F8C8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021F8CC: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x8021F8D0: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8021F8D4: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021F8D8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021F8DC: nop

    // 0x8021F8E0: mul.s       $f8, $f18, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8021F8E4: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8021F8E8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021F8EC: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8021F8F0: jal         0x80003E10
    // 0x8021F8F4: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_10;
    // 0x8021F8F4: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x8021F8F8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021F8FC: jal         0x80003E10
    // 0x8021F900: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80003E10_4A10(rdram, ctx);
        goto after_11;
    // 0x8021F900: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_11:
    // 0x8021F904: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021F908: jal         0x80003EA0
    // 0x8021F90C: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_12;
    // 0x8021F90C: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    after_12:
    // 0x8021F910: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021F914: jal         0x80003EA0
    // 0x8021F918: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_13;
    // 0x8021F918: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    after_13:
    // 0x8021F91C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021F920: jal         0x80003EA0
    // 0x8021F924: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_14;
    // 0x8021F924: lhu         $a0, 0x26($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X26);
    after_14:
    // 0x8021F928: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021F92C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021F930: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021F934: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8021F938: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021F93C: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8021F940: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021F944: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    // 0x8021F948: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8021F94C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021F950: mul.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8021F954: nop

    // 0x8021F958: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021F95C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021F960: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021F964: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8021F968: jal         0x80003EA0
    // 0x8021F96C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_15;
    // 0x8021F96C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x8021F970: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021F974: jal         0x80003E10
    // 0x8021F978: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    func_80003E10_4A10(rdram, ctx);
        goto after_16;
    // 0x8021F978: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    after_16:
    // 0x8021F97C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021F980: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021F984: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021F988: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021F98C: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    // 0x8021F990: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x8021F994: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8021F998: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021F99C: jal         0x80003E10
    // 0x8021F9A0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_17;
    // 0x8021F9A0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_17:
    // 0x8021F9A4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021F9A8: jal         0x80003EA0
    // 0x8021F9AC: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_18;
    // 0x8021F9AC: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    after_18:
    // 0x8021F9B0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021F9B4: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021F9B8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x8021F9BC: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021F9C0: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x8021F9C4: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8021F9C8: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8021F9CC: jal         0x80003E10
    // 0x8021F9D0: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_19;
    // 0x8021F9D0: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x8021F9D4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021F9D8: jal         0x80003E10
    // 0x8021F9DC: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    func_80003E10_4A10(rdram, ctx);
        goto after_20;
    // 0x8021F9DC: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    after_20:
    // 0x8021F9E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021F9E4: jal         0x80003EA0
    // 0x8021F9E8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_21;
    // 0x8021F9E8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    after_21:
    // 0x8021F9EC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021F9F0: jal         0x80003EA0
    // 0x8021F9F4: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_22;
    // 0x8021F9F4: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    after_22:
    // 0x8021F9F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021F9FC: jal         0x80003E10
    // 0x8021FA00: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    func_80003E10_4A10(rdram, ctx);
        goto after_23;
    // 0x8021FA00: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    after_23:
    // 0x8021FA04: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021FA08: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021FA0C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021FA10: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021FA14: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8021FA18: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021FA1C: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    // 0x8021FA20: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8021FA24: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021FA28: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021FA2C: nop

    // 0x8021FA30: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021FA34: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8021FA38: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021FA3C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8021FA40: jal         0x80003EA0
    // 0x8021FA44: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_24;
    // 0x8021FA44: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_24:
    // 0x8021FA48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021FA4C: jal         0x80003E10
    // 0x8021FA50: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    func_80003E10_4A10(rdram, ctx);
        goto after_25;
    // 0x8021FA50: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    after_25:
    // 0x8021FA54: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021FA58: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021FA5C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x8021FA60: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021FA64: nop

    // 0x8021FA68: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021FA6C: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8021FA70: jal         0x80003EA0
    // 0x8021FA74: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_26;
    // 0x8021FA74: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    after_26:
    // 0x8021FA78: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021FA7C: jal         0x80003E10
    // 0x8021FA80: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    func_80003E10_4A10(rdram, ctx);
        goto after_27;
    // 0x8021FA80: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    after_27:
    // 0x8021FA84: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021FA88: jal         0x80003E10
    // 0x8021FA8C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    func_80003E10_4A10(rdram, ctx);
        goto after_28;
    // 0x8021FA8C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    after_28:
    // 0x8021FA90: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8021FA94: jal         0x80003EA0
    // 0x8021FA98: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_29;
    // 0x8021FA98: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    after_29:
    // 0x8021FA9C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8021FAA0: jal         0x80003EA0
    // 0x8021FAA4: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_30;
    // 0x8021FAA4: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    after_30:
    // 0x8021FAA8: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021FAAC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021FAB0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021FAB4: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x8021FAB8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021FABC: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8021FAC0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021FAC4: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x8021FAC8: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8021FACC: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021FAD0: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8021FAD4: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8021FAD8: nop

    // 0x8021FADC: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8021FAE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021FAE4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021FAE8: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021FAEC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8021FAF0: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021FAF4: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8021FAF8: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x8021FAFC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021FB00: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8021FB04: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021FB08: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8021FB0C: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x8021FB10: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021FB14: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8021FB18: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x8021FB1C: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x8021FB20: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021FB24: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x8021FB28: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021FB2C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8021FB30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021FB34: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8021FB38: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8021FB3C: jr          $ra
    // 0x8021FB40: nop

    TRACE_RETURN()
    return;
    // 0x8021FB40: nop

;}
RECOMP_FUNC void func_8020F91C_5CADEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F91C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F924: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F928: jal         0x80013AC4
    // 0x8020F92C: addiu       $a0, $a0, -0x2B28
    ctx->r4 = ADD32(ctx->r4, -0X2B28);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F92C: addiu       $a0, $a0, -0x2B28
    ctx->r4 = ADD32(ctx->r4, -0X2B28);
    after_0:
    // 0x8020F930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F938: jr          $ra
    // 0x8020F93C: nop

    TRACE_RETURN()
    return;
    // 0x8020F93C: nop

;}
RECOMP_FUNC void func_802219D4_5DCEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802219D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802219D8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x802219DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802219E0: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x802219E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802219E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802219EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802219F0: lbu         $t7, -0x5206($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X5206);
    // 0x802219F4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802219F8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802219FC: beq         $t7, $zero, L_80221A28
    if (ctx->r15 == 0) {
        // 0x80221A00: addiu       $a0, $a0, 0x1894
        ctx->r4 = ADD32(ctx->r4, 0X1894);
            goto L_80221A28;
    }
    // 0x80221A00: addiu       $a0, $a0, 0x1894
    ctx->r4 = ADD32(ctx->r4, 0X1894);
    // 0x80221A04: jal         0x8003521C
    // 0x80221A08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80221A08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80221A0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80221A10: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80221A14: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x80221A18: jalr        $t9
    // 0x80221A1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80221A1C: nop

    after_1:
    // 0x80221A20: b           L_80221A34
    // 0x80221A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221A34;
    // 0x80221A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221A28:
    // 0x80221A28: jal         0x80035020
    // 0x80221A2C: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x80221A2C: nop

    after_2:
    // 0x80221A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221A34:
    // 0x80221A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221A38: jr          $ra
    // 0x80221A3C: nop

    TRACE_RETURN()
    return;
    // 0x80221A3C: nop

;}
RECOMP_FUNC void func_80213654_5CEB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021365C: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x80213660: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80213664: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80213668: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x8021366C: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x80213670: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80213674: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80213678: nop

    // 0x8021367C: bc1fl       L_80213700
    if (!c1cs) {
        // 0x80213680: lhu         $t8, 0x8A($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0X8A);
            goto L_80213700;
    }
    goto skip_0;
    // 0x80213680: lhu         $t8, 0x8A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8A);
    skip_0:
    // 0x80213684: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80213688: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021368C: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x80213690: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213694: jal         0x80029E08
    // 0x80213698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x80213698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021369C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802136A0: beq         $v0, $zero, L_802136FC
    if (ctx->r2 == 0) {
        // 0x802136A4: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_802136FC;
    }
    // 0x802136A4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802136A8: lwc1        $f8, 0xD8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x802136AC: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802136B0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802136B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802136B8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802136BC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802136C0: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x802136C4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802136C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802136CC: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x802136D0: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x802136D4: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802136D8: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    // 0x802136DC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802136E0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x802136E4: nop

    // 0x802136E8: bc1fl       L_80213700
    if (!c1cs) {
        // 0x802136EC: lhu         $t8, 0x8A($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0X8A);
            goto L_80213700;
    }
    goto skip_1;
    // 0x802136EC: lhu         $t8, 0x8A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8A);
    skip_1:
    // 0x802136F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802136F4: nop

    // 0x802136F8: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
L_802136FC:
    // 0x802136FC: lhu         $t8, 0x8A($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8A);
L_80213700:
    // 0x80213700: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213704: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x80213708: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8021370C: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80213710: bne         $t0, $zero, L_80213738
    if (ctx->r8 != 0) {
        // 0x80213714: sh          $t9, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r25;
            goto L_80213738;
    }
    // 0x80213714: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x80213718: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x8021371C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80213720: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    // 0x80213724: beq         $v0, $zero, L_80213738
    if (ctx->r2 == 0) {
        // 0x80213728: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80213738;
    }
    // 0x80213728: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021372C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80213730: nop

    // 0x80213734: swc1        $f16, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f16.u32l;
L_80213738:
    // 0x80213738: lhu         $t2, 0x8A($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X8A);
    // 0x8021373C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80213740: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80213744: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80213748: mfhi        $t3
    ctx->r11 = hi;
    // 0x8021374C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x80213750: bne         $t3, $zero, L_8021379C
    if (ctx->r11 != 0) {
        // 0x80213754: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_8021379C;
    }
    // 0x80213754: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80213758: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021375C: jalr        $t9
    // 0x80213760: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80213760: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80213764: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80213768: beq         $v0, $zero, L_8021379C
    if (ctx->r2 == 0) {
        // 0x8021376C: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_8021379C;
    }
    // 0x8021376C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80213770: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80213774: lwc1        $f0, 0x1C($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x80213778: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021377C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80213780: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x80213784: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80213788: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x8021378C: lw          $t4, 0x64($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X64);
    // 0x80213790: swc1        $f18, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f18.u32l;
    // 0x80213794: ori         $t5, $t4, 0x800
    ctx->r13 = ctx->r12 | 0X800;
    // 0x80213798: sw          $t5, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r13;
L_8021379C:
    // 0x8021379C: lwc1        $f4, 0x1C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x802137A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802137A4: ldc1        $f0, -0x60B8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X60B8);
    // 0x802137A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802137AC: lwc1        $f16, 0x20($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X20);
    // 0x802137B0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x802137B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802137B8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802137BC: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x802137C0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802137C4: lwc1        $f8, 0x24($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X24);
    // 0x802137C8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802137CC: swc1        $f10, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f10.u32l;
    // 0x802137D0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802137D4: swc1        $f6, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f6.u32l;
    // 0x802137D8: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x802137DC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802137E0: swc1        $f18, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f18.u32l;
    // 0x802137E4: lbu         $t6, 0x6E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X6E);
    // 0x802137E8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802137EC: bgez        $t6, L_80213804
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802137F0: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80213804;
    }
    // 0x802137F0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802137F4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802137F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802137FC: nop

    // 0x80213800: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80213804:
    // 0x80213804: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80213808: ldc1        $f10, -0x60B0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X60B0);
    // 0x8021380C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80213810: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80213814: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80213818: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021381C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80213820: nop

    // 0x80213824: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80213828: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021382C: nop

    // 0x80213830: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80213834: beql        $t8, $zero, L_80213888
    if (ctx->r24 == 0) {
        // 0x80213838: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_80213888;
    }
    goto skip_2;
    // 0x80213838: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x8021383C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80213840: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80213844: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80213848: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x8021384C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80213850: nop

    // 0x80213854: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80213858: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021385C: nop

    // 0x80213860: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x80213864: bne         $t8, $zero, L_8021387C
    if (ctx->r24 != 0) {
        // 0x80213868: nop
    
            goto L_8021387C;
    }
    // 0x80213868: nop

    // 0x8021386C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80213870: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80213874: b           L_80213894
    // 0x80213878: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_80213894;
    // 0x80213878: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8021387C:
    // 0x8021387C: b           L_80213894
    // 0x80213880: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_80213894;
    // 0x80213880: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80213884: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_80213888:
    // 0x80213888: nop

    // 0x8021388C: bltz        $t8, L_8021387C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80213890: nop
    
            goto L_8021387C;
    }
    // 0x80213890: nop

L_80213894:
    // 0x80213894: lw          $v0, 0xD4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD4);
    // 0x80213898: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021389C: sb          $t8, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r24;
    // 0x802138A0: beq         $v0, $zero, L_8021391C
    if (ctx->r2 == 0) {
        // 0x802138A4: lui         $at, 0x3FF8
        ctx->r1 = S32(0X3FF8 << 16);
            goto L_8021391C;
    }
    // 0x802138A4: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802138A8: lwc1        $f4, 0x1C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x802138AC: lbu         $t0, 0x98($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X98);
    // 0x802138B0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802138B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802138B8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x802138BC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x802138C0: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x802138C4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x802138C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802138CC: bgez        $t0, L_802138E4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802138D0: cvt.d.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
            goto L_802138E4;
    }
    // 0x802138D0: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x802138D4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802138D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802138DC: nop

    // 0x802138E0: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_802138E4:
    // 0x802138E4: mul.d       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x802138E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802138EC: ldc1        $f6, -0x60A8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X60A8);
    // 0x802138F0: mul.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x802138F4: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x802138F8: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x802138FC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80213900: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x80213904: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80213908: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x8021390C: lwc1        $f18, 0xC($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80213910: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x80213914: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
    // 0x80213918: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
L_8021391C:
    // 0x8021391C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213924: jr          $ra
    // 0x80213928: nop

    TRACE_RETURN()
    return;
    // 0x80213928: nop

;}
RECOMP_FUNC void func_8021B610_5D6AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021B614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B618: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8021B61C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021B620: lui         $at, 0xC008
    ctx->r1 = S32(0XC008 << 16);
    // 0x8021B624: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8021B628: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x8021B62C: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8021B630: bgezl       $t7, L_8021B6EC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021B634: andi        $t1, $v0, 0x400
        ctx->r9 = ctx->r2 & 0X400;
            goto L_8021B6EC;
    }
    goto skip_0;
    // 0x8021B634: andi        $t1, $v0, 0x400
    ctx->r9 = ctx->r2 & 0X400;
    skip_0:
    // 0x8021B638: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021B63C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021B640: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021B644: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021B648: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021B64C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8021B650: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8021B654: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x8021B658: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x8021B65C: bc1f        L_8021B6E8
    if (!c1cs) {
        // 0x8021B660: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_8021B6E8;
    }
    // 0x8021B660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8021B664: jalr        $t9
    // 0x8021B668: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021B668: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8021B66C: beq         $v0, $zero, L_8021B6D8
    if (ctx->r2 == 0) {
        // 0x8021B670: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_8021B6D8;
    }
    // 0x8021B670: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8021B674: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021B678: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x8021B67C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8021B680: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8021B684: jalr        $t9
    // 0x8021B688: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021B688: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x8021B68C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8021B690: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8021B694: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8021B698: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021B69C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021B6A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021B6A4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8021B6A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021B6AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021B6B0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8021B6B4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x8021B6B8: div.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f6.d);
    // 0x8021B6BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8021B6C0: add.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d + ctx->f8.d;
    // 0x8021B6C4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8021B6C8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8021B6CC: jalr        $t9
    // 0x8021B6D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8021B6D0: nop

    after_2:
    // 0x8021B6D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_8021B6D8:
    // 0x8021B6D8: lw          $t8, 0x68($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X68);
    // 0x8021B6DC: lw          $v0, 0x60($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X60);
    // 0x8021B6E0: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x8021B6E4: sw          $t0, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r8;
L_8021B6E8:
    // 0x8021B6E8: andi        $t1, $v0, 0x400
    ctx->r9 = ctx->r2 & 0X400;
L_8021B6EC:
    // 0x8021B6EC: bne         $t1, $zero, L_8021B6FC
    if (ctx->r9 != 0) {
        // 0x8021B6F0: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_8021B6FC;
    }
    // 0x8021B6F0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8021B6F4: b           L_8021B72C
    // 0x8021B6F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021B72C;
    // 0x8021B6F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021B6FC:
    // 0x8021B6FC: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x8021B700: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B704: lwc1        $f18, 0xC($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0XC);
    // 0x8021B708: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8021B70C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021B710: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x8021B714: nop

    // 0x8021B718: bc1f        L_8021B72C
    if (!c1cs) {
        // 0x8021B71C: nop
    
            goto L_8021B72C;
    }
    // 0x8021B71C: nop

    // 0x8021B720: sw          $t3, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r11;
    // 0x8021B724: b           L_8021B72C
    // 0x8021B728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021B72C;
    // 0x8021B728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021B72C:
    // 0x8021B72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021B734: jr          $ra
    // 0x8021B738: nop

    TRACE_RETURN()
    return;
    // 0x8021B738: nop

;}
RECOMP_FUNC void func_8020E71C_5C9BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E724: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E728: jal         0x80013AC4
    // 0x8020E72C: addiu       $a0, $a0, -0x3808
    ctx->r4 = ADD32(ctx->r4, -0X3808);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E72C: addiu       $a0, $a0, -0x3808
    ctx->r4 = ADD32(ctx->r4, -0X3808);
    after_0:
    // 0x8020E730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E738: jr          $ra
    // 0x8020E73C: nop

    TRACE_RETURN()
    return;
    // 0x8020E73C: nop

;}
RECOMP_FUNC void func_8021ADD0_5D62A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021ADD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021ADD4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021ADD8: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8021ADDC: nop

    // 0x8021ADE0: bc1fl       L_8021ADF4
    if (!c1cs) {
        // 0x8021ADE4: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8021ADF4;
    }
    goto skip_0;
    // 0x8021ADE4: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_0:
    // 0x8021ADE8: b           L_8021ADF4
    // 0x8021ADEC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021ADF4;
    // 0x8021ADEC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021ADF0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021ADF4:
    // 0x8021ADF4: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8021ADF8: nop

    // 0x8021ADFC: bc1fl       L_8021AE10
    if (!c1cs) {
        // 0x8021AE00: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_8021AE10;
    }
    goto skip_1;
    // 0x8021AE00: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_1:
    // 0x8021AE04: b           L_8021AE10
    // 0x8021AE08: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_8021AE10;
    // 0x8021AE08: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x8021AE0C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8021AE10:
    // 0x8021AE10: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8021AE14: nop

    // 0x8021AE18: bc1fl       L_8021AE88
    if (!c1cs) {
        // 0x8021AE1C: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_8021AE88;
    }
    goto skip_2;
    // 0x8021AE1C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_2:
    // 0x8021AE20: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x8021AE24: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8021AE28: bc1fl       L_8021AE3C
    if (!c1cs) {
        // 0x8021AE2C: mtc1        $at, $f7
        ctx->f_odd[(7 - 1) * 2] = ctx->r1;
            goto L_8021AE3C;
    }
    goto skip_3;
    // 0x8021AE2C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    skip_3:
    // 0x8021AE30: b           L_8021B02C
    // 0x8021AE34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021B02C;
    // 0x8021AE34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021AE38: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
L_8021AE3C:
    // 0x8021AE3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021AE40: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x8021AE44: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8021AE48: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8021AE4C: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8021AE50: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x8021AE54: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8021AE58: nop

    // 0x8021AE5C: sltiu       $at, $v0, 0x201
    ctx->r1 = ctx->r2 < 0X201 ? 1 : 0;
    // 0x8021AE60: bnel        $at, $zero, L_8021AE70
    if (ctx->r1 != 0) {
        // 0x8021AE64: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8021AE70;
    }
    goto skip_4;
    // 0x8021AE64: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    skip_4:
    // 0x8021AE68: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8021AE6C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
L_8021AE70:
    // 0x8021AE70: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021AE74: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8021AE78: lwc1        $f0, 0x7C60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7C60);
    // 0x8021AE7C: b           L_8021AF20
    // 0x8021AE80: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
        goto L_8021AF20;
    // 0x8021AE80: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
    // 0x8021AE84: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_8021AE88:
    // 0x8021AE88: nop

    // 0x8021AE8C: bc1fl       L_8021AF08
    if (!c1cs) {
        // 0x8021AE90: c.eq.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
            goto L_8021AF08;
    }
    goto skip_5;
    // 0x8021AE90: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    skip_5:
    // 0x8021AE94: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x8021AE98: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8021AE9C: bc1fl       L_8021AEB0
    if (!c1cs) {
        // 0x8021AEA0: mtc1        $at, $f9
        ctx->f_odd[(9 - 1) * 2] = ctx->r1;
            goto L_8021AEB0;
    }
    goto skip_6;
    // 0x8021AEA0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    skip_6:
    // 0x8021AEA4: b           L_8021B02C
    // 0x8021AEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021B02C;
    // 0x8021AEA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021AEAC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
L_8021AEB0:
    // 0x8021AEB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021AEB4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8021AEB8: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x8021AEBC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8021AEC0: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x8021AEC4: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x8021AEC8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8021AECC: nop

    // 0x8021AED0: sltiu       $at, $v0, 0x201
    ctx->r1 = ctx->r2 < 0X201 ? 1 : 0;
    // 0x8021AED4: bnel        $at, $zero, L_8021AEE4
    if (ctx->r1 != 0) {
        // 0x8021AED8: lui         $at, 0x4380
        ctx->r1 = S32(0X4380 << 16);
            goto L_8021AEE4;
    }
    goto skip_7;
    // 0x8021AED8: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    skip_7:
    // 0x8021AEDC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8021AEE0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
L_8021AEE4:
    // 0x8021AEE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021AEE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021AEEC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8021AEF0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8021AEF4: lwc1        $f10, 0x7C60($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7C60);
    // 0x8021AEF8: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021AEFC: b           L_8021AF20
    // 0x8021AF00: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
        goto L_8021AF20;
    // 0x8021AF00: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
    // 0x8021AF04: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_8021AF08:
    // 0x8021AF08: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8021AF0C: bc1fl       L_8021AF24
    if (!c1cs) {
        // 0x8021AF10: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_8021AF24;
    }
    goto skip_8;
    // 0x8021AF10: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_8:
    // 0x8021AF14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021AF18: nop

    // 0x8021AF1C: swc1        $f0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f0.u32l;
L_8021AF20:
    // 0x8021AF20: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_8021AF24:
    // 0x8021AF24: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8021AF28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021AF2C: bc1fl       L_8021AF54
    if (!c1cs) {
        // 0x8021AF30: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_8021AF54;
    }
    goto skip_9;
    // 0x8021AF30: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_9:
    // 0x8021AF34: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x8021AF38: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x8021AF3C: bc1fl       L_8021AF54
    if (!c1cs) {
        // 0x8021AF40: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_8021AF54;
    }
    goto skip_10;
    // 0x8021AF40: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_10:
    // 0x8021AF44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021AF48: b           L_8021AFA8
    // 0x8021AF4C: sub.s       $f0, $f18, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f0.fl;
        goto L_8021AFA8;
    // 0x8021AF4C: sub.s       $f0, $f18, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x8021AF50: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_8021AF54:
    // 0x8021AF54: nop

    // 0x8021AF58: bc1fl       L_8021AF80
    if (!c1cs) {
        // 0x8021AF5C: c.le.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
            goto L_8021AF80;
    }
    goto skip_11;
    // 0x8021AF5C: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    skip_11:
    // 0x8021AF60: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8021AF64: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x8021AF68: bc1fl       L_8021AF80
    if (!c1cs) {
        // 0x8021AF6C: c.le.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
            goto L_8021AF80;
    }
    goto skip_12;
    // 0x8021AF6C: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    skip_12:
    // 0x8021AF70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021AF74: b           L_8021AFA8
    // 0x8021AF78: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
        goto L_8021AFA8;
    // 0x8021AF78: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8021AF7C: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
L_8021AF80:
    // 0x8021AF80: nop

    // 0x8021AF84: bc1fl       L_8021AFAC
    if (!c1cs) {
        // 0x8021AF88: cfc1        $t0, $FpcCsr
        ctx->r8 = get_cop1_cs();
            goto L_8021AFAC;
    }
    goto skip_13;
    // 0x8021AF88: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    skip_13:
    // 0x8021AF8C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8021AF90: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8021AF94: bc1fl       L_8021AFAC
    if (!c1cs) {
        // 0x8021AF98: cfc1        $t0, $FpcCsr
        ctx->r8 = get_cop1_cs();
            goto L_8021AFAC;
    }
    goto skip_14;
    // 0x8021AF98: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    skip_14:
    // 0x8021AF9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021AFA0: nop

    // 0x8021AFA4: sub.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f0.fl;
L_8021AFA8:
    // 0x8021AFA8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
L_8021AFAC:
    // 0x8021AFAC: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8021AFB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021AFB4: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8021AFB8: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8021AFBC: nop

    // 0x8021AFC0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8021AFC4: beql        $v0, $zero, L_8021B014
    if (ctx->r2 == 0) {
        // 0x8021AFC8: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_8021B014;
    }
    goto skip_15;
    // 0x8021AFC8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_15:
    // 0x8021AFCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021AFD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021AFD4: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8021AFD8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8021AFDC: nop

    // 0x8021AFE0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021AFE4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8021AFE8: nop

    // 0x8021AFEC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8021AFF0: bne         $v0, $zero, L_8021B008
    if (ctx->r2 != 0) {
        // 0x8021AFF4: nop
    
            goto L_8021B008;
    }
    // 0x8021AFF4: nop

    // 0x8021AFF8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8021AFFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021B000: b           L_8021B020
    // 0x8021B004: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8021B020;
    // 0x8021B004: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8021B008:
    // 0x8021B008: b           L_8021B020
    // 0x8021B00C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8021B020;
    // 0x8021B00C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8021B010: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_8021B014:
    // 0x8021B014: nop

    // 0x8021B018: bltz        $v0, L_8021B008
    if (SIGNED(ctx->r2) < 0) {
        // 0x8021B01C: nop
    
            goto L_8021B008;
    }
    // 0x8021B01C: nop

L_8021B020:
    // 0x8021B020: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8021B024: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x8021B028: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8021B02C:
    // 0x8021B02C: jr          $ra
    // 0x8021B030: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8021B030: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80221FB0_5DD480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221FB0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80221FB4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80221FB8: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x80221FBC: sb          $zero, 0x7AE2($at)
    MEM_B(0X7AE2, ctx->r1) = 0;
    // 0x80221FC0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80221FC4: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x80221FC8: lw          $t7, 0x5C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5C);
    // 0x80221FCC: jr          $ra
    // 0x80221FD0: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    TRACE_RETURN()
    return;
    // 0x80221FD0: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
;}
RECOMP_FUNC void func_80211E50_5CD320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211E54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211E58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80211E5C: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x80211E60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211E64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80211E68: addiu       $t8, $t7, 0x80
    ctx->r24 = ADD32(ctx->r15, 0X80);
    // 0x80211E6C: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x80211E70: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x80211E74: addiu       $t0, $t9, -0xA
    ctx->r8 = ADD32(ctx->r25, -0XA);
    // 0x80211E78: sb          $t0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r8;
    // 0x80211E7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80211E80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211E84: jal         0x8021A26C
    // 0x80211E88: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80211E88: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    after_0:
    // 0x80211E8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80211E90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211E94: ldc1        $f6, -0x6100($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X6100);
    // 0x80211E98: lwc1        $f4, 0xD4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x80211E9C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80211EA0: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80211EA4: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80211EA8: nop

    // 0x80211EAC: bc1fl       L_80211ED8
    if (!c1cs) {
        // 0x80211EB0: lbu         $t1, 0xD0($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0XD0);
            goto L_80211ED8;
    }
    goto skip_0;
    // 0x80211EB0: lbu         $t1, 0xD0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD0);
    skip_0:
    // 0x80211EB4: ldc1        $f8, -0x60F8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X60F8);
    // 0x80211EB8: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x80211EBC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80211EC0: swc1        $f16, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f16.u32l;
    // 0x80211EC4: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x80211EC8: jal         0x80219E08
    // 0x80211ECC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_1;
    // 0x80211ECC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x80211ED0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80211ED4: lbu         $t1, 0xD0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD0);
L_80211ED8:
    // 0x80211ED8: bnel        $t1, $zero, L_80211EEC
    if (ctx->r9 != 0) {
        // 0x80211EDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80211EEC;
    }
    goto skip_1;
    // 0x80211EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80211EE0: jal         0x80034ED4
    // 0x80211EE4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x80211EE4: nop

    after_2:
    // 0x80211EE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80211EEC:
    // 0x80211EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80211EF0: jr          $ra
    // 0x80211EF4: nop

    TRACE_RETURN()
    return;
    // 0x80211EF4: nop

;}
RECOMP_FUNC void func_80213B20_5CEFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213B20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80213B24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80213B28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80213B2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80213B30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80213B34: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80213B38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80213B3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80213B40: jal         0x8021A26C
    // 0x80213B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80213B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80213B48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213B4C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80213B50: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80213B54: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80213B58: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80213B5C: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
    // 0x80213B60: addiu       $t0, $zero, 0x222
    ctx->r8 = ADD32(0, 0X222);
    // 0x80213B64: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x80213B68: sh          $t9, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r25;
    // 0x80213B6C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x80213B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213B74: jal         0x80216DF8
    // 0x80213B78: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_1;
    // 0x80213B78: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x80213B7C: jal         0x8021A310
    // 0x80213B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_2;
    // 0x80213B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80213B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80213B8C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80213B90: jal         0x80224ABC
    // 0x80213B94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_3;
    // 0x80213B94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80213B98: lw          $t1, 0x64($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X64);
    // 0x80213B9C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213BA0: addiu       $a0, $a0, 0x3BC4
    ctx->r4 = ADD32(ctx->r4, 0X3BC4);
    // 0x80213BA4: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x80213BA8: jal         0x8003521C
    // 0x80213BAC: sw          $t2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80213BAC: sw          $t2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r10;
    after_4:
    // 0x80213BB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80213BB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80213BB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80213BBC: jr          $ra
    // 0x80213BC0: nop

    TRACE_RETURN()
    return;
    // 0x80213BC0: nop

;}
RECOMP_FUNC void func_8021A910_5D5DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A910: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x8021A914: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021A918: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x8021A91C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8021A920: beq         $t7, $zero, L_8021A970
    if (ctx->r15 == 0) {
        // 0x8021A924: nop
    
            goto L_8021A970;
    }
    // 0x8021A924: nop

    // 0x8021A928: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x8021A92C: lw          $t9, 0xA0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XA0);
    // 0x8021A930: bne         $v0, $t9, L_8021A970
    if (ctx->r2 != ctx->r25) {
        // 0x8021A934: nop
    
            goto L_8021A970;
    }
    // 0x8021A934: nop

    // 0x8021A938: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A93C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8021A940: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x8021A944: swc1        $f4, 0x118($v1)
    MEM_W(0X118, ctx->r3) = ctx->f4.u32l;
    // 0x8021A948: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A94C: swc1        $f6, 0x11C($v1)
    MEM_W(0X11C, ctx->r3) = ctx->f6.u32l;
    // 0x8021A950: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A954: swc1        $f8, 0x120($v1)
    MEM_W(0X120, ctx->r3) = ctx->f8.u32l;
    // 0x8021A958: lhu         $t0, 0x14($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X14);
    // 0x8021A95C: sh          $t0, 0x124($v1)
    MEM_H(0X124, ctx->r3) = ctx->r8;
    // 0x8021A960: lhu         $t1, 0x16($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X16);
    // 0x8021A964: sh          $t1, 0x126($v1)
    MEM_H(0X126, ctx->r3) = ctx->r9;
    // 0x8021A968: lhu         $t2, 0x18($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X18);
    // 0x8021A96C: sh          $t2, 0x128($v1)
    MEM_H(0X128, ctx->r3) = ctx->r10;
L_8021A970:
    // 0x8021A970: jr          $ra
    // 0x8021A974: nop

    TRACE_RETURN()
    return;
    // 0x8021A974: nop

;}
RECOMP_FUNC void func_8021DDE8_5D92B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DDE8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021DDEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021DDF0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8021DDF4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8021DDF8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8021DDFC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021DE00: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8021DE04: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021DE08: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x8021DE0C: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x8021DE10: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021DE14: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x8021DE18: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x8021DE1C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8021DE20: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8021DE24: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x8021DE28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021DE2C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8021DE30: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8021DE34: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x8021DE38: jal         0x80033898
    // 0x8021DE3C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x8021DE3C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8021DE40: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8021DE44: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021DE48: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021DE4C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021DE50: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8021DE54: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8021DE58: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021DE5C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021DE60: lbu         $a2, 0x63($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X63);
    // 0x8021DE64: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x8021DE68: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021DE6C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8021DE70: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8021DE74: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021DE78: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021DE7C: jal         0x802171A8
    // 0x8021DE80: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    func_802171A8_5D2678(rdram, ctx);
        goto after_1;
    // 0x8021DE80: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8021DE84: beq         $v0, $zero, L_8021DEB0
    if (ctx->r2 == 0) {
        // 0x8021DE88: lwc1        $f18, 0x48($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
            goto L_8021DEB0;
    }
    // 0x8021DE88: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021DE8C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x8021DE90: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x8021DE94: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021DE98: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x8021DE9C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021DEA0: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8021DEA4: lhu         $t9, 0x72($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X72);
    // 0x8021DEA8: b           L_8021DEB4
    // 0x8021DEAC: sh          $t9, 0x88($v0)
    MEM_H(0X88, ctx->r2) = ctx->r25;
        goto L_8021DEB4;
    // 0x8021DEAC: sh          $t9, 0x88($v0)
    MEM_H(0X88, ctx->r2) = ctx->r25;
L_8021DEB0:
    // 0x8021DEB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021DEB4:
    // 0x8021DEB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021DEB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8021DEBC: jr          $ra
    // 0x8021DEC0: nop

    TRACE_RETURN()
    return;
    // 0x8021DEC0: nop

;}
RECOMP_FUNC void func_80213FF0_5CF4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213FF4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80213FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213FFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80214000: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x80214004: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80214008: jalr        $t9
    // 0x8021400C: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021400C: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    after_0:
    // 0x80214010: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x80214014: addiu       $t9, $t9, -0x32B8
    ctx->r25 = ADD32(ctx->r25, -0X32B8);
    // 0x80214018: jalr        $t9
    // 0x8021401C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021401C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80214020: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214024: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x80214028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021402C: jalr        $t9
    // 0x80214030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80214030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80214034: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80214038: lw          $t7, 0x68($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X68);
    // 0x8021403C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80214040: sw          $t8, 0x68($t6)
    MEM_W(0X68, ctx->r14) = ctx->r24;
    // 0x80214044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021404C: jr          $ra
    // 0x80214050: nop

    TRACE_RETURN()
    return;
    // 0x80214050: nop

;}
RECOMP_FUNC void func_80218D90_5D4260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218D90: sb          $a1, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r5;
    // 0x80218D94: sb          $a2, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r6;
    // 0x80218D98: sb          $a3, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r7;
    // 0x80218D9C: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80218DA0: jr          $ra
    // 0x80218DA4: sb          $t6, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80218DA4: sb          $t6, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_802139D4_5CEEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802139D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802139D8: jr          $ra
    // 0x802139DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802139DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021BDEC_5D72BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BDEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021BDF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BDF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021BDF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021BDFC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021BE00: lhu         $t6, 0xE0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE0);
    // 0x8021BE04: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021BE08: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8021BE0C: jal         0x80003EA0
    // 0x8021BE10: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x8021BE10: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    after_0:
    // 0x8021BE14: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021BE18: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8021BE1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021BE20: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021BE24: lhu         $t8, 0xE0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XE0);
    // 0x8021BE28: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8021BE2C: swc1        $f6, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f6.u32l;
    // 0x8021BE30: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021BE34: bgez        $t8, L_8021BE48
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8021BE38: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021BE48;
    }
    // 0x8021BE38: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021BE3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021BE40: nop

    // 0x8021BE44: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8021BE48:
    // 0x8021BE48: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021BE4C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8021BE50: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021BE54: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021BE58: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8021BE5C: nop

    // 0x8021BE60: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021BE64: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8021BE68: nop

    // 0x8021BE6C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8021BE70: beql        $t0, $zero, L_8021BEC0
    if (ctx->r8 == 0) {
        // 0x8021BE74: mfc1        $t0, $f6
        ctx->r8 = (int32_t)ctx->f6.u32l;
            goto L_8021BEC0;
    }
    goto skip_0;
    // 0x8021BE74: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x8021BE78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021BE7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8021BE80: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021BE84: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8021BE88: nop

    // 0x8021BE8C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021BE90: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8021BE94: nop

    // 0x8021BE98: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8021BE9C: bne         $t0, $zero, L_8021BEB4
    if (ctx->r8 != 0) {
        // 0x8021BEA0: nop
    
            goto L_8021BEB4;
    }
    // 0x8021BEA0: nop

    // 0x8021BEA4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x8021BEA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021BEAC: b           L_8021BECC
    // 0x8021BEB0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_8021BECC;
    // 0x8021BEB0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_8021BEB4:
    // 0x8021BEB4: b           L_8021BECC
    // 0x8021BEB8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_8021BECC;
    // 0x8021BEB8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8021BEBC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
L_8021BEC0:
    // 0x8021BEC0: nop

    // 0x8021BEC4: bltz        $t0, L_8021BEB4
    if (SIGNED(ctx->r8) < 0) {
        // 0x8021BEC8: nop
    
            goto L_8021BEB4;
    }
    // 0x8021BEC8: nop

L_8021BECC:
    // 0x8021BECC: sh          $t0, 0xE0($a1)
    MEM_H(0XE0, ctx->r5) = ctx->r8;
    // 0x8021BED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021BED4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021BED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021BEDC: jr          $ra
    // 0x8021BEE0: nop

    TRACE_RETURN()
    return;
    // 0x8021BEE0: nop

;}
RECOMP_FUNC void func_80221460_5DC930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221468: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8022146C: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x80221470: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80221474: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80221478: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x8022147C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80221480: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80221484: bnel        $t6, $at, L_802214C0
    if (ctx->r14 != ctx->r1) {
        // 0x80221488: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802214C0;
    }
    goto skip_0;
    // 0x80221488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022148C: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x80221490: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x80221494: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80221498: bne         $v0, $t8, L_802214A8
    if (ctx->r2 != ctx->r24) {
        // 0x8022149C: nop
    
            goto L_802214A8;
    }
    // 0x8022149C: nop

    // 0x802214A0: b           L_802214A8
    // 0x802214A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802214A8;
    // 0x802214A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802214A8:
    // 0x802214A8: jal         0x8003D388
    // 0x802214AC: lhu         $a0, 0xA4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XA4);
    func_8003D388_3DF88(rdram, ctx);
        goto after_0;
    // 0x802214AC: lhu         $a0, 0xA4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XA4);
    after_0:
    // 0x802214B0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802214B4: jal         0x8003521C
    // 0x802214B8: addiu       $a0, $a0, 0x14CC
    ctx->r4 = ADD32(ctx->r4, 0X14CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802214B8: addiu       $a0, $a0, 0x14CC
    ctx->r4 = ADD32(ctx->r4, 0X14CC);
    after_1:
    // 0x802214BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802214C0:
    // 0x802214C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802214C4: jr          $ra
    // 0x802214C8: nop

    TRACE_RETURN()
    return;
    // 0x802214C8: nop

;}
RECOMP_FUNC void func_8020FFDC_5CB4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FFDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FFE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FFE4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FFE8: jal         0x80013AC4
    // 0x8020FFEC: addiu       $a0, $a0, -0x2460
    ctx->r4 = ADD32(ctx->r4, -0X2460);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FFEC: addiu       $a0, $a0, -0x2460
    ctx->r4 = ADD32(ctx->r4, -0X2460);
    after_0:
    // 0x8020FFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FFF8: jr          $ra
    // 0x8020FFFC: nop

    TRACE_RETURN()
    return;
    // 0x8020FFFC: nop

;}
RECOMP_FUNC void func_8021A4DC_5D59AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A4DC: jr          $ra
    // 0x8021A4E0: nop

    TRACE_RETURN()
    return;
    // 0x8021A4E0: nop

;}
RECOMP_FUNC void func_80216FFC_5D24CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216FFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80217000: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80217004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80217008: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8021700C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80217010: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80217014: lwc1        $f0, -0x5AE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AE4);
    // 0x80217018: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x8021701C: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x80217020: addiu       $t9, $t9, 0x6988
    ctx->r25 = ADD32(ctx->r25, 0X6988);
    // 0x80217024: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80217028: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8021702C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80217030: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x80217034: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x80217038: lw          $t0, -0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, -0X4);
    // 0x8021703C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80217040: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80217044: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80217048: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021704C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80217050: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x80217054: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x80217058: sw          $t5, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r13;
    // 0x8021705C: lw          $t6, -0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X4);
    // 0x80217060: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80217064: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80217068: sh          $t8, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r24;
    // 0x8021706C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80217070: jal         0x800141C4
    // 0x80217074: andi        $a0, $t8, 0xFFFF
    ctx->r4 = ctx->r24 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80217074: andi        $a0, $t8, 0xFFFF
    ctx->r4 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x80217078: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021707C: bne         $v0, $at, L_80217098
    if (ctx->r2 != ctx->r1) {
        // 0x80217080: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_80217098;
    }
    // 0x80217080: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80217084: lhu         $a0, 0x5C($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X5C);
    // 0x80217088: jal         0x80216640
    // 0x8021708C: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    func_80216640_5D1B10(rdram, ctx);
        goto after_1;
    // 0x8021708C: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    after_1:
    // 0x80217090: jal         0x80013B14
    // 0x80217094: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80217094: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_2:
L_80217098:
    // 0x80217098: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8021709C: lw          $t1, -0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X4);
    // 0x802170A0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x802170A4: lhu         $t3, 0x2($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2);
    // 0x802170A8: sh          $t3, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r11;
    // 0x802170AC: jal         0x800141C4
    // 0x802170B0: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x802170B0: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    after_3:
    // 0x802170B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802170B8: bne         $v0, $at, L_802170D4
    if (ctx->r2 != ctx->r1) {
        // 0x802170BC: lw          $t4, 0x28($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X28);
            goto L_802170D4;
    }
    // 0x802170BC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802170C0: lhu         $a0, 0x5C($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X5C);
    // 0x802170C4: jal         0x80216640
    // 0x802170C8: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    func_80216640_5D1B10(rdram, ctx);
        goto after_4;
    // 0x802170C8: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    after_4:
    // 0x802170CC: jal         0x80013B14
    // 0x802170D0: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_5;
    // 0x802170D0: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    after_5:
L_802170D4:
    // 0x802170D4: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
    // 0x802170D8: lhu         $t6, 0x3C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X3C);
    // 0x802170DC: addiu       $t5, $zero, 0x152
    ctx->r13 = ADD32(0, 0X152);
    // 0x802170E0: sh          $t5, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r13;
    // 0x802170E4: beq         $v0, $t6, L_802170F4
    if (ctx->r2 == ctx->r14) {
        // 0x802170E8: andi        $t7, $t5, 0xFFFF
        ctx->r15 = ctx->r13 & 0XFFFF;
            goto L_802170F4;
    }
    // 0x802170E8: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x802170EC: bne         $v0, $t7, L_802170F8
    if (ctx->r2 != ctx->r15) {
        // 0x802170F0: nop
    
            goto L_802170F8;
    }
    // 0x802170F0: nop

L_802170F4:
    // 0x802170F4: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
L_802170F8:
    // 0x802170F8: jal         0x80014218
    // 0x802170FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x802170FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80217100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80217104: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80217108: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021710C: jr          $ra
    // 0x80217110: nop

    TRACE_RETURN()
    return;
    // 0x80217110: nop

;}
RECOMP_FUNC void func_8021E71C_5D9BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E71C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021E720: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x8021E724: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021E728: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021E72C: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021E730: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8021E734: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021E738: c.eq.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl == ctx->f14.fl;
    // 0x8021E73C: nop

    // 0x8021E740: bc1fl       L_8021E76C
    if (!c1cs) {
        // 0x8021E744: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_8021E76C;
    }
    goto skip_0;
    // 0x8021E744: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_0:
    // 0x8021E748: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E74C: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021E750: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021E754: nop

    // 0x8021E758: bc1fl       L_8021E76C
    if (!c1cs) {
        // 0x8021E75C: c.lt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
            goto L_8021E76C;
    }
    goto skip_1;
    // 0x8021E75C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    skip_1:
    // 0x8021E760: b           L_8021E91C
    // 0x8021E764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021E91C;
    // 0x8021E764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021E768: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
L_8021E76C:
    // 0x8021E76C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E770: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021E774: bc1fl       L_8021E790
    if (!c1cs) {
        // 0x8021E778: sub.s       $f2, $f14, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
            goto L_8021E790;
    }
    goto skip_2;
    // 0x8021E778: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    skip_2:
    // 0x8021E77C: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x8021E780: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x8021E784: b           L_8021E794
    // 0x8021E788: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
        goto L_8021E794;
    // 0x8021E788: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x8021E78C: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
L_8021E790:
    // 0x8021E790: swc1        $f2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f2.u32l;
L_8021E794:
    // 0x8021E794: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8021E798: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8021E79C: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8021E7A0: nop

    // 0x8021E7A4: bc1fl       L_8021E7E8
    if (!c1cs) {
        // 0x8021E7A8: sub.s       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021E7E8;
    }
    goto skip_3;
    // 0x8021E7A8: sub.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f16.fl;
    skip_3:
    // 0x8021E7AC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8021E7B0: nop

    // 0x8021E7B4: bc1fl       L_8021E7CC
    if (!c1cs) {
        // 0x8021E7B8: sub.s       $f0, $f18, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021E7CC;
    }
    goto skip_4;
    // 0x8021E7B8: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
    skip_4:
    // 0x8021E7BC: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8021E7C0: b           L_8021E7CC
    // 0x8021E7C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021E7CC;
    // 0x8021E7C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021E7C8: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
L_8021E7CC:
    // 0x8021E7CC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021E7D0: nop

    // 0x8021E7D4: bc1fl       L_8021E7E8
    if (!c1cs) {
        // 0x8021E7D8: sub.s       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021E7E8;
    }
    goto skip_5;
    // 0x8021E7D8: sub.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f16.fl;
    skip_5:
    // 0x8021E7DC: b           L_8021E91C
    // 0x8021E7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021E91C;
    // 0x8021E7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021E7E4: sub.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f16.fl;
L_8021E7E8:
    // 0x8021E7E8: andi        $a1, $a0, 0x3FF
    ctx->r5 = ctx->r4 & 0X3FF;
    // 0x8021E7EC: sltiu       $at, $a1, 0x200
    ctx->r1 = ctx->r5 < 0X200 ? 1 : 0;
    // 0x8021E7F0: addiu       $t6, $a1, -0x200
    ctx->r14 = ADD32(ctx->r5, -0X200);
    // 0x8021E7F4: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021E7F8: nop

    // 0x8021E7FC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021E800: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8021E804: beq         $at, $zero, L_8021E894
    if (ctx->r1 == 0) {
        // 0x8021E808: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_8021E894;
    }
    // 0x8021E808: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021E80C: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x8021E810: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021E814: bgez        $a1, L_8021E82C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8021E818: cvt.d.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
            goto L_8021E82C;
    }
    // 0x8021E818: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8021E81C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021E820: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021E824: nop

    // 0x8021E828: add.d       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f10.d + ctx->f4.d;
L_8021E82C:
    // 0x8021E82C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E830: ldc1        $f6, -0x5860($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5860);
    // 0x8021E834: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8021E838: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021E83C: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x8021E840: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021E844: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021E848: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8021E84C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021E850: div.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f4.d);
    // 0x8021E854: div.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021E858: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x8021E85C: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x8021E860: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8021E864: nop

    // 0x8021E868: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8021E86C: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x8021E870: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E874: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021E878: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8021E87C: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021E880: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8021E884: nop

    // 0x8021E888: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8021E88C: b           L_8021E918
    // 0x8021E890: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
        goto L_8021E918;
    // 0x8021E890: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
L_8021E894:
    // 0x8021E894: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8021E898: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021E89C: bgez        $t6, L_8021E8B4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021E8A0: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_8021E8B4;
    }
    // 0x8021E8A0: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x8021E8A4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8021E8A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021E8AC: nop

    // 0x8021E8B0: add.d       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f10.d + ctx->f8.d;
L_8021E8B4:
    // 0x8021E8B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021E8B8: ldc1        $f4, -0x5858($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5858);
    // 0x8021E8BC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8021E8C0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8021E8C4: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8021E8C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021E8CC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021E8D0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021E8D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021E8D8: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8021E8DC: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021E8E0: sub.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d - ctx->f10.d;
    // 0x8021E8E4: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
    // 0x8021E8E8: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8021E8EC: nop

    // 0x8021E8F0: mul.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8021E8F4: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x8021E8F8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E8FC: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021E900: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021E904: div.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8021E908: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8021E90C: nop

    // 0x8021E910: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8021E914: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
L_8021E918:
    // 0x8021E918: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021E91C:
    // 0x8021E91C: jr          $ra
    // 0x8021E920: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8021E920: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802223B0_5DD880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802223B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802223B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802223B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802223BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802223C0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802223C4: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x802223C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802223CC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802223D0: jal         0x800417F0
    // 0x802223D4: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x802223D4: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x802223D8: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802223DC: jal         0x800419B0
    // 0x802223E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x802223E0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x802223E4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802223E8: jal         0x800417F0
    // 0x802223EC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x802223EC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x802223F0: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802223F4: jal         0x800419B0
    // 0x802223F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x802223F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x802223FC: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80222400: lw          $t6, -0x4E60($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4E60);
    // 0x80222404: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80222408: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8022240C: bne         $t6, $zero, L_802224A8
    if (ctx->r14 != 0) {
        // 0x80222410: lwc1        $f16, 0x2C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_802224A8;
    }
    // 0x80222410: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80222414: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80222418: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8022241C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80222420: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80222424: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80222428: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8022242C: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80222430: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80222434: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80222438: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8022243C: swc1        $f18, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f18.u32l;
    // 0x80222440: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80222444: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80222448: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8022244C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80222450: mul.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x80222454: nop

    // 0x80222458: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8022245C: nop

    // 0x80222460: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80222464: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80222468: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8022246C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80222470: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x80222474: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80222478: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8022247C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80222480: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80222484: mul.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80222488: nop

    // 0x8022248C: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80222490: nop

    // 0x80222494: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80222498: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8022249C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802224A0: b           L_80222534
    // 0x802224A4: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
        goto L_80222534;
    // 0x802224A4: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
L_802224A8:
    // 0x802224A8: mul.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x802224AC: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802224B0: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802224B4: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x802224B8: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802224BC: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802224C0: nop

    // 0x802224C4: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x802224C8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802224CC: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802224D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802224D4: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802224D8: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x802224DC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x802224E0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x802224E4: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802224E8: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802224EC: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x802224F0: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802224F4: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x802224F8: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x802224FC: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80222500: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x80222504: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80222508: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8022250C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80222510: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80222514: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80222518: nop

    // 0x8022251C: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80222520: nop

    // 0x80222524: mul.s       $f18, $f14, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x80222528: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8022252C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80222530: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
L_80222534:
    // 0x80222534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80222538: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022253C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80222540: jr          $ra
    // 0x80222544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80222544: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8021929C_5D476C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021929C: jr          $ra
    // 0x802192A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x802192A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_802107E0_5CBCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802107E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802107E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802107E8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802107EC: jal         0x80013AC4
    // 0x802107F0: addiu       $a0, $a0, -0x1C94
    ctx->r4 = ADD32(ctx->r4, -0X1C94);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802107F0: addiu       $a0, $a0, -0x1C94
    ctx->r4 = ADD32(ctx->r4, -0X1C94);
    after_0:
    // 0x802107F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802107F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802107FC: jr          $ra
    // 0x80210800: nop

    TRACE_RETURN()
    return;
    // 0x80210800: nop

;}
RECOMP_FUNC void func_8020FD9C_5CB26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FD9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FDA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FDA4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FDA8: jal         0x80013AC4
    // 0x8020FDAC: addiu       $a0, $a0, -0x2738
    ctx->r4 = ADD32(ctx->r4, -0X2738);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FDAC: addiu       $a0, $a0, -0x2738
    ctx->r4 = ADD32(ctx->r4, -0X2738);
    after_0:
    // 0x8020FDB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FDB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FDB8: jr          $ra
    // 0x8020FDBC: nop

    TRACE_RETURN()
    return;
    // 0x8020FDBC: nop

;}
RECOMP_FUNC void func_8020E818_5C9CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E81C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E820: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E824: jal         0x80013AC4
    // 0x8020E828: addiu       $a0, $a0, -0x3740
    ctx->r4 = ADD32(ctx->r4, -0X3740);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E828: addiu       $a0, $a0, -0x3740
    ctx->r4 = ADD32(ctx->r4, -0X3740);
    after_0:
    // 0x8020E82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E834: jr          $ra
    // 0x8020E838: nop

    TRACE_RETURN()
    return;
    // 0x8020E838: nop

;}
RECOMP_FUNC void func_80225A4C_5E0F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80225A58: jal         0x80225250
    // 0x80225A5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80225250_5E0720(rdram, ctx);
        goto after_0;
    // 0x80225A5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80225A60: jal         0x8022403C
    // 0x80225A64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8022403C_5DF50C(rdram, ctx);
        goto after_1;
    // 0x80225A64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80225A68: beq         $v0, $zero, L_80225AA4
    if (ctx->r2 == 0) {
        // 0x80225A6C: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_80225AA4;
    }
    // 0x80225A6C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80225A70: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80225A74: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80225A78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225A7C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80225A80: sb          $zero, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = 0;
    // 0x80225A84: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80225A88: lhu         $t8, 0x9C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X9C);
    // 0x80225A8C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80225A90: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80225A94: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x80225A98: lw          $t0, 0x5C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X5C);
    // 0x80225A9C: jal         0x80035020
    // 0x80225AA0: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x80225AA0: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    after_2:
L_80225AA4:
    // 0x80225AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225AA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225AAC: jr          $ra
    // 0x80225AB0: nop

    TRACE_RETURN()
    return;
    // 0x80225AB0: nop

;}
RECOMP_FUNC void func_802231A0_5DE670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802231A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802231A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802231A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802231AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802231B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802231B4: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x802231B8: sw          $zero, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = 0;
    // 0x802231BC: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x802231C0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802231C4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802231C8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802231CC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802231D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802231D4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802231D8: addiu       $v1, $v1, -0x76F8
    ctx->r3 = ADD32(ctx->r3, -0X76F8);
    // 0x802231DC: addiu       $a0, $a0, -0x7698
    ctx->r4 = ADD32(ctx->r4, -0X7698);
    // 0x802231E0: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
L_802231E4:
    // 0x802231E4: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802231E8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x802231EC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x802231F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802231F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802231F8: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802231FC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80223200: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80223204: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x80223208: nop

    // 0x8022320C: mul.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x80223210: add.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d + ctx->f10.d;
    // 0x80223214: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x80223218: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x8022321C: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80223220: lwc1        $f18, -0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, -0X8);
    // 0x80223224: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80223228: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x8022322C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80223230: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80223234: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80223238: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8022323C: mul.d       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x80223240: nop

    // 0x80223244: mul.d       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80223248: add.d       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f18.d + ctx->f10.d;
    // 0x8022324C: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x80223250: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80223254: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    // 0x80223258: lwc1        $f6, -0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, -0X4);
    // 0x8022325C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80223260: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80223264: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80223268: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8022326C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80223270: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x80223274: mul.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x80223278: nop

    // 0x8022327C: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80223280: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x80223284: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x80223288: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x8022328C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80223290: beq         $v0, $zero, L_802232A0
    if (ctx->r2 == 0) {
        // 0x80223294: nop
    
            goto L_802232A0;
    }
    // 0x80223294: nop

    // 0x80223298: bnel        $v1, $a0, L_802231E4
    if (ctx->r3 != ctx->r4) {
        // 0x8022329C: lh          $t6, 0x0($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X0);
            goto L_802231E4;
    }
    goto skip_0;
    // 0x8022329C: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    skip_0:
L_802232A0:
    // 0x802232A0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802232A4: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x802232A8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802232AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802232B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802232B4: beq         $t9, $zero, L_802232E4
    if (ctx->r25 == 0) {
        // 0x802232B8: lui         $a2, 0x8020
        ctx->r6 = S32(0X8020 << 16);
            goto L_802232E4;
    }
    // 0x802232B8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x802232BC: jal         0x80223348
    // 0x802232C0: lw          $a2, -0x39F4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39F4);
    func_80223348_5DE818(rdram, ctx);
        goto after_0;
    // 0x802232C0: lw          $a2, -0x39F4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39F4);
    after_0:
    // 0x802232C4: beq         $v0, $zero, L_802232E4
    if (ctx->r2 == 0) {
        // 0x802232C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802232E4;
    }
    // 0x802232C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802232CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802232D0: jal         0x802234CC
    // 0x802232D4: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    func_802234CC_5DE99C(rdram, ctx);
        goto after_1;
    // 0x802232D4: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    after_1:
    // 0x802232D8: beq         $v0, $zero, L_802232E4
    if (ctx->r2 == 0) {
        // 0x802232DC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802232E4;
    }
    // 0x802232DC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802232E0: sw          $t0, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r8;
L_802232E4:
    // 0x802232E4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802232E8: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x802232EC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802232F0: beql        $v0, $zero, L_80223338
    if (ctx->r2 == 0) {
        // 0x802232F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80223338;
    }
    goto skip_1;
    // 0x802232F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x802232F8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x802232FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80223300: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80223304: beq         $t1, $v0, L_80223334
    if (ctx->r9 == ctx->r2) {
        // 0x80223308: lui         $a2, 0x8020
        ctx->r6 = S32(0X8020 << 16);
            goto L_80223334;
    }
    // 0x80223308: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8022330C: jal         0x80223348
    // 0x80223310: lw          $a2, -0x39F0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39F0);
    func_80223348_5DE818(rdram, ctx);
        goto after_2;
    // 0x80223310: lw          $a2, -0x39F0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39F0);
    after_2:
    // 0x80223314: beq         $v0, $zero, L_80223334
    if (ctx->r2 == 0) {
        // 0x80223318: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80223334;
    }
    // 0x80223318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022331C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80223320: jal         0x802234CC
    // 0x80223324: lw          $a1, -0x39F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F0);
    func_802234CC_5DE99C(rdram, ctx);
        goto after_3;
    // 0x80223324: lw          $a1, -0x39F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F0);
    after_3:
    // 0x80223328: beq         $v0, $zero, L_80223334
    if (ctx->r2 == 0) {
        // 0x8022332C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80223334;
    }
    // 0x8022332C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80223330: sw          $t2, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->r10;
L_80223334:
    // 0x80223334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80223338:
    // 0x80223338: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8022333C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223340: jr          $ra
    // 0x80223344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80223344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802110E0_5CC5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802110E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802110E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802110E8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802110EC: jal         0x80013AC4
    // 0x802110F0: addiu       $a0, $a0, -0x16B4
    ctx->r4 = ADD32(ctx->r4, -0X16B4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802110F0: addiu       $a0, $a0, -0x16B4
    ctx->r4 = ADD32(ctx->r4, -0X16B4);
    after_0:
    // 0x802110F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802110F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802110FC: jr          $ra
    // 0x80211100: nop

    TRACE_RETURN()
    return;
    // 0x80211100: nop

;}
RECOMP_FUNC void func_80210AB0_5CBF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210AB8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210ABC: jal         0x80013AC4
    // 0x80210AC0: addiu       $a0, $a0, -0x1AAC
    ctx->r4 = ADD32(ctx->r4, -0X1AAC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210AC0: addiu       $a0, $a0, -0x1AAC
    ctx->r4 = ADD32(ctx->r4, -0X1AAC);
    after_0:
    // 0x80210AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210ACC: jr          $ra
    // 0x80210AD0: nop

    TRACE_RETURN()
    return;
    // 0x80210AD0: nop

;}
RECOMP_FUNC void func_8020E2E4_5C97B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E2E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E2E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E2EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E2F0: jal         0x80013AC4
    // 0x8020E2F4: addiu       $a0, $a0, -0x3A74
    ctx->r4 = ADD32(ctx->r4, -0X3A74);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E2F4: addiu       $a0, $a0, -0x3A74
    ctx->r4 = ADD32(ctx->r4, -0X3A74);
    after_0:
    // 0x8020E2F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E300: jr          $ra
    // 0x8020E304: nop

    TRACE_RETURN()
    return;
    // 0x8020E304: nop

;}
RECOMP_FUNC void func_8021E098_5D9568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E098: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E09C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E0A0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021E0A4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021E0A8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021E0AC: lui         $t9, 0x8024
    ctx->r25 = S32(0X8024 << 16);
    // 0x8021E0B0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8021E0B4: addiu       $t9, $t9, -0x7970
    ctx->r25 = ADD32(ctx->r25, -0X7970);
    // 0x8021E0B8: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021E0BC: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8021E0C0: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8021E0C4: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x8021E0C8: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8021E0CC: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x8021E0D0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021E0D4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E0D8: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021E0DC: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021E0E0: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x8021E0E4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021E0E8: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8021E0EC: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021E0F0: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021E0F4: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8021E0F8: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8021E0FC: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8021E100: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8021E104: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x8021E108: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x8021E10C: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x8021E110: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x8021E114: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x8021E118: jal         0x80040620
    // 0x8021E11C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021E11C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021E120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E124: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021E128: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021E12C: jr          $ra
    // 0x8021E130: nop

    TRACE_RETURN()
    return;
    // 0x8021E130: nop

;}
RECOMP_FUNC void func_80221164_5DC634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022116C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80221170: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80221174: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80221178: ori         $t7, $t6, 0x4400
    ctx->r15 = ctx->r14 | 0X4400;
    // 0x8022117C: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x80221180: jal         0x8003521C
    // 0x80221184: lw          $a0, 0xB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80221184: lw          $a0, 0xB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB4);
    after_0:
    // 0x80221188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022118C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221190: jr          $ra
    // 0x80221194: nop

    TRACE_RETURN()
    return;
    // 0x80221194: nop

;}
RECOMP_FUNC void func_80211248_5CC718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021124C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211250: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211254: jal         0x80013AC4
    // 0x80211258: addiu       $a0, $a0, -0x163C
    ctx->r4 = ADD32(ctx->r4, -0X163C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211258: addiu       $a0, $a0, -0x163C
    ctx->r4 = ADD32(ctx->r4, -0X163C);
    after_0:
    // 0x8021125C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211264: jr          $ra
    // 0x80211268: nop

    TRACE_RETURN()
    return;
    // 0x80211268: nop

;}
RECOMP_FUNC void func_8021D5AC_5D8A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D5AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021D5B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8021D5B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8021D5B8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8021D5BC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8021D5C0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8021D5C4: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8021D5C8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8021D5CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021D5D0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8021D5D4: lbu         $t7, 0xEE($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XEE);
    // 0x8021D5D8: jal         0x80003EA0
    // 0x8021D5DC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x8021D5DC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x8021D5E0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021D5E4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8021D5E8: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021D5EC: nop

    // 0x8021D5F0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021D5F4: sub.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x8021D5F8: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x8021D5FC: jal         0x80003E10
    // 0x8021D600: lbu         $a0, 0xEE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XEE);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8021D600: lbu         $a0, 0xEE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XEE);
    after_1:
    // 0x8021D604: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021D608: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8021D60C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8021D610: nop

    // 0x8021D614: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021D618: sub.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x8021D61C: swc1        $f6, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f6.u32l;
    // 0x8021D620: jal         0x80003EA0
    // 0x8021D624: lbu         $a0, 0xEE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XEE);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x8021D624: lbu         $a0, 0xEE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XEE);
    after_2:
    // 0x8021D628: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021D62C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8021D630: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021D634: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8021D638: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021D63C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8021D640: sub.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x8021D644: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021D648: swc1        $f18, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f18.u32l;
    // 0x8021D64C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021D650: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021D654: lbu         $t6, 0xEE($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XEE);
    // 0x8021D658: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021D65C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021D660: nop

    // 0x8021D664: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8021D668: beql        $t8, $zero, L_8021D6B8
    if (ctx->r24 == 0) {
        // 0x8021D66C: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_8021D6B8;
    }
    goto skip_0;
    // 0x8021D66C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x8021D670: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021D674: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8021D678: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021D67C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021D680: nop

    // 0x8021D684: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021D688: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021D68C: nop

    // 0x8021D690: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8021D694: bne         $t8, $zero, L_8021D6AC
    if (ctx->r24 != 0) {
        // 0x8021D698: nop
    
            goto L_8021D6AC;
    }
    // 0x8021D698: nop

    // 0x8021D69C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8021D6A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021D6A4: b           L_8021D6C4
    // 0x8021D6A8: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8021D6C4;
    // 0x8021D6A8: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8021D6AC:
    // 0x8021D6AC: b           L_8021D6C4
    // 0x8021D6B0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8021D6C4;
    // 0x8021D6B0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8021D6B4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_8021D6B8:
    // 0x8021D6B8: nop

    // 0x8021D6BC: bltz        $t8, L_8021D6AC
    if (SIGNED(ctx->r24) < 0) {
        // 0x8021D6C0: nop
    
            goto L_8021D6AC;
    }
    // 0x8021D6C0: nop

L_8021D6C4:
    // 0x8021D6C4: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x8021D6C8: sb          $t0, 0xEE($s0)
    MEM_B(0XEE, ctx->r16) = ctx->r8;
    // 0x8021D6CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8021D6D0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021D6D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8021D6D8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8021D6DC: jr          $ra
    // 0x8021D6E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8021D6E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8020FAF0_5CAFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FAF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FAF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FAF8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FAFC: jal         0x80013AC4
    // 0x8020FB00: addiu       $a0, $a0, -0x29F8
    ctx->r4 = ADD32(ctx->r4, -0X29F8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FB00: addiu       $a0, $a0, -0x29F8
    ctx->r4 = ADD32(ctx->r4, -0X29F8);
    after_0:
    // 0x8020FB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FB08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FB0C: jr          $ra
    // 0x8020FB10: nop

    TRACE_RETURN()
    return;
    // 0x8020FB10: nop

;}
RECOMP_FUNC void func_80217114_5D25E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217114: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80217118: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8021711C: beql        $t7, $zero, L_80217134
    if (ctx->r15 == 0) {
        // 0x80217120: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_80217134;
    }
    goto skip_0;
    // 0x80217120: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    skip_0:
    // 0x80217124: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80217128: jr          $ra
    // 0x8021712C: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x8021712C: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x80217130: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
L_80217134:
    // 0x80217134: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80217138: sb          $t8, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r24;
    // 0x8021713C: jr          $ra
    // 0x80217140: nop

    TRACE_RETURN()
    return;
    // 0x80217140: nop

;}
RECOMP_FUNC void func_80219E08_5D52D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219E08: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80219E0C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80219E10: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80219E14: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80219E18: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80219E1C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80219E20: nop

    // 0x80219E24: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80219E28: nop

    // 0x80219E2C: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80219E30: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x80219E34: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80219E38: jr          $ra
    // 0x80219E3C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80219E3C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8021160C_5CCADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021160C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80211610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80211618: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x8021161C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80211620: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80211624: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80211628: bne         $v0, $zero, L_802116F0
    if (ctx->r2 != 0) {
        // 0x8021162C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_802116F0;
    }
    // 0x8021162C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x80211630: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x80211634: sll         $t7, $v0, 15
    ctx->r15 = S32(ctx->r2 << 15);
    // 0x80211638: bgez        $t7, L_8021166C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021163C: sll         $t9, $v0, 14
        ctx->r25 = S32(ctx->r2 << 14);
            goto L_8021166C;
    }
    // 0x8021163C: sll         $t9, $v0, 14
    ctx->r25 = S32(ctx->r2 << 14);
    // 0x80211640: sll         $t8, $v0, 14
    ctx->r24 = S32(ctx->r2 << 14);
    // 0x80211644: bgez        $t8, L_8021165C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80211648: nop
    
            goto L_8021165C;
    }
    // 0x80211648: nop

    // 0x8021164C: jal         0x80038B98
    // 0x80211650: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x80211650: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x80211654: b           L_802116A4
    // 0x80211658: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
        goto L_802116A4;
    // 0x80211658: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_8021165C:
    // 0x8021165C: jal         0x80038B98
    // 0x80211660: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x80211660: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_1:
    // 0x80211664: b           L_802116A4
    // 0x80211668: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
        goto L_802116A4;
    // 0x80211668: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_8021166C:
    // 0x8021166C: bgez        $t9, L_80211690
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80211670: addiu       $a0, $zero, 0x105
        ctx->r4 = ADD32(0, 0X105);
            goto L_80211690;
    }
    // 0x80211670: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x80211674: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211678: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x8021167C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80211680: jal         0x8000F420
    // 0x80211684: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_2;
    // 0x80211684: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    after_2:
    // 0x80211688: b           L_802116A4
    // 0x8021168C: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
        goto L_802116A4;
    // 0x8021168C: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_80211690:
    // 0x80211690: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211694: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x80211698: jal         0x8000F420
    // 0x8021169C: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_3;
    // 0x8021169C: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    after_3:
    // 0x802116A0: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_802116A4:
    // 0x802116A4: addiu       $t1, $zero, 0x22A
    ctx->r9 = ADD32(0, 0X22A);
    // 0x802116A8: addiu       $t2, $zero, 0xF8
    ctx->r10 = ADD32(0, 0XF8);
    // 0x802116AC: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x802116B0: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x802116B4: sb          $t2, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r10;
    // 0x802116B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802116BC: jal         0x80216DF8
    // 0x802116C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_4;
    // 0x802116C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x802116C4: jal         0x8021A310
    // 0x802116C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_5;
    // 0x802116C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802116CC: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x802116D0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x802116D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802116D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802116DC: jal         0x80224ABC
    // 0x802116E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_6;
    // 0x802116E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x802116E4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802116E8: jal         0x8003521C
    // 0x802116EC: addiu       $a0, $a0, 0x1704
    ctx->r4 = ADD32(ctx->r4, 0X1704);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x802116EC: addiu       $a0, $a0, 0x1704
    ctx->r4 = ADD32(ctx->r4, 0X1704);
    after_7:
L_802116F0:
    // 0x802116F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802116F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802116F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802116FC: jr          $ra
    // 0x80211700: nop

    TRACE_RETURN()
    return;
    // 0x80211700: nop

;}
RECOMP_FUNC void func_8020FE2C_5CB2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FE2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FE30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FE34: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FE38: jal         0x80013AC4
    // 0x8020FE3C: addiu       $a0, $a0, -0x2674
    ctx->r4 = ADD32(ctx->r4, -0X2674);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FE3C: addiu       $a0, $a0, -0x2674
    ctx->r4 = ADD32(ctx->r4, -0X2674);
    after_0:
    // 0x8020FE40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FE44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FE48: jr          $ra
    // 0x8020FE4C: nop

    TRACE_RETURN()
    return;
    // 0x8020FE4C: nop

;}
RECOMP_FUNC void func_8021C2A4_5D7774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C2A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021C2A8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021C2AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021C2B0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021C2B4: lw          $a1, 0x84($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X84);
    // 0x8021C2B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021C2BC: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021C2C0: lwc1        $f20, 0x8($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8021C2C4: c.eq.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl == ctx->f20.fl;
    // 0x8021C2C8: nop

    // 0x8021C2CC: bc1fl       L_8021C310
    if (!c1cs) {
        // 0x8021C2D0: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_8021C310;
    }
    goto skip_0;
    // 0x8021C2D0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_0:
    // 0x8021C2D4: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021C2D8: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021C2DC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021C2E0: nop

    // 0x8021C2E4: bc1fl       L_8021C310
    if (!c1cs) {
        // 0x8021C2E8: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_8021C310;
    }
    goto skip_1;
    // 0x8021C2E8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_1:
    // 0x8021C2EC: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C2F0: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021C2F4: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8021C2F8: nop

    // 0x8021C2FC: bc1fl       L_8021C310
    if (!c1cs) {
        // 0x8021C300: c.lt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_8021C310;
    }
    goto skip_2;
    // 0x8021C300: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    skip_2:
    // 0x8021C304: b           L_8021C438
    // 0x8021C308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021C438;
    // 0x8021C308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C30C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
L_8021C310:
    // 0x8021C310: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021C314: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021C318: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C31C: bc1f        L_8021C334
    if (!c1cs) {
        // 0x8021C320: lwc1        $f18, 0x10($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
            goto L_8021C334;
    }
    // 0x8021C320: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021C324: sub.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x8021C328: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x8021C32C: b           L_8021C33C
    // 0x8021C330: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
        goto L_8021C33C;
    // 0x8021C330: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_8021C334:
    // 0x8021C334: sub.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x8021C338: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
L_8021C33C:
    // 0x8021C33C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021C340: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021C344: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x8021C348: nop

    // 0x8021C34C: bc1fl       L_8021C3C0
    if (!c1cs) {
        // 0x8021C350: sub.s       $f8, $f18, $f16
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021C3C0;
    }
    goto skip_3;
    // 0x8021C350: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    skip_3:
    // 0x8021C354: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021C358: nop

    // 0x8021C35C: bc1fl       L_8021C374
    if (!c1cs) {
        // 0x8021C360: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_8021C374;
    }
    goto skip_4;
    // 0x8021C360: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_4:
    // 0x8021C364: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8021C368: b           L_8021C374
    // 0x8021C36C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C374;
    // 0x8021C36C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C370: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_8021C374:
    // 0x8021C374: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8021C378: nop

    // 0x8021C37C: bc1fl       L_8021C3C0
    if (!c1cs) {
        // 0x8021C380: sub.s       $f8, $f18, $f16
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021C3C0;
    }
    goto skip_5;
    // 0x8021C380: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    skip_5:
    // 0x8021C384: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8021C388: nop

    // 0x8021C38C: bc1fl       L_8021C3A4
    if (!c1cs) {
        // 0x8021C390: sub.s       $f0, $f18, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021C3A4;
    }
    goto skip_6;
    // 0x8021C390: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
    skip_6:
    // 0x8021C394: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8021C398: b           L_8021C3A4
    // 0x8021C39C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C3A4;
    // 0x8021C39C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C3A0: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
L_8021C3A4:
    // 0x8021C3A4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8021C3A8: nop

    // 0x8021C3AC: bc1fl       L_8021C3C0
    if (!c1cs) {
        // 0x8021C3B0: sub.s       $f8, $f18, $f16
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021C3C0;
    }
    goto skip_7;
    // 0x8021C3B0: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    skip_7:
    // 0x8021C3B4: b           L_8021C438
    // 0x8021C3B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021C438;
    // 0x8021C3B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C3BC: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
L_8021C3C0:
    // 0x8021C3C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021C3C4: sub.s       $f20, $f14, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8021C3C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8021C3CC: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8021C3D0: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8021C3D4: nop

    // 0x8021C3D8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021C3DC: nop

    // 0x8021C3E0: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8021C3E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021C3E8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021C3EC: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021C3F0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021C3F4: div.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021C3F8: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021C3FC: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x8021C400: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021C404: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021C408: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8021C40C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021C410: div.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8021C414: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8021C418: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x8021C41C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C420: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8021C424: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8021C428: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021C42C: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021C430: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021C434: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
L_8021C438:
    // 0x8021C438: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021C43C: jr          $ra
    // 0x8021C440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8021C440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8021F26C_5DA73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F26C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021F270: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8021F274: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8021F278: lhu         $t7, 0x32($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X32);
    // 0x8021F27C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F280: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8021F284: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8021F288: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8021F28C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8021F290: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8021F294: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021F298: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8021F29C: bgez        $t7, L_8021F2AC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021F2A0: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_8021F2AC;
    }
    // 0x8021F2A0: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8021F2A4: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x8021F2A8: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8021F2AC:
    // 0x8021F2AC: jal         0x802196FC
    // 0x8021F2B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_802196FC_5D4BCC(rdram, ctx);
        goto after_0;
    // 0x8021F2B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x8021F2B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8021F2B8: jal         0x80003E10
    // 0x8021F2BC: lhu         $a0, 0x16($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8021F2BC: lhu         $a0, 0x16($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X16);
    after_1:
    // 0x8021F2C0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021F2C4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8021F2C8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8021F2CC: swc1        $f6, 0x78($t0)
    MEM_W(0X78, ctx->r8) = ctx->f6.u32l;
    // 0x8021F2D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8021F2D4: jal         0x80003EA0
    // 0x8021F2D8: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x8021F2D8: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    after_2:
    // 0x8021F2DC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021F2E0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8021F2E4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8021F2E8: swc1        $f10, 0x80($t2)
    MEM_W(0X80, ctx->r10) = ctx->f10.u32l;
    // 0x8021F2EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F2F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021F2F4: jr          $ra
    // 0x8021F2F8: nop

    TRACE_RETURN()
    return;
    // 0x8021F2F8: nop

;}
RECOMP_FUNC void func_80221584_5DCA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022158C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80221590: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80221594: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x80221598: ori         $t7, $t6, 0x4400
    ctx->r15 = ctx->r14 | 0X4400;
    // 0x8022159C: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x802215A0: jal         0x8003521C
    // 0x802215A4: lw          $a0, 0xB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802215A4: lw          $a0, 0xB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB4);
    after_0:
    // 0x802215A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802215AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802215B0: jr          $ra
    // 0x802215B4: nop

    TRACE_RETURN()
    return;
    // 0x802215B4: nop

;}
RECOMP_FUNC void func_8020F358_5CA828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F35C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F360: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F364: jal         0x80013AC4
    // 0x8020F368: addiu       $a0, $a0, -0x2F78
    ctx->r4 = ADD32(ctx->r4, -0X2F78);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F368: addiu       $a0, $a0, -0x2F78
    ctx->r4 = ADD32(ctx->r4, -0X2F78);
    after_0:
    // 0x8020F36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F374: jr          $ra
    // 0x8020F378: nop

    TRACE_RETURN()
    return;
    // 0x8020F378: nop

;}
RECOMP_FUNC void func_80225000_5E04D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225000: lhu         $v0, 0xA6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA6);
    // 0x80225004: bne         $v0, $zero, L_80225014
    if (ctx->r2 != 0) {
        // 0x80225008: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80225014;
    }
    // 0x80225008: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8022500C: jr          $ra
    // 0x80225010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80225010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225014:
    // 0x80225014: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80225018: beq         $t7, $zero, L_80225028
    if (ctx->r15 == 0) {
        // 0x8022501C: sh          $t6, 0xA6($a0)
        MEM_H(0XA6, ctx->r4) = ctx->r14;
            goto L_80225028;
    }
    // 0x8022501C: sh          $t6, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r14;
    // 0x80225020: jr          $ra
    // 0x80225024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80225024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225028:
    // 0x80225028: lw          $v1, 0xC4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC4);
    // 0x8022502C: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x80225030: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80225034: sw          $v1, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r3;
    // 0x80225038: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x8022503C: sh          $a2, 0xEA($a0)
    MEM_H(0XEA, ctx->r4) = ctx->r6;
    // 0x80225040: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
    // 0x80225044: xor         $t8, $a1, $a2
    ctx->r24 = ctx->r5 ^ ctx->r6;
    // 0x80225048: and         $a3, $t8, $a2
    ctx->r7 = ctx->r24 & ctx->r6;
    // 0x8022504C: andi        $t2, $t1, 0x1FFF
    ctx->r10 = ctx->r9 & 0X1FFF;
    // 0x80225050: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x80225054: sh          $t2, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r10;
    // 0x80225058: jr          $ra
    // 0x8022505C: nop

    TRACE_RETURN()
    return;
    // 0x8022505C: nop

;}
RECOMP_FUNC void func_80216838_5D1D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216838: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021683C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80216840: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80216844: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80216848: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021684C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80216850: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80216854: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80216858: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8021685C: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x80216860: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80216864: jal         0x80035EEC
    // 0x80216868: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x80216868: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8021686C: beq         $v0, $zero, L_80216A9C
    if (ctx->r2 == 0) {
        // 0x80216870: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80216A9C;
    }
    // 0x80216870: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80216874: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80216878: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021687C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80216880: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80216884: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80216888: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021688C: addiu       $v0, $v0, 0x6988
    ctx->r2 = ADD32(ctx->r2, 0X6988);
    // 0x80216890: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80216894: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80216898: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021689C: nop

    // 0x802168A0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802168A4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802168A8: nop

    // 0x802168AC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802168B0: beql        $t7, $zero, L_80216900
    if (ctx->r15 == 0) {
        // 0x802168B4: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_80216900;
    }
    goto skip_0;
    // 0x802168B4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x802168B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802168BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802168C0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802168C4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802168C8: nop

    // 0x802168CC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802168D0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802168D4: nop

    // 0x802168D8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802168DC: bne         $t7, $zero, L_802168F4
    if (ctx->r15 != 0) {
        // 0x802168E0: nop
    
            goto L_802168F4;
    }
    // 0x802168E0: nop

    // 0x802168E4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x802168E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802168EC: b           L_8021690C
    // 0x802168F0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8021690C;
    // 0x802168F0: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_802168F4:
    // 0x802168F4: b           L_8021690C
    // 0x802168F8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8021690C;
    // 0x802168F8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802168FC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_80216900:
    // 0x80216900: nop

    // 0x80216904: bltz        $t7, L_802168F4
    if (SIGNED(ctx->r15) < 0) {
        // 0x80216908: nop
    
            goto L_802168F4;
    }
    // 0x80216908: nop

L_8021690C:
    // 0x8021690C: sh          $t7, 0x7E($s0)
    MEM_H(0X7E, ctx->r16) = ctx->r15;
    // 0x80216910: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80216914: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80216918: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021691C: sb          $t8, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r24;
    // 0x80216920: lhu         $t9, 0x5E($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X5E);
    // 0x80216924: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80216928: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8021692C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x80216930: lw          $t2, -0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, -0X4);
    // 0x80216934: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80216938: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8021693C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80216940: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80216944: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80216948: sw          $t8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r24;
    // 0x8021694C: lhu         $t9, 0x5E($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X5E);
    // 0x80216950: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80216954: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x80216958: lw          $t2, -0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, -0X4);
    // 0x8021695C: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80216960: lhu         $t3, 0x0($t4)
    ctx->r11 = MEM_HU(ctx->r12, 0X0);
    // 0x80216964: sh          $t3, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r11;
    // 0x80216968: jal         0x800141C4
    // 0x8021696C: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x8021696C: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    after_1:
    // 0x80216970: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80216974: bnel        $v0, $at, L_80216994
    if (ctx->r2 != ctx->r1) {
        // 0x80216978: lhu         $t5, 0x5E($s2)
        ctx->r13 = MEM_HU(ctx->r18, 0X5E);
            goto L_80216994;
    }
    goto skip_1;
    // 0x80216978: lhu         $t5, 0x5E($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X5E);
    skip_1:
    // 0x8021697C: lhu         $a0, 0x5C($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X5C);
    // 0x80216980: jal         0x80216640
    // 0x80216984: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    func_80216640_5D1B10(rdram, ctx);
        goto after_2;
    // 0x80216984: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    after_2:
    // 0x80216988: jal         0x80013B14
    // 0x8021698C: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_80013B14_14714(rdram, ctx);
        goto after_3;
    // 0x8021698C: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_3:
    // 0x80216990: lhu         $t5, 0x5E($s2)
    ctx->r13 = MEM_HU(ctx->r18, 0X5E);
L_80216994:
    // 0x80216994: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x80216998: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8021699C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802169A0: lw          $t7, 0x6984($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6984);
    // 0x802169A4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802169A8: lhu         $t9, 0x2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2);
    // 0x802169AC: sh          $t9, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r25;
    // 0x802169B0: jal         0x800141C4
    // 0x802169B4: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    func_800141C4_14DC4(rdram, ctx);
        goto after_4;
    // 0x802169B4: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    after_4:
    // 0x802169B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802169BC: bnel        $v0, $at, L_802169DC
    if (ctx->r2 != ctx->r1) {
        // 0x802169C0: addiu       $t0, $zero, 0x152
        ctx->r8 = ADD32(0, 0X152);
            goto L_802169DC;
    }
    goto skip_2;
    // 0x802169C0: addiu       $t0, $zero, 0x152
    ctx->r8 = ADD32(0, 0X152);
    skip_2:
    // 0x802169C4: lhu         $a0, 0x5C($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X5C);
    // 0x802169C8: jal         0x80216640
    // 0x802169CC: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    func_80216640_5D1B10(rdram, ctx);
        goto after_5;
    // 0x802169CC: lhu         $a1, 0x3C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X3C);
    after_5:
    // 0x802169D0: jal         0x80013B14
    // 0x802169D4: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    func_80013B14_14714(rdram, ctx);
        goto after_6;
    // 0x802169D4: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    after_6:
    // 0x802169D8: addiu       $t0, $zero, 0x152
    ctx->r8 = ADD32(0, 0X152);
L_802169DC:
    // 0x802169DC: sh          $t0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r8;
    // 0x802169E0: lhu         $t1, 0x3C($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X3C);
    // 0x802169E4: lhu         $v0, 0x34($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X34);
    // 0x802169E8: beql        $v0, $t1, L_80216A00
    if (ctx->r2 == ctx->r9) {
        // 0x802169EC: sh          $zero, 0x34($s1)
        MEM_H(0X34, ctx->r17) = 0;
            goto L_80216A00;
    }
    goto skip_3;
    // 0x802169EC: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    skip_3:
    // 0x802169F0: lhu         $t2, 0x44($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X44);
    // 0x802169F4: bnel        $v0, $t2, L_80216A04
    if (ctx->r2 != ctx->r10) {
        // 0x802169F8: lw          $t4, 0x30($s1)
        ctx->r12 = MEM_W(ctx->r17, 0X30);
            goto L_80216A04;
    }
    goto skip_4;
    // 0x802169F8: lw          $t4, 0x30($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X30);
    skip_4:
    // 0x802169FC: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
L_80216A00:
    // 0x80216A00: lw          $t4, 0x30($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X30);
L_80216A04:
    // 0x80216A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80216A08: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x80216A0C: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80216A10: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x80216A14: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80216A18: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80216A1C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80216A20: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x80216A24: lhu         $t3, 0x14($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X14);
    // 0x80216A28: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x80216A2C: lhu         $t5, 0x16($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X16);
    // 0x80216A30: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x80216A34: lhu         $t6, 0x18($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X18);
    // 0x80216A38: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
    // 0x80216A3C: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80216A40: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x80216A44: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80216A48: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x80216A4C: lwc1        $f10, 0x24($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X24);
    // 0x80216A50: jal         0x80014218
    // 0x80216A54: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    func_80014218_14E18(rdram, ctx);
        goto after_7;
    // 0x80216A54: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    after_7:
    // 0x80216A58: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x80216A5C: sll         $t8, $t7, 7
    ctx->r24 = S32(ctx->r15 << 7);
    // 0x80216A60: bgezl       $t8, L_80216A8C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80216A64: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_80216A8C;
    }
    goto skip_5;
    // 0x80216A64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_5:
    // 0x80216A68: jal         0x8001B5AC
    // 0x80216A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_8;
    // 0x80216A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80216A70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216A74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80216A78: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80216A7C: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80216A80: b           L_80216AA0
    // 0x80216A84: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
        goto L_80216AA0;
    // 0x80216A84: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x80216A88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_80216A8C:
    // 0x80216A8C: nop

    // 0x80216A90: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x80216A94: b           L_80216AA0
    // 0x80216A98: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_80216AA0;
    // 0x80216A98: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80216A9C:
    // 0x80216A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216AA0:
    // 0x80216AA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80216AA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80216AA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80216AAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80216AB0: jr          $ra
    // 0x80216AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80216AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802208C4_5DBD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802208C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802208C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802208CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802208D0: jal         0x8003F1D8
    // 0x802208D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x802208D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802208D8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802208DC: bne         $v0, $zero, L_802209A4
    if (ctx->r2 != 0) {
        // 0x802208E0: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_802209A4;
    }
    // 0x802208E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802208E4: lw          $t6, 0x68($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X68);
    // 0x802208E8: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x802208EC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802208F0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802208F4: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x802208F8: sw          $t7, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r15;
    // 0x802208FC: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80220900: sw          $t9, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r25;
    // 0x80220904: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80220908: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x8022090C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80220910: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80220914: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80220918: sw          $zero, -0x764($at)
    MEM_W(-0X764, ctx->r1) = 0;
    // 0x8022091C: lhu         $t1, 0x14E($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14E);
    // 0x80220920: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80220924: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x80220928: sw          $t1, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r9;
    // 0x8022092C: lw          $t2, 0x150($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X150);
    // 0x80220930: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80220934: addiu       $a0, $a0, 0x1F34
    ctx->r4 = ADD32(ctx->r4, 0X1F34);
    // 0x80220938: sw          $t2, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r10;
    // 0x8022093C: lhu         $t3, 0x154($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X154);
    // 0x80220940: addiu       $t5, $t5, 0x9BC
    ctx->r13 = ADD32(ctx->r13, 0X9BC);
    // 0x80220944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80220948: sh          $t3, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r11;
    // 0x8022094C: lhu         $t4, 0x156($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X156);
    // 0x80220950: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    // 0x80220954: sb          $t4, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r12;
    // 0x80220958: lwc1        $f0, 0x1A0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1A0);
    // 0x8022095C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80220960: nop

    // 0x80220964: bc1fl       L_80220980
    if (!c1cs) {
        // 0x80220968: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_80220980;
    }
    goto skip_0;
    // 0x80220968: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_0:
    // 0x8022096C: jal         0x8003521C
    // 0x80220970: sw          $t5, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r13;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80220970: sw          $t5, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r13;
    after_1:
    // 0x80220974: b           L_802209B0
    // 0x80220978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802209B0;
    // 0x80220978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022097C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_80220980:
    // 0x80220980: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80220984: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80220988: nop

    // 0x8022098C: bc1fl       L_802209B0
    if (!c1cs) {
        // 0x80220990: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802209B0;
    }
    goto skip_1;
    // 0x80220990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80220994: jal         0x8003521C
    // 0x80220998: addiu       $a0, $a0, 0x9BC
    ctx->r4 = ADD32(ctx->r4, 0X9BC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80220998: addiu       $a0, $a0, 0x9BC
    ctx->r4 = ADD32(ctx->r4, 0X9BC);
    after_2:
    // 0x8022099C: b           L_802209B0
    // 0x802209A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802209B0;
    // 0x802209A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802209A4:
    // 0x802209A4: jal         0x80221CCC
    // 0x802209A8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80221CCC_5DD19C(rdram, ctx);
        goto after_3;
    // 0x802209A8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x802209AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802209B0:
    // 0x802209B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802209B4: jr          $ra
    // 0x802209B8: nop

    TRACE_RETURN()
    return;
    // 0x802209B8: nop

;}
RECOMP_FUNC void func_8020F478_5CA948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F47C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F480: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F484: jal         0x80013AC4
    // 0x8020F488: addiu       $a0, $a0, -0x2E9C
    ctx->r4 = ADD32(ctx->r4, -0X2E9C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F488: addiu       $a0, $a0, -0x2E9C
    ctx->r4 = ADD32(ctx->r4, -0X2E9C);
    after_0:
    // 0x8020F48C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F494: jr          $ra
    // 0x8020F498: nop

    TRACE_RETURN()
    return;
    // 0x8020F498: nop

;}
