#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80003CC8_48C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003CC8: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80003CCC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80003CD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003CD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80003CDC: bgez        $t6, L_80003CF4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80003CE0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80003CF4;
    }
    // 0x80003CE0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80003CE4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80003CE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80003CEC: nop

    // 0x80003CF0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80003CF4:
    // 0x80003CF4: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80003CF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80003CFC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80003D00: ldc1        $f4, -0x5738($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5738);
    // 0x80003D04: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80003D08: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80003D0C: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80003D10: jal         0x800417F0
    // 0x80003D14: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x80003D14: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_0:
    // 0x80003D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003D20: jr          $ra
    // 0x80003D24: nop

    TRACE_RETURN()
    return;
    // 0x80003D24: nop

;}
RECOMP_FUNC void func_8000D4E0_E0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000D4E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D4E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D4E8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x8000D4EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000D4F0: beq         $v0, $at, L_8000D510
    if (ctx->r2 == ctx->r1) {
        // 0x8000D4F4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000D510;
    }
    // 0x8000D4F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000D4F8: beq         $v0, $at, L_8000D564
    if (ctx->r2 == ctx->r1) {
        // 0x8000D4FC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8000D564;
    }
    // 0x8000D4FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000D500: beql        $v0, $at, L_8000D5E0
    if (ctx->r2 == ctx->r1) {
        // 0x8000D504: lwc1        $f8, 0x44($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
            goto L_8000D5E0;
    }
    goto skip_0;
    // 0x8000D504: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    skip_0:
    // 0x8000D508: b           L_8000D654
    // 0x8000D50C: nop

        goto L_8000D654;
    // 0x8000D50C: nop

L_8000D510:
    // 0x8000D510: lh          $t6, 0x64($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X64);
    // 0x8000D514: lh          $t8, 0x66($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X66);
    // 0x8000D518: lh          $t0, 0x68($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X68);
    // 0x8000D51C: addiu       $t7, $t6, -0x14
    ctx->r15 = ADD32(ctx->r14, -0X14);
    // 0x8000D520: lh          $t2, 0x6A($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X6A);
    // 0x8000D524: sh          $t7, 0x64($a0)
    MEM_H(0X64, ctx->r4) = ctx->r15;
    // 0x8000D528: lh          $t4, 0x64($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X64);
    // 0x8000D52C: addiu       $t9, $t8, -0xA
    ctx->r25 = ADD32(ctx->r24, -0XA);
    // 0x8000D530: addiu       $t1, $t0, 0x14
    ctx->r9 = ADD32(ctx->r8, 0X14);
    // 0x8000D534: addiu       $t3, $t2, 0xA
    ctx->r11 = ADD32(ctx->r10, 0XA);
    // 0x8000D538: sh          $t9, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r25;
    // 0x8000D53C: sh          $t1, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r9;
    // 0x8000D540: bgez        $t4, L_8000D65C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8000D544: sh          $t3, 0x6A($a0)
        MEM_H(0X6A, ctx->r4) = ctx->r11;
            goto L_8000D65C;
    }
    // 0x8000D544: sh          $t3, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r11;
    // 0x8000D548: lh          $t5, 0x66($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X66);
    // 0x8000D54C: bgezl       $t5, L_8000D660
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8000D550: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D660;
    }
    goto skip_1;
    // 0x8000D550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8000D554: jal         0x8000D66C
    // 0x8000D558: nop

    func_8000D66C_E26C(rdram, ctx);
        goto after_0;
    // 0x8000D558: nop

    after_0:
    // 0x8000D55C: b           L_8000D660
    // 0x8000D560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D660;
    // 0x8000D560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D564:
    // 0x8000D564: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000D568: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000D56C: ldc1        $f8, -0x53D8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X53D8);
    // 0x8000D570: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000D574: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8000D578: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8000D57C: swc1        $f16, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f16.u32l;
    // 0x8000D580: jal         0x8000D918
    // 0x8000D584: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000D918_E518(rdram, ctx);
        goto after_1;
    // 0x8000D584: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8000D588: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000D58C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000D590: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8000D594: lwc1        $f18, 0x44($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000D598: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000D59C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000D5A0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8000D5A4: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x8000D5A8: nop

    // 0x8000D5AC: bc1fl       L_8000D660
    if (!c1cs) {
        // 0x8000D5B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D660;
    }
    goto skip_2;
    // 0x8000D5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8000D5B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000D5B8: lh          $t6, 0x36($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X36);
    // 0x8000D5BC: lh          $t7, 0x38($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X38);
    // 0x8000D5C0: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x8000D5C4: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x8000D5C8: sh          $t6, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r14;
    // 0x8000D5CC: jal         0x8000D66C
    // 0x8000D5D0: sh          $t7, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r15;
    func_8000D66C_E26C(rdram, ctx);
        goto after_2;
    // 0x8000D5D0: sh          $t7, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r15;
    after_2:
    // 0x8000D5D4: b           L_8000D660
    // 0x8000D5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D660;
    // 0x8000D5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D5DC: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
L_8000D5E0:
    // 0x8000D5E0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8000D5E4: ldc1        $f16, -0x53D0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X53D0);
    // 0x8000D5E8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000D5EC: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8000D5F0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8000D5F4: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x8000D5F8: jal         0x8000D918
    // 0x8000D5FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8000D918_E518(rdram, ctx);
        goto after_3;
    // 0x8000D5FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x8000D600: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000D604: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000D608: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000D60C: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8000D610: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000D614: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000D618: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8000D61C: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x8000D620: nop

    // 0x8000D624: bc1fl       L_8000D660
    if (!c1cs) {
        // 0x8000D628: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000D660;
    }
    goto skip_3;
    // 0x8000D628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8000D62C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000D630: lh          $t8, 0x36($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X36);
    // 0x8000D634: lh          $t9, 0x38($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X38);
    // 0x8000D638: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x8000D63C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x8000D640: sh          $t8, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r24;
    // 0x8000D644: jal         0x8000D66C
    // 0x8000D648: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
    func_8000D66C_E26C(rdram, ctx);
        goto after_4;
    // 0x8000D648: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
    after_4:
    // 0x8000D64C: b           L_8000D660
    // 0x8000D650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000D660;
    // 0x8000D650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D654:
    // 0x8000D654: jal         0x8000D66C
    // 0x8000D658: nop

    func_8000D66C_E26C(rdram, ctx);
        goto after_5;
    // 0x8000D658: nop

    after_5:
L_8000D65C:
    // 0x8000D65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000D660:
    // 0x8000D660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D664: jr          $ra
    // 0x8000D668: nop

    TRACE_RETURN()
    return;
    // 0x8000D668: nop

;}
RECOMP_FUNC void alLoadParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004ECB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004ECB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8004ECB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004ECBC: beq         $a1, $at, L_8004EE14
    if (ctx->r5 == ctx->r1) {
        // 0x8004ECC0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8004EE14;
    }
    // 0x8004ECC0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8004ECC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8004ECC8: bnel        $a1, $at, L_8004EE78
    if (ctx->r5 != ctx->r1) {
        // 0x8004ECCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004EE78;
    }
    goto skip_0;
    // 0x8004ECCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8004ECD0: sw          $a2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r6;
    // 0x8004ECD4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8004ECD8: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8004ECDC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8004ECE0: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x8004ECE4: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x8004ECE8: beql        $v0, $zero, L_8004ED08
    if (ctx->r2 == 0) {
        // 0x8004ECEC: lw          $v0, 0x28($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X28);
            goto L_8004ED08;
    }
    goto skip_1;
    // 0x8004ECEC: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    skip_1:
    // 0x8004ECF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8004ECF4: beq         $v0, $a0, L_8004EDC8
    if (ctx->r2 == ctx->r4) {
        // 0x8004ECF8: lui         $t0, 0x8005
        ctx->r8 = S32(0X8005 << 16);
            goto L_8004EDC8;
    }
    // 0x8004ECF8: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8004ECFC: b           L_8004EE78
    // 0x8004ED00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004EE78;
    // 0x8004ED00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004ED04: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
L_8004ED08:
    // 0x8004ED08: addiu       $t7, $t7, -0xCA4
    ctx->r15 = ADD32(ctx->r15, -0XCA4);
    // 0x8004ED0C: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x8004ED10: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8004ED14: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8004ED18: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x8004ED1C: mflo        $t9
    ctx->r25 = lo;
    // 0x8004ED20: bne         $a1, $zero, L_8004ED2C
    if (ctx->r5 != 0) {
        // 0x8004ED24: nop
    
            goto L_8004ED2C;
    }
    // 0x8004ED24: nop

    // 0x8004ED28: break       7
    do_break(2147806504);
L_8004ED2C:
    // 0x8004ED2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004ED30: bne         $a1, $at, L_8004ED44
    if (ctx->r5 != ctx->r1) {
        // 0x8004ED34: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004ED44;
    }
    // 0x8004ED34: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004ED38: bne         $t8, $at, L_8004ED44
    if (ctx->r24 != ctx->r1) {
        // 0x8004ED3C: nop
    
            goto L_8004ED44;
    }
    // 0x8004ED3C: nop

    // 0x8004ED40: break       6
    do_break(2147806528);
L_8004ED44:
    // 0x8004ED44: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004ED48: mflo        $t0
    ctx->r8 = lo;
    // 0x8004ED4C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8004ED50: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x8004ED54: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x8004ED58: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8004ED5C: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x8004ED60: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x8004ED64: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004ED68: mflo        $t4
    ctx->r12 = lo;
    // 0x8004ED6C: sw          $t4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r12;
    // 0x8004ED70: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8004ED74: beql        $v1, $zero, L_8004EDBC
    if (ctx->r3 == 0) {
        // 0x8004ED78: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_8004EDBC;
    }
    goto skip_2;
    // 0x8004ED78: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_2:
    // 0x8004ED7C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8004ED80: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x8004ED84: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8004ED88: sw          $t5, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r13;
    // 0x8004ED8C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x8004ED90: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004ED94: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x8004ED98: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8004ED9C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8004EDA0: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
    // 0x8004EDA4: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x8004EDA8: jal         0x80052530
    // 0x8004EDAC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    alCopy(rdram, ctx);
        goto after_0;
    // 0x8004EDAC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x8004EDB0: b           L_8004EE78
    // 0x8004EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004EE78;
    // 0x8004EDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004EDB8: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_8004EDBC:
    // 0x8004EDBC: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x8004EDC0: b           L_8004EE74
    // 0x8004EDC4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_8004EE74;
    // 0x8004EDC4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_8004EDC8:
    // 0x8004EDC8: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x8004EDCC: addiu       $t0, $t0, -0x117C
    ctx->r8 = ADD32(ctx->r8, -0X117C);
    // 0x8004EDD0: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    // 0x8004EDD4: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8004EDD8: beql        $v1, $zero, L_8004EE08
    if (ctx->r3 == 0) {
        // 0x8004EDDC: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_8004EE08;
    }
    goto skip_3;
    // 0x8004EDDC: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_3:
    // 0x8004EDE0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8004EDE4: sw          $t1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r9;
    // 0x8004EDE8: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x8004EDEC: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8004EDF0: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x8004EDF4: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x8004EDF8: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8004EDFC: b           L_8004EE74
    // 0x8004EE00: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
        goto L_8004EE74;
    // 0x8004EE00: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
    // 0x8004EE04: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_8004EE08:
    // 0x8004EE08: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x8004EE0C: b           L_8004EE74
    // 0x8004EE10: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_8004EE74;
    // 0x8004EE10: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_8004EE14:
    // 0x8004EE14: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x8004EE18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8004EE1C: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x8004EE20: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x8004EE24: beq         $v0, $zero, L_8004EE74
    if (ctx->r2 == 0) {
        // 0x8004EE28: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_8004EE74;
    }
    // 0x8004EE28: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x8004EE2C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8004EE30: sw          $t6, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r14;
    // 0x8004EE34: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8004EE38: bne         $v1, $zero, L_8004EE58
    if (ctx->r3 != 0) {
        // 0x8004EE3C: nop
    
            goto L_8004EE58;
    }
    // 0x8004EE3C: nop

    // 0x8004EE40: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8004EE44: beql        $v1, $zero, L_8004EE78
    if (ctx->r3 == 0) {
        // 0x8004EE48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004EE78;
    }
    goto skip_4;
    // 0x8004EE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x8004EE4C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8004EE50: b           L_8004EE74
    // 0x8004EE54: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
        goto L_8004EE74;
    // 0x8004EE54: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
L_8004EE58:
    // 0x8004EE58: bnel        $a0, $v1, L_8004EE78
    if (ctx->r4 != ctx->r3) {
        // 0x8004EE5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004EE78;
    }
    goto skip_5;
    // 0x8004EE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x8004EE60: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8004EE64: beql        $v1, $zero, L_8004EE78
    if (ctx->r3 == 0) {
        // 0x8004EE68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004EE78;
    }
    goto skip_6;
    // 0x8004EE68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x8004EE6C: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x8004EE70: sw          $t8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r24;
L_8004EE74:
    // 0x8004EE74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004EE78:
    // 0x8004EE78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004EE7C: jr          $ra
    // 0x8004EE80: nop

    TRACE_RETURN()
    return;
    // 0x8004EE80: nop

;}
RECOMP_FUNC void guMtxL2F(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043C58: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x80043C5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80043C60: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80043C64: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80043C68: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x80043C6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80043C70: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80043C74: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80043C78: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80043C7C: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_80043C80:
    // 0x80043C80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80043C84: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_80043C88:
    // 0x80043C88: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80043C8C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80043C90: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80043C94: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x80043C98: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80043C9C: and         $t5, $t9, $t2
    ctx->r13 = ctx->r25 & ctx->r10;
    // 0x80043CA0: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x80043CA4: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80043CA8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80043CAC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80043CB0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80043CB4: sll         $t5, $t8, 16
    ctx->r13 = S32(ctx->r24 << 16);
    // 0x80043CB8: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80043CBC: and         $t6, $t5, $t2
    ctx->r14 = ctx->r13 & ctx->r10;
    // 0x80043CC0: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80043CC4: or          $a3, $t9, $t6
    ctx->r7 = ctx->r25 | ctx->r14;
    // 0x80043CC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80043CCC: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x80043CD0: sw          $a3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r7;
    // 0x80043CD4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80043CD8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80043CDC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80043CE0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80043CE4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80043CE8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80043CEC: swc1        $f8, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->f8.u32l;
    // 0x80043CF0: bne         $a0, $t3, L_80043C88
    if (ctx->r4 != ctx->r11) {
        // 0x80043CF4: swc1        $f18, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->f18.u32l;
            goto L_80043C88;
    }
    // 0x80043CF4: swc1        $f18, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->f18.u32l;
    // 0x80043CF8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80043CFC: bne         $a2, $t4, L_80043C80
    if (ctx->r6 != ctx->r12) {
        // 0x80043D00: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_80043C80;
    }
    // 0x80043D00: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x80043D04: jr          $ra
    // 0x80043D08: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80043D08: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800082B4_8EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800082B4: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x800082B8: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x800082BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800082C0: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x800082C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800082C8: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x800082CC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800082D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800082D4: addiu       $t8, $t8, -0x3340
    ctx->r24 = ADD32(ctx->r24, -0X3340);
    // 0x800082D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800082DC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800082E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800082E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800082E8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800082EC: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x800082F0: ori         $at, $at, 0xB6B8
    ctx->r1 = ctx->r1 | 0XB6B8;
    // 0x800082F4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800082F8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800082FC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80008300: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x80008304: jal         0x80007970
    // 0x80008308: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80007970_8570(rdram, ctx);
        goto after_0;
    // 0x80008308: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8000830C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80008310: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80008314: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80008318: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8000831C: sw          $t9, -0x4970($at)
    MEM_W(-0X4970, ctx->r1) = ctx->r25;
    // 0x80008320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80008324: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80008328: jr          $ra
    // 0x8000832C: nop

    TRACE_RETURN()
    return;
    // 0x8000832C: nop

;}
RECOMP_FUNC void func_80011908_12508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011908: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001190C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80011910: beq         $a0, $zero, L_8001192C
    if (ctx->r4 == 0) {
        // 0x80011914: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_8001192C;
    }
    // 0x80011914: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80011918: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8001191C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x80011920: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x80011924: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80011928: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
L_8001192C:
    // 0x8001192C: jr          $ra
    // 0x80011930: nop

    TRACE_RETURN()
    return;
    // 0x80011930: nop

