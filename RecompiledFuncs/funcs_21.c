#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void _freePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800478B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800478B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800478B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800478BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800478C0: jal         0x800475F0
    // 0x800478C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x800478C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800478C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800478CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800478D0: jal         0x80047620
    // 0x800478D4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    alLink(rdram, ctx);
        goto after_1;
    // 0x800478D4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x800478D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800478DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800478E0: jr          $ra
    // 0x800478E4: nop

    TRACE_RETURN()
    return;
    // 0x800478E4: nop

;}
RECOMP_FUNC void func_80028BC0_297C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028BC0: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x80028BC4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80028BC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80028BCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028BD0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80028BD4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80028BD8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80028BDC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80028BE0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80028BE4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80028BE8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80028BEC: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x80028BF0: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x80028BF4: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x80028BF8: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x80028BFC: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x80028C00: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x80028C04: sw          $a0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r4;
    // 0x80028C08: sw          $a1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r5;
    // 0x80028C0C: sw          $a2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r6;
    // 0x80028C10: sw          $a3, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r7;
    // 0x80028C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028C18: swc1        $f2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f2.u32l;
    // 0x80028C1C: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x80028C20: swc1        $f2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f2.u32l;
    // 0x80028C24: swc1        $f2, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f2.u32l;
    // 0x80028C28: bgez        $zero, L_80028C40
    if (SIGNED(0) >= 0) {
        // 0x80028C2C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80028C40;
    }
    // 0x80028C2C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028C30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80028C34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80028C38: nop

    // 0x80028C3C: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80028C40:
    // 0x80028C40: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80028C44: lw          $v1, -0x70A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X70A0);
    // 0x80028C48: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x80028C4C: swc1        $f0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f0.u32l;
    // 0x80028C50: swc1        $f0, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f0.u32l;
    // 0x80028C54: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    // 0x80028C58: swc1        $f12, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f12.u32l;
    // 0x80028C5C: bne         $v1, $zero, L_80028C9C
    if (ctx->r3 != 0) {
        // 0x80028C60: sh          $zero, 0x10C($sp)
        MEM_H(0X10C, ctx->r29) = 0;
            goto L_80028C9C;
    }
    // 0x80028C60: sh          $zero, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = 0;
    // 0x80028C64: addiu       $t7, $sp, 0xD4
    ctx->r15 = ADD32(ctx->r29, 0XD4);
    // 0x80028C68: addiu       $t9, $t7, 0x48
    ctx->r25 = ADD32(ctx->r15, 0X48);
    // 0x80028C6C: lw          $t6, 0x1A0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A0);
L_80028C70:
    // 0x80028C70: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80028C74: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80028C78: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80028C7C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80028C80: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80028C84: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80028C88: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80028C8C: bne         $t7, $t9, L_80028C70
    if (ctx->r15 != ctx->r25) {
        // 0x80028C90: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80028C70;
    }
    // 0x80028C90: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80028C94: b           L_80029528
    // 0x80028C98: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_80029528;
    // 0x80028C98: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_80028C9C:
    // 0x80028C9C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028CA0: lwc1        $f8, -0x3E48($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3E48);
    // 0x80028CA4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028CA8: lwc1        $f10, -0x3E44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3E44);
    // 0x80028CAC: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x80028CB0: lwc1        $f4, 0x1B0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x80028CB4: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80028CB8: swc1        $f10, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f10.u32l;
    // 0x80028CBC: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80028CC0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80028CC4: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x80028CC8: swc1        $f10, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f10.u32l;
    // 0x80028CCC: lwc1        $f10, 0x1A8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x80028CD0: lwc1        $f8, 0x1A4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x80028CD4: swc1        $f6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f6.u32l;
    // 0x80028CD8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80028CDC: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80028CE0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80028CE4: mtc1        $zero, $f15
    ctx->f_odd[(15 - 1) * 2] = 0;
    // 0x80028CE8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80028CEC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80028CF0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80028CF4: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80028CF8: lw          $a2, -0x709C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X709C);
    // 0x80028CFC: swc1        $f6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f6.u32l;
    // 0x80028D00: ldc1        $f28, -0x3E40($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0X3E40);
    // 0x80028D04: lwc1        $f30, 0x1AC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x80028D08: addiu       $s1, $zero, 0x14
    ctx->r17 = ADD32(0, 0X14);
    // 0x80028D0C: ori         $t5, $zero, 0xFFFF
    ctx->r13 = 0 | 0XFFFF;
    // 0x80028D10: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x80028D14: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80028D18: swc1        $f10, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f10.u32l;
    // 0x80028D1C: swc1        $f8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
L_80028D20:
    // 0x80028D20: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028D24: lwc1        $f8, 0x1A4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x80028D28: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80028D2C: mflo        $t8
    ctx->r24 = lo;
    // 0x80028D30: addu        $v1, $a2, $t8
    ctx->r3 = ADD32(ctx->r6, ctx->r24);
    // 0x80028D34: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x80028D38: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028D3C: mflo        $t9
    ctx->r25 = lo;
    // 0x80028D40: addu        $a0, $a2, $t9
    ctx->r4 = ADD32(ctx->r6, ctx->r25);
    // 0x80028D44: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x80028D48: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80028D4C: nop

    // 0x80028D50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028D54: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80028D58: nop

    // 0x80028D5C: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028D60: nop
    
            goto L_80028E14;
    }
    // 0x80028D60: nop

    // 0x80028D64: lh          $t6, 0xC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC);
    // 0x80028D68: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80028D6C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80028D70: nop

    // 0x80028D74: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028D78: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x80028D7C: nop

    // 0x80028D80: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028D84: nop
    
            goto L_80028E14;
    }
    // 0x80028D84: nop

    // 0x80028D88: lh          $t8, 0xA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA);
    // 0x80028D8C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80028D90: nop

    // 0x80028D94: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028D98: c.lt.s      $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f4.fl < ctx->f30.fl;
    // 0x80028D9C: nop

    // 0x80028DA0: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028DA4: nop
    
            goto L_80028E14;
    }
    // 0x80028DA4: nop

    // 0x80028DA8: lh          $t9, 0x10($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X10);
    // 0x80028DAC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80028DB0: nop

    // 0x80028DB4: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028DB8: c.lt.s      $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f30.fl < ctx->f6.fl;
    // 0x80028DBC: nop

    // 0x80028DC0: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028DC4: nop
    
            goto L_80028E14;
    }
    // 0x80028DC4: nop

    // 0x80028DC8: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x80028DCC: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80028DD0: lwc1        $f6, 0x1A8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x80028DD4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80028DD8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80028DDC: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028DE0: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80028DE4: nop

    // 0x80028DE8: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028DEC: nop
    
            goto L_80028E14;
    }
    // 0x80028DEC: nop

    // 0x80028DF0: lh          $t6, 0xE($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XE);
    // 0x80028DF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80028DF8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80028DFC: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80028E00: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028E04: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80028E08: nop

    // 0x80028E0C: bc1fl       L_80028F58
    if (!c1cs) {
        // 0x80028E10: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_80028F58;
    }
    goto skip_0;
    // 0x80028E10: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    skip_0:
L_80028E14:
    // 0x80028E14: bne         $t5, $a1, L_80028E54
    if (ctx->r13 != ctx->r5) {
        // 0x80028E18: lwc1        $f0, 0x140($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
            goto L_80028E54;
    }
    // 0x80028E18: lwc1        $f0, 0x140($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80028E1C: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x80028E20: addiu       $t6, $t9, 0x48
    ctx->r14 = ADD32(ctx->r25, 0X48);
    // 0x80028E24: lw          $t8, 0x1A0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A0);
L_80028E28:
    // 0x80028E28: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80028E2C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80028E30: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80028E34: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x80028E38: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80028E3C: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80028E40: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80028E44: bne         $t9, $t6, L_80028E28
    if (ctx->r25 != ctx->r14) {
        // 0x80028E48: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80028E28;
    }
    // 0x80028E48: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80028E4C: b           L_80029528
    // 0x80028E50: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_80029528;
    // 0x80028E50: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_80028E54:
    // 0x80028E54: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028E58: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x80028E5C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80028E60: mflo        $t7
    ctx->r15 = lo;
    // 0x80028E64: addu        $t6, $a2, $t7
    ctx->r14 = ADD32(ctx->r6, ctx->r15);
    // 0x80028E68: lhu         $a1, 0x0($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X0);
    // 0x80028E6C: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028E70: mflo        $t9
    ctx->r25 = lo;
    // 0x80028E74: addu        $a0, $a2, $t9
    ctx->r4 = ADD32(ctx->r6, ctx->r25);
    // 0x80028E78: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x80028E7C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80028E80: nop

    // 0x80028E84: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028E88: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80028E8C: nop

    // 0x80028E90: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028E94: nop
    
            goto L_80028E14;
    }
    // 0x80028E94: nop

    // 0x80028E98: lh          $t7, 0xC($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XC);
    // 0x80028E9C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80028EA0: nop

    // 0x80028EA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028EA8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80028EAC: nop

    // 0x80028EB0: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028EB4: nop
    
            goto L_80028E14;
    }
    // 0x80028EB4: nop

    // 0x80028EB8: lh          $t6, 0xA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA);
    // 0x80028EBC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80028EC0: nop

    // 0x80028EC4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028EC8: c.lt.s      $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl < ctx->f30.fl;
    // 0x80028ECC: nop

    // 0x80028ED0: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028ED4: nop
    
            goto L_80028E14;
    }
    // 0x80028ED4: nop

    // 0x80028ED8: lh          $t9, 0x10($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X10);
    // 0x80028EDC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80028EE0: nop

    // 0x80028EE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80028EE8: c.lt.s      $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f30.fl < ctx->f6.fl;
    // 0x80028EEC: nop

    // 0x80028EF0: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028EF4: nop
    
            goto L_80028E14;
    }
    // 0x80028EF4: nop

    // 0x80028EF8: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    // 0x80028EFC: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80028F00: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80028F04: nop

    // 0x80028F08: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80028F0C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80028F10: nop

    // 0x80028F14: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028F18: nop
    
            goto L_80028E14;
    }
    // 0x80028F18: nop

    // 0x80028F1C: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80028F20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80028F24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80028F28: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80028F2C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80028F30: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80028F34: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80028F38: nop

    // 0x80028F3C: bc1t        L_80028E14
    if (c1cs) {
        // 0x80028F40: nop
    
            goto L_80028E14;
    }
    // 0x80028F40: nop

    // 0x80028F44: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80028F48: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80028F4C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80028F50: addu        $v1, $a2, $t6
    ctx->r3 = ADD32(ctx->r6, ctx->r14);
    // 0x80028F54: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
L_80028F58:
    // 0x80028F58: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80028F5C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80028F60: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x80028F64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80028F68: addiu       $v0, $s2, 0x3
    ctx->r2 = ADD32(ctx->r18, 0X3);
    // 0x80028F6C: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80028F70: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80028F74: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x80028F78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80028F7C: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x80028F80: sh          $t9, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r25;
    // 0x80028F84: swc1        $f6, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f6.u32l;
L_80028F88:
    // 0x80028F88: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028F8C: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80028F90: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80028F94: mflo        $t7
    ctx->r15 = lo;
    // 0x80028F98: addu        $v1, $a2, $t7
    ctx->r3 = ADD32(ctx->r6, ctx->r15);
    // 0x80028F9C: lhu         $s2, 0x0($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X0);
    // 0x80028FA0: multu       $s2, $s1
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028FA4: mflo        $t6
    ctx->r14 = lo;
    // 0x80028FA8: addu        $s3, $s0, $t6
    ctx->r19 = ADD32(ctx->r16, ctx->r14);
    // 0x80028FAC: lwc1        $f16, 0x0($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80028FB0: lwc1        $f18, 0x4($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80028FB4: lwc1        $f20, 0x8($s3)
    ctx->f20.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80028FB8: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80028FBC: lwc1        $f22, 0xC($s3)
    ctx->f22.u32l = MEM_W(ctx->r19, 0XC);
    // 0x80028FC0: lbu         $s4, 0x10($s3)
    ctx->r20 = MEM_BU(ctx->r19, 0X10);
    // 0x80028FC4: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x80028FC8: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    // 0x80028FCC: mul.s       $f4, $f30, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x80028FD0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80028FD4: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x80028FD8: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80028FDC: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80028FE0: add.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x80028FE4: beq         $s4, $zero, L_80029000
    if (ctx->r20 == 0) {
        // 0x80028FE8: mov.s       $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
            goto L_80029000;
    }
    // 0x80028FE8: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
    // 0x80028FEC: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x80028FF0: c.lt.d      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.d < ctx->f14.d;
    // 0x80028FF4: nop

    // 0x80028FF8: bc1fl       L_80029194
    if (!c1cs) {
        // 0x80028FFC: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_80029194;
    }
    goto skip_1;
    // 0x80028FFC: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_1:
L_80029000:
    // 0x80029000: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80029004: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80029008: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8002900C: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x80029010: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80029014: mul.s       $f10, $f20, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x80029018: add.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002901C: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x80029020: c.eq.d      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.d == ctx->f8.d;
    // 0x80029024: nop

    // 0x80029028: bc1fl       L_80029040
    if (!c1cs) {
        // 0x8002902C: neg.s       $f4, $f22
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = -ctx->f22.fl;
            goto L_80029040;
    }
    goto skip_2;
    // 0x8002902C: neg.s       $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = -ctx->f22.fl;
    skip_2:
    // 0x80029030: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80029034: b           L_80029048
    // 0x80029038: nop

        goto L_80029048;
    // 0x80029038: nop

    // 0x8002903C: neg.s       $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = -ctx->f22.fl;
L_80029040:
    // 0x80029040: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80029044: div.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
L_80029048:
    // 0x80029048: bne         $s5, $zero, L_80029150
    if (ctx->r21 != 0) {
        // 0x8002904C: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_80029150;
    }
    // 0x8002904C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029050: ldc1        $f10, -0x3E38($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3E38);
    // 0x80029054: cvt.d.s     $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f8.d = CVT_D_S(ctx->f26.fl);
    // 0x80029058: c.eq.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d == ctx->f8.d;
    // 0x8002905C: nop

    // 0x80029060: bc1t        L_800290D0
    if (c1cs) {
        // 0x80029064: nop
    
            goto L_800290D0;
    }
    // 0x80029064: nop

    // 0x80029068: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x8002906C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029070: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x80029074: nop

    // 0x80029078: bc1f        L_800290D0
    if (!c1cs) {
        // 0x8002907C: nop
    
            goto L_800290D0;
    }
    // 0x8002907C: nop

    // 0x80029080: ldc1        $f4, -0x3E30($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3E30);
    // 0x80029084: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80029088: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x8002908C: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x80029090: nop

    // 0x80029094: bc1f        L_800290D0
    if (!c1cs) {
        // 0x80029098: nop
    
            goto L_800290D0;
    }
    // 0x80029098: nop

    // 0x8002909C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800290A0: lwc1        $f10, 0x1B4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x800290A4: lwc1        $f6, 0x13C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x800290A8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800290AC: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800290B0: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800290B4: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x800290B8: lwc1        $f8, 0x1B8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x800290BC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800290C0: add.s       $f4, $f30, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f30.fl + ctx->f8.fl;
    // 0x800290C4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800290C8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800290CC: add.s       $f24, $f8, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f22.fl;
L_800290D0:
    // 0x800290D0: beql        $a3, $zero, L_80029154
    if (ctx->r7 == 0) {
        // 0x800290D4: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_80029154;
    }
    goto skip_3;
    // 0x800290D4: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    skip_3:
    // 0x800290D8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x800290DC: lwc1        $f10, 0x144($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X144);
    // 0x800290E0: c.eq.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d == ctx->f4.d;
    // 0x800290E4: nop

    // 0x800290E8: bc1fl       L_80029154
    if (!c1cs) {
        // 0x800290EC: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_80029154;
    }
    goto skip_4;
    // 0x800290EC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    skip_4:
    // 0x800290F0: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x800290F4: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x800290F8: c.lt.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d < ctx->f6.d;
    // 0x800290FC: nop

    // 0x80029100: bc1fl       L_80029154
    if (!c1cs) {
        // 0x80029104: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_80029154;
    }
    goto skip_5;
    // 0x80029104: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    skip_5:
    // 0x80029108: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x8002910C: lwc1        $f4, 0x150($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X150);
    // 0x80029110: bc1fl       L_80029154
    if (!c1cs) {
        // 0x80029114: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_80029154;
    }
    goto skip_6;
    // 0x80029114: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    skip_6:
    // 0x80029118: c.eq.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl == ctx->f18.fl;
    // 0x8002911C: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80029120: bc1fl       L_80029154
    if (!c1cs) {
        // 0x80029124: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_80029154;
    }
    goto skip_7;
    // 0x80029124: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    skip_7:
    // 0x80029128: c.eq.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl == ctx->f20.fl;
    // 0x8002912C: lwc1        $f6, 0x148($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80029130: bc1fl       L_80029154
    if (!c1cs) {
        // 0x80029134: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_80029154;
    }
    goto skip_8;
    // 0x80029134: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    skip_8:
    // 0x80029138: c.eq.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl == ctx->f22.fl;
    // 0x8002913C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80029140: bc1fl       L_80029154
    if (!c1cs) {
        // 0x80029144: cvt.d.s     $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
            goto L_80029154;
    }
    goto skip_9;
    // 0x80029144: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    skip_9:
    // 0x80029148: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8002914C: nop

L_80029150:
    // 0x80029150: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
L_80029154:
    // 0x80029154: c.lt.d      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.d < ctx->f8.d;
    // 0x80029158: nop

    // 0x8002915C: bc1fl       L_80029194
    if (!c1cs) {
        // 0x80029160: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_80029194;
    }
    goto skip_10;
    // 0x80029160: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_10:
    // 0x80029164: c.le.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl <= ctx->f26.fl;
    // 0x80029168: nop

    // 0x8002916C: bc1fl       L_80029194
    if (!c1cs) {
        // 0x80029170: cvt.d.s     $f4, $f24
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
            goto L_80029194;
    }
    goto skip_11;
    // 0x80029170: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    skip_11:
    // 0x80029174: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x80029178: swc1        $f16, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f16.u32l;
    // 0x8002917C: swc1        $f18, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f18.u32l;
    // 0x80029180: swc1        $f20, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f20.u32l;
    // 0x80029184: swc1        $f22, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f22.u32l;
    // 0x80029188: swc1        $f24, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f24.u32l;
    // 0x8002918C: andi        $t0, $s4, 0xFF
    ctx->r8 = ctx->r20 & 0XFF;
    // 0x80029190: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
L_80029194:
    // 0x80029194: c.lt.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d < ctx->f14.d;
    // 0x80029198: nop

    // 0x8002919C: bc1fl       L_800293E8
    if (!c1cs) {
        // 0x800291A0: lh          $s2, 0x4($v1)
        ctx->r18 = MEM_H(ctx->r3, 0X4);
            goto L_800293E8;
    }
    goto skip_12;
    // 0x800291A0: lh          $s2, 0x4($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X4);
    skip_12:
    // 0x800291A4: lh          $s2, 0x2($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X2);
    // 0x800291A8: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x800291AC: bne         $s2, $zero, L_800293DC
    if (ctx->r18 != 0) {
        // 0x800291B0: nop
    
            goto L_800293DC;
    }
    // 0x800291B0: nop

    // 0x800291B4: mul.s       $f2, $f10, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x800291B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800291BC: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x800291C0: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x800291C4: lwc1        $f4, 0x1B0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x800291C8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800291CC: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x800291D0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x800291D4: nop

    // 0x800291D8: bc1fl       L_800291F0
    if (!c1cs) {
        // 0x800291DC: mov.s       $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
            goto L_800291F0;
    }
    goto skip_13;
    // 0x800291DC: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    skip_13:
    // 0x800291E0: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x800291E4: b           L_800291F4
    // 0x800291E8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_800291F4;
    // 0x800291E8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x800291EC: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
L_800291F0:
    // 0x800291F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800291F4:
    // 0x800291F4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x800291F8: c.lt.d      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.d < ctx->f28.d;
    // 0x800291FC: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80029200: bc1f        L_80029244
    if (!c1cs) {
        // 0x80029204: nop
    
            goto L_80029244;
    }
    // 0x80029204: nop

    // 0x80029208: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8002920C: c.eq.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d == ctx->f10.d;
    // 0x80029210: nop

    // 0x80029214: bc1t        L_80029244
    if (c1cs) {
        // 0x80029218: nop
    
            goto L_80029244;
    }
    // 0x80029218: nop

    // 0x8002921C: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80029220: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029224: c.le.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d <= ctx->f6.d;
    // 0x80029228: nop

    // 0x8002922C: bc1f        L_80029240
    if (!c1cs) {
        // 0x80029230: nop
    
            goto L_80029240;
    }
    // 0x80029230: nop

    // 0x80029234: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029238: b           L_80029244
    // 0x8002923C: lwc1        $f18, -0x3E28($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3E28);
        goto L_80029244;
    // 0x8002923C: lwc1        $f18, -0x3E28($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3E28);
L_80029240:
    // 0x80029240: lwc1        $f18, -0x3E24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3E24);
L_80029244:
    // 0x80029244: mul.s       $f2, $f8, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x80029248: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002924C: lwc1        $f6, 0x1B4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x80029250: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80029254: nop

    // 0x80029258: bc1fl       L_80029270
    if (!c1cs) {
        // 0x8002925C: mov.s       $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
            goto L_80029270;
    }
    goto skip_14;
    // 0x8002925C: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    skip_14:
    // 0x80029260: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x80029264: b           L_80029274
    // 0x80029268: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_80029274;
    // 0x80029268: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x8002926C: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
L_80029270:
    // 0x80029270: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80029274:
    // 0x80029274: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80029278: c.lt.d      $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f10.d < ctx->f28.d;
    // 0x8002927C: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x80029280: bc1f        L_800292C4
    if (!c1cs) {
        // 0x80029284: nop
    
            goto L_800292C4;
    }
    // 0x80029284: nop

    // 0x80029288: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8002928C: c.eq.d      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.d == ctx->f8.d;
    // 0x80029290: nop

    // 0x80029294: bc1t        L_800292C4
    if (c1cs) {
        // 0x80029298: nop
    
            goto L_800292C4;
    }
    // 0x80029298: nop

    // 0x8002929C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x800292A0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800292A4: c.le.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d <= ctx->f4.d;
    // 0x800292A8: nop

    // 0x800292AC: bc1f        L_800292C0
    if (!c1cs) {
        // 0x800292B0: nop
    
            goto L_800292C0;
    }
    // 0x800292B0: nop

    // 0x800292B4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800292B8: b           L_800292C4
    // 0x800292BC: lwc1        $f16, -0x3E20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3E20);
        goto L_800292C4;
    // 0x800292BC: lwc1        $f16, -0x3E20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3E20);
L_800292C0:
    // 0x800292C0: lwc1        $f16, -0x3E1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3E1C);
L_800292C4:
    // 0x800292C4: mul.s       $f2, $f10, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x800292C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800292CC: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x800292D0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x800292D4: nop

    // 0x800292D8: bc1fl       L_800292F0
    if (!c1cs) {
        // 0x800292DC: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_800292F0;
    }
    goto skip_15;
    // 0x800292DC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_15:
    // 0x800292E0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x800292E4: b           L_800292F4
    // 0x800292E8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_800292F4;
    // 0x800292E8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x800292EC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_800292F0:
    // 0x800292F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800292F4:
    // 0x800292F4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x800292F8: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x800292FC: c.lt.d      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.d < ctx->f28.d;
    // 0x80029300: lwc1        $f8, 0x140($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80029304: bc1fl       L_8002934C
    if (!c1cs) {
        // 0x80029308: lwc1        $f10, 0x13C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
            goto L_8002934C;
    }
    goto skip_16;
    // 0x80029308: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    skip_16:
    // 0x8002930C: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80029310: c.eq.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d == ctx->f10.d;
    // 0x80029314: nop

    // 0x80029318: bc1tl       L_8002934C
    if (c1cs) {
        // 0x8002931C: lwc1        $f10, 0x13C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
            goto L_8002934C;
    }
    goto skip_17;
    // 0x8002931C: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    skip_17:
    // 0x80029320: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80029324: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80029328: c.le.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d <= ctx->f6.d;
    // 0x8002932C: nop

    // 0x80029330: bc1f        L_80029344
    if (!c1cs) {
        // 0x80029334: nop
    
            goto L_80029344;
    }
    // 0x80029334: nop

    // 0x80029338: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002933C: b           L_80029348
    // 0x80029340: lwc1        $f12, -0x3E18($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3E18);
        goto L_80029348;
    // 0x80029340: lwc1        $f12, -0x3E18($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3E18);
L_80029344:
    // 0x80029344: lwc1        $f12, -0x3E14($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3E14);
