#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801CD4E4_669C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD4E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD4E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD4EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CD4F0: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD4F4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CD4F8: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD4FC: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CD500: lh          $t7, 0x6($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X6);
    // 0x801CD504: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CD508: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801CD50C: beql        $t1, $t7, L_801CD718
    if (ctx->r9 == ctx->r15) {
        // 0x801CD510: lh          $v0, 0x32($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X32);
            goto L_801CD718;
    }
    goto skip_0;
    // 0x801CD510: lh          $v0, 0x32($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X32);
    skip_0:
    // 0x801CD514: lh          $v0, 0x1A($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X1A);
    // 0x801CD518: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801CD51C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CD520: beql        $v1, $v0, L_801CD718
    if (ctx->r3 == ctx->r2) {
        // 0x801CD524: lh          $v0, 0x32($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X32);
            goto L_801CD718;
    }
    goto skip_1;
    // 0x801CD524: lh          $v0, 0x32($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X32);
    skip_1:
    // 0x801CD528: beql        $a1, $v0, L_801CD718
    if (ctx->r5 == ctx->r2) {
        // 0x801CD52C: lh          $v0, 0x32($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X32);
            goto L_801CD718;
    }
    goto skip_2;
    // 0x801CD52C: lh          $v0, 0x32($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X32);
    skip_2:
    // 0x801CD530: lh          $v0, 0x2A($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X2A);
    // 0x801CD534: beql        $v1, $v0, L_801CD718
    if (ctx->r3 == ctx->r2) {
        // 0x801CD538: lh          $v0, 0x32($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X32);
            goto L_801CD718;
    }
    goto skip_3;
    // 0x801CD538: lh          $v0, 0x32($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X32);
    skip_3:
    // 0x801CD53C: beq         $a1, $v0, L_801CD714
    if (ctx->r5 == ctx->r2) {
        // 0x801CD540: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_801CD714;
    }
    // 0x801CD540: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x801CD544: lhu         $t9, 0x68($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X68);
    // 0x801CD548: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CD54C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801CD550: bgez        $t9, L_801CD564
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CD554: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801CD564;
    }
    // 0x801CD554: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CD558: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CD55C: nop

    // 0x801CD560: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801CD564:
    // 0x801CD564: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CD568: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CD56C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD570: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801CD574: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801CD578: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CD57C: nop

    // 0x801CD580: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CD584: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CD588: nop

    // 0x801CD58C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CD590: beql        $t3, $zero, L_801CD5E0
    if (ctx->r11 == 0) {
        // 0x801CD594: mfc1        $t3, $f18
        ctx->r11 = (int32_t)ctx->f18.u32l;
            goto L_801CD5E0;
    }
    goto skip_4;
    // 0x801CD594: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x801CD598: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CD59C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CD5A0: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CD5A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CD5A8: nop

    // 0x801CD5AC: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CD5B0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CD5B4: nop

    // 0x801CD5B8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CD5BC: bne         $t3, $zero, L_801CD5D4
    if (ctx->r11 != 0) {
        // 0x801CD5C0: nop
    
            goto L_801CD5D4;
    }
    // 0x801CD5C0: nop

    // 0x801CD5C4: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x801CD5C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD5CC: b           L_801CD5EC
    // 0x801CD5D0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801CD5EC;
    // 0x801CD5D0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801CD5D4:
    // 0x801CD5D4: b           L_801CD5EC
    // 0x801CD5D8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801CD5EC;
    // 0x801CD5D8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801CD5DC: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
L_801CD5E0:
    // 0x801CD5E0: nop

    // 0x801CD5E4: bltz        $t3, L_801CD5D4
    if (SIGNED(ctx->r11) < 0) {
        // 0x801CD5E8: nop
    
            goto L_801CD5D4;
    }
    // 0x801CD5E8: nop

L_801CD5EC:
    // 0x801CD5EC: addiu       $a0, $t3, 0x300
    ctx->r4 = ADD32(ctx->r11, 0X300);
    // 0x801CD5F0: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x801CD5F4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801CD5F8: sh          $t3, 0x68($t8)
    MEM_H(0X68, ctx->r24) = ctx->r11;
    // 0x801CD5FC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD600: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x801CD604: sh          $t4, 0x3DB0($at)
    MEM_H(0X3DB0, ctx->r1) = ctx->r12;
    // 0x801CD608: jal         0x80003EA0
    // 0x801CD60C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x801CD60C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801CD610: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CD614: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CD618: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD61C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CD620: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CD624: lhu         $a0, 0x3DB0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3DB0);
    // 0x801CD628: jal         0x80003E10
    // 0x801CD62C: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801CD62C: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    after_1:
    // 0x801CD630: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CD634: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD638: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD63C: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CD640: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801CD644: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CD648: lhu         $t5, 0x16($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X16);
    // 0x801CD64C: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD650: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD654: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801CD658: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CD65C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD660: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CD664: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CD668: bgez        $t5, L_801CD67C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801CD66C: swc1        $f18, 0x10($a3)
        MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
            goto L_801CD67C;
    }
    // 0x801CD66C: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
    // 0x801CD670: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD674: nop

    // 0x801CD678: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_801CD67C:
    // 0x801CD67C: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CD680: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CD684: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD688: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CD68C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CD690: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801CD694: nop

    // 0x801CD698: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CD69C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801CD6A0: nop

    // 0x801CD6A4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801CD6A8: beql        $t7, $zero, L_801CD6F8
    if (ctx->r15 == 0) {
        // 0x801CD6AC: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_801CD6F8;
    }
    goto skip_5;
    // 0x801CD6AC: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_5:
    // 0x801CD6B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CD6B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CD6B8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CD6BC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801CD6C0: nop

    // 0x801CD6C4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CD6C8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801CD6CC: nop

    // 0x801CD6D0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801CD6D4: bne         $t7, $zero, L_801CD6EC
    if (ctx->r15 != 0) {
        // 0x801CD6D8: nop
    
            goto L_801CD6EC;
    }
    // 0x801CD6D8: nop

    // 0x801CD6DC: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x801CD6E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD6E4: b           L_801CD704
    // 0x801CD6E8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_801CD704;
    // 0x801CD6E8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_801CD6EC:
    // 0x801CD6EC: b           L_801CD704
    // 0x801CD6F0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_801CD704;
    // 0x801CD6F0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801CD6F4: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_801CD6F8:
    // 0x801CD6F8: nop

    // 0x801CD6FC: bltz        $t7, L_801CD6EC
    if (SIGNED(ctx->r15) < 0) {
        // 0x801CD700: nop
    
            goto L_801CD6EC;
    }
    // 0x801CD700: nop

L_801CD704:
    // 0x801CD704: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CD708: sh          $t7, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r15;
    // 0x801CD70C: andi        $t2, $t7, 0x3FF
    ctx->r10 = ctx->r15 & 0X3FF;
    // 0x801CD710: sh          $t2, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r10;
L_801CD714:
    // 0x801CD714: lh          $v0, 0x32($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X32);
L_801CD718:
    // 0x801CD718: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801CD71C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CD720: beq         $v0, $t1, L_801CD740
    if (ctx->r2 == ctx->r9) {
        // 0x801CD724: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801CD740;
    }
    // 0x801CD724: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CD728: beq         $v0, $v1, L_801CD990
    if (ctx->r2 == ctx->r3) {
        // 0x801CD72C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801CD990;
    }
    // 0x801CD72C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD730: beq         $v0, $a1, L_801CDA24
    if (ctx->r2 == ctx->r5) {
        // 0x801CD734: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801CDA24;
    }
    // 0x801CD734: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD738: b           L_801CDA9C
    // 0x801CD73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CDA9C;
    // 0x801CD73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD740:
    // 0x801CD740: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CD744: lh          $a2, -0x7E4($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X7E4);
    // 0x801CD748: lh          $a1, 0x30($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X30);
    // 0x801CD74C: jal         0x801CF5BC
    // 0x801CD750: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_801CF5BC_66BCEC(rdram, ctx);
        goto after_2;
    // 0x801CD750: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x801CD754: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD758: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD75C: lh          $v0, 0x6($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X6);
    // 0x801CD760: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CD764: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD768: bne         $a1, $v0, L_801CD7C0
    if (ctx->r5 != ctx->r2) {
        // 0x801CD76C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801CD7C0;
    }
    // 0x801CD76C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CD770: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x801CD774: addiu       $t8, $t8, 0x3840
    ctx->r24 = ADD32(ctx->r24, 0X3840);
    // 0x801CD778: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CD77C: addu        $t3, $t8, $at
    ctx->r11 = ADD32(ctx->r24, ctx->r1);
    // 0x801CD780: addiu       $t4, $zero, 0x4D6
    ctx->r12 = ADD32(0, 0X4D6);
    // 0x801CD784: sw          $t3, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r11;
    // 0x801CD788: sh          $t4, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r12;
    // 0x801CD78C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801CD790: jal         0x80014218
    // 0x801CD794: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_3;
    // 0x801CD794: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x801CD798: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD79C: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD7A0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD7A4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD7A8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x801CD7AC: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x801CD7B0: sh          $t5, 0x32($t0)
    MEM_H(0X32, ctx->r8) = ctx->r13;
    // 0x801CD7B4: sh          $t6, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r14;
    // 0x801CD7B8: b           L_801CDA98
    // 0x801CD7BC: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CDA98;
    // 0x801CD7BC: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CD7C0:
    // 0x801CD7C0: bne         $v0, $at, L_801CDA98
    if (ctx->r2 != ctx->r1) {
        // 0x801CD7C4: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CDA98;
    }
    // 0x801CD7C4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD7C8: lwc1        $f14, -0x7DC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X7DC);
    // 0x801CD7CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD7D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CD7D4: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CD7D8: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CD7DC: nop

    // 0x801CD7E0: bc1fl       L_801CD890
    if (!c1cs) {
        // 0x801CD7E4: lhu         $v0, 0x16($a3)
        ctx->r2 = MEM_HU(ctx->r7, 0X16);
            goto L_801CD890;
    }
    goto skip_6;
    // 0x801CD7E4: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
    skip_6:
    // 0x801CD7E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CD7EC: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CD7F0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD7F4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801CD7F8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801CD7FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CD800: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801CD804: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801CD808: bc1fl       L_801CD820
    if (!c1cs) {
        // 0x801CD80C: sub.s       $f14, $f12, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_801CD820;
    }
    goto skip_7;
    // 0x801CD80C: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    skip_7:
    // 0x801CD810: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x801CD814: b           L_801CD820
    // 0x801CD818: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801CD820;
    // 0x801CD818: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801CD81C: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
L_801CD820:
    // 0x801CD820: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CD824: nop

    // 0x801CD828: bc1f        L_801CD83C
    if (!c1cs) {
        // 0x801CD82C: nop
    
            goto L_801CD83C;
    }
    // 0x801CD82C: nop

    // 0x801CD830: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD834: b           L_801CD840
    // 0x801CD838: sw          $t7, 0x3DB8($at)
    MEM_W(0X3DB8, ctx->r1) = ctx->r15;
        goto L_801CD840;
    // 0x801CD838: sw          $t7, 0x3DB8($at)
    MEM_W(0X3DB8, ctx->r1) = ctx->r15;
L_801CD83C:
    // 0x801CD83C: sw          $t9, 0x3DB8($at)
    MEM_W(0X3DB8, ctx->r1) = ctx->r25;
L_801CD840:
    // 0x801CD840: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CD844: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD848: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801CD84C: nop

    // 0x801CD850: bc1f        L_801CD868
    if (!c1cs) {
        // 0x801CD854: nop
    
            goto L_801CD868;
    }
    // 0x801CD854: nop

    // 0x801CD858: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x801CD85C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD860: b           L_801CD86C
    // 0x801CD864: swc1        $f4, -0x7E0($at)
    MEM_W(-0X7E0, ctx->r1) = ctx->f4.u32l;
        goto L_801CD86C;
    // 0x801CD864: swc1        $f4, -0x7E0($at)
    MEM_W(-0X7E0, ctx->r1) = ctx->f4.u32l;
L_801CD868:
    // 0x801CD868: swc1        $f0, -0x7E0($at)
    MEM_W(-0X7E0, ctx->r1) = ctx->f0.u32l;
L_801CD86C:
    // 0x801CD86C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CD870: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD874: bc1f        L_801CD888
    if (!c1cs) {
        // 0x801CD878: nop
    
            goto L_801CD888;
    }
    // 0x801CD878: nop

    // 0x801CD87C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD880: b           L_801CD88C
    // 0x801CD884: sw          $t2, 0x3DB4($at)
    MEM_W(0X3DB4, ctx->r1) = ctx->r10;
        goto L_801CD88C;
    // 0x801CD884: sw          $t2, 0x3DB4($at)
    MEM_W(0X3DB4, ctx->r1) = ctx->r10;
L_801CD888:
    // 0x801CD888: sw          $t8, 0x3DB4($at)
    MEM_W(0X3DB4, ctx->r1) = ctx->r24;
L_801CD88C:
    // 0x801CD88C: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
L_801CD890:
    // 0x801CD890: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x801CD894: beq         $at, $zero, L_801CD8B8
    if (ctx->r1 == 0) {
        // 0x801CD898: addiu       $v1, $v0, 0xC
        ctx->r3 = ADD32(ctx->r2, 0XC);
            goto L_801CD8B8;
    }
    // 0x801CD898: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x801CD89C: addiu       $v1, $v0, -0xC
    ctx->r3 = ADD32(ctx->r2, -0XC);
    // 0x801CD8A0: blez        $v1, L_801CD8B0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801CD8A4: nop
    
            goto L_801CD8B0;
    }
    // 0x801CD8A4: nop

    // 0x801CD8A8: b           L_801CD8D0
    // 0x801CD8AC: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
        goto L_801CD8D0;
    // 0x801CD8AC: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
L_801CD8B0:
    // 0x801CD8B0: b           L_801CD8D0
    // 0x801CD8B4: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
        goto L_801CD8D0;
    // 0x801CD8B4: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CD8B8:
    // 0x801CD8B8: slti        $at, $v1, 0x3FF
    ctx->r1 = SIGNED(ctx->r3) < 0X3FF ? 1 : 0;
    // 0x801CD8BC: beql        $at, $zero, L_801CD8D0
    if (ctx->r1 == 0) {
        // 0x801CD8C0: sh          $zero, 0x16($a3)
        MEM_H(0X16, ctx->r7) = 0;
            goto L_801CD8D0;
    }
    goto skip_8;
    // 0x801CD8C0: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
    skip_8:
    // 0x801CD8C4: b           L_801CD8D0
    // 0x801CD8C8: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
        goto L_801CD8D0;
    // 0x801CD8C8: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
    // 0x801CD8CC: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CD8D0:
    // 0x801CD8D0: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CD8D4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD8D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CD8DC: nop

    // 0x801CD8E0: bc1f        L_801CD954
    if (!c1cs) {
        // 0x801CD8E4: nop
    
            goto L_801CD954;
    }
    // 0x801CD8E4: nop

    // 0x801CD8E8: lw          $t3, 0x3DB8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3DB8);
    // 0x801CD8EC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x801CD8F0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD8F4: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x801CD8F8: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CD8FC: cvt.d.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CD900: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x801CD904: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x801CD908: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801CD90C: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
    // 0x801CD910: lwc1        $f8, -0x7E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7E0);
    // 0x801CD914: lw          $t4, 0x3DB4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3DB4);
    // 0x801CD918: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD91C: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801CD920: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x801CD924: nop

    // 0x801CD928: cvt.d.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CD92C: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CD930: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD934: add.d       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f2.d + ctx->f2.d;
    // 0x801CD938: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CD93C: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x801CD940: sub.d       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f8.d - ctx->f18.d;
    // 0x801CD944: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x801CD948: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
    // 0x801CD94C: b           L_801CDA98
    // 0x801CD950: swc1        $f14, -0x7DC($at)
    MEM_W(-0X7DC, ctx->r1) = ctx->f14.u32l;
        goto L_801CDA98;
    // 0x801CD950: swc1        $f14, -0x7DC($at)
    MEM_W(-0X7DC, ctx->r1) = ctx->f14.u32l;
L_801CD954:
    // 0x801CD954: swc1        $f14, -0x7DC($at)
    MEM_W(-0X7DC, ctx->r1) = ctx->f14.u32l;
    // 0x801CD958: lw          $t5, 0x10($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X10);
    // 0x801CD95C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CD960: bne         $a1, $t5, L_801CD980
    if (ctx->r5 != ctx->r13) {
        // 0x801CD964: nop
    
            goto L_801CD980;
    }
    // 0x801CD964: nop

    // 0x801CD968: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CD96C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CD970: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CD974: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CD978: b           L_801CDA98
    // 0x801CD97C: sb          $t6, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r14;
        goto L_801CDA98;
    // 0x801CD97C: sb          $t6, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r14;
L_801CD980:
    // 0x801CD980: jal         0x80035020
    // 0x801CD984: nop

    func_80035020_35C20(rdram, ctx);
        goto after_4;
    // 0x801CD984: nop

    after_4:
    // 0x801CD988: b           L_801CDA9C
    // 0x801CD98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CDA9C;
    // 0x801CD98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD990:
    // 0x801CD990: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CD994: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CD998: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CD99C: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801CD9A0: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x801CD9A4: add.d       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f4.d + ctx->f8.d;
    // 0x801CD9A8: addiu       $t8, $t8, 0x40F0
    ctx->r24 = ADD32(ctx->r24, 0X40F0);
    // 0x801CD9AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD9B0: addu        $t3, $t8, $at
    ctx->r11 = ADD32(ctx->r24, ctx->r1);
    // 0x801CD9B4: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801CD9B8: addiu       $t4, $zero, 0x4D6
    ctx->r12 = ADD32(0, 0X4D6);
    // 0x801CD9BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CD9C0: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    // 0x801CD9C4: lh          $t9, 0x30($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X30);
    // 0x801CD9C8: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CD9CC: addiu       $t2, $t9, -0x1
    ctx->r10 = ADD32(ctx->r25, -0X1);
    // 0x801CD9D0: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x801CD9D4: nop

    // 0x801CD9D8: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CD9DC: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x801CD9E0: nop

    // 0x801CD9E4: bc1fl       L_801CDA9C
    if (!c1cs) {
        // 0x801CD9E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CDA9C;
    }
    goto skip_9;
    // 0x801CD9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x801CD9EC: sw          $t3, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r11;
    // 0x801CD9F0: sh          $t4, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r12;
    // 0x801CD9F4: jal         0x80014218
    // 0x801CD9F8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80014218_14E18(rdram, ctx);
        goto after_5;
    // 0x801CD9F8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_5:
    // 0x801CD9FC: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CDA00: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CDA04: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDA08: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CDA0C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801CDA10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CDA14: sh          $t5, 0x32($t0)
    MEM_H(0X32, ctx->r8) = ctx->r13;
    // 0x801CDA18: sh          $t6, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r14;
    // 0x801CDA1C: b           L_801CDA98
    // 0x801CDA20: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CDA98;
    // 0x801CDA20: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CDA24:
    // 0x801CDA24: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CDA28: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CDA2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CDA30: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x801CDA34: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801CDA38: add.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d + ctx->f10.d;
    // 0x801CDA3C: addiu       $t9, $t9, 0x3720
    ctx->r25 = ADD32(ctx->r25, 0X3720);
    // 0x801CDA40: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CDA44: addu        $t2, $t9, $at
    ctx->r10 = ADD32(ctx->r25, ctx->r1);
    // 0x801CDA48: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801CDA4C: addiu       $t8, $zero, 0x4D6
    ctx->r24 = ADD32(0, 0X4D6);
    // 0x801CDA50: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CDA54: swc1        $f16, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f16.u32l;
    // 0x801CDA58: lh          $t7, 0x6($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X6);
    // 0x801CDA5C: bnel        $t1, $t7, L_801CDA9C
    if (ctx->r9 != ctx->r15) {
        // 0x801CDA60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CDA9C;
    }
    goto skip_10;
    // 0x801CDA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_10:
    // 0x801CDA64: sw          $t2, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r10;
    // 0x801CDA68: sh          $t8, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r24;
    // 0x801CDA6C: jal         0x80014218
    // 0x801CDA70: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x801CDA70: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_6:
    // 0x801CDA74: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CDA78: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDA7C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CDA80: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CDA84: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CDA88: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801CDA8C: sh          $t3, 0x32($t0)
    MEM_H(0X32, ctx->r8) = ctx->r11;
    // 0x801CDA90: sh          $t4, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r12;
    // 0x801CDA94: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CDA98:
    // 0x801CDA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CDA9C:
    // 0x801CDA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CDAA0: jr          $ra
    // 0x801CDAA4: nop

    TRACE_RETURN()
    return;
    // 0x801CDAA4: nop

;}
RECOMP_FUNC void func_801CE0E4_66A814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE0E4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801CE0E8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x801CE0EC: lui         $s6, 0x801D
    ctx->r22 = S32(0X801D << 16);
    // 0x801CE0F0: addiu       $s6, $s6, -0x4E0
    ctx->r22 = ADD32(ctx->r22, -0X4E0);
    // 0x801CE0F4: lh          $t6, 0x6($s6)
    ctx->r14 = MEM_H(ctx->r22, 0X6);
    // 0x801CE0F8: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x801CE0FC: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x801CE100: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x801CE104: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x801CE108: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x801CE10C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801CE110: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801CE114: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x801CE118: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x801CE11C: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801CE120: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801CE124: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801CE128: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801CE12C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801CE130: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801CE134: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CE138: bne         $s2, $t6, L_801CE148
    if (ctx->r18 != ctx->r14) {
        // 0x801CE13C: addiu       $s1, $zero, 0x100
        ctx->r17 = ADD32(0, 0X100);
            goto L_801CE148;
    }
    // 0x801CE13C: addiu       $s1, $zero, 0x100
    ctx->r17 = ADD32(0, 0X100);
    // 0x801CE140: jal         0x80035020
    // 0x801CE144: nop

    func_80035020_35C20(rdram, ctx);
        goto after_0;
    // 0x801CE144: nop

    after_0:
L_801CE148:
    // 0x801CE148: lh          $v0, 0x0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X0);
    // 0x801CE14C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CE150: bne         $v0, $at, L_801CE45C
    if (ctx->r2 != ctx->r1) {
        // 0x801CE154: lui         $at, 0xC2A0
        ctx->r1 = S32(0XC2A0 << 16);
            goto L_801CE45C;
    }
    // 0x801CE154: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE158: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CE15C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801CE160: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x801CE164: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801CE168: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CE16C: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CE170: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801CE174: addiu       $s2, $s2, -0x1744
    ctx->r18 = ADD32(ctx->r18, -0X1744);
    // 0x801CE178: addiu       $s4, $s4, -0x8F0
    ctx->r20 = ADD32(ctx->r20, -0X8F0);
    // 0x801CE17C: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x801CE180: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
L_801CE184:
    // 0x801CE184: jal         0x80003EA0
    // 0x801CE188: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x801CE188: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x801CE18C: mul.s       $f22, $f0, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x801CE190: jal         0x80003E10
    // 0x801CE194: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x801CE194: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_2:
    // 0x801CE198: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x801CE19C: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CE1A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CE1A4: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x801CE1A8: jal         0x8000DD58
    // 0x801CE1AC: add.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f6.fl;
    func_8000DD58_E958(rdram, ctx);
        goto after_3;
    // 0x801CE1AC: add.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
L_801CE1B0:
    // 0x801CE1B0: jal         0x8000DD58
    // 0x801CE1B4: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801CE1B4: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_4:
    // 0x801CE1B8: addiu       $t7, $v0, -0x23
    ctx->r15 = ADD32(ctx->r2, -0X23);
    // 0x801CE1BC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801CE1C0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE1C4: lwc1        $f14, -0x7D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X7D0);
    // 0x801CE1C8: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CE1CC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE1D0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CE1D4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x801CE1D8: bc1fl       L_801CE1F8
    if (!c1cs) {
        // 0x801CE1DC: sub.s       $f2, $f0, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
            goto L_801CE1F8;
    }
    goto skip_0;
    // 0x801CE1DC: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
    skip_0:
    // 0x801CE1E0: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801CE1E4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE1E8: swc1        $f14, -0x7D0($at)
    MEM_W(-0X7D0, ctx->r1) = ctx->f14.u32l;
    // 0x801CE1EC: b           L_801CE1FC
    // 0x801CE1F0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801CE1FC;
    // 0x801CE1F0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801CE1F4: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
L_801CE1F8:
    // 0x801CE1F8: swc1        $f14, -0x7D0($at)
    MEM_W(-0X7D0, ctx->r1) = ctx->f14.u32l;
L_801CE1FC:
    // 0x801CE1FC: c.lt.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl < ctx->f2.fl;
    // 0x801CE200: nop

    // 0x801CE204: bc1f        L_801CE1B0
    if (!c1cs) {
        // 0x801CE208: nop
    
            goto L_801CE1B0;
    }
    // 0x801CE208: nop

    // 0x801CE20C: lb          $t8, 0x6C($s5)
    ctx->r24 = MEM_B(ctx->r21, 0X6C);
    // 0x801CE210: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE214: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CE218: sb          $t9, 0x6C($s5)
    MEM_B(0X6C, ctx->r21) = ctx->r25;
    // 0x801CE21C: lb          $v0, 0x6C($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X6C);
    // 0x801CE220: swc1        $f0, -0x7D0($at)
    MEM_W(-0X7D0, ctx->r1) = ctx->f0.u32l;
    // 0x801CE224: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x801CE228: bne         $at, $zero, L_801CE238
    if (ctx->r1 != 0) {
        // 0x801CE22C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_801CE238;
    }
    // 0x801CE22C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801CE230: sb          $t0, 0x6C($s5)
    MEM_B(0X6C, ctx->r21) = ctx->r8;
    // 0x801CE234: lb          $v0, 0x6C($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X6C);
L_801CE238:
    // 0x801CE238: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x801CE23C: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x801CE240: beq         $at, $zero, L_801CE434
    if (ctx->r1 == 0) {
        // 0x801CE244: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_801CE434;
    }
    // 0x801CE244: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801CE248: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE24C: addu        $at, $at, $t1
    gpr jr_addend_801CE254 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801CE250: lw          $t1, -0x554($at)
    ctx->r9 = ADD32(ctx->r1, -0X554);
    // 0x801CE254: jr          $t1
    // 0x801CE258: nop

    switch (jr_addend_801CE254 >> 2) {
        case 0: goto L_801CE25C; break;
        case 1: goto L_801CE2AC; break;
        case 2: goto L_801CE2FC; break;
        case 3: goto L_801CE34C; break;
        case 4: goto L_801CE39C; break;
        case 5: goto L_801CE3EC; break;
        default: switch_error(__func__, 0x801CE254, 0x801CFAAC);
    }
    // 0x801CE258: nop

L_801CE25C:
    // 0x801CE25C: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x801CE260: addiu       $t2, $t2, 0x2C40
    ctx->r10 = ADD32(ctx->r10, 0X2C40);
    // 0x801CE264: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x801CE268: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CE26C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801CE270: addu        $a1, $s3, $t2
    ctx->r5 = ADD32(ctx->r19, ctx->r10);
    // 0x801CE274: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CE278: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801CE27C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE280: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x801CE284: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE288: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CE28C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE290: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE294: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE298: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE29C: jal         0x80035854
    // 0x801CE2A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_5;
    // 0x801CE2A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_5:
    // 0x801CE2A4: b           L_801CE438
    // 0x801CE2A8: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
        goto L_801CE438;
    // 0x801CE2A8: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
L_801CE2AC:
    // 0x801CE2AC: lui         $t4, 0x801
    ctx->r12 = S32(0X801 << 16);
    // 0x801CE2B0: addiu       $t4, $t4, 0x27E0
    ctx->r12 = ADD32(ctx->r12, 0X27E0);
    // 0x801CE2B4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x801CE2B8: addiu       $t5, $zero, 0x4D6
    ctx->r13 = ADD32(0, 0X4D6);
    // 0x801CE2BC: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801CE2C0: addu        $a1, $s3, $t4
    ctx->r5 = ADD32(ctx->r19, ctx->r12);
    // 0x801CE2C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CE2C8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801CE2CC: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE2D0: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x801CE2D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE2D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CE2DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE2E0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE2E4: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE2E8: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE2EC: jal         0x80035854
    // 0x801CE2F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_6;
    // 0x801CE2F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_6:
    // 0x801CE2F4: b           L_801CE438
    // 0x801CE2F8: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
        goto L_801CE438;
    // 0x801CE2F8: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
L_801CE2FC:
    // 0x801CE2FC: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x801CE300: addiu       $t6, $t6, 0x2B60
    ctx->r14 = ADD32(ctx->r14, 0X2B60);
    // 0x801CE304: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x801CE308: addiu       $t7, $zero, 0x4D6
    ctx->r15 = ADD32(0, 0X4D6);
    // 0x801CE30C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801CE310: addu        $a1, $s3, $t6
    ctx->r5 = ADD32(ctx->r19, ctx->r14);
    // 0x801CE314: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CE318: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801CE31C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE320: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x801CE324: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE328: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CE32C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE330: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE334: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE338: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE33C: jal         0x80035854
    // 0x801CE340: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_7;
    // 0x801CE340: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_7:
    // 0x801CE344: b           L_801CE438
    // 0x801CE348: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
        goto L_801CE438;
    // 0x801CE348: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
L_801CE34C:
    // 0x801CE34C: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x801CE350: addiu       $t8, $t8, 0x29A0
    ctx->r24 = ADD32(ctx->r24, 0X29A0);
    // 0x801CE354: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x801CE358: addiu       $t9, $zero, 0x4D6
    ctx->r25 = ADD32(0, 0X4D6);
    // 0x801CE35C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801CE360: addu        $a1, $s3, $t8
    ctx->r5 = ADD32(ctx->r19, ctx->r24);
    // 0x801CE364: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CE368: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801CE36C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE370: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x801CE374: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE378: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CE37C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE380: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE384: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE388: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE38C: jal         0x80035854
    // 0x801CE390: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_8;
    // 0x801CE390: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_8:
    // 0x801CE394: b           L_801CE438
    // 0x801CE398: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
        goto L_801CE438;
    // 0x801CE398: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
L_801CE39C:
    // 0x801CE39C: lui         $t0, 0x801
    ctx->r8 = S32(0X801 << 16);
    // 0x801CE3A0: addiu       $t0, $t0, 0x28C0
    ctx->r8 = ADD32(ctx->r8, 0X28C0);
    // 0x801CE3A4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x801CE3A8: addiu       $t1, $zero, 0x4D6
    ctx->r9 = ADD32(0, 0X4D6);
    // 0x801CE3AC: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x801CE3B0: addu        $a1, $s3, $t0
    ctx->r5 = ADD32(ctx->r19, ctx->r8);
    // 0x801CE3B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CE3B8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801CE3BC: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE3C0: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x801CE3C4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE3C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CE3CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE3D0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE3D4: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE3D8: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE3DC: jal         0x80035854
    // 0x801CE3E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_9;
    // 0x801CE3E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_9:
    // 0x801CE3E4: b           L_801CE438
    // 0x801CE3E8: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
        goto L_801CE438;
    // 0x801CE3E8: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
L_801CE3EC:
    // 0x801CE3EC: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x801CE3F0: addiu       $t2, $t2, 0x2A80
    ctx->r10 = ADD32(ctx->r10, 0X2A80);
    // 0x801CE3F4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x801CE3F8: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CE3FC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801CE400: addu        $a1, $s3, $t2
    ctx->r5 = ADD32(ctx->r19, ctx->r10);
    // 0x801CE404: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CE408: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801CE40C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE410: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x801CE414: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE418: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CE41C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE420: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE424: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE428: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE42C: jal         0x80035854
    // 0x801CE430: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_10;
    // 0x801CE430: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_10:
L_801CE434:
    // 0x801CE434: addiu       $s0, $s6, 0x28
    ctx->r16 = ADD32(ctx->r22, 0X28);
L_801CE438:
    // 0x801CE438: andi        $s6, $s0, 0xFFFF
    ctx->r22 = ctx->r16 & 0XFFFF;
    // 0x801CE43C: addiu       $s1, $s1, -0x28
    ctx->r17 = ADD32(ctx->r17, -0X28);
    // 0x801CE440: andi        $t5, $s1, 0xFFFF
    ctx->r13 = ctx->r17 & 0XFFFF;
    // 0x801CE444: slti        $at, $s6, 0x200
    ctx->r1 = SIGNED(ctx->r22) < 0X200 ? 1 : 0;
    // 0x801CE448: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x801CE44C: bne         $at, $zero, L_801CE184
    if (ctx->r1 != 0) {
        // 0x801CE450: or          $s1, $t5, $zero
        ctx->r17 = ctx->r13 | 0;
            goto L_801CE184;
    }
    // 0x801CE450: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x801CE454: b           L_801CE884
    // 0x801CE458: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
        goto L_801CE884;
    // 0x801CE458: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_801CE45C:
    // 0x801CE45C: bnel        $s2, $v0, L_801CE884
    if (ctx->r18 != ctx->r2) {
        // 0x801CE460: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_801CE884;
    }
    goto skip_1;
    // 0x801CE460: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_1:
    // 0x801CE464: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
    // 0x801CE468: slti        $at, $v1, 0x28
    ctx->r1 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x801CE46C: bne         $at, $zero, L_801CE7F4
    if (ctx->r1 != 0) {
        // 0x801CE470: addiu       $t6, $v1, -0x28
        ctx->r14 = ADD32(ctx->r3, -0X28);
            goto L_801CE7F4;
    }
    // 0x801CE470: addiu       $t6, $v1, -0x28
    ctx->r14 = ADD32(ctx->r3, -0X28);
    // 0x801CE474: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801CE478: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x801CE47C: sh          $t6, 0x68($s5)
    MEM_H(0X68, ctx->r21) = ctx->r14;
L_801CE480:
    // 0x801CE480: jal         0x8000DD58
    // 0x801CE484: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801CE484: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_11:
    // 0x801CE488: addiu       $t7, $v0, -0x23
    ctx->r15 = ADD32(ctx->r2, -0X23);
    // 0x801CE48C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x801CE490: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE494: lwc1        $f14, -0x7D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X7D0);
    // 0x801CE498: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CE49C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CE4A0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x801CE4A4: bc1fl       L_801CE4BC
    if (!c1cs) {
        // 0x801CE4A8: sub.s       $f2, $f0, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
            goto L_801CE4BC;
    }
    goto skip_2;
    // 0x801CE4A8: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
    skip_2:
    // 0x801CE4AC: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x801CE4B0: b           L_801CE4BC
    // 0x801CE4B4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801CE4BC;
    // 0x801CE4B4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801CE4B8: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
L_801CE4BC:
    // 0x801CE4BC: c.lt.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl < ctx->f2.fl;
    // 0x801CE4C0: nop

    // 0x801CE4C4: bc1f        L_801CE480
    if (!c1cs) {
        // 0x801CE4C8: nop
    
            goto L_801CE480;
    }
    // 0x801CE4C8: nop

    // 0x801CE4CC: lb          $t8, 0x6D($s5)
    ctx->r24 = MEM_B(ctx->r21, 0X6D);
    // 0x801CE4D0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE4D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801CE4D8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CE4DC: sb          $t9, 0x6D($s5)
    MEM_B(0X6D, ctx->r21) = ctx->r25;
    // 0x801CE4E0: lb          $v0, 0x6D($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X6D);
    // 0x801CE4E4: swc1        $f0, -0x7D0($at)
    MEM_W(-0X7D0, ctx->r1) = ctx->f0.u32l;
    // 0x801CE4E8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x801CE4EC: bnel        $at, $zero, L_801CE500
    if (ctx->r1 != 0) {
        // 0x801CE4F0: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_801CE500;
    }
    goto skip_3;
    // 0x801CE4F0: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    skip_3:
    // 0x801CE4F4: sb          $t0, 0x6D($s5)
    MEM_B(0X6D, ctx->r21) = ctx->r8;
    // 0x801CE4F8: lb          $v0, 0x6D($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X6D);
    // 0x801CE4FC: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
L_801CE500:
    // 0x801CE500: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x801CE504: beq         $at, $zero, L_801CE7F0
    if (ctx->r1 == 0) {
        // 0x801CE508: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_801CE7F0;
    }
    // 0x801CE508: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801CE50C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE510: addu        $at, $at, $t1
    gpr jr_addend_801CE518 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801CE514: lw          $t1, -0x53C($at)
    ctx->r9 = ADD32(ctx->r1, -0X53C);
    // 0x801CE518: jr          $t1
    // 0x801CE51C: nop

    switch (jr_addend_801CE518 >> 2) {
        case 0: goto L_801CE520; break;
        case 1: goto L_801CE598; break;
        case 2: goto L_801CE610; break;
        case 3: goto L_801CE688; break;
        case 4: goto L_801CE700; break;
        case 5: goto L_801CE778; break;
        default: switch_error(__func__, 0x801CE518, 0x801CFAC4);
    }
    // 0x801CE51C: nop

L_801CE520:
    // 0x801CE520: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801CE524: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801CE528: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE52C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CE530: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CE534: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CE538: lui         $t2, 0x801
    ctx->r10 = S32(0X801 << 16);
    // 0x801CE53C: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CE540: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x801CE544: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CE548: addiu       $t2, $t2, 0x2A80
    ctx->r10 = ADD32(ctx->r10, 0X2A80);
    // 0x801CE54C: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x801CE550: addiu       $t4, $zero, 0x4D6
    ctx->r12 = ADD32(0, 0X4D6);
    // 0x801CE554: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x801CE558: addiu       $a2, $s4, -0x8F0
    ctx->r6 = ADD32(ctx->r20, -0X8F0);
    // 0x801CE55C: addiu       $a0, $s2, -0x1744
    ctx->r4 = ADD32(ctx->r18, -0X1744);
    // 0x801CE560: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x801CE564: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801CE568: addu        $a1, $s3, $t2
    ctx->r5 = ADD32(ctx->r19, ctx->r10);
    // 0x801CE56C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE570: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE574: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE578: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE57C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE580: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE584: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE588: jal         0x80035854
    // 0x801CE58C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_12;
    // 0x801CE58C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x801CE590: b           L_801CE7F4
    // 0x801CE594: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
        goto L_801CE7F4;
    // 0x801CE594: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
L_801CE598:
    // 0x801CE598: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801CE59C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801CE5A0: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE5A4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CE5A8: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CE5AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CE5B0: lui         $t5, 0x801
    ctx->r13 = S32(0X801 << 16);
    // 0x801CE5B4: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CE5B8: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x801CE5BC: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CE5C0: addiu       $t5, $t5, 0x28C0
    ctx->r13 = ADD32(ctx->r13, 0X28C0);
    // 0x801CE5C4: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x801CE5C8: addiu       $t7, $zero, 0x4D6
    ctx->r15 = ADD32(0, 0X4D6);
    // 0x801CE5CC: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x801CE5D0: addiu       $a2, $s4, -0x8F0
    ctx->r6 = ADD32(ctx->r20, -0X8F0);
    // 0x801CE5D4: addiu       $a0, $s2, -0x1744
    ctx->r4 = ADD32(ctx->r18, -0X1744);
    // 0x801CE5D8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801CE5DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801CE5E0: addu        $a1, $s3, $t5
    ctx->r5 = ADD32(ctx->r19, ctx->r13);
    // 0x801CE5E4: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE5E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE5EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE5F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE5F4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE5F8: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE5FC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE600: jal         0x80035854
    // 0x801CE604: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_13;
    // 0x801CE604: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x801CE608: b           L_801CE7F4
    // 0x801CE60C: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
        goto L_801CE7F4;
    // 0x801CE60C: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
L_801CE610:
    // 0x801CE610: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801CE614: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801CE618: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE61C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CE620: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CE624: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CE628: lui         $t8, 0x801
    ctx->r24 = S32(0X801 << 16);
    // 0x801CE62C: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CE630: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x801CE634: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CE638: addiu       $t8, $t8, 0x29A0
    ctx->r24 = ADD32(ctx->r24, 0X29A0);
    // 0x801CE63C: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x801CE640: addiu       $t0, $zero, 0x4D6
    ctx->r8 = ADD32(0, 0X4D6);
    // 0x801CE644: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x801CE648: addiu       $a2, $s4, -0x8F0
    ctx->r6 = ADD32(ctx->r20, -0X8F0);
    // 0x801CE64C: addiu       $a0, $s2, -0x1744
    ctx->r4 = ADD32(ctx->r18, -0X1744);
    // 0x801CE650: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801CE654: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801CE658: addu        $a1, $s3, $t8
    ctx->r5 = ADD32(ctx->r19, ctx->r24);
    // 0x801CE65C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE660: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE664: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE668: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE66C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE670: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE674: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE678: jal         0x80035854
    // 0x801CE67C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_14;
    // 0x801CE67C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x801CE680: b           L_801CE7F4
    // 0x801CE684: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
        goto L_801CE7F4;
    // 0x801CE684: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
L_801CE688:
    // 0x801CE688: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801CE68C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801CE690: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE694: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CE698: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CE69C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CE6A0: lui         $t1, 0x801
    ctx->r9 = S32(0X801 << 16);
    // 0x801CE6A4: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CE6A8: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x801CE6AC: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CE6B0: addiu       $t1, $t1, 0x2B60
    ctx->r9 = ADD32(ctx->r9, 0X2B60);
    // 0x801CE6B4: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x801CE6B8: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CE6BC: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x801CE6C0: addiu       $a2, $s4, -0x8F0
    ctx->r6 = ADD32(ctx->r20, -0X8F0);
    // 0x801CE6C4: addiu       $a0, $s2, -0x1744
    ctx->r4 = ADD32(ctx->r18, -0X1744);
    // 0x801CE6C8: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801CE6CC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801CE6D0: addu        $a1, $s3, $t1
    ctx->r5 = ADD32(ctx->r19, ctx->r9);
    // 0x801CE6D4: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE6D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE6DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE6E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE6E4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE6E8: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE6EC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE6F0: jal         0x80035854
    // 0x801CE6F4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_15;
    // 0x801CE6F4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x801CE6F8: b           L_801CE7F4
    // 0x801CE6FC: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
        goto L_801CE7F4;
    // 0x801CE6FC: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
L_801CE700:
    // 0x801CE700: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801CE704: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801CE708: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE70C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CE710: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CE714: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CE718: lui         $t4, 0x801
    ctx->r12 = S32(0X801 << 16);
    // 0x801CE71C: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CE720: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x801CE724: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CE728: addiu       $t4, $t4, 0x27E0
    ctx->r12 = ADD32(ctx->r12, 0X27E0);
    // 0x801CE72C: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x801CE730: addiu       $t6, $zero, 0x4D6
    ctx->r14 = ADD32(0, 0X4D6);
    // 0x801CE734: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x801CE738: addiu       $a2, $s4, -0x8F0
    ctx->r6 = ADD32(ctx->r20, -0X8F0);
    // 0x801CE73C: addiu       $a0, $s2, -0x1744
    ctx->r4 = ADD32(ctx->r18, -0X1744);
    // 0x801CE740: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801CE744: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CE748: addu        $a1, $s3, $t4
    ctx->r5 = ADD32(ctx->r19, ctx->r12);
    // 0x801CE74C: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE750: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE754: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE758: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE75C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE760: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE764: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE768: jal         0x80035854
    // 0x801CE76C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_16;
    // 0x801CE76C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x801CE770: b           L_801CE7F4
    // 0x801CE774: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
        goto L_801CE7F4;
    // 0x801CE774: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
L_801CE778:
    // 0x801CE778: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801CE77C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801CE780: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE784: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CE788: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CE78C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CE790: lui         $t7, 0x801
    ctx->r15 = S32(0X801 << 16);
    // 0x801CE794: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CE798: lui         $s3, 0x4000
    ctx->r19 = S32(0X4000 << 16);
    // 0x801CE79C: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CE7A0: addiu       $t7, $t7, 0x2C40
    ctx->r15 = ADD32(ctx->r15, 0X2C40);
    // 0x801CE7A4: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x801CE7A8: addiu       $t9, $zero, 0x4D6
    ctx->r25 = ADD32(0, 0X4D6);
    // 0x801CE7AC: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x801CE7B0: addiu       $a2, $s4, -0x8F0
    ctx->r6 = ADD32(ctx->r20, -0X8F0);
    // 0x801CE7B4: addiu       $a0, $s2, -0x1744
    ctx->r4 = ADD32(ctx->r18, -0X1744);
    // 0x801CE7B8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801CE7BC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CE7C0: addu        $a1, $s3, $t7
    ctx->r5 = ADD32(ctx->r19, ctx->r15);
    // 0x801CE7C4: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801CE7C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CE7CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CE7D0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CE7D4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801CE7D8: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801CE7DC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801CE7E0: jal         0x80035854
    // 0x801CE7E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_17;
    // 0x801CE7E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_17:
    // 0x801CE7E8: b           L_801CE7F4
    // 0x801CE7EC: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
        goto L_801CE7F4;
    // 0x801CE7EC: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
L_801CE7F0:
    // 0x801CE7F0: lhu         $v1, 0x68($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X68);
L_801CE7F4:
    // 0x801CE7F4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801CE7F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CE7FC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CE800: lwc1        $f16, 0x8($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X8);
    // 0x801CE804: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CE808: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CE80C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CE810: nop

    // 0x801CE814: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CE818: beql        $t1, $zero, L_801CE868
    if (ctx->r9 == 0) {
        // 0x801CE81C: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_801CE868;
    }
    goto skip_4;
    // 0x801CE81C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x801CE820: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CE824: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CE828: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CE82C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CE830: nop

    // 0x801CE834: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CE838: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CE83C: nop

    // 0x801CE840: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CE844: bne         $t1, $zero, L_801CE85C
    if (ctx->r9 != 0) {
        // 0x801CE848: nop
    
            goto L_801CE85C;
    }
    // 0x801CE848: nop

    // 0x801CE84C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x801CE850: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CE854: b           L_801CE874
    // 0x801CE858: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_801CE874;
    // 0x801CE858: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_801CE85C:
    // 0x801CE85C: b           L_801CE874
    // 0x801CE860: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_801CE874;
    // 0x801CE860: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801CE864: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_801CE868:
    // 0x801CE868: nop

    // 0x801CE86C: bltz        $t1, L_801CE85C
    if (SIGNED(ctx->r9) < 0) {
        // 0x801CE870: nop
    
            goto L_801CE85C;
    }
    // 0x801CE870: nop

L_801CE874:
    // 0x801CE874: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801CE878: addu        $t3, $v1, $t1
    ctx->r11 = ADD32(ctx->r3, ctx->r9);
    // 0x801CE87C: sh          $t3, 0x68($s5)
    MEM_H(0X68, ctx->r21) = ctx->r11;
    // 0x801CE880: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_801CE884:
    // 0x801CE884: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801CE888: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801CE88C: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801CE890: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801CE894: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801CE898: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x801CE89C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x801CE8A0: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x801CE8A4: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x801CE8A8: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x801CE8AC: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x801CE8B0: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x801CE8B4: jr          $ra
    // 0x801CE8B8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x801CE8B8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_801CC1FC_66892C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC1FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CC200: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x801CC204: jr          $ra
    // 0x801CC208: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CC208: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_801CDDF4_66A524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDDF4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CDDF8: lh          $v0, -0x7D4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7D4);
    // 0x801CDDFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CDE00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CDE04: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x801CDE08: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CDE0C: addiu       $t8, $v0, 0x2
    ctx->r24 = ADD32(ctx->r2, 0X2);
    // 0x801CDE10: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801CDE14: andi        $t1, $t8, 0x3FF
    ctx->r9 = ctx->r24 & 0X3FF;
    // 0x801CDE18: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDE1C: sh          $t1, -0x7D4($at)
    MEM_H(-0X7D4, ctx->r1) = ctx->r9;
    // 0x801CDE20: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x801CDE24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801CDE28: jal         0x80003E10
    // 0x801CDE2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x801CDE2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CDE30: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x801CDE34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CDE38: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDE3C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CDE40: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CDE44: lhu         $t2, 0x16($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X16);
    // 0x801CDE48: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CDE4C: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CDE50: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CDE54: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801CDE58: nop

    // 0x801CDE5C: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x801CDE60: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801CDE64: lh          $t8, 0x6($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X6);
    // 0x801CDE68: bnel        $t8, $zero, L_801CDEA8
    if (ctx->r24 != 0) {
        // 0x801CDE6C: lb          $v1, 0x6C($a2)
        ctx->r3 = MEM_B(ctx->r6, 0X6C);
            goto L_801CDEA8;
    }
    goto skip_0;
    // 0x801CDE6C: lb          $v1, 0x6C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X6C);
    skip_0:
    // 0x801CDE70: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x801CDE74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CDE78: bne         $v0, $at, L_801CDE8C
    if (ctx->r2 != ctx->r1) {
        // 0x801CDE7C: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CDE8C;
    }
    // 0x801CDE7C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDE80: lwc1        $f10, -0x580($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X580);
    // 0x801CDE84: b           L_801CDFBC
    // 0x801CDE88: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
        goto L_801CDFBC;
    // 0x801CDE88: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
L_801CDE8C:
    // 0x801CDE8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CDE90: bne         $v0, $at, L_801CDFBC
    if (ctx->r2 != ctx->r1) {
        // 0x801CDE94: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CDFBC;
    }
    // 0x801CDE94: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDE98: lwc1        $f16, -0x57C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X57C);
    // 0x801CDE9C: b           L_801CDFBC
    // 0x801CDEA0: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
        goto L_801CDFBC;
    // 0x801CDEA0: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x801CDEA4: lb          $v1, 0x6C($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X6C);
L_801CDEA8:
    // 0x801CDEA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CDEAC: beq         $v1, $zero, L_801CDED4
    if (ctx->r3 == 0) {
        // 0x801CDEB0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801CDED4;
    }
    // 0x801CDEB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CDEB4: beq         $v0, $at, L_801CDED4
    if (ctx->r2 == ctx->r1) {
        // 0x801CDEB8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801CDED4;
    }
    // 0x801CDEB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CDEBC: beq         $v0, $at, L_801CDF3C
    if (ctx->r2 == ctx->r1) {
        // 0x801CDEC0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801CDF3C;
    }
    // 0x801CDEC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CDEC4: beql        $v0, $at, L_801CDF40
    if (ctx->r2 == ctx->r1) {
        // 0x801CDEC8: lwc1        $f18, 0x1C($a1)
        ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
            goto L_801CDF40;
    }
    goto skip_1;
    // 0x801CDEC8: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    skip_1:
    // 0x801CDECC: b           L_801CDFC0
    // 0x801CDED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CDFC0;
    // 0x801CDED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CDED4:
    // 0x801CDED4: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801CDED8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDEDC: ldc1        $f4, -0x578($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X578);
    // 0x801CDEE0: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x801CDEE4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDEE8: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x801CDEEC: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x801CDEF0: bc1f        L_801CDF34
    if (!c1cs) {
        // 0x801CDEF4: nop
    
            goto L_801CDF34;
    }
    // 0x801CDEF4: nop

    // 0x801CDEF8: ldc1        $f2, -0x570($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X570);
    // 0x801CDEFC: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801CDF00: add.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d + ctx->f2.d;
    // 0x801CDF04: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CDF08: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CDF0C: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801CDF10: add.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f16.d + ctx->f2.d;
    // 0x801CDF14: swc1        $f8, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f8.u32l;
    // 0x801CDF18: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CDF1C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801CDF20: add.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d + ctx->f2.d;
    // 0x801CDF24: swc1        $f4, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f4.u32l;
    // 0x801CDF28: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801CDF2C: b           L_801CDFBC
    // 0x801CDF30: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
        goto L_801CDFBC;
    // 0x801CDF30: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
L_801CDF34:
    // 0x801CDF34: b           L_801CDFBC
    // 0x801CDF38: sb          $t9, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r25;
        goto L_801CDFBC;
    // 0x801CDF38: sb          $t9, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r25;
L_801CDF3C:
    // 0x801CDF3C: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
L_801CDF40:
    // 0x801CDF40: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDF44: ldc1        $f4, -0x568($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X568);
    // 0x801CDF48: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x801CDF4C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDF50: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x801CDF54: nop

    // 0x801CDF58: bc1f        L_801CDFA0
    if (!c1cs) {
        // 0x801CDF5C: nop
    
            goto L_801CDFA0;
    }
    // 0x801CDF5C: nop

    // 0x801CDF60: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDF64: ldc1        $f2, -0x560($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X560);
    // 0x801CDF68: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801CDF6C: sub.d       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f0.d - ctx->f2.d;
    // 0x801CDF70: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CDF74: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CDF78: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801CDF7C: sub.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f16.d - ctx->f2.d;
    // 0x801CDF80: swc1        $f8, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f8.u32l;
    // 0x801CDF84: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801CDF88: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801CDF8C: sub.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d - ctx->f2.d;
    // 0x801CDF90: swc1        $f4, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f4.u32l;
    // 0x801CDF94: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801CDF98: b           L_801CDFBC
    // 0x801CDF9C: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
        goto L_801CDFBC;
    // 0x801CDF9C: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
L_801CDFA0:
    // 0x801CDFA0: lwc1        $f0, -0x558($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X558);
    // 0x801CDFA4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x801CDFA8: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x801CDFAC: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x801CDFB0: lb          $t0, 0x6C($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X6C);
    // 0x801CDFB4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801CDFB8: sb          $t1, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r9;
L_801CDFBC:
    // 0x801CDFBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CDFC0:
    // 0x801CDFC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CDFC4: jr          $ra
    // 0x801CDFC8: nop

    TRACE_RETURN()
    return;
    // 0x801CDFC8: nop

;}
RECOMP_FUNC void func_801CF5BC_66BCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF5BC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801CF5C0: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x801CF5C4: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801CF5C8: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x801CF5CC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CF5D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF5D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CF5D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CF5DC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801CF5E0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x801CF5E4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CF5E8: lwc1        $f16, 0x28($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X28);
    // 0x801CF5EC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CF5F0: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x801CF5F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CF5F8: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CF5FC: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801CF600: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    // 0x801CF604: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x801CF608: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801CF60C: nop

    // 0x801CF610: bc1f        L_801CF628
    if (!c1cs) {
        // 0x801CF614: nop
    
            goto L_801CF628;
    }
    // 0x801CF614: nop

    // 0x801CF618: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801CF61C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CF620: jr          $ra
    // 0x801CF624: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x801CF624: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
L_801CF628:
    // 0x801CF628: jr          $ra
    // 0x801CF62C: nop

    TRACE_RETURN()
    return;
    // 0x801CF62C: nop

;}
RECOMP_FUNC void func_801CC20C_66893C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC20C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CC210: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801CC214: jr          $ra
    // 0x801CC218: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CC218: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_801CEAE0_66B210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEAE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CEAE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CEAE8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CEAEC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801CEAF0: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CEAF4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CEAF8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CEAFC: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CEB00: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CEB04: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CEB08: lh          $t8, -0x5250($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5250);
    // 0x801CEB0C: addiu       $t1, $t1, 0x3DC0
    ctx->r9 = ADD32(ctx->r9, 0X3DC0);
    // 0x801CEB10: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CEB14: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x801CEB18: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801CEB1C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x801CEB20: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x801CEB24: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CEB28: sw          $a0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r4;
    // 0x801CEB2C: lh          $t2, 0x6($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X6);
    // 0x801CEB30: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CEB34: bne         $t2, $zero, L_801CEBD8
    if (ctx->r10 != 0) {
        // 0x801CEB38: nop
    
            goto L_801CEBD8;
    }
    // 0x801CEB38: nop

    // 0x801CEB3C: lh          $v0, 0x4($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X4);
    // 0x801CEB40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CEB44: addiu       $t3, $zero, 0x8F
    ctx->r11 = ADD32(0, 0X8F);
    // 0x801CEB48: bne         $v0, $at, L_801CEB5C
    if (ctx->r2 != ctx->r1) {
        // 0x801CEB4C: lui         $v1, 0x801D
        ctx->r3 = S32(0X801D << 16);
            goto L_801CEB5C;
    }
    // 0x801CEB4C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CEB50: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEB54: b           L_801CEB70
    // 0x801CEB58: sw          $t3, -0x7C0($at)
    MEM_W(-0X7C0, ctx->r1) = ctx->r11;
        goto L_801CEB70;
    // 0x801CEB58: sw          $t3, -0x7C0($at)
    MEM_W(-0X7C0, ctx->r1) = ctx->r11;
L_801CEB5C:
    // 0x801CEB5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CEB60: bne         $v0, $at, L_801CEB70
    if (ctx->r2 != ctx->r1) {
        // 0x801CEB64: addiu       $t4, $zero, 0x9F
        ctx->r12 = ADD32(0, 0X9F);
            goto L_801CEB70;
    }
    // 0x801CEB64: addiu       $t4, $zero, 0x9F
    ctx->r12 = ADD32(0, 0X9F);
    // 0x801CEB68: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEB6C: sw          $t4, -0x7C0($at)
    MEM_W(-0X7C0, ctx->r1) = ctx->r12;
L_801CEB70:
    // 0x801CEB70: lw          $v1, -0x7C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7C8);
    // 0x801CEB74: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x801CEB78: bgez        $v1, L_801CEB88
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CEB7C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801CEB88;
    }
    // 0x801CEB7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CEB80: b           L_801CEB88
    // 0x801CEB84: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_801CEB88;
    // 0x801CEB84: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_801CEB88:
    // 0x801CEB88: lw          $t0, -0x7C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7C4);
    // 0x801CEB8C: negu        $t7, $v1
    ctx->r15 = SUB32(0, ctx->r3);
    // 0x801CEB90: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801CEB94: bnel        $at, $zero, L_801CEBC0
    if (ctx->r1 != 0) {
        // 0x801CEB98: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_801CEBC0;
    }
    goto skip_0;
    // 0x801CEB98: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    skip_0:
    // 0x801CEB9C: bgez        $v1, L_801CEBAC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CEBA0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801CEBAC;
    }
    // 0x801CEBA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CEBA4: b           L_801CEBAC
    // 0x801CEBA8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_801CEBAC;
    // 0x801CEBA8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_801CEBAC:
    // 0x801CEBAC: subu        $t6, $t5, $v0
    ctx->r14 = SUB32(ctx->r13, ctx->r2);
    // 0x801CEBB0: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801CEBB4: beq         $at, $zero, L_801CEBC0
    if (ctx->r1 == 0) {
        // 0x801CEBB8: nop
    
            goto L_801CEBC0;
    }
    // 0x801CEBB8: nop

    // 0x801CEBBC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_801CEBC0:
    // 0x801CEBC0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEBC4: sw          $v1, -0x7C8($at)
    MEM_W(-0X7C8, ctx->r1) = ctx->r3;
    // 0x801CEBC8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEBCC: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x801CEBD0: b           L_801CEC1C
    // 0x801CEBD4: sw          $t0, -0x7C4($at)
    MEM_W(-0X7C4, ctx->r1) = ctx->r8;
        goto L_801CEC1C;
    // 0x801CEBD4: sw          $t0, -0x7C4($at)
    MEM_W(-0X7C4, ctx->r1) = ctx->r8;
L_801CEBD8:
    // 0x801CEBD8: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CEBDC: lw          $v1, -0x7BC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7BC);
    // 0x801CEBE0: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x801CEBE4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEBE8: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x801CEBEC: beq         $v0, $zero, L_801CEC00
    if (ctx->r2 == 0) {
        // 0x801CEBF0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801CEC00;
    }
    // 0x801CEBF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801CEBF4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEBF8: b           L_801CEC04
    // 0x801CEBFC: sw          $zero, -0x7C4($at)
    MEM_W(-0X7C4, ctx->r1) = 0;
        goto L_801CEC04;
    // 0x801CEBFC: sw          $zero, -0x7C4($at)
    MEM_W(-0X7C4, ctx->r1) = 0;
L_801CEC00:
    // 0x801CEC00: sw          $t0, -0x7C4($at)
    MEM_W(-0X7C4, ctx->r1) = ctx->r8;
L_801CEC04:
    // 0x801CEC04: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEC08: sw          $v1, -0x7BC($at)
    MEM_W(-0X7BC, ctx->r1) = ctx->r3;
    // 0x801CEC0C: slti        $at, $v1, 0x20
    ctx->r1 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x801CEC10: bne         $at, $zero, L_801CEC1C
    if (ctx->r1 != 0) {
        // 0x801CEC14: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CEC1C;
    }
    // 0x801CEC14: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEC18: sw          $zero, -0x7C4($at)
    MEM_W(-0X7C4, ctx->r1) = 0;
L_801CEC1C:
    // 0x801CEC1C: jal         0x800108BC
    // 0x801CEC20: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_800108BC_114BC(rdram, ctx);
        goto after_0;
    // 0x801CEC20: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CEC24: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CEC28: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CEC2C: lw          $t0, -0x7C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7C4);
    // 0x801CEC30: lw          $a2, -0x7C0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7C0);
    // 0x801CEC34: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x801CEC38: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801CEC3C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801CEC40: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801CEC44: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CEC48: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CEC4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CEC50: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x801CEC54: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x801CEC58: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CEC5C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801CEC60: jal         0x800108E4
    // 0x801CEC64: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    func_800108E4_114E4(rdram, ctx);
        goto after_1;
    // 0x801CEC64: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    after_1:
    // 0x801CEC68: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x801CEC6C: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    // 0x801CEC70: jal         0x80040620
    // 0x801CEC74: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x801CEC74: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    after_2:
    // 0x801CEC78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CEC7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CEC80: jr          $ra
    // 0x801CEC84: nop

    TRACE_RETURN()
    return;
    // 0x801CEC84: nop

;}
RECOMP_FUNC void func_801CBB84_6682B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBB84: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CBB88: addiu       $v0, $v0, -0x4E0
    ctx->r2 = ADD32(ctx->r2, -0X4E0);
    // 0x801CBB8C: lh          $t6, 0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6);
    // 0x801CBB90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CBB94: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801CBB98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CBB9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CBBA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CBBA4: bne         $t6, $zero, L_801CBE58
    if (ctx->r14 != 0) {
        // 0x801CBBA8: sh          $a1, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r5;
            goto L_801CBE58;
    }
    // 0x801CBBA8: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    // 0x801CBBAC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CBBB0: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801CBBB4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CBBB8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CBBBC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CBBC0: lhu         $a0, 0x307A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X307A);
    // 0x801CBBC4: andi        $t7, $a0, 0x800
    ctx->r15 = ctx->r4 & 0X800;
    // 0x801CBBC8: beq         $t7, $zero, L_801CBC14
    if (ctx->r15 == 0) {
        // 0x801CBBCC: andi        $t0, $a0, 0x400
        ctx->r8 = ctx->r4 & 0X400;
            goto L_801CBC14;
    }
    // 0x801CBBCC: andi        $t0, $a0, 0x400
    ctx->r8 = ctx->r4 & 0X400;
    // 0x801CBBD0: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x801CBBD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBBD8: beql        $t8, $at, L_801CBCF4
    if (ctx->r24 == ctx->r1) {
        // 0x801CBBDC: lhu         $t5, 0x307C($v1)
        ctx->r13 = MEM_HU(ctx->r3, 0X307C);
            goto L_801CBCF4;
    }
    goto skip_0;
    // 0x801CBBDC: lhu         $t5, 0x307C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X307C);
    skip_0:
    // 0x801CBBE0: jal         0x80038B98
    // 0x801CBBE4: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801CBBE4: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    after_0:
    // 0x801CBBE8: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CBBEC: addiu       $v0, $v0, -0x4E0
    ctx->r2 = ADD32(ctx->r2, -0X4E0);
    // 0x801CBBF0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CBBF4: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    // 0x801CBBF8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CBBFC: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801CBC00: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CBC04: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CBC08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CBC0C: b           L_801CBCF0
    // 0x801CBC10: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
        goto L_801CBCF0;
    // 0x801CBC10: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
L_801CBC14:
    // 0x801CBC14: beql        $t0, $zero, L_801CBC5C
    if (ctx->r8 == 0) {
        // 0x801CBC18: lh          $a0, 0x3080($v1)
        ctx->r4 = MEM_H(ctx->r3, 0X3080);
            goto L_801CBC5C;
    }
    goto skip_1;
    // 0x801CBC18: lh          $a0, 0x3080($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X3080);
    skip_1:
    // 0x801CBC1C: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x801CBC20: beql        $a1, $t1, L_801CBCF4
    if (ctx->r5 == ctx->r9) {
        // 0x801CBC24: lhu         $t5, 0x307C($v1)
        ctx->r13 = MEM_HU(ctx->r3, 0X307C);
            goto L_801CBCF4;
    }
    goto skip_2;
    // 0x801CBC24: lhu         $t5, 0x307C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X307C);
    skip_2:
    // 0x801CBC28: jal         0x80038B98
    // 0x801CBC2C: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801CBC2C: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    after_1:
    // 0x801CBC30: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CBC34: addiu       $v0, $v0, -0x4E0
    ctx->r2 = ADD32(ctx->r2, -0X4E0);
    // 0x801CBC38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CBC3C: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x801CBC40: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CBC44: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801CBC48: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CBC4C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CBC50: b           L_801CBCF0
    // 0x801CBC54: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
        goto L_801CBCF0;
    // 0x801CBC54: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CBC58: lh          $a0, 0x3080($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X3080);
L_801CBC5C:
    // 0x801CBC5C: slti        $at, $a0, 0x15
    ctx->r1 = SIGNED(ctx->r4) < 0X15 ? 1 : 0;
    // 0x801CBC60: bnel        $at, $zero, L_801CBCB0
    if (ctx->r1 != 0) {
        // 0x801CBC64: slti        $at, $a0, -0x14
        ctx->r1 = SIGNED(ctx->r4) < -0X14 ? 1 : 0;
            goto L_801CBCB0;
    }
    goto skip_3;
    // 0x801CBC64: slti        $at, $a0, -0x14
    ctx->r1 = SIGNED(ctx->r4) < -0X14 ? 1 : 0;
    skip_3:
    // 0x801CBC68: lh          $t2, 0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4);
    // 0x801CBC6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBC70: beql        $t2, $at, L_801CBCF4
    if (ctx->r10 == ctx->r1) {
        // 0x801CBC74: lhu         $t5, 0x307C($v1)
        ctx->r13 = MEM_HU(ctx->r3, 0X307C);
            goto L_801CBCF4;
    }
    goto skip_4;
    // 0x801CBC74: lhu         $t5, 0x307C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X307C);
    skip_4:
    // 0x801CBC78: jal         0x80038B98
    // 0x801CBC7C: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801CBC7C: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    after_2:
    // 0x801CBC80: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CBC84: addiu       $v0, $v0, -0x4E0
    ctx->r2 = ADD32(ctx->r2, -0X4E0);
    // 0x801CBC88: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CBC8C: sh          $t3, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r11;
    // 0x801CBC90: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CBC94: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801CBC98: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CBC9C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CBCA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CBCA4: b           L_801CBCF0
    // 0x801CBCA8: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
        goto L_801CBCF0;
    // 0x801CBCA8: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CBCAC: slti        $at, $a0, -0x14
    ctx->r1 = SIGNED(ctx->r4) < -0X14 ? 1 : 0;
L_801CBCB0:
    // 0x801CBCB0: beql        $at, $zero, L_801CBCF4
    if (ctx->r1 == 0) {
        // 0x801CBCB4: lhu         $t5, 0x307C($v1)
        ctx->r13 = MEM_HU(ctx->r3, 0X307C);
            goto L_801CBCF4;
    }
    goto skip_5;
    // 0x801CBCB4: lhu         $t5, 0x307C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X307C);
    skip_5:
    // 0x801CBCB8: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x801CBCBC: beql        $a1, $t4, L_801CBCF4
    if (ctx->r5 == ctx->r12) {
        // 0x801CBCC0: lhu         $t5, 0x307C($v1)
        ctx->r13 = MEM_HU(ctx->r3, 0X307C);
            goto L_801CBCF4;
    }
    goto skip_6;
    // 0x801CBCC0: lhu         $t5, 0x307C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X307C);
    skip_6:
    // 0x801CBCC4: jal         0x80038B98
    // 0x801CBCC8: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801CBCC8: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    after_3:
    // 0x801CBCCC: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CBCD0: addiu       $v0, $v0, -0x4E0
    ctx->r2 = ADD32(ctx->r2, -0X4E0);
    // 0x801CBCD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CBCD8: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x801CBCDC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CBCE0: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801CBCE4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CBCE8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CBCEC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
L_801CBCF0:
    // 0x801CBCF0: lhu         $t5, 0x307C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X307C);
L_801CBCF4:
    // 0x801CBCF4: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x801CBCF8: beql        $t6, $zero, L_801CBE5C
    if (ctx->r14 == 0) {
        // 0x801CBCFC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801CBE5C;
    }
    goto skip_7;
    // 0x801CBCFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x801CBD00: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x801CBD04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBD08: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    // 0x801CBD0C: lh          $v1, 0x6($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X6);
    // 0x801CBD10: bne         $v1, $at, L_801CBDB4
    if (ctx->r3 != ctx->r1) {
        // 0x801CBD14: nop
    
            goto L_801CBDB4;
    }
    // 0x801CBD14: nop

    // 0x801CBD18: jal         0x80038B98
    // 0x801CBD1C: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801CBD1C: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_4:
    // 0x801CBD20: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CBD24: lw          $t0, 0x3D70($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3D70);
    // 0x801CBD28: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBD2C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBD30: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x801CBD34: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x801CBD38: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CBD3C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CBD40: lw          $a1, 0x3D7C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3D7C);
    // 0x801CBD44: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    // 0x801CBD48: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x801CBD4C: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    // 0x801CBD50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBD54: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBD58: jal         0x80010784
    // 0x801CBD5C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80010784_11384(rdram, ctx);
        goto after_5;
    // 0x801CBD5C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_5:
    // 0x801CBD60: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CBD64: lw          $t3, 0x3D74($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3D74);
    // 0x801CBD68: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBD6C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBD70: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x801CBD74: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x801CBD78: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801CBD7C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CBD80: lw          $a1, 0x3D80($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3D80);
    // 0x801CBD84: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    // 0x801CBD88: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x801CBD8C: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    // 0x801CBD90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBD94: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBD98: jal         0x80010784
    // 0x801CBD9C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_80010784_11384(rdram, ctx);
        goto after_6;
    // 0x801CBD9C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_6:
    // 0x801CBDA0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBDA4: jal         0x800105AC
    // 0x801CBDA8: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    func_800105AC_111AC(rdram, ctx);
        goto after_7;
    // 0x801CBDA8: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    after_7:
    // 0x801CBDAC: b           L_801CBE5C
    // 0x801CBDB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801CBE5C;
    // 0x801CBDB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CBDB4:
    // 0x801CBDB4: bnel        $a1, $v1, L_801CBE5C
    if (ctx->r5 != ctx->r3) {
        // 0x801CBDB8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801CBE5C;
    }
    goto skip_8;
    // 0x801CBDB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x801CBDBC: jal         0x80038B98
    // 0x801CBDC0: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_80038B98_39798(rdram, ctx);
        goto after_8;
    // 0x801CBDC0: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_8:
    // 0x801CBDC4: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CBDC8: lw          $t6, 0x3D70($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3D70);
    // 0x801CBDCC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBDD0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBDD4: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x801CBDD8: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x801CBDDC: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x801CBDE0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801CBDE4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801CBDE8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CBDEC: lw          $a1, 0x3D7C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3D7C);
    // 0x801CBDF0: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    // 0x801CBDF4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x801CBDF8: addiu       $a3, $zero, 0xAD
    ctx->r7 = ADD32(0, 0XAD);
    // 0x801CBDFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBE00: jal         0x80010784
    // 0x801CBE04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_80010784_11384(rdram, ctx);
        goto after_9;
    // 0x801CBE04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_9:
    // 0x801CBE08: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CBE0C: lw          $t0, 0x3D74($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3D74);
    // 0x801CBE10: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBE14: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBE18: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x801CBE1C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x801CBE20: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x801CBE24: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801CBE28: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CBE2C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CBE30: lw          $a1, 0x3D80($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3D80);
    // 0x801CBE34: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    // 0x801CBE38: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x801CBE3C: addiu       $a3, $zero, 0xAD
    ctx->r7 = ADD32(0, 0XAD);
    // 0x801CBE40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBE44: jal         0x80010784
    // 0x801CBE48: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80010784_11384(rdram, ctx);
        goto after_10;
    // 0x801CBE48: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_10:
    // 0x801CBE4C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBE50: jal         0x800105AC
    // 0x801CBE54: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    func_800105AC_111AC(rdram, ctx);
        goto after_11;
    // 0x801CBE54: lw          $a0, 0x3D78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3D78);
    after_11:
L_801CBE58:
    // 0x801CBE58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801CBE5C:
    // 0x801CBE5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CBE60: jr          $ra
    // 0x801CBE64: nop

    TRACE_RETURN()
    return;
    // 0x801CBE64: nop

;}
RECOMP_FUNC void func_801CBE78_6685A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBE78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBE7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBE80: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CBE84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CBE88: addiu       $a3, $a3, -0x4E0
    ctx->r7 = ADD32(ctx->r7, -0X4E0);
    // 0x801CBE8C: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CBE90: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x801CBE94: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801CBE98: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801CBE9C: bne         $t0, $v0, L_801CC134
    if (ctx->r8 != ctx->r2) {
        // 0x801CBEA0: lui         $v1, 0x801D
        ctx->r3 = S32(0X801D << 16);
            goto L_801CC134;
    }
    // 0x801CBEA0: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CBEA4: lh          $v0, 0x1A($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X1A);
    // 0x801CBEA8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x801CBEAC: bne         $v1, $v0, L_801CBF8C
    if (ctx->r3 != ctx->r2) {
        // 0x801CBEB0: nop
    
            goto L_801CBF8C;
    }
    // 0x801CBEB0: nop

    // 0x801CBEB4: lh          $t7, 0x2A($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X2A);
    // 0x801CBEB8: bne         $v1, $t7, L_801CBF8C
    if (ctx->r3 != ctx->r15) {
        // 0x801CBEBC: nop
    
            goto L_801CBF8C;
    }
    // 0x801CBEBC: nop

    // 0x801CBEC0: lb          $a0, 0x6C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X6C);
    // 0x801CBEC4: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x801CBEC8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801CBECC: beq         $a0, $zero, L_801CBEE8
    if (ctx->r4 == 0) {
        // 0x801CBED0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_801CBEE8;
    }
    // 0x801CBED0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801CBED4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CBED8: beql        $v1, $a0, L_801CBF08
    if (ctx->r3 == ctx->r4) {
        // 0x801CBEDC: lhu         $a0, 0x68($a2)
        ctx->r4 = MEM_HU(ctx->r6, 0X68);
            goto L_801CBF08;
    }
    goto skip_0;
    // 0x801CBEDC: lhu         $a0, 0x68($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X68);
    skip_0:
    // 0x801CBEE0: b           L_801CBF8C
    // 0x801CBEE4: nop

        goto L_801CBF8C;
    // 0x801CBEE4: nop

L_801CBEE8:
    // 0x801CBEE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CBEEC: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x801CBEF0: sh          $t8, 0x68($a2)
    MEM_H(0X68, ctx->r6) = ctx->r24;
    // 0x801CBEF4: sb          $t9, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r25;
    // 0x801CBEF8: swc1        $f4, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->f4.u32l;
    // 0x801CBEFC: b           L_801CBF8C
    // 0x801CBF00: lh          $v0, 0x1A($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X1A);
        goto L_801CBF8C;
    // 0x801CBF00: lh          $v0, 0x1A($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X1A);
    // 0x801CBF04: lhu         $a0, 0x68($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X68);
L_801CBF08:
    // 0x801CBF08: jal         0x80003E10
    // 0x801CBF0C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x801CBF0C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801CBF10: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CBF14: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CBF18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CBF1C: lwc1        $f6, 0x64($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X64);
    // 0x801CBF20: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CBF24: addiu       $v1, $v1, 0x3CF8
    ctx->r3 = ADD32(ctx->r3, 0X3CF8);
    // 0x801CBF28: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801CBF2C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801CBF30: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CBF34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CBF38: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CBF3C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CBF40: addiu       $a3, $a3, -0x4E0
    ctx->r7 = ADD32(ctx->r7, -0X4E0);
    // 0x801CBF44: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CBF48: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801CBF4C: lwc1        $f18, 0x64($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X64);
    // 0x801CBF50: lhu         $t1, 0x68($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X68);
    // 0x801CBF54: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801CBF58: addiu       $t2, $t1, 0x80
    ctx->r10 = ADD32(ctx->r9, 0X80);
    // 0x801CBF5C: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801CBF60: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801CBF64: sh          $t3, 0x68($a2)
    MEM_H(0X68, ctx->r6) = ctx->r11;
    // 0x801CBF68: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CBF6C: swc1        $f10, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->f10.u32l;
    // 0x801CBF70: lwc1        $f16, 0x64($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X64);
    // 0x801CBF74: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801CBF78: nop

    // 0x801CBF7C: bc1fl       L_801CBF8C
    if (!c1cs) {
        // 0x801CBF80: lh          $v0, 0x1A($a3)
        ctx->r2 = MEM_H(ctx->r7, 0X1A);
            goto L_801CBF8C;
    }
    goto skip_1;
    // 0x801CBF80: lh          $v0, 0x1A($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X1A);
    skip_1:
    // 0x801CBF84: swc1        $f2, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->f2.u32l;
    // 0x801CBF88: lh          $v0, 0x1A($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X1A);
L_801CBF8C:
    // 0x801CBF8C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CBF90: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801CBF94: bne         $at, $zero, L_801CC1EC
    if (ctx->r1 != 0) {
        // 0x801CBF98: addiu       $v1, $v1, 0x3CF8
        ctx->r3 = ADD32(ctx->r3, 0X3CF8);
            goto L_801CC1EC;
    }
    // 0x801CBF98: addiu       $v1, $v1, 0x3CF8
    ctx->r3 = ADD32(ctx->r3, 0X3CF8);
    // 0x801CBF9C: lh          $t4, 0x2A($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X2A);
    // 0x801CBFA0: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x801CBFA4: bnel        $at, $zero, L_801CC1F0
    if (ctx->r1 != 0) {
        // 0x801CBFA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC1F0;
    }
    goto skip_2;
    // 0x801CBFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801CBFAC: lwc1        $f18, 0x5C($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X5C);
    // 0x801CBFB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBFB4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CBFB8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CBFBC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801CBFC0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CBFC4: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801CBFC8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CBFCC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CBFD0: swc1        $f10, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->f10.u32l;
    // 0x801CBFD4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CBFD8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CBFDC: lwc1        $f16, 0x5C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X5C);
    // 0x801CBFE0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CBFE4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CBFE8: nop

    // 0x801CBFEC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801CBFF0: beql        $t6, $zero, L_801CC040
    if (ctx->r14 == 0) {
        // 0x801CBFF4: mfc1        $t6, $f18
        ctx->r14 = (int32_t)ctx->f18.u32l;
            goto L_801CC040;
    }
    goto skip_3;
    // 0x801CBFF4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x801CBFF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CBFFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CC000: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CC004: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CC008: nop

    // 0x801CC00C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CC010: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CC014: nop

    // 0x801CC018: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801CC01C: bne         $t6, $zero, L_801CC034
    if (ctx->r14 != 0) {
        // 0x801CC020: nop
    
            goto L_801CC034;
    }
    // 0x801CC020: nop

    // 0x801CC024: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x801CC028: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC02C: b           L_801CC04C
    // 0x801CC030: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_801CC04C;
    // 0x801CC030: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_801CC034:
    // 0x801CC034: b           L_801CC04C
    // 0x801CC038: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_801CC04C;
    // 0x801CC038: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801CC03C: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
L_801CC040:
    // 0x801CC040: nop

    // 0x801CC044: bltz        $t6, L_801CC034
    if (SIGNED(ctx->r14) < 0) {
        // 0x801CC048: nop
    
            goto L_801CC034;
    }
    // 0x801CC048: nop

L_801CC04C:
    // 0x801CC04C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x801CC050: addiu       $t8, $t7, 0x28
    ctx->r24 = ADD32(ctx->r15, 0X28);
    // 0x801CC054: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CC058: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CC05C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CC060: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CC064: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CC068: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801CC06C: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x801CC070: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801CC074: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CC078: lwc1        $f8, 0x5C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X5C);
    // 0x801CC07C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801CC080: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CC084: nop

    // 0x801CC088: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CC08C: beql        $t1, $zero, L_801CC0DC
    if (ctx->r9 == 0) {
        // 0x801CC090: mfc1        $t1, $f10
        ctx->r9 = (int32_t)ctx->f10.u32l;
            goto L_801CC0DC;
    }
    goto skip_4;
    // 0x801CC090: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    skip_4:
    // 0x801CC094: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CC098: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CC09C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801CC0A0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CC0A4: nop

    // 0x801CC0A8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801CC0AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CC0B0: nop

    // 0x801CC0B4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CC0B8: bne         $t1, $zero, L_801CC0D0
    if (ctx->r9 != 0) {
        // 0x801CC0BC: nop
    
            goto L_801CC0D0;
    }
    // 0x801CC0BC: nop

    // 0x801CC0C0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x801CC0C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC0C8: b           L_801CC0E8
    // 0x801CC0CC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_801CC0E8;
    // 0x801CC0CC: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_801CC0D0:
    // 0x801CC0D0: b           L_801CC0E8
    // 0x801CC0D4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_801CC0E8;
    // 0x801CC0D4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801CC0D8: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
L_801CC0DC:
    // 0x801CC0DC: nop

    // 0x801CC0E0: bltz        $t1, L_801CC0D0
    if (SIGNED(ctx->r9) < 0) {
        // 0x801CC0E4: nop
    
            goto L_801CC0D0;
    }
    // 0x801CC0E4: nop

L_801CC0E8:
    // 0x801CC0E8: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x801CC0EC: addiu       $t3, $t2, -0x1E
    ctx->r11 = ADD32(ctx->r10, -0X1E);
    // 0x801CC0F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x801CC0F4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801CC0F8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801CC0FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CC100: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801CC104: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    // 0x801CC108: lwc1        $f6, 0x5C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X5C);
    // 0x801CC10C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801CC110: nop

    // 0x801CC114: bc1fl       L_801CC1F0
    if (!c1cs) {
        // 0x801CC118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC1F0;
    }
    goto skip_5;
    // 0x801CC118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x801CC11C: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801CC120: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CC124: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801CC128: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801CC12C: b           L_801CC1EC
    // 0x801CC130: sb          $t4, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r12;
        goto L_801CC1EC;
    // 0x801CC130: sb          $t4, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r12;
L_801CC134:
    // 0x801CC134: addiu       $v1, $v1, 0x3CF8
    ctx->r3 = ADD32(ctx->r3, 0X3CF8);
    // 0x801CC138: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CC13C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC140: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801CC144: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CC148: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CC14C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CC150: nop

    // 0x801CC154: bc1f        L_801CC184
    if (!c1cs) {
        // 0x801CC158: nop
    
            goto L_801CC184;
    }
    // 0x801CC158: nop

    // 0x801CC15C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CC160: nop

    // 0x801CC164: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801CC168: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x801CC16C: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801CC170: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801CC174: nop

    // 0x801CC178: bc1f        L_801CC184
    if (!c1cs) {
        // 0x801CC17C: nop
    
            goto L_801CC184;
    }
    // 0x801CC17C: nop

    // 0x801CC180: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
L_801CC184:
    // 0x801CC184: bnel        $a0, $v0, L_801CC1F0
    if (ctx->r4 != ctx->r2) {
        // 0x801CC188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC1F0;
    }
    goto skip_6;
    // 0x801CC188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x801CC18C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x801CC190: bne         $a0, $v0, L_801CC1C0
    if (ctx->r4 != ctx->r2) {
        // 0x801CC194: nop
    
            goto L_801CC1C0;
    }
    // 0x801CC194: nop

    // 0x801CC198: lw          $t6, 0x14($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X14);
    // 0x801CC19C: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CC1A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CC1A4: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801CC1A8: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x801CC1AC: nop

    // 0x801CC1B0: bc1f        L_801CC1C0
    if (!c1cs) {
        // 0x801CC1B4: nop
    
            goto L_801CC1C0;
    }
    // 0x801CC1B4: nop

    // 0x801CC1B8: b           L_801CC1EC
    // 0x801CC1BC: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
        goto L_801CC1EC;
    // 0x801CC1BC: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
L_801CC1C0:
    // 0x801CC1C0: bnel        $t0, $v0, L_801CC1F0
    if (ctx->r8 != ctx->r2) {
        // 0x801CC1C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC1F0;
    }
    goto skip_7;
    // 0x801CC1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x801CC1C8: lw          $t7, 0x24($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X24);
    // 0x801CC1CC: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CC1D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CC1D4: lwc1        $f0, 0x10($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X10);
    // 0x801CC1D8: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801CC1DC: nop

    // 0x801CC1E0: bc1fl       L_801CC1F0
    if (!c1cs) {
        // 0x801CC1E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC1F0;
    }
    goto skip_8;
    // 0x801CC1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x801CC1E8: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
L_801CC1EC:
    // 0x801CC1EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CC1F0:
    // 0x801CC1F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC1F4: jr          $ra
    // 0x801CC1F8: nop

    TRACE_RETURN()
    return;
    // 0x801CC1F8: nop

;}
RECOMP_FUNC void func_801CBE68_668598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBE68: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CBE6C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801CBE70: jr          $ra
    // 0x801CBE74: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CBE74: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_801CF18C_66B8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF18C: sltiu       $at, $a1, 0xE
    ctx->r1 = ctx->r5 < 0XE ? 1 : 0;
    // 0x801CF190: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF194: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_801CF5B4;
    }
    // 0x801CF194: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801CF198: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801CF19C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CF1A0: addu        $at, $at, $t6
    gpr jr_addend_801CF1A8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CF1A4: lw          $t6, -0x524($at)
    ctx->r14 = ADD32(ctx->r1, -0X524);
    // 0x801CF1A8: jr          $t6
    // 0x801CF1AC: nop

    switch (jr_addend_801CF1A8 >> 2) {
        case 0: goto L_801CF1B0; break;
        case 1: goto L_801CF1FC; break;
        case 2: goto L_801CF250; break;
        case 3: goto L_801CF2A4; break;
        case 4: goto L_801CF2F8; break;
        case 5: goto L_801CF34C; break;
        case 6: goto L_801CF3A0; break;
        case 7: goto L_801CF3F4; break;
        case 8: goto L_801CF5B4; break;
        case 9: goto L_801CF5B4; break;
        case 10: goto L_801CF5B4; break;
        case 11: goto L_801CF448; break;
        case 12: goto L_801CF4C0; break;
        case 13: goto L_801CF538; break;
        default: switch_error(__func__, 0x801CF1A8, 0x801CFADC);
    }
    // 0x801CF1AC: nop

L_801CF1B0:
    // 0x801CF1B0: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF1B4: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF1B8: bne         $at, $zero, L_801CF1C8
    if (ctx->r1 != 0) {
        // 0x801CF1BC: subu        $t8, $v0, $a2
        ctx->r24 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF1C8;
    }
    // 0x801CF1BC: subu        $t8, $v0, $a2
    ctx->r24 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF1C0: sb          $t8, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r24;
    // 0x801CF1C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF1C8:
    // 0x801CF1C8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF1CC: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF1D0: bne         $at, $zero, L_801CF1E0
    if (ctx->r1 != 0) {
        // 0x801CF1D4: subu        $t0, $v0, $a2
        ctx->r8 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF1E0;
    }
    // 0x801CF1D4: subu        $t0, $v0, $a2
    ctx->r8 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF1D8: sb          $t0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r8;
    // 0x801CF1DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF1E0:
    // 0x801CF1E0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF1E4: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF1E8: bne         $at, $zero, L_801CF5B4
    if (ctx->r1 != 0) {
        // 0x801CF1EC: subu        $t2, $v0, $a2
        ctx->r10 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF1EC: subu        $t2, $v0, $a2
    ctx->r10 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF1F0: sb          $t2, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r10;
    // 0x801CF1F4: jr          $ra
    // 0x801CF1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF1F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF1FC:
    // 0x801CF1FC: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF200: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CF204: subu        $t4, $t3, $a2
    ctx->r12 = SUB32(ctx->r11, ctx->r6);
    // 0x801CF208: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801CF20C: beq         $at, $zero, L_801CF21C
    if (ctx->r1 == 0) {
        // 0x801CF210: addu        $t6, $v0, $a2
        ctx->r14 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF21C;
    }
    // 0x801CF210: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF214: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x801CF218: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF21C:
    // 0x801CF21C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF220: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF224: bne         $at, $zero, L_801CF234
    if (ctx->r1 != 0) {
        // 0x801CF228: subu        $t8, $v0, $a2
        ctx->r24 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF234;
    }
    // 0x801CF228: subu        $t8, $v0, $a2
    ctx->r24 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF22C: sb          $t8, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r24;
    // 0x801CF230: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF234:
    // 0x801CF234: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF238: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF23C: bne         $at, $zero, L_801CF5B4
    if (ctx->r1 != 0) {
        // 0x801CF240: subu        $t0, $v0, $a2
        ctx->r8 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF240: subu        $t0, $v0, $a2
    ctx->r8 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF244: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x801CF248: jr          $ra
    // 0x801CF24C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF24C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF250:
    // 0x801CF250: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF254: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF258: bne         $at, $zero, L_801CF268
    if (ctx->r1 != 0) {
        // 0x801CF25C: subu        $t2, $v0, $a2
        ctx->r10 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF268;
    }
    // 0x801CF25C: subu        $t2, $v0, $a2
    ctx->r10 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF260: sb          $t2, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r10;
    // 0x801CF264: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF268:
    // 0x801CF268: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF26C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CF270: subu        $t4, $t3, $a2
    ctx->r12 = SUB32(ctx->r11, ctx->r6);
    // 0x801CF274: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801CF278: beq         $at, $zero, L_801CF288
    if (ctx->r1 == 0) {
        // 0x801CF27C: addu        $t6, $v0, $a2
        ctx->r14 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF288;
    }
    // 0x801CF27C: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF280: sb          $t6, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r14;
    // 0x801CF284: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF288:
    // 0x801CF288: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF28C: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF290: bne         $at, $zero, L_801CF5B4
    if (ctx->r1 != 0) {
        // 0x801CF294: subu        $t8, $v0, $a2
        ctx->r24 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF294: subu        $t8, $v0, $a2
    ctx->r24 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF298: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
    // 0x801CF29C: jr          $ra
    // 0x801CF2A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF2A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF2A4:
    // 0x801CF2A4: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF2A8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801CF2AC: subu        $a1, $t9, $a2
    ctx->r5 = SUB32(ctx->r25, ctx->r6);
    // 0x801CF2B0: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF2B4: beq         $at, $zero, L_801CF2C4
    if (ctx->r1 == 0) {
        // 0x801CF2B8: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF2C4;
    }
    // 0x801CF2B8: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF2BC: sb          $t1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r9;
    // 0x801CF2C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF2C4:
    // 0x801CF2C4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF2C8: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF2CC: beq         $at, $zero, L_801CF2DC
    if (ctx->r1 == 0) {
        // 0x801CF2D0: addu        $t3, $v0, $a2
        ctx->r11 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF2DC;
    }
    // 0x801CF2D0: addu        $t3, $v0, $a2
    ctx->r11 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF2D4: sb          $t3, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r11;
    // 0x801CF2D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF2DC:
    // 0x801CF2DC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF2E0: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF2E4: bne         $at, $zero, L_801CF5B4
    if (ctx->r1 != 0) {
        // 0x801CF2E8: subu        $t5, $v0, $a2
        ctx->r13 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF2E8: subu        $t5, $v0, $a2
    ctx->r13 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF2EC: sb          $t5, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r13;
    // 0x801CF2F0: jr          $ra
    // 0x801CF2F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF2F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF2F8:
    // 0x801CF2F8: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF2FC: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF300: bne         $at, $zero, L_801CF310
    if (ctx->r1 != 0) {
        // 0x801CF304: subu        $t7, $v0, $a2
        ctx->r15 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF310;
    }
    // 0x801CF304: subu        $t7, $v0, $a2
    ctx->r15 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF308: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x801CF30C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF310:
    // 0x801CF310: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF314: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF318: bne         $at, $zero, L_801CF328
    if (ctx->r1 != 0) {
        // 0x801CF31C: subu        $t9, $v0, $a2
        ctx->r25 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF328;
    }
    // 0x801CF31C: subu        $t9, $v0, $a2
    ctx->r25 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF320: sb          $t9, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r25;
    // 0x801CF324: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF328:
    // 0x801CF328: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF32C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801CF330: subu        $t1, $t0, $a2
    ctx->r9 = SUB32(ctx->r8, ctx->r6);
    // 0x801CF334: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x801CF338: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF33C: addu        $t3, $v0, $a2
        ctx->r11 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF33C: addu        $t3, $v0, $a2
    ctx->r11 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF340: sb          $t3, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r11;
    // 0x801CF344: jr          $ra
    // 0x801CF348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF34C:
    // 0x801CF34C: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF350: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801CF354: subu        $a1, $t4, $a2
    ctx->r5 = SUB32(ctx->r12, ctx->r6);
    // 0x801CF358: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF35C: beq         $at, $zero, L_801CF36C
    if (ctx->r1 == 0) {
        // 0x801CF360: addu        $t6, $v0, $a2
        ctx->r14 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF36C;
    }
    // 0x801CF360: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF364: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x801CF368: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF36C:
    // 0x801CF36C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF370: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF374: bne         $at, $zero, L_801CF384
    if (ctx->r1 != 0) {
        // 0x801CF378: subu        $t8, $v0, $a2
        ctx->r24 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF384;
    }
    // 0x801CF378: subu        $t8, $v0, $a2
    ctx->r24 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF37C: sb          $t8, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r24;
    // 0x801CF380: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF384:
    // 0x801CF384: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF388: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF38C: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF390: addu        $t0, $v0, $a2
        ctx->r8 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF390: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF394: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x801CF398: jr          $ra
    // 0x801CF39C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF39C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF3A0:
    // 0x801CF3A0: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF3A4: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF3A8: bne         $at, $zero, L_801CF3B8
    if (ctx->r1 != 0) {
        // 0x801CF3AC: subu        $t2, $v0, $a2
        ctx->r10 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF3B8;
    }
    // 0x801CF3AC: subu        $t2, $v0, $a2
    ctx->r10 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF3B0: sb          $t2, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r10;
    // 0x801CF3B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF3B8:
    // 0x801CF3B8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF3BC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CF3C0: subu        $a1, $t3, $a2
    ctx->r5 = SUB32(ctx->r11, ctx->r6);
    // 0x801CF3C4: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF3C8: beq         $at, $zero, L_801CF3D8
    if (ctx->r1 == 0) {
        // 0x801CF3CC: addu        $t5, $v0, $a2
        ctx->r13 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF3D8;
    }
    // 0x801CF3CC: addu        $t5, $v0, $a2
    ctx->r13 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF3D0: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
    // 0x801CF3D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF3D8:
    // 0x801CF3D8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF3DC: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF3E0: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF3E4: addu        $t7, $v0, $a2
        ctx->r15 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF3E4: addu        $t7, $v0, $a2
    ctx->r15 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF3E8: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x801CF3EC: jr          $ra
    // 0x801CF3F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF3F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF3F4:
    // 0x801CF3F4: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF3F8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801CF3FC: subu        $a1, $t8, $a2
    ctx->r5 = SUB32(ctx->r24, ctx->r6);
    // 0x801CF400: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF404: beq         $at, $zero, L_801CF414
    if (ctx->r1 == 0) {
        // 0x801CF408: addu        $t0, $v0, $a2
        ctx->r8 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF414;
    }
    // 0x801CF408: addu        $t0, $v0, $a2
    ctx->r8 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF40C: sb          $t0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r8;
    // 0x801CF410: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF414:
    // 0x801CF414: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF418: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF41C: beq         $at, $zero, L_801CF42C
    if (ctx->r1 == 0) {
        // 0x801CF420: addu        $t2, $v0, $a2
        ctx->r10 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF42C;
    }
    // 0x801CF420: addu        $t2, $v0, $a2
    ctx->r10 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF424: sb          $t2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r10;
    // 0x801CF428: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF42C:
    // 0x801CF42C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF430: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801CF434: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF438: addu        $t4, $v0, $a2
        ctx->r12 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF438: addu        $t4, $v0, $a2
    ctx->r12 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF43C: sb          $t4, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r12;
    // 0x801CF440: jr          $ra
    // 0x801CF444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF448:
    // 0x801CF448: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF44C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801CF450: subu        $t6, $t5, $a2
    ctx->r14 = SUB32(ctx->r13, ctx->r6);
    // 0x801CF454: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801CF458: beq         $at, $zero, L_801CF468
    if (ctx->r1 == 0) {
        // 0x801CF45C: addu        $t8, $v0, $a2
        ctx->r24 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF468;
    }
    // 0x801CF45C: addu        $t8, $v0, $a2
    ctx->r24 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF460: sb          $t8, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r24;
    // 0x801CF464: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF468:
    // 0x801CF468: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF46C: addiu       $t5, $a2, 0x7F
    ctx->r13 = ADD32(ctx->r6, 0X7F);
    // 0x801CF470: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF474: bne         $at, $zero, L_801CF484
    if (ctx->r1 != 0) {
        // 0x801CF478: subu        $t0, $v0, $a2
        ctx->r8 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF484;
    }
    // 0x801CF478: subu        $t0, $v0, $a2
    ctx->r8 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF47C: sb          $t0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r8;
    // 0x801CF480: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF484:
    // 0x801CF484: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF488: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x801CF48C: subu        $t2, $t1, $a2
    ctx->r10 = SUB32(ctx->r9, ctx->r6);
    // 0x801CF490: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x801CF494: beq         $at, $zero, L_801CF4A8
    if (ctx->r1 == 0) {
        // 0x801CF498: addu        $t4, $v0, $a2
        ctx->r12 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF4A8;
    }
    // 0x801CF498: addu        $t4, $v0, $a2
    ctx->r12 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF49C: sb          $t4, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r12;
    // 0x801CF4A0: jr          $ra
    // 0x801CF4A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF4A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF4A8:
    // 0x801CF4A8: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801CF4AC: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF4B0: subu        $t7, $v0, $a2
        ctx->r15 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF4B0: subu        $t7, $v0, $a2
    ctx->r15 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF4B4: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x801CF4B8: jr          $ra
    // 0x801CF4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF4C0:
    // 0x801CF4C0: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF4C4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801CF4C8: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x801CF4CC: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x801CF4D0: beq         $at, $zero, L_801CF4E0
    if (ctx->r1 == 0) {
        // 0x801CF4D4: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF4E0;
    }
    // 0x801CF4D4: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF4D8: sb          $t1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r9;
    // 0x801CF4DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF4E0:
    // 0x801CF4E0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF4E4: addiu       $t8, $a2, 0x7F
    ctx->r24 = ADD32(ctx->r6, 0X7F);
    // 0x801CF4E8: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x801CF4EC: bne         $at, $zero, L_801CF4FC
    if (ctx->r1 != 0) {
        // 0x801CF4F0: subu        $t3, $v0, $a2
        ctx->r11 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF4FC;
    }
    // 0x801CF4F0: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF4F4: sb          $t3, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r11;
    // 0x801CF4F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF4FC:
    // 0x801CF4FC: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF500: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x801CF504: subu        $t5, $t4, $a2
    ctx->r13 = SUB32(ctx->r12, ctx->r6);
    // 0x801CF508: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x801CF50C: beq         $at, $zero, L_801CF520
    if (ctx->r1 == 0) {
        // 0x801CF510: addu        $t7, $v0, $a2
        ctx->r15 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF520;
    }
    // 0x801CF510: addu        $t7, $v0, $a2
    ctx->r15 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF514: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x801CF518: jr          $ra
    // 0x801CF51C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF51C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF520:
    // 0x801CF520: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801CF524: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF528: subu        $t0, $v0, $a2
        ctx->r8 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF528: subu        $t0, $v0, $a2
    ctx->r8 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF52C: sb          $t0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r8;
    // 0x801CF530: jr          $ra
    // 0x801CF534: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF534: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CF538:
    // 0x801CF538: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x801CF53C: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x801CF540: subu        $t2, $t1, $a2
    ctx->r10 = SUB32(ctx->r9, ctx->r6);
    // 0x801CF544: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x801CF548: beq         $at, $zero, L_801CF560
    if (ctx->r1 == 0) {
        // 0x801CF54C: addiu       $t5, $a2, 0x7F
        ctx->r13 = ADD32(ctx->r6, 0X7F);
            goto L_801CF560;
    }
    // 0x801CF54C: addiu       $t5, $a2, 0x7F
    ctx->r13 = ADD32(ctx->r6, 0X7F);
    // 0x801CF550: addu        $t4, $v0, $a2
    ctx->r12 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF554: sb          $t4, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r12;
    // 0x801CF558: b           L_801CF574
    // 0x801CF55C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_801CF574;
    // 0x801CF55C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF560:
    // 0x801CF560: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801CF564: beq         $at, $zero, L_801CF574
    if (ctx->r1 == 0) {
        // 0x801CF568: subu        $t7, $v0, $a2
        ctx->r15 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF574;
    }
    // 0x801CF568: subu        $t7, $v0, $a2
    ctx->r15 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF56C: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
    // 0x801CF570: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF574:
    // 0x801CF574: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x801CF578: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801CF57C: subu        $t9, $t8, $a2
    ctx->r25 = SUB32(ctx->r24, ctx->r6);
    // 0x801CF580: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x801CF584: beq         $at, $zero, L_801CF594
    if (ctx->r1 == 0) {
        // 0x801CF588: addu        $t1, $v0, $a2
        ctx->r9 = ADD32(ctx->r2, ctx->r6);
            goto L_801CF594;
    }
    // 0x801CF588: addu        $t1, $v0, $a2
    ctx->r9 = ADD32(ctx->r2, ctx->r6);
    // 0x801CF58C: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    // 0x801CF590: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF594:
    // 0x801CF594: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x801CF598: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801CF59C: subu        $t3, $t2, $a2
    ctx->r11 = SUB32(ctx->r10, ctx->r6);
    // 0x801CF5A0: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801CF5A4: beq         $at, $zero, L_801CF5B4
    if (ctx->r1 == 0) {
        // 0x801CF5A8: subu        $t5, $v0, $a2
        ctx->r13 = SUB32(ctx->r2, ctx->r6);
            goto L_801CF5B4;
    }
    // 0x801CF5A8: subu        $t5, $v0, $a2
    ctx->r13 = SUB32(ctx->r2, ctx->r6);
    // 0x801CF5AC: sb          $t5, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r13;
    // 0x801CF5B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CF5B4:
    // 0x801CF5B4: jr          $ra
    // 0x801CF5B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801CF5B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801CC23C_66896C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC23C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CC248: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CC24C: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CC250: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CC254: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CC258: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CC25C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801CC260: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801CC264: lhu         $v0, -0x4F84($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F84);
    // 0x801CC268: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC26C: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x801CC270: beq         $t8, $zero, L_801CC290
    if (ctx->r24 == 0) {
        // 0x801CC274: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_801CC290;
    }
    // 0x801CC274: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x801CC278: lh          $v1, -0x808($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X808);
    // 0x801CC27C: addiu       $v1, $v1, 0x32
    ctx->r3 = ADD32(ctx->r3, 0X32);
    // 0x801CC280: slti        $at, $v1, 0xFA1
    ctx->r1 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
    // 0x801CC284: beq         $at, $zero, L_801CC290
    if (ctx->r1 == 0) {
        // 0x801CC288: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CC290;
    }
    // 0x801CC288: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC28C: sh          $v1, -0x808($at)
    MEM_H(-0X808, ctx->r1) = ctx->r3;
L_801CC290:
    // 0x801CC290: beq         $t9, $zero, L_801CC2B4
    if (ctx->r25 == 0) {
        // 0x801CC294: lui         $v1, 0x801D
        ctx->r3 = S32(0X801D << 16);
            goto L_801CC2B4;
    }
    // 0x801CC294: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC298: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CC29C: lh          $v0, -0x808($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X808);
    // 0x801CC2A0: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x801CC2A4: slti        $at, $v0, 0x7D0
    ctx->r1 = SIGNED(ctx->r2) < 0X7D0 ? 1 : 0;
    // 0x801CC2A8: bne         $at, $zero, L_801CC2B4
    if (ctx->r1 != 0) {
        // 0x801CC2AC: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CC2B4;
    }
    // 0x801CC2AC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC2B0: sh          $v0, -0x808($at)
    MEM_H(-0X808, ctx->r1) = ctx->r2;
L_801CC2B4:
    // 0x801CC2B4: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CC2B8: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x801CC2BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CC2C0: beql        $t0, $at, L_801CC4CC
    if (ctx->r8 == ctx->r1) {
        // 0x801CC2C4: lh          $t2, 0x1A($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X1A);
            goto L_801CC4CC;
    }
    goto skip_0;
    // 0x801CC2C4: lh          $t2, 0x1A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1A);
    skip_0:
    // 0x801CC2C8: lh          $v0, 0x1A($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X1A);
    // 0x801CC2CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CC2D0: beql        $v0, $at, L_801CC4CC
    if (ctx->r2 == ctx->r1) {
        // 0x801CC2D4: lh          $t2, 0x1A($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X1A);
            goto L_801CC4CC;
    }
    goto skip_1;
    // 0x801CC2D4: lh          $t2, 0x1A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1A);
    skip_1:
    // 0x801CC2D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801CC2DC: beql        $a0, $v0, L_801CC4CC
    if (ctx->r4 == ctx->r2) {
        // 0x801CC2E0: lh          $t2, 0x1A($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X1A);
            goto L_801CC4CC;
    }
    goto skip_2;
    // 0x801CC2E0: lh          $t2, 0x1A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1A);
    skip_2:
    // 0x801CC2E4: lh          $v0, 0x2A($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2A);
    // 0x801CC2E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CC2EC: beql        $v0, $at, L_801CC4CC
    if (ctx->r2 == ctx->r1) {
        // 0x801CC2F0: lh          $t2, 0x1A($v1)
        ctx->r10 = MEM_H(ctx->r3, 0X1A);
            goto L_801CC4CC;
    }
    goto skip_3;
    // 0x801CC2F0: lh          $t2, 0x1A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1A);
    skip_3:
    // 0x801CC2F4: beq         $a0, $v0, L_801CC4C8
    if (ctx->r4 == ctx->r2) {
        // 0x801CC2F8: lw          $t1, 0x18($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X18);
            goto L_801CC4C8;
    }
    // 0x801CC2F8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x801CC2FC: lhu         $t2, 0x68($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X68);
    // 0x801CC300: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CC304: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801CC308: bgez        $t2, L_801CC31C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801CC30C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801CC31C;
    }
    // 0x801CC30C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CC310: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CC314: nop

    // 0x801CC318: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801CC31C:
    // 0x801CC31C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801CC320: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CC324: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CC328: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801CC32C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CC330: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801CC334: nop

    // 0x801CC338: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CC33C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801CC340: nop

    // 0x801CC344: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801CC348: beql        $t4, $zero, L_801CC398
    if (ctx->r12 == 0) {
        // 0x801CC34C: mfc1        $t4, $f18
        ctx->r12 = (int32_t)ctx->f18.u32l;
            goto L_801CC398;
    }
    goto skip_4;
    // 0x801CC34C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x801CC350: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CC354: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CC358: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CC35C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801CC360: nop

    // 0x801CC364: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CC368: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801CC36C: nop

    // 0x801CC370: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801CC374: bne         $t4, $zero, L_801CC38C
    if (ctx->r12 != 0) {
        // 0x801CC378: nop
    
            goto L_801CC38C;
    }
    // 0x801CC378: nop

    // 0x801CC37C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x801CC380: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC384: b           L_801CC3A4
    // 0x801CC388: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_801CC3A4;
    // 0x801CC388: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_801CC38C:
    // 0x801CC38C: b           L_801CC3A4
    // 0x801CC390: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_801CC3A4;
    // 0x801CC390: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801CC394: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
L_801CC398:
    // 0x801CC398: nop

    // 0x801CC39C: bltz        $t4, L_801CC38C
    if (SIGNED(ctx->r12) < 0) {
        // 0x801CC3A0: nop
    
            goto L_801CC38C;
    }
    // 0x801CC3A0: nop

L_801CC3A4:
    // 0x801CC3A4: addiu       $a0, $t4, 0x100
    ctx->r4 = ADD32(ctx->r12, 0X100);
    // 0x801CC3A8: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x801CC3AC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CC3B0: sh          $t4, 0x68($t1)
    MEM_H(0X68, ctx->r9) = ctx->r12;
    // 0x801CC3B4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC3B8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x801CC3BC: sh          $t5, 0x3D8C($at)
    MEM_H(0X3D8C, ctx->r1) = ctx->r13;
    // 0x801CC3C0: jal         0x80003EA0
    // 0x801CC3C4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x801CC3C4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801CC3C8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CC3CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CC3D0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC3D4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CC3D8: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CC3DC: lhu         $a0, 0x3D8C($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3D8C);
    // 0x801CC3E0: jal         0x80003E10
    // 0x801CC3E4: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801CC3E4: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    after_1:
    // 0x801CC3E8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CC3EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CC3F0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC3F4: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CC3F8: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801CC3FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CC400: lhu         $t6, 0x16($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X16);
    // 0x801CC404: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC408: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CC40C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CC410: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CC414: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CC418: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CC41C: bgez        $t6, L_801CC430
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801CC420: swc1        $f18, 0x10($a3)
        MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
            goto L_801CC430;
    }
    // 0x801CC420: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
    // 0x801CC424: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CC428: nop

    // 0x801CC42C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_801CC430:
    // 0x801CC430: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801CC434: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CC438: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CC43C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CC440: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801CC444: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801CC448: nop

    // 0x801CC44C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CC450: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801CC454: nop

    // 0x801CC458: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801CC45C: beql        $t8, $zero, L_801CC4AC
    if (ctx->r24 == 0) {
        // 0x801CC460: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_801CC4AC;
    }
    goto skip_5;
    // 0x801CC460: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_5:
    // 0x801CC464: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CC468: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CC46C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CC470: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801CC474: nop

    // 0x801CC478: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CC47C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801CC480: nop

    // 0x801CC484: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801CC488: bne         $t8, $zero, L_801CC4A0
    if (ctx->r24 != 0) {
        // 0x801CC48C: nop
    
            goto L_801CC4A0;
    }
    // 0x801CC48C: nop

    // 0x801CC490: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801CC494: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC498: b           L_801CC4B8
    // 0x801CC49C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801CC4B8;
    // 0x801CC49C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801CC4A0:
    // 0x801CC4A0: b           L_801CC4B8
    // 0x801CC4A4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801CC4B8;
    // 0x801CC4A4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801CC4A8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_801CC4AC:
    // 0x801CC4AC: nop

    // 0x801CC4B0: bltz        $t8, L_801CC4A0
    if (SIGNED(ctx->r24) < 0) {
        // 0x801CC4B4: nop
    
            goto L_801CC4A0;
    }
    // 0x801CC4B4: nop

L_801CC4B8:
    // 0x801CC4B8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801CC4BC: sh          $t8, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r24;
    // 0x801CC4C0: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x801CC4C4: sh          $t0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r8;
L_801CC4C8:
    // 0x801CC4C8: lh          $t2, 0x1A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1A);
L_801CC4CC:
    // 0x801CC4CC: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801CC4D0: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x801CC4D4: beq         $at, $zero, L_801CC8B8
    if (ctx->r1 == 0) {
        // 0x801CC4D8: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_801CC8B8;
    }
    // 0x801CC4D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x801CC4DC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC4E0: addu        $at, $at, $t3
    gpr jr_addend_801CC4E8 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801CC4E4: lw          $t3, -0x5E4($at)
    ctx->r11 = ADD32(ctx->r1, -0X5E4);
    // 0x801CC4E8: jr          $t3
    // 0x801CC4EC: nop

    switch (jr_addend_801CC4E8 >> 2) {
        case 0: goto L_801CC4F0; break;
        case 1: goto L_801CC780; break;
        case 2: goto L_801CC7C8; break;
        case 3: goto L_801CC810; break;
        case 4: goto L_801CC8A8; break;
        default: switch_error(__func__, 0x801CC4E8, 0x801CFA1C);
    }
    // 0x801CC4EC: nop

L_801CC4F0:
    // 0x801CC4F0: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CC4F4: lh          $a2, -0x808($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X808);
    // 0x801CC4F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CC4FC: lh          $a1, 0x18($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X18);
    // 0x801CC500: jal         0x801CF5BC
    // 0x801CC504: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_801CF5BC_66BCEC(rdram, ctx);
        goto after_2;
    // 0x801CC504: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x801CC508: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC50C: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CC510: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    // 0x801CC514: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CC518: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC51C: bne         $v0, $at, L_801CC578
    if (ctx->r2 != ctx->r1) {
        // 0x801CC520: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_801CC578;
    }
    // 0x801CC520: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801CC524: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x801CC528: addiu       $t1, $t1, 0x1734
    ctx->r9 = ADD32(ctx->r9, 0X1734);
    // 0x801CC52C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CC530: addu        $t4, $t1, $at
    ctx->r12 = ADD32(ctx->r9, ctx->r1);
    // 0x801CC534: addiu       $t5, $zero, 0x4D6
    ctx->r13 = ADD32(0, 0X4D6);
    // 0x801CC538: sw          $t4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r12;
    // 0x801CC53C: sh          $t5, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r13;
    // 0x801CC540: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801CC544: jal         0x80014218
    // 0x801CC548: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_3;
    // 0x801CC548: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x801CC54C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC550: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CC554: lh          $t6, 0x1A($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X1A);
    // 0x801CC558: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC55C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CC560: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x801CC564: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801CC568: sh          $t7, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r15;
    // 0x801CC56C: sh          $t8, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r24;
    // 0x801CC570: b           L_801CC8B8
    // 0x801CC574: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CC8B8;
    // 0x801CC574: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CC578:
    // 0x801CC578: bne         $a1, $v0, L_801CC8B8
    if (ctx->r5 != ctx->r2) {
        // 0x801CC57C: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CC8B8;
    }
    // 0x801CC57C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC580: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CC584: lwc1        $f14, -0x800($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X800);
    // 0x801CC588: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CC58C: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CC590: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CC594: nop

    // 0x801CC598: bc1fl       L_801CC66C
    if (!c1cs) {
        // 0x801CC59C: lhu         $v0, 0x16($a3)
        ctx->r2 = MEM_HU(ctx->r7, 0X16);
            goto L_801CC66C;
    }
    goto skip_6;
    // 0x801CC59C: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
    skip_6:
    // 0x801CC5A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CC5A4: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CC5A8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC5AC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801CC5B0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801CC5B4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x801CC5B8: bc1fl       L_801CC5D0
    if (!c1cs) {
        // 0x801CC5BC: sub.s       $f14, $f12, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_801CC5D0;
    }
    goto skip_7;
    // 0x801CC5BC: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    skip_7:
    // 0x801CC5C0: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x801CC5C4: b           L_801CC5D0
    // 0x801CC5C8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801CC5D0;
    // 0x801CC5C8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801CC5CC: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
L_801CC5D0:
    // 0x801CC5D0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CC5D4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801CC5D8: bc1f        L_801CC5EC
    if (!c1cs) {
        // 0x801CC5DC: nop
    
            goto L_801CC5EC;
    }
    // 0x801CC5DC: nop

    // 0x801CC5E0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC5E4: b           L_801CC5F0
    // 0x801CC5E8: sw          $a1, 0x3D94($at)
    MEM_W(0X3D94, ctx->r1) = ctx->r5;
        goto L_801CC5F0;
    // 0x801CC5E8: sw          $a1, 0x3D94($at)
    MEM_W(0X3D94, ctx->r1) = ctx->r5;
L_801CC5EC:
    // 0x801CC5EC: sw          $t9, 0x3D94($at)
    MEM_W(0X3D94, ctx->r1) = ctx->r25;
L_801CC5F0:
    // 0x801CC5F0: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CC5F4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC5F8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801CC5FC: nop

    // 0x801CC600: bc1f        L_801CC618
    if (!c1cs) {
        // 0x801CC604: nop
    
            goto L_801CC618;
    }
    // 0x801CC604: nop

    // 0x801CC608: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x801CC60C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC610: b           L_801CC61C
    // 0x801CC614: swc1        $f4, -0x804($at)
    MEM_W(-0X804, ctx->r1) = ctx->f4.u32l;
        goto L_801CC61C;
    // 0x801CC614: swc1        $f4, -0x804($at)
    MEM_W(-0X804, ctx->r1) = ctx->f4.u32l;
L_801CC618:
    // 0x801CC618: swc1        $f0, -0x804($at)
    MEM_W(-0X804, ctx->r1) = ctx->f0.u32l;
L_801CC61C:
    // 0x801CC61C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CC620: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC624: bc1f        L_801CC638
    if (!c1cs) {
        // 0x801CC628: nop
    
            goto L_801CC638;
    }
    // 0x801CC628: nop

    // 0x801CC62C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC630: b           L_801CC63C
    // 0x801CC634: sw          $a1, 0x3D90($at)
    MEM_W(0X3D90, ctx->r1) = ctx->r5;
        goto L_801CC63C;
    // 0x801CC634: sw          $a1, 0x3D90($at)
    MEM_W(0X3D90, ctx->r1) = ctx->r5;
L_801CC638:
    // 0x801CC638: sw          $t0, 0x3D90($at)
    MEM_W(0X3D90, ctx->r1) = ctx->r8;
L_801CC63C:
    // 0x801CC63C: lw          $t2, 0x24($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X24);
    // 0x801CC640: lw          $t3, 0x14($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X14);
    // 0x801CC644: lwc1        $f6, 0x10($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X10);
    // 0x801CC648: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x801CC64C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801CC650: nop

    // 0x801CC654: bc1fl       L_801CC668
    if (!c1cs) {
        // 0x801CC658: sw          $t1, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r9;
            goto L_801CC668;
    }
    goto skip_8;
    // 0x801CC658: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    skip_8:
    // 0x801CC65C: b           L_801CC668
    // 0x801CC660: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
        goto L_801CC668;
    // 0x801CC660: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x801CC664: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
L_801CC668:
    // 0x801CC668: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
L_801CC66C:
    // 0x801CC66C: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x801CC670: beq         $at, $zero, L_801CC694
    if (ctx->r1 == 0) {
        // 0x801CC674: addiu       $a0, $v0, 0xC
        ctx->r4 = ADD32(ctx->r2, 0XC);
            goto L_801CC694;
    }
    // 0x801CC674: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    // 0x801CC678: addiu       $a0, $v0, -0xC
    ctx->r4 = ADD32(ctx->r2, -0XC);
    // 0x801CC67C: blez        $a0, L_801CC68C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x801CC680: nop
    
            goto L_801CC68C;
    }
    // 0x801CC680: nop

    // 0x801CC684: b           L_801CC6AC
    // 0x801CC688: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
        goto L_801CC6AC;
    // 0x801CC688: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
L_801CC68C:
    // 0x801CC68C: b           L_801CC6AC
    // 0x801CC690: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
        goto L_801CC6AC;
    // 0x801CC690: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CC694:
    // 0x801CC694: slti        $at, $a0, 0x3FF
    ctx->r1 = SIGNED(ctx->r4) < 0X3FF ? 1 : 0;
    // 0x801CC698: beql        $at, $zero, L_801CC6AC
    if (ctx->r1 == 0) {
        // 0x801CC69C: sh          $zero, 0x16($a3)
        MEM_H(0X16, ctx->r7) = 0;
            goto L_801CC6AC;
    }
    goto skip_9;
    // 0x801CC69C: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
    skip_9:
    // 0x801CC6A0: b           L_801CC6AC
    // 0x801CC6A4: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
        goto L_801CC6AC;
    // 0x801CC6A4: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
    // 0x801CC6A8: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CC6AC:
    // 0x801CC6AC: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CC6B0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC6B4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CC6B8: nop

    // 0x801CC6BC: bc1f        L_801CC730
    if (!c1cs) {
        // 0x801CC6C0: nop
    
            goto L_801CC730;
    }
    // 0x801CC6C0: nop

    // 0x801CC6C4: lw          $t4, 0x3D94($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3D94);
    // 0x801CC6C8: cvt.d.s     $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.d = CVT_D_S(ctx->f12.fl);
    // 0x801CC6CC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC6D0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x801CC6D4: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CC6D8: cvt.d.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.d = CVT_D_W(ctx->f10.u32l);
    // 0x801CC6DC: add.d       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f0.d + ctx->f0.d;
    // 0x801CC6E0: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801CC6E4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CC6E8: swc1        $f6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f6.u32l;
    // 0x801CC6EC: lwc1        $f16, -0x804($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X804);
    // 0x801CC6F0: lw          $t5, 0x3D90($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3D90);
    // 0x801CC6F4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC6F8: div.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f14.fl);
    // 0x801CC6FC: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x801CC700: nop

    // 0x801CC704: cvt.d.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.d = CVT_D_W(ctx->f8.u32l);
    // 0x801CC708: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CC70C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC710: add.d       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f2.d + ctx->f2.d;
    // 0x801CC714: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801CC718: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801CC71C: sub.d       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f16.d - ctx->f6.d;
    // 0x801CC720: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801CC724: swc1        $f10, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f10.u32l;
    // 0x801CC728: b           L_801CC8B8
    // 0x801CC72C: swc1        $f14, -0x800($at)
    MEM_W(-0X800, ctx->r1) = ctx->f14.u32l;
        goto L_801CC8B8;
    // 0x801CC72C: swc1        $f14, -0x800($at)
    MEM_W(-0X800, ctx->r1) = ctx->f14.u32l;
L_801CC730:
    // 0x801CC730: swc1        $f14, -0x800($at)
    MEM_W(-0X800, ctx->r1) = ctx->f14.u32l;
    // 0x801CC734: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x801CC738: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CC73C: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CC740: bne         $a1, $t6, L_801CC760
    if (ctx->r5 != ctx->r14) {
        // 0x801CC744: nop
    
            goto L_801CC760;
    }
    // 0x801CC744: nop

    // 0x801CC748: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CC74C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CC750: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CC754: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801CC758: b           L_801CC8B8
    // 0x801CC75C: sb          $t7, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r15;
        goto L_801CC8B8;
    // 0x801CC75C: sb          $t7, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r15;
L_801CC760:
    // 0x801CC760: lw          $t9, 0x3D88($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3D88);
    // 0x801CC764: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x801CC768: beql        $t0, $zero, L_801CC8BC
    if (ctx->r8 == 0) {
        // 0x801CC76C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC8BC;
    }
    goto skip_10;
    // 0x801CC76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_10:
    // 0x801CC770: jal         0x80035020
    // 0x801CC774: nop

    func_80035020_35C20(rdram, ctx);
        goto after_4;
    // 0x801CC774: nop

    after_4:
    // 0x801CC778: b           L_801CC8BC
    // 0x801CC77C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CC8BC;
    // 0x801CC77C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CC780:
    // 0x801CC780: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CC784: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC788: ldc1        $f16, -0x5D0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5D0);
    // 0x801CC78C: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CC790: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CC794: add.d       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f8.d + ctx->f16.d;
    // 0x801CC798: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CC79C: cvt.s.d     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f18.fl = CVT_S_D(ctx->f6.d);
    // 0x801CC7A0: swc1        $f18, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f18.u32l;
    // 0x801CC7A4: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CC7A8: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x801CC7AC: nop

    // 0x801CC7B0: bc1fl       L_801CC8BC
    if (!c1cs) {
        // 0x801CC7B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC8BC;
    }
    goto skip_11;
    // 0x801CC7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_11:
    // 0x801CC7B8: lh          $t2, 0x1A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X1A);
    // 0x801CC7BC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801CC7C0: b           L_801CC8B8
    // 0x801CC7C4: sh          $t3, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r11;
        goto L_801CC8B8;
    // 0x801CC7C4: sh          $t3, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r11;
L_801CC7C8:
    // 0x801CC7C8: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CC7CC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC7D0: ldc1        $f6, -0x5C8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5C8);
    // 0x801CC7D4: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801CC7D8: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x801CC7DC: add.d       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f16.d + ctx->f6.d;
    // 0x801CC7E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CC7E4: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801CC7E8: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    // 0x801CC7EC: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CC7F0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x801CC7F4: nop

    // 0x801CC7F8: bc1fl       L_801CC8BC
    if (!c1cs) {
        // 0x801CC7FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC8BC;
    }
    goto skip_12;
    // 0x801CC7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_12:
    // 0x801CC800: lh          $t1, 0x1A($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X1A);
    // 0x801CC804: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x801CC808: b           L_801CC8B8
    // 0x801CC80C: sh          $t4, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r12;
        goto L_801CC8B8;
    // 0x801CC80C: sh          $t4, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r12;
L_801CC810:
    // 0x801CC810: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CC814: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC818: ldc1        $f18, -0x5C0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5C0);
    // 0x801CC81C: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801CC820: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x801CC824: add.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f6.d + ctx->f18.d;
    // 0x801CC828: addiu       $t7, $t7, 0x1AAC
    ctx->r15 = ADD32(ctx->r15, 0X1AAC);
    // 0x801CC82C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CC830: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801CC834: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801CC838: addiu       $t9, $zero, 0x4D6
    ctx->r25 = ADD32(0, 0X4D6);
    // 0x801CC83C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CC840: swc1        $f4, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f4.u32l;
    // 0x801CC844: lh          $t5, 0x18($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X18);
    // 0x801CC848: lwc1        $f6, 0x28($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CC84C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x801CC850: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801CC854: nop

    // 0x801CC858: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CC85C: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x801CC860: nop

    // 0x801CC864: bc1fl       L_801CC8BC
    if (!c1cs) {
        // 0x801CC868: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CC8BC;
    }
    goto skip_13;
    // 0x801CC868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_13:
    // 0x801CC86C: sw          $t8, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r24;
    // 0x801CC870: sh          $t9, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r25;
    // 0x801CC874: jal         0x80014218
    // 0x801CC878: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80014218_14E18(rdram, ctx);
        goto after_5;
    // 0x801CC878: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_5:
    // 0x801CC87C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC880: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CC884: lh          $t0, 0x1A($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X1A);
    // 0x801CC888: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC88C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CC890: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x801CC894: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x801CC898: sh          $t2, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r10;
    // 0x801CC89C: sh          $t3, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r11;
    // 0x801CC8A0: b           L_801CC8B8
    // 0x801CC8A4: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CC8B8;
    // 0x801CC8A4: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CC8A8:
    // 0x801CC8A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CC8AC: lh          $a1, 0x18($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X18);
    // 0x801CC8B0: jal         0x801CF5BC
    // 0x801CC8B4: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    func_801CF5BC_66BCEC(rdram, ctx);
        goto after_6;
    // 0x801CC8B4: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    after_6:
L_801CC8B8:
    // 0x801CC8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CC8BC:
    // 0x801CC8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC8C0: jr          $ra
    // 0x801CC8C4: nop

    TRACE_RETURN()
    return;
    // 0x801CC8C4: nop

;}
RECOMP_FUNC void func_801CB460_667B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801CB464: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x801CB468: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x801CB46C: addiu       $s0, $s0, -0x4E0
    ctx->r16 = ADD32(ctx->r16, -0X4E0);
    // 0x801CB470: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801CB474: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CB478: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801CB47C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801CB480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CB484: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801CB488: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801CB48C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801CB490: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x801CB494: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x801CB498: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x801CB49C: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x801CB4A0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x801CB4A4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x801CB4A8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x801CB4AC: jal         0x8003FF50
    // 0x801CB4B0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB4B0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    after_0:
    // 0x801CB4B4: jal         0x80013940
    // 0x801CB4B8: nop

    func_80013940_14540(rdram, ctx);
        goto after_1;
    // 0x801CB4B8: nop

    after_1:
    // 0x801CB4BC: jal         0x80038BC8
    // 0x801CB4C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801CB4C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x801CB4C4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB4C8: jal         0x80013AC4
    // 0x801CB4CC: addiu       $a0, $a0, -0x810
    ctx->r4 = ADD32(ctx->r4, -0X810);
    func_80013AC4_146C4(rdram, ctx);
        goto after_3;
    // 0x801CB4CC: addiu       $a0, $a0, -0x810
    ctx->r4 = ADD32(ctx->r4, -0X810);
    after_3:
    // 0x801CB4D0: jal         0x801CED80
    // 0x801CB4D4: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    func_801CED80_66B4B0(rdram, ctx);
        goto after_4;
    // 0x801CB4D4: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    after_4:
    // 0x801CB4D8: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB4DC: addiu       $v0, $v0, -0x9D0
    ctx->r2 = ADD32(ctx->r2, -0X9D0);
    // 0x801CB4E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CB4E4: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CB4E8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801CB4EC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801CB4F0: addiu       $t6, $t6, 0x3CF8
    ctx->r14 = ADD32(ctx->r14, 0X3CF8);
    // 0x801CB4F4: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x801CB4F8: addiu       $t8, $v0, 0x60
    ctx->r24 = ADD32(ctx->r2, 0X60);
L_801CB4FC:
    // 0x801CB4FC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801CB500: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801CB504: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801CB508: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801CB50C: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x801CB510: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801CB514: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x801CB518: bne         $t9, $t8, L_801CB4FC
    if (ctx->r25 != ctx->r24) {
        // 0x801CB51C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801CB4FC;
    }
    // 0x801CB51C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801CB520: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB524: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801CB528: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB52C: addu        $a1, $v0, $at
    ctx->r5 = ADD32(ctx->r2, ctx->r1);
    // 0x801CB530: addiu       $a0, $a0, -0x4198
    ctx->r4 = ADD32(ctx->r4, -0X4198);
    // 0x801CB534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB538: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CB53C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CB540: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB544: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB548: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB54C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CB550: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CB554: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CB558: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CB55C: jal         0x80035728
    // 0x801CB560: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035728_36328(rdram, ctx);
        goto after_5;
    // 0x801CB560: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_5:
    // 0x801CB564: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB568: addiu       $a1, $a1, 0x3CF8
    ctx->r5 = ADD32(ctx->r5, 0X3CF8);
    // 0x801CB56C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB570: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801CB574: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB578: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB57C: addiu       $a0, $a0, -0x4188
    ctx->r4 = ADD32(ctx->r4, -0X4188);
    // 0x801CB580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB584: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CB588: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CB58C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB590: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB594: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB598: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CB59C: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CB5A0: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CB5A4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CB5A8: jal         0x80035854
    // 0x801CB5AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_6;
    // 0x801CB5AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_6:
    // 0x801CB5B0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB5B4: addiu       $a1, $a1, -0x970
    ctx->r5 = ADD32(ctx->r5, -0X970);
    // 0x801CB5B8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB5BC: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x801CB5C0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB5C4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB5C8: addiu       $a0, $a0, -0x3E04
    ctx->r4 = ADD32(ctx->r4, -0X3E04);
    // 0x801CB5CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB5D0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CB5D4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CB5D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB5DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB5E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB5E4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CB5E8: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CB5EC: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CB5F0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CB5F4: jal         0x80035854
    // 0x801CB5F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_7;
    // 0x801CB5F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_7:
    // 0x801CB5FC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB600: addiu       $a1, $a1, -0x96C
    ctx->r5 = ADD32(ctx->r5, -0X96C);
    // 0x801CB604: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB608: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x801CB60C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB610: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB614: addiu       $a0, $a0, -0x3DF4
    ctx->r4 = ADD32(ctx->r4, -0X3DF4);
    // 0x801CB618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB61C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CB620: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CB624: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB628: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB62C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB630: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CB634: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CB638: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CB63C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CB640: jal         0x80035854
    // 0x801CB644: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_8;
    // 0x801CB644: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_8:
    // 0x801CB648: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB64C: addiu       $a1, $a1, -0x962
    ctx->r5 = ADD32(ctx->r5, -0X962);
    // 0x801CB650: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB654: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x801CB658: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB65C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB660: addiu       $a0, $a0, -0x3DE4
    ctx->r4 = ADD32(ctx->r4, -0X3DE4);
    // 0x801CB664: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB668: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CB66C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CB670: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB674: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB678: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB67C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CB680: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CB684: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CB688: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CB68C: jal         0x80035854
    // 0x801CB690: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_9;
    // 0x801CB690: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_9:
    // 0x801CB694: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB698: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB69C: addiu       $a1, $a1, -0x956
    ctx->r5 = ADD32(ctx->r5, -0X956);
    // 0x801CB6A0: addiu       $a0, $a0, -0x3DD4
    ctx->r4 = ADD32(ctx->r4, -0X3DD4);
    // 0x801CB6A4: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x801CB6A8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB6AC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB6B0: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    // 0x801CB6B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB6B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CB6BC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CB6C0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB6C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB6C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB6CC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CB6D0: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CB6D4: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CB6D8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CB6DC: jal         0x80035854
    // 0x801CB6E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_10;
    // 0x801CB6E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_10:
    // 0x801CB6E4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB6E8: addiu       $a1, $a1, -0x950
    ctx->r5 = ADD32(ctx->r5, -0X950);
    // 0x801CB6EC: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x801CB6F0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB6F4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x801CB6F8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB6FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB700: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CB704: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CB708: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB70C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB710: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB714: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CB718: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CB71C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CB720: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801CB724: jal         0x80035854
    // 0x801CB728: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_11;
    // 0x801CB728: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_11:
    // 0x801CB72C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB730: lwc1        $f0, -0x608($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X608);
    // 0x801CB734: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801CB738: addiu       $a1, $a1, 0xC1C
    ctx->r5 = ADD32(ctx->r5, 0XC1C);
    // 0x801CB73C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CB740: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB744: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CB748: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CB74C: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801CB750: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CB754: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x801CB758: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CB75C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB760: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB764: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB768: addiu       $t2, $zero, 0x4D6
    ctx->r10 = ADD32(0, 0X4D6);
    // 0x801CB76C: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x801CB770: sh          $t1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r9;
    // 0x801CB774: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801CB778: addiu       $a2, $a2, -0x940
    ctx->r6 = ADD32(ctx->r6, -0X940);
    // 0x801CB77C: addiu       $a0, $a0, -0x3DC4
    ctx->r4 = ADD32(ctx->r4, -0X3DC4);
    // 0x801CB780: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB784: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB788: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB78C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CB790: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CB794: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CB798: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CB79C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CB7A0: jal         0x80035854
    // 0x801CB7A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_12;
    // 0x801CB7A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x801CB7A8: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB7AC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB7B0: lwc1        $f0, -0x604($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X604);
    // 0x801CB7B4: addiu       $v1, $v1, 0x3D84
    ctx->r3 = ADD32(ctx->r3, 0X3D84);
    // 0x801CB7B8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CB7BC: lw          $t4, 0x18($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X18);
    // 0x801CB7C0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801CB7C4: addiu       $a1, $a1, 0x2910
    ctx->r5 = ADD32(ctx->r5, 0X2910);
    // 0x801CB7C8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CB7CC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB7D0: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CB7D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CB7D8: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x801CB7DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CB7E0: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x801CB7E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CB7E8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB7EC: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB7F0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB7F4: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x801CB7F8: addiu       $t9, $zero, 0x4D6
    ctx->r25 = ADD32(0, 0X4D6);
    // 0x801CB7FC: sh          $t5, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r13;
    // 0x801CB800: sh          $t7, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r15;
    // 0x801CB804: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801CB808: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CB80C: addiu       $a2, $a2, -0x940
    ctx->r6 = ADD32(ctx->r6, -0X940);
    // 0x801CB810: addiu       $a0, $a0, -0x3738
    ctx->r4 = ADD32(ctx->r4, -0X3738);
    // 0x801CB814: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CB818: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB81C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB820: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CB824: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CB828: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CB82C: sw          $t4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r12;
    // 0x801CB830: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801CB834: jal         0x80035854
    // 0x801CB838: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_13;
    // 0x801CB838: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x801CB83C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB840: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB844: lwc1        $f0, -0x600($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X600);
    // 0x801CB848: addiu       $v1, $v1, 0x3D88
    ctx->r3 = ADD32(ctx->r3, 0X3D88);
    // 0x801CB84C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CB850: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x801CB854: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801CB858: addiu       $a1, $a1, 0x1BC0
    ctx->r5 = ADD32(ctx->r5, 0X1BC0);
    // 0x801CB85C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CB860: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB864: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CB868: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CB86C: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801CB870: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CB874: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x801CB878: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801CB87C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB880: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB884: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB888: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CB88C: sh          $t1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r9;
    // 0x801CB890: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
    // 0x801CB894: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801CB898: addiu       $a2, $a2, -0x940
    ctx->r6 = ADD32(ctx->r6, -0X940);
    // 0x801CB89C: addiu       $a0, $a0, -0x3134
    ctx->r4 = ADD32(ctx->r4, -0X3134);
    // 0x801CB8A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CB8A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB8A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB8AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB8B0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CB8B4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CB8B8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CB8BC: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    // 0x801CB8C0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CB8C4: jal         0x80035854
    // 0x801CB8C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_14;
    // 0x801CB8C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x801CB8CC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB8D0: lwc1        $f0, -0x5FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5FC);
    // 0x801CB8D4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801CB8D8: addiu       $a1, $a1, 0x3720
    ctx->r5 = ADD32(ctx->r5, 0X3720);
    // 0x801CB8DC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CB8E0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB8E4: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CB8E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CB8EC: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x801CB8F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CB8F4: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801CB8F8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CB8FC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB900: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB904: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB908: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x801CB90C: addiu       $t8, $zero, 0x4D6
    ctx->r24 = ADD32(0, 0X4D6);
    // 0x801CB910: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    // 0x801CB914: sh          $t5, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r13;
    // 0x801CB918: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801CB91C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801CB920: addiu       $a2, $a2, -0x940
    ctx->r6 = ADD32(ctx->r6, -0X940);
    // 0x801CB924: addiu       $a0, $a0, -0x2B1C
    ctx->r4 = ADD32(ctx->r4, -0X2B1C);
    // 0x801CB928: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB92C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB930: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CB934: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CB938: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CB93C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CB940: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CB944: jal         0x80035854
    // 0x801CB948: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_15;
    // 0x801CB948: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x801CB94C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB950: lwc1        $f0, -0x5F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5F8);
    // 0x801CB954: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801CB958: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x801CB95C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CB960: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB964: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CB968: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CB96C: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CB970: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CB974: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB978: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB97C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CB980: addiu       $t9, $zero, 0x4D6
    ctx->r25 = ADD32(0, 0X4D6);
    // 0x801CB984: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801CB988: addiu       $a2, $a2, -0x8B0
    ctx->r6 = ADD32(ctx->r6, -0X8B0);
    // 0x801CB98C: addiu       $a0, $a0, -0x2558
    ctx->r4 = ADD32(ctx->r4, -0X2558);
    // 0x801CB990: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB994: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB998: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB99C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CB9A0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CB9A4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CB9A8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CB9AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801CB9B0: jal         0x80035854
    // 0x801CB9B4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_16;
    // 0x801CB9B4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x801CB9B8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9BC: lwc1        $f0, -0x5F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5F4);
    // 0x801CB9C0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CB9C4: addiu       $a1, $a1, 0x2E60
    ctx->r5 = ADD32(ctx->r5, 0X2E60);
    // 0x801CB9C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CB9CC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB9D0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9D4: lwc1        $f16, -0x5F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5F0);
    // 0x801CB9D8: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CB9DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CB9E0: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x801CB9E4: addiu       $s0, $s0, -0x220C
    ctx->r16 = ADD32(ctx->r16, -0X220C);
    // 0x801CB9E8: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB9EC: addiu       $t6, $zero, 0x4D6
    ctx->r14 = ADD32(0, 0X4D6);
    // 0x801CB9F0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801CB9F4: addiu       $a2, $a2, -0x860
    ctx->r6 = ADD32(ctx->r6, -0X860);
    // 0x801CB9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CB9FC: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x801CBA00: lui         $a3, 0xC150
    ctx->r7 = S32(0XC150 << 16);
    // 0x801CBA04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CBA08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBA0C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBA10: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CBA14: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CBA18: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CBA1C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CBA20: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CBA24: jal         0x80035854
    // 0x801CBA28: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_17;
    // 0x801CBA28: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x801CBA2C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA30: lwc1        $f0, -0x5EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5EC);
    // 0x801CBA34: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA38: lwc1        $f4, -0x5E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5E8);
    // 0x801CBA3C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CBA40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CBA44: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBA48: addiu       $t0, $zero, 0x4D6
    ctx->r8 = ADD32(0, 0X4D6);
    // 0x801CBA4C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CBA50: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801CBA54: addiu       $a2, $a2, -0x860
    ctx->r6 = ADD32(ctx->r6, -0X860);
    // 0x801CBA58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CBA5C: lui         $a3, 0x4150
    ctx->r7 = S32(0X4150 << 16);
    // 0x801CBA60: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CBA64: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBA68: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBA6C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CBA70: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CBA74: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CBA78: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CBA7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CBA80: jal         0x80035854
    // 0x801CBA84: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_18;
    // 0x801CBA84: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_18:
    // 0x801CBA88: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801CBA8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CBA90: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CBA94: addiu       $a1, $a1, 0x2C40
    ctx->r5 = ADD32(ctx->r5, 0X2C40);
    // 0x801CBA98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBA9C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CBAA0: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CBAA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CBAA8: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CBAAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CBAB0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBAB4: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBAB8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CBABC: addiu       $t1, $zero, 0x300
    ctx->r9 = ADD32(0, 0X300);
    // 0x801CBAC0: addiu       $t2, $zero, 0x4D6
    ctx->r10 = ADD32(0, 0X4D6);
    // 0x801CBAC4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801CBAC8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801CBACC: addiu       $a2, $a2, -0x940
    ctx->r6 = ADD32(ctx->r6, -0X940);
    // 0x801CBAD0: addiu       $a0, $a0, -0x2034
    ctx->r4 = ADD32(ctx->r4, -0X2034);
    // 0x801CBAD4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBAD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBADC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CBAE0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CBAE4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CBAE8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CBAEC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801CBAF0: jal         0x80035854
    // 0x801CBAF4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_19;
    // 0x801CBAF4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_19:
    // 0x801CBAF8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBAFC: addiu       $a1, $a1, -0x948
    ctx->r5 = ADD32(ctx->r5, -0X948);
    // 0x801CBB00: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBB04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CBB08: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801CBB0C: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CBB10: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x801CBB14: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CBB18: addiu       $a0, $a0, -0x1520
    ctx->r4 = ADD32(ctx->r4, -0X1520);
    // 0x801CBB1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CBB20: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x801CBB24: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801CBB28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CBB2C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CBB30: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CBB34: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801CBB38: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801CBB3C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801CBB40: jal         0x80035854
    // 0x801CBB44: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_20;
    // 0x801CBB44: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_20:
    // 0x801CBB48: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBB4C: addiu       $a0, $a0, -0x1F1C
    ctx->r4 = ADD32(ctx->r4, -0X1F1C);
    // 0x801CBB50: jal         0x80034DD8
    // 0x801CBB54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_21;
    // 0x801CBB54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x801CBB58: jal         0x80038BC8
    // 0x801CBB5C: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_80038BC8_397C8(rdram, ctx);
        goto after_22;
    // 0x801CBB5C: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_22:
    // 0x801CBB60: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBB64: jal         0x8003521C
    // 0x801CBB68: addiu       $a0, $a0, -0x447C
    ctx->r4 = ADD32(ctx->r4, -0X447C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_23;
    // 0x801CBB68: addiu       $a0, $a0, -0x447C
    ctx->r4 = ADD32(ctx->r4, -0X447C);
    after_23:
    // 0x801CBB6C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801CBB70: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801CBB74: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801CBB78: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801CBB7C: jr          $ra
    // 0x801CBB80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801CBB80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801CE8BC_66AFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE8BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CE8C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CE8C4: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CE8C8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x801CE8CC: addiu       $a3, $a3, -0x4E0
    ctx->r7 = ADD32(ctx->r7, -0X4E0);
    // 0x801CE8D0: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CE8D4: lh          $t7, 0x6($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X6);
    // 0x801CE8D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CE8DC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801CE8E0: bnel        $t7, $at, L_801CE908
    if (ctx->r15 != ctx->r1) {
        // 0x801CE8E4: lh          $t8, 0x0($a3)
        ctx->r24 = MEM_H(ctx->r7, 0X0);
            goto L_801CE908;
    }
    goto skip_0;
    // 0x801CE8E4: lh          $t8, 0x0($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X0);
    skip_0:
    // 0x801CE8E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CE8EC: jal         0x80035020
    // 0x801CE8F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035020_35C20(rdram, ctx);
        goto after_0;
    // 0x801CE8F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CE8F4: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CE8F8: addiu       $a3, $a3, -0x4E0
    ctx->r7 = ADD32(ctx->r7, -0X4E0);
    // 0x801CE8FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801CE900: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CE904: lh          $t8, 0x0($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X0);
L_801CE908:
    // 0x801CE908: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CE90C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CE910: bne         $t8, $at, L_801CE944
    if (ctx->r24 != ctx->r1) {
        // 0x801CE914: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_801CE944;
    }
    // 0x801CE914: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CE918: lhu         $v0, 0x3DBC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3DBC);
    // 0x801CE91C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CE920: lhu         $v1, -0x7CC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7CC);
    // 0x801CE924: sh          $v0, 0x68($a2)
    MEM_H(0X68, ctx->r6) = ctx->r2;
    // 0x801CE928: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE92C: addiu       $t9, $v0, 0x28
    ctx->r25 = ADD32(ctx->r2, 0X28);
    // 0x801CE930: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
    // 0x801CE934: sh          $t9, 0x3DBC($at)
    MEM_H(0X3DBC, ctx->r1) = ctx->r25;
    // 0x801CE938: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CE93C: addiu       $t0, $v1, -0x28
    ctx->r8 = ADD32(ctx->r3, -0X28);
    // 0x801CE940: sh          $t0, -0x7CC($at)
    MEM_H(-0X7CC, ctx->r1) = ctx->r8;
L_801CE944:
    // 0x801CE944: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801CE948: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CE94C: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CE950: lhu         $t1, 0x68($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X68);
    // 0x801CE954: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CE958: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801CE95C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CE960: nop

    // 0x801CE964: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CE968: beql        $t3, $zero, L_801CE9B8
    if (ctx->r11 == 0) {
        // 0x801CE96C: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_801CE9B8;
    }
    goto skip_1;
    // 0x801CE96C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x801CE970: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CE974: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CE978: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CE97C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CE980: nop

    // 0x801CE984: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801CE988: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CE98C: nop

    // 0x801CE990: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CE994: bne         $t3, $zero, L_801CE9AC
    if (ctx->r11 != 0) {
        // 0x801CE998: nop
    
            goto L_801CE9AC;
    }
    // 0x801CE998: nop

    // 0x801CE99C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x801CE9A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CE9A4: b           L_801CE9C4
    // 0x801CE9A8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801CE9C4;
    // 0x801CE9A8: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801CE9AC:
    // 0x801CE9AC: b           L_801CE9C4
    // 0x801CE9B0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801CE9C4;
    // 0x801CE9B0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801CE9B4: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_801CE9B8:
    // 0x801CE9B8: nop

    // 0x801CE9BC: bltz        $t3, L_801CE9AC
    if (SIGNED(ctx->r11) < 0) {
        // 0x801CE9C0: nop
    
            goto L_801CE9AC;
    }
    // 0x801CE9C0: nop

L_801CE9C4:
    // 0x801CE9C4: addu        $t6, $t1, $t3
    ctx->r14 = ADD32(ctx->r9, ctx->r11);
    // 0x801CE9C8: sh          $t6, 0x68($a2)
    MEM_H(0X68, ctx->r6) = ctx->r14;
    // 0x801CE9CC: sh          $t6, 0x68($a2)
    MEM_H(0X68, ctx->r6) = ctx->r14;
    // 0x801CE9D0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801CE9D4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801CE9D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CE9DC: jal         0x80003EA0
    // 0x801CE9E0: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x801CE9E0: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    after_1:
    // 0x801CE9E4: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CE9E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CE9EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801CE9F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CE9F4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801CE9F8: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x801CE9FC: jal         0x80003E10
    // 0x801CEA00: lhu         $a0, 0x68($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X68);
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x801CEA00: lhu         $a0, 0x68($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X68);
    after_2:
    // 0x801CEA04: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CEA08: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CEA0C: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801CEA10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CEA14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801CEA18: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CEA1C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801CEA20: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CEA24: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801CEA28: add.s       $f2, $f18, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x801CEA2C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801CEA30: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x801CEA34: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801CEA38: lwc1        $f4, -0x4D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D8);
    // 0x801CEA3C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CEA40: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801CEA44: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801CEA48: nop

    // 0x801CEA4C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801CEA50: beql        $t9, $zero, L_801CEAA0
    if (ctx->r25 == 0) {
        // 0x801CEA54: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_801CEAA0;
    }
    goto skip_2;
    // 0x801CEA54: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x801CEA58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CEA5C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CEA60: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CEA64: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801CEA68: nop

    // 0x801CEA6C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801CEA70: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801CEA74: nop

    // 0x801CEA78: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x801CEA7C: bne         $t9, $zero, L_801CEA94
    if (ctx->r25 != 0) {
        // 0x801CEA80: nop
    
            goto L_801CEA94;
    }
    // 0x801CEA80: nop

    // 0x801CEA84: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801CEA88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CEA8C: b           L_801CEAAC
    // 0x801CEA90: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_801CEAAC;
    // 0x801CEA90: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_801CEA94:
    // 0x801CEA94: b           L_801CEAAC
    // 0x801CEA98: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_801CEAAC;
    // 0x801CEA98: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x801CEA9C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_801CEAA0:
    // 0x801CEAA0: nop

    // 0x801CEAA4: bltz        $t9, L_801CEA94
    if (SIGNED(ctx->r25) < 0) {
        // 0x801CEAA8: nop
    
            goto L_801CEA94;
    }
    // 0x801CEAA8: nop

L_801CEAAC:
    // 0x801CEAAC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801CEAB0: subu        $t2, $t7, $t9
    ctx->r10 = SUB32(ctx->r15, ctx->r25);
    // 0x801CEAB4: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x801CEAB8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CEABC: nop

    // 0x801CEAC0: bc1fl       L_801CEAD4
    if (!c1cs) {
        // 0x801CEAC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CEAD4;
    }
    goto skip_3;
    // 0x801CEAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x801CEAC8: jal         0x80035020
    // 0x801CEACC: nop

    func_80035020_35C20(rdram, ctx);
        goto after_3;
    // 0x801CEACC: nop

    after_3:
    // 0x801CEAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CEAD4:
    // 0x801CEAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CEAD8: jr          $ra
    // 0x801CEADC: nop

    TRACE_RETURN()
    return;
    // 0x801CEADC: nop

;}
RECOMP_FUNC void func_801CDAA8_66A1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDAA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CDAAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801CDAB0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801CDAB4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CDAB8: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CDABC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CDAC0: addiu       $t8, $t8, -0x308
    ctx->r24 = ADD32(ctx->r24, -0X308);
    // 0x801CDAC4: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CDAC8: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801CDACC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CDAD0: addiu       $v1, $v1, -0x4A8
    ctx->r3 = ADD32(ctx->r3, -0X4A8);
    // 0x801CDAD4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CDAD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CDADC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801CDAE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CDAE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CDAE8: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CDAEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CDAF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDAF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CDAF8: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x801CDAFC: lui         $t2, 0x1F
    ctx->r10 = S32(0X1F << 16);
    // 0x801CDB00: lui         $t4, 0x6
    ctx->r12 = S32(0X6 << 16);
    // 0x801CDB04: lui         $t6, 0x55
    ctx->r14 = S32(0X55 << 16);
    // 0x801CDB08: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x801CDB0C: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x801CDB10: lui         $t7, 0xFFFC
    ctx->r15 = S32(0XFFFC << 16);
    // 0x801CDB14: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x801CDB18: ori         $t2, $t2, 0x3205
    ctx->r10 = ctx->r10 | 0X3205;
    // 0x801CDB1C: lui         $t1, 0xB600
    ctx->r9 = S32(0XB600 << 16);
    // 0x801CDB20: ori         $t4, $t4, 0x5
    ctx->r12 = ctx->r12 | 0X5;
    // 0x801CDB24: lui         $t3, 0xB700
    ctx->r11 = S32(0XB700 << 16);
    // 0x801CDB28: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x801CDB2C: ori         $t6, $t6, 0x2078
    ctx->r14 = ctx->r14 | 0X2078;
    // 0x801CDB30: ori         $t7, $t7, 0xF87C
    ctx->r15 = ctx->r15 | 0XF87C;
    // 0x801CDB34: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x801CDB38: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CDB3C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CDB40: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801CDB44: sw          $t9, 0x1A0($v1)
    MEM_W(0X1A0, ctx->r3) = ctx->r25;
    // 0x801CDB48: sw          $zero, 0x1A4($v1)
    MEM_W(0X1A4, ctx->r3) = 0;
    // 0x801CDB4C: sw          $t1, 0x1A8($v1)
    MEM_W(0X1A8, ctx->r3) = ctx->r9;
    // 0x801CDB50: sw          $t2, 0x1AC($v1)
    MEM_W(0X1AC, ctx->r3) = ctx->r10;
    // 0x801CDB54: sw          $t3, 0x1B0($v1)
    MEM_W(0X1B0, ctx->r3) = ctx->r11;
    // 0x801CDB58: sw          $t4, 0x1B4($v1)
    MEM_W(0X1B4, ctx->r3) = ctx->r12;
    // 0x801CDB5C: sw          $t6, 0x1BC($v1)
    MEM_W(0X1BC, ctx->r3) = ctx->r14;
    // 0x801CDB60: sw          $t5, 0x1B8($v1)
    MEM_W(0X1B8, ctx->r3) = ctx->r13;
    // 0x801CDB64: sw          $t8, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r24;
    // 0x801CDB68: sw          $t7, 0x1C4($v1)
    MEM_W(0X1C4, ctx->r3) = ctx->r15;
    // 0x801CDB6C: addiu       $a0, $a0, -0x468
    ctx->r4 = ADD32(ctx->r4, -0X468);
    // 0x801CDB70: addiu       $a1, $a1, -0x368
    ctx->r5 = ADD32(ctx->r5, -0X368);
    // 0x801CDB74: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x801CDB78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CDB7C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801CDB80: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CDB84: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801CDB88: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CDB8C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x801CDB90: jal         0x8004729C
    // 0x801CDB94: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    guLookAtReflect(rdram, ctx);
        goto after_0;
    // 0x801CDB94: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x801CDB98: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CDB9C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801CDBA0: addiu       $v1, $v1, -0x2E0
    ctx->r3 = ADD32(ctx->r3, -0X2E0);
    // 0x801CDBA4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CDBA8: lui         $t9, 0x384
    ctx->r25 = S32(0X384 << 16);
    // 0x801CDBAC: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CDBB0: addiu       $t1, $t1, -0x368
    ctx->r9 = ADD32(ctx->r9, -0X368);
    // 0x801CDBB4: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x801CDBB8: addiu       $v0, $v0, -0x2D8
    ctx->r2 = ADD32(ctx->r2, -0X2D8);
    // 0x801CDBBC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CDBC0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801CDBC4: lui         $t2, 0x382
    ctx->r10 = S32(0X382 << 16);
    // 0x801CDBC8: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CDBCC: addiu       $t3, $t3, -0x358
    ctx->r11 = ADD32(ctx->r11, -0X358);
    // 0x801CDBD0: ori         $t2, $t2, 0x10
    ctx->r10 = ctx->r10 | 0X10;
    // 0x801CDBD4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801CDBD8: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801CDBDC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x801CDBE0: lui         $t4, 0xFD10
    ctx->r12 = S32(0XFD10 << 16);
    // 0x801CDBE4: lui         $t5, 0x802
    ctx->r13 = S32(0X802 << 16);
    // 0x801CDBE8: addiu       $t5, $t5, -0xCB0
    ctx->r13 = ADD32(ctx->r13, -0XCB0);
    // 0x801CDBEC: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x801CDBF0: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x801CDBF4: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x801CDBF8: lui         $t8, 0x701
    ctx->r24 = S32(0X701 << 16);
    // 0x801CDBFC: ori         $t8, $t8, 0x4060
    ctx->r24 = ctx->r24 | 0X4060;
    // 0x801CDC00: lui         $t6, 0xF510
    ctx->r14 = S32(0XF510 << 16);
    // 0x801CDC04: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x801CDC08: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x801CDC0C: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x801CDC10: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x801CDC14: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x801CDC18: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
    // 0x801CDC1C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x801CDC20: lui         $t1, 0x77F
    ctx->r9 = S32(0X77F << 16);
    // 0x801CDC24: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x801CDC28: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CDC2C: ori         $t1, $t1, 0xF080
    ctx->r9 = ctx->r9 | 0XF080;
    // 0x801CDC30: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x801CDC34: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801CDC38: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x801CDC3C: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x801CDC40: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x801CDC44: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x801CDC48: ori         $t4, $t4, 0x4060
    ctx->r12 = ctx->r12 | 0X4060;
    // 0x801CDC4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801CDC50: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x801CDC54: lui         $t3, 0xF510
    ctx->r11 = S32(0XF510 << 16);
    // 0x801CDC58: ori         $t3, $t3, 0x2000
    ctx->r11 = ctx->r11 | 0X2000;
    // 0x801CDC5C: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x801CDC60: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x801CDC64: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x801CDC68: lui         $t6, 0xF
    ctx->r14 = S32(0XF << 16);
    // 0x801CDC6C: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x801CDC70: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x801CDC74: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x801CDC78: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x801CDC7C: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x801CDC80: lui         $t7, 0xFC0
    ctx->r15 = S32(0XFC0 << 16);
    // 0x801CDC84: lui         $t8, 0xBB00
    ctx->r24 = S32(0XBB00 << 16);
    // 0x801CDC88: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x801CDC8C: ori         $t7, $t7, 0x7C0
    ctx->r15 = ctx->r15 | 0X7C0;
    // 0x801CDC90: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
    // 0x801CDC94: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x801CDC98: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x801CDC9C: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x801CDCA0: ori         $t9, $t9, 0x1301
    ctx->r25 = ctx->r25 | 0X1301;
    // 0x801CDCA4: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x801CDCA8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801CDCAC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CDCB0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x801CDCB4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CDCB8: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x801CDCBC: addiu       $a1, $a1, -0x4E0
    ctx->r5 = ADD32(ctx->r5, -0X4E0);
    // 0x801CDCC0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801CDCC4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CDCC8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CDCCC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801CDCD0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CDCD4: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801CDCD8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CDCDC: lhu         $t3, 0x16($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X16);
    // 0x801CDCE0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CDCE4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CDCE8: nop

    // 0x801CDCEC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801CDCF0: beql        $t5, $zero, L_801CDD40
    if (ctx->r13 == 0) {
        // 0x801CDCF4: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_801CDD40;
    }
    goto skip_0;
    // 0x801CDCF4: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x801CDCF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CDCFC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CDD00: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CDD04: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CDD08: nop

    // 0x801CDD0C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CDD10: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CDD14: nop

    // 0x801CDD18: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801CDD1C: bne         $t5, $zero, L_801CDD34
    if (ctx->r13 != 0) {
        // 0x801CDD20: nop
    
            goto L_801CDD34;
    }
    // 0x801CDD20: nop

    // 0x801CDD24: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x801CDD28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CDD2C: b           L_801CDD4C
    // 0x801CDD30: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_801CDD4C;
    // 0x801CDD30: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_801CDD34:
    // 0x801CDD34: b           L_801CDD4C
    // 0x801CDD38: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_801CDD4C;
    // 0x801CDD38: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801CDD3C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_801CDD40:
    // 0x801CDD40: nop

    // 0x801CDD44: bltz        $t5, L_801CDD34
    if (SIGNED(ctx->r13) < 0) {
        // 0x801CDD48: nop
    
            goto L_801CDD34;
    }
    // 0x801CDD48: nop

L_801CDD4C:
    // 0x801CDD4C: subu        $t8, $t3, $t5
    ctx->r24 = SUB32(ctx->r11, ctx->r13);
    // 0x801CDD50: sh          $t8, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r24;
    // 0x801CDD54: lh          $a2, 0x6($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X6);
    // 0x801CDD58: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801CDD5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CDD60: bnel        $a2, $at, L_801CDDA8
    if (ctx->r6 != ctx->r1) {
        // 0x801CDD64: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801CDDA8;
    }
    goto skip_1;
    // 0x801CDD64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x801CDD68: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801CDD6C: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x801CDD70: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CDD74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CDD78: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801CDD7C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDD80: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x801CDD84: nop

    // 0x801CDD88: bc1fl       L_801CDDE8
    if (!c1cs) {
        // 0x801CDD8C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801CDDE8;
    }
    goto skip_2;
    // 0x801CDD8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x801CDD90: ldc1        $f8, -0x590($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X590);
    // 0x801CDD94: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801CDD98: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801CDD9C: b           L_801CDDE4
    // 0x801CDDA0: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
        goto L_801CDDE4;
    // 0x801CDDA0: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x801CDDA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_801CDDA8:
    // 0x801CDDA8: bnel        $a2, $at, L_801CDDE8
    if (ctx->r6 != ctx->r1) {
        // 0x801CDDAC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801CDDE8;
    }
    goto skip_3;
    // 0x801CDDAC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x801CDDB0: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801CDDB4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x801CDDB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CDDBC: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x801CDDC0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CDDC4: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x801CDDC8: nop

    // 0x801CDDCC: bc1fl       L_801CDDE8
    if (!c1cs) {
        // 0x801CDDD0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801CDDE8;
    }
    goto skip_4;
    // 0x801CDDD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x801CDDD4: ldc1        $f6, -0x588($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X588);
    // 0x801CDDD8: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x801CDDDC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801CDDE0: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
L_801CDDE4:
    // 0x801CDDE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801CDDE8:
    // 0x801CDDE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CDDEC: jr          $ra
    // 0x801CDDF0: nop

    TRACE_RETURN()
    return;
    // 0x801CDDF0: nop

;}
RECOMP_FUNC void func_801CC21C_66894C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC21C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CC220: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x801CC224: jr          $ra
    // 0x801CC228: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CC228: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_801CC8C8_668FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC8C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC8CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC8D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CC8D4: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC8D8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CC8DC: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CC8E0: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CC8E4: lh          $t7, 0x6($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X6);
    // 0x801CC8E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CC8EC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801CC8F0: beql        $t7, $at, L_801CCAFC
    if (ctx->r15 == ctx->r1) {
        // 0x801CC8F4: lh          $t9, 0x2A($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X2A);
            goto L_801CCAFC;
    }
    goto skip_0;
    // 0x801CC8F4: lh          $t9, 0x2A($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2A);
    skip_0:
    // 0x801CC8F8: lh          $v0, 0x1A($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X1A);
    // 0x801CC8FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CC900: beql        $v0, $at, L_801CCAFC
    if (ctx->r2 == ctx->r1) {
        // 0x801CC904: lh          $t9, 0x2A($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X2A);
            goto L_801CCAFC;
    }
    goto skip_1;
    // 0x801CC904: lh          $t9, 0x2A($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2A);
    skip_1:
    // 0x801CC908: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801CC90C: beql        $a0, $v0, L_801CCAFC
    if (ctx->r4 == ctx->r2) {
        // 0x801CC910: lh          $t9, 0x2A($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X2A);
            goto L_801CCAFC;
    }
    goto skip_2;
    // 0x801CC910: lh          $t9, 0x2A($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2A);
    skip_2:
    // 0x801CC914: lh          $v0, 0x2A($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2A);
    // 0x801CC918: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CC91C: beql        $v0, $at, L_801CCAFC
    if (ctx->r2 == ctx->r1) {
        // 0x801CC920: lh          $t9, 0x2A($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X2A);
            goto L_801CCAFC;
    }
    goto skip_3;
    // 0x801CC920: lh          $t9, 0x2A($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2A);
    skip_3:
    // 0x801CC924: beq         $a0, $v0, L_801CCAF8
    if (ctx->r4 == ctx->r2) {
        // 0x801CC928: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_801CCAF8;
    }
    // 0x801CC928: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x801CC92C: lhu         $t9, 0x68($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X68);
    // 0x801CC930: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CC934: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801CC938: bgez        $t9, L_801CC94C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CC93C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801CC94C;
    }
    // 0x801CC93C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CC940: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CC944: nop

    // 0x801CC948: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801CC94C:
    // 0x801CC94C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801CC950: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CC954: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CC958: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801CC95C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801CC960: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CC964: nop

    // 0x801CC968: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CC96C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CC970: nop

    // 0x801CC974: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CC978: beql        $t1, $zero, L_801CC9C8
    if (ctx->r9 == 0) {
        // 0x801CC97C: mfc1        $t1, $f18
        ctx->r9 = (int32_t)ctx->f18.u32l;
            goto L_801CC9C8;
    }
    goto skip_4;
    // 0x801CC97C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x801CC980: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CC984: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CC988: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CC98C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801CC990: nop

    // 0x801CC994: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CC998: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801CC99C: nop

    // 0x801CC9A0: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801CC9A4: bne         $t1, $zero, L_801CC9BC
    if (ctx->r9 != 0) {
        // 0x801CC9A8: nop
    
            goto L_801CC9BC;
    }
    // 0x801CC9A8: nop

    // 0x801CC9AC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x801CC9B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC9B4: b           L_801CC9D4
    // 0x801CC9B8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_801CC9D4;
    // 0x801CC9B8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_801CC9BC:
    // 0x801CC9BC: b           L_801CC9D4
    // 0x801CC9C0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_801CC9D4;
    // 0x801CC9C0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801CC9C4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
L_801CC9C8:
    // 0x801CC9C8: nop

    // 0x801CC9CC: bltz        $t1, L_801CC9BC
    if (SIGNED(ctx->r9) < 0) {
        // 0x801CC9D0: nop
    
            goto L_801CC9BC;
    }
    // 0x801CC9D0: nop

L_801CC9D4:
    // 0x801CC9D4: addiu       $a0, $t1, 0x300
    ctx->r4 = ADD32(ctx->r9, 0X300);
    // 0x801CC9D8: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x801CC9DC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801CC9E0: sh          $t1, 0x68($t8)
    MEM_H(0X68, ctx->r24) = ctx->r9;
    // 0x801CC9E4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC9E8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x801CC9EC: sh          $t2, 0x3D98($at)
    MEM_H(0X3D98, ctx->r1) = ctx->r10;
    // 0x801CC9F0: jal         0x80003EA0
    // 0x801CC9F4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x801CC9F4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801CC9F8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CC9FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CCA00: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCA04: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCA08: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CCA0C: lhu         $a0, 0x3D98($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3D98);
    // 0x801CCA10: jal         0x80003E10
    // 0x801CCA14: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801CCA14: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    after_1:
    // 0x801CCA18: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CCA1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CCA20: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCA24: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CCA28: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801CCA2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CCA30: lhu         $t3, 0x16($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X16);
    // 0x801CCA34: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CCA38: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CCA3C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801CCA40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CCA44: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CCA48: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CCA4C: bgez        $t3, L_801CCA60
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801CCA50: swc1        $f18, 0x10($a3)
        MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
            goto L_801CCA60;
    }
    // 0x801CCA50: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
    // 0x801CCA54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CCA58: nop

    // 0x801CCA5C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_801CCA60:
    // 0x801CCA60: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801CCA64: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CCA68: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CCA6C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CCA70: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801CCA74: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CCA78: nop

    // 0x801CCA7C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CCA80: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CCA84: nop

    // 0x801CCA88: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801CCA8C: beql        $t5, $zero, L_801CCADC
    if (ctx->r13 == 0) {
        // 0x801CCA90: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_801CCADC;
    }
    goto skip_5;
    // 0x801CCA90: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_5:
    // 0x801CCA94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CCA98: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CCA9C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CCAA0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CCAA4: nop

    // 0x801CCAA8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CCAAC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CCAB0: nop

    // 0x801CCAB4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801CCAB8: bne         $t5, $zero, L_801CCAD0
    if (ctx->r13 != 0) {
        // 0x801CCABC: nop
    
            goto L_801CCAD0;
    }
    // 0x801CCABC: nop

    // 0x801CCAC0: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x801CCAC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CCAC8: b           L_801CCAE8
    // 0x801CCACC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_801CCAE8;
    // 0x801CCACC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_801CCAD0:
    // 0x801CCAD0: b           L_801CCAE8
    // 0x801CCAD4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_801CCAE8;
    // 0x801CCAD4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801CCAD8: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_801CCADC:
    // 0x801CCADC: nop

    // 0x801CCAE0: bltz        $t5, L_801CCAD0
    if (SIGNED(ctx->r13) < 0) {
        // 0x801CCAE4: nop
    
            goto L_801CCAD0;
    }
    // 0x801CCAE4: nop

L_801CCAE8:
    // 0x801CCAE8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801CCAEC: sh          $t5, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r13;
    // 0x801CCAF0: andi        $t7, $t5, 0x3FF
    ctx->r15 = ctx->r13 & 0X3FF;
    // 0x801CCAF4: sh          $t7, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r15;
L_801CCAF8:
    // 0x801CCAF8: lh          $t9, 0x2A($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2A);
L_801CCAFC:
    // 0x801CCAFC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801CCB00: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x801CCB04: beq         $at, $zero, L_801CCEBC
    if (ctx->r1 == 0) {
        // 0x801CCB08: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_801CCEBC;
    }
    // 0x801CCB08: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x801CCB0C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCB10: addu        $at, $at, $t0
    gpr jr_addend_801CCB18 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801CCB14: lw          $t0, -0x5B8($at)
    ctx->r8 = ADD32(ctx->r1, -0X5B8);
    // 0x801CCB18: jr          $t0
    // 0x801CCB1C: nop

    switch (jr_addend_801CCB18 >> 2) {
        case 0: goto L_801CCB20; break;
        case 1: goto L_801CCD7C; break;
        case 2: goto L_801CCDC8; break;
        case 3: goto L_801CCE10; break;
        case 4: goto L_801CCEAC; break;
        default: switch_error(__func__, 0x801CCB18, 0x801CFA48);
    }
    // 0x801CCB1C: nop

L_801CCB20:
    // 0x801CCB20: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CCB24: lh          $a2, -0x7FC($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X7FC);
    // 0x801CCB28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CCB2C: lh          $a1, 0x28($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X28);
    // 0x801CCB30: jal         0x801CF5BC
    // 0x801CCB34: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_801CF5BC_66BCEC(rdram, ctx);
        goto after_2;
    // 0x801CCB34: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x801CCB38: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CCB3C: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CCB40: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    // 0x801CCB44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CCB48: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCB4C: bne         $v0, $at, L_801CCBA4
    if (ctx->r2 != ctx->r1) {
        // 0x801CCB50: lui         $t8, 0x800
        ctx->r24 = S32(0X800 << 16);
            goto L_801CCBA4;
    }
    // 0x801CCB50: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x801CCB54: addiu       $t8, $t8, 0x3298
    ctx->r24 = ADD32(ctx->r24, 0X3298);
    // 0x801CCB58: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CCB5C: addu        $t1, $t8, $at
    ctx->r9 = ADD32(ctx->r24, ctx->r1);
    // 0x801CCB60: addiu       $t2, $zero, 0x4D6
    ctx->r10 = ADD32(0, 0X4D6);
    // 0x801CCB64: sw          $t1, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r9;
    // 0x801CCB68: sh          $t2, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r10;
    // 0x801CCB6C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801CCB70: jal         0x80014218
    // 0x801CCB74: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_3;
    // 0x801CCB74: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x801CCB78: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CCB7C: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CCB80: lh          $t3, 0x2A($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2A);
    // 0x801CCB84: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCB88: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CCB8C: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x801CCB90: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801CCB94: sh          $t4, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r12;
    // 0x801CCB98: sh          $t5, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r13;
    // 0x801CCB9C: b           L_801CCEBC
    // 0x801CCBA0: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CCEBC;
    // 0x801CCBA0: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CCBA4:
    // 0x801CCBA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CCBA8: bne         $v0, $at, L_801CCEBC
    if (ctx->r2 != ctx->r1) {
        // 0x801CCBAC: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CCEBC;
    }
    // 0x801CCBAC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCBB0: lwc1        $f14, -0x7F4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X7F4);
    // 0x801CCBB4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CCBB8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CCBBC: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CCBC0: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CCBC4: nop

    // 0x801CCBC8: bc1fl       L_801CCC78
    if (!c1cs) {
        // 0x801CCBCC: lhu         $v0, 0x16($a3)
        ctx->r2 = MEM_HU(ctx->r7, 0X16);
            goto L_801CCC78;
    }
    goto skip_6;
    // 0x801CCBCC: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
    skip_6:
    // 0x801CCBD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CCBD4: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CCBD8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCBDC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801CCBE0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801CCBE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CCBE8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x801CCBEC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CCBF0: bc1fl       L_801CCC08
    if (!c1cs) {
        // 0x801CCBF4: sub.s       $f14, $f12, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_801CCC08;
    }
    goto skip_7;
    // 0x801CCBF4: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    skip_7:
    // 0x801CCBF8: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x801CCBFC: b           L_801CCC08
    // 0x801CCC00: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801CCC08;
    // 0x801CCC00: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801CCC04: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
L_801CCC08:
    // 0x801CCC08: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CCC0C: nop

    // 0x801CCC10: bc1f        L_801CCC24
    if (!c1cs) {
        // 0x801CCC14: nop
    
            goto L_801CCC24;
    }
    // 0x801CCC14: nop

    // 0x801CCC18: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCC1C: b           L_801CCC28
    // 0x801CCC20: sw          $t6, 0x3DA0($at)
    MEM_W(0X3DA0, ctx->r1) = ctx->r14;
        goto L_801CCC28;
    // 0x801CCC20: sw          $t6, 0x3DA0($at)
    MEM_W(0X3DA0, ctx->r1) = ctx->r14;
L_801CCC24:
    // 0x801CCC24: sw          $t7, 0x3DA0($at)
    MEM_W(0X3DA0, ctx->r1) = ctx->r15;
L_801CCC28:
    // 0x801CCC28: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CCC2C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCC30: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801CCC34: nop

    // 0x801CCC38: bc1f        L_801CCC50
    if (!c1cs) {
        // 0x801CCC3C: nop
    
            goto L_801CCC50;
    }
    // 0x801CCC3C: nop

    // 0x801CCC40: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x801CCC44: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCC48: b           L_801CCC54
    // 0x801CCC4C: swc1        $f4, -0x7F8($at)
    MEM_W(-0X7F8, ctx->r1) = ctx->f4.u32l;
        goto L_801CCC54;
    // 0x801CCC4C: swc1        $f4, -0x7F8($at)
    MEM_W(-0X7F8, ctx->r1) = ctx->f4.u32l;
L_801CCC50:
    // 0x801CCC50: swc1        $f0, -0x7F8($at)
    MEM_W(-0X7F8, ctx->r1) = ctx->f0.u32l;
L_801CCC54:
    // 0x801CCC54: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CCC58: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCC5C: bc1f        L_801CCC70
    if (!c1cs) {
        // 0x801CCC60: nop
    
            goto L_801CCC70;
    }
    // 0x801CCC60: nop

    // 0x801CCC64: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCC68: b           L_801CCC74
    // 0x801CCC6C: sw          $t9, 0x3D9C($at)
    MEM_W(0X3D9C, ctx->r1) = ctx->r25;
        goto L_801CCC74;
    // 0x801CCC6C: sw          $t9, 0x3D9C($at)
    MEM_W(0X3D9C, ctx->r1) = ctx->r25;
L_801CCC70:
    // 0x801CCC70: sw          $t0, 0x3D9C($at)
    MEM_W(0X3D9C, ctx->r1) = ctx->r8;
L_801CCC74:
    // 0x801CCC74: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
L_801CCC78:
    // 0x801CCC78: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x801CCC7C: beq         $at, $zero, L_801CCCA0
    if (ctx->r1 == 0) {
        // 0x801CCC80: addiu       $a0, $v0, 0xC
        ctx->r4 = ADD32(ctx->r2, 0XC);
            goto L_801CCCA0;
    }
    // 0x801CCC80: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    // 0x801CCC84: addiu       $a0, $v0, -0xC
    ctx->r4 = ADD32(ctx->r2, -0XC);
    // 0x801CCC88: blez        $a0, L_801CCC98
    if (SIGNED(ctx->r4) <= 0) {
        // 0x801CCC8C: nop
    
            goto L_801CCC98;
    }
    // 0x801CCC8C: nop

    // 0x801CCC90: b           L_801CCCB8
    // 0x801CCC94: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
        goto L_801CCCB8;
    // 0x801CCC94: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
L_801CCC98:
    // 0x801CCC98: b           L_801CCCB8
    // 0x801CCC9C: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
        goto L_801CCCB8;
    // 0x801CCC9C: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CCCA0:
    // 0x801CCCA0: slti        $at, $a0, 0x3FF
    ctx->r1 = SIGNED(ctx->r4) < 0X3FF ? 1 : 0;
    // 0x801CCCA4: beql        $at, $zero, L_801CCCB8
    if (ctx->r1 == 0) {
        // 0x801CCCA8: sh          $zero, 0x16($a3)
        MEM_H(0X16, ctx->r7) = 0;
            goto L_801CCCB8;
    }
    goto skip_8;
    // 0x801CCCA8: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
    skip_8:
    // 0x801CCCAC: b           L_801CCCB8
    // 0x801CCCB0: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
        goto L_801CCCB8;
    // 0x801CCCB0: sh          $a0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r4;
    // 0x801CCCB4: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CCCB8:
    // 0x801CCCB8: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CCCBC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCCC0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CCCC4: nop

    // 0x801CCCC8: bc1f        L_801CCD3C
    if (!c1cs) {
        // 0x801CCCCC: nop
    
            goto L_801CCD3C;
    }
    // 0x801CCCCC: nop

    // 0x801CCCD0: lw          $t8, 0x3DA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3DA0);
    // 0x801CCCD4: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x801CCCD8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCCDC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801CCCE0: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CCCE4: cvt.d.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CCCE8: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x801CCCEC: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x801CCCF0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801CCCF4: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
    // 0x801CCCF8: lwc1        $f8, -0x7F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7F8);
    // 0x801CCCFC: lw          $t1, 0x3D9C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3D9C);
    // 0x801CCD00: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCD04: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801CCD08: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x801CCD0C: nop

    // 0x801CCD10: cvt.d.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CCD14: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CCD18: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CCD1C: add.d       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f2.d + ctx->f2.d;
    // 0x801CCD20: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CCD24: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x801CCD28: sub.d       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f8.d - ctx->f18.d;
    // 0x801CCD2C: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x801CCD30: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
    // 0x801CCD34: b           L_801CCEBC
    // 0x801CCD38: swc1        $f14, -0x7F4($at)
    MEM_W(-0X7F4, ctx->r1) = ctx->f14.u32l;
        goto L_801CCEBC;
    // 0x801CCD38: swc1        $f14, -0x7F4($at)
    MEM_W(-0X7F4, ctx->r1) = ctx->f14.u32l;
L_801CCD3C:
    // 0x801CCD3C: swc1        $f14, -0x7F4($at)
    MEM_W(-0X7F4, ctx->r1) = ctx->f14.u32l;
    // 0x801CCD40: lw          $t2, 0x10($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X10);
    // 0x801CCD44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CCD48: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801CCD4C: bne         $t2, $at, L_801CCD6C
    if (ctx->r10 != ctx->r1) {
        // 0x801CCD50: nop
    
            goto L_801CCD6C;
    }
    // 0x801CCD50: nop

    // 0x801CCD54: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801CCD58: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CCD5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CCD60: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801CCD64: b           L_801CCEBC
    // 0x801CCD68: sb          $t3, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r11;
        goto L_801CCEBC;
    // 0x801CCD68: sb          $t3, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r11;
L_801CCD6C:
    // 0x801CCD6C: jal         0x80035020
    // 0x801CCD70: nop

    func_80035020_35C20(rdram, ctx);
        goto after_4;
    // 0x801CCD70: nop

    after_4:
    // 0x801CCD74: b           L_801CCEC0
    // 0x801CCD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CCEC0;
    // 0x801CCD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCD7C:
    // 0x801CCD7C: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CCD80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CCD84: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CCD88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CCD8C: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801CCD90: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CCD94: add.d       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f4.d + ctx->f8.d;
    // 0x801CCD98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CCD9C: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801CCDA0: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    // 0x801CCDA4: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CCDA8: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x801CCDAC: nop

    // 0x801CCDB0: bc1fl       L_801CCEC0
    if (!c1cs) {
        // 0x801CCDB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CCEC0;
    }
    goto skip_9;
    // 0x801CCDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x801CCDB8: lh          $t5, 0x2A($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2A);
    // 0x801CCDBC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801CCDC0: b           L_801CCEBC
    // 0x801CCDC4: sh          $t6, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r14;
        goto L_801CCEBC;
    // 0x801CCDC4: sh          $t6, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r14;
L_801CCDC8:
    // 0x801CCDC8: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CCDCC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCDD0: ldc1        $f18, -0x5A0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5A0);
    // 0x801CCDD4: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CCDD8: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x801CCDDC: add.d       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f8.d + ctx->f18.d;
    // 0x801CCDE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CCDE4: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x801CCDE8: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
    // 0x801CCDEC: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CCDF0: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x801CCDF4: nop

    // 0x801CCDF8: bc1fl       L_801CCEC0
    if (!c1cs) {
        // 0x801CCDFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CCEC0;
    }
    goto skip_10;
    // 0x801CCDFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_10:
    // 0x801CCE00: lh          $t7, 0x2A($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2A);
    // 0x801CCE04: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x801CCE08: b           L_801CCEBC
    // 0x801CCE0C: sh          $t9, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r25;
        goto L_801CCEBC;
    // 0x801CCE0C: sh          $t9, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r25;
L_801CCE10:
    // 0x801CCE10: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CCE14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CCE18: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CCE1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CCE20: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x801CCE24: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x801CCE28: add.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d + ctx->f10.d;
    // 0x801CCE2C: addiu       $t1, $t1, 0x3610
    ctx->r9 = ADD32(ctx->r9, 0X3610);
    // 0x801CCE30: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CCE34: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x801CCE38: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801CCE3C: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CCE40: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CCE44: swc1        $f16, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f16.u32l;
    // 0x801CCE48: lh          $t0, 0x28($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X28);
    // 0x801CCE4C: lwc1        $f18, 0x28($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CCE50: addiu       $t8, $t0, -0x1
    ctx->r24 = ADD32(ctx->r8, -0X1);
    // 0x801CCE54: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CCE58: nop

    // 0x801CCE5C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CCE60: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x801CCE64: nop

    // 0x801CCE68: bc1fl       L_801CCEC0
    if (!c1cs) {
        // 0x801CCE6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CCEC0;
    }
    goto skip_11;
    // 0x801CCE6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_11:
    // 0x801CCE70: sw          $t2, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r10;
    // 0x801CCE74: sh          $t3, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r11;
    // 0x801CCE78: jal         0x80014218
    // 0x801CCE7C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80014218_14E18(rdram, ctx);
        goto after_5;
    // 0x801CCE7C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_5:
    // 0x801CCE80: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CCE84: addiu       $v1, $v1, -0x4E0
    ctx->r3 = ADD32(ctx->r3, -0X4E0);
    // 0x801CCE88: lh          $t4, 0x2A($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X2A);
    // 0x801CCE8C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCE90: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CCE94: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x801CCE98: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801CCE9C: sh          $t5, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r13;
    // 0x801CCEA0: sh          $t6, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r14;
    // 0x801CCEA4: b           L_801CCEBC
    // 0x801CCEA8: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CCEBC;
    // 0x801CCEA8: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CCEAC:
    // 0x801CCEAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CCEB0: lh          $a1, 0x28($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X28);
    // 0x801CCEB4: jal         0x801CF5BC
    // 0x801CCEB8: addiu       $a2, $zero, 0x7D0
    ctx->r6 = ADD32(0, 0X7D0);
    func_801CF5BC_66BCEC(rdram, ctx);
        goto after_6;
    // 0x801CCEB8: addiu       $a2, $zero, 0x7D0
    ctx->r6 = ADD32(0, 0X7D0);
    after_6:
L_801CCEBC:
    // 0x801CCEBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCEC0:
    // 0x801CCEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCEC4: jr          $ra
    // 0x801CCEC8: nop

    TRACE_RETURN()
    return;
    // 0x801CCEC8: nop

;}
RECOMP_FUNC void func_801CC22C_66895C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC22C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CC230: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801CC234: jr          $ra
    // 0x801CC238: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801CC238: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_801CEC88_66B3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEC88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CEC8C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801CEC90: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801CEC94: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801CEC98: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801CEC9C: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CECA0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CECA4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CECA8: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CECAC: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CECB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CECB4: lh          $t8, -0x5250($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5250);
    // 0x801CECB8: addiu       $t0, $t0, 0x3FA0
    ctx->r8 = ADD32(ctx->r8, 0X3FA0);
    // 0x801CECBC: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x801CECC0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801CECC4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x801CECC8: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x801CECCC: sw          $a0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r4;
    // 0x801CECD0: jal         0x800108BC
    // 0x801CECD4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_800108BC_114BC(rdram, ctx);
        goto after_0;
    // 0x801CECD4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CECD8: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CECDC: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x801CECE0: lw          $v1, -0x7B4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B4);
    // 0x801CECE4: lw          $t1, -0x7B8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7B8);
    // 0x801CECE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CECEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CECF0: subu        $v1, $v1, $t1
    ctx->r3 = SUB32(ctx->r3, ctx->r9);
    // 0x801CECF4: andi        $t2, $v1, 0x1FF
    ctx->r10 = ctx->r3 & 0X1FF;
    // 0x801CECF8: slti        $at, $t2, 0x100
    ctx->r1 = SIGNED(ctx->r10) < 0X100 ? 1 : 0;
    // 0x801CECFC: bne         $at, $zero, L_801CED14
    if (ctx->r1 != 0) {
        // 0x801CED00: or          $v1, $t2, $zero
        ctx->r3 = ctx->r10 | 0;
            goto L_801CED14;
    }
    // 0x801CED00: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801CED04: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CED08: sw          $t2, -0x7B4($at)
    MEM_W(-0X7B4, ctx->r1) = ctx->r10;
    // 0x801CED0C: b           L_801CED20
    // 0x801CED10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_801CED20;
    // 0x801CED10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801CED14:
    // 0x801CED14: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CED18: sw          $v1, -0x7B4($at)
    MEM_W(-0X7B4, ctx->r1) = ctx->r3;
    // 0x801CED1C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_801CED20:
    // 0x801CED20: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CED24: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CED28: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CED2C: lw          $t6, -0x7A8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7A8);
    // 0x801CED30: lw          $t5, -0x7AC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7AC);
    // 0x801CED34: lw          $t4, -0x7B0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7B0);
    // 0x801CED38: addiu       $t3, $zero, 0xEF
    ctx->r11 = ADD32(0, 0XEF);
    // 0x801CED3C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CED40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CED44: addiu       $a3, $zero, 0x13F
    ctx->r7 = ADD32(0, 0X13F);
    // 0x801CED48: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CED4C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801CED50: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801CED54: jal         0x800108E4
    // 0x801CED58: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800108E4_114E4(rdram, ctx);
        goto after_1;
    // 0x801CED58: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x801CED5C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x801CED60: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    // 0x801CED64: jal         0x80040620
    // 0x801CED68: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x801CED68: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    after_2:
    // 0x801CED6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801CED70: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CED74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CED78: jr          $ra
    // 0x801CED7C: nop

    TRACE_RETURN()
    return;
    // 0x801CED7C: nop

;}
RECOMP_FUNC void func_801CCECC_6695FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCED4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCED8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x801CCEDC: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CCEE0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CCEE4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CCEE8: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801CCEEC: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CCEF0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801CCEF4: lhu         $v0, -0x4F84($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F84);
    // 0x801CCEF8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801CCEFC: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CCF00: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x801CCF04: beq         $t8, $zero, L_801CCF28
    if (ctx->r24 == 0) {
        // 0x801CCF08: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_801CCF28;
    }
    // 0x801CCF08: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x801CCF0C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CCF10: lh          $v1, -0x7F0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7F0);
    // 0x801CCF14: addiu       $v1, $v1, 0x32
    ctx->r3 = ADD32(ctx->r3, 0X32);
    // 0x801CCF18: slti        $at, $v1, 0xFA1
    ctx->r1 = SIGNED(ctx->r3) < 0XFA1 ? 1 : 0;
    // 0x801CCF1C: beq         $at, $zero, L_801CCF28
    if (ctx->r1 == 0) {
        // 0x801CCF20: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CCF28;
    }
    // 0x801CCF20: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCF24: sh          $v1, -0x7F0($at)
    MEM_H(-0X7F0, ctx->r1) = ctx->r3;
L_801CCF28:
    // 0x801CCF28: beq         $t9, $zero, L_801CCF48
    if (ctx->r25 == 0) {
        // 0x801CCF2C: lui         $v0, 0x801D
        ctx->r2 = S32(0X801D << 16);
            goto L_801CCF48;
    }
    // 0x801CCF2C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CCF30: lh          $v0, -0x7F0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7F0);
    // 0x801CCF34: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x801CCF38: slti        $at, $v0, 0x7D0
    ctx->r1 = SIGNED(ctx->r2) < 0X7D0 ? 1 : 0;
    // 0x801CCF3C: bne         $at, $zero, L_801CCF48
    if (ctx->r1 != 0) {
        // 0x801CCF40: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CCF48;
    }
    // 0x801CCF40: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCF44: sh          $v0, -0x7F0($at)
    MEM_H(-0X7F0, ctx->r1) = ctx->r2;
L_801CCF48:
    // 0x801CCF48: lh          $t2, 0x6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X6);
    // 0x801CCF4C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CCF50: beql        $t1, $t2, L_801CD15C
    if (ctx->r9 == ctx->r10) {
        // 0x801CCF54: lh          $v0, 0x22($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X22);
            goto L_801CD15C;
    }
    goto skip_0;
    // 0x801CCF54: lh          $v0, 0x22($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X22);
    skip_0:
    // 0x801CCF58: lh          $v0, 0x1A($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X1A);
    // 0x801CCF5C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801CCF60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CCF64: beql        $v1, $v0, L_801CD15C
    if (ctx->r3 == ctx->r2) {
        // 0x801CCF68: lh          $v0, 0x22($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X22);
            goto L_801CD15C;
    }
    goto skip_1;
    // 0x801CCF68: lh          $v0, 0x22($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X22);
    skip_1:
    // 0x801CCF6C: beql        $a1, $v0, L_801CD15C
    if (ctx->r5 == ctx->r2) {
        // 0x801CCF70: lh          $v0, 0x22($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X22);
            goto L_801CD15C;
    }
    goto skip_2;
    // 0x801CCF70: lh          $v0, 0x22($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X22);
    skip_2:
    // 0x801CCF74: lh          $v0, 0x2A($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X2A);
    // 0x801CCF78: beql        $v1, $v0, L_801CD15C
    if (ctx->r3 == ctx->r2) {
        // 0x801CCF7C: lh          $v0, 0x22($t0)
        ctx->r2 = MEM_H(ctx->r8, 0X22);
            goto L_801CD15C;
    }
    goto skip_3;
    // 0x801CCF7C: lh          $v0, 0x22($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X22);
    skip_3:
    // 0x801CCF80: beq         $a1, $v0, L_801CD158
    if (ctx->r5 == ctx->r2) {
        // 0x801CCF84: lw          $t3, 0x18($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X18);
            goto L_801CD158;
    }
    // 0x801CCF84: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x801CCF88: lhu         $t4, 0x68($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X68);
    // 0x801CCF8C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CCF90: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x801CCF94: bgez        $t4, L_801CCFA8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801CCF98: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801CCFA8;
    }
    // 0x801CCF98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CCF9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CCFA0: nop

    // 0x801CCFA4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801CCFA8:
    // 0x801CCFA8: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CCFAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CCFB0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CCFB4: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801CCFB8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CCFBC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CCFC0: nop

    // 0x801CCFC4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CCFC8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CCFCC: nop

    // 0x801CCFD0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801CCFD4: beql        $t6, $zero, L_801CD024
    if (ctx->r14 == 0) {
        // 0x801CCFD8: mfc1        $t6, $f18
        ctx->r14 = (int32_t)ctx->f18.u32l;
            goto L_801CD024;
    }
    goto skip_4;
    // 0x801CCFD8: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x801CCFDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CCFE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CCFE4: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CCFE8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CCFEC: nop

    // 0x801CCFF0: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CCFF4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CCFF8: nop

    // 0x801CCFFC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801CD000: bne         $t6, $zero, L_801CD018
    if (ctx->r14 != 0) {
        // 0x801CD004: nop
    
            goto L_801CD018;
    }
    // 0x801CD004: nop

    // 0x801CD008: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x801CD00C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD010: b           L_801CD030
    // 0x801CD014: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_801CD030;
    // 0x801CD014: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_801CD018:
    // 0x801CD018: b           L_801CD030
    // 0x801CD01C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_801CD030;
    // 0x801CD01C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801CD020: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
L_801CD024:
    // 0x801CD024: nop

    // 0x801CD028: bltz        $t6, L_801CD018
    if (SIGNED(ctx->r14) < 0) {
        // 0x801CD02C: nop
    
            goto L_801CD018;
    }
    // 0x801CD02C: nop

L_801CD030:
    // 0x801CD030: addiu       $a0, $t6, 0x100
    ctx->r4 = ADD32(ctx->r14, 0X100);
    // 0x801CD034: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801CD038: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CD03C: sh          $t6, 0x68($t3)
    MEM_H(0X68, ctx->r11) = ctx->r14;
    // 0x801CD040: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD044: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801CD048: sh          $t7, 0x3DA4($at)
    MEM_H(0X3DA4, ctx->r1) = ctx->r15;
    // 0x801CD04C: jal         0x80003EA0
    // 0x801CD050: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x801CD050: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801CD054: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CD058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CD05C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD060: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CD064: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CD068: lhu         $a0, 0x3DA4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3DA4);
    // 0x801CD06C: jal         0x80003E10
    // 0x801CD070: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801CD070: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    after_1:
    // 0x801CD074: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CD078: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD07C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD080: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801CD084: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801CD088: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CD08C: lhu         $t8, 0x16($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X16);
    // 0x801CD090: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD094: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD098: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CD09C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CD0A0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD0A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CD0A8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CD0AC: bgez        $t8, L_801CD0C0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801CD0B0: swc1        $f18, 0x10($a3)
        MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
            goto L_801CD0C0;
    }
    // 0x801CD0B0: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
    // 0x801CD0B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD0B8: nop

    // 0x801CD0BC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_801CD0C0:
    // 0x801CD0C0: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801CD0C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801CD0C8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD0CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CD0D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801CD0D4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801CD0D8: nop

    // 0x801CD0DC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CD0E0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801CD0E4: nop

    // 0x801CD0E8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801CD0EC: beql        $t2, $zero, L_801CD13C
    if (ctx->r10 == 0) {
        // 0x801CD0F0: mfc1        $t2, $f18
        ctx->r10 = (int32_t)ctx->f18.u32l;
            goto L_801CD13C;
    }
    goto skip_5;
    // 0x801CD0F0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    skip_5:
    // 0x801CD0F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CD0F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801CD0FC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CD100: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801CD104: nop

    // 0x801CD108: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801CD10C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801CD110: nop

    // 0x801CD114: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801CD118: bne         $t2, $zero, L_801CD130
    if (ctx->r10 != 0) {
        // 0x801CD11C: nop
    
            goto L_801CD130;
    }
    // 0x801CD11C: nop

    // 0x801CD120: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x801CD124: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD128: b           L_801CD148
    // 0x801CD12C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_801CD148;
    // 0x801CD12C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_801CD130:
    // 0x801CD130: b           L_801CD148
    // 0x801CD134: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_801CD148;
    // 0x801CD134: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x801CD138: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
L_801CD13C:
    // 0x801CD13C: nop

    // 0x801CD140: bltz        $t2, L_801CD130
    if (SIGNED(ctx->r10) < 0) {
        // 0x801CD144: nop
    
            goto L_801CD130;
    }
    // 0x801CD144: nop

L_801CD148:
    // 0x801CD148: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801CD14C: sh          $t2, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r10;
    // 0x801CD150: andi        $t5, $t2, 0x3FF
    ctx->r13 = ctx->r10 & 0X3FF;
    // 0x801CD154: sh          $t5, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r13;
L_801CD158:
    // 0x801CD158: lh          $v0, 0x22($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X22);
L_801CD15C:
    // 0x801CD15C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x801CD160: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CD164: beq         $v0, $t1, L_801CD184
    if (ctx->r2 == ctx->r9) {
        // 0x801CD168: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801CD184;
    }
    // 0x801CD168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CD16C: beql        $v0, $v1, L_801CD3D0
    if (ctx->r2 == ctx->r3) {
        // 0x801CD170: lwc1        $f16, 0x28($a3)
        ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
            goto L_801CD3D0;
    }
    goto skip_6;
    // 0x801CD170: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
    skip_6:
    // 0x801CD174: beq         $v0, $a1, L_801CD460
    if (ctx->r2 == ctx->r5) {
        // 0x801CD178: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_801CD460;
    }
    // 0x801CD178: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801CD17C: b           L_801CD4D8
    // 0x801CD180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CD4D8;
    // 0x801CD180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD184:
    // 0x801CD184: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CD188: lh          $a2, -0x7F0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X7F0);
    // 0x801CD18C: lh          $a1, 0x20($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X20);
    // 0x801CD190: jal         0x801CF5BC
    // 0x801CD194: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_801CF5BC_66BCEC(rdram, ctx);
        goto after_2;
    // 0x801CD194: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x801CD198: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD19C: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD1A0: lh          $v0, 0x6($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X6);
    // 0x801CD1A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CD1A8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD1AC: bne         $v0, $at, L_801CD204
    if (ctx->r2 != ctx->r1) {
        // 0x801CD1B0: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801CD204;
    }
    // 0x801CD1B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CD1B4: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x801CD1B8: addiu       $t3, $t3, 0x1CD8
    ctx->r11 = ADD32(ctx->r11, 0X1CD8);
    // 0x801CD1BC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CD1C0: addu        $t6, $t3, $at
    ctx->r14 = ADD32(ctx->r11, ctx->r1);
    // 0x801CD1C4: addiu       $t7, $zero, 0x4D6
    ctx->r15 = ADD32(0, 0X4D6);
    // 0x801CD1C8: sw          $t6, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r14;
    // 0x801CD1CC: sh          $t7, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r15;
    // 0x801CD1D0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801CD1D4: jal         0x80014218
    // 0x801CD1D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80014218_14E18(rdram, ctx);
        goto after_3;
    // 0x801CD1D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x801CD1DC: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD1E0: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD1E4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD1E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD1EC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CD1F0: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x801CD1F4: sh          $t8, 0x22($t0)
    MEM_H(0X22, ctx->r8) = ctx->r24;
    // 0x801CD1F8: sh          $t9, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r25;
    // 0x801CD1FC: b           L_801CD4D4
    // 0x801CD200: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CD4D4;
    // 0x801CD200: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CD204:
    // 0x801CD204: bne         $t1, $v0, L_801CD4D4
    if (ctx->r9 != ctx->r2) {
        // 0x801CD208: lui         $at, 0x801D
        ctx->r1 = S32(0X801D << 16);
            goto L_801CD4D4;
    }
    // 0x801CD208: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD20C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD210: lwc1        $f14, -0x7E8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X7E8);
    // 0x801CD214: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CD218: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CD21C: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CD220: nop

    // 0x801CD224: bc1fl       L_801CD2CC
    if (!c1cs) {
        // 0x801CD228: lhu         $v0, 0x16($a3)
        ctx->r2 = MEM_HU(ctx->r7, 0X16);
            goto L_801CD2CC;
    }
    goto skip_7;
    // 0x801CD228: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
    skip_7:
    // 0x801CD22C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CD230: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CD234: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD238: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x801CD23C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801CD240: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801CD244: bc1fl       L_801CD25C
    if (!c1cs) {
        // 0x801CD248: sub.s       $f14, $f12, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_801CD25C;
    }
    goto skip_8;
    // 0x801CD248: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    skip_8:
    // 0x801CD24C: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x801CD250: b           L_801CD25C
    // 0x801CD254: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801CD25C;
    // 0x801CD254: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801CD258: sub.s       $f14, $f12, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f0.fl;
L_801CD25C:
    // 0x801CD25C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CD260: nop

    // 0x801CD264: bc1f        L_801CD278
    if (!c1cs) {
        // 0x801CD268: nop
    
            goto L_801CD278;
    }
    // 0x801CD268: nop

    // 0x801CD26C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD270: b           L_801CD27C
    // 0x801CD274: sw          $t1, 0x3DAC($at)
    MEM_W(0X3DAC, ctx->r1) = ctx->r9;
        goto L_801CD27C;
    // 0x801CD274: sw          $t1, 0x3DAC($at)
    MEM_W(0X3DAC, ctx->r1) = ctx->r9;
L_801CD278:
    // 0x801CD278: sw          $t2, 0x3DAC($at)
    MEM_W(0X3DAC, ctx->r1) = ctx->r10;
L_801CD27C:
    // 0x801CD27C: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CD280: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD284: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801CD288: nop

    // 0x801CD28C: bc1f        L_801CD2A4
    if (!c1cs) {
        // 0x801CD290: nop
    
            goto L_801CD2A4;
    }
    // 0x801CD290: nop

    // 0x801CD294: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x801CD298: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD29C: b           L_801CD2A8
    // 0x801CD2A0: swc1        $f4, -0x7EC($at)
    MEM_W(-0X7EC, ctx->r1) = ctx->f4.u32l;
        goto L_801CD2A8;
    // 0x801CD2A0: swc1        $f4, -0x7EC($at)
    MEM_W(-0X7EC, ctx->r1) = ctx->f4.u32l;
L_801CD2A4:
    // 0x801CD2A4: swc1        $f0, -0x7EC($at)
    MEM_W(-0X7EC, ctx->r1) = ctx->f0.u32l;
L_801CD2A8:
    // 0x801CD2A8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CD2AC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD2B0: bc1f        L_801CD2C4
    if (!c1cs) {
        // 0x801CD2B4: nop
    
            goto L_801CD2C4;
    }
    // 0x801CD2B4: nop

    // 0x801CD2B8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD2BC: b           L_801CD2C8
    // 0x801CD2C0: sw          $t1, 0x3DA8($at)
    MEM_W(0X3DA8, ctx->r1) = ctx->r9;
        goto L_801CD2C8;
    // 0x801CD2C0: sw          $t1, 0x3DA8($at)
    MEM_W(0X3DA8, ctx->r1) = ctx->r9;
L_801CD2C4:
    // 0x801CD2C4: sw          $t4, 0x3DA8($at)
    MEM_W(0X3DA8, ctx->r1) = ctx->r12;
L_801CD2C8:
    // 0x801CD2C8: lhu         $v0, 0x16($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X16);
L_801CD2CC:
    // 0x801CD2CC: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x801CD2D0: beq         $at, $zero, L_801CD2F4
    if (ctx->r1 == 0) {
        // 0x801CD2D4: addiu       $v1, $v0, 0xC
        ctx->r3 = ADD32(ctx->r2, 0XC);
            goto L_801CD2F4;
    }
    // 0x801CD2D4: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
    // 0x801CD2D8: addiu       $v1, $v0, -0xC
    ctx->r3 = ADD32(ctx->r2, -0XC);
    // 0x801CD2DC: blez        $v1, L_801CD2EC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801CD2E0: nop
    
            goto L_801CD2EC;
    }
    // 0x801CD2E0: nop

    // 0x801CD2E4: b           L_801CD30C
    // 0x801CD2E8: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
        goto L_801CD30C;
    // 0x801CD2E8: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
L_801CD2EC:
    // 0x801CD2EC: b           L_801CD30C
    // 0x801CD2F0: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
        goto L_801CD30C;
    // 0x801CD2F0: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CD2F4:
    // 0x801CD2F4: slti        $at, $v1, 0x3FF
    ctx->r1 = SIGNED(ctx->r3) < 0X3FF ? 1 : 0;
    // 0x801CD2F8: beql        $at, $zero, L_801CD30C
    if (ctx->r1 == 0) {
        // 0x801CD2FC: sh          $zero, 0x16($a3)
        MEM_H(0X16, ctx->r7) = 0;
            goto L_801CD30C;
    }
    goto skip_9;
    // 0x801CD2FC: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
    skip_9:
    // 0x801CD300: b           L_801CD30C
    // 0x801CD304: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
        goto L_801CD30C;
    // 0x801CD304: sh          $v1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r3;
    // 0x801CD308: sh          $zero, 0x16($a3)
    MEM_H(0X16, ctx->r7) = 0;
L_801CD30C:
    // 0x801CD30C: lwc1        $f12, 0x10($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X10);
    // 0x801CD310: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD314: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CD318: nop

    // 0x801CD31C: bc1f        L_801CD390
    if (!c1cs) {
        // 0x801CD320: nop
    
            goto L_801CD390;
    }
    // 0x801CD320: nop

    // 0x801CD324: lw          $t5, 0x3DAC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3DAC);
    // 0x801CD328: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x801CD32C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD330: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x801CD334: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CD338: cvt.d.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CD33C: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x801CD340: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x801CD344: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801CD348: swc1        $f18, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f18.u32l;
    // 0x801CD34C: lwc1        $f8, -0x7EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7EC);
    // 0x801CD350: lw          $t3, 0x3DA8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3DA8);
    // 0x801CD354: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD358: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801CD35C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801CD360: nop

    // 0x801CD364: cvt.d.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CD368: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CD36C: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CD370: add.d       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f2.d + ctx->f2.d;
    // 0x801CD374: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CD378: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x801CD37C: sub.d       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f8.d - ctx->f18.d;
    // 0x801CD380: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x801CD384: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
    // 0x801CD388: b           L_801CD4D4
    // 0x801CD38C: swc1        $f14, -0x7E8($at)
    MEM_W(-0X7E8, ctx->r1) = ctx->f14.u32l;
        goto L_801CD4D4;
    // 0x801CD38C: swc1        $f14, -0x7E8($at)
    MEM_W(-0X7E8, ctx->r1) = ctx->f14.u32l;
L_801CD390:
    // 0x801CD390: swc1        $f14, -0x7E8($at)
    MEM_W(-0X7E8, ctx->r1) = ctx->f14.u32l;
    // 0x801CD394: lw          $t6, 0x10($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X10);
    // 0x801CD398: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CD39C: bne         $t1, $t6, L_801CD3BC
    if (ctx->r9 != ctx->r14) {
        // 0x801CD3A0: nop
    
            goto L_801CD3BC;
    }
    // 0x801CD3A0: nop

    // 0x801CD3A4: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CD3A8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CD3AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CD3B0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801CD3B4: b           L_801CD4D4
    // 0x801CD3B8: sb          $t7, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r15;
        goto L_801CD4D4;
    // 0x801CD3B8: sb          $t7, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r15;
L_801CD3BC:
    // 0x801CD3BC: jal         0x80035020
    // 0x801CD3C0: nop

    func_80035020_35C20(rdram, ctx);
        goto after_4;
    // 0x801CD3C0: nop

    after_4:
    // 0x801CD3C4: b           L_801CD4D8
    // 0x801CD3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CD4D8;
    // 0x801CD3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD3CC: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
L_801CD3D0:
    // 0x801CD3D0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CD3D4: ldc1        $f8, -0x598($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X598);
    // 0x801CD3D8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801CD3DC: lui         $t4, 0x801
    ctx->r12 = S32(0X801 << 16);
    // 0x801CD3E0: add.d       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f4.d + ctx->f8.d;
    // 0x801CD3E4: addiu       $t4, $t4, 0x36B0
    ctx->r12 = ADD32(ctx->r12, 0X36B0);
    // 0x801CD3E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CD3EC: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x801CD3F0: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801CD3F4: addiu       $t3, $zero, 0x4D6
    ctx->r11 = ADD32(0, 0X4D6);
    // 0x801CD3F8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CD3FC: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
    // 0x801CD400: lh          $t9, 0x20($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X20);
    // 0x801CD404: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CD408: addiu       $t2, $t9, -0x1
    ctx->r10 = ADD32(ctx->r25, -0X1);
    // 0x801CD40C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x801CD410: nop

    // 0x801CD414: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CD418: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x801CD41C: nop

    // 0x801CD420: bc1fl       L_801CD4D8
    if (!c1cs) {
        // 0x801CD424: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CD4D8;
    }
    goto skip_10;
    // 0x801CD424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_10:
    // 0x801CD428: sw          $t5, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r13;
    // 0x801CD42C: sh          $t3, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r11;
    // 0x801CD430: jal         0x80014218
    // 0x801CD434: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80014218_14E18(rdram, ctx);
        goto after_5;
    // 0x801CD434: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_5:
    // 0x801CD438: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD43C: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD440: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD444: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD448: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CD44C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801CD450: sh          $t6, 0x22($t0)
    MEM_H(0X22, ctx->r8) = ctx->r14;
    // 0x801CD454: sh          $t1, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r9;
    // 0x801CD458: b           L_801CD4D4
    // 0x801CD45C: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
        goto L_801CD4D4;
    // 0x801CD45C: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CD460:
    // 0x801CD460: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801CD464: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CD468: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CD46C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x801CD470: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x801CD474: add.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d + ctx->f10.d;
    // 0x801CD478: addiu       $t8, $t8, 0x1BC0
    ctx->r24 = ADD32(ctx->r24, 0X1BC0);
    // 0x801CD47C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CD480: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801CD484: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801CD488: addiu       $t2, $zero, 0x4D6
    ctx->r10 = ADD32(0, 0X4D6);
    // 0x801CD48C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CD490: swc1        $f16, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f16.u32l;
    // 0x801CD494: lh          $t7, 0x6($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X6);
    // 0x801CD498: bnel        $t1, $t7, L_801CD4D8
    if (ctx->r9 != ctx->r15) {
        // 0x801CD49C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CD4D8;
    }
    goto skip_11;
    // 0x801CD49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_11:
    // 0x801CD4A0: sw          $t9, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r25;
    // 0x801CD4A4: sh          $t2, 0x34($a3)
    MEM_H(0X34, ctx->r7) = ctx->r10;
    // 0x801CD4A8: jal         0x80014218
    // 0x801CD4AC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80014218_14E18(rdram, ctx);
        goto after_6;
    // 0x801CD4AC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_6:
    // 0x801CD4B0: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CD4B4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD4B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD4BC: addiu       $t0, $t0, -0x4E0
    ctx->r8 = ADD32(ctx->r8, -0X4E0);
    // 0x801CD4C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CD4C4: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x801CD4C8: sh          $t1, 0x22($t0)
    MEM_H(0X22, ctx->r8) = ctx->r9;
    // 0x801CD4CC: sh          $t4, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r12;
    // 0x801CD4D0: swc1        $f2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f2.u32l;
L_801CD4D4:
    // 0x801CD4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD4D8:
    // 0x801CD4D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD4DC: jr          $ra
    // 0x801CD4E0: nop

    TRACE_RETURN()
    return;
    // 0x801CD4E0: nop

;}
RECOMP_FUNC void func_8021684C_6757FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021684C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80216850: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80216854: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80216858: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021685C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80216860: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80216864: sb          $a3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r7;
    // 0x80216868: jal         0x80014840
    // 0x8021686C: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x8021686C: addiu       $a1, $zero, 0x4D2
    ctx->r5 = ADD32(0, 0X4D2);
    after_0:
    // 0x80216870: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x80216874: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80216878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021687C: blez        $s0, L_802169A4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80216880: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802169A4;
    }
    // 0x80216880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80216884: andi        $v1, $s0, 0x3
    ctx->r3 = ctx->r16 & 0X3;
    // 0x80216888: beq         $v1, $zero, L_802168DC
    if (ctx->r3 == 0) {
        // 0x8021688C: or          $t0, $v1, $zero
        ctx->r8 = ctx->r3 | 0;
            goto L_802168DC;
    }
    // 0x8021688C: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80216890: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x80216894: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
L_80216898:
    // 0x80216898: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8021689C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x802168A0: and         $t7, $t6, $a3
    ctx->r15 = ctx->r14 & ctx->r7;
    // 0x802168A4: bne         $t7, $zero, L_802168B4
    if (ctx->r15 != 0) {
        // 0x802168A8: sll         $a3, $v1, 1
        ctx->r7 = S32(ctx->r3 << 1);
            goto L_802168B4;
    }
    // 0x802168A8: sll         $a3, $v1, 1
    ctx->r7 = S32(ctx->r3 << 1);
    // 0x802168AC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x802168B0: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
L_802168B4:
    // 0x802168B4: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x802168B8: bne         $t2, $zero, L_802168CC
    if (ctx->r10 != 0) {
        // 0x802168BC: or          $a3, $t2, $zero
        ctx->r7 = ctx->r10 | 0;
            goto L_802168CC;
    }
    // 0x802168BC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x802168C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802168C4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802168C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_802168CC:
    // 0x802168CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802168D0: bnel        $t0, $a1, L_80216898
    if (ctx->r8 != ctx->r5) {
        // 0x802168D4: lbu         $t6, 0x0($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X0);
            goto L_80216898;
    }
    goto skip_0;
    // 0x802168D4: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    skip_0:
    // 0x802168D8: beq         $a1, $s0, L_802169A4
    if (ctx->r5 == ctx->r16) {
        // 0x802168DC: addu        $a0, $t1, $a2
        ctx->r4 = ADD32(ctx->r9, ctx->r6);
            goto L_802169A4;
    }
L_802168DC:
    // 0x802168DC: addu        $a0, $t1, $a2
    ctx->r4 = ADD32(ctx->r9, ctx->r6);
    // 0x802168E0: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
L_802168E4:
    // 0x802168E4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x802168E8: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x802168EC: and         $t4, $t3, $a3
    ctx->r12 = ctx->r11 & ctx->r7;
    // 0x802168F0: bne         $t4, $zero, L_80216900
    if (ctx->r12 != 0) {
        // 0x802168F4: sll         $a3, $v1, 1
        ctx->r7 = S32(ctx->r3 << 1);
            goto L_80216900;
    }
    // 0x802168F4: sll         $a3, $v1, 1
    ctx->r7 = S32(ctx->r3 << 1);
    // 0x802168F8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x802168FC: sw          $zero, 0x8($t6)
    MEM_W(0X8, ctx->r14) = 0;
L_80216900:
    // 0x80216900: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x80216904: bne         $v1, $zero, L_80216914
    if (ctx->r3 != 0) {
        // 0x80216908: sll         $t2, $a1, 2
        ctx->r10 = S32(ctx->r5 << 2);
            goto L_80216914;
    }
    // 0x80216908: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x8021690C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80216910: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80216914:
    // 0x80216914: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x80216918: sll         $a3, $v1, 1
    ctx->r7 = S32(ctx->r3 << 1);
    // 0x8021691C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x80216920: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x80216924: bne         $t9, $zero, L_80216930
    if (ctx->r25 != 0) {
        // 0x80216928: andi        $v1, $a3, 0xFF
        ctx->r3 = ctx->r7 & 0XFF;
            goto L_80216930;
    }
    // 0x80216928: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x8021692C: sw          $zero, 0xC($t3)
    MEM_W(0XC, ctx->r11) = 0;
L_80216930:
    // 0x80216930: bne         $v1, $zero, L_80216940
    if (ctx->r3 != 0) {
        // 0x80216934: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_80216940;
    }
    // 0x80216934: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80216938: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021693C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80216940:
    // 0x80216940: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x80216944: sll         $a3, $v1, 1
    ctx->r7 = S32(ctx->r3 << 1);
    // 0x80216948: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8021694C: and         $t6, $t5, $v1
    ctx->r14 = ctx->r13 & ctx->r3;
    // 0x80216950: bne         $t6, $zero, L_8021695C
    if (ctx->r14 != 0) {
        // 0x80216954: andi        $v1, $a3, 0xFF
        ctx->r3 = ctx->r7 & 0XFF;
            goto L_8021695C;
    }
    // 0x80216954: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x80216958: sw          $zero, 0x10($t8)
    MEM_W(0X10, ctx->r24) = 0;
L_8021695C:
    // 0x8021695C: bne         $v1, $zero, L_8021696C
    if (ctx->r3 != 0) {
        // 0x80216960: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_8021696C;
    }
    // 0x80216960: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x80216964: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80216968: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8021696C:
    // 0x8021696C: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x80216970: sll         $a3, $v1, 1
    ctx->r7 = S32(ctx->r3 << 1);
    // 0x80216974: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x80216978: and         $t3, $t2, $v1
    ctx->r11 = ctx->r10 & ctx->r3;
    // 0x8021697C: bne         $t3, $zero, L_8021698C
    if (ctx->r11 != 0) {
        // 0x80216980: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8021698C;
    }
    // 0x80216980: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80216984: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x80216988: sw          $zero, 0x14($t5)
    MEM_W(0X14, ctx->r13) = 0;
L_8021698C:
    // 0x8021698C: bne         $t6, $zero, L_8021699C
    if (ctx->r14 != 0) {
        // 0x80216990: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_8021699C;
    }
    // 0x80216990: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80216994: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80216998: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8021699C:
    // 0x8021699C: bnel        $a1, $s0, L_802168E4
    if (ctx->r5 != ctx->r16) {
        // 0x802169A0: lbu         $t3, 0x0($a0)
        ctx->r11 = MEM_BU(ctx->r4, 0X0);
            goto L_802168E4;
    }
    goto skip_1;
    // 0x802169A0: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    skip_1:
L_802169A4:
    // 0x802169A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802169A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802169AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802169B0: jr          $ra
    // 0x802169B4: nop

    TRACE_RETURN()
    return;
    // 0x802169B4: nop

;}
RECOMP_FUNC void func_802124EC_67149C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802124EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802124F0: beq         $a3, $zero, L_80212518
    if (ctx->r7 == 0) {
        // 0x802124F4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_80212518;
    }
    // 0x802124F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802124F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802124FC: beq         $a3, $at, L_80212528
    if (ctx->r7 == ctx->r1) {
        // 0x80212500: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80212528;
    }
    // 0x80212500: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212504: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80212508: beq         $a3, $at, L_80212534
    if (ctx->r7 == ctx->r1) {
        // 0x8021250C: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80212534;
    }
    // 0x8021250C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212510: b           L_8021255C
    // 0x80212514: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8021255C;
    // 0x80212514: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212518:
    // 0x80212518: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021251C: lw          $v0, 0x7F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F88);
    // 0x80212520: b           L_8021253C
    // 0x80212524: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8021253C;
    // 0x80212524: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80212528:
    // 0x80212528: lw          $v0, 0x7F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F88);
    // 0x8021252C: b           L_8021253C
    // 0x80212530: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_8021253C;
    // 0x80212530: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_80212534:
    // 0x80212534: lw          $v0, 0x7F8C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F8C);
    // 0x80212538: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8021253C:
    // 0x8021253C: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x80212540: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212544: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212548: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8021254C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80212550: jal         0x800106F0
    // 0x80212554: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80212554: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80212558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8021255C:
    // 0x8021255C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212560: jr          $ra
    // 0x80212564: nop

    TRACE_RETURN()
    return;
    // 0x80212564: nop

;}
RECOMP_FUNC void func_8020FCA0_66EC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FCA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8020FCA4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8020FCA8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8020FCAC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020FCB0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8020FCB4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8020FCB8: addiu       $a1, $a1, -0x570
    ctx->r5 = ADD32(ctx->r5, -0X570);
    // 0x8020FCBC: jal         0x80034E08
    // 0x8020FCC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020FCC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020FCC4: bne         $v0, $zero, L_8020FCD4
    if (ctx->r2 != 0) {
        // 0x8020FCC8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8020FCD4;
    }
    // 0x8020FCC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8020FCCC: b           L_8020FE2C
    // 0x8020FCD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FE2C;
    // 0x8020FCD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020FCD4:
    // 0x8020FCD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020FCD8: jal         0x80011968
    // 0x8020FCDC: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_80011968_12568(rdram, ctx);
        goto after_1;
    // 0x8020FCDC: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_1:
    // 0x8020FCE0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8020FCE4: lui         $a3, 0xC00B
    ctx->r7 = S32(0XC00B << 16);
    // 0x8020FCE8: ori         $a3, $a3, 0x851F
    ctx->r7 = ctx->r7 | 0X851F;
    // 0x8020FCEC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8020FCF0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8020FCF4: jal         0x80011908
    // 0x8020FCF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011908_12508(rdram, ctx);
        goto after_2;
    // 0x8020FCF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8020FCFC: jal         0x80011760
    // 0x8020FD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x8020FD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8020FD04: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8020FD08: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8020FD0C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8020FD10: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x8020FD14: beq         $at, $zero, L_8020FD30
    if (ctx->r1 == 0) {
        // 0x8020FD18: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8020FD30;
    }
    // 0x8020FD18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8020FD1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FD20: addu        $at, $at, $t7
    gpr jr_addend_8020FD28 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020FD24: lw          $t7, 0x7720($at)
    ctx->r15 = ADD32(ctx->r1, 0X7720);
    // 0x8020FD28: jr          $t7
    // 0x8020FD2C: nop

    switch (jr_addend_8020FD28 >> 2) {
        case 0: goto L_8020FD38; break;
        case 1: goto L_8020FD4C; break;
        case 2: goto L_8020FD60; break;
        case 3: goto L_8020FD74; break;
        case 4: goto L_8020FD88; break;
        case 5: goto L_8020FD9C; break;
        case 6: goto L_8020FDB0; break;
        default: switch_error(__func__, 0x8020FD28, 0x80217720);
    }
    // 0x8020FD2C: nop

L_8020FD30:
    // 0x8020FD30: b           L_8020FE2C
    // 0x8020FD34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FE2C;
    // 0x8020FD34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020FD38:
    // 0x8020FD38: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020FD3C: addiu       $a1, $a1, -0xB30
    ctx->r5 = ADD32(ctx->r5, -0XB30);
    // 0x8020FD40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FD44: b           L_8020FDC0
    // 0x8020FD48: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8020FDC0;
    // 0x8020FD48: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8020FD4C:
    // 0x8020FD4C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020FD50: addiu       $a1, $a1, -0x710
    ctx->r5 = ADD32(ctx->r5, -0X710);
    // 0x8020FD54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FD58: b           L_8020FDC0
    // 0x8020FD5C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8020FDC0;
    // 0x8020FD5C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8020FD60:
    // 0x8020FD60: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020FD64: addiu       $a1, $a1, -0x710
    ctx->r5 = ADD32(ctx->r5, -0X710);
    // 0x8020FD68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FD6C: b           L_8020FDC0
    // 0x8020FD70: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8020FDC0;
    // 0x8020FD70: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8020FD74:
    // 0x8020FD74: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020FD78: addiu       $a1, $a1, -0x710
    ctx->r5 = ADD32(ctx->r5, -0X710);
    // 0x8020FD7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FD80: b           L_8020FDC0
    // 0x8020FD84: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8020FDC0;
    // 0x8020FD84: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8020FD88:
    // 0x8020FD88: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020FD8C: addiu       $a1, $a1, 0x220
    ctx->r5 = ADD32(ctx->r5, 0X220);
    // 0x8020FD90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FD94: b           L_8020FDC0
    // 0x8020FD98: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8020FDC0;
    // 0x8020FD98: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8020FD9C:
    // 0x8020FD9C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8020FDA0: addiu       $a1, $a1, 0x4C0
    ctx->r5 = ADD32(ctx->r5, 0X4C0);
    // 0x8020FDA4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FDA8: b           L_8020FDC0
    // 0x8020FDAC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
        goto L_8020FDC0;
    // 0x8020FDAC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8020FDB0:
    // 0x8020FDB0: lui         $a1, 0x8006
    ctx->r5 = S32(0X8006 << 16);
    // 0x8020FDB4: addiu       $a1, $a1, 0x3930
    ctx->r5 = ADD32(ctx->r5, 0X3930);
    // 0x8020FDB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FDBC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_8020FDC0:
    // 0x8020FDC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FDC4: lwc1        $f0, 0x773C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X773C);
    // 0x8020FDC8: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8020FDCC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8020FDD0: addiu       $t8, $zero, 0x4D0
    ctx->r24 = ADD32(0, 0X4D0);
    // 0x8020FDD4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8020FDD8: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x8020FDDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020FDE0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8020FDE4: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x8020FDE8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020FDEC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020FDF0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020FDF4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020FDF8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8020FDFC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8020FE00: jal         0x8000DBF0
    // 0x8020FE04: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x8020FE04: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8020FE08: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8020FE0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020FE10: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x8020FE14: beql        $at, $zero, L_8020FE2C
    if (ctx->r1 == 0) {
        // 0x8020FE18: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8020FE2C;
    }
    goto skip_0;
    // 0x8020FE18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_0:
    // 0x8020FE1C: jal         0x8020FCA0
    // 0x8020FE20: addiu       $a1, $t9, 0x1
    ctx->r5 = ADD32(ctx->r25, 0X1);
    func_8020FCA0_66EC50(rdram, ctx);
        goto after_5;
    // 0x8020FE20: addiu       $a1, $t9, 0x1
    ctx->r5 = ADD32(ctx->r25, 0X1);
    after_5:
    // 0x8020FE24: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8020FE28: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8020FE2C:
    // 0x8020FE2C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8020FE30: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8020FE34: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8020FE38: jr          $ra
    // 0x8020FE3C: nop

    TRACE_RETURN()
    return;
    // 0x8020FE3C: nop

;}
RECOMP_FUNC void func_80214CF0_673CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214CF0: sh          $zero, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = 0;
    // 0x80214CF4: lh          $t8, 0xC2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC2);
    // 0x80214CF8: lh          $t9, 0xBC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XBC);
    // 0x80214CFC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80214D00: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80214D04: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x80214D08: andi        $t0, $v1, 0x3FF
    ctx->r8 = ctx->r3 & 0X3FF;
    // 0x80214D0C: slti        $at, $t0, 0x201
    ctx->r1 = SIGNED(ctx->r8) < 0X201 ? 1 : 0;
    // 0x80214D10: sb          $t6, 0xB8($a0)
    MEM_B(0XB8, ctx->r4) = ctx->r14;
    // 0x80214D14: sh          $t7, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r15;
    // 0x80214D18: bne         $at, $zero, L_80214D24
    if (ctx->r1 != 0) {
        // 0x80214D1C: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80214D24;
    }
    // 0x80214D1C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80214D20: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
L_80214D24:
    // 0x80214D24: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80214D28: lh          $t1, 0x62($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X62);
    // 0x80214D2C: div         $zero, $v1, $t1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r9)));
    // 0x80214D30: mflo        $t2
    ctx->r10 = lo;
    // 0x80214D34: sh          $t2, 0x64($v0)
    MEM_H(0X64, ctx->r2) = ctx->r10;
    // 0x80214D38: bne         $t1, $zero, L_80214D44
    if (ctx->r9 != 0) {
        // 0x80214D3C: nop
    
            goto L_80214D44;
    }
    // 0x80214D3C: nop

    // 0x80214D40: break       7
    do_break(2149666112);
L_80214D44:
    // 0x80214D44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214D48: bne         $t1, $at, L_80214D5C
    if (ctx->r9 != ctx->r1) {
        // 0x80214D4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80214D5C;
    }
    // 0x80214D4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214D50: bne         $v1, $at, L_80214D5C
    if (ctx->r3 != ctx->r1) {
        // 0x80214D54: nop
    
            goto L_80214D5C;
    }
    // 0x80214D54: nop

    // 0x80214D58: break       6
    do_break(2149666136);
L_80214D5C:
    // 0x80214D5C: jr          $ra
    // 0x80214D60: nop

    TRACE_RETURN()
    return;
    // 0x80214D60: nop

;}
RECOMP_FUNC void func_80214C90_673C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80214C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214C98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80214C9C: jal         0x8021671C
    // 0x80214CA0: lw          $a0, 0x94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X94);
    func_8021671C_6756CC(rdram, ctx);
        goto after_0;
    // 0x80214CA0: lw          $a0, 0x94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X94);
    after_0:
    // 0x80214CA4: jal         0x80034EF8
    // 0x80214CA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x80214CA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80214CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80214CB4: jr          $ra
    // 0x80214CB8: nop

    TRACE_RETURN()
    return;
    // 0x80214CB8: nop

;}
RECOMP_FUNC void func_802132C8_672278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802132C8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x802132CC: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x802132D0: lw          $v0, 0x9C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X9C);
    // 0x802132D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802132D8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802132DC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802132E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802132E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802132E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802132EC: bne         $v0, $zero, L_802132FC
    if (ctx->r2 != 0) {
        // 0x802132F0: sw          $a2, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r6;
            goto L_802132FC;
    }
    // 0x802132F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802132F4: lw          $t6, 0x260($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X260);
    // 0x802132F8: beq         $t6, $zero, L_80213370
    if (ctx->r14 == 0) {
        // 0x802132FC: lui         $t8, 0x8021
        ctx->r24 = S32(0X8021 << 16);
            goto L_80213370;
    }
L_802132FC:
    // 0x802132FC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80213300: lw          $t8, 0x7F5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7F5C);
    // 0x80213304: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x80213308: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8021330C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213310: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80213314: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213318: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8021331C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213320: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213324: jal         0x800106F0
    // 0x80213328: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x80213328: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x8021332C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x80213330: lw          $t0, 0x7F64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F64);
    // 0x80213334: addiu       $t9, $zero, 0x38
    ctx->r25 = ADD32(0, 0X38);
    // 0x80213338: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8021333C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80213340: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80213344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213348: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x8021334C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213350: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80213354: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213358: jal         0x800106F0
    // 0x8021335C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x8021335C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x80213360: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80213364: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80213368: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x8021336C: lw          $v0, -0x395C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X395C);
L_80213370:
    // 0x80213370: beq         $v0, $zero, L_80213410
    if (ctx->r2 == 0) {
        // 0x80213374: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80213410;
    }
    // 0x80213374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213378: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8021337C: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    // 0x80213380: lw          $a3, 0xAC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XAC);
    // 0x80213384: addiu       $a2, $a2, 0x3
    ctx->r6 = ADD32(ctx->r6, 0X3);
    // 0x80213388: jal         0x80212568
    // 0x8021338C: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_80212568_671518(rdram, ctx);
        goto after_2;
    // 0x8021338C: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_2:
    // 0x80213390: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80213394: lw          $t2, -0x393C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X393C);
    // 0x80213398: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8021339C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802133A0: beq         $t2, $zero, L_802133CC
    if (ctx->r10 == 0) {
        // 0x802133A4: addiu       $a1, $s1, 0x40
        ctx->r5 = ADD32(ctx->r17, 0X40);
            goto L_802133CC;
    }
    // 0x802133A4: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x802133A8: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x802133AC: lw          $t4, 0x7F90($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7F90);
    // 0x802133B0: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x802133B4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802133B8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802133BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802133C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802133C4: jal         0x800106F0
    // 0x802133C8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x802133C8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_3:
L_802133CC:
    // 0x802133CC: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x802133D0: lw          $t5, -0x392C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X392C);
    // 0x802133D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802133D8: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802133DC: beq         $t5, $zero, L_80213410
    if (ctx->r13 == 0) {
        // 0x802133E0: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_80213410;
    }
    // 0x802133E0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802133E4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802133E8: lw          $t7, 0x7F84($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F84);
    // 0x802133EC: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802133F0: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x802133F4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802133F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802133FC: addiu       $a2, $a2, 0x1E
    ctx->r6 = ADD32(ctx->r6, 0X1E);
    // 0x80213400: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213404: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213408: jal         0x800106F0
    // 0x8021340C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x8021340C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
L_80213410:
    // 0x80213410: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80213414: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80213418: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8021341C: jr          $ra
    // 0x80213420: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80213420: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8020E588_66D538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E588: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020E58C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E590: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020E594: addiu       $a1, $a1, -0x21B0
    ctx->r5 = ADD32(ctx->r5, -0X21B0);
    // 0x8020E598: jal         0x80034E08
    // 0x8020E59C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020E59C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020E5A0: bne         $v0, $zero, L_8020E5B0
    if (ctx->r2 != 0) {
        // 0x8020E5A4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020E5B0;
    }
    // 0x8020E5A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E5A8: b           L_8020E620
    // 0x8020E5AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020E620;
    // 0x8020E5AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020E5B0:
    // 0x8020E5B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020E5B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8020E5B8: jal         0x80035EEC
    // 0x8020E5BC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x8020E5BC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8020E5C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8020E5C4: bne         $v0, $zero, L_8020E5D4
    if (ctx->r2 != 0) {
        // 0x8020E5C8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8020E5D4;
    }
    // 0x8020E5C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020E5CC: b           L_8020E620
    // 0x8020E5D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020E620;
    // 0x8020E5D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020E5D4:
    // 0x8020E5D4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020E5D8: addiu       $t7, $t7, 0x6B70
    ctx->r15 = ADD32(ctx->r15, 0X6B70);
    // 0x8020E5DC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020E5E0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8020E5E4: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8020E5E8: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
    // 0x8020E5EC: sw          $t8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r24;
    // 0x8020E5F0: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
    // 0x8020E5F4: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8020E5F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020E5FC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8020E600: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020E604: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020E608: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x8020E60C: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x8020E610: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8020E614: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8020E618: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x8020E61C: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
L_8020E620:
    // 0x8020E620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020E628: jr          $ra
    // 0x8020E62C: nop

    TRACE_RETURN()
    return;
    // 0x8020E62C: nop

;}
RECOMP_FUNC void func_80211214_6701C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211214: jr          $ra
    // 0x80211218: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80211218: sw          $a1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8020F734_66E6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F734: addiu       $t6, $a0, -0x12C
    ctx->r14 = ADD32(ctx->r4, -0X12C);
    // 0x8020F738: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020F73C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8020F740: sltiu       $at, $t6, 0x52
    ctx->r1 = ctx->r14 < 0X52 ? 1 : 0;
    // 0x8020F744: beq         $at, $zero, L_8020F760
    if (ctx->r1 == 0) {
        // 0x8020F748: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8020F760;
    }
    // 0x8020F748: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8020F74C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F750: addu        $at, $at, $t6
    gpr jr_addend_8020F758 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8020F754: lw          $t6, 0x7554($at)
    ctx->r14 = ADD32(ctx->r1, 0X7554);
    // 0x8020F758: jr          $t6
    // 0x8020F75C: nop

    switch (jr_addend_8020F758 >> 2) {
        case 0: goto L_8020F768; break;
        case 1: goto L_8020F7B4; break;
        case 2: goto L_8020F7B4; break;
        case 3: goto L_8020F7B4; break;
        case 4: goto L_8020F7BC; break;
        case 5: goto L_8020F7C4; break;
        case 6: goto L_8020F810; break;
        case 7: goto L_8020F878; break;
        case 8: goto L_8020F878; break;
        case 9: goto L_8020F878; break;
        case 10: goto L_8020F878; break;
        case 11: goto L_8020F878; break;
        case 12: goto L_8020F880; break;
        case 13: goto L_8020F8C4; break;
        case 14: goto L_8020F8CC; break;
        case 15: goto L_8020F8CC; break;
        case 16: goto L_8020F8D4; break;
        case 17: goto L_8020F8D4; break;
        case 18: goto L_8020F8D4; break;
        case 19: goto L_8020F8D4; break;
        case 20: goto L_8020F8D4; break;
        case 21: goto L_8020F8DC; break;
        case 22: goto L_8020F8E4; break;
        case 23: goto L_8020F8EC; break;
        case 24: goto L_8020F8F4; break;
        case 25: goto L_8020F8FC; break;
        case 26: goto L_8020F904; break;
        case 27: goto L_8020F904; break;
        case 28: goto L_8020F90C; break;
        case 29: goto L_8020F90C; break;
        case 30: goto L_8020F914; break;
        case 31: goto L_8020F91C; break;
        case 32: goto L_8020F95C; break;
        case 33: goto L_8020F964; break;
        case 34: goto L_8020F96C; break;
        case 35: goto L_8020F974; break;
        case 36: goto L_8020F9C0; break;
        case 37: goto L_8020F9E8; break;
        case 38: goto L_8020F9F0; break;
        case 39: goto L_8020FA18; break;
        case 40: goto L_8020FA20; break;
        case 41: goto L_8020FA28; break;
        case 42: goto L_8020F760; break;
        case 43: goto L_8020F760; break;
        case 44: goto L_8020F760; break;
        case 45: goto L_8020F760; break;
        case 46: goto L_8020F760; break;
        case 47: goto L_8020F760; break;
        case 48: goto L_8020F760; break;
        case 49: goto L_8020F760; break;
        case 50: goto L_8020FA30; break;
        case 51: goto L_8020FA30; break;
        case 52: goto L_8020FA30; break;
        case 53: goto L_8020FA30; break;
        case 54: goto L_8020FA30; break;
        case 55: goto L_8020FA30; break;
        case 56: goto L_8020FA30; break;
        case 57: goto L_8020FA30; break;
        case 58: goto L_8020FA30; break;
        case 59: goto L_8020FA38; break;
        case 60: goto L_8020FA38; break;
        case 61: goto L_8020FA38; break;
        case 62: goto L_8020FA38; break;
        case 63: goto L_8020FA38; break;
        case 64: goto L_8020FA38; break;
        case 65: goto L_8020FA38; break;
        case 66: goto L_8020FA38; break;
        case 67: goto L_8020FA38; break;
        case 68: goto L_8020FA38; break;
        case 69: goto L_8020FA38; break;
        case 70: goto L_8020FA38; break;
        case 71: goto L_8020FA38; break;
        case 72: goto L_8020FA38; break;
        case 73: goto L_8020FA40; break;
        case 74: goto L_8020FA40; break;
        case 75: goto L_8020FA40; break;
        case 76: goto L_8020FA40; break;
        case 77: goto L_8020FA48; break;
        case 78: goto L_8020FA48; break;
        case 79: goto L_8020FA48; break;
        case 80: goto L_8020FA48; break;
        case 81: goto L_8020FA48; break;
        default: switch_error(__func__, 0x8020F758, 0x80217554);
    }
    // 0x8020F75C: nop

L_8020F760:
    // 0x8020F760: b           L_8020FA4C
    // 0x8020F764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FA4C;
    // 0x8020F764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F768:
    // 0x8020F768: lui         $at, 0xC361
    ctx->r1 = S32(0XC361 << 16);
    // 0x8020F76C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F770: nop

    // 0x8020F774: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8020F778: nop

    // 0x8020F77C: bc1fl       L_8020F790
    if (!c1cs) {
        // 0x8020F780: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_8020F790;
    }
    goto skip_0;
    // 0x8020F780: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_0:
    // 0x8020F784: b           L_8020FA4C
    // 0x8020F788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8020FA4C;
    // 0x8020F788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020F78C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_8020F790:
    // 0x8020F790: nop

    // 0x8020F794: c.lt.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl < ctx->f14.fl;
    // 0x8020F798: nop

    // 0x8020F79C: bc1f        L_8020F7AC
    if (!c1cs) {
        // 0x8020F7A0: nop
    
            goto L_8020F7AC;
    }
    // 0x8020F7A0: nop

    // 0x8020F7A4: b           L_8020FA4C
    // 0x8020F7A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8020FA4C;
    // 0x8020F7A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8020F7AC:
    // 0x8020F7AC: b           L_8020FA4C
    // 0x8020F7B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FA4C;
    // 0x8020F7B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F7B4:
    // 0x8020F7B4: b           L_8020FA4C
    // 0x8020F7B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8020FA4C;
    // 0x8020F7B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8020F7BC:
    // 0x8020F7BC: b           L_8020FA4C
    // 0x8020F7C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8020FA4C;
    // 0x8020F7C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8020F7C4:
    // 0x8020F7C4: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x8020F7C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F7CC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8020F7D0: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x8020F7D4: nop

    // 0x8020F7D8: bc1fl       L_8020F7EC
    if (!c1cs) {
        // 0x8020F7DC: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_8020F7EC;
    }
    goto skip_1;
    // 0x8020F7DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_1:
    // 0x8020F7E0: b           L_8020FA4C
    // 0x8020F7E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8020FA4C;
    // 0x8020F7E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8020F7E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_8020F7EC:
    // 0x8020F7EC: nop

    // 0x8020F7F0: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8020F7F4: nop

    // 0x8020F7F8: bc1f        L_8020F808
    if (!c1cs) {
        // 0x8020F7FC: nop
    
            goto L_8020F808;
    }
    // 0x8020F7FC: nop

    // 0x8020F800: b           L_8020FA4C
    // 0x8020F804: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8020FA4C;
    // 0x8020F804: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8020F808:
    // 0x8020F808: b           L_8020FA4C
    // 0x8020F80C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8020FA4C;
    // 0x8020F80C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8020F810:
    // 0x8020F810: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x8020F814: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020F818: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8020F81C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8020F820: nop

    // 0x8020F824: bc1fl       L_8020F838
    if (!c1cs) {
        // 0x8020F828: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_8020F838;
    }
    goto skip_2;
    // 0x8020F828: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_2:
    // 0x8020F82C: b           L_8020FA4C
    // 0x8020F830: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8020FA4C;
    // 0x8020F830: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8020F834: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_8020F838:
    // 0x8020F838: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F83C: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8020F840: nop

    // 0x8020F844: bc1f        L_8020F854
    if (!c1cs) {
        // 0x8020F848: nop
    
            goto L_8020F854;
    }
    // 0x8020F848: nop

    // 0x8020F84C: b           L_8020FA4C
    // 0x8020F850: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8020FA4C;
    // 0x8020F850: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8020F854:
    // 0x8020F854: lwc1        $f4, 0x769C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X769C);
    // 0x8020F858: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8020F85C: nop

    // 0x8020F860: bc1f        L_8020F870
    if (!c1cs) {
        // 0x8020F864: nop
    
            goto L_8020F870;
    }
    // 0x8020F864: nop

    // 0x8020F868: b           L_8020FA4C
    // 0x8020F86C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8020FA4C;
    // 0x8020F86C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8020F870:
    // 0x8020F870: b           L_8020FA4C
    // 0x8020F874: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8020FA4C;
    // 0x8020F874: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8020F878:
    // 0x8020F878: b           L_8020FA4C
    // 0x8020F87C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8020FA4C;
    // 0x8020F87C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8020F880:
    // 0x8020F880: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x8020F884: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020F888: lui         $at, 0xC382
    ctx->r1 = S32(0XC382 << 16);
    // 0x8020F88C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8020F890: nop

    // 0x8020F894: bc1f        L_8020F8BC
    if (!c1cs) {
        // 0x8020F898: nop
    
            goto L_8020F8BC;
    }
    // 0x8020F898: nop

    // 0x8020F89C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F8A0: nop

    // 0x8020F8A4: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x8020F8A8: nop

    // 0x8020F8AC: bc1f        L_8020F8BC
    if (!c1cs) {
        // 0x8020F8B0: nop
    
            goto L_8020F8BC;
    }
    // 0x8020F8B0: nop

    // 0x8020F8B4: b           L_8020FA4C
    // 0x8020F8B8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_8020FA4C;
    // 0x8020F8B8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_8020F8BC:
    // 0x8020F8BC: b           L_8020FA4C
    // 0x8020F8C0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_8020FA4C;
    // 0x8020F8C0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8020F8C4:
    // 0x8020F8C4: b           L_8020FA4C
    // 0x8020F8C8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_8020FA4C;
    // 0x8020F8C8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_8020F8CC:
    // 0x8020F8CC: b           L_8020FA4C
    // 0x8020F8D0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8020FA4C;
    // 0x8020F8D0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8020F8D4:
    // 0x8020F8D4: b           L_8020FA4C
    // 0x8020F8D8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
        goto L_8020FA4C;
    // 0x8020F8D8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_8020F8DC:
    // 0x8020F8DC: b           L_8020FA4C
    // 0x8020F8E0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_8020FA4C;
    // 0x8020F8E0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_8020F8E4:
    // 0x8020F8E4: b           L_8020FA4C
    // 0x8020F8E8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
        goto L_8020FA4C;
    // 0x8020F8E8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_8020F8EC:
    // 0x8020F8EC: b           L_8020FA4C
    // 0x8020F8F0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_8020FA4C;
    // 0x8020F8F0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_8020F8F4:
    // 0x8020F8F4: b           L_8020FA4C
    // 0x8020F8F8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
        goto L_8020FA4C;
    // 0x8020F8F8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_8020F8FC:
    // 0x8020F8FC: b           L_8020FA4C
    // 0x8020F900: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
        goto L_8020FA4C;
    // 0x8020F900: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_8020F904:
    // 0x8020F904: b           L_8020FA4C
    // 0x8020F908: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
        goto L_8020FA4C;
    // 0x8020F908: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_8020F90C:
    // 0x8020F90C: b           L_8020FA4C
    // 0x8020F910: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_8020FA4C;
    // 0x8020F910: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_8020F914:
    // 0x8020F914: b           L_8020FA4C
    // 0x8020F918: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
        goto L_8020FA4C;
    // 0x8020F918: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_8020F91C:
    // 0x8020F91C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8020F920: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020F924: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020F928: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x8020F92C: nop

    // 0x8020F930: bc1f        L_8020F954
    if (!c1cs) {
        // 0x8020F934: nop
    
            goto L_8020F954;
    }
    // 0x8020F934: nop

    // 0x8020F938: lwc1        $f16, 0x76A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X76A0);
    // 0x8020F93C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8020F940: nop

    // 0x8020F944: bc1f        L_8020F954
    if (!c1cs) {
        // 0x8020F948: nop
    
            goto L_8020F954;
    }
    // 0x8020F948: nop

    // 0x8020F94C: b           L_8020FA4C
    // 0x8020F950: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
        goto L_8020FA4C;
    // 0x8020F950: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
L_8020F954:
    // 0x8020F954: b           L_8020FA4C
    // 0x8020F958: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
        goto L_8020FA4C;
    // 0x8020F958: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
L_8020F95C:
    // 0x8020F95C: b           L_8020FA4C
    // 0x8020F960: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_8020FA4C;
    // 0x8020F960: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_8020F964:
    // 0x8020F964: b           L_8020FA4C
    // 0x8020F968: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
        goto L_8020FA4C;
    // 0x8020F968: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
L_8020F96C:
    // 0x8020F96C: b           L_8020FA4C
    // 0x8020F970: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
        goto L_8020FA4C;
    // 0x8020F970: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_8020F974:
    // 0x8020F974: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x8020F978: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020F97C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8020F980: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x8020F984: nop

    // 0x8020F988: bc1fl       L_8020F99C
    if (!c1cs) {
        // 0x8020F98C: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_8020F99C;
    }
    goto skip_3;
    // 0x8020F98C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_3:
    // 0x8020F990: b           L_8020FA4C
    // 0x8020F994: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
        goto L_8020FA4C;
    // 0x8020F994: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8020F998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_8020F99C:
    // 0x8020F99C: nop

    // 0x8020F9A0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8020F9A4: nop

    // 0x8020F9A8: bc1f        L_8020F9B8
    if (!c1cs) {
        // 0x8020F9AC: nop
    
            goto L_8020F9B8;
    }
    // 0x8020F9AC: nop

    // 0x8020F9B0: b           L_8020FA4C
    // 0x8020F9B4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_8020FA4C;
    // 0x8020F9B4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_8020F9B8:
    // 0x8020F9B8: b           L_8020FA4C
    // 0x8020F9BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_8020FA4C;
    // 0x8020F9BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_8020F9C0:
    // 0x8020F9C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8020F9C4: nop

    // 0x8020F9C8: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8020F9CC: nop

    // 0x8020F9D0: bc1f        L_8020F9E0
    if (!c1cs) {
        // 0x8020F9D4: nop
    
            goto L_8020F9E0;
    }
    // 0x8020F9D4: nop

    // 0x8020F9D8: b           L_8020FA4C
    // 0x8020F9DC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
        goto L_8020FA4C;
    // 0x8020F9DC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_8020F9E0:
    // 0x8020F9E0: b           L_8020FA4C
    // 0x8020F9E4: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
        goto L_8020FA4C;
    // 0x8020F9E4: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_8020F9E8:
    // 0x8020F9E8: b           L_8020FA4C
    // 0x8020F9EC: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
        goto L_8020FA4C;
    // 0x8020F9EC: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
L_8020F9F0:
    // 0x8020F9F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020F9F4: nop

    // 0x8020F9F8: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x8020F9FC: nop

    // 0x8020FA00: bc1f        L_8020FA10
    if (!c1cs) {
        // 0x8020FA04: nop
    
            goto L_8020FA10;
    }
    // 0x8020FA04: nop

    // 0x8020FA08: b           L_8020FA4C
    // 0x8020FA0C: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
        goto L_8020FA4C;
    // 0x8020FA0C: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
L_8020FA10:
    // 0x8020FA10: b           L_8020FA4C
    // 0x8020FA14: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
        goto L_8020FA4C;
    // 0x8020FA14: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
L_8020FA18:
    // 0x8020FA18: b           L_8020FA4C
    // 0x8020FA1C: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
        goto L_8020FA4C;
    // 0x8020FA1C: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
L_8020FA20:
    // 0x8020FA20: b           L_8020FA4C
    // 0x8020FA24: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
        goto L_8020FA4C;
    // 0x8020FA24: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
L_8020FA28:
    // 0x8020FA28: b           L_8020FA4C
    // 0x8020FA2C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
        goto L_8020FA4C;
    // 0x8020FA2C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_8020FA30:
    // 0x8020FA30: b           L_8020FA4C
    // 0x8020FA34: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
        goto L_8020FA4C;
    // 0x8020FA34: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
L_8020FA38:
    // 0x8020FA38: b           L_8020FA4C
    // 0x8020FA3C: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
        goto L_8020FA4C;
    // 0x8020FA3C: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
L_8020FA40:
    // 0x8020FA40: b           L_8020FA4C
    // 0x8020FA44: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
        goto L_8020FA4C;
    // 0x8020FA44: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
L_8020FA48:
    // 0x8020FA48: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
L_8020FA4C:
    // 0x8020FA4C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8020FA50: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8020FA54: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x8020FA58: addiu       $t8, $t8, 0x6BF0
    ctx->r24 = ADD32(ctx->r24, 0X6BF0);
    // 0x8020FA5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8020FA60: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8020FA64: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8020FA68: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    // 0x8020FA6C: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x8020FA70: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8020FA74: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x8020FA78: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8020FA7C: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8020FA80: jr          $ra
    // 0x8020FA84: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8020FA84: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8020E34C_66D2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E34C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020E350: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8020E354: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8020E358: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020E35C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8020E360: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020E364: bc1fl       L_8020E384
    if (!c1cs) {
        // 0x8020E368: lwc1        $f8, 0xC($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8020E384;
    }
    goto skip_0;
    // 0x8020E368: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8020E36C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020E370: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020E374: sub.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8020E378: b           L_8020E388
    // 0x8020E37C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020E388;
    // 0x8020E37C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8020E380: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
L_8020E384:
    // 0x8020E384: sub.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f12.fl;
L_8020E388:
    // 0x8020E388: ldc1        $f18, 0x73B8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X73B8);
    // 0x8020E38C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8020E390: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x8020E394: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x8020E398: nop

    // 0x8020E39C: bc1fl       L_8020E41C
    if (!c1cs) {
        // 0x8020E3A0: lwc1        $f2, 0x0($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8020E41C;
    }
    goto skip_1;
    // 0x8020E3A0: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    skip_1:
    // 0x8020E3A4: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8020E3A8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020E3AC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8020E3B0: nop

    // 0x8020E3B4: bc1fl       L_8020E3CC
    if (!c1cs) {
        // 0x8020E3B8: sub.s       $f0, $f2, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_8020E3CC;
    }
    goto skip_2;
    // 0x8020E3B8: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
    skip_2:
    // 0x8020E3BC: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x8020E3C0: b           L_8020E3CC
    // 0x8020E3C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020E3CC;
    // 0x8020E3C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8020E3C8: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
L_8020E3CC:
    // 0x8020E3CC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8020E3D0: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x8020E3D4: nop

    // 0x8020E3D8: bc1fl       L_8020E41C
    if (!c1cs) {
        // 0x8020E3DC: lwc1        $f2, 0x0($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8020E41C;
    }
    goto skip_3;
    // 0x8020E3DC: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    skip_3:
    // 0x8020E3E0: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8020E3E4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8020E3E8: nop

    // 0x8020E3EC: bc1fl       L_8020E404
    if (!c1cs) {
        // 0x8020E3F0: sub.s       $f0, $f2, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
            goto L_8020E404;
    }
    goto skip_4;
    // 0x8020E3F0: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
    skip_4:
    // 0x8020E3F4: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8020E3F8: b           L_8020E404
    // 0x8020E3FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020E404;
    // 0x8020E3FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8020E400: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
L_8020E404:
    // 0x8020E404: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8020E408: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x8020E40C: nop

    // 0x8020E410: bc1t        L_8020E490
    if (c1cs) {
        // 0x8020E414: nop
    
            goto L_8020E490;
    }
    // 0x8020E414: nop

    // 0x8020E418: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
L_8020E41C:
    // 0x8020E41C: swc1        $f14, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f14.u32l;
    // 0x8020E420: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8020E424: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8020E428: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x8020E42C: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x8020E430: bc1fl       L_8020E44C
    if (!c1cs) {
        // 0x8020E434: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8020E44C;
    }
    goto skip_5;
    // 0x8020E434: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_5:
    // 0x8020E438: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020E43C: sub.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8020E440: b           L_8020E450
    // 0x8020E444: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020E450;
    // 0x8020E444: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8020E448: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_8020E44C:
    // 0x8020E44C: sub.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f2.fl;
L_8020E450:
    // 0x8020E450: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8020E454: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8020E458: div.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f14.d);
    // 0x8020E45C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020E460: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8020E464: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8020E468: bc1f        L_8020E47C
    if (!c1cs) {
        // 0x8020E46C: swc1        $f8, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
            goto L_8020E47C;
    }
    // 0x8020E46C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8020E470: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8020E474: b           L_8020E480
    // 0x8020E478: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020E480;
    // 0x8020E478: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8020E47C:
    // 0x8020E47C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8020E480:
    // 0x8020E480: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8020E484: div.d       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f14.d);
    // 0x8020E488: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8020E48C: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
L_8020E490:
    // 0x8020E490: jr          $ra
    // 0x8020E494: nop

    TRACE_RETURN()
    return;
    // 0x8020E494: nop

;}
RECOMP_FUNC void func_80213AC8_672A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213AC8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80213ACC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80213AD0: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x80213AD4: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x80213AD8: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x80213ADC: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x80213AE0: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x80213AE4: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x80213AE8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x80213AEC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x80213AF0: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x80213AF4: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x80213AF8: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x80213AFC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x80213B00: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80213B04: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80213B08: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x80213B0C: lui         $s6, 0x3
    ctx->r22 = S32(0X3 << 16);
    // 0x80213B10: ori         $s6, $s6, 0x8000
    ctx->r22 = ctx->r22 | 0X8000;
    // 0x80213B14: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x80213B18: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80213B1C: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x80213B20: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80213B24: blez        $v1, L_80213CD0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80213B28: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_80213CD0;
    }
    // 0x80213B28: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80213B2C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80213B30: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x80213B34: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x80213B38: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x80213B3C: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x80213B40: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80213B44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80213B48: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80213B4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213B50: lui         $s5, 0x8016
    ctx->r21 = S32(0X8016 << 16);
    // 0x80213B54: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x80213B58: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80213B5C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80213B60: addiu       $s5, $s5, -0x3A38
    ctx->r21 = ADD32(ctx->r21, -0X3A38);
    // 0x80213B64: ldc1        $f20, 0x7938($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X7938);
    // 0x80213B68: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80213B6C:
    // 0x80213B6C: blez        $v0, L_80213CC0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80213B70: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80213CC0;
    }
    // 0x80213B70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80213B74: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80213B78: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80213B7C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
L_80213B80:
    // 0x80213B80: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80213B84: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x80213B88: lhu         $t8, 0x2DCE($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DCE);
    // 0x80213B8C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80213B90: bgez        $t8, L_80213BA8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80213B94: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80213BA8;
    }
    // 0x80213B94: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80213B98: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80213B9C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80213BA0: nop

    // 0x80213BA4: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80213BA8:
    // 0x80213BA8: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80213BAC: mul.d       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80213BB0: mtc1        $s2, $f18
    ctx->f18.u32l = ctx->r18;
    // 0x80213BB4: subu        $t0, $t9, $s4
    ctx->r8 = SUB32(ctx->r25, ctx->r20);
    // 0x80213BB8: multu       $t0, $s7
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80213BBC: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80213BC0: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x80213BC4: mflo        $t1
    ctx->r9 = lo;
    // 0x80213BC8: addiu       $t2, $t1, 0x5
    ctx->r10 = ADD32(ctx->r9, 0X5);
    // 0x80213BCC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80213BD0: add.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f16.d + ctx->f4.d;
    // 0x80213BD4: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x80213BD8: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x80213BDC: mul.d       $f16, $f18, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f26.d);
    // 0x80213BE0: trunc.w.d   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x80213BE4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80213BE8: jal         0x80003E10
    // 0x80213BEC: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x80213BEC: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_0:
    // 0x80213BF0: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80213BF4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x80213BF8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80213BFC: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x80213C00: lhu         $t8, 0x2DCE($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DCE);
    // 0x80213C04: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80213C08: bgez        $t8, L_80213C20
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80213C0C: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_80213C20;
    }
    // 0x80213C0C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80213C10: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80213C14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80213C18: nop

    // 0x80213C1C: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_80213C20:
    // 0x80213C20: mul.d       $f18, $f8, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x80213C24: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80213C28: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x80213C2C: subu        $t0, $t9, $s4
    ctx->r8 = SUB32(ctx->r25, ctx->r20);
    // 0x80213C30: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80213C34: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80213C38: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80213C3C: mul.d       $f16, $f18, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x80213C40: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80213C44: nop

    // 0x80213C48: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x80213C4C: add.d       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f16.d + ctx->f6.d;
    // 0x80213C50: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x80213C54: mul.d       $f16, $f4, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x80213C58: trunc.w.d   $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x80213C5C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80213C60: jal         0x80003E10
    // 0x80213C64: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x80213C64: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_1:
    // 0x80213C68: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x80213C6C: add.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x80213C70: lw          $t6, 0x58($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X58);
    // 0x80213C74: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x80213C78: multu       $s4, $t0
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80213C7C: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x80213C80: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80213C84: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80213C88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80213C8C: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x80213C90: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80213C94: mflo        $t1
    ctx->r9 = lo;
    // 0x80213C98: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80213C9C: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x80213CA0: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x80213CA4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80213CA8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80213CAC: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80213CB0: bnel        $at, $zero, L_80213B80
    if (ctx->r1 != 0) {
        // 0x80213CB4: lw          $t6, 0x0($s5)
        ctx->r14 = MEM_W(ctx->r21, 0X0);
            goto L_80213B80;
    }
    goto skip_0;
    // 0x80213CB4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    skip_0:
    // 0x80213CB8: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x80213CBC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_80213CC0:
    // 0x80213CC0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80213CC4: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80213CC8: bne         $at, $zero, L_80213B6C
    if (ctx->r1 != 0) {
        // 0x80213CCC: nop
    
            goto L_80213B6C;
    }
    // 0x80213CCC: nop

L_80213CD0:
    // 0x80213CD0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80213CD4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80213CD8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80213CDC: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x80213CE0: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x80213CE4: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x80213CE8: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x80213CEC: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80213CF0: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80213CF4: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x80213CF8: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80213CFC: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x80213D00: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x80213D04: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x80213D08: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x80213D0C: jr          $ra
    // 0x80213D10: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80213D10: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802112C0_670270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802112C4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802112C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802112CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802112D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802112D4: lw          $t7, 0x74($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X74);
    // 0x802112D8: addiu       $s0, $a0, 0x5C
    ctx->r16 = ADD32(ctx->r4, 0X5C);
    // 0x802112DC: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x802112E0: bnel        $at, $zero, L_80211324
    if (ctx->r1 != 0) {
        // 0x802112E4: lw          $s0, 0x38($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X38);
            goto L_80211324;
    }
    goto skip_0;
    // 0x802112E4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x802112E8: jal         0x8020F618
    // 0x802112EC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8020F618_66E5C8(rdram, ctx);
        goto after_0;
    // 0x802112EC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x802112F0: jal         0x8003731C
    // 0x802112F4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_8003731C_37F1C(rdram, ctx);
        goto after_1;
    // 0x802112F4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_1:
    // 0x802112F8: jal         0x8020F618
    // 0x802112FC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8020F618_66E5C8(rdram, ctx);
        goto after_2;
    // 0x802112FC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_2:
    // 0x80211300: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80211304: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x80211308: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8021130C: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80211310: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80211314: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80211318: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8021131C: sb          $t9, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r25;
    // 0x80211320: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
L_80211324:
    // 0x80211324: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211328: addiu       $a0, $a0, 0x7ED0
    ctx->r4 = ADD32(ctx->r4, 0X7ED0);
    // 0x8021132C: lw          $t2, 0x6C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X6C);
    // 0x80211330: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80211334: or          $t1, $a0, $at
    ctx->r9 = ctx->r4 | ctx->r1;
    // 0x80211338: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8021133C: jal         0x800108BC
    // 0x80211340: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    func_800108BC_114BC(rdram, ctx);
        goto after_3;
    // 0x80211340: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    after_3:
    // 0x80211344: addiu       $t3, $zero, 0xF0
    ctx->r11 = ADD32(0, 0XF0);
    // 0x80211348: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8021134C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80211350: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80211354: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80211358: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x8021135C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80211360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80211364: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80211368: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8021136C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80211370: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80211374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211378: jal         0x800108E4
    // 0x8021137C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_4;
    // 0x8021137C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_4:
    // 0x80211380: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x80211384: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x80211388: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8021138C: lw          $v1, 0x30($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X30);
    // 0x80211390: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80211394: subu        $t8, $a2, $v1
    ctx->r24 = SUB32(ctx->r6, ctx->r3);
    // 0x80211398: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x8021139C: and         $a1, $t9, $a2
    ctx->r5 = ctx->r25 & ctx->r6;
    // 0x802113A0: jal         0x80040620
    // 0x802113A4: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x802113A4: and         $a0, $v1, $a2
    ctx->r4 = ctx->r3 & ctx->r6;
    after_5:
    // 0x802113A8: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x802113AC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x802113B0: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x802113B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802113B8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802113BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802113C0: jr          $ra
    // 0x802113C4: nop

    TRACE_RETURN()
    return;
    // 0x802113C4: nop

;}
RECOMP_FUNC void func_8021296C_67191C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021296C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80212970: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80212974: lw          $t7, 0x7F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F40);
    // 0x80212978: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021297C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80212980: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80212984: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80212988: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x8021298C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80212990: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80212994: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80212998: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8021299C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802129A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802129A4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802129A8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802129AC: jal         0x800106F0
    // 0x802129B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802129B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x802129B4: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802129B8: lw          $t0, 0x7F44($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7F44);
    // 0x802129BC: addiu       $a2, $s2, 0x14
    ctx->r6 = ADD32(ctx->r18, 0X14);
    // 0x802129C0: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x802129C4: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x802129C8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802129CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802129D0: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x802129D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802129D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x802129DC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802129E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802129E4: jal         0x800106F0
    // 0x802129E8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x802129E8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x802129EC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x802129F0: lw          $t3, 0x7F44($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7F44);
    // 0x802129F4: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x802129F8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x802129FC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80212A00: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80212A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212A08: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80212A0C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212A10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212A14: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212A18: jal         0x800106F0
    // 0x80212A1C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x80212A1C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_2:
    // 0x80212A20: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80212A24: lw          $t5, 0x7F44($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7F44);
    // 0x80212A28: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80212A2C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80212A30: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80212A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212A38: addiu       $a2, $s2, 0x24
    ctx->r6 = ADD32(ctx->r18, 0X24);
    // 0x80212A3C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212A40: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212A44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212A48: jal         0x800106F0
    // 0x80212A4C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x80212A4C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_3:
    // 0x80212A50: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80212A54: lw          $t7, 0x7F40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F40);
    // 0x80212A58: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80212A5C: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x80212A60: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80212A64: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80212A68: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80212A6C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80212A70: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212A74: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80212A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212A7C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80212A80: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212A84: jal         0x800106F0
    // 0x80212A88: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x80212A88: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_4:
    // 0x80212A8C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80212A90: lw          $t1, 0x7F44($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7F44);
    // 0x80212A94: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x80212A98: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80212A9C: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x80212AA0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80212AA4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80212AA8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80212AAC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80212AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212AB4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80212AB8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80212ABC: jal         0x800106F0
    // 0x80212AC0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_800106F0_112F0(rdram, ctx);
        goto after_5;
    // 0x80212AC0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_5:
    // 0x80212AC4: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80212AC8: lw          $t5, 0x7F30($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7F30);
    // 0x80212ACC: addiu       $a2, $s2, -0x3
    ctx->r6 = ADD32(ctx->r18, -0X3);
    // 0x80212AD0: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x80212AD4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80212AD8: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x80212ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212AE0: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x80212AE4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x80212AE8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80212AEC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212AF0: jal         0x800106F0
    // 0x80212AF4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800106F0_112F0(rdram, ctx);
        goto after_6;
    // 0x80212AF4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_6:
    // 0x80212AF8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80212AFC: lw          $t7, 0x7F20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F20);
    // 0x80212B00: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80212B04: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80212B08: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80212B0C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80212B10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80212B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212B18: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80212B1C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80212B20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80212B24: jal         0x800106F0
    // 0x80212B28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_7;
    // 0x80212B28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_7:
    // 0x80212B2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80212B30: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80212B34: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80212B38: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80212B3C: jr          $ra
    // 0x80212B40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80212B40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8020E810_66D7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E810: beq         $a0, $zero, L_8020E830
    if (ctx->r4 == 0) {
        // 0x8020E814: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8020E830;
    }
    // 0x8020E814: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8020E818: addiu       $a1, $v0, 0x68
    ctx->r5 = ADD32(ctx->r2, 0X68);
    // 0x8020E81C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8020E820: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_8020E824:
    // 0x8020E824: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8020E828: bne         $a0, $v0, L_8020E824
    if (ctx->r4 != ctx->r2) {
        // 0x8020E82C: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8020E824;
    }
    // 0x8020E82C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
L_8020E830:
    // 0x8020E830: jr          $ra
    // 0x8020E834: nop

    TRACE_RETURN()
    return;
    // 0x8020E834: nop

;}
RECOMP_FUNC void func_8020F170_66E120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F170: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8020F174: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8020F178: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8020F17C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8020F180: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8020F184: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8020F188: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8020F18C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020F190: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8020F194: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8020F198:
    // 0x8020F198: bnel        $v0, $v1, L_8020F198
    if (ctx->r2 != ctx->r3) {
        // 0x8020F19C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8020F198;
    }
    goto skip_0;
    // 0x8020F19C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x8020F1A0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020F1A4: addiu       $a1, $a1, -0x121C
    ctx->r5 = ADD32(ctx->r5, -0X121C);
    // 0x8020F1A8: jal         0x80034E08
    // 0x8020F1AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020F1AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020F1B0: bne         $v0, $zero, L_8020F1C0
    if (ctx->r2 != 0) {
        // 0x8020F1B4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8020F1C0;
    }
    // 0x8020F1B4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8020F1B8: b           L_8020F3A4
    // 0x8020F1BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020F3A4;
    // 0x8020F1BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F1C0:
    // 0x8020F1C0: jal         0x8020F118
    // 0x8020F1C4: nop

    func_8020F118_66E0C8(rdram, ctx);
        goto after_1;
    // 0x8020F1C4: nop

    after_1:
    // 0x8020F1C8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8020F1CC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8020F1D0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020F1D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020F1D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020F1DC: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    // 0x8020F1E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F1E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020F1E8: jal         0x80035EEC
    // 0x8020F1EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x8020F1EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8020F1F0: bne         $v0, $zero, L_8020F208
    if (ctx->r2 != 0) {
        // 0x8020F1F4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8020F208;
    }
    // 0x8020F1F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8020F1F8: jal         0x8020F13C
    // 0x8020F1FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020F13C_66E0EC(rdram, ctx);
        goto after_3;
    // 0x8020F1FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x8020F200: b           L_8020F3A4
    // 0x8020F204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020F3A4;
    // 0x8020F204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F208:
    // 0x8020F208: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8020F20C: addiu       $t9, $t9, 0x6A48
    ctx->r25 = ADD32(ctx->r25, 0X6A48);
    // 0x8020F210: lui         $at, 0x5000
    ctx->r1 = S32(0X5000 << 16);
    // 0x8020F214: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8020F218: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8020F21C: sb          $t8, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r24;
    // 0x8020F220: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
    // 0x8020F224: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    // 0x8020F228: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F22C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020F230: jal         0x80035EEC
    // 0x8020F234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x8020F234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8020F238: bne         $v0, $zero, L_8020F250
    if (ctx->r2 != 0) {
        // 0x8020F23C: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_8020F250;
    }
    // 0x8020F23C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8020F240: jal         0x8020F13C
    // 0x8020F244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8020F13C_66E0EC(rdram, ctx);
        goto after_5;
    // 0x8020F244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8020F248: b           L_8020F3A4
    // 0x8020F24C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020F3A4;
    // 0x8020F24C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020F250:
    // 0x8020F250: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x8020F254: addiu       $t2, $t2, 0x6A40
    ctx->r10 = ADD32(ctx->r10, 0X6A40);
    // 0x8020F258: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x8020F25C: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x8020F260: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x8020F264: sw          $t3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r11;
    // 0x8020F268: beq         $s0, $zero, L_8020F284
    if (ctx->r16 == 0) {
        // 0x8020F26C: sb          $zero, 0x5($v0)
        MEM_B(0X5, ctx->r2) = 0;
            goto L_8020F284;
    }
    // 0x8020F26C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8020F270: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020F274: beq         $s0, $at, L_8020F298
    if (ctx->r16 == ctx->r1) {
        // 0x8020F278: lui         $t5, 0x8021
        ctx->r13 = S32(0X8021 << 16);
            goto L_8020F298;
    }
    // 0x8020F278: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x8020F27C: b           L_8020F2D0
    // 0x8020F280: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
        goto L_8020F2D0;
    // 0x8020F280: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
L_8020F284:
    // 0x8020F284: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x8020F288: addiu       $t4, $t4, -0x1048
    ctx->r12 = ADD32(ctx->r12, -0X1048);
    // 0x8020F28C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x8020F290: b           L_8020F2D0
    // 0x8020F294: sw          $t4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r12;
        goto L_8020F2D0;
    // 0x8020F294: sw          $t4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r12;
L_8020F298:
    // 0x8020F298: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x8020F29C: addiu       $t5, $t5, 0x1424
    ctx->r13 = ADD32(ctx->r13, 0X1424);
    // 0x8020F2A0: sw          $t5, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r13;
    // 0x8020F2A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F2A8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8020F2AC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x8020F2B0: jal         0x8021121C
    // 0x8020F2B4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_8021121C_6701CC(rdram, ctx);
        goto after_6;
    // 0x8020F2B4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_6:
    // 0x8020F2B8: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x8020F2BC: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x8020F2C0: sw          $t6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r14;
    // 0x8020F2C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F2C8: jal         0x80211214
    // 0x8020F2CC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_80211214_6701C4(rdram, ctx);
        goto after_7;
    // 0x8020F2CC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_7:
L_8020F2D0:
    // 0x8020F2D0: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8020F2D4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8020F2D8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8020F2DC: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020F2E0: sw          $a1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r5;
    // 0x8020F2E4: sw          $a3, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r7;
    // 0x8020F2E8: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x8020F2EC: swc1        $f2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f2.u32l;
    // 0x8020F2F0: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8020F2F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F2F8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8020F2FC: jal         0x8020E930
    // 0x8020F300: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    func_8020E930_66D8E0(rdram, ctx);
        goto after_8;
    // 0x8020F300: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x8020F304: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8020F308: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x8020F30C: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x8020F310: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8020F314: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8020F318: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x8020F31C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x8020F320: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8020F324: jal         0x8020F734
    // 0x8020F328: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_8020F734_66E6E4(rdram, ctx);
        goto after_9;
    // 0x8020F328: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x8020F32C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8020F330: lw          $t9, 0x6BE0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6BE0);
    // 0x8020F334: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F338: jal         0x8020E588
    // 0x8020F33C: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
    func_8020E588_66D538(rdram, ctx);
        goto after_10;
    // 0x8020F33C: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
    after_10:
    // 0x8020F340: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8020F344: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8020F348: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8020F34C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8020F350: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020F354: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8020F358: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8020F35C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020F360: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8020F364: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8020F368: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x8020F36C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x8020F370: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8020F374: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8020F378: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8020F37C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8020F380: jal         0x8020E300
    // 0x8020F384: nop

    func_8020E300_66D2B0(rdram, ctx);
        goto after_11;
    // 0x8020F384: nop

    after_11:
    // 0x8020F388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8020F38C: jal         0x800119D4
    // 0x8020F390: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800119D4_125D4(rdram, ctx);
        goto after_12;
    // 0x8020F390: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_12:
    // 0x8020F394: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8020F398: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8020F39C: sw          $t0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r8;
    // 0x8020F3A0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8020F3A4:
    // 0x8020F3A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8020F3A8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8020F3AC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8020F3B0: jr          $ra
    // 0x8020F3B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8020F3B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8020E8E8_66D898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E8E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020E8EC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8020E8F0: beq         $a0, $zero, L_8020E928
    if (ctx->r4 == 0) {
        // 0x8020E8F4: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_8020E928;
    }
    // 0x8020E8F4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8020E8F8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020E8FC: lw          $v1, 0x40($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X40);
    // 0x8020E900: beq         $v1, $zero, L_8020E928
    if (ctx->r3 == 0) {
        // 0x8020E904: nop
    
            goto L_8020E928;
    }
    // 0x8020E904: nop

    // 0x8020E908: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x8020E90C: lw          $t6, 0x40($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X40);
    // 0x8020E910: swc1        $f14, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f14.u32l;
    // 0x8020E914: lw          $t7, 0x40($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X40);
    // 0x8020E918: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8020E91C: swc1        $f4, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f4.u32l;
    // 0x8020E920: lw          $t8, 0x40($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X40);
    // 0x8020E924: sb          $zero, 0x64($t8)
    MEM_B(0X64, ctx->r24) = 0;
L_8020E928:
    // 0x8020E928: jr          $ra
    // 0x8020E92C: nop

    TRACE_RETURN()
    return;
    // 0x8020E92C: nop

;}
RECOMP_FUNC void func_80212370_671320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212370: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212374: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80212378: beq         $a3, $at, L_802123A0
    if (ctx->r7 == ctx->r1) {
        // 0x8021237C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_802123A0;
    }
    // 0x8021237C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212380: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80212384: beq         $a3, $at, L_802123B0
    if (ctx->r7 == ctx->r1) {
        // 0x80212388: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802123B0;
    }
    // 0x80212388: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021238C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80212390: beq         $a3, $at, L_802123BC
    if (ctx->r7 == ctx->r1) {
        // 0x80212394: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802123BC;
    }
    // 0x80212394: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212398: b           L_802123E4
    // 0x8021239C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802123E4;
    // 0x8021239C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802123A0:
    // 0x802123A0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802123A4: lw          $v0, 0x7F90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F90);
    // 0x802123A8: b           L_802123C4
    // 0x802123AC: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_802123C4;
    // 0x802123AC: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_802123B0:
    // 0x802123B0: lw          $v0, 0x7FA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FA8);
    // 0x802123B4: b           L_802123C4
    // 0x802123B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802123C4;
    // 0x802123B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802123BC:
    // 0x802123BC: lw          $v0, 0x7FA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FA8);
    // 0x802123C0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_802123C4:
    // 0x802123C4: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802123C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802123CC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802123D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802123D4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802123D8: jal         0x800106F0
    // 0x802123DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802123DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x802123E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802123E4:
    // 0x802123E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802123E8: jr          $ra
    // 0x802123EC: nop

    TRACE_RETURN()
    return;
    // 0x802123EC: nop

;}
RECOMP_FUNC void func_802131A0_672150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802131A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802131A4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802131A8: lw          $t7, 0x7F58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F58);
    // 0x802131AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802131B0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802131B4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802131B8: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x802131BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802131C0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x802131C4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802131C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802131CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802131D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802131D4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802131D8: jal         0x800106F0
    // 0x802131DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802131DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x802131E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802131E4: lw          $t9, 0x7F64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F64);
    // 0x802131E8: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x802131EC: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x802131F0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x802131F4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802131F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802131FC: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x80213200: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213204: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80213208: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021320C: jal         0x800106F0
    // 0x80213210: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x80213210: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x80213214: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213218: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x8021321C: lw          $a3, -0x3950($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3950);
    // 0x80213220: addiu       $a2, $a2, 0x3
    ctx->r6 = ADD32(ctx->r6, 0X3);
    // 0x80213224: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x80213228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021322C: jal         0x802124EC
    // 0x80213230: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    func_802124EC_67149C(rdram, ctx);
        goto after_2;
    // 0x80213230: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    after_2:
    // 0x80213234: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80213238: lw          $t1, -0x3930($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3930);
    // 0x8021323C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80213240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213244: beq         $t1, $zero, L_80213270
    if (ctx->r9 == 0) {
        // 0x80213248: addiu       $a1, $s1, 0x40
        ctx->r5 = ADD32(ctx->r17, 0X40);
            goto L_80213270;
    }
    // 0x80213248: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x8021324C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80213250: lw          $t3, 0x7FA0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7FA0);
    // 0x80213254: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x80213258: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8021325C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80213260: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80213264: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80213268: jal         0x800106F0
    // 0x8021326C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x8021326C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_3:
L_80213270:
    // 0x80213270: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80213274: lw          $t4, -0x3940($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3940);
    // 0x80213278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021327C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80213280: beq         $t4, $zero, L_802132B4
    if (ctx->r12 == 0) {
        // 0x80213284: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_802132B4;
    }
    // 0x80213284: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80213288: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x8021328C: lw          $t6, 0x7F8C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F8C);
    // 0x80213290: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80213294: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80213298: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8021329C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802132A0: addiu       $a2, $a2, 0x1E
    ctx->r6 = ADD32(ctx->r6, 0X1E);
    // 0x802132A4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802132A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802132AC: jal         0x800106F0
    // 0x802132B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x802132B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_4:
L_802132B4:
    // 0x802132B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802132B8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x802132BC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x802132C0: jr          $ra
    // 0x802132C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802132C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80212010_670FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212018: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021201C: jal         0x800102E0
    // 0x80212020: lw          $a0, 0x7F10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F10);
    func_800102E0_10EE0(rdram, ctx);
        goto after_0;
    // 0x80212020: lw          $a0, 0x7F10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F10);
    after_0:
    // 0x80212024: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212028: jal         0x800102E0
    // 0x8021202C: lw          $a0, 0x7F14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F14);
    func_800102E0_10EE0(rdram, ctx);
        goto after_1;
    // 0x8021202C: lw          $a0, 0x7F14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F14);
    after_1:
    // 0x80212030: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212034: jal         0x800102E0
    // 0x80212038: lw          $a0, 0x7F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F18);
    func_800102E0_10EE0(rdram, ctx);
        goto after_2;
    // 0x80212038: lw          $a0, 0x7F18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F18);
    after_2:
    // 0x8021203C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212040: jal         0x800102E0
    // 0x80212044: lw          $a0, 0x7F1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F1C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_3;
    // 0x80212044: lw          $a0, 0x7F1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F1C);
    after_3:
    // 0x80212048: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021204C: jal         0x800102E0
    // 0x80212050: lw          $a0, 0x7F20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F20);
    func_800102E0_10EE0(rdram, ctx);
        goto after_4;
    // 0x80212050: lw          $a0, 0x7F20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F20);
    after_4:
    // 0x80212054: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212058: jal         0x800102E0
    // 0x8021205C: lw          $a0, 0x7F24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F24);
    func_800102E0_10EE0(rdram, ctx);
        goto after_5;
    // 0x8021205C: lw          $a0, 0x7F24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F24);
    after_5:
    // 0x80212060: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212064: jal         0x800102E0
    // 0x80212068: lw          $a0, 0x7F28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F28);
    func_800102E0_10EE0(rdram, ctx);
        goto after_6;
    // 0x80212068: lw          $a0, 0x7F28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F28);
    after_6:
    // 0x8021206C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212070: jal         0x800102E0
    // 0x80212074: lw          $a0, 0x7F2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F2C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_7;
    // 0x80212074: lw          $a0, 0x7F2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F2C);
    after_7:
    // 0x80212078: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021207C: jal         0x800102E0
    // 0x80212080: lw          $a0, 0x7F30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F30);
    func_800102E0_10EE0(rdram, ctx);
        goto after_8;
    // 0x80212080: lw          $a0, 0x7F30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F30);
    after_8:
    // 0x80212084: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212088: jal         0x800102E0
    // 0x8021208C: lw          $a0, 0x7F34($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F34);
    func_800102E0_10EE0(rdram, ctx);
        goto after_9;
    // 0x8021208C: lw          $a0, 0x7F34($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F34);
    after_9:
    // 0x80212090: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212094: jal         0x800102E0
    // 0x80212098: lw          $a0, 0x7F38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F38);
    func_800102E0_10EE0(rdram, ctx);
        goto after_10;
    // 0x80212098: lw          $a0, 0x7F38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F38);
    after_10:
    // 0x8021209C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120A0: jal         0x800102E0
    // 0x802120A4: lw          $a0, 0x7F3C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F3C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_11;
    // 0x802120A4: lw          $a0, 0x7F3C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F3C);
    after_11:
    // 0x802120A8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120AC: jal         0x800102E0
    // 0x802120B0: lw          $a0, 0x7F40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F40);
    func_800102E0_10EE0(rdram, ctx);
        goto after_12;
    // 0x802120B0: lw          $a0, 0x7F40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F40);
    after_12:
    // 0x802120B4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120B8: jal         0x800102E0
    // 0x802120BC: lw          $a0, 0x7F44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F44);
    func_800102E0_10EE0(rdram, ctx);
        goto after_13;
    // 0x802120BC: lw          $a0, 0x7F44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F44);
    after_13:
    // 0x802120C0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120C4: jal         0x800102E0
    // 0x802120C8: lw          $a0, 0x7F48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F48);
    func_800102E0_10EE0(rdram, ctx);
        goto after_14;
    // 0x802120C8: lw          $a0, 0x7F48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F48);
    after_14:
    // 0x802120CC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120D0: jal         0x800102E0
    // 0x802120D4: lw          $a0, 0x7F4C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F4C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_15;
    // 0x802120D4: lw          $a0, 0x7F4C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F4C);
    after_15:
    // 0x802120D8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120DC: jal         0x800102E0
    // 0x802120E0: lw          $a0, 0x7F50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F50);
    func_800102E0_10EE0(rdram, ctx);
        goto after_16;
    // 0x802120E0: lw          $a0, 0x7F50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F50);
    after_16:
    // 0x802120E4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120E8: jal         0x800102E0
    // 0x802120EC: lw          $a0, 0x7F54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F54);
    func_800102E0_10EE0(rdram, ctx);
        goto after_17;
    // 0x802120EC: lw          $a0, 0x7F54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F54);
    after_17:
    // 0x802120F0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802120F4: jal         0x800102E0
    // 0x802120F8: lw          $a0, 0x7F58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F58);
    func_800102E0_10EE0(rdram, ctx);
        goto after_18;
    // 0x802120F8: lw          $a0, 0x7F58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F58);
    after_18:
    // 0x802120FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212100: jal         0x800102E0
    // 0x80212104: lw          $a0, 0x7F5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F5C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_19;
    // 0x80212104: lw          $a0, 0x7F5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F5C);
    after_19:
    // 0x80212108: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021210C: jal         0x800102E0
    // 0x80212110: lw          $a0, 0x7F60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F60);
    func_800102E0_10EE0(rdram, ctx);
        goto after_20;
    // 0x80212110: lw          $a0, 0x7F60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F60);
    after_20:
    // 0x80212114: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212118: jal         0x800102E0
    // 0x8021211C: lw          $a0, 0x7F64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F64);
    func_800102E0_10EE0(rdram, ctx);
        goto after_21;
    // 0x8021211C: lw          $a0, 0x7F64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F64);
    after_21:
    // 0x80212120: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212124: jal         0x800102E0
    // 0x80212128: lw          $a0, 0x7F68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F68);
    func_800102E0_10EE0(rdram, ctx);
        goto after_22;
    // 0x80212128: lw          $a0, 0x7F68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F68);
    after_22:
    // 0x8021212C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212130: jal         0x800102E0
    // 0x80212134: lw          $a0, 0x7F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F6C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_23;
    // 0x80212134: lw          $a0, 0x7F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F6C);
    after_23:
    // 0x80212138: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021213C: jal         0x800102E0
    // 0x80212140: lw          $a0, 0x7F70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F70);
    func_800102E0_10EE0(rdram, ctx);
        goto after_24;
    // 0x80212140: lw          $a0, 0x7F70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F70);
    after_24:
    // 0x80212144: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212148: jal         0x800102E0
    // 0x8021214C: lw          $a0, 0x7F74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F74);
    func_800102E0_10EE0(rdram, ctx);
        goto after_25;
    // 0x8021214C: lw          $a0, 0x7F74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F74);
    after_25:
    // 0x80212150: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212154: jal         0x800102E0
    // 0x80212158: lw          $a0, 0x7F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F78);
    func_800102E0_10EE0(rdram, ctx);
        goto after_26;
    // 0x80212158: lw          $a0, 0x7F78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F78);
    after_26:
    // 0x8021215C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212160: jal         0x800102E0
    // 0x80212164: lw          $a0, 0x7F7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F7C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_27;
    // 0x80212164: lw          $a0, 0x7F7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F7C);
    after_27:
    // 0x80212168: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021216C: jal         0x800102E0
    // 0x80212170: lw          $a0, 0x7F80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F80);
    func_800102E0_10EE0(rdram, ctx);
        goto after_28;
    // 0x80212170: lw          $a0, 0x7F80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F80);
    after_28:
    // 0x80212174: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212178: jal         0x800102E0
    // 0x8021217C: lw          $a0, 0x7F84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F84);
    func_800102E0_10EE0(rdram, ctx);
        goto after_29;
    // 0x8021217C: lw          $a0, 0x7F84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F84);
    after_29:
    // 0x80212180: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212184: jal         0x800102E0
    // 0x80212188: lw          $a0, 0x7F88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F88);
    func_800102E0_10EE0(rdram, ctx);
        goto after_30;
    // 0x80212188: lw          $a0, 0x7F88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F88);
    after_30:
    // 0x8021218C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212190: jal         0x800102E0
    // 0x80212194: lw          $a0, 0x7F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F8C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_31;
    // 0x80212194: lw          $a0, 0x7F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F8C);
    after_31:
    // 0x80212198: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021219C: jal         0x800102E0
    // 0x802121A0: lw          $a0, 0x7F90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F90);
    func_800102E0_10EE0(rdram, ctx);
        goto after_32;
    // 0x802121A0: lw          $a0, 0x7F90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F90);
    after_32:
    // 0x802121A4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802121A8: jal         0x800102E0
    // 0x802121AC: lw          $a0, 0x7F94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F94);
    func_800102E0_10EE0(rdram, ctx);
        goto after_33;
    // 0x802121AC: lw          $a0, 0x7F94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F94);
    after_33:
    // 0x802121B0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802121B4: jal         0x800102E0
    // 0x802121B8: lw          $a0, 0x7F98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F98);
    func_800102E0_10EE0(rdram, ctx);
        goto after_34;
    // 0x802121B8: lw          $a0, 0x7F98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F98);
    after_34:
    // 0x802121BC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802121C0: jal         0x800102E0
    // 0x802121C4: lw          $a0, 0x7F9C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F9C);
    func_800102E0_10EE0(rdram, ctx);
        goto after_35;
    // 0x802121C4: lw          $a0, 0x7F9C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7F9C);
    after_35:
    // 0x802121C8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802121CC: jal         0x800102E0
    // 0x802121D0: lw          $a0, 0x7FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FA0);
    func_800102E0_10EE0(rdram, ctx);
        goto after_36;
    // 0x802121D0: lw          $a0, 0x7FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FA0);
    after_36:
    // 0x802121D4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802121D8: jal         0x800102E0
    // 0x802121DC: lw          $a0, 0x7FA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FA4);
    func_800102E0_10EE0(rdram, ctx);
        goto after_37;
    // 0x802121DC: lw          $a0, 0x7FA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FA4);
    after_37:
    // 0x802121E0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802121E4: jal         0x800102E0
    // 0x802121E8: lw          $a0, 0x7FA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FA8);
    func_800102E0_10EE0(rdram, ctx);
        goto after_38;
    // 0x802121E8: lw          $a0, 0x7FA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FA8);
    after_38:
    // 0x802121EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802121F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802121F4: jr          $ra
    // 0x802121F8: nop

    TRACE_RETURN()
    return;
    // 0x802121F8: nop

;}
RECOMP_FUNC void func_8021642C_6753DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021642C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80216430: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80216434: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80216438: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8021643C: lh          $t6, 0x88($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X88);
    // 0x80216440: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80216444: addiu       $v1, $a1, 0x5C
    ctx->r3 = ADD32(ctx->r5, 0X5C);
    // 0x80216448: bgezl       $t6, L_80216470
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021644C: lw          $v0, 0x28($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X28);
            goto L_80216470;
    }
    goto skip_0;
    // 0x8021644C: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    skip_0:
    // 0x80216450: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x80216454: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80216458: addiu       $a0, $a0, 0x5A7C
    ctx->r4 = ADD32(ctx->r4, 0X5A7C);
    // 0x8021645C: jal         0x8003521C
    // 0x80216460: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80216460: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    after_0:
    // 0x80216464: b           L_802164EC
    // 0x80216468: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802164EC;
    // 0x80216468: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8021646C: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
L_80216470:
    // 0x80216470: lui         $a2, 0x8022
    ctx->r6 = S32(0X8022 << 16);
    // 0x80216474: addiu       $a2, $a2, -0x1B70
    ctx->r6 = ADD32(ctx->r6, -0X1B70);
    // 0x80216478: beq         $v0, $zero, L_8021648C
    if (ctx->r2 == 0) {
        // 0x8021647C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8021648C;
    }
    // 0x8021647C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80216480: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80216484: or          $t8, $a0, $at
    ctx->r24 = ctx->r4 | ctx->r1;
    // 0x80216488: sw          $t8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r24;
L_8021648C:
    // 0x8021648C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80216490: jal         0x800108BC
    // 0x80216494: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_800108BC_114BC(rdram, ctx);
        goto after_1;
    // 0x80216494: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x80216498: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8021649C: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x802164A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802164A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802164A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802164AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802164B0: lh          $t0, 0x2C($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X2C);
    // 0x802164B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802164B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802164BC: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x802164C0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x802164C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802164C8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802164CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802164D0: jal         0x800108E4
    // 0x802164D4: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_800108E4_114E4(rdram, ctx);
        goto after_2;
    // 0x802164D4: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_2:
    // 0x802164D8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x802164DC: lh          $t2, 0x2C($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2C);
    // 0x802164E0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802164E4: sh          $t3, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r11;
    // 0x802164E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802164EC:
    // 0x802164EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802164F0: jr          $ra
    // 0x802164F4: nop

    TRACE_RETURN()
    return;
    // 0x802164F4: nop

;}
RECOMP_FUNC void func_80212660_671610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212660: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80212668: beq         $a3, $at, L_8021269C
    if (ctx->r7 == ctx->r1) {
        // 0x8021266C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_8021269C;
    }
    // 0x8021266C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212670: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80212674: beq         $a3, $at, L_802126AC
    if (ctx->r7 == ctx->r1) {
        // 0x80212678: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802126AC;
    }
    // 0x80212678: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021267C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80212680: beq         $a3, $at, L_802126B8
    if (ctx->r7 == ctx->r1) {
        // 0x80212684: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802126B8;
    }
    // 0x80212684: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212688: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8021268C: beq         $a3, $at, L_802126C4
    if (ctx->r7 == ctx->r1) {
        // 0x80212690: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802126C4;
    }
    // 0x80212690: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212694: b           L_802126EC
    // 0x80212698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802126EC;
    // 0x80212698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8021269C:
    // 0x8021269C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802126A0: lw          $v0, 0x7F28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F28);
    // 0x802126A4: b           L_802126CC
    // 0x802126A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802126CC;
    // 0x802126A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802126AC:
    // 0x802126AC: lw          $v0, 0x7F28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F28);
    // 0x802126B0: b           L_802126CC
    // 0x802126B4: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_802126CC;
    // 0x802126B4: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_802126B8:
    // 0x802126B8: lw          $v0, 0x7F2C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F2C);
    // 0x802126BC: b           L_802126CC
    // 0x802126C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802126CC;
    // 0x802126C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802126C4:
    // 0x802126C4: lw          $v0, 0x7F94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F94);
    // 0x802126C8: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_802126CC:
    // 0x802126CC: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802126D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802126D4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802126D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802126DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802126E0: jal         0x800106F0
    // 0x802126E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802126E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x802126E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802126EC:
    // 0x802126EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802126F0: jr          $ra
    // 0x802126F4: nop

    TRACE_RETURN()
    return;
    // 0x802126F4: nop

;}
RECOMP_FUNC void func_802165F0_6755A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802165F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802165F4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x802165F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802165FC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80216600: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80216604: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80216608: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8021660C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80216610: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80216614: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80216618: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8021661C: jr          $ra
    // 0x80216620: lw          $v0, 0x7034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7034);
    TRACE_RETURN()
    return;
    // 0x80216620: lw          $v0, 0x7034($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7034);
;}
RECOMP_FUNC void func_80214E68_673E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214E68: lwc1        $f4, 0xA4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x80214E6C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80214E70: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80214E74: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80214E78: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80214E7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80214E80: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80214E84: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80214E88: swc1        $f16, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f16.u32l;
    // 0x80214E8C: lwc1        $f18, 0x7BAC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7BAC);
    // 0x80214E90: jr          $ra
    // 0x80214E94: swc1        $f18, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x80214E94: swc1        $f18, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80212568_671518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212568: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021256C: beq         $a3, $zero, L_80212594
    if (ctx->r7 == 0) {
        // 0x80212570: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_80212594;
    }
    // 0x80212570: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212574: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80212578: beq         $a3, $at, L_802125A4
    if (ctx->r7 == ctx->r1) {
        // 0x8021257C: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802125A4;
    }
    // 0x8021257C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212580: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80212584: beq         $a3, $at, L_802125B0
    if (ctx->r7 == ctx->r1) {
        // 0x80212588: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_802125B0;
    }
    // 0x80212588: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021258C: b           L_802125D8
    // 0x80212590: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802125D8;
    // 0x80212590: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212594:
    // 0x80212594: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212598: lw          $v0, 0x7F80($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F80);
    // 0x8021259C: b           L_802125B8
    // 0x802125A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802125B8;
    // 0x802125A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802125A4:
    // 0x802125A4: lw          $v0, 0x7F80($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F80);
    // 0x802125A8: b           L_802125B8
    // 0x802125AC: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_802125B8;
    // 0x802125AC: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_802125B0:
    // 0x802125B0: lw          $v0, 0x7F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F84);
    // 0x802125B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802125B8:
    // 0x802125B8: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x802125BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802125C0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802125C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802125C8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802125CC: jal         0x800106F0
    // 0x802125D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x802125D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x802125D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802125D8:
    // 0x802125D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802125DC: jr          $ra
    // 0x802125E0: nop

    TRACE_RETURN()
    return;
    // 0x802125E0: nop

;}
RECOMP_FUNC void func_80214D64_673D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214D64: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x80214D68: sh          $t7, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = ctx->r15;
    // 0x80214D6C: lh          $t8, 0xC2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC2);
    // 0x80214D70: lh          $t9, 0xBC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XBC);
    // 0x80214D74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80214D78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80214D7C: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x80214D80: andi        $t0, $v1, 0x3FF
    ctx->r8 = ctx->r3 & 0X3FF;
    // 0x80214D84: slti        $at, $t0, 0x201
    ctx->r1 = SIGNED(ctx->r8) < 0X201 ? 1 : 0;
    // 0x80214D88: sb          $t6, 0xB8($a0)
    MEM_B(0XB8, ctx->r4) = ctx->r14;
    // 0x80214D8C: sh          $a1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r5;
    // 0x80214D90: bne         $at, $zero, L_80214D9C
    if (ctx->r1 != 0) {
        // 0x80214D94: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80214D9C;
    }
    // 0x80214D94: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80214D98: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
L_80214D9C:
    // 0x80214D9C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80214DA0: lh          $t1, 0x62($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X62);
    // 0x80214DA4: sh          $zero, 0x6E($v0)
    MEM_H(0X6E, ctx->r2) = 0;
    // 0x80214DA8: lh          $t3, 0x6E($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X6E);
    // 0x80214DAC: div         $zero, $v1, $t1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r9)));
    // 0x80214DB0: lh          $t4, 0x68($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X68);
    // 0x80214DB4: bne         $t1, $zero, L_80214DC0
    if (ctx->r9 != 0) {
        // 0x80214DB8: nop
    
            goto L_80214DC0;
    }
    // 0x80214DB8: nop

    // 0x80214DBC: break       7
    do_break(2149666236);
L_80214DC0:
    // 0x80214DC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214DC4: bne         $t1, $at, L_80214DD8
    if (ctx->r9 != ctx->r1) {
        // 0x80214DC8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80214DD8;
    }
    // 0x80214DC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214DCC: bne         $v1, $at, L_80214DD8
    if (ctx->r3 != ctx->r1) {
        // 0x80214DD0: nop
    
            goto L_80214DD8;
    }
    // 0x80214DD0: nop

    // 0x80214DD4: break       6
    do_break(2149666260);
L_80214DD8:
    // 0x80214DD8: subu        $v1, $t3, $t4
    ctx->r3 = SUB32(ctx->r11, ctx->r12);
    // 0x80214DDC: andi        $t5, $v1, 0x3FF
    ctx->r13 = ctx->r3 & 0X3FF;
    // 0x80214DE0: mflo        $t2
    ctx->r10 = lo;
    // 0x80214DE4: slti        $at, $t5, 0x201
    ctx->r1 = SIGNED(ctx->r13) < 0X201 ? 1 : 0;
    // 0x80214DE8: sh          $t2, 0x64($v0)
    MEM_H(0X64, ctx->r2) = ctx->r10;
    // 0x80214DEC: sh          $a1, 0x6A($v0)
    MEM_H(0X6A, ctx->r2) = ctx->r5;
    // 0x80214DF0: bne         $at, $zero, L_80214DFC
    if (ctx->r1 != 0) {
        // 0x80214DF4: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_80214DFC;
    }
    // 0x80214DF4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x80214DF8: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
L_80214DFC:
    // 0x80214DFC: lh          $t6, 0x6A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X6A);
    // 0x80214E00: div         $zero, $v1, $t6
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r14)));
    // 0x80214E04: mflo        $t7
    ctx->r15 = lo;
    // 0x80214E08: sh          $t7, 0x6C($v0)
    MEM_H(0X6C, ctx->r2) = ctx->r15;
    // 0x80214E0C: bne         $t6, $zero, L_80214E18
    if (ctx->r14 != 0) {
        // 0x80214E10: nop
    
            goto L_80214E18;
    }
    // 0x80214E10: nop

    // 0x80214E14: break       7
    do_break(2149666324);
L_80214E18:
    // 0x80214E18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214E1C: bne         $t6, $at, L_80214E30
    if (ctx->r14 != ctx->r1) {
        // 0x80214E20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80214E30;
    }
    // 0x80214E20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214E24: bne         $v1, $at, L_80214E30
    if (ctx->r3 != ctx->r1) {
        // 0x80214E28: nop
    
            goto L_80214E30;
    }
    // 0x80214E28: nop

    // 0x80214E2C: break       6
    do_break(2149666348);
L_80214E30:
    // 0x80214E30: jr          $ra
    // 0x80214E34: nop

    TRACE_RETURN()
    return;
    // 0x80214E34: nop

;}
RECOMP_FUNC void func_802145F4_6735A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802145F4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802145F8: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x802145FC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80214600: addiu       $t8, $t8, 0x7C78
    ctx->r24 = ADD32(ctx->r24, 0X7C78);
    // 0x80214604: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80214608: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021460C: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80214610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80214614: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80214618: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8021461C: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80214620: lhu         $a1, 0xC($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0XC);
    // 0x80214624: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80214628: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8021462C: jal         0x80014840
    // 0x80214630: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x80214630: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    after_0:
    // 0x80214634: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80214638: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x8021463C: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80214640: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x80214644: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80214648: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8021464C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80214650: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80214654: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x80214658: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8021465C: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x80214660: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80214664: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80214668: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8021466C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214670: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80214674: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80214678: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x8021467C: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x80214680: sll         $a2, $a3, 1
    ctx->r6 = S32(ctx->r7 << 1);
    // 0x80214684: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80214688: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    // 0x8021468C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80214690: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80214694: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80214698: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8021469C: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x802146A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802146A4: mflo        $t7
    ctx->r15 = lo;
    // 0x802146A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802146AC: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x802146B0: sra         $t8, $a2, 3
    ctx->r24 = S32(SIGNED(ctx->r6) >> 3);
    // 0x802146B4: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x802146B8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x802146BC: lui         $t8, 0x708
    ctx->r24 = S32(0X708 << 16);
    // 0x802146C0: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x802146C4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x802146C8: sll         $t6, $t9, 9
    ctx->r14 = S32(ctx->r25 << 9);
    // 0x802146CC: or          $a2, $t6, $at
    ctx->r6 = ctx->r14 | ctx->r1;
    // 0x802146D0: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x802146D4: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x802146D8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x802146DC: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x802146E0: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x802146E4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x802146E8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x802146EC: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x802146F0: lui         $t6, 0xF400
    ctx->r14 = S32(0XF400 << 16);
    // 0x802146F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802146F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802146FC: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80214700: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
    // 0x80214704: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x80214708: sll         $a1, $t8, 12
    ctx->r5 = S32(ctx->r24 << 12);
    // 0x8021470C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80214710: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x80214714: andi        $t0, $t6, 0xFFF
    ctx->r8 = ctx->r14 & 0XFFF;
    // 0x80214718: or          $t9, $t8, $t0
    ctx->r25 = ctx->r24 | ctx->r8;
    // 0x8021471C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80214720: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80214724: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80214728: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8021472C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214730: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x80214734: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x80214738: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021473C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80214740: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80214744: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80214748: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x8021474C: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80214750: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x80214754: addu        $t9, $t5, $a3
    ctx->r25 = ADD32(ctx->r13, ctx->r7);
    // 0x80214758: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8021475C: or          $t8, $a1, $t0
    ctx->r24 = ctx->r5 | ctx->r8;
    // 0x80214760: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80214764: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x80214768: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8021476C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80214770: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80214774: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80214778: addu        $t7, $ra, $t3
    ctx->r15 = ADD32(ctx->r31, ctx->r11);
    // 0x8021477C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80214780: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80214784: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80214788: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8021478C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80214790: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80214794: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80214798: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8021479C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x802147A0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802147A4: sll         $t8, $ra, 2
    ctx->r24 = S32(ctx->r31 << 2);
    // 0x802147A8: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x802147AC: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x802147B0: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x802147B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802147B8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x802147BC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802147C0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802147C4: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x802147C8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802147CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802147D0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x802147D4: lui         $t9, 0x1000
    ctx->r25 = S32(0X1000 << 16);
    // 0x802147D8: ori         $t9, $t9, 0x400
    ctx->r25 = ctx->r25 | 0X400;
    // 0x802147DC: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x802147E0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x802147E4: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x802147E8: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x802147EC: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x802147F0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802147F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802147F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802147FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80214800: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80214804: jr          $ra
    // 0x80214808: nop

    TRACE_RETURN()
    return;
    // 0x80214808: nop

;}
RECOMP_FUNC void func_802123F0_6713A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802123F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802123F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802123F8: beq         $a3, $at, L_80212420
    if (ctx->r7 == ctx->r1) {
        // 0x802123FC: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_80212420;
    }
    // 0x802123FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212400: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80212404: beq         $a3, $at, L_80212430
    if (ctx->r7 == ctx->r1) {
        // 0x80212408: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80212430;
    }
    // 0x80212408: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021240C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80212410: beq         $a3, $at, L_8021243C
    if (ctx->r7 == ctx->r1) {
        // 0x80212414: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_8021243C;
    }
    // 0x80212414: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212418: b           L_80212464
    // 0x8021241C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80212464;
    // 0x8021241C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212420:
    // 0x80212420: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80212424: lw          $v0, 0x7F9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F9C);
    // 0x80212428: b           L_80212444
    // 0x8021242C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_80212444;
    // 0x8021242C: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_80212430:
    // 0x80212430: lw          $v0, 0x7FA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FA4);
    // 0x80212434: b           L_80212444
    // 0x80212438: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80212444;
    // 0x80212438: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8021243C:
    // 0x8021243C: lw          $v0, 0x7FA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FA4);
    // 0x80212440: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_80212444:
    // 0x80212444: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x80212448: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8021244C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80212450: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80212454: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80212458: jal         0x800106F0
    // 0x8021245C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800106F0_112F0(rdram, ctx);
        goto after_0;
    // 0x8021245C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80212460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212464:
    // 0x80212464: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212468: jr          $ra
    // 0x8021246C: nop

    TRACE_RETURN()
    return;
    // 0x8021246C: nop

;}
RECOMP_FUNC void func_80214A34_6739E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214A34: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80214A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80214A3C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80214A40: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80214A44: lwc1        $f6, 0xB0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80214A48: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80214A4C: ldc1        $f4, 0x7B98($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X7B98);
    // 0x80214A50: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80214A54: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80214A58: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80214A5C: lui         $t1, 0x8FFF
    ctx->r9 = S32(0X8FFF << 16);
    // 0x80214A60: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x80214A64: bc1fl       L_80214AE0
    if (!c1cs) {
        // 0x80214A68: lw          $v0, 0x38($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X38);
            goto L_80214AE0;
    }
    goto skip_0;
    // 0x80214A68: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x80214A6C: lwc1        $f2, 0x58($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80214A70: lwc1        $f0, 0x48($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80214A74: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80214A78: nop

    // 0x80214A7C: bc1fl       L_80214A94
    if (!c1cs) {
        // 0x80214A80: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80214A94;
    }
    goto skip_1;
    // 0x80214A80: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x80214A84: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80214A88: b           L_80214A94
    // 0x80214A8C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_80214A94;
    // 0x80214A8C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x80214A90: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_80214A94:
    // 0x80214A94: lwc1        $f12, 0x54($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80214A98: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80214A9C: nop

    // 0x80214AA0: bc1fl       L_80214ABC
    if (!c1cs) {
        // 0x80214AA4: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_80214ABC;
    }
    goto skip_2;
    // 0x80214AA4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x80214AA8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80214AAC: swc1        $f2, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f2.u32l;
    // 0x80214AB0: b           L_80214ADC
    // 0x80214AB4: swc1        $f10, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f10.u32l;
        goto L_80214ADC;
    // 0x80214AB4: swc1        $f10, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f10.u32l;
    // 0x80214AB8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_80214ABC:
    // 0x80214ABC: nop

    // 0x80214AC0: bc1fl       L_80214AD8
    if (!c1cs) {
        // 0x80214AC4: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_80214AD8;
    }
    goto skip_3;
    // 0x80214AC4: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x80214AC8: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80214ACC: b           L_80214ADC
    // 0x80214AD0: swc1        $f16, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f16.u32l;
        goto L_80214ADC;
    // 0x80214AD0: swc1        $f16, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f16.u32l;
    // 0x80214AD4: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_80214AD8:
    // 0x80214AD8: swc1        $f18, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f18.u32l;
L_80214ADC:
    // 0x80214ADC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_80214AE0:
    // 0x80214AE0: lw          $t2, 0x94($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X94);
    // 0x80214AE4: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x80214AE8: beql        $t2, $zero, L_80214B8C
    if (ctx->r10 == 0) {
        // 0x80214AEC: lbu         $v1, 0x5C($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X5C);
            goto L_80214B8C;
    }
    goto skip_4;
    // 0x80214AEC: lbu         $v1, 0x5C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5C);
    skip_4:
    // 0x80214AF0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80214AF4: lw          $a3, 0x3C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X3C);
    // 0x80214AF8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80214AFC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80214B00: sll         $t8, $a3, 4
    ctx->r24 = S32(ctx->r7 << 4);
    // 0x80214B04: subu        $t9, $t8, $a3
    ctx->r25 = SUB32(ctx->r24, ctx->r7);
    // 0x80214B08: subu        $t5, $t4, $t9
    ctx->r13 = SUB32(ctx->r12, ctx->r25);
    // 0x80214B0C: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x80214B10: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80214B14: sll         $t3, $t9, 24
    ctx->r11 = S32(ctx->r25 << 24);
    // 0x80214B18: or          $t8, $t3, $t7
    ctx->r24 = ctx->r11 | ctx->r15;
    // 0x80214B1C: ori         $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 | 0XFF;
    // 0x80214B20: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x80214B24: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x80214B28: addiu       $v1, $t2, 0x8
    ctx->r3 = ADD32(ctx->r10, 0X8);
    // 0x80214B2C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80214B30: subu        $t4, $t1, $t0
    ctx->r12 = SUB32(ctx->r9, ctx->r8);
    // 0x80214B34: and         $t5, $v1, $t4
    ctx->r13 = ctx->r3 & ctx->r12;
    // 0x80214B38: and         $a1, $t5, $t1
    ctx->r5 = ctx->r13 & ctx->r9;
    // 0x80214B3C: jal         0x80040620
    // 0x80214B40: and         $a0, $t0, $t1
    ctx->r4 = ctx->r8 & ctx->r9;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80214B40: and         $a0, $t0, $t1
    ctx->r4 = ctx->r8 & ctx->r9;
    after_0:
    // 0x80214B44: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80214B48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80214B4C: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80214B50: lw          $t6, 0x3C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3C);
    // 0x80214B54: lw          $t3, 0x40($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X40);
    // 0x80214B58: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80214B5C: addu        $v1, $t6, $t3
    ctx->r3 = ADD32(ctx->r14, ctx->r11);
    // 0x80214B60: bgez        $v1, L_80214B74
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80214B64: sw          $v1, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->r3;
            goto L_80214B74;
    }
    // 0x80214B64: sw          $v1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r3;
    // 0x80214B68: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x80214B6C: sw          $t8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r24;
    // 0x80214B70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80214B74:
    // 0x80214B74: slti        $at, $v1, 0x12
    ctx->r1 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
    // 0x80214B78: bnel        $at, $zero, L_80214B8C
    if (ctx->r1 != 0) {
        // 0x80214B7C: lbu         $v1, 0x5C($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X5C);
            goto L_80214B8C;
    }
    goto skip_5;
    // 0x80214B7C: lbu         $v1, 0x5C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5C);
    skip_5:
    // 0x80214B80: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x80214B84: sw          $t4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r12;
    // 0x80214B88: lbu         $v1, 0x5C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5C);
L_80214B8C:
    // 0x80214B8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80214B90: beql        $v1, $zero, L_80214BB4
    if (ctx->r3 == 0) {
        // 0x80214B94: lh          $t5, 0x68($v0)
        ctx->r13 = MEM_H(ctx->r2, 0X68);
            goto L_80214BB4;
    }
    goto skip_6;
    // 0x80214B94: lh          $t5, 0x68($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X68);
    skip_6:
    // 0x80214B98: beq         $v1, $at, L_80214BE8
    if (ctx->r3 == ctx->r1) {
        // 0x80214B9C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80214BE8;
    }
    // 0x80214B9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80214BA0: beql        $v1, $at, L_80214BD0
    if (ctx->r3 == ctx->r1) {
        // 0x80214BA4: lh          $t8, 0x62($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X62);
            goto L_80214BD0;
    }
    goto skip_7;
    // 0x80214BA4: lh          $t8, 0x62($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X62);
    skip_7:
    // 0x80214BA8: b           L_80214C54
    // 0x80214BAC: lh          $t8, 0x60($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X60);
        goto L_80214C54;
    // 0x80214BAC: lh          $t8, 0x60($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X60);
    // 0x80214BB0: lh          $t5, 0x68($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X68);
L_80214BB4:
    // 0x80214BB4: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x80214BB8: sh          $t6, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r14;
    // 0x80214BBC: lh          $t3, 0x68($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X68);
    // 0x80214BC0: andi        $t7, $t3, 0x3FF
    ctx->r15 = ctx->r11 & 0X3FF;
    // 0x80214BC4: b           L_80214C50
    // 0x80214BC8: sh          $t7, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r15;
        goto L_80214C50;
    // 0x80214BC8: sh          $t7, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r15;
    // 0x80214BCC: lh          $t8, 0x62($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X62);
L_80214BD0:
    // 0x80214BD0: bnel        $t8, $zero, L_80214BEC
    if (ctx->r24 != 0) {
        // 0x80214BD4: lh          $v1, 0x62($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X62);
            goto L_80214BEC;
    }
    goto skip_8;
    // 0x80214BD4: lh          $v1, 0x62($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X62);
    skip_8:
    // 0x80214BD8: lh          $t9, 0x6A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6A);
    // 0x80214BDC: bnel        $t9, $zero, L_80214BEC
    if (ctx->r25 != 0) {
        // 0x80214BE0: lh          $v1, 0x62($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X62);
            goto L_80214BEC;
    }
    goto skip_9;
    // 0x80214BE0: lh          $v1, 0x62($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X62);
    skip_9:
    // 0x80214BE4: sb          $zero, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = 0;
L_80214BE8:
    // 0x80214BE8: lh          $v1, 0x62($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X62);
L_80214BEC:
    // 0x80214BEC: beql        $v1, $zero, L_80214C18
    if (ctx->r3 == 0) {
        // 0x80214BF0: lh          $t8, 0x66($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X66);
            goto L_80214C18;
    }
    goto skip_10;
    // 0x80214BF0: lh          $t8, 0x66($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X66);
    skip_10:
    // 0x80214BF4: lh          $t4, 0x60($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X60);
    // 0x80214BF8: lh          $t5, 0x64($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X64);
    // 0x80214BFC: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80214C00: sh          $t7, 0x62($v0)
    MEM_H(0X62, ctx->r2) = ctx->r15;
    // 0x80214C04: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80214C08: andi        $t3, $t6, 0x3FF
    ctx->r11 = ctx->r14 & 0X3FF;
    // 0x80214C0C: b           L_80214C1C
    // 0x80214C10: sh          $t3, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r11;
        goto L_80214C1C;
    // 0x80214C10: sh          $t3, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r11;
    // 0x80214C14: lh          $t8, 0x66($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X66);
L_80214C18:
    // 0x80214C18: sh          $t8, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r24;
L_80214C1C:
    // 0x80214C1C: lh          $v1, 0x6A($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X6A);
    // 0x80214C20: beql        $v1, $zero, L_80214C4C
    if (ctx->r3 == 0) {
        // 0x80214C24: lh          $t7, 0x6E($v0)
        ctx->r15 = MEM_H(ctx->r2, 0X6E);
            goto L_80214C4C;
    }
    goto skip_11;
    // 0x80214C24: lh          $t7, 0x6E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6E);
    skip_11:
    // 0x80214C28: lh          $t9, 0x68($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X68);
    // 0x80214C2C: lh          $t4, 0x6C($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X6C);
    // 0x80214C30: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x80214C34: sh          $t3, 0x6A($v0)
    MEM_H(0X6A, ctx->r2) = ctx->r11;
    // 0x80214C38: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x80214C3C: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x80214C40: b           L_80214C50
    // 0x80214C44: sh          $t6, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r14;
        goto L_80214C50;
    // 0x80214C44: sh          $t6, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r14;
    // 0x80214C48: lh          $t7, 0x6E($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6E);
L_80214C4C:
    // 0x80214C4C: sh          $t7, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r15;
L_80214C50:
    // 0x80214C50: lh          $t8, 0x60($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X60);
L_80214C54:
    // 0x80214C54: lh          $t9, 0x68($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X68);
    // 0x80214C58: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80214C5C: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80214C60: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
    // 0x80214C64: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
    // 0x80214C68: sh          $t9, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r25;
    // 0x80214C6C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x80214C70: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80214C74: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80214C78: jal         0x80011760
    // 0x80214C7C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_80011760_12360(rdram, ctx);
        goto after_1;
    // 0x80214C7C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x80214C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214C84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80214C88: jr          $ra
    // 0x80214C8C: nop

    TRACE_RETURN()
    return;
    // 0x80214C8C: nop

;}
RECOMP_FUNC void func_80213F30_672EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213F30: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80213F34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80213F38: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80213F3C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80213F40: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80213F44: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80213F48: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80213F4C: lh          $t6, 0x1C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X1C);
    // 0x80213F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80213F54: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x80213F58: lh          $t7, 0x20($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X20);
    // 0x80213F5C: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x80213F60: lw          $s0, 0x64($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X64);
    // 0x80213F64: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x80213F68: or          $t8, $s0, $at
    ctx->r24 = ctx->r16 | ctx->r1;
    // 0x80213F6C: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
    // 0x80213F70: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80213F74: jal         0x800109A4
    // 0x80213F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800109A4_115A4(rdram, ctx);
        goto after_0;
    // 0x80213F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80213F7C: jal         0x80010B60
    // 0x80213F80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80010B60_11760(rdram, ctx);
        goto after_1;
    // 0x80213F80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80213F84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80213F88: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80213F8C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80213F90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80213F94: jal         0x80010980
    // 0x80213F98: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_2;
    // 0x80213F98: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x80213F9C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80213FA0: lw          $t0, -0x3914($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3914);
    // 0x80213FA4: beq         $t0, $zero, L_80213FE0
    if (ctx->r8 == 0) {
        // 0x80213FA8: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_80213FE0;
    }
    // 0x80213FA8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80213FAC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80213FB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80213FB4: jal         0x80010980
    // 0x80213FB8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_3;
    // 0x80213FB8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x80213FBC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80213FC0: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80213FC4: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80213FC8: addiu       $a3, $a3, 0x7824
    ctx->r7 = ADD32(ctx->r7, 0X7824);
    // 0x80213FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213FD0: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x80213FD4: jal         0x80010E9C
    // 0x80213FD8: addiu       $a2, $a2, 0x4D
    ctx->r6 = ADD32(ctx->r6, 0X4D);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_4;
    // 0x80213FD8: addiu       $a2, $a2, 0x4D
    ctx->r6 = ADD32(ctx->r6, 0X4D);
    after_4:
    // 0x80213FDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80213FE0:
    // 0x80213FE0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80213FE4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80213FE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80213FEC: jal         0x80010980
    // 0x80213FF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_5;
    // 0x80213FF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x80213FF4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80213FF8: lw          $t1, -0x3910($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3910);
    // 0x80213FFC: beq         $t1, $zero, L_80214028
    if (ctx->r9 == 0) {
        // 0x80214000: nop
    
            goto L_80214028;
    }
    // 0x80214000: nop

    // 0x80214004: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80214008: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x8021400C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80214010: addiu       $a3, $a3, 0x7834
    ctx->r7 = ADD32(ctx->r7, 0X7834);
    // 0x80214014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214018: addiu       $a1, $a1, 0x63
    ctx->r5 = ADD32(ctx->r5, 0X63);
    // 0x8021401C: jal         0x80010E9C
    // 0x80214020: addiu       $a2, $a2, 0x4D
    ctx->r6 = ADD32(ctx->r6, 0X4D);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_6;
    // 0x80214020: addiu       $a2, $a2, 0x4D
    ctx->r6 = ADD32(ctx->r6, 0X4D);
    after_6:
    // 0x80214024: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80214028:
    // 0x80214028: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8021402C: lw          $t2, -0x390C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X390C);
    // 0x80214030: beq         $t2, $zero, L_8021405C
    if (ctx->r10 == 0) {
        // 0x80214034: nop
    
            goto L_8021405C;
    }
    // 0x80214034: nop

    // 0x80214038: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8021403C: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80214040: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80214044: addiu       $a3, $a3, 0x7844
    ctx->r7 = ADD32(ctx->r7, 0X7844);
    // 0x80214048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021404C: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x80214050: jal         0x80010E9C
    // 0x80214054: addiu       $a2, $a2, 0xAD
    ctx->r6 = ADD32(ctx->r6, 0XAD);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_7;
    // 0x80214054: addiu       $a2, $a2, 0xAD
    ctx->r6 = ADD32(ctx->r6, 0XAD);
    after_7:
    // 0x80214058: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8021405C:
    // 0x8021405C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80214060: lw          $t3, -0x3908($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3908);
    // 0x80214064: beql        $t3, $zero, L_80214094
    if (ctx->r11 == 0) {
        // 0x80214068: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80214094;
    }
    goto skip_0;
    // 0x80214068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8021406C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80214070: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80214074: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80214078: addiu       $a3, $a3, 0x7850
    ctx->r7 = ADD32(ctx->r7, 0X7850);
    // 0x8021407C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80214080: addiu       $a1, $a1, 0x63
    ctx->r5 = ADD32(ctx->r5, 0X63);
    // 0x80214084: jal         0x80010E9C
    // 0x80214088: addiu       $a2, $a2, 0xAD
    ctx->r6 = ADD32(ctx->r6, 0XAD);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_8;
    // 0x80214088: addiu       $a2, $a2, 0xAD
    ctx->r6 = ADD32(ctx->r6, 0XAD);
    after_8:
    // 0x8021408C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80214090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80214094:
    // 0x80214094: jal         0x800109A4
    // 0x80214098: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800109A4_115A4(rdram, ctx);
        goto after_9;
    // 0x80214098: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_9:
    // 0x8021409C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802140A0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802140A4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802140A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802140AC: jal         0x80010980
    // 0x802140B0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80010980_11580(rdram, ctx);
        goto after_10;
    // 0x802140B0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x802140B4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x802140B8: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x802140BC: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802140C0: addiu       $a1, $a1, 0x1F
    ctx->r5 = ADD32(ctx->r5, 0X1F);
    // 0x802140C4: addiu       $a2, $a2, 0x41
    ctx->r6 = ADD32(ctx->r6, 0X41);
    // 0x802140C8: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    // 0x802140CC: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x802140D0: addiu       $a3, $a3, 0x785C
    ctx->r7 = ADD32(ctx->r7, 0X785C);
    // 0x802140D4: jal         0x80010E9C
    // 0x802140D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_11;
    // 0x802140D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x802140DC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802140E0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802140E4: addiu       $a3, $a3, 0x7864
    ctx->r7 = ADD32(ctx->r7, 0X7864);
    // 0x802140E8: addiu       $s0, $s0, 0x60
    ctx->r16 = ADD32(ctx->r16, 0X60);
    // 0x802140EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802140F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802140F4: jal         0x80010E9C
    // 0x802140F8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_12;
    // 0x802140F8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_12:
    // 0x802140FC: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80214100: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80214104: addiu       $a3, $a3, 0x786C
    ctx->r7 = ADD32(ctx->r7, 0X786C);
    // 0x80214108: addiu       $a2, $a2, 0x60
    ctx->r6 = ADD32(ctx->r6, 0X60);
    // 0x8021410C: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x80214110: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80214114: jal         0x80010E9C
    // 0x80214118: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_80010E9C_11A9C(rdram, ctx);
        goto after_13;
    // 0x80214118: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_13:
    // 0x8021411C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80214120: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80214124: addiu       $a3, $a3, 0x7874
    ctx->r7 = ADD32(ctx->r7, 0X7874);
    // 0x80214128: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021412C: jal         0x80010E9C
    // 0x80214130: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80010E9C_11A9C(rdram, ctx);
        goto after_14;
    // 0x80214130: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x80214134: jal         0x800108BC
    // 0x80214138: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800108BC_114BC(rdram, ctx);
        goto after_15;
    // 0x80214138: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x8021413C: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x80214140: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x80214144: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80214148: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8021414C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80214150: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80214154: lw          $t5, 0x6C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X6C);
    // 0x80214158: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x8021415C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80214160: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80214164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80214168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021416C: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x80214170: jal         0x800108E4
    // 0x80214174: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    func_800108E4_114E4(rdram, ctx);
        goto after_16;
    // 0x80214174: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_16:
    // 0x80214178: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8021417C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80214180: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80214184: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x80214188: or          $t6, $a0, $at
    ctx->r14 = ctx->r4 | ctx->r1;
    // 0x8021418C: jal         0x800108BC
    // 0x80214190: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    func_800108BC_114BC(rdram, ctx);
        goto after_17;
    // 0x80214190: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    after_17:
    // 0x80214194: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x80214198: addiu       $t9, $zero, 0xA0
    ctx->r25 = ADD32(0, 0XA0);
    // 0x8021419C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802141A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802141A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802141A8: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x802141AC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x802141B0: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    // 0x802141B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802141B8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802141BC: jal         0x800108E4
    // 0x802141C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800108E4_114E4(rdram, ctx);
        goto after_18;
    // 0x802141C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_18:
    // 0x802141C4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802141C8: lui         $a3, 0x8FFF
    ctx->r7 = S32(0X8FFF << 16);
    // 0x802141CC: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x802141D0: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x802141D4: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x802141D8: subu        $t1, $a3, $a2
    ctx->r9 = SUB32(ctx->r7, ctx->r6);
    // 0x802141DC: and         $t2, $t0, $t1
    ctx->r10 = ctx->r8 & ctx->r9;
    // 0x802141E0: and         $a1, $t2, $a3
    ctx->r5 = ctx->r10 & ctx->r7;
    // 0x802141E4: jal         0x80040620
    // 0x802141E8: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_19;
    // 0x802141E8: and         $a0, $a2, $a3
    ctx->r4 = ctx->r6 & ctx->r7;
    after_19:
    // 0x802141EC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802141F0: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x802141F4: beql        $v0, $zero, L_8021421C
    if (ctx->r2 == 0) {
        // 0x802141F8: lw          $t7, 0x18($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X18);
            goto L_8021421C;
    }
    goto skip_1;
    // 0x802141F8: lw          $t7, 0x18($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X18);
    skip_1:
    // 0x802141FC: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x80214200: lw          $t4, 0x14($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X14);
    // 0x80214204: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80214208: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x8021420C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80214210: b           L_80214270
    // 0x80214214: sw          $t5, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r13;
        goto L_80214270;
    // 0x80214214: sw          $t5, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r13;
    // 0x80214218: lw          $t7, 0x18($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X18);
L_8021421C:
    // 0x8021421C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80214220: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80214224: bne         $v0, $t7, L_80214250
    if (ctx->r2 != ctx->r15) {
        // 0x80214228: nop
    
            goto L_80214250;
    }
    // 0x80214228: nop

    // 0x8021422C: jal         0x80214284
    // 0x80214230: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    func_80214284_673234(rdram, ctx);
        goto after_20;
    // 0x80214230: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_20:
    // 0x80214234: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80214238: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x8021423C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80214240: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80214244: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80214248: b           L_80214270
    // 0x8021424C: sb          $t8, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r24;
        goto L_80214270;
    // 0x8021424C: sb          $t8, -0x521F($at)
    MEM_B(-0X521F, ctx->r1) = ctx->r24;
L_80214250:
    // 0x80214250: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80214254: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x80214258: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8021425C: lbu         $t1, -0x521F($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X521F);
    // 0x80214260: bnel        $v0, $t1, L_80214274
    if (ctx->r2 != ctx->r9) {
        // 0x80214264: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80214274;
    }
    goto skip_2;
    // 0x80214264: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x80214268: jal         0x80214304
    // 0x8021426C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    func_80214304_6732B4(rdram, ctx);
        goto after_21;
    // 0x8021426C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_21:
L_80214270:
    // 0x80214270: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80214274:
    // 0x80214274: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80214278: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8021427C: jr          $ra
    // 0x80214280: nop

    TRACE_RETURN()
    return;
    // 0x80214280: nop

;}
RECOMP_FUNC void func_80213D14_672CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213D14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213D18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80213D1C: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80213D20: addiu       $s0, $s0, 0x7FB0
    ctx->r16 = ADD32(ctx->r16, 0X7FB0);
    // 0x80213D24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80213D28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80213D2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80213D30: jal         0x800246BC
    // 0x80213D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800246BC_252BC(rdram, ctx);
        goto after_0;
    // 0x80213D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80213D38: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80213D3C: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80213D40: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213D44: sw          $s0, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->r16;
    // 0x80213D48: sh          $zero, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = 0;
    // 0x80213D4C: sw          $t6, 0x7FB4($at)
    MEM_W(0X7FB4, ctx->r1) = ctx->r14;
    // 0x80213D50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213D54: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80213D58: addiu       $t8, $zero, 0x7D0
    ctx->r24 = ADD32(0, 0X7D0);
    // 0x80213D5C: sw          $t7, 0x7FB8($at)
    MEM_W(0X7FB8, ctx->r1) = ctx->r15;
    // 0x80213D60: sw          $t8, 0x7FBC($at)
    MEM_W(0X7FBC, ctx->r1) = ctx->r24;
    // 0x80213D64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213D68: addiu       $t9, $zero, 0x7D0
    ctx->r25 = ADD32(0, 0X7D0);
    // 0x80213D6C: sw          $t9, 0x7FC0($at)
    MEM_W(0X7FC0, ctx->r1) = ctx->r25;
    // 0x80213D70: lui         $t0, 0x11
    ctx->r8 = S32(0X11 << 16);
    // 0x80213D74: ori         $t0, $t0, 0xE03
    ctx->r8 = ctx->r8 | 0XE03;
    // 0x80213D78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213D7C: lui         $a0, 0x801
    ctx->r4 = S32(0X801 << 16);
    // 0x80213D80: sw          $t0, 0x7FB0($at)
    MEM_W(0X7FB0, ctx->r1) = ctx->r8;
    // 0x80213D84: addiu       $a0, $a0, 0x5000
    ctx->r4 = ADD32(ctx->r4, 0X5000);
    // 0x80213D88: jal         0x80014840
    // 0x80213D8C: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x80213D8C: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    after_1:
    // 0x80213D90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213D94: lui         $a0, 0x801
    ctx->r4 = S32(0X801 << 16);
    // 0x80213D98: sw          $v0, 0x7FE0($at)
    MEM_W(0X7FE0, ctx->r1) = ctx->r2;
    // 0x80213D9C: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x80213DA0: jal         0x80014840
    // 0x80213DA4: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x80213DA4: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    after_2:
    // 0x80213DA8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213DAC: sw          $v0, 0x7FE4($at)
    MEM_W(0X7FE4, ctx->r1) = ctx->r2;
    // 0x80213DB0: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80213DB4: lw          $t1, 0x7FE0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7FE0);
    // 0x80213DB8: bnel        $t1, $zero, L_80213DFC
    if (ctx->r9 != 0) {
        // 0x80213DBC: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_80213DFC;
    }
    goto skip_0;
    // 0x80213DBC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    skip_0:
    // 0x80213DC0: jal         0x80013B14
    // 0x80213DC4: addiu       $a0, $zero, 0x4D3
    ctx->r4 = ADD32(0, 0X4D3);
    func_80013B14_14714(rdram, ctx);
        goto after_3;
    // 0x80213DC4: addiu       $a0, $zero, 0x4D3
    ctx->r4 = ADD32(0, 0X4D3);
    after_3:
    // 0x80213DC8: lui         $a0, 0x801
    ctx->r4 = S32(0X801 << 16);
    // 0x80213DCC: addiu       $a0, $a0, 0x5000
    ctx->r4 = ADD32(ctx->r4, 0X5000);
    // 0x80213DD0: jal         0x80014840
    // 0x80213DD4: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    func_80014840_15440(rdram, ctx);
        goto after_4;
    // 0x80213DD4: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    after_4:
    // 0x80213DD8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213DDC: lui         $a0, 0x801
    ctx->r4 = S32(0X801 << 16);
    // 0x80213DE0: sw          $v0, 0x7FE0($at)
    MEM_W(0X7FE0, ctx->r1) = ctx->r2;
    // 0x80213DE4: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x80213DE8: jal         0x80014840
    // 0x80213DEC: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    func_80014840_15440(rdram, ctx);
        goto after_5;
    // 0x80213DEC: addiu       $a1, $zero, 0x4D3
    ctx->r5 = ADD32(0, 0X4D3);
    after_5:
    // 0x80213DF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213DF4: sw          $v0, 0x7FE4($at)
    MEM_W(0X7FE4, ctx->r1) = ctx->r2;
    // 0x80213DF8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_80213DFC:
    // 0x80213DFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80213E00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213E04: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80213E08: swc1        $f0, 0x7FE8($at)
    MEM_W(0X7FE8, ctx->r1) = ctx->f0.u32l;
    // 0x80213E0C: swc1        $f0, 0x7FEC($at)
    MEM_W(0X7FEC, ctx->r1) = ctx->f0.u32l;
    // 0x80213E10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213E14: lwc1        $f4, 0x7940($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7940);
    // 0x80213E18: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213E1C: addiu       $t2, $t2, 0x3AC8
    ctx->r10 = ADD32(ctx->r10, 0X3AC8);
    // 0x80213E20: swc1        $f4, 0x7FC4($at)
    MEM_W(0X7FC4, ctx->r1) = ctx->f4.u32l;
    // 0x80213E24: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213E28: lwc1        $f6, 0x7944($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7944);
    // 0x80213E2C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213E30: sw          $zero, 0x7FCC($at)
    MEM_W(0X7FCC, ctx->r1) = 0;
    // 0x80213E34: swc1        $f6, 0x7FC8($at)
    MEM_W(0X7FC8, ctx->r1) = ctx->f6.u32l;
    // 0x80213E38: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213E3C: sw          $t2, 0x7FD0($at)
    MEM_W(0X7FD0, ctx->r1) = ctx->r10;
    // 0x80213E40: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80213E44: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x80213E48: lui         $t4, 0x8022
    ctx->r12 = S32(0X8022 << 16);
    // 0x80213E4C: addiu       $t3, $t3, -0x7FD0
    ctx->r11 = ADD32(ctx->r11, -0X7FD0);
    // 0x80213E50: addiu       $t4, $t4, -0x7B48
    ctx->r12 = ADD32(ctx->r12, -0X7B48);
    // 0x80213E54: sw          $t3, -0x8000($at)
    MEM_W(-0X8000, ctx->r1) = ctx->r11;
    // 0x80213E58: sw          $t4, -0x7FFC($at)
    MEM_W(-0X7FFC, ctx->r1) = ctx->r12;
    // 0x80213E5C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80213E60: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x80213E64: lui         $t6, 0x8022
    ctx->r14 = S32(0X8022 << 16);
    // 0x80213E68: addiu       $t5, $t5, -0x76C0
    ctx->r13 = ADD32(ctx->r13, -0X76C0);
    // 0x80213E6C: addiu       $t6, $t6, -0x7238
    ctx->r14 = ADD32(ctx->r14, -0X7238);
    // 0x80213E70: sw          $t5, -0x7FF8($at)
    MEM_W(-0X7FF8, ctx->r1) = ctx->r13;
    // 0x80213E74: sw          $t6, -0x7FF4($at)
    MEM_W(-0X7FF4, ctx->r1) = ctx->r14;
    // 0x80213E78: lui         $t7, 0x8022
    ctx->r15 = S32(0X8022 << 16);
    // 0x80213E7C: addiu       $t7, $t7, -0x6DB0
    ctx->r15 = ADD32(ctx->r15, -0X6DB0);
    // 0x80213E80: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80213E84: sw          $t7, -0x7FF0($at)
    MEM_W(-0X7FF0, ctx->r1) = ctx->r15;
    // 0x80213E88: lui         $t8, 0x8022
    ctx->r24 = S32(0X8022 << 16);
    // 0x80213E8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80213E90: lui         $t0, 0x8022
    ctx->r8 = S32(0X8022 << 16);
    // 0x80213E94: lui         $t1, 0x8022
    ctx->r9 = S32(0X8022 << 16);
    // 0x80213E98: addiu       $t8, $t8, -0x55B0
    ctx->r24 = ADD32(ctx->r24, -0X55B0);
    // 0x80213E9C: addiu       $t9, $t9, -0x3898
    ctx->r25 = ADD32(ctx->r25, -0X3898);
    // 0x80213EA0: addiu       $t0, $t0, -0x47A0
    ctx->r8 = ADD32(ctx->r8, -0X47A0);
    // 0x80213EA4: addiu       $t1, $t1, -0x2A88
    ctx->r9 = ADD32(ctx->r9, -0X2A88);
    // 0x80213EA8: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x80213EAC: sw          $t9, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r25;
    // 0x80213EB0: sw          $t0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r8;
    // 0x80213EB4: sw          $t1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r9;
    // 0x80213EB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80213EBC: jal         0x800119D4
    // 0x80213EC0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800119D4_125D4(rdram, ctx);
        goto after_6;
    // 0x80213EC0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_6:
    // 0x80213EC4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80213EC8: lwc1        $f0, 0x7948($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7948);
    // 0x80213ECC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80213ED0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80213ED4: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80213ED8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80213EDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80213EE0: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x80213EE4: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80213EE8: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x80213EEC: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
    // 0x80213EF0: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x80213EF4: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x80213EF8: sb          $t3, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r11;
    // 0x80213EFC: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x80213F00: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x80213F04: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80213F08: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80213F0C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80213F10: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x80213F14: jal         0x8003521C
    // 0x80213F18: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x80213F18: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    after_7:
    // 0x80213F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80213F20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80213F24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213F28: jr          $ra
    // 0x80213F2C: nop

    TRACE_RETURN()
    return;
    // 0x80213F2C: nop

;}