;}
RECOMP_FUNC void func_80039440_3A040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039440: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80039444: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80039448: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8003944C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80039450: bne         $a0, $at, L_800394B4
    if (ctx->r4 != ctx->r1) {
        // 0x80039454: addiu       $v1, $zero, 0xE
        ctx->r3 = ADD32(0, 0XE);
            goto L_800394B4;
    }
    // 0x80039454: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x80039458: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003945C: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x80039460: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80039464: lbu         $v0, 0x130C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X130C);
    // 0x80039468: addiu       $t1, $t1, 0xC28
    ctx->r9 = ADD32(ctx->r9, 0XC28);
    // 0x8003946C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80039470: addiu       $t2, $zero, 0xB0
    ctx->r10 = ADD32(0, 0XB0);
L_80039474:
    // 0x80039474: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039478: mflo        $t7
    ctx->r15 = lo;
    // 0x8003947C: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x80039480: lbu         $a1, 0x4($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X4);
    // 0x80039484: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80039488: bnel        $at, $zero, L_8003949C
    if (ctx->r1 != 0) {
        // 0x8003948C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8003949C;
    }
    goto skip_0;
    // 0x8003948C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80039490: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80039494: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x80039498: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8003949C:
    // 0x8003949C: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x800394A0: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x800394A4: bne         $at, $zero, L_80039474
    if (ctx->r1 != 0) {
        // 0x800394A8: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_80039474;
    }
    // 0x800394A8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800394AC: b           L_8003954C
    // 0x800394B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8003954C;
    // 0x800394B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800394B4:
    // 0x800394B4: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x800394B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800394BC: addiu       $t1, $t1, 0xC28
    ctx->r9 = ADD32(ctx->r9, 0XC28);
    // 0x800394C0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x800394C4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x800394C8: addiu       $t3, $zero, 0xB0
    ctx->r11 = ADD32(0, 0XB0);
    // 0x800394CC: addiu       $t2, $zero, 0xB0
    ctx->r10 = ADD32(0, 0XB0);
L_800394D0:
    // 0x800394D0: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800394D4: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x800394D8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800394DC: mflo        $t4
    ctx->r12 = lo;
    // 0x800394E0: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x800394E4: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x800394E8: multu       $a2, $t3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800394EC: mflo        $t7
    ctx->r15 = lo;
    // 0x800394F0: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x800394F4: lbu         $t9, 0xB4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XB4);
    // 0x800394F8: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800394FC: beq         $at, $zero, L_80039510
    if (ctx->r1 == 0) {
        // 0x80039500: nop
    
            goto L_80039510;
    }
    // 0x80039500: nop

    // 0x80039504: addiu       $a3, $a0, 0x1
    ctx->r7 = ADD32(ctx->r4, 0X1);
    // 0x80039508: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x8003950C: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
L_80039510:
    // 0x80039510: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039514: mflo        $t5
    ctx->r13 = lo;
    // 0x80039518: addu        $t7, $t1, $t5
    ctx->r15 = ADD32(ctx->r9, ctx->r13);
    // 0x8003951C: lbu         $t0, 0x4($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X4);
    // 0x80039520: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80039524: bnel        $at, $zero, L_80039538
    if (ctx->r1 != 0) {
        // 0x80039528: addiu       $a0, $a2, -0x2
        ctx->r4 = ADD32(ctx->r6, -0X2);
            goto L_80039538;
    }
    goto skip_1;
    // 0x80039528: addiu       $a0, $a2, -0x2
    ctx->r4 = ADD32(ctx->r6, -0X2);
    skip_1:
    // 0x8003952C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80039530: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x80039534: addiu       $a0, $a2, -0x2
    ctx->r4 = ADD32(ctx->r6, -0X2);
L_80039538:
    // 0x80039538: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8003953C: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x80039540: beq         $at, $zero, L_800394D0
    if (ctx->r1 == 0) {
        // 0x80039544: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_800394D0;
    }
    // 0x80039544: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80039548: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003954C:
    // 0x8003954C: jr          $ra
    // 0x80039550: nop

    TRACE_RETURN()
    return;
    // 0x80039550: nop

;}
RECOMP_FUNC void guAlign(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043ED0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80043ED4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80043ED8: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80043EDC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80043EE0: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80043EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80043EE8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80043EEC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80043EF0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80043EF4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80043EF8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80043EFC: jal         0x80043D10
    // 0x80043F00: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guAlignF(rdram, ctx);
        goto after_0;
    // 0x80043F00: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80043F04: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80043F08: jal         0x80043AA0
    // 0x80043F0C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80043F0C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_1:
    // 0x80043F10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80043F14: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80043F18: jr          $ra
    // 0x80043F1C: nop

    TRACE_RETURN()
    return;
    // 0x80043F1C: nop

;}
RECOMP_FUNC void func_80033590_34190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80033594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003359C: jal         0x80033F24
    // 0x800335A0: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    func_80033F24_34B24(rdram, ctx);
        goto after_0;
    // 0x800335A0: lhu         $a0, 0x0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X0);
    after_0:
    // 0x800335A4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800335A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800335AC: bgez        $v0, L_800335C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800335B0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800335C4;
    }
    // 0x800335B0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800335B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800335B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800335BC: nop

    // 0x800335C0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800335C4:
    // 0x800335C4: lui         $at, 0x3F70
    ctx->r1 = S32(0X3F70 << 16);
    // 0x800335C8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800335CC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800335D0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800335D4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800335D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800335DC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800335E0: swc1        $f4, -0x7074($at)
    MEM_W(-0X7074, ctx->r1) = ctx->f4.u32l;
    // 0x800335E4: jal         0x800340FC
    // 0x800335E8: lhu         $a0, 0x2($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X2);
    func_800340FC_34CFC(rdram, ctx);
        goto after_1;
    // 0x800335E8: lhu         $a0, 0x2($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X2);
    after_1:
    // 0x800335EC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800335F0: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x800335F4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800335F8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800335FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80033600: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80033604: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033608: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8003360C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80033610: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80033614: swc1        $f4, -0x7080($at)
    MEM_W(-0X7080, ctx->r1) = ctx->f4.u32l;
    // 0x80033618: jal         0x800340FC
    // 0x8003361C: lhu         $a0, 0x4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X4);
    func_800340FC_34CFC(rdram, ctx);
        goto after_2;
    // 0x8003361C: lhu         $a0, 0x4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X4);
    after_2:
    // 0x80033620: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80033624: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x80033628: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8003362C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80033630: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80033634: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80033638: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8003363C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80033640: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80033644: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80033648: swc1        $f4, -0x707C($at)
    MEM_W(-0X707C, ctx->r1) = ctx->f4.u32l;
    // 0x8003364C: jal         0x800340FC
    // 0x80033650: lhu         $a0, 0x6($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X6);
    func_800340FC_34CFC(rdram, ctx);
        goto after_3;
    // 0x80033650: lhu         $a0, 0x6($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X6);
    after_3:
    // 0x80033654: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80033658: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x8003365C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80033660: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80033664: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80033668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003366C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80033670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80033674: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80033678: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8003367C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80033680: jr          $ra
    // 0x80033684: swc1        $f4, -0x7078($at)
    MEM_W(-0X7078, ctx->r1) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80033684: swc1        $f4, -0x7078($at)
    MEM_W(-0X7078, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8000814C_8D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000814C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80008150: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80008154: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80008158: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000815C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80008160: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80008164: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80008168: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8000816C:
    // 0x8000816C: addu        $t6, $s1, $s2
    ctx->r14 = ADD32(ctx->r17, ctx->r18);
    // 0x80008170: lbu         $a1, 0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X1);
    // 0x80008174: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x80008178: jal         0x80008068
    // 0x8000817C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_80008068_8C68(rdram, ctx);
        goto after_0;
    // 0x8000817C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x80008180: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80008184: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80008188: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x8000818C: bne         $at, $zero, L_8000816C
    if (ctx->r1 != 0) {
        // 0x80008190: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8000816C;
    }
    // 0x80008190: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80008194: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80008198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000819C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800081A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800081A4: jr          $ra
    // 0x800081A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800081A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80002E70_3A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002E70: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002E74: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002E78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002E80: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002E84: lbu         $v0, 0x2DD7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DD7);
    // 0x80002E88: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002E8C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80002E90: bne         $v0, $zero, L_80002EB8
    if (ctx->r2 != 0) {
        // 0x80002E94: nop
    
            goto L_80002EB8;
    }
    // 0x80002E94: nop

    // 0x80002E98: lh          $t6, 0x2DB7($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2DB7);
    // 0x80002E9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80002EA0: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002EA4: bne         $t6, $zero, L_80002EB8
    if (ctx->r14 != 0) {
        // 0x80002EA8: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_80002EB8;
    }
    // 0x80002EA8: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80002EAC: sh          $t7, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r15;
    // 0x80002EB0: b           L_80002EEC
    // 0x80002EB4: sb          $t8, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r24;
        goto L_80002EEC;
    // 0x80002EB4: sb          $t8, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r24;
L_80002EB8:
    // 0x80002EB8: lw          $t9, 0x48D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X48D8);
    // 0x80002EBC: bnel        $t9, $zero, L_80002EF0
    if (ctx->r25 != 0) {
        // 0x80002EC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002EF0;
    }
    goto skip_0;
    // 0x80002EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002EC4: jal         0x8000B364
    // 0x80002EC8: nop

    func_8000B364_BF64(rdram, ctx);
        goto after_0;
    // 0x80002EC8: nop

    after_0:
    // 0x80002ECC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80002ED0: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80002ED4: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80002ED8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80002EDC: jal         0x8000383C
    // 0x80002EE0: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
    func_8000383C_443C(rdram, ctx);
        goto after_1;
    // 0x80002EE0: sb          $t0, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r8;
    after_1:
    // 0x80002EE4: jal         0x80003728
    // 0x80002EE8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x80002EE8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_2:
L_80002EEC:
    // 0x80002EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002EF0:
    // 0x80002EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002EF4: jr          $ra
    // 0x80002EF8: nop

    TRACE_RETURN()
    return;
    // 0x80002EF8: nop

;}
RECOMP_FUNC void func_8000607C_6C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000607C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80006080: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x80006084: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80006088: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8000608C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80006090: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80006094: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x80006098: sh          $a0, 0x2FE1($at)
    MEM_H(0X2FE1, ctx->r1) = ctx->r4;
    // 0x8000609C: lhu         $t3, 0x16($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X16);
    // 0x800060A0: sh          $a1, 0x2FE5($at)
    MEM_H(0X2FE5, ctx->r1) = ctx->r5;
    // 0x800060A4: sh          $a2, 0x2FE7($at)
    MEM_H(0X2FE7, ctx->r1) = ctx->r6;
    // 0x800060A8: sh          $a3, 0x2FE9($at)
    MEM_H(0X2FE9, ctx->r1) = ctx->r7;
    // 0x800060AC: sh          $t3, 0x2FE3($at)
    MEM_H(0X2FE3, ctx->r1) = ctx->r11;
    // 0x800060B0: lhu         $t4, 0x12($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X12);
    // 0x800060B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800060B8: sh          $t4, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r12;
    // 0x800060BC: lhu         $t5, 0x1A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X1A);
    // 0x800060C0: sh          $t5, 0x2E3B($at)
    MEM_H(0X2E3B, ctx->r1) = ctx->r13;
    // 0x800060C4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800060C8: sb          $t7, 0x2E2A($at)
    MEM_B(0X2E2A, ctx->r1) = ctx->r15;
    // 0x800060CC: jr          $ra
    // 0x800060D0: sw          $t6, 0x2E3D($at)
    MEM_W(0X2E3D, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x800060D0: sw          $t6, 0x2E3D($at)
    MEM_W(0X2E3D, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800166AC_172AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800166AC: sra         $t6, $a1, 3
    ctx->r14 = S32(SIGNED(ctx->r5) >> 3);
    // 0x800166B0: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800166B4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x800166B8: andi        $t9, $a1, 0x7
    ctx->r25 = ctx->r5 & 0X7;
    // 0x800166BC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800166C0: sllv        $t1, $t0, $t9
    ctx->r9 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x800166C4: and         $t2, $t8, $t1
    ctx->r10 = ctx->r24 & ctx->r9;
    // 0x800166C8: beq         $t2, $zero, L_800166D8
    if (ctx->r10 == 0) {
        // 0x800166CC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800166D8;
    }
    // 0x800166CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800166D0: jr          $ra
    // 0x800166D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800166D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800166D8:
    // 0x800166D8: jr          $ra
    // 0x800166DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x800166DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80020964_21564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80020964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002096C: jal         0x80004240
    // 0x80020970: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x80020970: nop

    after_0:
    // 0x80020974: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80020978: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8002097C: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80020980: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80020984: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80020988: lbu         $t6, -0x521C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X521C);
    // 0x8002098C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80020990: sw          $t7, -0x3044($at)
    MEM_W(-0X3044, ctx->r1) = ctx->r15;
    // 0x80020994: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80020998: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002099C: jal         0x80003678
    // 0x800209A0: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    func_80003678_4278(rdram, ctx);
        goto after_1;
    // 0x800209A0: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    after_1:
    // 0x800209A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800209A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800209AC: jr          $ra
    // 0x800209B0: nop

    TRACE_RETURN()
    return;
    // 0x800209B0: nop

;}
RECOMP_FUNC void func_80038588_39188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038588: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x8003858C: addiu       $v1, $v1, 0x1FB8
    ctx->r3 = ADD32(ctx->r3, 0X1FB8);
    // 0x80038590: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80038594: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80038598: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8003859C: bne         $t6, $zero, L_800385B8
    if (ctx->r14 != 0) {
        // 0x800385A0: addiu       $v0, $v0, -0x7BF8
        ctx->r2 = ADD32(ctx->r2, -0X7BF8);
            goto L_800385B8;
    }
    // 0x800385A0: addiu       $v0, $v0, -0x7BF8
    ctx->r2 = ADD32(ctx->r2, -0X7BF8);
    // 0x800385A4: addiu       $t7, $t7, 0x1FC8
    ctx->r15 = ADD32(ctx->r15, 0X1FC8);
    // 0x800385A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800385AC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800385B0: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x800385B4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_800385B8:
    // 0x800385B8: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x800385BC: jr          $ra
    // 0x800385C0: nop

    TRACE_RETURN()
    return;
    // 0x800385C0: nop

;}
RECOMP_FUNC void func_8001E90C_1F50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001E90C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8001E910: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8001E914: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8001E918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E91C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8001E920: bne         $v0, $at, L_8001E930
    if (ctx->r2 != ctx->r1) {
        // 0x8001E924: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8001E930;
    }
    // 0x8001E924: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001E928: b           L_8001E934
    // 0x8001E92C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_8001E934;
    // 0x8001E92C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8001E930:
    // 0x8001E930: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8001E934:
    // 0x8001E934: andi        $a0, $a3, 0xFFFF
    ctx->r4 = ctx->r7 & 0XFFFF;
    // 0x8001E938: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8001E93C: jal         0x80003F30
    // 0x8001E940: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x8001E940: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x8001E944: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8001E948: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E94C: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x8001E950: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x8001E954: swc1        $f6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f6.u32l;
    // 0x8001E958: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8001E95C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001E960: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001E964: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001E968: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8001E96C: swc1        $f8, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f8.u32l;
    // 0x8001E970: swc1        $f2, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f2.u32l;
    // 0x8001E974: swc1        $f2, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f2.u32l;
    // 0x8001E978: swc1        $f2, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f2.u32l;
    // 0x8001E97C: swc1        $f2, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f2.u32l;
    // 0x8001E980: swc1        $f2, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f2.u32l;
    // 0x8001E984: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x8001E988: swc1        $f2, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f2.u32l;
    // 0x8001E98C: swc1        $f2, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f2.u32l;
    // 0x8001E990: swc1        $f2, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f2.u32l;
    // 0x8001E994: swc1        $f2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f2.u32l;
    // 0x8001E998: swc1        $f12, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f12.u32l;
    // 0x8001E99C: swc1        $f12, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f12.u32l;
    // 0x8001E9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E9A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8001E9A8: jr          $ra
    // 0x8001E9AC: nop

    TRACE_RETURN()
    return;
    // 0x8001E9AC: nop