L_80029348:
    // 0x80029348: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
L_8002934C:
    // 0x8002934C: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80029350: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80029354: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80029358: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8002935C: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
    // 0x80029360: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80029364: add.s       $f30, $f12, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f30.fl = ctx->f12.fl + ctx->f30.fl;
    // 0x80029368: bne         $t9, $zero, L_800293B0
    if (ctx->r25 != 0) {
        // 0x8002936C: swc1        $f6, 0x13C($sp)
        MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
            goto L_800293B0;
    }
    // 0x8002936C: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x80029370: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80029374: sh          $t8, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r24;
    // 0x80029378: addiu       $t6, $sp, 0xD4
    ctx->r14 = ADD32(ctx->r29, 0XD4);
    // 0x8002937C: addiu       $t8, $t6, 0x48
    ctx->r24 = ADD32(ctx->r14, 0X48);
    // 0x80029380: lw          $t7, 0x1A0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A0);
L_80029384:
    // 0x80029384: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80029388: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8002938C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80029390: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80029394: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80029398: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8002939C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x800293A0: bne         $t6, $t8, L_80029384
    if (ctx->r14 != ctx->r24) {
        // 0x800293A4: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80029384;
    }
    // 0x800293A4: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x800293A8: b           L_80029528
    // 0x800293AC: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_80029528;
    // 0x800293AC: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_800293B0:
    // 0x800293B0: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x800293B4: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x800293B8: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x800293BC: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x800293C0: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x800293C4: lwc1        $f8, 0x158($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X158);
    // 0x800293C8: swc1        $f4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f4.u32l;
    // 0x800293CC: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x800293D0: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x800293D4: b           L_80028F88
    // 0x800293D8: swc1        $f8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f8.u32l;
        goto L_80028F88;
    // 0x800293D8: swc1        $f8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f8.u32l;
L_800293DC:
    // 0x800293DC: b           L_80028F88
    // 0x800293E0: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_80028F88;
    // 0x800293E0: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x800293E4: lh          $s2, 0x4($v1)
    ctx->r18 = MEM_H(ctx->r3, 0X4);
L_800293E8:
    // 0x800293E8: bne         $s2, $zero, L_80029520
    if (ctx->r18 != 0) {
        // 0x800293EC: addiu       $at, $zero, 0x7FFF
        ctx->r1 = ADD32(0, 0X7FFF);
            goto L_80029520;
    }
    // 0x800293EC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800293F0: bne         $a3, $at, L_800294CC
    if (ctx->r7 != ctx->r1) {
        // 0x800293F4: andi        $v0, $a1, 0xFFFF
        ctx->r2 = ctx->r5 & 0XFFFF;
            goto L_800294CC;
    }
    // 0x800293F4: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x800293F8: bne         $t2, $zero, L_80029420
    if (ctx->r10 != 0) {
        // 0x800293FC: lwc1        $f4, 0x16C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
            goto L_80029420;
    }
    // 0x800293FC: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x80029400: lwc1        $f10, 0x168($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X168);
    // 0x80029404: lwc1        $f6, 0x164($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X164);
    // 0x80029408: lwc1        $f8, 0x160($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X160);
    // 0x8002940C: swc1        $f4, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f4.u32l;
    // 0x80029410: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x80029414: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x80029418: swc1        $f6, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f6.u32l;
    // 0x8002941C: swc1        $f8, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f8.u32l;
L_80029420:
    // 0x80029420: lwc1        $f4, 0x140($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80029424: lwc1        $f10, 0x1A4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x80029428: lwc1        $f6, 0x13C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8002942C: lwc1        $f8, 0x1A8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x80029430: sub.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80029434: lwc1        $f4, 0x1AC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x80029438: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8002943C: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80029440: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80029444: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x80029448: sub.s       $f16, $f30, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f30.fl - ctx->f4.fl;
    // 0x8002944C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80029450: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80029454: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80029458: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8002945C: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80029460: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80029464: nop

    // 0x80029468: bc1tl       L_8002948C
    if (c1cs) {
        // 0x8002946C: lwc1        $f4, 0x154($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
            goto L_8002948C;
    }
    goto skip_18;
    // 0x8002946C: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    skip_18:
    // 0x80029470: ldc1        $f6, -0x3E10($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3E10);
    // 0x80029474: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80029478: c.eq.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d == ctx->f8.d;
    // 0x8002947C: nop

    // 0x80029480: bc1f        L_800294CC
    if (!c1cs) {
        // 0x80029484: nop
    
            goto L_800294CC;
    }
    // 0x80029484: nop

    // 0x80029488: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
L_8002948C:
    // 0x8002948C: lwc1        $f10, 0x150($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X150);
    // 0x80029490: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x80029494: lwc1        $f8, 0x148($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80029498: lhu         $t8, 0x126($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X126);
    // 0x8002949C: sh          $t9, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r25;
    // 0x800294A0: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x800294A4: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    // 0x800294A8: swc1        $f2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f2.u32l;
    // 0x800294AC: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
    // 0x800294B0: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    // 0x800294B4: sb          $t2, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r10;
    // 0x800294B8: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
    // 0x800294BC: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x800294C0: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x800294C4: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x800294C8: sh          $t8, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r24;
L_800294CC:
    // 0x800294CC: bne         $t5, $a1, L_8002950C
    if (ctx->r13 != ctx->r5) {
        // 0x800294D0: lwc1        $f4, 0x1A4($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1A4);
            goto L_8002950C;
    }
    // 0x800294D0: lwc1        $f4, 0x1A4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x800294D4: addiu       $t7, $sp, 0xD4
    ctx->r15 = ADD32(ctx->r29, 0XD4);
    // 0x800294D8: addiu       $t8, $t7, 0x48
    ctx->r24 = ADD32(ctx->r15, 0X48);
    // 0x800294DC: lw          $t6, 0x1A0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A0);
L_800294E0:
    // 0x800294E0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800294E4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800294E8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800294EC: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x800294F0: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800294F4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x800294F8: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800294FC: bne         $t7, $t8, L_800294E0
    if (ctx->r15 != ctx->r24) {
        // 0x80029500: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_800294E0;
    }
    // 0x80029500: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80029504: b           L_80029528
    // 0x80029508: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
        goto L_80029528;
    // 0x80029508: lw          $v0, 0x1A0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1A0);
L_8002950C:
    // 0x8002950C: lwc1        $f10, 0x1A8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x80029510: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
    // 0x80029514: lwc1        $f30, 0x1AC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x80029518: b           L_80028D20
    // 0x8002951C: swc1        $f10, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f10.u32l;
        goto L_80028D20;
    // 0x8002951C: swc1        $f10, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f10.u32l;
L_80029520:
    // 0x80029520: b           L_80028F88
    // 0x80029524: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
        goto L_80028F88;
    // 0x80029524: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
L_80029528:
    // 0x80029528: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8002952C: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x80029530: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x80029534: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x80029538: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x8002953C: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x80029540: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80029544: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80029548: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8002954C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80029550: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80029554: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80029558: jr          $ra
    // 0x8002955C: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    TRACE_RETURN()
    return;
    // 0x8002955C: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
;}
RECOMP_FUNC void guPositionF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046940: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80046944: lwc1        $f0, -0x2C90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2C90);
    // 0x80046948: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8004694C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80046950: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80046954: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80046958: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8004695C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80046960: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80046964: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80046968: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x8004696C: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80046970: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046974: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80046978: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8004697C: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x80046980: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x80046984: swc1        $f0, -0x5EE0($at)
    MEM_W(-0X5EE0, ctx->r1) = ctx->f0.u32l;
    // 0x80046988: jal         0x800417F0
    // 0x8004698C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8004698C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80046990: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80046994: jal         0x800419B0
    // 0x80046998: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x80046998: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x8004699C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800469A0: jal         0x800417F0
    // 0x800469A4: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x800469A4: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x800469A8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x800469AC: jal         0x800419B0
    // 0x800469B0: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x800469B0: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_3:
    // 0x800469B4: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800469B8: jal         0x800417F0
    // 0x800469BC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x800469BC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x800469C0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800469C4: jal         0x800419B0
    // 0x800469C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x800469C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x800469CC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800469D0: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800469D4: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800469D8: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800469DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800469E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800469E4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800469E8: nop

    // 0x800469EC: mul.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x800469F0: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x800469F4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800469F8: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x800469FC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80046A00: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80046A04: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80046A08: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80046A0C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x80046A10: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80046A14: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x80046A18: mul.s       $f12, $f20, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80046A1C: nop

    // 0x80046A20: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80046A24: nop

    // 0x80046A28: mul.s       $f6, $f22, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x80046A2C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80046A30: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80046A34: nop

    // 0x80046A38: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80046A3C: nop

    // 0x80046A40: mul.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x80046A44: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x80046A48: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80046A4C: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80046A50: nop

    // 0x80046A54: mul.s       $f4, $f20, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80046A58: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x80046A5C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80046A60: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x80046A64: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80046A68: swc1        $f18, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f18.u32l;
    // 0x80046A6C: mul.s       $f12, $f22, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x80046A70: nop

    // 0x80046A74: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80046A78: nop

    // 0x80046A7C: mul.s       $f4, $f20, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x80046A80: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80046A84: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80046A88: nop

    // 0x80046A8C: mul.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80046A90: nop

    // 0x80046A94: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80046A98: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x80046A9C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80046AA0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80046AA4: nop

    // 0x80046AA8: mul.s       $f10, $f22, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x80046AAC: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x80046AB0: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80046AB4: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x80046AB8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80046ABC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80046AC0: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x80046AC4: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80046AC8: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x80046ACC: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80046AD0: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x80046AD4: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x80046AD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80046ADC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80046AE0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80046AE4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80046AE8: jr          $ra
    // 0x80046AEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80046AEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80023E40_24A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023E40: bgez        $a0, L_80023E50
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023E44: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80023E50;
    }
    // 0x80023E44: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023E48: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023E4C: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80023E50:
    // 0x80023E50: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023E54: addiu       $t8, $t8, -0x7170
    ctx->r24 = ADD32(ctx->r24, -0X7170);
    // 0x80023E58: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80023E5C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80023E60: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80023E64: bgez        $a0, L_80023E78
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023E68: andi        $t0, $a0, 0x7
        ctx->r8 = ctx->r4 & 0X7;
            goto L_80023E78;
    }
    // 0x80023E68: andi        $t0, $a0, 0x7
    ctx->r8 = ctx->r4 & 0X7;
    // 0x80023E6C: beq         $t0, $zero, L_80023E78
    if (ctx->r8 == 0) {
        // 0x80023E70: nop
    
            goto L_80023E78;
    }
    // 0x80023E70: nop

    // 0x80023E74: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_80023E78:
    // 0x80023E78: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80023E7C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80023E80: sllv        $t4, $t2, $t1
    ctx->r12 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x80023E84: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x80023E88: and         $t6, $t9, $t5
    ctx->r14 = ctx->r25 & ctx->r13;
    // 0x80023E8C: jr          $ra
    // 0x80023E90: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80023E90: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void guPerspective(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043250: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80043254: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80043258: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8004325C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80043260: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80043264: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80043268: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004326C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80043270: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80043274: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80043278: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8004327C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80043280: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80043284: jal         0x80043020
    // 0x80043288: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_0;
    // 0x80043288: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8004328C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80043290: jal         0x80043AA0
    // 0x80043294: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80043294: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x80043298: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004329C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800432A0: jr          $ra
    // 0x800432A4: nop

    TRACE_RETURN()
    return;
    // 0x800432A4: nop

;}
RECOMP_FUNC void func_8000E630_F230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000E630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E638: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000E63C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8000E640: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000E644: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000E648: jal         0x80003EA0
    // 0x8000E64C: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x8000E64C: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    after_0:
    // 0x8000E650: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E654: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000E658: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8000E65C: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x8000E660: jal         0x80003E10
    // 0x8000E664: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x8000E664: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    after_1:
    // 0x8000E668: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000E66C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8000E670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000E674: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8000E678: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x8000E67C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E684: jr          $ra
    // 0x8000E688: nop

    TRACE_RETURN()
    return;
    // 0x8000E688: nop

;}
RECOMP_FUNC void _filterBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051988: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005198C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051990: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x80051994: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x80051998: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8005199C: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x800519A0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800519A4: lui         $t2, 0xB00
    ctx->r10 = S32(0XB00 << 16);
    // 0x800519A8: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x800519AC: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x800519B0: ori         $t2, $t2, 0x20
    ctx->r10 = ctx->r10 | 0X20;
    // 0x800519B4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800519B8: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x800519BC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x800519C0: sw          $t2, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r10;
    // 0x800519C4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800519C8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800519CC: jal         0x80047710
    // 0x800519D0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800519D0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x800519D4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800519D8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800519DC: lui         $at, 0xE00
    ctx->r1 = S32(0XE00 << 16);
    // 0x800519E0: addiu       $v1, $a3, 0x10
    ctx->r3 = ADD32(ctx->r7, 0X10);
    // 0x800519E4: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x800519E8: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x800519EC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x800519F0: lw          $t4, 0x2C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X2C);
    // 0x800519F4: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x800519F8: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x800519FC: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80051A00: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80051A04: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80051A08: or          $t1, $t8, $t9
    ctx->r9 = ctx->r24 | ctx->r25;
    // 0x80051A0C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80051A10: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x80051A14: jal         0x80047710
    // 0x80051A18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80051A18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80051A1C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80051A20: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80051A24: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80051A28: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x80051A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051A30: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80051A34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80051A38: jr          $ra
    // 0x80051A3C: nop

    TRACE_RETURN()
    return;
    // 0x80051A3C: nop

;}
RECOMP_FUNC void alUnlink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800475F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800475F4: beql        $v0, $zero, L_80047608
    if (ctx->r2 == 0) {
        // 0x800475F8: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_80047608;
    }
    goto skip_0;
    // 0x800475F8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x800475FC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80047600: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80047604: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_80047608:
    // 0x80047608: beq         $v0, $zero, L_80047618
    if (ctx->r2 == 0) {
        // 0x8004760C: nop
    
            goto L_80047618;
    }
    // 0x8004760C: nop

    // 0x80047610: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80047614: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80047618:
    // 0x80047618: jr          $ra
    // 0x8004761C: nop

    TRACE_RETURN()
    return;
    // 0x8004761C: nop

;}
RECOMP_FUNC void func_8003F43C_4003C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F43C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F444: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F448: jal         0x80034EF8
    // 0x8003F44C: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x8003F44C: lw          $a0, 0x7740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7740);
    after_0:
    // 0x8003F450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F458: jr          $ra
    // 0x8003F45C: nop

    TRACE_RETURN()
    return;
    // 0x8003F45C: nop

;}
RECOMP_FUNC void _allocatePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80048214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048218: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8004821C: lw          $a3, 0x14($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X14);
    // 0x80048220: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80048224: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80048228: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8004822C: beq         $a3, $zero, L_80048264
    if (ctx->r7 == 0) {
        // 0x80048230: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80048264;
    }
    // 0x80048230: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80048234: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x80048238: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8004823C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80048240: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80048244: jal         0x800475F0
    // 0x80048248: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80048248: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8004824C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80048250: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80048254: jal         0x80047620
    // 0x80048258: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80048258: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_1:
    // 0x8004825C: b           L_800482E4
    // 0x80048260: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_800482E4;
    // 0x80048260: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_80048264:
    // 0x80048264: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80048268: beq         $a3, $zero, L_8004829C
    if (ctx->r7 == 0) {
        // 0x8004826C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8004829C;
    }
    // 0x8004826C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80048270: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x80048274: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80048278: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004827C: jal         0x800475F0
    // 0x80048280: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    alUnlink(rdram, ctx);
        goto after_2;
    // 0x80048280: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80048284: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80048288: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8004828C: jal         0x80047620
    // 0x80048290: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    alLink(rdram, ctx);
        goto after_3;
    // 0x80048290: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x80048294: b           L_800482E4
    // 0x80048298: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_800482E4;
    // 0x80048298: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8004829C:
    // 0x8004829C: lw          $a3, 0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XC);
    // 0x800482A0: beql        $a3, $zero, L_800482E8
    if (ctx->r7 == 0) {
        // 0x800482A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800482E8;
    }
    goto skip_0;
    // 0x800482A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800482A8: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
L_800482AC:
    // 0x800482AC: lh          $t9, 0x16($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X16);
    // 0x800482B0: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800482B4: bnel        $at, $zero, L_800482DC
    if (ctx->r1 != 0) {
        // 0x800482B8: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_800482DC;
    }
    goto skip_1;
    // 0x800482B8: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x800482BC: lw          $t1, 0xD8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XD8);
    // 0x800482C0: bnel        $t1, $zero, L_800482DC
    if (ctx->r9 != 0) {
        // 0x800482C4: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_800482DC;
    }
    goto skip_2;
    // 0x800482C4: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_2:
    // 0x800482C8: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x800482CC: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x800482D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800482D4: lh          $a2, 0x16($t2)
    ctx->r6 = MEM_H(ctx->r10, 0X16);
    // 0x800482D8: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_800482DC:
    // 0x800482DC: bnel        $a3, $zero, L_800482AC
    if (ctx->r7 != 0) {
        // 0x800482E0: lw          $t8, 0x8($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X8);
            goto L_800482AC;
    }
    goto skip_3;
    // 0x800482E0: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    skip_3:
L_800482E4:
    // 0x800482E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800482E8:
    // 0x800482E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800482EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800482F0: jr          $ra
    // 0x800482F4: nop

    TRACE_RETURN()
    return;
    // 0x800482F4: nop

;}
RECOMP_FUNC void func_800011A0_1DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800011A0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800011A4: addiu       $v1, $v1, -0x3A34
    ctx->r3 = ADD32(ctx->r3, -0X3A34);
    // 0x800011A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800011AC: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x800011B0: ori         $t7, $t7, 0x6
    ctx->r15 = ctx->r15 | 0X6;
    // 0x800011B4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800011B8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800011BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800011C0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800011C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800011C8: lui         $t6, 0x2D
    ctx->r14 = S32(0X2D << 16);
    // 0x800011CC: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x800011D0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800011D4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800011D8: ori         $t9, $t9, 0x406
    ctx->r25 = ctx->r25 | 0X406;
    // 0x800011DC: addiu       $t6, $t6, 0x1800
    ctx->r14 = ADD32(ctx->r14, 0X1800);
    // 0x800011E0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800011E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800011E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800011EC: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x800011F0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800011F4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800011F8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800011FC: ori         $t8, $t8, 0x806
    ctx->r24 = ctx->r24 | 0X806;
    // 0x80001200: addiu       $t4, $t4, -0x3A38
    ctx->r12 = ADD32(ctx->r12, -0X3A38);
    // 0x80001204: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80001208: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x8000120C: lui         $t5, 0x3
    ctx->r13 = S32(0X3 << 16);
    // 0x80001210: ori         $t5, $t5, 0x8000
    ctx->r13 = ctx->r13 | 0X8000;
    // 0x80001214: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80001218: lh          $t7, 0x2DB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2DB0);
    // 0x8000121C: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80001220: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80001224: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80001228: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8000122C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80001230: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80001234: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80001238: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000123C: sll         $t8, $t8, 11
    ctx->r24 = S32(ctx->r24 << 11);
    // 0x80001240: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80001244: addiu       $t6, $t6, 0x1000
    ctx->r14 = ADD32(ctx->r14, 0X1000);
    // 0x80001248: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8000124C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80001250: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80001254: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x80001258: ori         $t9, $t9, 0x1006
    ctx->r25 = ctx->r25 | 0X1006;
    // 0x8000125C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80001260: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80001264: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80001268: lw          $a3, 0x0($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X0);
    // 0x8000126C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80001270: ori         $at, $at, 0xD6D8
    ctx->r1 = ctx->r1 | 0XD6D8;
    // 0x80001274: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x80001278: lh          $t7, 0x2DB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2DB2);
    // 0x8000127C: multu       $t7, $at
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80001280: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80001284: mflo        $t8
    ctx->r24 = lo;
    // 0x80001288: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x8000128C: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x80001290: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80001294: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80001298: lui         $t9, 0x30
    ctx->r25 = S32(0X30 << 16);
    // 0x8000129C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x800012A0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800012A4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800012A8: ori         $t8, $t8, 0x1406
    ctx->r24 = ctx->r24 | 0X1406;
    // 0x800012AC: addiu       $t9, $t9, 0x1000
    ctx->r25 = ADD32(ctx->r25, 0X1000);
    // 0x800012B0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800012B4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800012B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800012BC: lui         $t8, 0x32
    ctx->r24 = S32(0X32 << 16);
    // 0x800012C0: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x800012C4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800012C8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800012CC: ori         $t7, $t7, 0x1806
    ctx->r15 = ctx->r15 | 0X1806;
    // 0x800012D0: ori         $t8, $t8, 0x5800
    ctx->r24 = ctx->r24 | 0X5800;
    // 0x800012D4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800012D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800012DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800012E0: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x800012E4: ori         $t6, $t6, 0x2406
    ctx->r14 = ctx->r14 | 0X2406;
    // 0x800012E8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800012EC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800012F0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800012F4: jr          $ra
    // 0x800012F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x800012F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_8000D79C_E39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D79C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D7A4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x8000D7A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000D7AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8000D7B0: beq         $v0, $at, L_8000D7D0
    if (ctx->r2 == ctx->r1) {
        // 0x8000D7B4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000D7D0;
    }
    // 0x8000D7B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000D7B8: beq         $v0, $at, L_8000D858
    if (ctx->r2 == ctx->r1) {
        // 0x8000D7BC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8000D858;
    }
    // 0x8000D7BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000D7C0: beql        $v0, $at, L_8000D8B0
    if (ctx->r2 == ctx->r1) {
        // 0x8000D7C4: lwc1        $f6, 0x44($a1)
        ctx->f6.u32l = MEM_W(ctx->r5, 0X44);
            goto L_8000D8B0;
    }
    goto skip_0;
    // 0x8000D7C4: lwc1        $f6, 0x44($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X44);
    skip_0:
    // 0x8000D7C8: b           L_8000D900
    // 0x8000D7CC: nop

        goto L_8000D900;
    // 0x8000D7CC: nop

L_8000D7D0:
    // 0x8000D7D0: lh          $t6, 0x64($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X64);
    // 0x8000D7D4: lh          $t4, 0x3E($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X3E);
    // 0x8000D7D8: lh          $t8, 0x66($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X66);
    // 0x8000D7DC: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x8000D7E0: sh          $t7, 0x64($a1)
    MEM_H(0X64, ctx->r5) = ctx->r15;
    // 0x8000D7E4: lh          $t0, 0x68($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X68);
    // 0x8000D7E8: lh          $t2, 0x6A($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X6A);
    // 0x8000D7EC: lh          $t6, 0x64($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X64);
    // 0x8000D7F0: addiu       $t9, $t8, 0xA
    ctx->r25 = ADD32(ctx->r24, 0XA);
    // 0x8000D7F4: addiu       $t1, $t0, -0x14
    ctx->r9 = ADD32(ctx->r8, -0X14);
    // 0x8000D7F8: addiu       $t3, $t2, -0xA
    ctx->r11 = ADD32(ctx->r10, -0XA);
    // 0x8000D7FC: sh          $t9, 0x66($a1)
    MEM_H(0X66, ctx->r5) = ctx->r25;
    // 0x8000D800: sh          $t1, 0x68($a1)
    MEM_H(0X68, ctx->r5) = ctx->r9;
    // 0x8000D804: sh          $t3, 0x6A($a1)
    MEM_H(0X6A, ctx->r5) = ctx->r11;
    // 0x8000D808: bgez        $t4, L_8000D818
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8000D80C: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_8000D818;
    }
    // 0x8000D80C: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8000D810: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x8000D814: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_8000D818:
    // 0x8000D818: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8000D81C: beql        $at, $zero, L_8000D90C
    if (ctx->r1 == 0) {
        // 0x8000D820: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D90C;
    }
    goto skip_1;
    // 0x8000D820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8000D824: lh          $t7, 0x40($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X40);
    // 0x8000D828: lh          $t9, 0x66($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X66);
    // 0x8000D82C: bgez        $t7, L_8000D83C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000D830: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_8000D83C;
    }
    // 0x8000D830: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8000D834: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x8000D838: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8000D83C:
    // 0x8000D83C: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8000D840: beql        $at, $zero, L_8000D90C
    if (ctx->r1 == 0) {
        // 0x8000D844: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D90C;
    }
    goto skip_2;
    // 0x8000D844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8000D848: jal         0x8000C878
    // 0x8000D84C: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    func_8000C878_D478(rdram, ctx);
        goto after_0;
    // 0x8000D84C: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    after_0:
    // 0x8000D850: b           L_8000D90C
    // 0x8000D854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D90C;
    // 0x8000D854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D858:
    // 0x8000D858: lwc1        $f4, 0x44($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X44);
    // 0x8000D85C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000D860: ldc1        $f8, -0x53C8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X53C8);
    // 0x8000D864: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000D868: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8000D86C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8000D870: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8000D874: swc1        $f16, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f16.u32l;
    // 0x8000D878: jal         0x8000D918
    // 0x8000D87C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8000D918_E518(rdram, ctx);
        goto after_1;
    // 0x8000D87C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x8000D880: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000D884: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000D888: lwc1        $f4, 0x44($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X44);
    // 0x8000D88C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8000D890: nop

    // 0x8000D894: bc1fl       L_8000D90C
    if (!c1cs) {
        // 0x8000D898: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D90C;
    }
    goto skip_3;
    // 0x8000D898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8000D89C: jal         0x8000C878
    // 0x8000D8A0: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    func_8000C878_D478(rdram, ctx);
        goto after_2;
    // 0x8000D8A0: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    after_2:
    // 0x8000D8A4: b           L_8000D90C
    // 0x8000D8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D90C;
    // 0x8000D8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D8AC: lwc1        $f6, 0x44($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X44);