;}
RECOMP_FUNC void func_80012470_13070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012470: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80012474: sh          $zero, 0xCA($a0)
    MEM_H(0XCA, ctx->r4) = 0;
    // 0x80012478: lh          $t6, 0xCA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XCA);
    // 0x8001247C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x80012480: swc1        $f0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f0.u32l;
    // 0x80012484: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
    // 0x80012488: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x8001248C: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x80012490: swc1        $f0, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f0.u32l;
    // 0x80012494: swc1        $f0, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f0.u32l;
    // 0x80012498: jr          $ra
    // 0x8001249C: sh          $t6, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8001249C: sh          $t6, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80007500_8100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80007500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80007504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007508: beq         $a0, $zero, L_8000753C
    if (ctx->r4 == 0) {
        // 0x8000750C: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_8000753C;
    }
    // 0x8000750C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80007510: jal         0x800426E0
    // 0x80007514: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x80007514: nop

    after_0:
    // 0x80007518: jal         0x80042720
    // 0x8000751C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x8000751C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80007520: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80007524: beq         $v0, $t7, L_80007534
    if (ctx->r2 == ctx->r15) {
        // 0x80007528: nop
    
            goto L_80007534;
    }
    // 0x80007528: nop

    // 0x8000752C: b           L_80007540
    // 0x80007530: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80007540;
    // 0x80007530: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80007534:
    // 0x80007534: b           L_80007540
    // 0x80007538: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_80007540;
    // 0x80007538: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
L_8000753C:
    // 0x8000753C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80007540:
    // 0x80007540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007544: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80007548: jr          $ra
    // 0x8000754C: nop

    TRACE_RETURN()
    return;
    // 0x8000754C: nop

;}
RECOMP_FUNC void func_8000C488_D088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000C488: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000C48C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000C490: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000C494: lw          $v0, 0x7C48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7C48);
    // 0x8000C498: beq         $v0, $zero, L_8000C4C0
    if (ctx->r2 == 0) {
        // 0x8000C49C: nop
    
            goto L_8000C4C0;
    }
    // 0x8000C49C: nop

    // 0x8000C4A0: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8000C4A4: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8000C4A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000C4AC: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x8000C4B0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8000C4B4: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x8000C4B8: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x8000C4BC: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
L_8000C4C0:
    // 0x8000C4C0: jr          $ra
    // 0x8000C4C4: nop

    TRACE_RETURN()
    return;
    // 0x8000C4C4: nop

;}
RECOMP_FUNC void func_8002338C_23F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002338C: jr          $ra
    // 0x80023390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80023390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8003D17C_3DD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D17C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003D180: lw          $v0, 0x7900($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7900);
    // 0x8003D184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003D188: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8003D18C: bnel        $v0, $at, L_8003D1E4
    if (ctx->r2 != ctx->r1) {
        // 0x8003D190: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003D1E4;
    }
    goto skip_0;
    // 0x8003D190: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x8003D194: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8003D198: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8003D19C: ori         $at, $at, 0xB078
    ctx->r1 = ctx->r1 | 0XB078;
    // 0x8003D1A0: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8003D1A4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8003D1A8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D1AC: addiu       $a0, $a0, 0x7908
    ctx->r4 = ADD32(ctx->r4, 0X7908);
    // 0x8003D1B0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8003D1B4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8003D1B8: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x8003D1BC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8003D1C0: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x8003D1C4: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x8003D1C8: sw          $t9, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r25;
    // 0x8003D1CC: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x8003D1D0: sw          $at, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r1;
    // 0x8003D1D4: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x8003D1D8: jr          $ra
    // 0x8003D1DC: sw          $t9, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8003D1DC: sw          $t9, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r25;
    // 0x8003D1E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8003D1E4:
    // 0x8003D1E4: bne         $v0, $at, L_8003D238
    if (ctx->r2 != ctx->r1) {
        // 0x8003D1E8: lui         $t0, 0x8016
        ctx->r8 = S32(0X8016 << 16);
            goto L_8003D238;
    }
    // 0x8003D1E8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8003D1EC: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x8003D1F0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8003D1F4: ori         $at, $at, 0xB090
    ctx->r1 = ctx->r1 | 0XB090;
    // 0x8003D1F8: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8003D1FC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8003D200: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D204: addiu       $a0, $a0, 0x7908
    ctx->r4 = ADD32(ctx->r4, 0X7908);
    // 0x8003D208: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x8003D20C: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8003D210: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x8003D214: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x8003D218: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x8003D21C: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x8003D220: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
    // 0x8003D224: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x8003D228: sw          $at, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r1;
    // 0x8003D22C: lw          $t3, 0x14($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X14);
    // 0x8003D230: jr          $ra
    // 0x8003D234: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x8003D234: sw          $t3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r11;
L_8003D238:
    // 0x8003D238: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003D23C: bne         $v0, $at, L_8003D308
    if (ctx->r2 != ctx->r1) {
        // 0x8003D240: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_8003D308;
    }
    // 0x8003D240: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8003D244: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8003D248: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8003D24C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8003D250: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8003D254: lhu         $t4, 0x3090($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X3090);
    // 0x8003D258: lhu         $t5, 0x3078($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X3078);
    // 0x8003D25C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D260: addiu       $a0, $a0, 0x7908
    ctx->r4 = ADD32(ctx->r4, 0X7908);
    // 0x8003D264: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x8003D268: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x8003D26C: lhu         $t7, 0x307A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X307A);
    // 0x8003D270: lhu         $t8, 0x3092($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X3092);
    // 0x8003D274: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8003D278: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x8003D27C: lhu         $t2, 0x307C($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X307C);
    // 0x8003D280: lhu         $t0, 0x3094($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X3094);
    // 0x8003D284: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x8003D288: or          $t1, $t0, $t2
    ctx->r9 = ctx->r8 | ctx->r10;
    // 0x8003D28C: sh          $t1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r9;
    // 0x8003D290: lh          $t4, 0x307E($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X307E);
    // 0x8003D294: lh          $t3, 0x3096($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X3096);
    // 0x8003D298: addiu       $t0, $zero, -0x80
    ctx->r8 = ADD32(0, -0X80);
    // 0x8003D29C: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x8003D2A0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8003D2A4: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
    // 0x8003D2A8: lh          $t8, 0x3080($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X3080);
    // 0x8003D2AC: lh          $t6, 0x3098($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X3098);
    // 0x8003D2B0: lh          $v1, 0x6($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X6);
    // 0x8003D2B4: addiu       $t1, $zero, -0x80
    ctx->r9 = ADD32(0, -0X80);
    // 0x8003D2B8: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x8003D2BC: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x8003D2C0: bne         $at, $zero, L_8003D2D0
    if (ctx->r1 != 0) {
        // 0x8003D2C4: sh          $t7, 0x8($a0)
        MEM_H(0X8, ctx->r4) = ctx->r15;
            goto L_8003D2D0;
    }
    // 0x8003D2C4: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x8003D2C8: sh          $t9, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r25;
    // 0x8003D2CC: lh          $v1, 0x6($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X6);
L_8003D2D0:
    // 0x8003D2D0: slti        $at, $v1, -0x80
    ctx->r1 = SIGNED(ctx->r3) < -0X80 ? 1 : 0;
    // 0x8003D2D4: beql        $at, $zero, L_8003D2E4
    if (ctx->r1 == 0) {
        // 0x8003D2D8: lh          $v0, 0x8($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X8);
            goto L_8003D2E4;
    }
    goto skip_1;
    // 0x8003D2D8: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    skip_1:
    // 0x8003D2DC: sh          $t0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r8;
    // 0x8003D2E0: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
L_8003D2E4:
    // 0x8003D2E4: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8003D2E8: bnel        $at, $zero, L_8003D2FC
    if (ctx->r1 != 0) {
        // 0x8003D2EC: slti        $at, $v0, -0x80
        ctx->r1 = SIGNED(ctx->r2) < -0X80 ? 1 : 0;
            goto L_8003D2FC;
    }
    goto skip_2;
    // 0x8003D2EC: slti        $at, $v0, -0x80
    ctx->r1 = SIGNED(ctx->r2) < -0X80 ? 1 : 0;
    skip_2:
    // 0x8003D2F0: sh          $t2, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r10;
    // 0x8003D2F4: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x8003D2F8: slti        $at, $v0, -0x80
    ctx->r1 = SIGNED(ctx->r2) < -0X80 ? 1 : 0;
L_8003D2FC:
    // 0x8003D2FC: beq         $at, $zero, L_8003D308
    if (ctx->r1 == 0) {
        // 0x8003D300: nop
    
            goto L_8003D308;
    }
    // 0x8003D300: nop

    // 0x8003D304: sh          $t1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r9;
L_8003D308:
    // 0x8003D308: jr          $ra
    // 0x8003D30C: nop

    TRACE_RETURN()
    return;
    // 0x8003D30C: nop

;}
RECOMP_FUNC void func_80013C0C_1480C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80013C0C: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x80013C10: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80013C14: addiu       $t7, $t7, 0x7FC0
    ctx->r15 = ADD32(ctx->r15, 0X7FC0);
    // 0x80013C18: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x80013C1C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80013C20: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x80013C24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80013C28: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x80013C2C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80013C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013C34: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80013C38: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x80013C3C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80013C40: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80013C44: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80013C48: jal         0x80001C00
    // 0x80013C4C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80001C00_2800(rdram, ctx);
        goto after_0;
    // 0x80013C4C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80013C50: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80013C54: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80013C58: jal         0x800142BC
    // 0x80013C5C: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    func_800142BC_14EBC(rdram, ctx);
        goto after_1;
    // 0x80013C5C: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    after_1:
    // 0x80013C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013C64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80013C68: jr          $ra
    // 0x80013C6C: nop

    TRACE_RETURN()
    return;
    // 0x80013C6C: nop

;}
RECOMP_FUNC void func_8003B83C_3C43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B83C: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003B840: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x8003B844: addiu       $a3, $a3, 0x1728
    ctx->r7 = ADD32(ctx->r7, 0X1728);
    // 0x8003B848: addiu       $a2, $a2, 0x172C
    ctx->r6 = ADD32(ctx->r6, 0X172C);
    // 0x8003B84C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8003B850: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8003B854: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8003B858: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8003B85C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8003B860: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8003B864: sll         $t0, $v0, 8
    ctx->r8 = S32(ctx->r2 << 8);
    // 0x8003B868: srl         $t7, $a1, 24
    ctx->r15 = S32(U32(ctx->r5) >> 24);
    // 0x8003B86C: beq         $t7, $zero, L_8003B888
    if (ctx->r15 == 0) {
        // 0x8003B870: srl         $t8, $a1, 24
        ctx->r24 = S32(U32(ctx->r5) >> 24);
            goto L_8003B888;
    }
    // 0x8003B870: srl         $t8, $a1, 24
    ctx->r24 = S32(U32(ctx->r5) >> 24);
    // 0x8003B874: multu       $v0, $t8
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B878: mflo        $t9
    ctx->r25 = lo;
    // 0x8003B87C: sh          $t9, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r25;
    // 0x8003B880: b           L_8003B890
    // 0x8003B884: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
        goto L_8003B890;
    // 0x8003B884: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
L_8003B888:
    // 0x8003B888: sh          $t0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r8;
    // 0x8003B88C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
L_8003B890:
    // 0x8003B890: sb          $zero, 0x47($t1)
    MEM_B(0X47, ctx->r9) = 0;
    // 0x8003B894: jr          $ra
    // 0x8003B898: nop

    TRACE_RETURN()
    return;
    // 0x8003B898: nop

;}
RECOMP_FUNC void func_800377F4_383F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800377F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800377F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800377FC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80037800: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80037804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80037808: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8003780C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80037810: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80037814: nop

    // 0x80037818: bc1tl       L_800379B8
    if (c1cs) {
        // 0x8003781C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800379B8;
    }
    goto skip_0;
    // 0x8003781C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80037820: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80037824: nop

    // 0x80037828: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8003782C: nop

    // 0x80037830: bc1tl       L_800379B8
    if (c1cs) {
        // 0x80037834: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800379B8;
    }
    goto skip_1;
    // 0x80037834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80037838: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8003783C: nop

    // 0x80037840: bc1fl       L_80037930
    if (!c1cs) {
        // 0x80037844: lh          $t0, 0x2($s0)
        ctx->r8 = MEM_H(ctx->r16, 0X2);
            goto L_80037930;
    }
    goto skip_2;
    // 0x80037844: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    skip_2:
    // 0x80037848: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x8003784C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80037850: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80037854: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80037858: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8003785C: nop

    // 0x80037860: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80037864: mul.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80037868: trunc.w.s   $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8003786C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80037870: nop

    // 0x80037874: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80037878: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003787C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80037880: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x80037884: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80037888: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8003788C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x80037890: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x80037894: beq         $v1, $zero, L_800378AC
    if (ctx->r3 == 0) {
        // 0x80037898: sub.s       $f12, $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
            goto L_800378AC;
    }
    // 0x80037898: sub.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x8003789C: beq         $v1, $at, L_80037908
    if (ctx->r3 == ctx->r1) {
        // 0x800378A0: sll         $t6, $t0, 2
        ctx->r14 = S32(ctx->r8 << 2);
            goto L_80037908;
    }
    // 0x800378A0: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x800378A4: b           L_800379B8
    // 0x800378A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800379B8;
    // 0x800378A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800378AC:
    // 0x800378AC: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x800378B0: subu        $t4, $t4, $t0
    ctx->r12 = SUB32(ctx->r12, ctx->r8);
    // 0x800378B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800378B8: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x800378BC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800378C0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800378C4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x800378C8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800378CC: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x800378D0: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x800378D4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800378D8: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800378DC: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x800378E0: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800378E4: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x800378E8: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x800378EC: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800378F0: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800378F4: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x800378F8: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800378FC: add.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x80037900: b           L_800379B4
    // 0x80037904: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
        goto L_800379B4;
    // 0x80037904: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
L_80037908:
    // 0x80037908: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x8003790C: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x80037910: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80037914: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80037918: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x8003791C: jal         0x800376B0
    // 0x80037920: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    func_800376B0_382B0(rdram, ctx);
        goto after_0;
    // 0x80037920: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    after_0:
    // 0x80037924: b           L_800379B8
    // 0x80037928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800379B8;
    // 0x80037928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003792C: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
L_80037930:
    // 0x80037930: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80037934: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80037938: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8003793C: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x80037940: beq         $v1, $zero, L_80037958
    if (ctx->r3 == 0) {
        // 0x80037944: sra         $t0, $t7, 16
        ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
            goto L_80037958;
    }
    // 0x80037944: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80037948: beq         $v1, $at, L_80037988
    if (ctx->r3 == ctx->r1) {
        // 0x8003794C: sll         $t5, $t0, 2
        ctx->r13 = S32(ctx->r8 << 2);
            goto L_80037988;
    }
    // 0x8003794C: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80037950: b           L_800379B8
    // 0x80037954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800379B8;
    // 0x80037954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80037958:
    // 0x80037958: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8003795C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80037960: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80037964: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80037968: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x8003796C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80037970: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x80037974: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80037978: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x8003797C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x80037980: b           L_800379B4
    // 0x80037984: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
        goto L_800379B4;
    // 0x80037984: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
L_80037988:
    // 0x80037988: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x8003798C: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80037990: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80037994: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80037998: lw          $at, 0xC($v0)
    ctx->r1 = MEM_W(ctx->r2, 0XC);
    // 0x8003799C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800379A0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x800379A4: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x800379A8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800379AC: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x800379B0: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
L_800379B4:
    // 0x800379B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800379B8:
    // 0x800379B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800379BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800379C0: jr          $ra
    // 0x800379C4: nop

    TRACE_RETURN()
    return;
    // 0x800379C4: nop

;}
RECOMP_FUNC void func_8003E3EC_3EFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E3EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E3F0: addiu       $v1, $v1, 0x78D8
    ctx->r3 = ADD32(ctx->r3, 0X78D8);
    // 0x8003E3F4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8003E3F8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8003E3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E400: srl         $t6, $v0, 1
    ctx->r14 = S32(U32(ctx->r2) >> 1);
    // 0x8003E404: sll         $t7, $v0, 31
    ctx->r15 = S32(ctx->r2 << 31);
    // 0x8003E408: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8003E40C: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
    // 0x8003E410: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x8003E414: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x8003E418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E41C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8003E420: lhu         $t0, -0x5232($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X5232);
    // 0x8003E424: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x8003E428: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003E42C: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x8003E430: bne         $t1, $zero, L_8003E448
    if (ctx->r9 != 0) {
        // 0x8003E434: lui         $at, 0x801C
        ctx->r1 = S32(0X801C << 16);
            goto L_8003E448;
    }
    // 0x8003E434: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E438: lw          $v0, 0x7860($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7860);
    // 0x8003E43C: lbu         $t2, 0x5D($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X5D);
    // 0x8003E440: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003E444: sb          $t3, 0x5D($v0)
    MEM_B(0X5D, ctx->r2) = ctx->r11;
L_8003E448:
    // 0x8003E448: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E44C: lhu         $v0, 0x790C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X790C);
    // 0x8003E450: andi        $t4, $v0, 0x8000
    ctx->r12 = ctx->r2 & 0X8000;
    // 0x8003E454: beq         $t4, $zero, L_8003E464
    if (ctx->r12 == 0) {
        // 0x8003E458: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_8003E464;
    }
    // 0x8003E458: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8003E45C: b           L_8003E4B0
    // 0x8003E460: sw          $t5, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r13;
        goto L_8003E4B0;
    // 0x8003E460: sw          $t5, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r13;
L_8003E464:
    // 0x8003E464: beq         $t6, $zero, L_8003E4B0
    if (ctx->r14 == 0) {
        // 0x8003E468: lui         $t7, 0x801C
        ctx->r15 = S32(0X801C << 16);
            goto L_8003E4B0;
    }
    // 0x8003E468: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003E46C: lw          $t7, 0x7770($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7770);
    // 0x8003E470: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E474: bnel        $t7, $zero, L_8003E4B4
    if (ctx->r15 != 0) {
        // 0x8003E478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003E4B4;
    }
    goto skip_0;
    // 0x8003E478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003E47C: lw          $v0, 0x7774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7774);
    // 0x8003E480: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E484: sw          $zero, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = 0;
    // 0x8003E488: bne         $v0, $zero, L_8003E4A0
    if (ctx->r2 != 0) {
        // 0x8003E48C: nop
    
            goto L_8003E4A0;
    }
    // 0x8003E48C: nop

    // 0x8003E490: jal         0x8003E680
    // 0x8003E494: nop

    func_8003E680_3F280(rdram, ctx);
        goto after_0;
    // 0x8003E494: nop

    after_0:
    // 0x8003E498: b           L_8003E4B4
    // 0x8003E49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003E4B4;
    // 0x8003E49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E4A0:
    // 0x8003E4A0: jal         0x8003DE48
    // 0x8003E4A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_1;
    // 0x8003E4A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8003E4A8: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003E4AC: sw          $v0, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = ctx->r2;
L_8003E4B0:
    // 0x8003E4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E4B4:
    // 0x8003E4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E4B8: jr          $ra
    // 0x8003E4BC: nop

    TRACE_RETURN()
    return;
    // 0x8003E4BC: nop

;}
RECOMP_FUNC void func_80002EFC_3AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002F00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002F04: jal         0x8001F8B0
    // 0x80002F08: nop

    func_8001F8B0_204B0(rdram, ctx);
        goto after_0;
    // 0x80002F08: nop

    after_0:
    // 0x80002F0C: jal         0x80034734
    // 0x80002F10: nop

    func_80034734_35334(rdram, ctx);
        goto after_1;
    // 0x80002F10: nop

    after_1:
    // 0x80002F14: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80002F18: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80002F1C: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x80002F20: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002F24: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80002F28: lbu         $t6, -0x5221($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5221);
    // 0x80002F2C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80002F30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80002F34: beql        $t6, $zero, L_80002F48
    if (ctx->r14 == 0) {
        // 0x80002F38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002F48;
    }
    goto skip_0;
    // 0x80002F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002F3C: jal         0x80003728
    // 0x80002F40: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    func_80003728_4328(rdram, ctx);
        goto after_2;
    // 0x80002F40: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    after_2:
    // 0x80002F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002F48:
    // 0x80002F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002F4C: jr          $ra
    // 0x80002F50: nop

    TRACE_RETURN()
    return;
    // 0x80002F50: nop

;}
RECOMP_FUNC void func_80038B98_39798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80038B9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80038BA0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80038BA4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80038BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80038BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038BB0: jal         0x80038C30
    // 0x80038BB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80038C30_39830(rdram, ctx);
        goto after_0;
    // 0x80038BB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80038BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80038BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038BC0: jr          $ra
    // 0x80038BC4: nop

    TRACE_RETURN()
    return;
    // 0x80038BC4: nop

;}
RECOMP_FUNC void func_80032850_33450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032850: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x80032854: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80032858: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8003285C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80032860: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80032864: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80032868: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8003286C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80032870: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80032874: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80032878: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8003287C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80032880: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80032884: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80032888: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8003288C: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x80032890: sh          $zero, 0x98($sp)
    MEM_H(0X98, ctx->r29) = 0;
    // 0x80032894: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80032898: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x8003289C: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x800328A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800328A4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800328A8: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x800328AC: bne         $at, $zero, L_800328EC
    if (ctx->r1 != 0) {
        // 0x800328B0: or          $s6, $a0, $zero
        ctx->r22 = ctx->r4 | 0;
            goto L_800328EC;
    }
    // 0x800328B0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800328B4: addiu       $t0, $sp, 0xAC
    ctx->r8 = ADD32(ctx->r29, 0XAC);
    // 0x800328B8: addiu       $t9, $t0, 0x48
    ctx->r25 = ADD32(ctx->r8, 0X48);
    // 0x800328BC: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
L_800328C0:
    // 0x800328C0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x800328C4: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x800328C8: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x800328CC: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x800328D0: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x800328D4: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x800328D8: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x800328DC: bne         $t0, $t9, L_800328C0
    if (ctx->r8 != ctx->r25) {
        // 0x800328E0: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_800328C0;
    }
    // 0x800328E0: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x800328E4: b           L_80032AE0
    // 0x800328E8: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
        goto L_80032AE0;
    // 0x800328E8: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
L_800328EC:
    // 0x800328EC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x800328F0: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x800328F4: lw          $t2, 0x98($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X98);
    // 0x800328F8: bne         $t2, $zero, L_80032934
    if (ctx->r10 != 0) {
        // 0x800328FC: addiu       $t5, $sp, 0xAC
        ctx->r13 = ADD32(ctx->r29, 0XAC);
            goto L_80032934;
    }
    // 0x800328FC: addiu       $t5, $sp, 0xAC
    ctx->r13 = ADD32(ctx->r29, 0XAC);
    // 0x80032900: addiu       $t4, $t5, 0x48
    ctx->r12 = ADD32(ctx->r13, 0X48);
    // 0x80032904: or          $t6, $s6, $zero
    ctx->r14 = ctx->r22 | 0;
L_80032908:
    // 0x80032908: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x8003290C: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80032910: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80032914: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x80032918: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x8003291C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80032920: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80032924: bne         $t5, $t4, L_80032908
    if (ctx->r13 != ctx->r12) {
        // 0x80032928: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80032908;
    }
    // 0x80032928: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8003292C: b           L_80032AE0
    // 0x80032930: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
        goto L_80032AE0;
    // 0x80032930: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
L_80032934:
    // 0x80032934: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80032938: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8003293C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80032940: addiu       $s5, $sp, 0xAC
    ctx->r21 = ADD32(ctx->r29, 0XAC);
    // 0x80032944: addiu       $s1, $sp, 0x60
    ctx->r17 = ADD32(ctx->r29, 0X60);
    // 0x80032948: swc1        $f12, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f12.u32l;
    // 0x8003294C: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80032950: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    // 0x80032954: or          $t1, $s1, $zero
    ctx->r9 = ctx->r17 | 0;
    // 0x80032958: or          $t0, $s5, $zero
    ctx->r8 = ctx->r21 | 0;
    // 0x8003295C: addiu       $t9, $s5, 0x48
    ctx->r25 = ADD32(ctx->r21, 0X48);
    // 0x80032960: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x80032964: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x80032968: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
L_8003296C:
    // 0x8003296C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80032970: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80032974: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80032978: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x8003297C: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80032980: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x80032984: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80032988: bne         $t0, $t9, L_8003296C
    if (ctx->r8 != ctx->r25) {
        // 0x8003298C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_8003296C;
    }
    // 0x8003298C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x80032990: lw          $s0, 0x98($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X98);
    // 0x80032994: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80032998: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8003299C: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x800329A0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x800329A4: beql        $s0, $zero, L_80032AAC
    if (ctx->r16 == 0) {
        // 0x800329A8: swc1        $f22, 0xE8($sp)
        MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
            goto L_80032AAC;
    }
    goto skip_0;
    // 0x800329A8: swc1        $f22, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
    skip_0:
    // 0x800329AC: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x800329B0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800329B4: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800329B8: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800329BC: beq         $at, $zero, L_80032AA8
    if (ctx->r1 == 0) {
        // 0x800329C0: lui         $at, 0x44FA
        ctx->r1 = S32(0X44FA << 16);
            goto L_80032AA8;
    }
    // 0x800329C0: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x800329C4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800329C8: addiu       $s2, $zero, 0x7FFF
    ctx->r18 = ADD32(0, 0X7FFF);
    // 0x800329CC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
L_800329D0:
    // 0x800329D0: beql        $v0, $zero, L_80032A90
    if (ctx->r2 == 0) {
        // 0x800329D4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032A90;
    }
    goto skip_1;
    // 0x800329D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x800329D8: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x800329DC: andi        $t3, $v1, 0x80
    ctx->r11 = ctx->r3 & 0X80;
    // 0x800329E0: beql        $t3, $zero, L_80032A90
    if (ctx->r11 == 0) {
        // 0x800329E4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032A90;
    }
    goto skip_2;
    // 0x800329E4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x800329E8: lbu         $t4, 0x4($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X4);
    // 0x800329EC: andi        $t5, $v1, 0x40
    ctx->r13 = ctx->r3 & 0X40;
    // 0x800329F0: bnel        $s4, $t4, L_80032A90
    if (ctx->r20 != ctx->r12) {
        // 0x800329F4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032A90;
    }
    goto skip_3;
    // 0x800329F4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x800329F8: bne         $t5, $zero, L_80032A1C
    if (ctx->r13 != 0) {
        // 0x800329FC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80032A1C;
    }
    // 0x800329FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032A00: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80032A04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032A08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80032A0C: jal         0x800273E0
    // 0x80032A10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800273E0_27FE0(rdram, ctx);
        goto after_0;
    // 0x80032A10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80032A14: b           L_80032A40
    // 0x80032A18: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_80032A40;
    // 0x80032A18: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80032A1C:
    // 0x80032A1C: jal         0x80026AAC
    // 0x80032A20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80026AAC_276AC(rdram, ctx);
        goto after_1;
    // 0x80032A20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80032A24: lh          $t6, 0x98($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X98);
    // 0x80032A28: bnel        $s2, $t6, L_80032A44
    if (ctx->r18 != ctx->r14) {
        // 0x80032A2C: lh          $t7, 0x98($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X98);
            goto L_80032A44;
    }
    goto skip_4;
    // 0x80032A2C: lh          $t7, 0x98($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X98);
    skip_4:
    // 0x80032A30: sw          $s0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r16;
    // 0x80032A34: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x80032A38: lwc1        $f20, 0x7C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80032A3C: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
L_80032A40:
    // 0x80032A40: lh          $t7, 0x98($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X98);
L_80032A44:
    // 0x80032A44: bnel        $s2, $t7, L_80032A90
    if (ctx->r18 != ctx->r15) {
        // 0x80032A48: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032A90;
    }
    goto skip_5;
    // 0x80032A48: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x80032A4C: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x80032A50: or          $t1, $s1, $zero
    ctx->r9 = ctx->r17 | 0;
    // 0x80032A54: or          $t2, $s5, $zero
    ctx->r10 = ctx->r21 | 0;
    // 0x80032A58: addiu       $t0, $s1, 0x48
    ctx->r8 = ADD32(ctx->r17, 0X48);
    // 0x80032A5C: bc1fl       L_80032A90
    if (!c1cs) {
        // 0x80032A60: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80032A90;
    }
    goto skip_6;
    // 0x80032A60: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_6:
    // 0x80032A64: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
L_80032A68:
    // 0x80032A68: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80032A6C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80032A70: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80032A74: sw          $at, -0xC($t2)
    MEM_W(-0XC, ctx->r10) = ctx->r1;
    // 0x80032A78: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x80032A7C: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80032A80: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x80032A84: bne         $t1, $t0, L_80032A68
    if (ctx->r9 != ctx->r8) {
        // 0x80032A88: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_80032A68;
    }
    // 0x80032A88: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x80032A8C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80032A90:
    // 0x80032A90: beql        $s0, $zero, L_80032AAC
    if (ctx->r16 == 0) {
        // 0x80032A94: swc1        $f22, 0xE8($sp)
        MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
            goto L_80032AAC;
    }
    goto skip_7;
    // 0x80032A94: swc1        $f22, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
    skip_7:
    // 0x80032A98: lhu         $t3, 0x20($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X20);
    // 0x80032A9C: slt         $at, $s3, $t3
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80032AA0: bnel        $at, $zero, L_800329D0
    if (ctx->r1 != 0) {
        // 0x80032AA4: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_800329D0;
    }
    goto skip_8;
    // 0x80032AA4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_8:
L_80032AA8:
    // 0x80032AA8: swc1        $f22, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f22.u32l;
L_80032AAC:
    // 0x80032AAC: or          $t8, $s5, $zero
    ctx->r24 = ctx->r21 | 0;
    // 0x80032AB0: or          $t7, $s6, $zero
    ctx->r15 = ctx->r22 | 0;
    // 0x80032AB4: addiu       $t6, $s5, 0x48
    ctx->r14 = ADD32(ctx->r21, 0X48);
L_80032AB8:
    // 0x80032AB8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80032ABC: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80032AC0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80032AC4: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x80032AC8: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x80032ACC: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x80032AD0: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x80032AD4: bne         $t8, $t6, L_80032AB8
    if (ctx->r24 != ctx->r14) {
        // 0x80032AD8: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80032AB8;
    }
    // 0x80032AD8: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80032ADC: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
L_80032AE0:
    // 0x80032AE0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80032AE4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80032AE8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80032AEC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80032AF0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80032AF4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80032AF8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80032AFC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80032B00: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80032B04: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80032B08: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80032B0C: jr          $ra
    // 0x80032B10: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    TRACE_RETURN()
    return;
    // 0x80032B10: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_80016358_16F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80016358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001635C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016360: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80016364: bltz        $a0, L_80016398
    if (SIGNED(ctx->r4) < 0) {
        // 0x80016368: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80016398;
    }
    // 0x80016368: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001636C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80016370: lw          $v0, -0x7E8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E8C);
    // 0x80016374: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80016378: beq         $at, $zero, L_80016398
    if (ctx->r1 == 0) {
        // 0x8001637C: nop
    
            goto L_80016398;
    }
    // 0x8001637C: nop

    // 0x80016380: bltz        $a1, L_80016398
    if (SIGNED(ctx->r5) < 0) {
        // 0x80016384: lui         $t7, 0x8017
        ctx->r15 = S32(0X8017 << 16);
            goto L_80016398;
    }
    // 0x80016384: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80016388: lw          $t7, -0x7E88($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7E88);
    // 0x8001638C: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80016390: beql        $at, $zero, L_800163A4
    if (ctx->r1 == 0) {
        // 0x80016394: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_800163A4;
    }
    goto skip_0;
    // 0x80016394: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_80016398:
    // 0x80016398: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001639C: lw          $v0, -0x7E8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E8C);
    // 0x800163A0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_800163A4:
    // 0x800163A4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800163A8: lw          $t8, -0x7B70($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7B70);
    // 0x800163AC: multu       $v0, $t9
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800163B0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800163B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800163B8: mflo        $t0
    ctx->r8 = lo;
    // 0x800163BC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800163C0: addu        $t2, $t1, $a3
    ctx->r10 = ADD32(ctx->r9, ctx->r7);
    // 0x800163C4: sb          $a2, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r6;
    // 0x800163C8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800163CC: lw          $t3, -0x7E8C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7E8C);
    // 0x800163D0: lw          $a0, -0x7B6C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7B6C);
    // 0x800163D4: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800163D8: mflo        $t5
    ctx->r13 = lo;
    // 0x800163DC: addu        $a1, $t5, $a3
    ctx->r5 = ADD32(ctx->r13, ctx->r7);
    // 0x800163E0: jal         0x80016660
    // 0x800163E4: nop

    func_80016660_17260(rdram, ctx);
        goto after_0;
    // 0x800163E4: nop

    after_0:
    // 0x800163E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800163EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800163F0: jr          $ra
    // 0x800163F4: nop

    TRACE_RETURN()
    return;
    // 0x800163F4: nop