L_8000D8B0:
    // 0x8000D8B0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000D8B4: ldc1        $f10, -0x53C0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X53C0);
    // 0x8000D8B8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8000D8BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8000D8C0: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8000D8C4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8000D8C8: swc1        $f18, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f18.u32l;
    // 0x8000D8CC: jal         0x8000D918
    // 0x8000D8D0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8000D918_E518(rdram, ctx);
        goto after_3;
    // 0x8000D8D0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x8000D8D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8000D8D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000D8DC: lwc1        $f6, 0x44($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X44);
    // 0x8000D8E0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8000D8E4: nop

    // 0x8000D8E8: bc1fl       L_8000D90C
    if (!c1cs) {
        // 0x8000D8EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D90C;
    }
    goto skip_4;
    // 0x8000D8EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x8000D8F0: jal         0x8000C878
    // 0x8000D8F4: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    func_8000C878_D478(rdram, ctx);
        goto after_4;
    // 0x8000D8F4: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    after_4:
    // 0x8000D8F8: b           L_8000D90C
    // 0x8000D8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D90C;
    // 0x8000D8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D900:
    // 0x8000D900: jal         0x8000C878
    // 0x8000D904: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    func_8000C878_D478(rdram, ctx);
        goto after_5;
    // 0x8000D904: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    after_5:
    // 0x8000D908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D90C:
    // 0x8000D90C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D910: jr          $ra
    // 0x8000D914: nop

    TRACE_RETURN()
    return;
    // 0x8000D914: nop

;}
RECOMP_FUNC void func_80013C90_14890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013C90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80013C94: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80013C98: lw          $t6, -0x5260($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5260);
    // 0x80013C9C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80013CA0: andi        $s2, $a1, 0xFF
    ctx->r18 = ctx->r5 & 0XFF;
    // 0x80013CA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80013CA8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80013CAC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80013CB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80013CB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80013CB8: beq         $t6, $a0, L_80013CDC
    if (ctx->r14 == ctx->r4) {
        // 0x80013CBC: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_80013CDC;
    }
    // 0x80013CBC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80013CC0: lui         $a3, 0x8015
    ctx->r7 = S32(0X8015 << 16);
    // 0x80013CC4: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x80013CC8: sb          $zero, 0x7FA0($a3)
    MEM_B(0X7FA0, ctx->r7) = 0;
    // 0x80013CCC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x80013CD0: lh          $t7, 0x7A76($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7A76);
    // 0x80013CD4: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013CD8: sh          $t7, -0x5258($at)
    MEM_H(-0X5258, ctx->r1) = ctx->r15;
L_80013CDC:
    // 0x80013CDC: lui         $a3, 0x8015
    ctx->r7 = S32(0X8015 << 16);
    // 0x80013CE0: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x80013CE4: lbu         $v0, 0x7FA0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X7FA0);
    // 0x80013CE8: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013CEC: beq         $v0, $zero, L_80013D18
    if (ctx->r2 == 0) {
        // 0x80013CF0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80013D18;
    }
    // 0x80013CF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80013CF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80013CF8: beq         $v1, $at, L_80013D58
    if (ctx->r3 == ctx->r1) {
        // 0x80013CFC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80013D58;
    }
    // 0x80013CFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80013D00: beq         $v1, $at, L_80013F08
    if (ctx->r3 == ctx->r1) {
        // 0x80013D04: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80013F08;
    }
    // 0x80013D04: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80013D08: beq         $v1, $at, L_8001413C
    if (ctx->r3 == ctx->r1) {
        // 0x80013D0C: nop
    
            goto L_8001413C;
    }
    // 0x80013D0C: nop

    // 0x80013D10: b           L_80014188
    // 0x80013D14: nop

        goto L_80014188;
    // 0x80013D14: nop

L_80013D18:
    // 0x80013D18: sw          $a0, -0x5260($at)
    MEM_W(-0X5260, ctx->r1) = ctx->r4;
    // 0x80013D1C: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x80013D20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013D24: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80013D28: sh          $t8, -0x7EB0($at)
    MEM_H(-0X7EB0, ctx->r1) = ctx->r24;
    // 0x80013D2C: lhu         $t9, -0x7EB0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X7EB0);
    // 0x80013D30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013D34: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x80013D38: beq         $t9, $zero, L_80014188
    if (ctx->r25 == 0) {
        // 0x80013D3C: sw          $v1, -0x7EB4($at)
        MEM_W(-0X7EB4, ctx->r1) = ctx->r3;
            goto L_80014188;
    }
    // 0x80013D3C: sw          $v1, -0x7EB4($at)
    MEM_W(-0X7EB4, ctx->r1) = ctx->r3;
    // 0x80013D40: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x80013D44: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80013D48: sb          $t0, 0x7FA0($a3)
    MEM_B(0X7FA0, ctx->r7) = ctx->r8;
    // 0x80013D4C: addiu       $v1, $v1, 0x7FC0
    ctx->r3 = ADD32(ctx->r3, 0X7FC0);
    // 0x80013D50: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013D54: sw          $v1, -0x5264($at)
    MEM_W(-0X5264, ctx->r1) = ctx->r3;
L_80013D58:
    // 0x80013D58: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80013D5C: lw          $v1, -0x5264($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5264);
    // 0x80013D60: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80013D64: addiu       $a1, $a1, -0x7EC0
    ctx->r5 = ADD32(ctx->r5, -0X7EC0);
    // 0x80013D68: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80013D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80013D70: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80013D74: beq         $v0, $zero, L_80013DD4
    if (ctx->r2 == 0) {
        // 0x80013D78: lui         $t3, 0x8017
        ctx->r11 = S32(0X8017 << 16);
            goto L_80013DD4;
    }
    // 0x80013D78: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80013D7C: lhu         $a0, -0x7EB0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7EB0);
L_80013D80:
    // 0x80013D80: bnel        $v0, $a0, L_80013DB0
    if (ctx->r2 != ctx->r4) {
        // 0x80013D84: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80013DB0;
    }
    goto skip_0;
    // 0x80013D84: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    skip_0:
    // 0x80013D88: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x80013D8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013D90: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80013D94: sw          $t1, -0x7EB8($at)
    MEM_W(-0X7EB8, ctx->r1) = ctx->r9;
    // 0x80013D98: sb          $t2, 0x7FA0($a3)
    MEM_B(0X7FA0, ctx->r7) = ctx->r10;
    // 0x80013D9C: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013DA0: sw          $v1, -0x5264($at)
    MEM_W(-0X5264, ctx->r1) = ctx->r3;
    // 0x80013DA4: b           L_800141A4
    // 0x80013DA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800141A4;
    // 0x80013DA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80013DAC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_80013DB0:
    // 0x80013DB0: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80013DB4: bne         $at, $zero, L_80013DC8
    if (ctx->r1 != 0) {
        // 0x80013DB8: lui         $at, 0x8007
        ctx->r1 = S32(0X8007 << 16);
            goto L_80013DC8;
    }
    // 0x80013DB8: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013DBC: sw          $v1, -0x5264($at)
    MEM_W(-0X5264, ctx->r1) = ctx->r3;
    // 0x80013DC0: b           L_800141A4
    // 0x80013DC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800141A4;
    // 0x80013DC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80013DC8:
    // 0x80013DC8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80013DCC: bne         $v0, $zero, L_80013D80
    if (ctx->r2 != 0) {
        // 0x80013DD0: nop
    
            goto L_80013D80;
    }
    // 0x80013DD0: nop

L_80013DD4:
    // 0x80013DD4: lhu         $t3, -0x7EB0($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X7EB0);
    // 0x80013DD8: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x80013DDC: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013DE0: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
    // 0x80013DE4: sw          $v1, -0x5264($at)
    MEM_W(-0X5264, ctx->r1) = ctx->r3;
    // 0x80013DE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013DEC: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    // 0x80013DF0: jal         0x80001DF4
    // 0x80013DF4: sw          $a1, -0x7EBC($at)
    MEM_W(-0X7EBC, ctx->r1) = ctx->r5;
    func_80001DF4_29F4(rdram, ctx);
        goto after_0;
    // 0x80013DF4: sw          $a1, -0x7EBC($at)
    MEM_W(-0X7EBC, ctx->r1) = ctx->r5;
    after_0:
    // 0x80013DF8: beq         $v0, $zero, L_80013E2C
    if (ctx->r2 == 0) {
        // 0x80013DFC: lui         $v1, 0x8007
        ctx->r3 = S32(0X8007 << 16);
            goto L_80013E2C;
    }
    // 0x80013DFC: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80013E00: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80013E04: lw          $a1, -0x7EBC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7EBC);
    // 0x80013E08: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x80013E0C: lw          $v1, -0x5264($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5264);
    // 0x80013E10: addiu       $a1, $a1, 0xFFF
    ctx->r5 = ADD32(ctx->r5, 0XFFF);
    // 0x80013E14: and         $t4, $a1, $at
    ctx->r12 = ctx->r5 & ctx->r1;
    // 0x80013E18: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80013E1C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80013E20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013E24: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80013E28: sw          $t4, -0x7EBC($at)
    MEM_W(-0X7EBC, ctx->r1) = ctx->r12;
L_80013E2C:
    // 0x80013E2C: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80013E30: lw          $v1, -0x5264($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5264);
    // 0x80013E34: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80013E38: lw          $a1, -0x7EBC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7EBC);
    // 0x80013E3C: jal         0x80001C00
    // 0x80013E40: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    func_80001C00_2800(rdram, ctx);
        goto after_1;
    // 0x80013E40: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    after_1:
    // 0x80013E44: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80013E48: addiu       $a2, $v0, 0x3F
    ctx->r6 = ADD32(ctx->r2, 0X3F);
    // 0x80013E4C: addiu       $at, $zero, -0x40
    ctx->r1 = ADD32(0, -0X40);
    // 0x80013E50: lw          $v1, -0x5264($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5264);
    // 0x80013E54: and         $t6, $a2, $at
    ctx->r14 = ctx->r6 & ctx->r1;
    // 0x80013E58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013E5C: sw          $t6, -0x7EB8($at)
    MEM_W(-0X7EB8, ctx->r1) = ctx->r14;
    // 0x80013E60: lhu         $a1, 0x0($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X0);
    // 0x80013E64: lui         $s0, 0x8007
    ctx->r16 = S32(0X8007 << 16);
    // 0x80013E68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013E6C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80013E70: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80013E74: lw          $s0, -0x66E4($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X66E4);
    // 0x80013E78: sw          $t6, -0x7EC0($at)
    MEM_W(-0X7EC0, ctx->r1) = ctx->r14;
    // 0x80013E7C: lui         $a3, 0x8005
    ctx->r7 = S32(0X8005 << 16);
    // 0x80013E80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013E84: addiu       $a3, $a3, 0x4910
    ctx->r7 = ADD32(ctx->r7, 0X4910);
    // 0x80013E88: sw          $s0, -0x7EAC($at)
    MEM_W(-0X7EAC, ctx->r1) = ctx->r16;
    // 0x80013E8C: lhu         $t8, 0x0($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X0);
    // 0x80013E90: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80013E94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80013E98: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80013E9C: bne         $at, $zero, L_80013EC8
    if (ctx->r1 != 0) {
        // 0x80013EA0: addiu       $v0, $v0, 0x4910
        ctx->r2 = ADD32(ctx->r2, 0X4910);
            goto L_80013EC8;
    }
    // 0x80013EA0: addiu       $v0, $v0, 0x4910
    ctx->r2 = ADD32(ctx->r2, 0X4910);
    // 0x80013EA4: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
L_80013EA8:
    // 0x80013EA8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80013EAC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013EB0: bne         $v1, $zero, L_80013EC0
    if (ctx->r3 != 0) {
        // 0x80013EB4: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80013EC0;
    }
    // 0x80013EB4: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80013EB8: b           L_800141A4
    // 0x80013EBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800141A4;
    // 0x80013EBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80013EC0:
    // 0x80013EC0: beql        $at, $zero, L_80013EA8
    if (ctx->r1 == 0) {
        // 0x80013EC4: lhu         $v1, 0x4($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X4);
            goto L_80013EA8;
    }
    goto skip_1;
    // 0x80013EC4: lhu         $v1, 0x4($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X4);
    skip_1:
L_80013EC8:
    // 0x80013EC8: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x80013ECC: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x80013ED0: lhu         $t1, 0x2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2);
    // 0x80013ED4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80013ED8: lw          $a1, -0x7EBC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7EBC);
    // 0x80013EDC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80013EE0: lbu         $t4, 0x4C60($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X4C60);
    // 0x80013EE4: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x80013EE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013EEC: subu        $t3, $a1, $t2
    ctx->r11 = SUB32(ctx->r5, ctx->r10);
    // 0x80013EF0: sw          $t3, -0x7EA8($at)
    MEM_W(-0X7EA8, ctx->r1) = ctx->r11;
    // 0x80013EF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80013EF8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80013EFC: sb          $t5, 0x4C60($at)
    MEM_B(0X4C60, ctx->r1) = ctx->r13;
    // 0x80013F00: b           L_80014188
    // 0x80013F04: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
        goto L_80014188;
    // 0x80013F04: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
L_80013F08:
    // 0x80013F08: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x80013F0C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80013F10: andi        $t6, $s2, 0xFF
    ctx->r14 = ctx->r18 & 0XFF;
    // 0x80013F14: beq         $v1, $zero, L_80014188
    if (ctx->r3 == 0) {
        // 0x80013F18: or          $s2, $t6, $zero
        ctx->r18 = ctx->r14 | 0;
            goto L_80014188;
    }
    // 0x80013F18: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80013F1C: lui         $s4, 0xC
    ctx->r20 = S32(0XC << 16);
    // 0x80013F20: lui         $s3, 0x802F
    ctx->r19 = S32(0X802F << 16);
    // 0x80013F24: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x80013F28: addiu       $s1, $s1, -0x3A38
    ctx->r17 = ADD32(ctx->r17, -0X3A38);
    // 0x80013F2C: addiu       $s3, $s3, 0x7000
    ctx->r19 = ADD32(ctx->r19, 0X7000);
    // 0x80013F30: ori         $s4, $s4, 0x7FA4
    ctx->r20 = ctx->r20 | 0X7FA4;
L_80013F34:
    // 0x80013F34: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80013F38: lw          $s0, -0x7EAC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7EAC);
    // 0x80013F3C: lui         $a3, 0x8015
    ctx->r7 = S32(0X8015 << 16);
    // 0x80013F40: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x80013F44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80013F48: beq         $a0, $zero, L_800140B8
    if (ctx->r4 == 0) {
        // 0x80013F4C: nop
    
            goto L_800140B8;
    }
    // 0x80013F4C: nop

    // 0x80013F50: jal         0x80014698
    // 0x80013F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80014698_15298(rdram, ctx);
        goto after_2;
    // 0x80013F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80013F58: sltiu       $at, $v0, 0x2001
    ctx->r1 = ctx->r2 < 0X2001 ? 1 : 0;
    // 0x80013F5C: beq         $at, $zero, L_80013FF0
    if (ctx->r1 == 0) {
        // 0x80013F60: lui         $a1, 0x8007
        ctx->r5 = S32(0X8007 << 16);
            goto L_80013FF0;
    }
    // 0x80013F60: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80013F64: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80013F68: lw          $a1, -0x525C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X525C);
    // 0x80013F6C: beq         $a1, $zero, L_80013F80
    if (ctx->r5 == 0) {
        // 0x80013F70: sltu        $at, $a1, $s3
        ctx->r1 = ctx->r5 < ctx->r19 ? 1 : 0;
            goto L_80013F80;
    }
    // 0x80013F70: sltu        $at, $a1, $s3
    ctx->r1 = ctx->r5 < ctx->r19 ? 1 : 0;
    // 0x80013F74: beq         $at, $zero, L_80013F94
    if (ctx->r1 == 0) {
        // 0x80013F78: lui         $at, 0x8007
        ctx->r1 = S32(0X8007 << 16);
            goto L_80013F94;
    }
    // 0x80013F78: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013F7C: sw          $a1, -0x525C($at)
    MEM_W(-0X525C, ctx->r1) = ctx->r5;
L_80013F80:
    // 0x80013F80: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80013F84: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x80013F88: jal         0x800148F0
    // 0x80013F8C: addu        $a0, $t7, $s4
    ctx->r4 = ADD32(ctx->r15, ctx->r20);
    func_800148F0_154F0(rdram, ctx);
        goto after_3;
    // 0x80013F8C: addu        $a0, $t7, $s4
    ctx->r4 = ADD32(ctx->r15, ctx->r20);
    after_3:
    // 0x80013F90: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80013F94:
    // 0x80013F94: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80013F98: lw          $s0, -0x7EAC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7EAC);
    // 0x80013F9C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80013FA0: lw          $t9, -0x7EA8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7EA8);
    // 0x80013FA4: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80013FA8: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013FAC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80013FB0: sw          $a1, -0x525C($at)
    MEM_W(-0X525C, ctx->r1) = ctx->r5;
    // 0x80013FB4: jal         0x800144E8
    // 0x80013FB8: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    func_800144E8_150E8(rdram, ctx);
        goto after_4;
    // 0x80013FB8: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    after_4:
    // 0x80013FBC: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80013FC0: lw          $s0, -0x7EAC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7EAC);
    // 0x80013FC4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80013FC8:
    // 0x80013FC8: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x80013FCC: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80013FD0: andi        $t0, $s2, 0xFF
    ctx->r8 = ctx->r18 & 0XFF;
    // 0x80013FD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80013FD8: sw          $s0, -0x7EAC($at)
    MEM_W(-0X7EAC, ctx->r1) = ctx->r16;
    // 0x80013FDC: bne         $v1, $zero, L_80013F34
    if (ctx->r3 != 0) {
        // 0x80013FE0: or          $s2, $t0, $zero
        ctx->r18 = ctx->r8 | 0;
            goto L_80013F34;
    }
    // 0x80013FE0: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x80013FE4: lui         $v0, 0x8015
    ctx->r2 = S32(0X8015 << 16);
    // 0x80013FE8: b           L_80014188
    // 0x80013FEC: lbu         $v0, 0x4C60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C60);
        goto L_80014188;
    // 0x80013FEC: lbu         $v0, 0x4C60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C60);
L_80013FF0:
    // 0x80013FF0: lw          $a1, -0x525C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X525C);
    // 0x80013FF4: beq         $a1, $zero, L_80014018
    if (ctx->r5 == 0) {
        // 0x80013FF8: sltu        $at, $a1, $s3
        ctx->r1 = ctx->r5 < ctx->r19 ? 1 : 0;
            goto L_80014018;
    }
    // 0x80013FF8: sltu        $at, $a1, $s3
    ctx->r1 = ctx->r5 < ctx->r19 ? 1 : 0;
    // 0x80013FFC: bnel        $at, $zero, L_8001401C
    if (ctx->r1 != 0) {
        // 0x80014000: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_8001401C;
    }
    goto skip_2;
    // 0x80014000: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_2:
    // 0x80014004: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80014008: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8001400C: sw          $a1, -0x525C($at)
    MEM_W(-0X525C, ctx->r1) = ctx->r5;
    // 0x80014010: jal         0x80014B74
    // 0x80014014: addu        $a0, $t1, $s4
    ctx->r4 = ADD32(ctx->r9, ctx->r20);
    func_80014B74_15774(rdram, ctx);
        goto after_5;
    // 0x80014014: addu        $a0, $t1, $s4
    ctx->r4 = ADD32(ctx->r9, ctx->r20);
    after_5:
L_80014018:
    // 0x80014018: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
L_8001401C:
    // 0x8001401C: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80014020: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80014024: lw          $s0, -0x7EAC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7EAC);
    // 0x80014028: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001402C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80014030: sh          $t2, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r10;
    // 0x80014034: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80014038: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x8001403C: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80014040: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80014044: lh          $t5, -0x5250($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X5250);
    // 0x80014048: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001404C: lw          $t9, -0x7EA8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7EA8);
    // 0x80014050: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80014054: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80014058: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001405C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80014060: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80014064: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80014068: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8001406C: sll         $t6, $t6, 11
    ctx->r14 = S32(ctx->r14 << 11);
    // 0x80014070: addiu       $t7, $t7, 0x1000
    ctx->r15 = ADD32(ctx->r15, 0X1000);
    // 0x80014074: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80014078: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8001407C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80014080: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80014084: sw          $a1, -0x525C($at)
    MEM_W(-0X525C, ctx->r1) = ctx->r5;
    // 0x80014088: jal         0x800144E8
    // 0x8001408C: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    func_800144E8_150E8(rdram, ctx);
        goto after_6;
    // 0x8001408C: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    after_6:
    // 0x80014090: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80014094: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80014098: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x8001409C: lw          $s0, -0x7EAC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7EAC);
    // 0x800140A0: lh          $t0, -0x5258($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X5258);
    // 0x800140A4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800140A8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800140AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800140B0: b           L_80013FC8
    // 0x800140B4: sh          $t0, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r8;
        goto L_80013FC8;
    // 0x800140B4: sh          $t0, -0x524A($at)
    MEM_H(-0X524A, ctx->r1) = ctx->r8;
L_800140B8:
    // 0x800140B8: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800140BC: lw          $a1, -0x525C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X525C);
    // 0x800140C0: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800140C4: beq         $a1, $zero, L_80014100
    if (ctx->r5 == 0) {
        // 0x800140C8: nop
    
            goto L_80014100;
    }
    // 0x800140C8: nop

    // 0x800140CC: sw          $a1, -0x525C($at)
    MEM_W(-0X525C, ctx->r1) = ctx->r5;
    // 0x800140D0: sltu        $at, $a1, $s3
    ctx->r1 = ctx->r5 < ctx->r19 ? 1 : 0;
    // 0x800140D4: bne         $at, $zero, L_80014100
    if (ctx->r1 != 0) {
        // 0x800140D8: nop
    
            goto L_80014100;
    }
    // 0x800140D8: nop

    // 0x800140DC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x800140E0: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800140E4: sw          $a1, -0x525C($at)
    MEM_W(-0X525C, ctx->r1) = ctx->r5;
    // 0x800140E8: jal         0x80014B74
    // 0x800140EC: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    func_80014B74_15774(rdram, ctx);
        goto after_7;
    // 0x800140EC: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    after_7:
    // 0x800140F0: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800140F4: lui         $a3, 0x8015
    ctx->r7 = S32(0X8015 << 16);
    // 0x800140F8: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x800140FC: sw          $zero, -0x525C($at)
    MEM_W(-0X525C, ctx->r1) = 0;
L_80014100:
    // 0x80014100: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80014104: lw          $v1, -0x5264($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5264);
    // 0x80014108: lbu         $t3, 0x7FA0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X7FA0);
    // 0x8001410C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80014110: lw          $a2, -0x7EC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7EC0);
    // 0x80014114: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80014118: sb          $t4, 0x7FA0($a3)
    MEM_B(0X7FA0, ctx->r7) = ctx->r12;
    // 0x8001411C: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80014120: lui         $v0, 0x8015
    ctx->r2 = S32(0X8015 << 16);
    // 0x80014124: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80014128: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x8001412C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x80014130: sw          $v1, -0x5264($at)
    MEM_W(-0X5264, ctx->r1) = ctx->r3;
    // 0x80014134: b           L_80014188
    // 0x80014138: lbu         $v0, 0x4C60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C60);
        goto L_80014188;
    // 0x80014138: lbu         $v0, 0x4C60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C60);
L_8001413C:
    // 0x8001413C: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x80014140: lw          $v1, -0x7EB4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7EB4);
    // 0x80014144: sb          $zero, 0x7FA0($a3)
    MEM_B(0X7FA0, ctx->r7) = 0;
    // 0x80014148: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001414C: lhu         $t5, 0x0($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X0);
    // 0x80014150: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80014154: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80014158: sh          $t5, -0x7EB0($at)
    MEM_H(-0X7EB0, ctx->r1) = ctx->r13;
    // 0x8001415C: lhu         $t6, -0x7EB0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X7EB0);
    // 0x80014160: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80014164: sw          $v1, -0x7EB4($at)
    MEM_W(-0X7EB4, ctx->r1) = ctx->r3;
    // 0x80014168: bne         $t6, $zero, L_80014178
    if (ctx->r14 != 0) {
        // 0x8001416C: lui         $v0, 0x8015
        ctx->r2 = S32(0X8015 << 16);
            goto L_80014178;
    }
    // 0x8001416C: lui         $v0, 0x8015
    ctx->r2 = S32(0X8015 << 16);
    // 0x80014170: b           L_80014188
    // 0x80014174: lbu         $v0, 0x4C60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C60);
        goto L_80014188;
    // 0x80014174: lbu         $v0, 0x4C60($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4C60);
L_80014178:
    // 0x80014178: lbu         $t7, 0x7FA0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X7FA0);
    // 0x8001417C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80014180: sb          $t8, 0x7FA0($a3)
    MEM_B(0X7FA0, ctx->r7) = ctx->r24;
    // 0x80014184: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
L_80014188:
    // 0x80014188: beq         $v0, $zero, L_80014198
    if (ctx->r2 == 0) {
        // 0x8001418C: nop
    
            goto L_80014198;
    }
    // 0x8001418C: nop

    // 0x80014190: b           L_800141A0
    // 0x80014194: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_800141A0;
    // 0x80014194: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80014198:
    // 0x80014198: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8001419C: lw          $v1, -0x7EB8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7EB8);
L_800141A0:
    // 0x800141A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800141A4:
    // 0x800141A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800141A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800141AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800141B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800141B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800141B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800141BC: jr          $ra
    // 0x800141C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800141C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001E4A4_1F0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E4A4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001E4A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001E4AC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8001E4B0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8001E4B4: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8001E4B8: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x8001E4BC: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x8001E4C0: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x8001E4C4: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001E4C8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8001E4CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001E4D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001E4D4: bne         $v1, $v0, L_8001E4E4
    if (ctx->r3 != ctx->r2) {
        // 0x8001E4D8: sw          $a1, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r5;
            goto L_8001E4E4;
    }
    // 0x8001E4D8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8001E4DC: b           L_8001E4E8
    // 0x8001E4E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8001E4E8;
    // 0x8001E4E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8001E4E4:
    // 0x8001E4E4: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
L_8001E4E8:
    // 0x8001E4E8: bne         $v1, $a2, L_8001E4F8
    if (ctx->r3 != ctx->r6) {
        // 0x8001E4EC: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_8001E4F8;
    }
    // 0x8001E4EC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001E4F0: b           L_8001E4FC
    // 0x8001E4F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8001E4FC;
    // 0x8001E4F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8001E4F8:
    // 0x8001E4F8: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
L_8001E4FC:
    // 0x8001E4FC: bne         $v1, $a3, L_8001E50C
    if (ctx->r3 != ctx->r7) {
        // 0x8001E500: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8001E50C;
    }
    // 0x8001E500: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8001E504: b           L_8001E510
    // 0x8001E508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8001E510;
    // 0x8001E508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001E50C:
    // 0x8001E50C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8001E510:
    // 0x8001E510: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8001E514: sh          $a2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r6;
    // 0x8001E518: jal         0x80003F30
    // 0x8001E51C: sh          $a3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r7;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001E51C: sh          $a3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001E520: lhu         $a0, 0x62($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X62);
    // 0x8001E524: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8001E528: jal         0x80003F30
    // 0x8001E52C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x8001E52C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8001E530: lhu         $a0, 0x66($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X66);
    // 0x8001E534: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8001E538: jal         0x80003F30
    // 0x8001E53C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_2;
    // 0x8001E53C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8001E540: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001E544: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E548: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E54C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E550: mul.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8001E554: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8001E558: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001E55C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001E560: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x8001E564: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x8001E568: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E56C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x8001E570: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001E574: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8001E578: mul.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001E57C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E580: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E584: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8001E588: nop

    // 0x8001E58C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8001E590: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8001E594: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8001E598: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E59C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E5A0: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8001E5A4: nop

    // 0x8001E5A8: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8001E5AC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001E5B0: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8001E5B4: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x8001E5B8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E5BC: mul.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8001E5C0: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    // 0x8001E5C4: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E5C8: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001E5CC: nop

    // 0x8001E5D0: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001E5D4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8001E5D8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8001E5DC: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x8001E5E0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E5E4: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8001E5E8: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8001E5EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001E5F0: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x8001E5F4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001E5F8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8001E5FC: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
    // 0x8001E600: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x8001E604: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001E608: swc1        $f2, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f2.u32l;
    // 0x8001E60C: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
    // 0x8001E610: swc1        $f2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f2.u32l;
    // 0x8001E614: swc1        $f2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f2.u32l;
    // 0x8001E618: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x8001E61C: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x8001E620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001E628: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8001E62C: jr          $ra
    // 0x8001E630: nop

    TRACE_RETURN()
    return;
    // 0x8001E630: nop

;}
RECOMP_FUNC void func_80013508_14108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013508: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8001350C: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x80013510: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x80013514: jr          $ra
    // 0x80013518: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80013518: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80019ED8_1AAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80019ED8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80019EDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80019EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019EE4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80019EE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80019EEC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80019EF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80019EF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80019EF8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x80019EFC: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x80019F00: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x80019F04: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x80019F08: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x80019F0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80019F10: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80019F14: jal         0x8001AABC
    // 0x80019F18: lhu         $a0, 0x12($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X12);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_0;
    // 0x80019F18: lhu         $a0, 0x12($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X12);
    after_0:
    // 0x80019F1C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80019F20: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x80019F24: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80019F28: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80019F2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80019F30: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80019F34: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80019F38: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80019F3C: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x80019F40: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80019F44: jal         0x8001AABC
    // 0x80019F48: lhu         $a0, 0x14($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X14);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_1;
    // 0x80019F48: lhu         $a0, 0x14($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X14);
    after_1:
    // 0x80019F4C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80019F50: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x80019F54: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80019F58: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80019F5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80019F60: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80019F64: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80019F68: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80019F6C: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x80019F70: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80019F74: jal         0x8001AABC
    // 0x80019F78: lhu         $a0, 0x16($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X16);
    func_8001AABC_1B6BC(rdram, ctx);
        goto after_2;
    // 0x80019F78: lhu         $a0, 0x16($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X16);
    after_2:
    // 0x80019F7C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80019F80: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x80019F84: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80019F88: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80019F8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80019F90: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80019F94: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80019F98: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80019F9C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80019FA0: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x80019FA4: jal         0x8001ADBC
    // 0x80019FA8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    func_8001ADBC_1B9BC(rdram, ctx);
        goto after_3;
    // 0x80019FA8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    after_3:
    // 0x80019FAC: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80019FB0: jal         0x8001A8E4
    // 0x80019FB4: lhu         $a0, 0x6($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X6);
    func_8001A8E4_1B4E4(rdram, ctx);
        goto after_4;
    // 0x80019FB4: lhu         $a0, 0x6($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X6);
    after_4:
    // 0x80019FB8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80019FBC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80019FC0: bgez        $v0, L_80019FD4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80019FC4: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80019FD4;
    }
    // 0x80019FC4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80019FC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80019FCC: nop

    // 0x80019FD0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80019FD4:
    // 0x80019FD4: lui         $at, 0x3F70
    ctx->r1 = S32(0X3F70 << 16);
    // 0x80019FD8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80019FDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80019FE0: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80019FE4: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80019FE8: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80019FEC: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x80019FF0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80019FF4: jal         0x8001A8E4
    // 0x80019FF8: lhu         $a0, 0x8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X8);
    func_8001A8E4_1B4E4(rdram, ctx);
        goto after_5;
    // 0x80019FF8: lhu         $a0, 0x8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X8);
    after_5:
    // 0x80019FFC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8001A000: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001A004: bgez        $v0, L_8001A018
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001A008: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8001A018;
    }
    // 0x8001A008: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001A00C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001A010: nop

    // 0x8001A014: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_8001A018:
    // 0x8001A018: lui         $at, 0x3F70
    ctx->r1 = S32(0X3F70 << 16);
    // 0x8001A01C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8001A020: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001A024: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x8001A028: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8001A02C: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8001A030: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8001A034: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8001A038: jal         0x8001A8E4
    // 0x8001A03C: lhu         $a0, 0xA($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0XA);
    func_8001A8E4_1B4E4(rdram, ctx);
        goto after_6;
    // 0x8001A03C: lhu         $a0, 0xA($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0XA);
    after_6:
    // 0x8001A040: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8001A044: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001A048: bgez        $v0, L_8001A05C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001A04C: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001A05C;
    }
    // 0x8001A04C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001A050: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001A054: nop

    // 0x8001A058: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_8001A05C:
    // 0x8001A05C: lui         $at, 0x3F70
    ctx->r1 = S32(0X3F70 << 16);
    // 0x8001A060: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8001A064: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001A068: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8001A06C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8001A070: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8001A074: addiu       $a3, $a3, -0x7AEC
    ctx->r7 = ADD32(ctx->r7, -0X7AEC);
    // 0x8001A078: lhu         $a0, 0x3C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3C);
    // 0x8001A07C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8001A080: beq         $s1, $zero, L_8001A730
    if (ctx->r17 == 0) {
        // 0x8001A084: swc1        $f8, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
            goto L_8001A730;
    }
    // 0x8001A084: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x8001A088: lwc1        $f12, 0x0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8001A08C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001A090: lhu         $t2, 0x3C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3C);
    // 0x8001A094: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8001A098: nop

    // 0x8001A09C: bc1fl       L_8001A604
    if (!c1cs) {
        // 0x8001A0A0: lhu         $a0, 0x3C($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X3C);
            goto L_8001A604;
    }
    goto skip_0;
    // 0x8001A0A0: lhu         $a0, 0x3C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3C);
    skip_0:
    // 0x8001A0A4: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8001A0A8: subu        $t3, $t2, $a0
    ctx->r11 = SUB32(ctx->r10, ctx->r4);
    // 0x8001A0AC: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x8001A0B0: slti        $at, $t4, 0x199
    ctx->r1 = SIGNED(ctx->r12) < 0X199 ? 1 : 0;
    // 0x8001A0B4: bne         $at, $zero, L_8001A0F0
    if (ctx->r1 != 0) {
        // 0x8001A0B8: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_8001A0F0;
    }
    // 0x8001A0B8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8001A0BC: slti        $at, $t4, 0x268
    ctx->r1 = SIGNED(ctx->r12) < 0X268 ? 1 : 0;
    // 0x8001A0C0: beq         $at, $zero, L_8001A0F0
    if (ctx->r1 == 0) {
        // 0x8001A0C4: addiu       $a1, $s1, 0x16
        ctx->r5 = ADD32(ctx->r17, 0X16);
            goto L_8001A0F0;
    }
    // 0x8001A0C4: addiu       $a1, $s1, 0x16
    ctx->r5 = ADD32(ctx->r17, 0X16);
    // 0x8001A0C8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8001A0CC: jal         0x8001F878
    // 0x8001A0D0: addiu       $a2, $s1, 0x18
    ctx->r6 = ADD32(ctx->r17, 0X18);
    func_8001F878_20478(rdram, ctx);
        goto after_7;
    // 0x8001A0D0: addiu       $a2, $s1, 0x18
    ctx->r6 = ADD32(ctx->r17, 0X18);
    after_7:
    // 0x8001A0D4: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8001A0D8: lhu         $t5, 0x3C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X3C);
    // 0x8001A0DC: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8001A0E0: addiu       $a3, $a3, -0x7AEC
    ctx->r7 = ADD32(ctx->r7, -0X7AEC);
    // 0x8001A0E4: subu        $v1, $t5, $a0
    ctx->r3 = SUB32(ctx->r13, ctx->r4);
    // 0x8001A0E8: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8001A0EC: lwc1        $f12, 0x0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X0);
L_8001A0F0:
    // 0x8001A0F0: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x8001A0F4: bne         $t7, $zero, L_8001A120
    if (ctx->r15 != 0) {
        // 0x8001A0F8: addiu       $a2, $zero, 0x400
        ctx->r6 = ADD32(0, 0X400);
            goto L_8001A120;
    }
    // 0x8001A0F8: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8001A0FC: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x8001A100: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8001A104: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A108: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001A10C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001A110: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8001A114: add.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x8001A118: b           L_8001A1D8
    // 0x8001A11C: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
        goto L_8001A1D8;
    // 0x8001A11C: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
L_8001A120:
    // 0x8001A120: subu        $t9, $a2, $v0
    ctx->r25 = SUB32(ctx->r6, ctx->r2);
    // 0x8001A124: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x8001A128: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8001A12C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A130: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001A134: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001A138: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001A13C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001A140: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x8001A144: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001A148: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8001A14C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8001A150: nop

    // 0x8001A154: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001A158: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8001A15C: nop

    // 0x8001A160: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8001A164: beql        $t2, $zero, L_8001A1B4
    if (ctx->r10 == 0) {
        // 0x8001A168: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_8001A1B4;
    }
    goto skip_1;
    // 0x8001A168: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x8001A16C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001A170: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001A174: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8001A178: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8001A17C: nop

    // 0x8001A180: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8001A184: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8001A188: nop

    // 0x8001A18C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8001A190: bne         $t2, $zero, L_8001A1A8
    if (ctx->r10 != 0) {
        // 0x8001A194: nop
    
            goto L_8001A1A8;
    }
    // 0x8001A194: nop

    // 0x8001A198: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8001A19C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001A1A0: b           L_8001A1C0
    // 0x8001A1A4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8001A1C0;
    // 0x8001A1A4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8001A1A8:
    // 0x8001A1A8: b           L_8001A1C0
    // 0x8001A1AC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8001A1C0;
    // 0x8001A1AC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8001A1B0: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_8001A1B4:
    // 0x8001A1B4: nop

    // 0x8001A1B8: bltz        $t2, L_8001A1A8
    if (SIGNED(ctx->r10) < 0) {
        // 0x8001A1BC: nop
    
            goto L_8001A1A8;
    }
    // 0x8001A1BC: nop

L_8001A1C0:
    // 0x8001A1C0: subu        $t5, $a2, $t2
    ctx->r13 = SUB32(ctx->r6, ctx->r10);
    // 0x8001A1C4: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x8001A1C8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8001A1CC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8001A1D0: nop

    // 0x8001A1D4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
L_8001A1D8:
    // 0x8001A1D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001A1DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001A1E0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001A1E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001A1E8: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8001A1EC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001A1F0: nop

    // 0x8001A1F4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8001A1F8: beql        $t8, $zero, L_8001A248
    if (ctx->r24 == 0) {
        // 0x8001A1FC: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_8001A248;
    }
    goto skip_2;
    // 0x8001A1FC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x8001A200: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001A204: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001A208: sub.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x8001A20C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001A210: nop

    // 0x8001A214: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001A218: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001A21C: nop

    // 0x8001A220: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8001A224: bne         $t8, $zero, L_8001A23C
    if (ctx->r24 != 0) {
        // 0x8001A228: nop
    
            goto L_8001A23C;
    }
    // 0x8001A228: nop

    // 0x8001A22C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8001A230: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001A234: b           L_8001A254
    // 0x8001A238: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8001A254;
    // 0x8001A238: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8001A23C:
    // 0x8001A23C: b           L_8001A254
    // 0x8001A240: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8001A254;
    // 0x8001A240: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8001A244: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_8001A248:
    // 0x8001A248: nop

    // 0x8001A24C: bltz        $t8, L_8001A23C
    if (SIGNED(ctx->r24) < 0) {
        // 0x8001A250: nop
    
            goto L_8001A23C;
    }
    // 0x8001A250: nop

L_8001A254:
    // 0x8001A254: addu        $t0, $t8, $a0
    ctx->r8 = ADD32(ctx->r24, ctx->r4);
    // 0x8001A258: sh          $t0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r8;
    // 0x8001A25C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8001A260: lhu         $v1, 0x3E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3E);
    // 0x8001A264: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001A268: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x8001A26C: andi        $t1, $a1, 0x200
    ctx->r9 = ctx->r5 & 0X200;
    // 0x8001A270: bne         $t1, $zero, L_8001A290
    if (ctx->r9 != 0) {
        // 0x8001A274: subu        $t3, $v0, $v1
        ctx->r11 = SUB32(ctx->r2, ctx->r3);
            goto L_8001A290;
    }
    // 0x8001A274: subu        $t3, $v0, $v1
    ctx->r11 = SUB32(ctx->r2, ctx->r3);
    // 0x8001A278: andi        $t2, $a1, 0x3FF
    ctx->r10 = ctx->r5 & 0X3FF;
    // 0x8001A27C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8001A280: nop

    // 0x8001A284: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001A288: b           L_8001A338
    // 0x8001A28C: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
        goto L_8001A338;
    // 0x8001A28C: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
L_8001A290:
    // 0x8001A290: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x8001A294: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8001A298: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001A29C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001A2A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001A2A4: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001A2A8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8001A2AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001A2B0: nop

    // 0x8001A2B4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001A2B8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001A2BC: nop

    // 0x8001A2C0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8001A2C4: beql        $t6, $zero, L_8001A314
    if (ctx->r14 == 0) {
        // 0x8001A2C8: mfc1        $t6, $f10
        ctx->r14 = (int32_t)ctx->f10.u32l;
            goto L_8001A314;
    }
    goto skip_3;
    // 0x8001A2C8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    skip_3:
    // 0x8001A2CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001A2D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001A2D4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8001A2D8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001A2DC: nop

    // 0x8001A2E0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8001A2E4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001A2E8: nop

    // 0x8001A2EC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8001A2F0: bne         $t6, $zero, L_8001A308
    if (ctx->r14 != 0) {
        // 0x8001A2F4: nop
    
            goto L_8001A308;
    }
    // 0x8001A2F4: nop

    // 0x8001A2F8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8001A2FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001A300: b           L_8001A320
    // 0x8001A304: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8001A320;
    // 0x8001A304: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8001A308:
    // 0x8001A308: b           L_8001A320
    // 0x8001A30C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8001A320;
    // 0x8001A30C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8001A310: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
L_8001A314:
    // 0x8001A314: nop

    // 0x8001A318: bltz        $t6, L_8001A308
    if (SIGNED(ctx->r14) < 0) {
        // 0x8001A31C: nop
    
            goto L_8001A308;
    }
    // 0x8001A31C: nop

L_8001A320:
    // 0x8001A320: subu        $t9, $a2, $t6
    ctx->r25 = SUB32(ctx->r6, ctx->r14);
    // 0x8001A324: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x8001A328: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8001A32C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8001A330: nop

    // 0x8001A334: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
L_8001A338:
    // 0x8001A338: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8001A33C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001A340: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8001A344: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001A348: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8001A34C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8001A350: nop

    // 0x8001A354: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8001A358: beql        $t2, $zero, L_8001A3A8
    if (ctx->r10 == 0) {
        // 0x8001A35C: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_8001A3A8;
    }
    goto skip_4;
    // 0x8001A35C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_4:
    // 0x8001A360: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001A364: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001A368: sub.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x8001A36C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8001A370: nop

    // 0x8001A374: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001A378: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8001A37C: nop

    // 0x8001A380: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8001A384: bne         $t2, $zero, L_8001A39C
    if (ctx->r10 != 0) {
        // 0x8001A388: nop
    
            goto L_8001A39C;
    }
    // 0x8001A388: nop

    // 0x8001A38C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8001A390: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001A394: b           L_8001A3B4
    // 0x8001A398: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8001A3B4;
    // 0x8001A398: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8001A39C:
    // 0x8001A39C: b           L_8001A3B4
    // 0x8001A3A0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8001A3B4;
    // 0x8001A3A0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8001A3A4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_8001A3A8:
    // 0x8001A3A8: nop

    // 0x8001A3AC: bltz        $t2, L_8001A39C
    if (SIGNED(ctx->r10) < 0) {
        // 0x8001A3B0: nop
    
            goto L_8001A39C;
    }
    // 0x8001A3B0: nop

L_8001A3B4:
    // 0x8001A3B4: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x8001A3B8: sh          $t4, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r12;
    // 0x8001A3BC: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8001A3C0: lhu         $a0, 0x40($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X40);
    // 0x8001A3C4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8001A3C8: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
    // 0x8001A3CC: andi        $t5, $a1, 0x200
    ctx->r13 = ctx->r5 & 0X200;
    // 0x8001A3D0: bne         $t5, $zero, L_8001A3F0
    if (ctx->r13 != 0) {
        // 0x8001A3D4: subu        $t7, $v1, $a0
        ctx->r15 = SUB32(ctx->r3, ctx->r4);
            goto L_8001A3F0;
    }
    // 0x8001A3D4: subu        $t7, $v1, $a0
    ctx->r15 = SUB32(ctx->r3, ctx->r4);
    // 0x8001A3D8: andi        $t6, $a1, 0x3FF
    ctx->r14 = ctx->r5 & 0X3FF;
    // 0x8001A3DC: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8001A3E0: nop

    // 0x8001A3E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001A3E8: b           L_8001A498
    // 0x8001A3EC: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
        goto L_8001A498;
    // 0x8001A3EC: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
L_8001A3F0:
    // 0x8001A3F0: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8001A3F4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8001A3F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001A3FC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001A400: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001A404: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001A408: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001A40C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8001A410: nop

    // 0x8001A414: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8001A418: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8001A41C: nop

    // 0x8001A420: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8001A424: beql        $t0, $zero, L_8001A474
    if (ctx->r8 == 0) {
        // 0x8001A428: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_8001A474;
    }
    goto skip_5;
    // 0x8001A428: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_5:
    // 0x8001A42C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001A430: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001A434: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8001A438: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8001A43C: nop

    // 0x8001A440: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8001A444: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8001A448: nop

    // 0x8001A44C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8001A450: bne         $t0, $zero, L_8001A468
    if (ctx->r8 != 0) {
        // 0x8001A454: nop
    
            goto L_8001A468;
    }
    // 0x8001A454: nop

    // 0x8001A458: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x8001A45C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001A460: b           L_8001A480
    // 0x8001A464: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_8001A480;
    // 0x8001A464: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_8001A468:
    // 0x8001A468: b           L_8001A480
    // 0x8001A46C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_8001A480;
    // 0x8001A46C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8001A470: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_8001A474:
    // 0x8001A474: nop

    // 0x8001A478: bltz        $t0, L_8001A468
    if (SIGNED(ctx->r8) < 0) {
        // 0x8001A47C: nop
    
            goto L_8001A468;
    }
    // 0x8001A47C: nop

L_8001A480:
    // 0x8001A480: subu        $t3, $a2, $t0
    ctx->r11 = SUB32(ctx->r6, ctx->r8);
    // 0x8001A484: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x8001A488: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8001A48C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001A490: nop

    // 0x8001A494: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
L_8001A498:
    // 0x8001A498: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8001A49C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001A4A0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001A4A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001A4A8: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8001A4AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001A4B0: nop

    // 0x8001A4B4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8001A4B8: beql        $t6, $zero, L_8001A508
    if (ctx->r14 == 0) {
        // 0x8001A4BC: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_8001A508;
    }
    goto skip_6;
    // 0x8001A4BC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_6:
    // 0x8001A4C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001A4C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001A4C8: sub.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x8001A4CC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001A4D0: nop

    // 0x8001A4D4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001A4D8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001A4DC: nop

    // 0x8001A4E0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8001A4E4: bne         $t6, $zero, L_8001A4FC
    if (ctx->r14 != 0) {
        // 0x8001A4E8: nop
    
            goto L_8001A4FC;
    }
    // 0x8001A4E8: nop

    // 0x8001A4EC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8001A4F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001A4F4: b           L_8001A514
    // 0x8001A4F8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8001A514;
    // 0x8001A4F8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8001A4FC:
    // 0x8001A4FC: b           L_8001A514
    // 0x8001A500: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8001A514;
    // 0x8001A500: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8001A504: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_8001A508:
    // 0x8001A508: nop

    // 0x8001A50C: bltz        $t6, L_8001A4FC
    if (SIGNED(ctx->r14) < 0) {
        // 0x8001A510: nop
    
            goto L_8001A4FC;
    }
    // 0x8001A510: nop