;}
RECOMP_FUNC void func_8003B79C_3C39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B79C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B7A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B7A8: lw          $v0, 0x1728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1728);
    // 0x8003B7AC: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x8003B7B0: addiu       $t9, $t9, -0x1078
    ctx->r25 = ADD32(ctx->r25, -0X1078);
    // 0x8003B7B4: lbu         $t6, 0x25($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X25);
    // 0x8003B7B8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8003B7BC: addiu       $t8, $t7, -0x240
    ctx->r24 = ADD32(ctx->r15, -0X240);
    // 0x8003B7C0: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8003B7C4: lb          $t0, 0x0($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X0);
    // 0x8003B7C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003B7CC: jal         0x8003B634
    // 0x8003B7D0: sb          $t0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r8;
    func_8003B634_3C234(rdram, ctx);
        goto after_0;
    // 0x8003B7D0: sb          $t0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r8;
    after_0:
    // 0x8003B7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B7DC: jr          $ra
    // 0x8003B7E0: nop

    TRACE_RETURN()
    return;
    // 0x8003B7E0: nop

;}
RECOMP_FUNC void func_80035B88_36788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035B88: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80035B8C: addiu       $t6, $t6, -0x5AC
    ctx->r14 = ADD32(ctx->r14, -0X5AC);
    // 0x80035B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035B94: lui         $a2, 0xC
    ctx->r6 = S32(0XC << 16);
    // 0x80035B98: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80035B9C: sw          $t6, -0x253C($at)
    MEM_W(-0X253C, ctx->r1) = ctx->r14;
    // 0x80035BA0: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80035BA4: ori         $a2, $a2, 0x2DD4
    ctx->r6 = ctx->r6 | 0X2DD4;
    // 0x80035BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80035BAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80035BB0: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
L_80035BB4:
    // 0x80035BB4: sll         $t7, $v1, 6
    ctx->r15 = S32(ctx->r3 << 6);
    // 0x80035BB8: sll         $t0, $v0, 6
    ctx->r8 = S32(ctx->r2 << 6);
    // 0x80035BBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80035BC0: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80035BC4: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x80035BC8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80035BCC: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x80035BD0: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x80035BD4: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x80035BD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80035BDC: bne         $at, $zero, L_80035BB4
    if (ctx->r1 != 0) {
        // 0x80035BE0: sw          $t9, 0x2D94($t2)
        MEM_W(0X2D94, ctx->r10) = ctx->r25;
            goto L_80035BB4;
    }
    // 0x80035BE0: sw          $t9, 0x2D94($t2)
    MEM_W(0X2D94, ctx->r10) = ctx->r25;
    // 0x80035BE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80035BE8: sh          $zero, -0x2526($at)
    MEM_H(-0X2526, ctx->r1) = 0;
    // 0x80035BEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80035BF0: jr          $ra
    // 0x80035BF4: sw          $zero, 0x14($at)
    MEM_W(0X14, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80035BF4: sw          $zero, 0x14($at)
    MEM_W(0X14, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800030F0_3CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800030F0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800030F4: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x800030F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800030FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003100: addiu       $a0, $v1, 0x7FFF
    ctx->r4 = ADD32(ctx->r3, 0X7FFF);
    // 0x80003104: lbu         $a0, 0x2DD7($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2DD7);
    // 0x80003108: sltiu       $at, $a0, 0x5
    ctx->r1 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x8000310C: beq         $at, $zero, L_80003318
    if (ctx->r1 == 0) {
        // 0x80003110: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_80003318;
    }
    // 0x80003110: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80003114: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80003118: addu        $at, $at, $t6
    gpr jr_addend_80003120 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000311C: lw          $t6, -0x5774($at)
    ctx->r14 = ADD32(ctx->r1, -0X5774);
    // 0x80003120: jr          $t6
    // 0x80003124: nop

    switch (jr_addend_80003120 >> 2) {
        case 0: goto L_80003128; break;
        case 1: goto L_80003144; break;
        case 2: goto L_800031AC; break;
        case 3: goto L_800031DC; break;
        case 4: goto L_80003228; break;
        default: switch_error(__func__, 0x80003120, 0x8007A88C);
    }
    // 0x80003124: nop

L_80003128:
    // 0x80003128: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8000312C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80003130: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    // 0x80003134: sh          $t7, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r15;
    // 0x80003138: sb          $t8, 0x2DD7($at)
    MEM_B(0X2DD7, ctx->r1) = ctx->r24;
    // 0x8000313C: b           L_80003318
    // 0x80003140: sb          $zero, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = 0;
        goto L_80003318;
    // 0x80003140: sb          $zero, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = 0;
L_80003144:
    // 0x80003144: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80003148: lw          $t9, 0x48D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X48D8);
    // 0x8000314C: bnel        $t9, $zero, L_8000331C
    if (ctx->r25 != 0) {
        // 0x80003150: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000331C;
    }
    goto skip_0;
    // 0x80003150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80003154: jal         0x8000383C
    // 0x80003158: nop

    func_8000383C_443C(rdram, ctx);
        goto after_0;
    // 0x80003158: nop

    after_0:
    // 0x8000315C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80003160: addiu       $a1, $a1, -0x4BA0
    ctx->r5 = ADD32(ctx->r5, -0X4BA0);
    // 0x80003164: jal         0x80001C00
    // 0x80003168: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80001C00_2800(rdram, ctx);
        goto after_1;
    // 0x80003168: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x8000316C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80003170: beq         $v0, $zero, L_80003184
    if (ctx->r2 == 0) {
        // 0x80003174: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80003184;
    }
L_80003174:
    // 0x80003174: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80003178: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x8000317C: bne         $t0, $zero, L_80003174
    if (ctx->r8 != 0) {
        // 0x80003180: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80003174;
    }
    // 0x80003180: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80003184:
    // 0x80003184: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80003188: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8000318C: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x80003190: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003194: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x80003198: lbu         $t1, -0x522A($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X522A);
    // 0x8000319C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800031A0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800031A4: b           L_80003318
    // 0x800031A8: sb          $t2, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r10;
        goto L_80003318;
    // 0x800031A8: sb          $t2, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r10;
L_800031AC:
    // 0x800031AC: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x800031B0: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    // 0x800031B4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x800031B8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x800031BC: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x800031C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800031C4: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x800031C8: lbu         $t3, -0x522A($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X522A);
    // 0x800031CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800031D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800031D4: b           L_80003318
    // 0x800031D8: sb          $t4, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r12;
        goto L_80003318;
    // 0x800031D8: sb          $t4, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r12;
L_800031DC:
    // 0x800031DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800031E0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x800031E4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800031E8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800031EC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x800031F0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800031F4: sh          $t5, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r13;
    // 0x800031F8: jal         0x8003488C
    // 0x800031FC: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    func_8003488C_3548C(rdram, ctx);
        goto after_2;
    // 0x800031FC: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    after_2:
    // 0x80003200: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80003204: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80003208: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8000320C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003210: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80003214: lbu         $t7, -0x522A($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X522A);
    // 0x80003218: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8000321C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80003220: b           L_80003318
    // 0x80003224: sb          $t8, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r24;
        goto L_80003318;
    // 0x80003224: sb          $t8, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r24;
L_80003228:
    // 0x80003228: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x8000322C: lbu         $v0, 0x2DD6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DD6);
    // 0x80003230: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80003234: beq         $v0, $zero, L_8000325C
    if (ctx->r2 == 0) {
        // 0x80003238: nop
    
            goto L_8000325C;
    }
    // 0x80003238: nop

    // 0x8000323C: beq         $v0, $at, L_8000326C
    if (ctx->r2 == ctx->r1) {
        // 0x80003240: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8000326C;
    }
    // 0x80003240: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80003244: beq         $v0, $at, L_800032B0
    if (ctx->r2 == ctx->r1) {
        // 0x80003248: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800032B0;
    }
    // 0x80003248: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000324C: beq         $v0, $at, L_800032F4
    if (ctx->r2 == ctx->r1) {
        // 0x80003250: nop
    
            goto L_800032F4;
    }
    // 0x80003250: nop

    // 0x80003254: b           L_8000331C
    // 0x80003258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000331C;
    // 0x80003258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000325C:
    // 0x8000325C: jal         0x80034734
    // 0x80003260: nop

    func_80034734_35334(rdram, ctx);
        goto after_3;
    // 0x80003260: nop

    after_3:
    // 0x80003264: b           L_8000331C
    // 0x80003268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000331C;
    // 0x80003268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000326C:
    // 0x8000326C: jal         0x8000383C
    // 0x80003270: nop

    func_8000383C_443C(rdram, ctx);
        goto after_4;
    // 0x80003270: nop

    after_4:
    // 0x80003274: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80003278: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x8000327C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003280: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80003284: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80003288: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8000328C: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80003290: sh          $t9, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r25;
    // 0x80003294: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80003298: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8000329C: sb          $zero, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = 0;
    // 0x800032A0: jal         0x8003488C
    // 0x800032A4: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    func_8003488C_3548C(rdram, ctx);
        goto after_5;
    // 0x800032A4: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    after_5:
    // 0x800032A8: b           L_8000331C
    // 0x800032AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000331C;
    // 0x800032AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800032B0:
    // 0x800032B0: jal         0x8000383C
    // 0x800032B4: nop

    func_8000383C_443C(rdram, ctx);
        goto after_6;
    // 0x800032B4: nop

    after_6:
    // 0x800032B8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800032BC: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x800032C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800032C4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800032C8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800032CC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800032D0: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x800032D4: sh          $t1, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r9;
    // 0x800032D8: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x800032DC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x800032E0: sb          $zero, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = 0;
    // 0x800032E4: jal         0x8003488C
    // 0x800032E8: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    func_8003488C_3548C(rdram, ctx);
        goto after_7;
    // 0x800032E8: addiu       $a0, $a0, -0x3484
    ctx->r4 = ADD32(ctx->r4, -0X3484);
    after_7:
    // 0x800032EC: b           L_8000331C
    // 0x800032F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000331C;
    // 0x800032F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800032F4:
    // 0x800032F4: jal         0x8000383C
    // 0x800032F8: nop

    func_8000383C_443C(rdram, ctx);
        goto after_8;
    // 0x800032F8: nop

    after_8:
    // 0x800032FC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80003300: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80003304: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80003308: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x8000330C: sh          $t3, 0x2E19($at)
    MEM_H(0X2E19, ctx->r1) = ctx->r11;
    // 0x80003310: jal         0x80003728
    // 0x80003314: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80003728_4328(rdram, ctx);
        goto after_9;
    // 0x80003314: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_9:
L_80003318:
    // 0x80003318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000331C:
    // 0x8000331C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003320: jr          $ra
    // 0x80003324: nop

    TRACE_RETURN()
    return;
    // 0x80003324: nop

;}
RECOMP_FUNC void func_8000A228_AE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A228: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8000A22C: lhu         $t7, 0x8($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X8);
    // 0x8000A230: addiu       $t6, $zero, 0x81
    ctx->r14 = ADD32(0, 0X81);
    // 0x8000A234: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8000A238: andi        $t8, $t7, 0xFE3F
    ctx->r24 = ctx->r15 & 0XFE3F;
    // 0x8000A23C: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x8000A240: sh          $t9, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r25;
    // 0x8000A244: lbu         $t0, 0x9($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X9);
    // 0x8000A248: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8000A24C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000A250: andi        $t1, $t0, 0xFFC7
    ctx->r9 = ctx->r8 & 0XFFC7;
    // 0x8000A254: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x8000A258: sb          $t2, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r10;
    // 0x8000A25C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8000A260: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000A264: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8000A268: srl         $t3, $v0, 15
    ctx->r11 = S32(U32(ctx->r2) >> 15);
    // 0x8000A26C: xori        $t4, $t3, 0x9
    ctx->r12 = ctx->r11 ^ 0X9;
    // 0x8000A270: sll         $t5, $t4, 28
    ctx->r13 = S32(ctx->r12 << 28);
    // 0x8000A274: srl         $t6, $t5, 13
    ctx->r14 = S32(U32(ctx->r13) >> 13);
    // 0x8000A278: xor         $t7, $t6, $v0
    ctx->r15 = ctx->r14 ^ ctx->r2;
    // 0x8000A27C: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x8000A280: lbu         $t8, 0xA($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA);
    // 0x8000A284: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8000A288: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8000A28C: andi        $t9, $t8, 0xFF87
    ctx->r25 = ctx->r24 & 0XFF87;
    // 0x8000A290: ori         $t0, $t9, 0x48
    ctx->r8 = ctx->r25 | 0X48;
    // 0x8000A294: sb          $t0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r8;
    // 0x8000A298: sh          $zero, 0x18($a0)
    MEM_H(0X18, ctx->r4) = 0;
    // 0x8000A29C: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x8000A2A0: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8000A2A4: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8000A2A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8000A2AC: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8000A2B0: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x8000A2B4: sb          $v1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r3;
    // 0x8000A2B8: sb          $v1, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r3;
    // 0x8000A2BC: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8000A2C0: jr          $ra
    // 0x8000A2C4: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8000A2C4: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8000098C_158C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000098C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80000990: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x80000994: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80000998: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8000099C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x800009A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800009A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800009A8: addu        $v1, $t6, $a1
    ctx->r3 = ADD32(ctx->r14, ctx->r5);
    // 0x800009AC: lh          $t7, 0x2DB6($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2DB6);
    // 0x800009B0: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x800009B4: addiu       $a2, $a2, 0x48E4
    ctx->r6 = ADD32(ctx->r6, 0X48E4);
    // 0x800009B8: bnel        $t7, $zero, L_80000ACC
    if (ctx->r15 != 0) {
        // 0x800009BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80000ACC;
    }
    goto skip_0;
    // 0x800009BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800009C0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x800009C4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800009C8: addiu       $t1, $t1, -0x56E0
    ctx->r9 = ADD32(ctx->r9, -0X56E0);
    // 0x800009CC: beq         $t8, $zero, L_80000AC8
    if (ctx->r24 == 0) {
        // 0x800009D0: lui         $t4, 0x8026
        ctx->r12 = S32(0X8026 << 16);
            goto L_80000AC8;
    }
    // 0x800009D0: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x800009D4: lh          $t2, 0x2DB0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2DB0);
    // 0x800009D8: lh          $t9, 0x2DB2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2DB2);
    // 0x800009DC: addiu       $t4, $t4, 0x1000
    ctx->r12 = ADD32(ctx->r12, 0X1000);
    // 0x800009E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800009E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800009E8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800009EC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800009F0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800009F4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800009F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800009FC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80000A00: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80000A04: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80000A08: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80000A0C: sll         $t3, $t3, 11
    ctx->r11 = S32(ctx->r11 << 11);
    // 0x80000A10: addu        $a3, $t0, $t1
    ctx->r7 = ADD32(ctx->r8, ctx->r9);
    // 0x80000A14: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80000A18: sw          $t5, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r13;
    // 0x80000A1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80000A20: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80000A24: sw          $t6, 0x48D8($at)
    MEM_W(0X48D8, ctx->r1) = ctx->r14;
    // 0x80000A28: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80000A2C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80000A30: sw          $zero, 0x48DC($at)
    MEM_W(0X48DC, ctx->r1) = 0;
    // 0x80000A34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000A38: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80000A3C: addu        $t7, $v0, $a1
    ctx->r15 = ADD32(ctx->r2, ctx->r5);
    // 0x80000A40: lh          $t8, 0x2DB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2DB2);
    // 0x80000A44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80000A48: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x80000A4C: sh          $t9, -0x524E($at)
    MEM_H(-0X524E, ctx->r1) = ctx->r25;
    // 0x80000A50: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000A54: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80000A58: addu        $t0, $v0, $a1
    ctx->r8 = ADD32(ctx->r2, ctx->r5);
    // 0x80000A5C: lhu         $t1, 0x2DB8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2DB8);
    // 0x80000A60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80000A64: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80000A68: sh          $t2, -0x5248($at)
    MEM_H(-0X5248, ctx->r1) = ctx->r10;
    // 0x80000A6C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000A70: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80000A74: addu        $t3, $v0, $a1
    ctx->r11 = ADD32(ctx->r2, ctx->r5);
    // 0x80000A78: lh          $t4, 0x2DB0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2DB0);
    // 0x80000A7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80000A80: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80000A84: sh          $t5, -0x5250($at)
    MEM_H(-0X5250, ctx->r1) = ctx->r13;
    // 0x80000A88: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80000A8C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80000A90: addiu       $a0, $a0, -0x5610
    ctx->r4 = ADD32(ctx->r4, -0X5610);
    // 0x80000A94: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x80000A98: lh          $t7, 0x2DB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2DB0);
    // 0x80000A9C: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80000AA0: bne         $at, $zero, L_80000AB0
    if (ctx->r1 != 0) {
        // 0x80000AA4: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_80000AB0;
    }
    // 0x80000AA4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80000AA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80000AAC: sh          $zero, -0x5250($at)
    MEM_H(-0X5250, ctx->r1) = 0;
L_80000AB0:
    // 0x80000AB0: jal         0x80007024
    // 0x80000AB4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80007024_7C24(rdram, ctx);
        goto after_0;
    // 0x80000AB4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80000AB8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80000ABC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80000AC0: jal         0x80040250
    // 0x80000AC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80000AC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_80000AC8:
    // 0x80000AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80000ACC:
    // 0x80000ACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80000AD0: jr          $ra
    // 0x80000AD4: nop

    TRACE_RETURN()
    return;
    // 0x80000AD4: nop

;}
RECOMP_FUNC void func_80035344_35F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035344: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80035348: addiu       $v0, $v0, -0x254C
    ctx->r2 = ADD32(ctx->r2, -0X254C);
    // 0x8003534C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80035350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035358: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8003535C: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    // 0x80035360: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80035364: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80035368: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x8003536C: jalr        $t9
    // 0x80035370: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80035370: nop

    after_0:
    // 0x80035374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003537C: jr          $ra
    // 0x80035380: nop

    TRACE_RETURN()
    return;
    // 0x80035380: nop