L_8001A514:
    // 0x8001A514: lhu         $t9, 0x3C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3C);
    // 0x8001A518: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x8001A51C: addu        $t3, $t6, $v1
    ctx->r11 = ADD32(ctx->r14, ctx->r3);
    // 0x8001A520: sh          $t3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r11;
    // 0x8001A524: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x8001A528: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x8001A52C: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x8001A530: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
    // 0x8001A534: sh          $t0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r8;
    // 0x8001A538: sh          $t4, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r12;
    // 0x8001A53C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8001A540: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8001A544: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8001A548: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001A54C: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8001A550: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001A554: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001A558: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8001A55C: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x8001A560: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8001A564: lwc1        $f14, 0xC($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8001A568: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8001A56C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001A570: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8001A574: div.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001A578: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001A57C: add.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x8001A580: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x8001A584: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8001A588: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8001A58C: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8001A590: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001A594: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8001A598: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001A59C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001A5A0: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8001A5A4: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x8001A5A8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001A5AC: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8001A5B0: lwc1        $f18, 0x1C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x8001A5B4: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001A5B8: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8001A5BC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001A5C0: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001A5C4: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8001A5C8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8001A5CC: lwc1        $f4, 0x20($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X20);
    // 0x8001A5D0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8001A5D4: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001A5D8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8001A5DC: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001A5E0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001A5E4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001A5E8: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8001A5EC: lwc1        $f2, 0x24($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X24);
    // 0x8001A5F0: sub.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x8001A5F4: div.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001A5F8: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8001A5FC: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8001A600: lhu         $a0, 0x3C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3C);
L_8001A604:
    // 0x8001A604: jal         0x80003F30
    // 0x8001A608: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_80003F30_4B30(rdram, ctx);
        goto after_8;
    // 0x8001A608: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_8:
    // 0x8001A60C: lhu         $a0, 0x3E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3E);
    // 0x8001A610: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8001A614: jal         0x80003F30
    // 0x8001A618: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_9;
    // 0x8001A618: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x8001A61C: lhu         $a0, 0x40($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X40);
    // 0x8001A620: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8001A624: jal         0x80003F30
    // 0x8001A628: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_10;
    // 0x8001A628: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x8001A62C: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8001A630: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A634: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A638: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A63C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001A640: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8001A644: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001A648: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x8001A64C: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8001A650: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A654: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8001A658: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001A65C: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8001A660: mul.s       $f14, $f12, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8001A664: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A668: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A66C: mul.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8001A670: nop

    // 0x8001A674: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8001A678: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8001A67C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8001A680: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A684: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A688: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8001A68C: nop

    // 0x8001A690: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8001A694: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8001A698: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    // 0x8001A69C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A6A0: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8001A6A4: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x8001A6A8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A6AC: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8001A6B0: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001A6B4: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8001A6B8: nop

    // 0x8001A6BC: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001A6C0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8001A6C4: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8001A6C8: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x8001A6CC: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A6D0: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8001A6D4: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8001A6D8: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x8001A6DC: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A6E0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A6E4: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001A6E8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x8001A6EC: lhu         $t5, 0x3C($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X3C);
    // 0x8001A6F0: sh          $t5, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r13;
    // 0x8001A6F4: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x8001A6F8: sh          $t6, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r14;
    // 0x8001A6FC: lhu         $t7, 0x40($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X40);
    // 0x8001A700: swc1        $f18, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f18.u32l;
    // 0x8001A704: swc1        $f14, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f14.u32l;
    // 0x8001A708: sh          $t7, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r15;
    // 0x8001A70C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001A710: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    // 0x8001A714: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8001A718: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x8001A71C: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8001A720: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x8001A724: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8001A728: b           L_8001A81C
    // 0x8001A72C: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
        goto L_8001A81C;
    // 0x8001A72C: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
L_8001A730:
    // 0x8001A730: jal         0x80003F30
    // 0x8001A734: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    func_80003F30_4B30(rdram, ctx);
        goto after_11;
    // 0x8001A734: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_11:
    // 0x8001A738: lhu         $a0, 0x3E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3E);
    // 0x8001A73C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8001A740: jal         0x80003F30
    // 0x8001A744: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_12;
    // 0x8001A744: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x8001A748: lhu         $a0, 0x40($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X40);
    // 0x8001A74C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8001A750: jal         0x80003F30
    // 0x8001A754: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_80003F30_4B30(rdram, ctx);
        goto after_13;
    // 0x8001A754: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x8001A758: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8001A75C: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A760: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A764: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A768: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001A76C: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8001A770: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001A774: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x8001A778: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x8001A77C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A780: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8001A784: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8001A788: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8001A78C: mul.s       $f14, $f12, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8001A790: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A794: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A798: mul.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8001A79C: nop

    // 0x8001A7A0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8001A7A4: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8001A7A8: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x8001A7AC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A7B0: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A7B4: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001A7B8: nop

    // 0x8001A7BC: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8001A7C0: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8001A7C4: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x8001A7C8: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A7CC: mul.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8001A7D0: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x8001A7D4: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A7D8: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8001A7DC: nop

    // 0x8001A7E0: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8001A7E4: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8001A7E8: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8001A7EC: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x8001A7F0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8001A7F4: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8001A7F8: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8001A7FC: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x8001A800: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8001A804: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8001A808: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001A80C: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x8001A810: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8001A814: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8001A818: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
L_8001A81C:
    // 0x8001A81C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8001A820: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8001A824: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001A828: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8001A82C: c.eq.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d == ctx->f4.d;
    // 0x8001A830: nop

    // 0x8001A834: bc1tl       L_8001A864
    if (c1cs) {
        // 0x8001A838: cvt.d.s     $f10, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
            goto L_8001A864;
    }
    goto skip_7;
    // 0x8001A838: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    skip_7:
    // 0x8001A83C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8001A840: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8001A844: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8001A848: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8001A84C: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8001A850: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x8001A854: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8001A858: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8001A85C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8001A860: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
L_8001A864:
    // 0x8001A864: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x8001A868: nop

    // 0x8001A86C: bc1tl       L_8001A89C
    if (c1cs) {
        // 0x8001A870: cvt.d.s     $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
            goto L_8001A89C;
    }
    goto skip_8;
    // 0x8001A870: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    skip_8:
    // 0x8001A874: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8001A878: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8001A87C: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8001A880: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8001A884: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8001A888: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8001A88C: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8001A890: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x8001A894: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x8001A898: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
L_8001A89C:
    // 0x8001A89C: c.eq.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d == ctx->f8.d;
    // 0x8001A8A0: nop

    // 0x8001A8A4: bc1tl       L_8001A8D4
    if (c1cs) {
        // 0x8001A8A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8001A8D4;
    }
    goto skip_9;
    // 0x8001A8A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x8001A8AC: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8001A8B0: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8001A8B4: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001A8B8: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8001A8BC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8001A8C0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x8001A8C4: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001A8C8: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x8001A8CC: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x8001A8D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8001A8D4:
    // 0x8001A8D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001A8D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001A8DC: jr          $ra
    // 0x8001A8E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x8001A8E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8001481C_1541C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001481C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014824: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80014828: jal         0x80001EB0
    // 0x8001482C: lhu         $a0, 0x28($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X28);
    func_80001EB0_2AB0(rdram, ctx);
        goto after_0;
    // 0x8001482C: lhu         $a0, 0x28($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X28);
    after_0:
    // 0x80014830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014838: jr          $ra
    // 0x8001483C: nop

    TRACE_RETURN()
    return;
    // 0x8001483C: nop

;}
RECOMP_FUNC void func_800373DC_37FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800373DC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800373E0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x800373E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800373E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800373EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800373F0: addiu       $t6, $zero, 0x240
    ctx->r14 = ADD32(0, 0X240);
    // 0x800373F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800373F8: sh          $t6, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r14;
    // 0x800373FC: jal         0x80003728
    // 0x80037400: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x80037400: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x80037404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003740C: jr          $ra
    // 0x80037410: nop

    TRACE_RETURN()
    return;
    // 0x80037410: nop

;}
RECOMP_FUNC void func_801DB418_597328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB418: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801DB41C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801DB420: lhu         $v1, 0x94($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X94);
    // 0x801DB424: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x801DB428: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801DB42C: subu        $t1, $t7, $v1
    ctx->r9 = SUB32(ctx->r15, ctx->r3);
    // 0x801DB430: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x801DB434: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x801DB438: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801DB43C: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x801DB440: bne         $at, $zero, L_801DB45C
    if (ctx->r1 != 0) {
        // 0x801DB444: andi        $a3, $a2, 0xFFFF
        ctx->r7 = ctx->r6 & 0XFFFF;
            goto L_801DB45C;
    }
    // 0x801DB444: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x801DB448: negu        $a2, $a3
    ctx->r6 = SUB32(0, ctx->r7);
    // 0x801DB44C: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x801DB450: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x801DB454: b           L_801DB46C
    // 0x801DB458: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
        goto L_801DB46C;
    // 0x801DB458: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_801DB45C:
    // 0x801DB45C: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x801DB460: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x801DB464: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801DB468: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_801DB46C:
    // 0x801DB46C: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801DB470: beq         $at, $zero, L_801DB484
    if (ctx->r1 == 0) {
        // 0x801DB474: addu        $t8, $v1, $a2
        ctx->r24 = ADD32(ctx->r3, ctx->r6);
            goto L_801DB484;
    }
    // 0x801DB474: addu        $t8, $v1, $a2
    ctx->r24 = ADD32(ctx->r3, ctx->r6);
    // 0x801DB478: sh          $a1, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r5;
    // 0x801DB47C: jr          $ra
    // 0x801DB480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DB480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DB484:
    // 0x801DB484: sh          $t8, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r24;
    // 0x801DB488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DB48C: jr          $ra
    // 0x801DB490: nop

    TRACE_RETURN()
    return;
    // 0x801DB490: nop

;}
RECOMP_FUNC void func_801EE330_5AA240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE330: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801EE334: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801EE338: lbu         $a3, 0x0($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X0);
    // 0x801EE33C: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x801EE340: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EE344: subu        $t8, $a3, $t7
    ctx->r24 = SUB32(ctx->r7, ctx->r15);
    // 0x801EE348: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801EE34C: beq         $at, $zero, L_801EE364
    if (ctx->r1 == 0) {
        // 0x801EE350: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_801EE364;
    }
    // 0x801EE350: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801EE354: subu        $t9, $a3, $t6
    ctx->r25 = SUB32(ctx->r7, ctx->r14);
    // 0x801EE358: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x801EE35C: jr          $ra
    // 0x801EE360: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801EE360: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EE364:
    // 0x801EE364: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x801EE368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801EE36C: jr          $ra
    // 0x801EE370: nop

    TRACE_RETURN()
    return;
    // 0x801EE370: nop

;}
RECOMP_FUNC void func_801D4BF0_590B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4BF0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801D4BF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D4BF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801D4BFC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801D4C00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D4C04: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x801D4C08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4C0C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D4C10: lhu         $a0, 0x1A($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X1A);
    // 0x801D4C14: jal         0x80003DC0
    // 0x801D4C18: addiu       $s2, $s2, 0x80
    ctx->r18 = ADD32(ctx->r18, 0X80);
    func_80003DC0_49C0(rdram, ctx);
        goto after_0;
    // 0x801D4C18: addiu       $s2, $s2, 0x80
    ctx->r18 = ADD32(ctx->r18, 0X80);
    after_0:
    // 0x801D4C1C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801D4C20: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D4C24: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4C28: lwc1        $f6, -0x53A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X53A0);
    // 0x801D4C2C: jal         0x80003A94
    // 0x801D4C30: div.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    func_80003A94_4694(rdram, ctx);
        goto after_1;
    // 0x801D4C30: div.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    after_1:
    // 0x801D4C34: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D4C38: bgez        $v0, L_801D4C50
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D4C3C: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D4C50;
    }
    // 0x801D4C3C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D4C40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D4C44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D4C48: nop

    // 0x801D4C4C: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_801D4C50:
    // 0x801D4C50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4C54: ldc1        $f4, -0x5398($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5398);
    // 0x801D4C58: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x801D4C5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801D4C60: mul.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x801D4C64: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D4C68: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801D4C6C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x801D4C70: nop

    // 0x801D4C74: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801D4C78: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x801D4C7C: nop

    // 0x801D4C80: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x801D4C84: beq         $a0, $zero, L_801D4CD0
    if (ctx->r4 == 0) {
        // 0x801D4C88: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_801D4CD0;
    }
    // 0x801D4C88: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D4C8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D4C90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801D4C94: sub.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801D4C98: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x801D4C9C: nop

    // 0x801D4CA0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801D4CA4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x801D4CA8: nop

    // 0x801D4CAC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x801D4CB0: bne         $a0, $zero, L_801D4CC8
    if (ctx->r4 != 0) {
        // 0x801D4CB4: nop
    
            goto L_801D4CC8;
    }
    // 0x801D4CB4: nop

    // 0x801D4CB8: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x801D4CBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D4CC0: b           L_801D4CE0
    // 0x801D4CC4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_801D4CE0;
    // 0x801D4CC4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_801D4CC8:
    // 0x801D4CC8: b           L_801D4CE0
    // 0x801D4CCC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_801D4CE0;
    // 0x801D4CCC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_801D4CD0:
    // 0x801D4CD0: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x801D4CD4: nop

    // 0x801D4CD8: bltz        $a0, L_801D4CC8
    if (SIGNED(ctx->r4) < 0) {
        // 0x801D4CDC: nop
    
            goto L_801D4CC8;
    }
    // 0x801D4CDC: nop

L_801D4CE0:
    // 0x801D4CE0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801D4CE4: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x801D4CE8: jal         0x80003DC0
    // 0x801D4CEC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80003DC0_49C0(rdram, ctx);
        goto after_2;
    // 0x801D4CEC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_2:
    // 0x801D4CF0: lhu         $t5, 0xB0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XB0);
    // 0x801D4CF4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D4CF8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801D4CFC: bgez        $t5, L_801D4D10
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801D4D00: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D4D10;
    }
    // 0x801D4D00: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D4D04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D4D08: nop

    // 0x801D4D0C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801D4D10:
    // 0x801D4D10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4D14: lwc1        $f6, -0x2E34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D4D18: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x801D4D1C: lhu         $a0, 0x66($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X66);
    // 0x801D4D20: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D4D24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D4D28: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x801D4D2C: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801D4D30: div.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801D4D34: jal         0x80003D88
    // 0x801D4D38: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    func_80003D88_4988(rdram, ctx);
        goto after_3;
    // 0x801D4D38: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x801D4D3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D4D40: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x801D4D44: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x801D4D48: jal         0x8001D394
    // 0x801D4D4C: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_4;
    // 0x801D4D4C: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x801D4D50: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D4D54: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D4D58: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x801D4D5C: jal         0x8001D460
    // 0x801D4D60: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_8001D460_1E060(rdram, ctx);
        goto after_5;
    // 0x801D4D60: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x801D4D64: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801D4D68: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x801D4D6C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D4D70: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x801D4D74: lbu         $t6, 0x98($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X98);
    // 0x801D4D78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D4D7C: beq         $t6, $at, L_801D4DFC
    if (ctx->r14 == ctx->r1) {
        // 0x801D4D80: nop
    
            goto L_801D4DFC;
    }
    // 0x801D4D80: nop

    // 0x801D4D84: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D4D88: lw          $v0, -0x39EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39EC);
    // 0x801D4D8C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D4D90: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801D4D94: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4D98: lw          $t7, -0x39F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39F4);
    // 0x801D4D9C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801D4DA0: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801D4DA4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D4DA8: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x801D4DAC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801D4DB0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D4DB4: lwc1        $f8, 0xC($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XC);
    // 0x801D4DB8: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D4DBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D4DC0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D4DC4: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x801D4DC8: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D4DCC: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D4DD0: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x801D4DD4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D4DD8: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801D4DDC: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x801D4DE0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D4DE4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801D4DE8: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D4DEC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D4DF0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D4DF4: b           L_801D4E74
    // 0x801D4DF8: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
        goto L_801D4E74;
    // 0x801D4DF8: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
L_801D4DFC:
    // 0x801D4DFC: lw          $v0, -0x39CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39CC);
    // 0x801D4E00: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D4E04: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801D4E08: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4E0C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801D4E10: lw          $t9, -0x39EC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39EC);
    // 0x801D4E14: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D4E18: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x801D4E1C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801D4E20: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D4E24: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x801D4E28: lwc1        $f6, 0xC($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0XC);
    // 0x801D4E2C: lwc1        $f4, 0xC($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XC);
    // 0x801D4E30: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x801D4E34: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D4E38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D4E3C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D4E40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D4E44: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D4E48: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801D4E4C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D4E50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D4E54: sub.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d - ctx->f10.d;
    // 0x801D4E58: add.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d + ctx->f8.d;
    // 0x801D4E5C: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x801D4E60: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801D4E64: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D4E68: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D4E6C: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801D4E70: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
L_801D4E74:
    // 0x801D4E74: lhu         $t0, 0x68($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X68);
    // 0x801D4E78: lhu         $t1, 0x66($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X66);
    // 0x801D4E7C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D4E80: beql        $t0, $t1, L_801D4EA0
    if (ctx->r8 == ctx->r9) {
        // 0x801D4E84: swc1        $f10, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->f10.u32l;
            goto L_801D4EA0;
    }
    goto skip_0;
    // 0x801D4E84: swc1        $f10, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f10.u32l;
    skip_0:
    // 0x801D4E88: lbu         $v0, 0x62($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X62);
    // 0x801D4E8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D4E90: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D4E94: bnel        $v0, $zero, L_801D4EBC
    if (ctx->r2 != 0) {
        // 0x801D4E98: lwc1        $f0, 0x0($s2)
        ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
            goto L_801D4EBC;
    }
    goto skip_1;
    // 0x801D4E98: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x801D4E9C: swc1        $f10, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f10.u32l;
L_801D4EA0:
    // 0x801D4EA0: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D4EA4: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x801D4EA8: lhu         $t2, 0x66($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X66);
    // 0x801D4EAC: sb          $zero, 0x62($s0)
    MEM_B(0X62, ctx->r16) = 0;
    // 0x801D4EB0: b           L_801D4F38
    // 0x801D4EB4: sh          $t2, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r10;
        goto L_801D4F38;
    // 0x801D4EB4: sh          $t2, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r10;
    // 0x801D4EB8: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
L_801D4EBC:
    // 0x801D4EBC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D4EC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D4EC4: sub.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801D4EC8: bgez        $v0, L_801D4EE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D4ECC: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801D4EE0;
    }
    // 0x801D4ECC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D4ED0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D4ED4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D4ED8: nop

    // 0x801D4EDC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_801D4EE0:
    // 0x801D4EE0: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D4EE4: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801D4EE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D4EEC: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x801D4EF0: add.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801D4EF4: swc1        $f4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f4.u32l;
    // 0x801D4EF8: lbu         $t3, 0x62($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X62);
    // 0x801D4EFC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D4F00: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x801D4F04: sub.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x801D4F08: bgez        $t3, L_801D4F1C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801D4F0C: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801D4F1C;
    }
    // 0x801D4F0C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D4F10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D4F14: nop

    // 0x801D4F18: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801D4F1C:
    // 0x801D4F1C: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D4F20: div.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801D4F24: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x801D4F28: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x801D4F2C: lbu         $t4, 0x62($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X62);
    // 0x801D4F30: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801D4F34: sb          $t5, 0x62($s0)
    MEM_B(0X62, ctx->r16) = ctx->r13;
L_801D4F38:
    // 0x801D4F38: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D4F3C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4F40: lwc1        $f2, -0x2E34($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D4F44: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x801D4F48: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D4F4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D4F50: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801D4F54: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4F58: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801D4F5C: mul.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x801D4F60: nop

    // 0x801D4F64: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D4F68: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801D4F6C: sub.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f8.d - ctx->f4.d;
    // 0x801D4F70: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801D4F74: bc1f        L_801D4F84
    if (!c1cs) {
        // 0x801D4F78: sqrt.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
            goto L_801D4F84;
    }
    // 0x801D4F78: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    // 0x801D4F7C: b           L_801D4F88
    // 0x801D4F80: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801D4F88;
    // 0x801D4F80: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_801D4F84:
    // 0x801D4F84: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801D4F88:
    // 0x801D4F88: ldc1        $f8, -0x5390($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5390);
    // 0x801D4F8C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D4F90: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x801D4F94: nop

    // 0x801D4F98: bc1f        L_801D4FA8
    if (!c1cs) {
        // 0x801D4F9C: nop
    
            goto L_801D4FA8;
    }
    // 0x801D4F9C: nop

    // 0x801D4FA0: b           L_801D5190
    // 0x801D4FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D5190;
    // 0x801D4FA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4FA8:
    // 0x801D4FA8: mul.s       $f4, $f16, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x801D4FAC: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801D4FB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D4FB4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D4FB8: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D4FBC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x801D4FC0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x801D4FC4: div.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801D4FC8: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x801D4FCC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D4FD0: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    // 0x801D4FD4: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801D4FD8: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801D4FDC: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D4FE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D4FE4: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801D4FE8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x801D4FEC: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801D4FF0: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801D4FF4: jal         0x8001D5B8
    // 0x801D4FF8: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_6;
    // 0x801D4FF8: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x801D4FFC: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D5000: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D5004: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D5008: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D500C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D5010: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D5014: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D5018: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D501C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D5020: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801D5024: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D5028: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x801D502C: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801D5030: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D5034: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D5038: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x801D503C: lbu         $v1, 0xD0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD0);
    // 0x801D5040: beql        $v1, $zero, L_801D5104
    if (ctx->r3 == 0) {
        // 0x801D5044: lwc1        $f8, 0x0($s1)
        ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
            goto L_801D5104;
    }
    goto skip_2;
    // 0x801D5044: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    skip_2:
    // 0x801D5048: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D504C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801D5050: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D5054: add.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801D5058: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D505C: bgez        $v1, L_801D5070
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D5060: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801D5070;
    }
    // 0x801D5060: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D5064: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D5068: nop

    // 0x801D506C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_801D5070:
    // 0x801D5070: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D5074: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D5078: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D507C: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D5080: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D5084: sub.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801D5088: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x801D508C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801D5090: lbu         $t6, 0xD0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XD0);
    // 0x801D5094: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801D5098: bgez        $t6, L_801D50AC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D509C: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801D50AC;
    }
    // 0x801D509C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D50A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D50A4: nop

    // 0x801D50A8: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_801D50AC:
    // 0x801D50AC: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801D50B0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D50B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D50B8: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801D50BC: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x801D50C0: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x801D50C4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x801D50C8: lbu         $t7, 0xD0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD0);
    // 0x801D50CC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x801D50D0: bgez        $t7, L_801D50E4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801D50D4: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801D50E4;
    }
    // 0x801D50D4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D50D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D50DC: nop

    // 0x801D50E0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801D50E4:
    // 0x801D50E4: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D50E8: div.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D50EC: sub.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x801D50F0: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x801D50F4: lbu         $t8, 0xD0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD0);
    // 0x801D50F8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801D50FC: sb          $t9, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r25;
    // 0x801D5100: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
L_801D5104:
    // 0x801D5104: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D5108: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D510C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x801D5110: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801D5114: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D5118: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801D511C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x801D5120: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x801D5124: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D5128: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D512C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801D5130: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D5134: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x801D5138: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801D513C: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801D5140: nop

    // 0x801D5144: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x801D5148: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D514C: jal         0x80003A94
    // 0x801D5150: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_80003A94_4694(rdram, ctx);
        goto after_7;
    // 0x801D5150: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_7:
    // 0x801D5154: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5158: sh          $v0, -0x2E60($at)
    MEM_H(-0X2E60, ctx->r1) = ctx->r2;
    // 0x801D515C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D5160: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D5164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D5168: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D516C: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D5170: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x801D5174: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D5178: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D517C: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D5180: swc1        $f4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f4.u32l;
    // 0x801D5184: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D5188: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D518C: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