;}
RECOMP_FUNC void func_8003A2D0_3AED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A2D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003A2D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003A2D8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003A2DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003A2E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003A2E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003A2E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003A2EC: lhu         $t6, 0x2A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2A);
    // 0x8003A2F0: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x8003A2F4: addiu       $t8, $t8, 0x9E8
    ctx->r24 = ADD32(ctx->r24, 0X9E8);
    // 0x8003A2F8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003A2FC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8003A300: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8003A304: addiu       $s1, $s1, 0xC28
    ctx->r17 = ADD32(ctx->r17, 0XC28);
    // 0x8003A308: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A30C: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
L_8003A310:
    // 0x8003A310: lhu         $t9, 0x0($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X0);
    // 0x8003A314: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8003A318: bnel        $t9, $t0, L_8003A32C
    if (ctx->r25 != ctx->r8) {
        // 0x8003A31C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003A32C;
    }
    goto skip_0;
    // 0x8003A31C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8003A320: jal         0x80039E9C
    // 0x8003A324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80039E9C_3AA9C(rdram, ctx);
        goto after_0;
    // 0x8003A324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8003A328: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003A32C:
    // 0x8003A32C: bne         $s0, $s2, L_8003A310
    if (ctx->r16 != ctx->r18) {
        // 0x8003A330: addiu       $s1, $s1, 0xB0
        ctx->r17 = ADD32(ctx->r17, 0XB0);
            goto L_8003A310;
    }
    // 0x8003A330: addiu       $s1, $s1, 0xB0
    ctx->r17 = ADD32(ctx->r17, 0XB0);
    // 0x8003A334: lhu         $t1, 0x2A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2A);
    // 0x8003A338: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x8003A33C: addiu       $t2, $t2, 0x9E0
    ctx->r10 = ADD32(ctx->r10, 0X9E0);
    // 0x8003A340: andi        $t3, $zero, 0xFF
    ctx->r11 = 0 & 0XFF;
    // 0x8003A344: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x8003A348: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8003A34C: sh          $t3, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r11;
    // 0x8003A350: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003A354: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003A358: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003A35C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A360: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003A364: jr          $ra
    // 0x8003A368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003A368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003CFA0_3DBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CFA0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8003CFA4: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x8003CFA8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8003CFAC: lw          $v0, 0x7550($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7550);
    // 0x8003CFB0: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8003CFB4: addiu       $v1, $v1, -0x335C
    ctx->r3 = ADD32(ctx->r3, -0X335C);
    // 0x8003CFB8: beq         $v0, $zero, L_8003CFC8
    if (ctx->r2 == 0) {
        // 0x8003CFBC: nop
    
            goto L_8003CFC8;
    }
    // 0x8003CFBC: nop

    // 0x8003CFC0: jr          $ra
    // 0x8003CFC4: nop

    TRACE_RETURN()
    return;
    // 0x8003CFC4: nop

L_8003CFC8:
    // 0x8003CFC8: jr          $ra
    // 0x8003CFCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x8003CFCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800153B0_15FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800153B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800153B4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800153B8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800153BC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800153C0: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x800153C4: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800153C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800153CC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800153D0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800153D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800153D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800153DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800153E0: blez        $a0, L_80015484
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800153E4: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80015484;
    }
    // 0x800153E4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800153E8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800153EC: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
L_800153F0:
    // 0x800153F0: jal         0x80014CC4
    // 0x800153F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80014CC4_158C4(rdram, ctx);
        goto after_0;
    // 0x800153F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x800153F8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800153FC: jal         0x80014CC4
    // 0x80015400: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80014CC4_158C4(rdram, ctx);
        goto after_1;
    // 0x80015400: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x80015404: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80015408: jal         0x80014CC4
    // 0x8001540C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80014CC4_158C4(rdram, ctx);
        goto after_2;
    // 0x8001540C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80015410: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80015414: jal         0x80014CC4
    // 0x80015418: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014CC4_158C4(rdram, ctx);
        goto after_3;
    // 0x80015418: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8001541C: beq         $v0, $zero, L_80015430
    if (ctx->r2 == 0) {
        // 0x80015420: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80015430;
    }
    // 0x80015420: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80015424: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80015428: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8001542C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80015430:
    // 0x80015430: lw          $t2, 0x20($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X20);
    // 0x80015434: sll         $t6, $s0, 11
    ctx->r14 = S32(ctx->r16 << 11);
    // 0x80015438: sll         $t7, $s3, 6
    ctx->r15 = S32(ctx->r19 << 6);
    // 0x8001543C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80015440: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x80015444: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x80015448: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x8001544C: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x80015450: sh          $t1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r9;
    // 0x80015454: lw          $v1, 0x14($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X14);
    // 0x80015458: beq         $s7, $v1, L_8001547C
    if (ctx->r23 == ctx->r3) {
        // 0x8001545C: nop
    
            goto L_8001547C;
    }
    // 0x8001545C: nop

    // 0x80015460: lw          $t4, 0x20($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X20);
    // 0x80015464: addu        $v0, $t4, $s2
    ctx->r2 = ADD32(ctx->r12, ctx->r18);
    // 0x80015468: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x8001546C: andi        $t5, $a0, 0xFFFE
    ctx->r13 = ctx->r4 & 0XFFFE;
    // 0x80015470: bne         $v1, $t5, L_8001547C
    if (ctx->r3 != ctx->r13) {
        // 0x80015474: nop
    
            goto L_8001547C;
    }
    // 0x80015474: nop

    // 0x80015478: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
L_8001547C:
    // 0x8001547C: bne         $s4, $s6, L_800153F0
    if (ctx->r20 != ctx->r22) {
        // 0x80015480: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_800153F0;
    }
    // 0x80015480: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
L_80015484:
    // 0x80015484: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80015488: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001548C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015490: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80015494: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80015498: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001549C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800154A0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800154A4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800154A8: jr          $ra
    // 0x800154AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800154AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800196A4_1A2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800196A4: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800196A8: addiu       $v0, $v0, -0x7AD0
    ctx->r2 = ADD32(ctx->r2, -0X7AD0);
    // 0x800196AC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800196B0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800196B4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800196B8: addiu       $t7, $t6, -0x40
    ctx->r15 = ADD32(ctx->r14, -0X40);
    // 0x800196BC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800196C0: lbu         $t8, -0x7AD3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X7AD3);
    // 0x800196C4: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x800196C8: beq         $t8, $zero, L_800196E8
    if (ctx->r24 == 0) {
        // 0x800196CC: nop
    
            goto L_800196E8;
    }
    // 0x800196CC: nop

    // 0x800196D0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800196D4: lui         $t0, 0xBD00
    ctx->r8 = S32(0XBD00 << 16);
    // 0x800196D8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800196DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800196E0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800196E4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_800196E8:
    // 0x800196E8: jr          $ra
    // 0x800196EC: nop

    TRACE_RETURN()
    return;
    // 0x800196EC: nop

;}
RECOMP_FUNC void func_80032DC4_339C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032DC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80032DC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80032DCC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80032DD0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80032DD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80032DD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80032DDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80032DE0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80032DE4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80032DE8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80032DEC: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x80032DF0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80032DF4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80032DF8: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80032DFC: andi        $s4, $a0, 0xFFFF
    ctx->r20 = ctx->r4 & 0XFFFF;
    // 0x80032E00: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80032E04: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80032E08: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80032E0C: andi        $a0, $s4, 0xFFFF
    ctx->r4 = ctx->r20 & 0XFFFF;
    // 0x80032E10: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80032E14: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80032E18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80032E1C: sub.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x80032E20: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80032E24: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80032E28: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80032E2C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80032E30: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x80032E34: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80032E38: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80032E3C: nop

    // 0x80032E40: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80032E44: bc1f        L_80032E54
    if (!c1cs) {
        // 0x80032E48: cvt.s.w     $f14, $f10
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80032E54;
    }
    // 0x80032E48: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80032E4C: b           L_80032E58
    // 0x80032E50: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_80032E58;
    // 0x80032E50: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_80032E54:
    // 0x80032E54: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80032E58:
    // 0x80032E58: ldc1        $f10, -0x3910($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X3910);
    // 0x80032E5C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80032E60: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80032E64: nop

    // 0x80032E68: bc1t        L_80032E80
    if (c1cs) {
        // 0x80032E6C: nop
    
            goto L_80032E80;
    }
    // 0x80032E6C: nop

    // 0x80032E70: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x80032E74: nop

    // 0x80032E78: bc1fl       L_80032E94
    if (!c1cs) {
        // 0x80032E7C: c.eq.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl == ctx->f14.fl;
            goto L_80032E94;
    }
    goto skip_0;
    // 0x80032E7C: c.eq.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl == ctx->f14.fl;
    skip_0:
L_80032E80:
    // 0x80032E80: jal         0x80034268
    // 0x80032E84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80034268_34E68(rdram, ctx);
        goto after_0;
    // 0x80032E84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80032E88: b           L_80032FDC
    // 0x80032E8C: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
        goto L_80032FDC;
    // 0x80032E8C: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
    // 0x80032E90: c.eq.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl == ctx->f14.fl;
L_80032E94:
    // 0x80032E94: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80032E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80032E9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80032EA0: bc1f        L_80032EB0
    if (!c1cs) {
        // 0x80032EA4: nop
    
            goto L_80032EB0;
    }
    // 0x80032EA4: nop

    // 0x80032EA8: b           L_80033004
    // 0x80032EAC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
        goto L_80033004;
    // 0x80032EAC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
L_80032EB0:
    // 0x80032EB0: lwc1        $f0, -0x7088($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7088);
    // 0x80032EB4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80032EB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80032EBC: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80032EC0: nop

    // 0x80032EC4: bc1fl       L_80032F08
    if (!c1cs) {
        // 0x80032EC8: sub.s       $f18, $f16, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
            goto L_80032F08;
    }
    goto skip_1;
    // 0x80032EC8: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
    skip_1:
    // 0x80032ECC: bnel        $t1, $zero, L_80032F08
    if (ctx->r9 != 0) {
        // 0x80032ED0: sub.s       $f18, $f16, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
            goto L_80032F08;
    }
    goto skip_2;
    // 0x80032ED0: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
    skip_2:
    // 0x80032ED4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80032ED8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80032EDC: andi        $a0, $s4, 0xFFFF
    ctx->r4 = ctx->r20 & 0XFFFF;
    // 0x80032EE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80032EE4: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80032EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80032EEC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80032EF0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80032EF4: jal         0x80034268
    // 0x80032EF8: nop

    func_80034268_34E68(rdram, ctx);
        goto after_1;
    // 0x80032EF8: nop

    after_1:
    // 0x80032EFC: b           L_80032FDC
    // 0x80032F00: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
        goto L_80032FDC;
    // 0x80032F00: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
    // 0x80032F04: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
L_80032F08:
    // 0x80032F08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80032F0C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80032F10: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x80032F14: nop

    // 0x80032F18: bc1fl       L_80032F48
    if (!c1cs) {
        // 0x80032F1C: c.lt.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
            goto L_80032F48;
    }
    goto skip_3;
    // 0x80032F1C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    skip_3:
    // 0x80032F20: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80032F24: andi        $a0, $s4, 0xFFFF
    ctx->r4 = ctx->r20 & 0XFFFF;
    // 0x80032F28: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80032F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80032F30: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80032F34: jal         0x80034268
    // 0x80032F38: nop

    func_80034268_34E68(rdram, ctx);
        goto after_2;
    // 0x80032F38: nop

    after_2:
    // 0x80032F3C: b           L_80032FDC
    // 0x80032F40: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
        goto L_80032FDC;
    // 0x80032F40: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
    // 0x80032F44: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
L_80032F48:
    // 0x80032F48: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80032F4C: bc1fl       L_80032F64
    if (!c1cs) {
        // 0x80032F50: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_80032F64;
    }
    goto skip_4;
    // 0x80032F50: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_4:
    // 0x80032F54: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80032F58: b           L_80032F64
    // 0x80032F5C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80032F64;
    // 0x80032F5C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80032F60: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_80032F64:
    // 0x80032F64: ldc1        $f8, -0x3908($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3908);
    // 0x80032F68: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80032F6C: mfc1        $s2, $f4
    ctx->r18 = (int32_t)ctx->f4.u32l;
    // 0x80032F70: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80032F74: nop

    // 0x80032F78: bc1fl       L_80032F94
    if (!c1cs) {
        // 0x80032F7C: trunc.w.s   $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.u32l = TRUNC_W_S(ctx->f14.fl);
            goto L_80032F94;
    }
    goto skip_5;
    // 0x80032F7C: trunc.w.s   $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.u32l = TRUNC_W_S(ctx->f14.fl);
    skip_5:
    // 0x80032F80: trunc.w.s   $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80032F84: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x80032F88: b           L_80032FA4
    // 0x80032F8C: slt         $at, $s2, $s0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
        goto L_80032FA4;
    // 0x80032F8C: slt         $at, $s2, $s0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80032F90: trunc.w.s   $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.u32l = TRUNC_W_S(ctx->f14.fl);
L_80032F94:
    // 0x80032F94: mfc1        $s0, $f18
    ctx->r16 = (int32_t)ctx->f18.u32l;
    // 0x80032F98: nop

    // 0x80032F9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80032FA0: slt         $at, $s2, $s0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
L_80032FA4:
    // 0x80032FA4: bne         $at, $zero, L_80032FDC
    if (ctx->r1 != 0) {
        // 0x80032FA8: andi        $a0, $s4, 0xFFFF
        ctx->r4 = ctx->r20 & 0XFFFF;
            goto L_80032FDC;
    }
    // 0x80032FA8: andi        $a0, $s4, 0xFFFF
    ctx->r4 = ctx->r20 & 0XFFFF;
L_80032FAC:
    // 0x80032FAC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80032FB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80032FB4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80032FB8: jal         0x80034268
    // 0x80032FBC: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    func_80034268_34E68(rdram, ctx);
        goto after_3;
    // 0x80032FBC: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    after_3:
    // 0x80032FC0: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80032FC4: bne         $at, $zero, L_80032FD0
    if (ctx->r1 != 0) {
        // 0x80032FC8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80032FD0;
    }
    // 0x80032FC8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80032FCC: andi        $s3, $v0, 0xFFFF
    ctx->r19 = ctx->r2 & 0XFFFF;
L_80032FD0:
    // 0x80032FD0: slt         $at, $s2, $s0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80032FD4: beql        $at, $zero, L_80032FAC
    if (ctx->r1 == 0) {
        // 0x80032FD8: andi        $a0, $s4, 0xFFFF
        ctx->r4 = ctx->r20 & 0XFFFF;
            goto L_80032FAC;
    }
    goto skip_6;
    // 0x80032FD8: andi        $a0, $s4, 0xFFFF
    ctx->r4 = ctx->r20 & 0XFFFF;
    skip_6:
L_80032FDC:
    // 0x80032FDC: slti        $at, $s3, 0x800
    ctx->r1 = SIGNED(ctx->r19) < 0X800 ? 1 : 0;
    // 0x80032FE0: bne         $at, $zero, L_80032FF8
    if (ctx->r1 != 0) {
        // 0x80032FE4: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_80032FF8;
    }
    // 0x80032FE4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80032FE8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80032FEC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80032FF0: b           L_80032FFC
    // 0x80032FF4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
        goto L_80032FFC;
    // 0x80032FF4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
L_80032FF8:
    // 0x80032FF8: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
L_80032FFC:
    // 0x80032FFC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80033000: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
L_80033004:
    // 0x80033004: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80033008: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003300C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80033010: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80033014: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80033018: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003301C: jr          $ra
    // 0x80033020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80033020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003B410_3C010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B410: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003B414: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B418: addiu       $v1, $v1, 0x172C
    ctx->r3 = ADD32(ctx->r3, 0X172C);
    // 0x8003B41C: addiu       $v0, $v0, 0x1728
    ctx->r2 = ADD32(ctx->r2, 0X1728);
    // 0x8003B420: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003B424: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003B428: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003B42C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8003B430: sh          $t8, 0x18($t9)
    MEM_H(0X18, ctx->r25) = ctx->r24;
    // 0x8003B434: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8003B438: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8003B43C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8003B440: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8003B444: sb          $zero, 0x1D($t2)
    MEM_B(0X1D, ctx->r10) = 0;
    // 0x8003B448: jr          $ra
    // 0x8003B44C: nop

    TRACE_RETURN()
    return;
    // 0x8003B44C: nop

;}
RECOMP_FUNC void func_80030688_31288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030688: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8003068C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80030690: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
    // 0x80030694: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80030698: nop

    // 0x8003069C: bc1fl       L_800306C4
    if (!c1cs) {
        // 0x800306A0: lwc1        $f6, 0x0($a1)
        ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
            goto L_800306C4;
    }
    goto skip_0;
    // 0x800306A0: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x800306A4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800306A8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800306AC: nop

    // 0x800306B0: bc1fl       L_800306DC
    if (!c1cs) {
        // 0x800306B4: lw          $t7, 0x10($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X10);
            goto L_800306DC;
    }
    goto skip_1;
    // 0x800306B4: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    skip_1:
    // 0x800306B8: b           L_800306D8
    // 0x800306BC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
        goto L_800306D8;
    // 0x800306BC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x800306C0: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
L_800306C4:
    // 0x800306C4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800306C8: nop

    // 0x800306CC: bc1fl       L_800306DC
    if (!c1cs) {
        // 0x800306D0: lw          $t7, 0x10($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X10);
            goto L_800306DC;
    }
    goto skip_2;
    // 0x800306D0: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    skip_2:
    // 0x800306D4: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_800306D8:
    // 0x800306D8: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
L_800306DC:
    // 0x800306DC: lwc1        $f0, 0x20($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X20);
    // 0x800306E0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x800306E4: nop

    // 0x800306E8: bc1fl       L_80030710
    if (!c1cs) {
        // 0x800306EC: lwc1        $f10, 0x0($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
            goto L_80030710;
    }
    goto skip_3;
    // 0x800306EC: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    skip_3:
    // 0x800306F0: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800306F4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800306F8: nop

    // 0x800306FC: bc1f        L_80030724
    if (!c1cs) {
        // 0x80030700: nop
    
            goto L_80030724;
    }
    // 0x80030700: nop

    // 0x80030704: jr          $ra
    // 0x80030708: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80030708: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x8003070C: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
L_80030710:
    // 0x80030710: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80030714: nop

    // 0x80030718: bc1f        L_80030724
    if (!c1cs) {
        // 0x8003071C: nop
    
            goto L_80030724;
    }
    // 0x8003071C: nop

    // 0x80030720: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
L_80030724:
    // 0x80030724: jr          $ra
    // 0x80030728: nop

    TRACE_RETURN()
    return;
    // 0x80030728: nop

;}
RECOMP_FUNC void func_8003B7E4_3C3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B7E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B7E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B7EC: jal         0x8003B83C
    // 0x8003B7F0: nop

    func_8003B83C_3C43C(rdram, ctx);
        goto after_0;
    // 0x8003B7F0: nop

    after_0:
    // 0x8003B7F4: jal         0x8003B564
    // 0x8003B7F8: nop

    func_8003B564_3C164(rdram, ctx);
        goto after_1;
    // 0x8003B7F8: nop

    after_1:
    // 0x8003B7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B804: jr          $ra
    // 0x8003B808: nop

    TRACE_RETURN()
    return;
    // 0x8003B808: nop

;}
RECOMP_FUNC void func_8003889C_3949C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003889C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800388A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800388A4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800388A8: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x800388AC: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x800388B0: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x800388B4: addiu       $t0, $t0, 0x9CE
    ctx->r8 = ADD32(ctx->r8, 0X9CE);
    // 0x800388B8: addiu       $a3, $a3, 0x9FD
    ctx->r7 = ADD32(ctx->r7, 0X9FD);
    // 0x800388BC: addiu       $a2, $a2, 0x9CD
    ctx->r6 = ADD32(ctx->r6, 0X9CD);
    // 0x800388C0: addiu       $v1, $v1, 0x9D0
    ctx->r3 = ADD32(ctx->r3, 0X9D0);
    // 0x800388C4: addiu       $v0, $v0, 0x9FC
    ctx->r2 = ADD32(ctx->r2, 0X9FC);
    // 0x800388C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800388CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800388D0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800388D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800388D8: sb          $t6, 0x9C8($at)
    MEM_B(0X9C8, ctx->r1) = ctx->r14;
    // 0x800388DC: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x800388E0: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x800388E4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800388E8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x800388EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800388F0: andi        $t1, $zero, 0xFF
    ctx->r9 = 0 & 0XFF;
    // 0x800388F4: sh          $t1, 0x9CA($at)
    MEM_H(0X9CA, ctx->r1) = ctx->r9;
    // 0x800388F8: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x800388FC: lb          $t2, 0x0($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X0);
    // 0x80038900: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80038904: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x80038908: sb          $t2, 0x9CF($at)
    MEM_B(0X9CF, ctx->r1) = ctx->r10;
    // 0x8003890C: addiu       $t3, $t3, -0x76C8
    ctx->r11 = ADD32(ctx->r11, -0X76C8);
    // 0x80038910: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80038914: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x80038918: sw          $a1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r5;
    // 0x8003891C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80038920: jal         0x800481C0
    // 0x80038924: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    alSynAddPlayer(rdram, ctx);
        goto after_0;
    // 0x80038924: lw          $a0, -0x5DD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5DD0);
    after_0:
    // 0x80038928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003892C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80038930: jr          $ra
    // 0x80038934: nop

    TRACE_RETURN()
    return;
    // 0x80038934: nop

;}
RECOMP_FUNC void func_800397B8_3A3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800397B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800397BC: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x800397C0: addiu       $a2, $a2, 0x9F0
    ctx->r6 = ADD32(ctx->r6, 0X9F0);
    // 0x800397C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800397C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800397CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800397D0: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x800397D4: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x800397D8: addiu       $t0, $t0, -0xEB4
    ctx->r8 = ADD32(ctx->r8, -0XEB4);
    // 0x800397DC: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x800397E0: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800397E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800397E8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x800397EC: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x800397F0: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x800397F4: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x800397F8: addiu       $t3, $t3, 0xA28
    ctx->r11 = ADD32(ctx->r11, 0XA28);
    // 0x800397FC: andi        $a3, $t1, 0xFF
    ctx->r7 = ctx->r9 & 0XFF;
    // 0x80039800: sw          $t3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r11;
    // 0x80039804: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x80039808: blez        $a3, L_80039848
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8003980C: sb          $t2, 0x3($a2)
        MEM_B(0X3, ctx->r6) = ctx->r10;
            goto L_80039848;
    }
    // 0x8003980C: sb          $t2, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r10;
    // 0x80039810: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x80039814: addiu       $v0, $t4, 0x1730
    ctx->r2 = ADD32(ctx->r12, 0X1730);
    // 0x80039818: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003981C: sll         $t5, $a3, 1
    ctx->r13 = S32(ctx->r7 << 1);
    // 0x80039820: addu        $a1, $t5, $v0
    ctx->r5 = ADD32(ctx->r13, ctx->r2);
    // 0x80039824: addiu       $v1, $v1, 0xA28
    ctx->r3 = ADD32(ctx->r3, 0XA28);
    // 0x80039828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8003982C:
    // 0x8003982C: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80039830: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80039834: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80039838: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x8003983C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80039840: bne         $at, $zero, L_8003982C
    if (ctx->r1 != 0) {
        // 0x80039844: sw          $t7, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r15;
            goto L_8003982C;
    }
    // 0x80039844: sw          $t7, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r15;
L_80039848:
    // 0x80039848: lhu         $t8, 0x1A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1A);
    // 0x8003984C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80039850: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x80039854: sw          $t8, 0xA20($at)
    MEM_W(0XA20, ctx->r1) = ctx->r24;
    // 0x80039858: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x8003985C: sb          $zero, 0x1($a2)
    MEM_B(0X1, ctx->r6) = 0;
    // 0x80039860: sb          $t9, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r25;
    // 0x80039864: jal         0x80039A70
    // 0x80039868: sb          $t0, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r8;
    func_80039A70_3A670(rdram, ctx);
        goto after_0;
    // 0x80039868: sb          $t0, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r8;
    after_0:
    // 0x8003986C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039874: jr          $ra
    // 0x80039878: nop

    TRACE_RETURN()
    return;
    // 0x80039878: nop

;}
RECOMP_FUNC void func_800165C4_171C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800165C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800165C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800165CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800165D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800165D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800165D8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x800165DC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800165E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800165E4: blezl       $v1, L_8001664C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800165E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8001664C;
    }
    goto skip_0;
    // 0x800165E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x800165EC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_800165F0:
    // 0x800165F0: blez        $v0, L_80016638
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800165F4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80016638;
    }
    // 0x800165F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800165F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800165FC:
    // 0x800165FC: jal         0x800161F0
    // 0x80016600: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800161F0_16DF0(rdram, ctx);
        goto after_0;
    // 0x80016600: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80016604: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x80016608: andi        $t7, $v0, 0xFFFE
    ctx->r15 = ctx->r2 & 0XFFFE;
    // 0x8001660C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80016610: bnel        $t6, $t7, L_80016624
    if (ctx->r14 != ctx->r15) {
        // 0x80016614: lw          $v0, 0x0($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X0);
            goto L_80016624;
    }
    goto skip_1;
    // 0x80016614: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x80016618: jal         0x800162F4
    // 0x8001661C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800162F4_16EF4(rdram, ctx);
        goto after_1;
    // 0x8001661C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80016620: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_80016624:
    // 0x80016624: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80016628: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001662C: bnel        $at, $zero, L_800165FC
    if (ctx->r1 != 0) {
        // 0x80016630: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800165FC;
    }
    goto skip_2;
    // 0x80016630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80016634: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
L_80016638:
    // 0x80016638: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001663C: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80016640: bne         $at, $zero, L_800165F0
    if (ctx->r1 != 0) {
        // 0x80016644: nop
    
            goto L_800165F0;
    }
    // 0x80016644: nop

    // 0x80016648: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8001664C:
    // 0x8001664C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80016650: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80016654: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80016658: jr          $ra
    // 0x8001665C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8001665C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80011CAC_128AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80011CAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80011CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011CB4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80011CB8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80011CBC: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80011CC0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80011CC4: ldc1        $f16, -0x4E90($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4E90);
    // 0x80011CC8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80011CCC: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80011CD0: nop

    // 0x80011CD4: bc1f        L_80011D4C
    if (!c1cs) {
        // 0x80011CD8: addiu       $v1, $a0, 0x5C
        ctx->r3 = ADD32(ctx->r4, 0X5C);
            goto L_80011D4C;
    }
    // 0x80011CD8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80011CDC: lwc1        $f12, 0x1C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80011CE0: lwc1        $f2, 0x18($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80011CE4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80011CE8: nop

    // 0x80011CEC: bc1fl       L_80011D04
    if (!c1cs) {
        // 0x80011CF0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80011D04;
    }
    goto skip_0;
    // 0x80011CF0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_0:
    // 0x80011CF4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80011CF8: b           L_80011D04
    // 0x80011CFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80011D04;
    // 0x80011CFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80011D00: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80011D04:
    // 0x80011D04: lwc1        $f14, 0x20($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80011D08: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80011D0C: nop

    // 0x80011D10: bc1fl       L_80011D2C
    if (!c1cs) {
        // 0x80011D14: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80011D2C;
    }
    goto skip_1;
    // 0x80011D14: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x80011D18: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80011D1C: swc1        $f12, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f12.u32l;
    // 0x80011D20: b           L_80011D4C
    // 0x80011D24: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
        goto L_80011D4C;
    // 0x80011D24: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
    // 0x80011D28: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80011D2C:
    // 0x80011D2C: nop

    // 0x80011D30: bc1fl       L_80011D48
    if (!c1cs) {
        // 0x80011D34: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80011D48;
    }
    goto skip_2;
    // 0x80011D34: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_2:
    // 0x80011D38: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80011D3C: b           L_80011D4C
    // 0x80011D40: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
        goto L_80011D4C;
    // 0x80011D40: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
    // 0x80011D44: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80011D48:
    // 0x80011D48: swc1        $f10, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f10.u32l;
L_80011D4C:
    // 0x80011D4C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80011D50: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80011D54: lh          $a3, 0xCA($v1)
    ctx->r7 = MEM_H(ctx->r3, 0XCA);
    // 0x80011D58: lh          $v0, 0xC8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC8);
    // 0x80011D5C: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x80011D60: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80011D64: beql        $at, $zero, L_80011DCC
    if (ctx->r1 == 0) {
        // 0x80011D68: lwc1        $f14, 0x40($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X40);
            goto L_80011DCC;
    }
    goto skip_3;
    // 0x80011D68: lwc1        $f14, 0x40($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X40);
    skip_3:
    // 0x80011D6C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80011D70: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x80011D74: lw          $a1, 0x70($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X70);
    // 0x80011D78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80011D7C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80011D80: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80011D84: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80011D88: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80011D8C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80011D90: jal         0x800377F4
    // 0x80011D94: nop

    func_800377F4_383F4(rdram, ctx);
        goto after_0;
    // 0x80011D94: nop

    after_0:
    // 0x80011D98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80011D9C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80011DA0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80011DA4: jal         0x80012518
    // 0x80011DA8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_80012518_13118(rdram, ctx);
        goto after_1;
    // 0x80011DA8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x80011DAC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80011DB0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80011DB4: ldc1        $f16, -0x4E80($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4E80);
    // 0x80011DB8: lh          $t7, 0x6C($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X6C);
    // 0x80011DBC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80011DC0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80011DC4: sh          $t8, 0x6C($v1)
    MEM_H(0X6C, ctx->r3) = ctx->r24;
    // 0x80011DC8: lwc1        $f14, 0x40($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X40);
L_80011DCC:
    // 0x80011DCC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80011DD0: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80011DD4: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80011DD8: nop

    // 0x80011DDC: bc1fl       L_80011E50
    if (!c1cs) {
        // 0x80011DE0: lwc1        $f14, 0x50($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X50);
            goto L_80011E50;
    }
    goto skip_4;
    // 0x80011DE0: lwc1        $f14, 0x50($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X50);
    skip_4:
    // 0x80011DE4: lwc1        $f12, 0x3C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x80011DE8: lwc1        $f2, 0x24($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80011DEC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80011DF0: nop

    // 0x80011DF4: bc1fl       L_80011E0C
    if (!c1cs) {
        // 0x80011DF8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80011E0C;
    }
    goto skip_5;
    // 0x80011DF8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x80011DFC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80011E00: b           L_80011E0C
    // 0x80011E04: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80011E0C;
    // 0x80011E04: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80011E08: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80011E0C:
    // 0x80011E0C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80011E10: nop

    // 0x80011E14: bc1fl       L_80011E2C
    if (!c1cs) {
        // 0x80011E18: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80011E2C;
    }
    goto skip_6;
    // 0x80011E18: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x80011E1C: swc1        $f12, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f12.u32l;
    // 0x80011E20: b           L_80011E4C
    // 0x80011E24: swc1        $f18, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f18.u32l;
        goto L_80011E4C;
    // 0x80011E24: swc1        $f18, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f18.u32l;
    // 0x80011E28: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80011E2C:
    // 0x80011E2C: nop

    // 0x80011E30: bc1fl       L_80011E48
    if (!c1cs) {
        // 0x80011E34: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80011E48;
    }
    goto skip_7;
    // 0x80011E34: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x80011E38: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80011E3C: b           L_80011E4C
    // 0x80011E40: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
        goto L_80011E4C;
    // 0x80011E40: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
    // 0x80011E44: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80011E48:
    // 0x80011E48: swc1        $f10, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f10.u32l;
L_80011E4C:
    // 0x80011E4C: lwc1        $f14, 0x50($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X50);