L_801D5190:
    // 0x801D5190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D5194: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D5198: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801D519C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801D51A0: jr          $ra
    // 0x801D51A4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x801D51A4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801E1554_59D464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1554: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1558: jr          $ra
    // 0x801E155C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E155C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F77F4_5B3704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F77F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F77F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F77FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F7800: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801F7804: jal         0x801F9988
    // 0x801F7808: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801F9988_5B5898(rdram, ctx);
        goto after_0;
    // 0x801F7808: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F780C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F7810: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801F7814: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801F7818: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F781C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801F7820: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F7824: sb          $zero, -0x768($at)
    MEM_B(-0X768, ctx->r1) = 0;
    // 0x801F7828: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801F782C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801F7830: lhu         $t8, -0x51DA($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X51DA);
    // 0x801F7834: bnel        $t8, $zero, L_801F7A94
    if (ctx->r24 != 0) {
        // 0x801F7838: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F7A94;
    }
    goto skip_0;
    // 0x801F7838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F783C: jal         0x8021A4DC
    // 0x801F7840: nop

    func_8021A4DC_5D59AC(rdram, ctx);
        goto after_1;
    // 0x801F7840: nop

    after_1:
    // 0x801F7844: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801F7848: lw          $t9, -0x3A00($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A00);
    // 0x801F784C: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801F7850: addiu       $s0, $s0, -0x33D0
    ctx->r16 = ADD32(ctx->r16, -0X33D0);
    // 0x801F7854: beq         $t9, $zero, L_801F78FC
    if (ctx->r25 == 0) {
        // 0x801F7858: nop
    
            goto L_801F78FC;
    }
    // 0x801F7858: nop

    // 0x801F785C: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x801F7860: jal         0x80033024
    // 0x801F7864: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    func_80033024_33C24(rdram, ctx);
        goto after_2;
    // 0x801F7864: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    after_2:
    // 0x801F7868: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F786C: lw          $a1, -0x3A00($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A00);
    // 0x801F7870: jal         0x80033024
    // 0x801F7874: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    func_80033024_33C24(rdram, ctx);
        goto after_3;
    // 0x801F7874: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    after_3:
    // 0x801F7878: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x801F787C: jal         0x80033024
    // 0x801F7880: lw          $a1, 0x94($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X94);
    func_80033024_33C24(rdram, ctx);
        goto after_4;
    // 0x801F7880: lw          $a1, 0x94($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X94);
    after_4:
    // 0x801F7884: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x801F7888: jal         0x80033024
    // 0x801F788C: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    func_80033024_33C24(rdram, ctx);
        goto after_5;
    // 0x801F788C: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    after_5:
    // 0x801F7890: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x801F7894: jal         0x80033024
    // 0x801F7898: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80033024_33C24(rdram, ctx);
        goto after_6;
    // 0x801F7898: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_6:
    // 0x801F789C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F78A0: lw          $a1, -0x3A00($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A00);
    // 0x801F78A4: jal         0x80033024
    // 0x801F78A8: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    func_80033024_33C24(rdram, ctx);
        goto after_7;
    // 0x801F78A8: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    after_7:
    // 0x801F78AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F78B0: lw          $a1, -0x3A00($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A00);
    // 0x801F78B4: jal         0x80033024
    // 0x801F78B8: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    func_80033024_33C24(rdram, ctx);
        goto after_8;
    // 0x801F78B8: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    after_8:
    // 0x801F78BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F78C0: lw          $a0, -0x3A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A00);
    // 0x801F78C4: jal         0x80033024
    // 0x801F78C8: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    func_80033024_33C24(rdram, ctx);
        goto after_9;
    // 0x801F78C8: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    after_9:
    // 0x801F78CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F78D0: lw          $a0, -0x3A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A00);
    // 0x801F78D4: jal         0x80033024
    // 0x801F78D8: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    func_80033024_33C24(rdram, ctx);
        goto after_10;
    // 0x801F78D8: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    after_10:
    // 0x801F78DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F78E0: lw          $a0, -0x3A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A00);
    // 0x801F78E4: jal         0x80033024
    // 0x801F78E8: lw          $a1, 0x94($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X94);
    func_80033024_33C24(rdram, ctx);
        goto after_11;
    // 0x801F78E8: lw          $a1, 0x94($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X94);
    after_11:
    // 0x801F78EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F78F0: lw          $a0, -0x3A00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A00);
    // 0x801F78F4: jal         0x80033024
    // 0x801F78F8: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    func_80033024_33C24(rdram, ctx);
        goto after_12;
    // 0x801F78F8: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    after_12:
L_801F78FC:
    // 0x801F78FC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801F7900: lhu         $t0, 0x7B00($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7B00);
    // 0x801F7904: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801F7908: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x801F790C: beq         $t0, $at, L_801F79B4
    if (ctx->r8 == ctx->r1) {
        // 0x801F7910: addiu       $s0, $s0, -0x33D0
        ctx->r16 = ADD32(ctx->r16, -0X33D0);
            goto L_801F79B4;
    }
    // 0x801F7910: addiu       $s0, $s0, -0x33D0
    ctx->r16 = ADD32(ctx->r16, -0X33D0);
    // 0x801F7914: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801F7918: lh          $t2, -0x3AB0($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X3AB0);
    // 0x801F791C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801F7920: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x801F7924: addiu       $t3, $t2, 0xC8
    ctx->r11 = ADD32(ctx->r10, 0XC8);
    // 0x801F7928: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x801F792C: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801F7930: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F7934: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801F7938: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x801F793C: nop

    // 0x801F7940: bc1f        L_801F79B4
    if (!c1cs) {
        // 0x801F7944: nop
    
            goto L_801F79B4;
    }
    // 0x801F7944: nop

    // 0x801F7948: jal         0x801D23C0
    // 0x801F794C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    func_801D23C0_58E2D0(rdram, ctx);
        goto after_13;
    // 0x801F794C: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_13:
    // 0x801F7950: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801F7954: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801F7958: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x801F795C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x801F7960: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801F7964: addiu       $a1, $a1, -0x3340
    ctx->r5 = ADD32(ctx->r5, -0X3340);
    // 0x801F7968: and         $t4, $v1, $at
    ctx->r12 = ctx->r3 & ctx->r1;
    // 0x801F796C: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x801F7970: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x801F7974: sh          $t5, 0x2E41($at)
    MEM_H(0X2E41, ctx->r1) = ctx->r13;
    // 0x801F7978: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x801F797C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801F7980: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801F7984: nop

    // 0x801F7988: sw          $t7, 0x2E45($at)
    MEM_W(0X2E45, ctx->r1) = ctx->r15;
    // 0x801F798C: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x801F7990: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801F7994: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801F7998: nop

    // 0x801F799C: sw          $t9, 0x2E49($at)
    MEM_W(0X2E49, ctx->r1) = ctx->r25;
    // 0x801F79A0: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x801F79A4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801F79A8: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x801F79AC: nop

    // 0x801F79B0: sw          $t1, 0x2E4D($at)
    MEM_W(0X2E4D, ctx->r1) = ctx->r9;
L_801F79B4:
    // 0x801F79B4: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801F79B8: lh          $t3, -0x3AB0($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X3AB0);
    // 0x801F79BC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801F79C0: lw          $t2, -0x39F4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39F4);
    // 0x801F79C4: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x801F79C8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F79CC: lwc1        $f10, 0xC($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XC);
    // 0x801F79D0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F79D4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801F79D8: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x801F79DC: nop

    // 0x801F79E0: bc1f        L_801F79F8
    if (!c1cs) {
        // 0x801F79E4: nop
    
            goto L_801F79F8;
    }
    // 0x801F79E4: nop

    // 0x801F79E8: jal         0x801DD6E0
    // 0x801F79EC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_14;
    // 0x801F79EC: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_14:
    // 0x801F79F0: jal         0x801FB230
    // 0x801F79F4: nop

    func_801FB230_5B7140(rdram, ctx);
        goto after_15;
    // 0x801F79F4: nop

    after_15:
L_801F79F8:
    // 0x801F79F8: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801F79FC: lbu         $t4, -0x3AB3($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3AB3);
    // 0x801F7A00: beq         $t4, $zero, L_801F7A44
    if (ctx->r12 == 0) {
        // 0x801F7A04: nop
    
            goto L_801F7A44;
    }
    // 0x801F7A04: nop

    // 0x801F7A08: jal         0x801FB270
    // 0x801F7A0C: nop

    func_801FB270_5B7180(rdram, ctx);
        goto after_16;
    // 0x801F7A0C: nop

    after_16:
    // 0x801F7A10: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F7A14: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801F7A18: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801F7A1C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7A20: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7A24: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801F7A28: sw          $zero, -0x51F8($at)
    MEM_W(-0X51F8, ctx->r1) = 0;
    // 0x801F7A2C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801F7A30: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7A34: addiu       $a0, $a0, 0x7AA4
    ctx->r4 = ADD32(ctx->r4, 0X7AA4);
    // 0x801F7A38: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F7A3C: jal         0x8003521C
    // 0x801F7A40: sw          $zero, -0x51FC($at)
    MEM_W(-0X51FC, ctx->r1) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_17;
    // 0x801F7A40: sw          $zero, -0x51FC($at)
    MEM_W(-0X51FC, ctx->r1) = 0;
    after_17:
L_801F7A44:
    // 0x801F7A44: jal         0x801FB2D0
    // 0x801F7A48: nop

    func_801FB2D0_5B71E0(rdram, ctx);
        goto after_18;
    // 0x801F7A48: nop

    after_18:
    // 0x801F7A4C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x801F7A50: lbu         $t7, 0x7AE9($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7AE9);
    // 0x801F7A54: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801F7A58: beql        $t7, $zero, L_801F7A94
    if (ctx->r15 == 0) {
        // 0x801F7A5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F7A94;
    }
    goto skip_1;
    // 0x801F7A5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F7A60: lbu         $t8, -0x3AB3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3AB3);
    // 0x801F7A64: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801F7A68: addiu       $t9, $t9, 0x7AA4
    ctx->r25 = ADD32(ctx->r25, 0X7AA4);
    // 0x801F7A6C: bnel        $t8, $zero, L_801F7A94
    if (ctx->r24 != 0) {
        // 0x801F7A70: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F7A94;
    }
    goto skip_2;
    // 0x801F7A70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801F7A74: jal         0x801FB270
    // 0x801F7A78: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_801FB270_5B7180(rdram, ctx);
        goto after_19;
    // 0x801F7A78: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_19:
    // 0x801F7A7C: lw          $t0, 0xD4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD4);
    // 0x801F7A80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F7A84: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x801F7A88: jal         0x8003521C
    // 0x801F7A8C: sw          $t1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_20;
    // 0x801F7A8C: sw          $t1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r9;
    after_20:
    // 0x801F7A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F7A94:
    // 0x801F7A94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F7A98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F7A9C: jr          $ra
    // 0x801F7AA0: nop

    TRACE_RETURN()
    return;
    // 0x801F7AA0: nop

;}
RECOMP_FUNC void func_801CBF0C_587E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBF0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CBF10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CBF14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CBF18: jal         0x801CC000
    // 0x801CBF1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801CC000_587F10(rdram, ctx);
        goto after_0;
    // 0x801CBF1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801CBF20: jal         0x801CBFCC
    // 0x801CBF24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CBFCC_587EDC(rdram, ctx);
        goto after_1;
    // 0x801CBF24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801CBF28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBF2C: lw          $a1, 0xE4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE4);
    // 0x801CBF30: jal         0x801CC4C0
    // 0x801CBF34: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    func_801CC4C0_5883D0(rdram, ctx);
        goto after_2;
    // 0x801CBF34: lw          $a2, 0xE8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE8);
    after_2:
    // 0x801CBF38: jal         0x801CD084
    // 0x801CBF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD084_588F94(rdram, ctx);
        goto after_3;
    // 0x801CBF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801CBF40: jal         0x801E7E90
    // 0x801CBF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7E90_5A3DA0(rdram, ctx);
        goto after_4;
    // 0x801CBF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801CBF48: beql        $v0, $zero, L_801CBF70
    if (ctx->r2 == 0) {
        // 0x801CBF4C: lbu         $t6, 0x60($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X60);
            goto L_801CBF70;
    }
    goto skip_0;
    // 0x801CBF4C: lbu         $t6, 0x60($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X60);
    skip_0:
    // 0x801CBF50: jal         0x801F6FE8
    // 0x801CBF54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F6FE8_5B2EF8(rdram, ctx);
        goto after_5;
    // 0x801CBF54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801CBF58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBF5C: jal         0x801DACDC
    // 0x801CBF60: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801CBF60: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    after_6:
    // 0x801CBF64: b           L_801CBFBC
    // 0x801CBF68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CBFBC;
    // 0x801CBF68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBF6C: lbu         $t6, 0x60($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X60);
L_801CBF70:
    // 0x801CBF70: bne         $t6, $zero, L_801CBF90
    if (ctx->r14 != 0) {
        // 0x801CBF74: nop
    
            goto L_801CBF90;
    }
    // 0x801CBF74: nop

    // 0x801CBF78: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801CBF7C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CBF80: lhu         $t7, 0x86($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X86);
    // 0x801CBF84: bne         $t7, $zero, L_801CBF90
    if (ctx->r15 != 0) {
        // 0x801CBF88: nop
    
            goto L_801CBF90;
    }
    // 0x801CBF88: nop

    // 0x801CBF8C: sb          $t8, 0x84($v0)
    MEM_B(0X84, ctx->r2) = ctx->r24;
L_801CBF90:
    // 0x801CBF90: jal         0x801E7DE8
    // 0x801CBF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_7;
    // 0x801CBF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801CBF98: bne         $v0, $zero, L_801CBFB0
    if (ctx->r2 != 0) {
        // 0x801CBF9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CBFB0;
    }
    // 0x801CBF9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBFA0: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801CBFA4: lhu         $t0, 0x86($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X86);
    // 0x801CBFA8: bnel        $t0, $zero, L_801CBFBC
    if (ctx->r8 != 0) {
        // 0x801CBFAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801CBFBC;
    }
    goto skip_1;
    // 0x801CBFAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
L_801CBFB0:
    // 0x801CBFB0: jal         0x801DACDC
    // 0x801CBFB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_8;
    // 0x801CBFB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x801CBFB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CBFBC:
    // 0x801CBFBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CBFC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBFC4: jr          $ra
    // 0x801CBFC8: nop

    TRACE_RETURN()
    return;
    // 0x801CBFC8: nop

;}
RECOMP_FUNC void func_801E14B8_59D3C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14BC: jr          $ra
    // 0x801E14C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F5420_5B1330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5420: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F5424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F5428: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F542C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5430: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    // 0x801F5434: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F5438: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F543C: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F5440: sb          $t7, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r15;
    // 0x801F5444: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F5448: jalr        $t9
    // 0x801F544C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F544C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F5450: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F5454: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5458: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F545C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F5460: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801F5464: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F5468: nop

    // 0x801F546C: bc1fl       L_801F54A8
    if (!c1cs) {
        // 0x801F5470: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F54A8;
    }
    goto skip_0;
    // 0x801F5470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F5474: lbu         $t8, 0x30($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X30);
    // 0x801F5478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F547C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F5480: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x801F5484: jal         0x801DACDC
    // 0x801F5488: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F5488: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    after_1:
    // 0x801F548C: jal         0x801E8178
    // 0x801F5490: nop

    func_801E8178_5A4088(rdram, ctx);
        goto after_2;
    // 0x801F5490: nop

    after_2:
    // 0x801F5494: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F5498: lwc1        $f10, -0x3D48($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3D48);
    // 0x801F549C: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801F54A0: swc1        $f10, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f10.u32l;
    // 0x801F54A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F54A8:
    // 0x801F54A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F54AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F54B0: jr          $ra
    // 0x801F54B4: nop

    TRACE_RETURN()
    return;
    // 0x801F54B4: nop

;}
RECOMP_FUNC void func_801E0F28_59CE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0F30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0F34: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801E0F38: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E0F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E0F40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E0F44: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801E0F48: lbu         $a2, 0x43A0($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43A0);
    // 0x801E0F4C: jal         0x801E7B24
    // 0x801E0F50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E7B24_5A3A34(rdram, ctx);
        goto after_0;
    // 0x801E0F50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x801E0F54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E0F58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E0F5C: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E0F60: beq         $v0, $at, L_801E0F70
    if (ctx->r2 == ctx->r1) {
        // 0x801E0F64: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E0F70;
    }
    // 0x801E0F64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E0F68: bnel        $v0, $at, L_801E0F7C
    if (ctx->r2 != ctx->r1) {
        // 0x801E0F6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0F7C;
    }
    goto skip_0;
    // 0x801E0F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801E0F70:
    // 0x801E0F70: jal         0x801E83F8
    // 0x801E0F74: nop

    func_801E83F8_5A4308(rdram, ctx);
        goto after_1;
    // 0x801E0F74: nop

    after_1:
    // 0x801E0F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0F7C:
    // 0x801E0F7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0F80: jr          $ra
    // 0x801E0F84: nop

    TRACE_RETURN()
    return;
    // 0x801E0F84: nop

;}
RECOMP_FUNC void func_801F9354_5B5264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9354: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F9358: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801F935C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9360: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x801F9364: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x801F9368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F936C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9370: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x801F9374: lhu         $t7, 0x2FEC($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2FEC);
    // 0x801F9378: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F937C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F9380: sh          $t7, -0x500A($at)
    MEM_H(-0X500A, ctx->r1) = ctx->r15;
    // 0x801F9384: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9388: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F938C: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x801F9390: lh          $t9, 0x2FEE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2FEE);
    // 0x801F9394: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F9398: sh          $t9, -0x5008($at)
    MEM_H(-0X5008, ctx->r1) = ctx->r25;
    // 0x801F939C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F93A0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F93A4: addu        $t0, $v0, $a0
    ctx->r8 = ADD32(ctx->r2, ctx->r4);
    // 0x801F93A8: lh          $t1, 0x2FF0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2FF0);
    // 0x801F93AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F93B0: sh          $t1, -0x5006($at)
    MEM_H(-0X5006, ctx->r1) = ctx->r9;
    // 0x801F93B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F93B8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F93BC: addu        $t2, $v0, $a0
    ctx->r10 = ADD32(ctx->r2, ctx->r4);
    // 0x801F93C0: lh          $t3, 0x2FF2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2FF2);
    // 0x801F93C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F93C8: sh          $t3, -0x5004($at)
    MEM_H(-0X5004, ctx->r1) = ctx->r11;
    // 0x801F93CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F93D0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F93D4: addu        $t4, $v0, $a0
    ctx->r12 = ADD32(ctx->r2, ctx->r4);
    // 0x801F93D8: lh          $t5, 0x2FF4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2FF4);
    // 0x801F93DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F93E0: sh          $t5, -0x5002($at)
    MEM_H(-0X5002, ctx->r1) = ctx->r13;
    // 0x801F93E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F93E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F93EC: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x801F93F0: lhu         $t7, 0x2FE2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2FE2);
    // 0x801F93F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F93F8: sh          $t7, -0x5014($at)
    MEM_H(-0X5014, ctx->r1) = ctx->r15;
    // 0x801F93FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9400: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9404: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x801F9408: lh          $t9, 0x2FE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2FE4);
    // 0x801F940C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F9410: sh          $t9, -0x5012($at)
    MEM_H(-0X5012, ctx->r1) = ctx->r25;
    // 0x801F9414: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9418: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F941C: addu        $t0, $v0, $a0
    ctx->r8 = ADD32(ctx->r2, ctx->r4);
    // 0x801F9420: lh          $t1, 0x2FE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2FE6);
    // 0x801F9424: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F9428: sh          $t1, -0x5010($at)
    MEM_H(-0X5010, ctx->r1) = ctx->r9;
    // 0x801F942C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9430: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9434: addu        $t2, $v0, $a0
    ctx->r10 = ADD32(ctx->r2, ctx->r4);
    // 0x801F9438: lh          $t3, 0x2FE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2FE8);
    // 0x801F943C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F9440: sh          $t3, -0x500E($at)
    MEM_H(-0X500E, ctx->r1) = ctx->r11;
    // 0x801F9444: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9448: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F944C: addu        $t4, $v0, $a0
    ctx->r12 = ADD32(ctx->r2, ctx->r4);
    // 0x801F9450: lhu         $t5, 0x2FEA($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2FEA);
    // 0x801F9454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F9458: jal         0x801CBD88
    // 0x801F945C: sh          $t5, -0x500C($at)
    MEM_H(-0X500C, ctx->r1) = ctx->r13;
    func_801CBD88_587C98(rdram, ctx);
        goto after_0;
    // 0x801F945C: sh          $t5, -0x500C($at)
    MEM_H(-0X500C, ctx->r1) = ctx->r13;
    after_0:
    // 0x801F9460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9468: jr          $ra
    // 0x801F946C: nop

    TRACE_RETURN()
    return;
    // 0x801F946C: nop

;}
RECOMP_FUNC void func_801DF8B8_59B7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF8B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DF8BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF8C0: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801DF8C4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801DF8C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DF8CC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DF8D0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801DF8D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801DF8D8: lhu         $t8, 0x7DB4($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB4);
    // 0x801DF8DC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x801DF8E0: beql        $t9, $zero, L_801DF940
    if (ctx->r25 == 0) {
        // 0x801DF8E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DF940;
    }
    goto skip_0;
    // 0x801DF8E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801DF8E8: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801DF8EC: lbu         $t0, 0x59($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X59);
    // 0x801DF8F0: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x801DF8F4: beql        $t1, $zero, L_801DF940
    if (ctx->r9 == 0) {
        // 0x801DF8F8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DF940;
    }
    goto skip_1;
    // 0x801DF8F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801DF8FC: lbu         $t2, 0x18($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X18);
    // 0x801DF900: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x801DF904: bnel        $t3, $zero, L_801DF940
    if (ctx->r11 != 0) {
        // 0x801DF908: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DF940;
    }
    goto skip_2;
    // 0x801DF908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801DF90C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DF910: nop

    // 0x801DF914: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    // 0x801DF918: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801DF91C: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    // 0x801DF920: jal         0x801E20A0
    // 0x801DF924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E20A0_59DFB0(rdram, ctx);
        goto after_0;
    // 0x801DF924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DF928: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DF92C: jal         0x801DACDC
    // 0x801DF930: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DF930: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_1:
    // 0x801DF934: b           L_801DF940
    // 0x801DF938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DF940;
    // 0x801DF938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DF93C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF940:
    // 0x801DF940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DF944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DF948: jr          $ra
    // 0x801DF94C: nop

    TRACE_RETURN()
    return;
    // 0x801DF94C: nop

;}
RECOMP_FUNC void func_801DF008_59AF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DF00C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF010: jal         0x801E4530
    // 0x801DF014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E4530_5A0440(rdram, ctx);
        goto after_0;
    // 0x801DF014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DF01C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DF020: jr          $ra
    // 0x801DF024: nop

    TRACE_RETURN()
    return;
    // 0x801DF024: nop

;}
RECOMP_FUNC void func_801D458C_59049C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D458C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D4590: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D4594: lbu         $t6, -0x3078($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3078);
    // 0x801D4598: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D459C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801D45A0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801D45A4: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x801D45A8: lbu         $a3, 0x4F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X4F);
    // 0x801D45AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D45B0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801D45B4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x801D45B8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D45BC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801D45C0: beq         $at, $zero, L_801D46E8
    if (ctx->r1 == 0) {
        // 0x801D45C4: swc1        $f12, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
            goto L_801D46E8;
    }
    // 0x801D45C4: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x801D45C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801D45CC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801D45D0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x801D45D4: jal         0x8001D5B8
    // 0x801D45D8: sb          $a3, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r7;
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_0;
    // 0x801D45D8: sb          $a3, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r7;
    after_0:
    // 0x801D45DC: lbu         $t7, 0x53($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X53);
    // 0x801D45E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D45E4: addiu       $t9, $t9, -0x3350
    ctx->r25 = ADD32(ctx->r25, -0X3350);
    // 0x801D45E8: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801D45EC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x801D45F0: lh          $t0, 0x2($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X2);
    // 0x801D45F4: lh          $t1, 0x4($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X4);
    // 0x801D45F8: lh          $t2, 0x6($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X6);
    // 0x801D45FC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x801D4600: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x801D4604: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D4608: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D460C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D4610: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D4614: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    // 0x801D4618: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D461C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x801D4620: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D4624: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D4628: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D462C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801D4630: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D4634: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x801D4638: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801D463C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801D4640: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D4644: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D4648: sub.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801D464C: jal         0x80003A94
    // 0x801D4650: sub.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f4.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_1;
    // 0x801D4650: sub.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f4.fl;
    after_1:
    // 0x801D4654: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D4658: addiu       $a1, $a1, -0x3078
    ctx->r5 = ADD32(ctx->r5, -0X3078);
    // 0x801D465C: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x801D4660: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D4664: addiu       $t4, $t4, -0x3070
    ctx->r12 = ADD32(ctx->r12, -0X3070);
    // 0x801D4668: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x801D466C: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x801D4670: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x801D4674: lbu         $a3, 0x4F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X4F);
    // 0x801D4678: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x801D467C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D4680: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D4684: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D4688: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x801D468C: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x801D4690: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801D4694: beq         $a3, $zero, L_801D46B4
    if (ctx->r7 == 0) {
        // 0x801D4698: swc1        $f6, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
            goto L_801D46B4;
    }
    // 0x801D4698: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x801D469C: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x801D46A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D46A4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801D46A8: lwc1        $f0, -0x3264($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3264);
    // 0x801D46AC: b           L_801D46BC
    // 0x801D46B0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
        goto L_801D46BC;
    // 0x801D46B0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_801D46B4:
    // 0x801D46B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D46B8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_801D46BC:
    // 0x801D46BC: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x801D46C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D46C4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801D46C8: lwc1        $f4, -0x3260($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3260);
    // 0x801D46CC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D46D0: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x801D46D4: sub.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801D46D8: sb          $v0, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r2;
    // 0x801D46DC: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x801D46E0: sub.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801D46E4: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_801D46E8:
    // 0x801D46E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D46EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D46F0: jr          $ra
    // 0x801D46F4: nop

    TRACE_RETURN()
    return;
    // 0x801D46F4: nop

;}
RECOMP_FUNC void func_801E153C_59D44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E153C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1540: jr          $ra
    // 0x801E1544: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1544: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F06AC_5AC5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F06AC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801F06B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F06B4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801F06B8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801F06BC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801F06C0: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801F06C4: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801F06C8: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x801F06CC: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801F06D0: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F06D4: addiu       $t0, $t0, 0x4F8C
    ctx->r8 = ADD32(ctx->r8, 0X4F8C);
    // 0x801F06D8: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x801F06DC: addiu       $t3, $t0, 0x24
    ctx->r11 = ADD32(ctx->r8, 0X24);
    // 0x801F06E0: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x801F06E4: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x801F06E8: lw          $s0, 0x18($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X18);
L_801F06EC:
    // 0x801F06EC: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801F06F0: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801F06F4: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801F06F8: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x801F06FC: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x801F0700: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x801F0704: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x801F0708: bne         $t0, $t3, L_801F06EC
    if (ctx->r8 != ctx->r11) {
        // 0x801F070C: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_801F06EC;
    }
    // 0x801F070C: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x801F0710: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F0714: addiu       $a1, $a1, 0x4DD0
    ctx->r5 = ADD32(ctx->r5, 0X4DD0);
    // 0x801F0718: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F071C: jal         0x801EE688
    // 0x801F0720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE688_5AA598(rdram, ctx);
        goto after_0;
    // 0x801F0720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801F0724: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x801F0728: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x801F072C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F0730: lbu         $t5, 0x90($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X90);
    // 0x801F0734: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x801F0738: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x801F073C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801F0740: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801F0744: lw          $t7, -0x2DE0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2DE0);
    // 0x801F0748: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801F074C: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x801F0750: sw          $t7, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r15;
    // 0x801F0754: addu        $v0, $t8, $t2
    ctx->r2 = ADD32(ctx->r24, ctx->r10);
    // 0x801F0758: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801F075C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F0760: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x801F0764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F0768: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F076C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x801F0770: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x801F0774: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x801F0778: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x801F077C: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F0780: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801F0784: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F0788: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x801F078C: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801F0790: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F0794: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x801F0798: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801F079C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F07A0: jal         0x801F07F8
    // 0x801F07A4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_801F07F8_5AC708(rdram, ctx);
        goto after_1;
    // 0x801F07A4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x801F07A8: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F07AC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801F07B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801F07B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F07B8: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x801F07BC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801F07C0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F07C4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F07C8: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x801F07CC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F07D0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F07D4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F07D8: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x801F07DC: jal         0x801EE0C8
    // 0x801F07E0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_801EE0C8_5A9FD8(rdram, ctx);
        goto after_2;
    // 0x801F07E0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_2:
    // 0x801F07E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F07E8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801F07EC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801F07F0: jr          $ra
    // 0x801F07F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801F07F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801EEDF8_5AAD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEDF8: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x801EEDFC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EEE00: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801EEE04: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801EEE08: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801EEE0C: lw          $s2, 0x18($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X18);
    // 0x801EEE10: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EEE14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EEE18: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x801EEE1C: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x801EEE20: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801EEE24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EEE28: lw          $s1, 0x0($v1)
    ctx->r17 = MEM_W(ctx->r3, 0X0);
    // 0x801EEE2C: beql        $v0, $zero, L_801EEE54
    if (ctx->r2 == 0) {
        // 0x801EEE30: lhu         $t7, 0x62($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X62);
            goto L_801EEE54;
    }
    goto skip_0;
    // 0x801EEE30: lhu         $t7, 0x62($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X62);
    skip_0:
    // 0x801EEE34: beq         $v0, $at, L_801EF0EC
    if (ctx->r2 == ctx->r1) {
        // 0x801EEE38: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_801EF0EC;
    }
    // 0x801EEE38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EEE3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EEE40: beq         $v0, $at, L_801EF184
    if (ctx->r2 == ctx->r1) {
        // 0x801EEE44: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_801EF184;
    }
    // 0x801EEE44: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801EEE48: b           L_801EF18C
    // 0x801EEE4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EF18C;
    // 0x801EEE4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EEE50: lhu         $t7, 0x62($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X62);
L_801EEE54:
    // 0x801EEE54: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801EEE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EEE5C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801EEE60: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801EEE64: bgtz        $t9, L_801EEE74
    if (SIGNED(ctx->r25) > 0) {
        // 0x801EEE68: sh          $t8, 0x62($s0)
        MEM_H(0X62, ctx->r16) = ctx->r24;
            goto L_801EEE74;
    }
    // 0x801EEE68: sh          $t8, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r24;
    // 0x801EEE6C: b           L_801EF188
    // 0x801EEE70: sb          $t1, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r9;
        goto L_801EF188;
    // 0x801EEE70: sb          $t1, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r9;
L_801EEE74:
    // 0x801EEE74: jal         0x801EF364
    // 0x801EEE78: sw          $v1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r3;
    func_801EF364_5AB274(rdram, ctx);
        goto after_0;
    // 0x801EEE78: sw          $v1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EEE7C: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x801EEE80: beql        $t2, $zero, L_801EEEC0
    if (ctx->r10 == 0) {
        // 0x801EEE84: lwc1        $f4, 0x6C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
            goto L_801EEEC0;
    }
    goto skip_1;
    // 0x801EEE84: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
    skip_1:
    // 0x801EEE88: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x801EEE8C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EEE90: beql        $v0, $zero, L_801EEEA0
    if (ctx->r2 == 0) {
        // 0x801EEE94: lbu         $t4, 0x60($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X60);
            goto L_801EEEA0;
    }
    goto skip_2;
    // 0x801EEE94: lbu         $t4, 0x60($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X60);
    skip_2:
    // 0x801EEE98: sb          $t3, 0x91($v0)
    MEM_B(0X91, ctx->r2) = ctx->r11;
    // 0x801EEE9C: lbu         $t4, 0x60($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X60);
L_801EEEA0:
    // 0x801EEEA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EEEA4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801EEEA8: sb          $t5, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r13;
    // 0x801EEEAC: jal         0x801EF1A0
    // 0x801EEEB0: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
    func_801EF1A0_5AB0B0(rdram, ctx);
        goto after_1;
    // 0x801EEEB0: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
    after_1:
    // 0x801EEEB4: b           L_801EF18C
    // 0x801EEEB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EF18C;
    // 0x801EEEB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EEEBC: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
L_801EEEC0:
    // 0x801EEEC0: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x801EEEC4: lw          $a2, 0xC($s2)
    ctx->r6 = MEM_W(ctx->r18, 0XC);
    // 0x801EEEC8: lw          $a3, 0x10($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X10);
    // 0x801EEECC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EEED0: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801EEED4: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x801EEED8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EEEDC: lwc1        $f8, 0x74($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801EEEE0: jal         0x8002A458
    // 0x801EEEE4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_2;
    // 0x801EEEE4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801EEEE8: lh          $t6, 0xB4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XB4);
    // 0x801EEEEC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801EEEF0: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801EEEF4: bne         $t6, $at, L_801EEF50
    if (ctx->r14 != ctx->r1) {
        // 0x801EEEF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EEF50;
    }
    // 0x801EEEF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EEEFC: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801EEF00: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801EEF04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EEF08: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EEF0C: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801EEF10: swc1        $f18, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f18.u32l;
    // 0x801EEF14: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801EEF18: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EEF1C: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x801EEF20: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801EEF24: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EEF28: swc1        $f18, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f18.u32l;
    // 0x801EEF2C: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x801EEF30: beq         $v0, $zero, L_801EEF3C
    if (ctx->r2 == 0) {
        // 0x801EEF34: nop
    
            goto L_801EEF3C;
    }
    // 0x801EEF34: nop

    // 0x801EEF38: sb          $t7, 0x91($v0)
    MEM_B(0X91, ctx->r2) = ctx->r15;
L_801EEF3C:
    // 0x801EEF3C: jal         0x801EF1A0
    // 0x801EEF40: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
    func_801EF1A0_5AB0B0(rdram, ctx);
        goto after_3;
    // 0x801EEF40: lw          $a1, 0xE4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE4);
    after_3:
    // 0x801EEF44: lbu         $t8, 0x60($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X60);
    // 0x801EEF48: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801EEF4C: sb          $t9, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r25;
L_801EEF50:
    // 0x801EEF50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EEF54: jal         0x801EE160
    // 0x801EEF58: lw          $a1, 0xE8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE8);
    func_801EE160_5AA070(rdram, ctx);
        goto after_4;
    // 0x801EEF58: lw          $a1, 0xE8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE8);
    after_4:
    // 0x801EEF5C: jal         0x801EF568
    // 0x801EEF60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EF568_5AB478(rdram, ctx);
        goto after_5;
    // 0x801EEF60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801EEF64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801EEF68: addiu       $t0, $s0, 0x98
    ctx->r8 = ADD32(ctx->r16, 0X98);
    // 0x801EEF6C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_801EEF70:
    // 0x801EEF70: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x801EEF74: blez        $t1, L_801EEF8C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x801EEF78: nop
    
            goto L_801EEF8C;
    }
    // 0x801EEF78: nop

    // 0x801EEF7C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801EEF80: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x801EEF84: bne         $v1, $a0, L_801EEF70
    if (ctx->r3 != ctx->r4) {
        // 0x801EEF88: lw          $s1, 0x0($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X0);
            goto L_801EEF70;
    }
    // 0x801EEF88: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_801EEF8C:
    // 0x801EEF8C: beql        $s1, $zero, L_801EF18C
    if (ctx->r17 == 0) {
        // 0x801EEF90: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801EF18C;
    }
    goto skip_3;
    // 0x801EEF90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x801EEF94: lhu         $t2, 0x68($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X68);
    // 0x801EEF98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EEF9C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EEFA0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801EEFA4: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x801EEFA8: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x801EEFAC: bne         $at, $zero, L_801EF188
    if (ctx->r1 != 0) {
        // 0x801EEFB0: sh          $t3, 0x68($s0)
        MEM_H(0X68, ctx->r16) = ctx->r11;
            goto L_801EF188;
    }
    // 0x801EEFB0: sh          $t3, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r11;
    // 0x801EEFB4: sh          $zero, 0x68($s0)
    MEM_H(0X68, ctx->r16) = 0;
    // 0x801EEFB8: addiu       $a3, $s1, 0x80
    ctx->r7 = ADD32(ctx->r17, 0X80);
    // 0x801EEFBC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801EEFC0: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x801EEFC4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x801EEFC8: addiu       $a1, $a1, 0x4DA0
    ctx->r5 = ADD32(ctx->r5, 0X4DA0);
    // 0x801EEFCC: jal         0x801EE750
    // 0x801EEFD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801EE750_5AA660(rdram, ctx);
        goto after_6;
    // 0x801EEFD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x801EEFD4: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x801EEFD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EEFDC: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x801EEFE0: addu        $a1, $s0, $t5
    ctx->r5 = ADD32(ctx->r16, ctx->r13);
    // 0x801EEFE4: jal         0x801EF684
    // 0x801EEFE8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_801EF684_5AB594(rdram, ctx);
        goto after_7;
    // 0x801EEFE8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_7:
    // 0x801EEFEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EEFF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EEFF4: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x801EEFF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EEFFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EF000: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x801EF004: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x801EF008: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x801EF00C: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    // 0x801EF010: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801EF014: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    // 0x801EF018: beq         $a0, $zero, L_801EF040
    if (ctx->r4 == 0) {
        // 0x801EF01C: addiu       $t6, $sp, 0xC8
        ctx->r14 = ADD32(ctx->r29, 0XC8);
            goto L_801EF040;
    }
    // 0x801EF01C: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x801EF020: lhu         $a1, 0x8E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X8E);
    // 0x801EF024: lhu         $a2, 0x90($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X90);
    // 0x801EF028: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x801EF02C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EF030: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x801EF034: jal         0x80033898
    // 0x801EF038: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801EF038: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_8:
    // 0x801EF03C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
L_801EF040:
    // 0x801EF040: lhu         $a0, 0x92($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X92);
    // 0x801EF044: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    // 0x801EF048: lhu         $a2, 0x96($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X96);
    // 0x801EF04C: addiu       $t8, $sp, 0xC8
    ctx->r24 = ADD32(ctx->r29, 0XC8);
    // 0x801EF050: addiu       $t9, $sp, 0xC4
    ctx->r25 = ADD32(ctx->r29, 0XC4);
    // 0x801EF054: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801EF058: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801EF05C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x801EF060: jal         0x80033898
    // 0x801EF064: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    func_80033898_34498(rdram, ctx);
        goto after_9;
    // 0x801EF064: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    after_9:
    // 0x801EF068: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801EF06C: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801EF070: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x801EF074: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x801EF078: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EF07C: addiu       $t2, $zero, 0xE0
    ctx->r10 = ADD32(0, 0XE0);
    // 0x801EF080: addiu       $t3, $zero, 0xE0
    ctx->r11 = ADD32(0, 0XE0);
    // 0x801EF084: addiu       $t4, $zero, 0xE0
    ctx->r12 = ADD32(0, 0XE0);
    // 0x801EF088: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x801EF08C: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801EF090: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801EF094: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EF098: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EF09C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EF0A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EF0A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EF0A8: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x801EF0AC: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801EF0B0: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801EF0B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EF0B8: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x801EF0BC: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x801EF0C0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801EF0C4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801EF0C8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801EF0CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EF0D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EF0D4: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x801EF0D8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801EF0DC: jal         0x801DC554
    // 0x801EF0E0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    func_801DC554_598464(rdram, ctx);
        goto after_10;
    // 0x801EF0E0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_10:
    // 0x801EF0E4: b           L_801EF18C
    // 0x801EF0E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801EF18C;
    // 0x801EF0E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EF0EC:
    // 0x801EF0EC: sb          $t6, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r14;
    // 0x801EF0F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EF0F4: jal         0x801E8858
    // 0x801EF0F8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8858_5A4768(rdram, ctx);
        goto after_11;
    // 0x801EF0F8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_11:
    // 0x801EF0FC: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x801EF100: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EF104: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801EF108: jal         0x801EE330
    // 0x801EF10C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_12;
    // 0x801EF10C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x801EF110: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801EF114: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801EF118: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801EF11C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801EF120: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801EF124: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801EF128: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EF12C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EF130: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x801EF134: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EF138: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EF13C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EF140: addiu       $a1, $s0, 0xC8
    ctx->r5 = ADD32(ctx->r16, 0XC8);
    // 0x801EF144: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EF148: jal         0x801DC554
    // 0x801EF14C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801DC554_598464(rdram, ctx);
        goto after_13;
    // 0x801EF14C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_13:
    // 0x801EF150: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EF154: jal         0x801EE5F4
    // 0x801EF158: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_14;
    // 0x801EF158: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x801EF15C: beq         $v0, $zero, L_801EF168
    if (ctx->r2 == 0) {
        // 0x801EF160: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_801EF168;
    }
    // 0x801EF160: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801EF164: sb          $t2, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r10;
L_801EF168:
    // 0x801EF168: jal         0x801EF568
    // 0x801EF16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EF568_5AB478(rdram, ctx);
        goto after_15;
    // 0x801EF16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x801EF170: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x801EF174: bne         $v0, $a0, L_801EF188
    if (ctx->r2 != ctx->r4) {
        // 0x801EF178: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_801EF188;
    }
    // 0x801EF178: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EF17C: b           L_801EF188
    // 0x801EF180: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
        goto L_801EF188;
    // 0x801EF180: sb          $t3, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r11;
L_801EF184:
    // 0x801EF184: sb          $t4, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r12;
L_801EF188:
    // 0x801EF188: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801EF18C:
    // 0x801EF18C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801EF190: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801EF194: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801EF198: jr          $ra
    // 0x801EF19C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    TRACE_RETURN()
    return;
    // 0x801EF19C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_801E1370_59D280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1374: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E1378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E137C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E1380: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E1384: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1388: jalr        $t9
    // 0x801E138C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E138C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801E1390: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E1394: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E1398: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E139C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E13A0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E13A4: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E13A8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E13AC: nop

    // 0x801E13B0: bc1fl       L_801E13C4
    if (!c1cs) {
        // 0x801E13B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E13C4;
    }
    goto skip_0;
    // 0x801E13B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E13B8: jal         0x801DACDC
    // 0x801E13BC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E13BC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_1:
    // 0x801E13C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E13C4:
    // 0x801E13C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E13C8: jr          $ra
    // 0x801E13CC: nop

    TRACE_RETURN()
    return;
    // 0x801E13CC: nop

;}
RECOMP_FUNC void func_801D56D0_5915E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D56D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D56D4: lhu         $t6, 0x3A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3A);
    // 0x801D56D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D56DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D56E0: jal         0x801D5708
    // 0x801D56E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_801D5708_591618(rdram, ctx);
        goto after_0;
    // 0x801D56E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D56E8: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x801D56EC: jal         0x801D55E0
    // 0x801D56F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D55E0_5914F0(rdram, ctx);
        goto after_1;
    // 0x801D56F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x801D56F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D56F8: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x801D56FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D5700: jr          $ra
    // 0x801D5704: nop

    TRACE_RETURN()
    return;
    // 0x801D5704: nop

;}
RECOMP_FUNC void func_801F36C8_5AF5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F36C8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801F36CC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x801F36D0: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x801F36D4: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x801F36D8: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x801F36DC: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x801F36E0: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x801F36E4: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x801F36E8: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x801F36EC: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x801F36F0: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x801F36F4: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x801F36F8: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x801F36FC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801F3700: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801F3704: lbu         $v1, 0x60($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X60);
    // 0x801F3708: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F370C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801F3710: beq         $v1, $zero, L_801F372C
    if (ctx->r3 == 0) {
        // 0x801F3714: lw          $s3, 0x18($v0)
        ctx->r19 = MEM_W(ctx->r2, 0X18);
            goto L_801F372C;
    }
    // 0x801F3714: lw          $s3, 0x18($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X18);
    // 0x801F3718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F371C: beq         $v1, $at, L_801F382C
    if (ctx->r3 == ctx->r1) {
        // 0x801F3720: nop
    
            goto L_801F382C;
    }
    // 0x801F3720: nop

    // 0x801F3724: b           L_801F3844
    // 0x801F3728: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_801F3844;
    // 0x801F3728: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_801F372C:
    // 0x801F372C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F3730: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801F3734: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3738: lwc1        $f28, -0x3EF8($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X3EF8);
    // 0x801F373C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3740: ldc1        $f26, -0x3EF0($at)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r1, -0X3EF0);
    // 0x801F3744: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3748: ldc1        $f24, -0x3EE8($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X3EE8);
    // 0x801F374C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3750: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F3754: ldc1        $f22, -0x3EE0($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, -0X3EE0);
    // 0x801F3758: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801F375C: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x801F3760: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
L_801F3764:
    // 0x801F3764: lwc1        $f4, 0x1C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x801F3768: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F376C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F3770: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801F3774: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x801F3778: mul.d       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x801F377C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801F3780: swc1        $f30, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f30.u32l;
    // 0x801F3784: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801F3788: mul.d       $f16, $f0, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f26.d);
    // 0x801F378C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F3790: div.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f22.d);
    // 0x801F3794: div.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f22.d);
    // 0x801F3798: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F379C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801F37A0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801F37A4: jal         0x801F2CD0
    // 0x801F37A8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_801F2CD0_5AEBE0(rdram, ctx);
        goto after_0;
    // 0x801F37A8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801F37AC: beq         $v0, $zero, L_801F3810
    if (ctx->r2 == 0) {
        // 0x801F37B0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801F3810;
    }
    // 0x801F37B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801F37B4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801F37B8: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x801F37BC: addiu       $t8, $t8, 0x50A0
    ctx->r24 = ADD32(ctx->r24, 0X50A0);
    // 0x801F37C0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F37C4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F37C8: sll         $t7, $s2, 3
    ctx->r15 = S32(ctx->r18 << 3);
    // 0x801F37CC: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x801F37D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801F37D4: jal         0x801EE530
    // 0x801F37D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801F37D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x801F37DC: lwc1        $f0, 0x1C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x801F37E0: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801F37E4: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801F37E8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F37EC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801F37F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F37F4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801F37F8: div.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f28.fl);
    // 0x801F37FC: div.s       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f28.fl);
    // 0x801F3800: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801F3804: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801F3808: jal         0x801F3AD0
    // 0x801F380C: nop

    func_801F3AD0_5AF9E0(rdram, ctx);
        goto after_2;
    // 0x801F380C: nop

    after_2:
L_801F3810:
    // 0x801F3810: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801F3814: bnel        $s2, $s4, L_801F3764
    if (ctx->r18 != ctx->r20) {
        // 0x801F3818: swc1        $f20, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
            goto L_801F3764;
    }
    goto skip_0;
    // 0x801F3818: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    skip_0:
    // 0x801F381C: lbu         $t9, 0x60($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X60);
    // 0x801F3820: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801F3824: b           L_801F3840
    // 0x801F3828: sb          $t0, 0x60($s5)
    MEM_B(0X60, ctx->r21) = ctx->r8;
        goto L_801F3840;
    // 0x801F3828: sb          $t0, 0x60($s5)
    MEM_B(0X60, ctx->r21) = ctx->r8;
L_801F382C:
    // 0x801F382C: jal         0x801F3AF0
    // 0x801F3830: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_801F3AF0_5AFA00(rdram, ctx);
        goto after_3;
    // 0x801F3830: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x801F3834: bne         $v0, $zero, L_801F3840
    if (ctx->r2 != 0) {
        // 0x801F3838: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801F3840;
    }
    // 0x801F3838: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F383C: sb          $t1, 0x65($s5)
    MEM_B(0X65, ctx->r21) = ctx->r9;
L_801F3840:
    // 0x801F3840: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_801F3844:
    // 0x801F3844: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801F3848: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x801F384C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x801F3850: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x801F3854: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x801F3858: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x801F385C: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x801F3860: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x801F3864: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x801F3868: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x801F386C: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x801F3870: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x801F3874: jr          $ra
    // 0x801F3878: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801F3878: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801D2C40_58EB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2C40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2C48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D2C4C: jal         0x801D2C88
    // 0x801D2C50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D2C88_58EB98(rdram, ctx);
        goto after_0;
    // 0x801D2C50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D2C54: bne         $v0, $zero, L_801D2C78
    if (ctx->r2 != 0) {
        // 0x801D2C58: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801D2C78;
    }
    // 0x801D2C58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D2C5C: lbu         $a3, 0xBC($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XBC);
    // 0x801D2C60: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2C64: lhu         $a2, 0xCC($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0XCC);
    // 0x801D2C68: andi        $t6, $a3, 0x7
    ctx->r14 = ctx->r7 & 0X7;
    // 0x801D2C6C: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x801D2C70: jal         0x801D2E10
    // 0x801D2C74: andi        $a3, $t7, 0xFFFF
    ctx->r7 = ctx->r15 & 0XFFFF;
    func_801D2E10_58ED20(rdram, ctx);
        goto after_1;
    // 0x801D2C74: andi        $a3, $t7, 0xFFFF
    ctx->r7 = ctx->r15 & 0XFFFF;
    after_1:
L_801D2C78:
    // 0x801D2C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2C80: jr          $ra
    // 0x801D2C84: nop

    TRACE_RETURN()
    return;
    // 0x801D2C84: nop

;}
RECOMP_FUNC void func_801E06CC_59C5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E06CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E06D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E06D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E06D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801E06DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E06E0: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    // 0x801E06E4: jal         0x801DD720
    // 0x801E06E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E06E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x801E06EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E06F0: jal         0x801E708C
    // 0x801E06F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E708C_5A2F9C(rdram, ctx);
        goto after_1;
    // 0x801E06F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x801E06F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E06FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0700: jr          $ra
    // 0x801E0704: nop

    TRACE_RETURN()
    return;
    // 0x801E0704: nop

;}
RECOMP_FUNC void func_801F0320_5AC230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0328: jal         0x801F0340
    // 0x801F032C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F0340_5AC250(rdram, ctx);
        goto after_0;
    // 0x801F032C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F0330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0338: jr          $ra
    // 0x801F033C: nop

    TRACE_RETURN()
    return;
    // 0x801F033C: nop

;}
RECOMP_FUNC void func_801F44E0_5B03F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F44E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F44E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F44E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F44EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F44F0: jal         0x801F4984
    // 0x801F44F4: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    func_801F4984_5B0894(rdram, ctx);
        goto after_0;
    // 0x801F44F4: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    after_0:
    // 0x801F44F8: beq         $v0, $zero, L_801F4518
    if (ctx->r2 == 0) {
        // 0x801F44FC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801F4518;
    }
    // 0x801F44FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F4500: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
    // 0x801F4504: jal         0x801E3B9C
    // 0x801F4508: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_801E3B9C_59FAAC(rdram, ctx);
        goto after_1;
    // 0x801F4508: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_1:
    // 0x801F450C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F4510: jal         0x801E3D04
    // 0x801F4514: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_801E3D04_59FC14(rdram, ctx);
        goto after_2;
    // 0x801F4514: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