L_80011E50:
    // 0x80011E50: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80011E54: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80011E58: nop

    // 0x80011E5C: bc1fl       L_80011ED0
    if (!c1cs) {
        // 0x80011E60: lwc1        $f14, 0x48($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X48);
            goto L_80011ED0;
    }
    goto skip_8;
    // 0x80011E60: lwc1        $f14, 0x48($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X48);
    skip_8:
    // 0x80011E64: lwc1        $f12, 0x4C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80011E68: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80011E6C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80011E70: nop

    // 0x80011E74: bc1fl       L_80011E8C
    if (!c1cs) {
        // 0x80011E78: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80011E8C;
    }
    goto skip_9;
    // 0x80011E78: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x80011E7C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80011E80: b           L_80011E8C
    // 0x80011E84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80011E8C;
    // 0x80011E84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80011E88: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80011E8C:
    // 0x80011E8C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80011E90: nop

    // 0x80011E94: bc1fl       L_80011EAC
    if (!c1cs) {
        // 0x80011E98: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80011EAC;
    }
    goto skip_10;
    // 0x80011E98: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x80011E9C: swc1        $f12, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f12.u32l;
    // 0x80011EA0: b           L_80011ECC
    // 0x80011EA4: swc1        $f18, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f18.u32l;
        goto L_80011ECC;
    // 0x80011EA4: swc1        $f18, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f18.u32l;
    // 0x80011EA8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80011EAC:
    // 0x80011EAC: nop

    // 0x80011EB0: bc1fl       L_80011EC8
    if (!c1cs) {
        // 0x80011EB4: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80011EC8;
    }
    goto skip_11;
    // 0x80011EB4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x80011EB8: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80011EBC: b           L_80011ECC
    // 0x80011EC0: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
        goto L_80011ECC;
    // 0x80011EC0: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    // 0x80011EC4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80011EC8:
    // 0x80011EC8: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
L_80011ECC:
    // 0x80011ECC: lwc1        $f14, 0x48($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X48);
L_80011ED0:
    // 0x80011ED0: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80011ED4: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80011ED8: nop

    // 0x80011EDC: bc1fl       L_80011F50
    if (!c1cs) {
        // 0x80011EE0: lwc1        $f14, 0x58($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X58);
            goto L_80011F50;
    }
    goto skip_12;
    // 0x80011EE0: lwc1        $f14, 0x58($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X58);
    skip_12:
    // 0x80011EE4: lwc1        $f12, 0x44($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80011EE8: lwc1        $f2, 0x2C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x80011EEC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80011EF0: nop

    // 0x80011EF4: bc1fl       L_80011F0C
    if (!c1cs) {
        // 0x80011EF8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80011F0C;
    }
    goto skip_13;
    // 0x80011EF8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_13:
    // 0x80011EFC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80011F00: b           L_80011F0C
    // 0x80011F04: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80011F0C;
    // 0x80011F04: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80011F08: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80011F0C:
    // 0x80011F0C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80011F10: nop

    // 0x80011F14: bc1fl       L_80011F2C
    if (!c1cs) {
        // 0x80011F18: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80011F2C;
    }
    goto skip_14;
    // 0x80011F18: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_14:
    // 0x80011F1C: swc1        $f12, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f12.u32l;
    // 0x80011F20: b           L_80011F4C
    // 0x80011F24: swc1        $f18, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f18.u32l;
        goto L_80011F4C;
    // 0x80011F24: swc1        $f18, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f18.u32l;
    // 0x80011F28: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80011F2C:
    // 0x80011F2C: nop

    // 0x80011F30: bc1fl       L_80011F48
    if (!c1cs) {
        // 0x80011F34: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80011F48;
    }
    goto skip_15;
    // 0x80011F34: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x80011F38: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80011F3C: b           L_80011F4C
    // 0x80011F40: swc1        $f4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f4.u32l;
        goto L_80011F4C;
    // 0x80011F40: swc1        $f4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f4.u32l;
    // 0x80011F44: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80011F48:
    // 0x80011F48: swc1        $f8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f8.u32l;
L_80011F4C:
    // 0x80011F4C: lwc1        $f14, 0x58($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X58);
L_80011F50:
    // 0x80011F50: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80011F54: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80011F58: nop

    // 0x80011F5C: bc1fl       L_80011FD0
    if (!c1cs) {
        // 0x80011F60: lwc1        $f14, 0x68($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X68);
            goto L_80011FD0;
    }
    goto skip_16;
    // 0x80011F60: lwc1        $f14, 0x68($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X68);
    skip_16:
    // 0x80011F64: lwc1        $f12, 0x54($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X54);
    // 0x80011F68: lwc1        $f2, 0x30($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X30);
    // 0x80011F6C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80011F70: nop

    // 0x80011F74: bc1fl       L_80011F8C
    if (!c1cs) {
        // 0x80011F78: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80011F8C;
    }
    goto skip_17;
    // 0x80011F78: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_17:
    // 0x80011F7C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80011F80: b           L_80011F8C
    // 0x80011F84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80011F8C;
    // 0x80011F84: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80011F88: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80011F8C:
    // 0x80011F8C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80011F90: nop

    // 0x80011F94: bc1fl       L_80011FAC
    if (!c1cs) {
        // 0x80011F98: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80011FAC;
    }
    goto skip_18;
    // 0x80011F98: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_18:
    // 0x80011F9C: swc1        $f12, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f12.u32l;
    // 0x80011FA0: b           L_80011FCC
    // 0x80011FA4: swc1        $f18, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f18.u32l;
        goto L_80011FCC;
    // 0x80011FA4: swc1        $f18, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f18.u32l;
    // 0x80011FA8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80011FAC:
    // 0x80011FAC: nop

    // 0x80011FB0: bc1fl       L_80011FC8
    if (!c1cs) {
        // 0x80011FB4: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80011FC8;
    }
    goto skip_19;
    // 0x80011FB4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_19:
    // 0x80011FB8: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80011FBC: b           L_80011FCC
    // 0x80011FC0: swc1        $f10, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f10.u32l;
        goto L_80011FCC;
    // 0x80011FC0: swc1        $f10, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f10.u32l;
    // 0x80011FC4: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_80011FC8:
    // 0x80011FC8: swc1        $f4, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f4.u32l;
L_80011FCC:
    // 0x80011FCC: lwc1        $f14, 0x68($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X68);
L_80011FD0:
    // 0x80011FD0: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80011FD4: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x80011FD8: nop

    // 0x80011FDC: bc1fl       L_80012050
    if (!c1cs) {
        // 0x80011FE0: lwc1        $f14, 0x60($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X60);
            goto L_80012050;
    }
    goto skip_20;
    // 0x80011FE0: lwc1        $f14, 0x60($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X60);
    skip_20:
    // 0x80011FE4: lwc1        $f12, 0x64($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X64);
    // 0x80011FE8: lwc1        $f2, 0x34($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X34);
    // 0x80011FEC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80011FF0: nop

    // 0x80011FF4: bc1fl       L_8001200C
    if (!c1cs) {
        // 0x80011FF8: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8001200C;
    }
    goto skip_21;
    // 0x80011FF8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_21:
    // 0x80011FFC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012000: b           L_8001200C
    // 0x80012004: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8001200C;
    // 0x80012004: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012008: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8001200C:
    // 0x8001200C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012010: nop

    // 0x80012014: bc1fl       L_8001202C
    if (!c1cs) {
        // 0x80012018: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8001202C;
    }
    goto skip_22;
    // 0x80012018: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_22:
    // 0x8001201C: swc1        $f12, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f12.u32l;
    // 0x80012020: b           L_8001204C
    // 0x80012024: swc1        $f18, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f18.u32l;
        goto L_8001204C;
    // 0x80012024: swc1        $f18, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f18.u32l;
    // 0x80012028: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8001202C:
    // 0x8001202C: nop

    // 0x80012030: bc1fl       L_80012048
    if (!c1cs) {
        // 0x80012034: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80012048;
    }
    goto skip_23;
    // 0x80012034: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_23:
    // 0x80012038: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8001203C: b           L_8001204C
    // 0x80012040: swc1        $f6, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f6.u32l;
        goto L_8001204C;
    // 0x80012040: swc1        $f6, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f6.u32l;
    // 0x80012044: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80012048:
    // 0x80012048: swc1        $f10, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f10.u32l;
L_8001204C:
    // 0x8001204C: lwc1        $f14, 0x60($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X60);
L_80012050:
    // 0x80012050: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80012054: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80012058: nop

    // 0x8001205C: bc1fl       L_800120D0
    if (!c1cs) {
        // 0x80012060: lwc1        $f10, 0x18($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
            goto L_800120D0;
    }
    goto skip_24;
    // 0x80012060: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
    skip_24:
    // 0x80012064: lwc1        $f12, 0x5C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X5C);
    // 0x80012068: lwc1        $f2, 0x38($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X38);
    // 0x8001206C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80012070: nop

    // 0x80012074: bc1fl       L_8001208C
    if (!c1cs) {
        // 0x80012078: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8001208C;
    }
    goto skip_25;
    // 0x80012078: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_25:
    // 0x8001207C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80012080: b           L_8001208C
    // 0x80012084: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8001208C;
    // 0x80012084: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80012088: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8001208C:
    // 0x8001208C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80012090: nop

    // 0x80012094: bc1fl       L_800120AC
    if (!c1cs) {
        // 0x80012098: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_800120AC;
    }
    goto skip_26;
    // 0x80012098: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_26:
    // 0x8001209C: swc1        $f12, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f12.u32l;
    // 0x800120A0: b           L_800120CC
    // 0x800120A4: swc1        $f18, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f18.u32l;
        goto L_800120CC;
    // 0x800120A4: swc1        $f18, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f18.u32l;
    // 0x800120A8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_800120AC:
    // 0x800120AC: nop

    // 0x800120B0: bc1fl       L_800120C8
    if (!c1cs) {
        // 0x800120B4: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_800120C8;
    }
    goto skip_27;
    // 0x800120B4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_27:
    // 0x800120B8: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x800120BC: b           L_800120CC
    // 0x800120C0: swc1        $f8, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f8.u32l;
        goto L_800120CC;
    // 0x800120C0: swc1        $f8, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f8.u32l;
    // 0x800120C4: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_800120C8:
    // 0x800120C8: swc1        $f6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f6.u32l;
L_800120CC:
    // 0x800120CC: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
L_800120D0:
    // 0x800120D0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800120D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800120D8: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x800120DC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800120E0: add.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d + ctx->f8.d;
    // 0x800120E4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800120E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800120EC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800120F0: nop

    // 0x800120F4: cvt.w.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_D(ctx->f6.d);
    // 0x800120F8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800120FC: nop

    // 0x80012100: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80012104: beql        $t0, $zero, L_80012158
    if (ctx->r8 == 0) {
        // 0x80012108: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_80012158;
    }
    goto skip_28;
    // 0x80012108: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_28:
    // 0x8001210C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80012110: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80012114: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80012118: sub.d       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f6.d - ctx->f10.d;
    // 0x8001211C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80012120: nop

    // 0x80012124: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x80012128: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8001212C: nop

    // 0x80012130: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x80012134: bne         $t0, $zero, L_8001214C
    if (ctx->r8 != 0) {
        // 0x80012138: nop
    
            goto L_8001214C;
    }
    // 0x80012138: nop

    // 0x8001213C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80012140: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80012144: b           L_80012164
    // 0x80012148: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_80012164;
    // 0x80012148: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_8001214C:
    // 0x8001214C: b           L_80012164
    // 0x80012150: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_80012164;
    // 0x80012150: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80012154: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_80012158:
    // 0x80012158: nop

    // 0x8001215C: bltz        $t0, L_8001214C
    if (SIGNED(ctx->r8) < 0) {
        // 0x80012160: nop
    
            goto L_8001214C;
    }
    // 0x80012160: nop

L_80012164:
    // 0x80012164: lw          $t1, 0x10($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X10);
    // 0x80012168: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001216C: sh          $t0, 0x1A($t1)
    MEM_H(0X1A, ctx->r9) = ctx->r8;
    // 0x80012170: lw          $t2, 0x10($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X10);
    // 0x80012174: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80012178: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x8001217C: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x80012180: lwc1        $f8, 0x28($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80012184: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
    // 0x80012188: lw          $t4, 0x10($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X10);
    // 0x8001218C: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x80012190: swc1        $f6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f6.u32l;
    // 0x80012194: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x80012198: lwc1        $f10, 0x30($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X30);
    // 0x8001219C: swc1        $f10, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f10.u32l;
    // 0x800121A0: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x800121A4: lwc1        $f4, 0x34($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X34);
    // 0x800121A8: swc1        $f4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f4.u32l;
    // 0x800121AC: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x800121B0: lwc1        $f8, 0x38($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X38);
    // 0x800121B4: swc1        $f8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f8.u32l;
    // 0x800121B8: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x800121BC: beql        $v0, $zero, L_80012274
    if (ctx->r2 == 0) {
        // 0x800121C0: lw          $v0, 0x10($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X10);
            goto L_80012274;
    }
    goto skip_29;
    // 0x800121C0: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    skip_29:
    // 0x800121C4: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x800121C8: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x800121CC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800121D0: beq         $at, $zero, L_80012268
    if (ctx->r1 == 0) {
        // 0x800121D4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80012268;
    }
    // 0x800121D4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800121D8: slt         $at, $t8, $a2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800121DC: bne         $at, $zero, L_80012264
    if (ctx->r1 != 0) {
        // 0x800121E0: andi        $a0, $zero, 0xFF
        ctx->r4 = 0 & 0XFF;
            goto L_80012264;
    }
    // 0x800121E0: andi        $a0, $zero, 0xFF
    ctx->r4 = 0 & 0XFF;
    // 0x800121E4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x800121E8: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800121EC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800121F0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800121F4: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x800121F8: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x800121FC: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80012200: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80012204: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80012208: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8001220C: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x80012210: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80012214: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80012218: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8001221C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x80012220: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x80012224: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80012228: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8001222C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80012230: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80012234: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x80012238: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8001223C: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80012240: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80012244: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x80012248: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x8001224C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80012250: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80012254: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80012258: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8001225C: b           L_80012268
    // 0x80012260: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
        goto L_80012268;
    // 0x80012260: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_80012264:
    // 0x80012264: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_80012268:
    // 0x80012268: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x8001226C: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x80012270: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
L_80012274:
    // 0x80012274: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80012278: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8001227C: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80012280: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80012284: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80012288: nop

    // 0x8001228C: bc1fl       L_800122A4
    if (!c1cs) {
        // 0x80012290: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_800122A4;
    }
    goto skip_30;
    // 0x80012290: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_30:
    // 0x80012294: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80012298: b           L_800122A4
    // 0x8001229C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800122A4;
    // 0x8001229C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x800122A0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_800122A4:
    // 0x800122A4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x800122A8: nop

    // 0x800122AC: bc1fl       L_800122F8
    if (!c1cs) {
        // 0x800122B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800122F8;
    }
    goto skip_31;
    // 0x800122B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_31:
    // 0x800122B4: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800122B8: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800122BC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800122C0: nop

    // 0x800122C4: bc1fl       L_800122DC
    if (!c1cs) {
        // 0x800122C8: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_800122DC;
    }
    goto skip_32;
    // 0x800122C8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_32:
    // 0x800122CC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800122D0: b           L_800122DC
    // 0x800122D4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_800122DC;
    // 0x800122D4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x800122D8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_800122DC:
    // 0x800122DC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x800122E0: nop

    // 0x800122E4: bc1fl       L_800122F8
    if (!c1cs) {
        // 0x800122E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800122F8;
    }
    goto skip_33;
    // 0x800122E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_33:
    // 0x800122EC: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x800122F0: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x800122F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800122F8:
    // 0x800122F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800122FC: jr          $ra
    // 0x80012300: nop

    TRACE_RETURN()
    return;
    // 0x80012300: nop

;}
RECOMP_FUNC void func_800086A8_92A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800086A8: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x800086AC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800086B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800086B4: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x800086B8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800086BC: jr          $ra
    // 0x800086C0: sw          $t9, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x800086C0: sw          $t9, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_80036908_37508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003690C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036910: jal         0x80036928
    // 0x80036914: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80036928_37528(rdram, ctx);
        goto after_0;
    // 0x80036914: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x80036918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003691C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036920: jr          $ra
    // 0x80036924: nop

    TRACE_RETURN()
    return;
    // 0x80036924: nop

;}
RECOMP_FUNC void func_80034ED4_35AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034EDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80034EE0: jal         0x80034EF8
    // 0x80034EE4: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80034EE4: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x80034EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034EF0: jr          $ra
    // 0x80034EF4: nop

    TRACE_RETURN()
    return;
    // 0x80034EF4: nop

;}