L_801F4518:
    // 0x801F4518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F451C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4520: jr          $ra
    // 0x801F4524: nop

    TRACE_RETURN()
    return;
    // 0x801F4524: nop

;}
RECOMP_FUNC void func_801D25EC_58E4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D25EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801D25F0: lbu         $v0, 0x7AA4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7AA4);
    // 0x801D25F4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801D25F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D25FC: beq         $v0, $zero, L_801D2608
    if (ctx->r2 == 0) {
        // 0x801D2600: addiu       $t6, $t6, -0x3818
        ctx->r14 = ADD32(ctx->r14, -0X3818);
            goto L_801D2608;
    }
    // 0x801D2600: addiu       $t6, $t6, -0x3818
    ctx->r14 = ADD32(ctx->r14, -0X3818);
    // 0x801D2604: bne         $v0, $at, L_801D264C
    if (ctx->r2 != ctx->r1) {
        // 0x801D2608: or          $t9, $a0, $zero
        ctx->r25 = ctx->r4 | 0;
            goto L_801D264C;
    }
L_801D2608:
    // 0x801D2608: or          $t9, $a0, $zero
    ctx->r25 = ctx->r4 | 0;
    // 0x801D260C: addiu       $t8, $t6, 0x60
    ctx->r24 = ADD32(ctx->r14, 0X60);
L_801D2610:
    // 0x801D2610: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801D2614: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801D2618: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801D261C: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x801D2620: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x801D2624: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x801D2628: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x801D262C: bne         $t6, $t8, L_801D2610
    if (ctx->r14 != ctx->r24) {
        // 0x801D2630: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_801D2610;
    }
    // 0x801D2630: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x801D2634: lui         $at, 0x4202
    ctx->r1 = S32(0X4202 << 16);
    // 0x801D2638: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D263C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D2640: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D2644: b           L_801D26E8
    // 0x801D2648: nop

        goto L_801D26E8;
    // 0x801D2648: nop

L_801D264C:
    // 0x801D264C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D2650: bne         $v0, $at, L_801D26A4
    if (ctx->r2 != ctx->r1) {
        // 0x801D2654: lui         $t4, 0x8020
        ctx->r12 = S32(0X8020 << 16);
            goto L_801D26A4;
    }
    // 0x801D2654: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801D2658: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801D265C: addiu       $t0, $t0, -0x37B8
    ctx->r8 = ADD32(ctx->r8, -0X37B8);
    // 0x801D2660: addiu       $t2, $t0, 0x60
    ctx->r10 = ADD32(ctx->r8, 0X60);
    // 0x801D2664: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
L_801D2668:
    // 0x801D2668: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801D266C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801D2670: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x801D2674: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x801D2678: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x801D267C: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x801D2680: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x801D2684: bne         $t0, $t2, L_801D2668
    if (ctx->r8 != ctx->r10) {
        // 0x801D2688: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_801D2668;
    }
    // 0x801D2688: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x801D268C: lui         $at, 0x4202
    ctx->r1 = S32(0X4202 << 16);
    // 0x801D2690: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D2694: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D2698: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D269C: b           L_801D26E8
    // 0x801D26A0: nop

        goto L_801D26E8;
    // 0x801D26A0: nop

L_801D26A4:
    // 0x801D26A4: addiu       $t4, $t4, -0x3758
    ctx->r12 = ADD32(ctx->r12, -0X3758);
    // 0x801D26A8: addiu       $t7, $t4, 0x60
    ctx->r15 = ADD32(ctx->r12, 0X60);
    // 0x801D26AC: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
L_801D26B0:
    // 0x801D26B0: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x801D26B4: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801D26B8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801D26BC: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x801D26C0: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x801D26C4: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x801D26C8: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x801D26CC: bne         $t4, $t7, L_801D26B0
    if (ctx->r12 != ctx->r15) {
        // 0x801D26D0: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_801D26B0;
    }
    // 0x801D26D0: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x801D26D4: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x801D26D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D26DC: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x801D26E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D26E4: nop

L_801D26E8:
    // 0x801D26E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D26EC: addiu       $v0, $v0, -0x36E4
    ctx->r2 = ADD32(ctx->r2, -0X36E4);
    // 0x801D26F0: swc1        $f0, 0x2B0($v0)
    MEM_W(0X2B0, ctx->r2) = ctx->f0.u32l;
    // 0x801D26F4: jr          $ra
    // 0x801D26F8: swc1        $f2, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x801D26F8: swc1        $f2, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_801E6F00_5A2E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6F00: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6F04: lw          $v0, 0x94($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X94);
    // 0x801E6F08: beq         $v0, $zero, L_801E6F44
    if (ctx->r2 == 0) {
        // 0x801E6F0C: nop
    
            goto L_801E6F44;
    }
    // 0x801E6F0C: nop

    // 0x801E6F10: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x801E6F14: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x801E6F18: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x801E6F1C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x801E6F20: sw          $t8, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r24;
    // 0x801E6F24: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6F28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6F2C: sw          $zero, 0x94($t9)
    MEM_W(0X94, ctx->r25) = 0;
    // 0x801E6F30: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6F34: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x801E6F38: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801E6F3C: lwc1        $f4, -0x4A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4A58);
    // 0x801E6F40: swc1        $f4, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f4.u32l;
L_801E6F44:
    // 0x801E6F44: jr          $ra
    // 0x801E6F48: nop

    TRACE_RETURN()
    return;
    // 0x801E6F48: nop

;}
RECOMP_FUNC void func_801D6098_591FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6098: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D609C: lwc1        $f0, -0x2E34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D60A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D60A4: lwc1        $f2, -0x2E18($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x801D60A8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D60AC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801D60B0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D60B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D60B8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801D60BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D60C0: bc1f        L_801D6150
    if (!c1cs) {
        // 0x801D60C4: addiu       $a1, $sp, 0x30
        ctx->r5 = ADD32(ctx->r29, 0X30);
            goto L_801D6150;
    }
    // 0x801D60C4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801D60C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D60CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D60D0: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x801D60D4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x801D60D8: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x801D60DC: lhu         $t7, 0xB6($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XB6);
    // 0x801D60E0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x801D60E4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D60E8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x801D60EC: bgez        $t7, L_801D6100
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801D60F0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801D6100;
    }
    // 0x801D60F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D60F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D60F8: nop

    // 0x801D60FC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801D6100:
    // 0x801D6100: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x801D6104: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801D6108: bc1f        L_801D6114
    if (!c1cs) {
        // 0x801D610C: nop
    
            goto L_801D6114;
    }
    // 0x801D610C: nop

    // 0x801D6110: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
L_801D6114:
    // 0x801D6114: jal         0x8001D5B8
    // 0x801D6118: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_0;
    // 0x801D6118: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    after_0:
    // 0x801D611C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D6120: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801D6124: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x801D6128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D612C: jal         0x801D56D0
    // 0x801D6130: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_1;
    // 0x801D6130: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x801D6134: beq         $v0, $zero, L_801D6150
    if (ctx->r2 == 0) {
        // 0x801D6138: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_801D6150;
    }
    // 0x801D6138: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D613C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D6140: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801D6144: jal         0x801D72D4
    // 0x801D6148: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    func_801D72D4_5931E4(rdram, ctx);
        goto after_2;
    // 0x801D6148: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    after_2:
    // 0x801D614C: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
L_801D6150:
    // 0x801D6150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D6154: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D6158: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D615C: jr          $ra
    // 0x801D6160: nop

    TRACE_RETURN()
    return;
    // 0x801D6160: nop

;}
RECOMP_FUNC void func_801EE4E0_5AA3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE4E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801EE4E4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801EE4E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801EE4EC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801EE4F0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801EE4F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EE4F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801EE4FC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x801EE500: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EE504: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x801EE508: lhu         $a3, 0x42($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X42);
    // 0x801EE50C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EE510: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801EE514: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801EE518: jal         0x8001DB04
    // 0x801EE51C: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    func_8001DB04_1E704(rdram, ctx);
        goto after_0;
    // 0x801EE51C: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x801EE520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EE524: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801EE528: jr          $ra
    // 0x801EE52C: nop

    TRACE_RETURN()
    return;
    // 0x801EE52C: nop

;}
RECOMP_FUNC void func_801EEB0C_5AAA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEB0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EEB10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EEB14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EEB18: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801EEB1C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x801EEB20: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EEB24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EEB28: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801EEB2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EEB30: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801EEB34: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x801EEB38: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EEB3C: addiu       $a1, $a1, 0x4D70
    ctx->r5 = ADD32(ctx->r5, 0X4D70);
    // 0x801EEB40: jal         0x801EE688
    // 0x801EEB44: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_801EE688_5AA598(rdram, ctx);
        goto after_0;
    // 0x801EEB44: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_0:
    // 0x801EEB48: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801EEB4C: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801EEB50: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801EEB54: lbu         $t0, 0x90($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X90);
    // 0x801EEB58: addiu       $t5, $t5, 0x4E78
    ctx->r13 = ADD32(ctx->r13, 0X4E78);
    // 0x801EEB5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EEB60: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801EEB64: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801EEB68: lw          $t2, -0x2DE0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2DE0);
    // 0x801EEB6C: sw          $t2, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r10;
    // 0x801EEB70: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x801EEB74: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801EEB78: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801EEB7C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x801EEB80: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x801EEB84: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x801EEB88: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EEB8C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x801EEB90: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x801EEB94: jal         0x801EE530
    // 0x801EEB98: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801EEB98: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801EEB9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801EEBA0: jal         0x801EE0C8
    // 0x801EEBA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801EE0C8_5A9FD8(rdram, ctx);
        goto after_2;
    // 0x801EEBA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x801EEBA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EEBAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EEBB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EEBB4: jr          $ra
    // 0x801EEBB8: nop

    TRACE_RETURN()
    return;
    // 0x801EEBB8: nop

;}
RECOMP_FUNC void func_801EBDC4_5A7CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBDC4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EBDC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EBDCC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801EBDD0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801EBDD4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801EBDD8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801EBDDC: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801EBDE0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EBDE4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801EBDE8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801EBDEC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801EBDF0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EBDF4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801EBDF8: lhu         $t9, 0x14($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X14);
    // 0x801EBDFC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801EBE00: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801EBE04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801EBE08: lhu         $t0, 0x16($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X16);
    // 0x801EBE0C: lui         $a1, 0x900
    ctx->r5 = S32(0X900 << 16);
    // 0x801EBE10: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    // 0x801EBE14: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801EBE18: lhu         $t1, 0x18($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X18);
    // 0x801EBE1C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801EBE20: addiu       $t2, $zero, 0x128
    ctx->r10 = ADD32(0, 0X128);
    // 0x801EBE24: lui         $t4, 0xC
    ctx->r12 = S32(0XC << 16);
    // 0x801EBE28: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x801EBE2C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EBE30: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801EBE34: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x801EBE38: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801EBE3C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x801EBE40: lhu         $t4, 0x2D90($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2D90);
    // 0x801EBE44: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x801EBE48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EBE4C: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x801EBE50: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EBE54: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x801EBE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EBE5C: jal         0x80034680
    // 0x801EBE60: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801EBE60: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    after_0:
    // 0x801EBE64: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x801EBE68: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801EBE6C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801EBE70: lbu         $t6, 0x90($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X90);
    // 0x801EBE74: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x801EBE78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801EBE7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801EBE80: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801EBE84: lw          $t8, -0x2DE0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2DE0);
    // 0x801EBE88: sb          $t9, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r25;
    // 0x801EBE8C: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x801EBE90: jal         0x801EE0C8
    // 0x801EBE94: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_801EE0C8_5A9FD8(rdram, ctx);
        goto after_1;
    // 0x801EBE94: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_1:
    // 0x801EBE98: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801EBE9C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801EBEA0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801EBEA4: jr          $ra
    // 0x801EBEA8: nop

    TRACE_RETURN()
    return;
    // 0x801EBEA8: nop

;}
RECOMP_FUNC void func_801E2CCC_59EBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2CD4: jal         0x801E2CEC
    // 0x801E2CD8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_801E2CEC_59EBFC(rdram, ctx);
        goto after_0;
    // 0x801E2CD8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x801E2CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2CE4: jr          $ra
    // 0x801E2CE8: nop

    TRACE_RETURN()
    return;
    // 0x801E2CE8: nop

;}
RECOMP_FUNC void func_801EA860_5A6770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA860: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x801EA864: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x801EA868: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x801EA86C: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x801EA870: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x801EA874: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x801EA878: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x801EA87C: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x801EA880: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x801EA884: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x801EA888: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x801EA88C: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x801EA890: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x801EA894: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801EA898: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801EA89C: sw          $a1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r5;
    // 0x801EA8A0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EA8A4: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801EA8A8: addiu       $t7, $t7, 0x4A10
    ctx->r15 = ADD32(ctx->r15, 0X4A10);
    // 0x801EA8AC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801EA8B0: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801EA8B4: addiu       $t6, $sp, 0x120
    ctx->r14 = ADD32(ctx->r29, 0X120);
    // 0x801EA8B8: lw          $s6, 0x18($v1)
    ctx->r22 = MEM_W(ctx->r3, 0X18);
    // 0x801EA8BC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801EA8C0: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x801EA8C4: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x801EA8C8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801EA8CC: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801EA8D0: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x801EA8D4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x801EA8D8: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x801EA8DC: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x801EA8E0: addiu       $t2, $t2, 0x4A28
    ctx->r10 = ADD32(ctx->r10, 0X4A28);
    // 0x801EA8E4: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x801EA8E8: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    // 0x801EA8EC: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801EA8F0: addiu       $t1, $sp, 0x118
    ctx->r9 = ADD32(ctx->r29, 0X118);
    // 0x801EA8F4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EA8F8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801EA8FC: lhu         $at, 0x4($t2)
    ctx->r1 = MEM_HU(ctx->r10, 0X4);
    // 0x801EA900: addiu       $t8, $t8, 0x4A30
    ctx->r24 = ADD32(ctx->r24, 0X4A30);
    // 0x801EA904: addiu       $t9, $sp, 0x100
    ctx->r25 = ADD32(ctx->r29, 0X100);
    // 0x801EA908: sh          $at, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r1;
    // 0x801EA90C: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x801EA910: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801EA914: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801EA918: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x801EA91C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x801EA920: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x801EA924: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x801EA928: addiu       $t3, $t3, 0x4A48
    ctx->r11 = ADD32(ctx->r11, 0X4A48);
    // 0x801EA92C: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x801EA930: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
    // 0x801EA934: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x801EA938: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x801EA93C: addiu       $t4, $sp, 0xE8
    ctx->r12 = ADD32(ctx->r29, 0XE8);
    // 0x801EA940: sw          $t0, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r8;
    // 0x801EA944: sw          $at, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r1;
    // 0x801EA948: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x801EA94C: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x801EA950: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801EA954: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
    // 0x801EA958: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x801EA95C: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x801EA960: lw          $t5, 0xC($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC);
    // 0x801EA964: addiu       $t6, $t6, 0x4A60
    ctx->r14 = ADD32(ctx->r14, 0X4A60);
    // 0x801EA968: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x801EA96C: sw          $t5, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r13;
    // 0x801EA970: lw          $t5, 0x14($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X14);
    // 0x801EA974: lw          $at, 0x10($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X10);
    // 0x801EA978: addiu       $t7, $sp, 0xD0
    ctx->r15 = ADD32(ctx->r29, 0XD0);
    // 0x801EA97C: sw          $t5, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->r13;
    // 0x801EA980: sw          $at, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r1;
    // 0x801EA984: lw          $t0, 0x4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X4);
    // 0x801EA988: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801EA98C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801EA990: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x801EA994: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x801EA998: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x801EA99C: lw          $t0, 0xC($t6)
    ctx->r8 = MEM_W(ctx->r14, 0XC);
    // 0x801EA9A0: addiu       $t1, $t1, 0x4A78
    ctx->r9 = ADD32(ctx->r9, 0X4A78);
    // 0x801EA9A4: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x801EA9A8: sw          $t0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r8;
    // 0x801EA9AC: lw          $t0, 0x14($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X14);
    // 0x801EA9B0: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x801EA9B4: addiu       $t2, $sp, 0xB8
    ctx->r10 = ADD32(ctx->r29, 0XB8);
    // 0x801EA9B8: sw          $t0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r8;
    // 0x801EA9BC: sw          $at, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r1;
    // 0x801EA9C0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801EA9C4: lw          $t5, 0x4($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X4);
    // 0x801EA9C8: lui         $a2, 0x900
    ctx->r6 = S32(0X900 << 16);
    // 0x801EA9CC: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x801EA9D0: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x801EA9D4: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x801EA9D8: lw          $t5, 0xC($t1)
    ctx->r13 = MEM_W(ctx->r9, 0XC);
    // 0x801EA9DC: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x801EA9E0: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x801EA9E4: sw          $t5, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r13;
    // 0x801EA9E8: lw          $t5, 0x14($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X14);
    // 0x801EA9EC: sw          $at, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r1;
    // 0x801EA9F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EA9F4: sw          $t5, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r13;
    // 0x801EA9F8: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x801EA9FC: lbu         $t8, 0x15F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X15F);
    // 0x801EAA00: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x801EAA04: addiu       $a2, $a2, 0x24F0
    ctx->r6 = ADD32(ctx->r6, 0X24F0);
    // 0x801EAA08: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801EAA0C: or          $t6, $a3, $at
    ctx->r14 = ctx->r7 | ctx->r1;
    // 0x801EAA10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EAA14: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801EAA18: addiu       $t7, $t7, 0x4868
    ctx->r15 = ADD32(ctx->r15, 0X4868);
    // 0x801EAA1C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x801EAA20: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801EAA24: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x801EAA28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAA2C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801EAA30: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801EAA34: lwc1        $f20, -0x4780($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4780);
    // 0x801EAA38: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x801EAA3C: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x801EAA40: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x801EAA44: sw          $a0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r4;
    // 0x801EAA48: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801EAA4C: sw          $v1, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r3;
L_801EAA50:
    // 0x801EAA50: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
    // 0x801EAA54: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x801EAA58: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x801EAA5C: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x801EAA60: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x801EAA64: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x801EAA68: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x801EAA6C: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    // 0x801EAA70: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801EAA74: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801EAA78: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801EAA7C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801EAA80: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x801EAA84: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x801EAA88: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    // 0x801EAA8C: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801EAA90: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801EAA94: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x801EAA98: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EAA9C: jal         0x800358E8
    // 0x801EAAA0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801EAAA0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x801EAAA4: beq         $v0, $zero, L_801EABE4
    if (ctx->r2 == 0) {
        // 0x801EAAA8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801EABE4;
    }
    // 0x801EAAA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801EAAAC: lw          $t1, 0x154($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X154);
    // 0x801EAAB0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801EAAB4: addu        $t9, $sp, $s2
    ctx->r25 = ADD32(ctx->r29, ctx->r18);
    // 0x801EAAB8: sw          $t1, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r9;
    // 0x801EAABC: lbu         $t5, 0x15F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X15F);
    // 0x801EAAC0: sb          $zero, 0x60($v0)
    MEM_B(0X60, ctx->r2) = 0;
    // 0x801EAAC4: sb          $s2, 0x61($v0)
    MEM_B(0X61, ctx->r2) = ctx->r18;
    // 0x801EAAC8: sb          $t8, 0x9C($v0)
    MEM_B(0X9C, ctx->r2) = ctx->r24;
    // 0x801EAACC: sb          $t5, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r13;
    // 0x801EAAD0: lbu         $t9, 0x118($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X118);
    // 0x801EAAD4: addiu       $s5, $v0, 0xB8
    ctx->r21 = ADD32(ctx->r2, 0XB8);
    // 0x801EAAD8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EAADC: sb          $t9, 0x9D($v0)
    MEM_B(0X9D, ctx->r2) = ctx->r25;
    // 0x801EAAE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EAAE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EAAE8: lbu         $v0, 0x9D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9D);
    // 0x801EAAEC: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801EAAF0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801EAAF4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801EAAF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801EAAFC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801EAB00: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    // 0x801EAB04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EAB08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EAB0C: jal         0x801DC554
    // 0x801EAB10: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801DC554_598464(rdram, ctx);
        goto after_1;
    // 0x801EAB10: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_1:
    // 0x801EAB14: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    // 0x801EAB18: addiu       $t6, $zero, 0x152
    ctx->r14 = ADD32(0, 0X152);
    // 0x801EAB1C: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x801EAB20: beq         $s1, $zero, L_801EABE4
    if (ctx->r17 == 0) {
        // 0x801EAB24: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801EABE4;
    }
    // 0x801EAB24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EAB28: addiu       $t4, $sp, 0xE8
    ctx->r12 = ADD32(ctx->r29, 0XE8);
    // 0x801EAB2C: sh          $t6, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r14;
    // 0x801EAB30: addu        $t2, $v0, $t4
    ctx->r10 = ADD32(ctx->r2, ctx->r12);
    // 0x801EAB34: addiu       $t0, $sp, 0x120
    ctx->r8 = ADD32(ctx->r29, 0X120);
    // 0x801EAB38: addiu       $t3, $sp, 0x100
    ctx->r11 = ADD32(ctx->r29, 0X100);
    // 0x801EAB3C: addiu       $t1, $sp, 0xD0
    ctx->r9 = ADD32(ctx->r29, 0XD0);
    // 0x801EAB40: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x801EAB44: addu        $s4, $v0, $t5
    ctx->r20 = ADD32(ctx->r2, ctx->r13);
    // 0x801EAB48: addu        $s3, $v0, $t1
    ctx->r19 = ADD32(ctx->r2, ctx->r9);
    // 0x801EAB4C: addu        $fp, $v0, $t3
    ctx->r30 = ADD32(ctx->r2, ctx->r11);
    // 0x801EAB50: addu        $s7, $v0, $t0
    ctx->r23 = ADD32(ctx->r2, ctx->r8);
    // 0x801EAB54: jal         0x80014218
    // 0x801EAB58: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    func_80014218_14E18(rdram, ctx);
        goto after_2;
    // 0x801EAB58: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    after_2:
    // 0x801EAB5C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EAB60: or          $t8, $s5, $at
    ctx->r24 = ctx->r21 | ctx->r1;
    // 0x801EAB64: sw          $t8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r24;
    // 0x801EAB68: lw          $a2, 0x0($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X0);
    // 0x801EAB6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EAB70: jal         0x801E8820
    // 0x801EAB74: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_801E8820_5A4730(rdram, ctx);
        goto after_3;
    // 0x801EAB74: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x801EAB78: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x801EAB7C: sb          $t9, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r25;
    // 0x801EAB80: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    // 0x801EAB84: lwc1        $f6, 0x1C($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X1C);
    // 0x801EAB88: lwc1        $f4, 0x0($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X0);
    // 0x801EAB8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EAB90: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EAB94: swc1        $f8, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
    // 0x801EAB98: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x801EAB9C: lwc1        $f16, 0x20($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X20);
    // 0x801EABA0: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801EABA4: swc1        $f24, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f24.u32l;
    // 0x801EABA8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801EABAC: jal         0x801EAE88
    // 0x801EABB0: swc1        $f18, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
    func_801EAE88_5A6D98(rdram, ctx);
        goto after_4;
    // 0x801EABB0: swc1        $f18, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
    after_4:
    // 0x801EABB4: swc1        $f24, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f24.u32l;
    // 0x801EABB8: lwc1        $f6, 0x20($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X20);
    // 0x801EABBC: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x801EABC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801EABC4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x801EABC8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EABCC: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
    // 0x801EABD0: lwc1        $f16, 0x24($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X24);
    // 0x801EABD4: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x801EABD8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801EABDC: bne         $s2, $at, L_801EAA50
    if (ctx->r18 != ctx->r1) {
        // 0x801EABE0: swc1        $f18, 0xB4($s0)
        MEM_W(0XB4, ctx->r16) = ctx->f18.u32l;
            goto L_801EAA50;
    }
    // 0x801EABE0: swc1        $f18, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f18.u32l;
L_801EABE4:
    // 0x801EABE4: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x801EABE8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801EABEC: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801EABF0: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x801EABF4: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x801EABF8: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x801EABFC: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x801EAC00: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x801EAC04: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x801EAC08: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x801EAC0C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x801EAC10: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x801EAC14: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x801EAC18: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x801EAC1C: jr          $ra
    // 0x801EAC20: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    TRACE_RETURN()
    return;
    // 0x801EAC20: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_801E1560_59D470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1560: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1564: jr          $ra
    // 0x801E1568: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1568: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
