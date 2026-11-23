#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80213F98_67D978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213F9C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80213FA0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80213FA4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80213FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213FAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80213FB0: bne         $a0, $zero, L_80213FC0
    if (ctx->r4 != 0) {
        // 0x80213FB4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80213FC0;
    }
    // 0x80213FB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213FB8: b           L_802140A8
    // 0x80213FBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802140A8;
    // 0x80213FBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213FC0:
    // 0x80213FC0: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x80213FC4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80213FC8: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x80213FCC: addu        $v1, $t8, $t2
    ctx->r3 = ADD32(ctx->r24, ctx->r10);
    // 0x80213FD0: lw          $t0, 0x84($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X84);
    // 0x80213FD4: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x80213FD8: bnel        $t0, $zero, L_80213FEC
    if (ctx->r8 != 0) {
        // 0x80213FDC: lbu         $a0, 0x0($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X0);
            goto L_80213FEC;
    }
    goto skip_0;
    // 0x80213FDC: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    skip_0:
    // 0x80213FE0: b           L_802140A8
    // 0x80213FE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802140A8;
    // 0x80213FE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213FE8: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_80213FEC:
    // 0x80213FEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80213FF0: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80213FF4: bne         $at, $zero, L_802140A4
    if (ctx->r1 != 0) {
        // 0x80213FF8: addiu       $t3, $a0, 0x1
        ctx->r11 = ADD32(ctx->r4, 0X1);
            goto L_802140A4;
    }
    // 0x80213FF8: addiu       $t3, $a0, 0x1
    ctx->r11 = ADD32(ctx->r4, 0X1);
    // 0x80213FFC: lbu         $t1, 0x1($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X1);
    // 0x80214000: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80214004: addiu       $a3, $t1, 0x1
    ctx->r7 = ADD32(ctx->r9, 0X1);
    // 0x80214008: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021400C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80214010: addu        $v0, $t0, $t4
    ctx->r2 = ADD32(ctx->r8, ctx->r12);
    // 0x80214014: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x80214018: andi        $a3, $zero, 0xFF
    ctx->r7 = 0 & 0XFF;
    // 0x8021401C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80214020: beq         $a2, $zero, L_80214064
    if (ctx->r6 == 0) {
        // 0x80214024: sll         $t4, $a3, 3
        ctx->r12 = S32(ctx->r7 << 3);
            goto L_80214064;
    }
    // 0x80214024: sll         $t4, $a3, 3
    ctx->r12 = S32(ctx->r7 << 3);
    // 0x80214028: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x8021402C: sb          $t5, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r13;
    // 0x80214030: jal         0x80014840
    // 0x80214034: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x80214034: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80214038: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x8021403C: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x80214040: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80214044: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80214048: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8021404C: lw          $t8, -0x5FB8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5FB8);
    // 0x80214050: sll         $t2, $t8, 3
    ctx->r10 = S32(ctx->r24 << 3);
    // 0x80214054: addu        $t3, $t6, $t2
    ctx->r11 = ADD32(ctx->r14, ctx->r10);
    // 0x80214058: sw          $v0, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r2;
    // 0x8021405C: b           L_802140A8
    // 0x80214060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802140A8;
    // 0x80214060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80214064:
    // 0x80214064: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x80214068: addu        $v0, $t0, $t4
    ctx->r2 = ADD32(ctx->r8, ctx->r12);
    // 0x8021406C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80214070: jal         0x80014840
    // 0x80214074: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x80214074: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    after_1:
    // 0x80214078: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x8021407C: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x80214080: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80214084: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80214088: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8021408C: lw          $t8, -0x5FB8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5FB8);
    // 0x80214090: sll         $t6, $t8, 3
    ctx->r14 = S32(ctx->r24 << 3);
    // 0x80214094: addu        $t2, $t5, $t6
    ctx->r10 = ADD32(ctx->r13, ctx->r14);
    // 0x80214098: sw          $v0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r2;
    // 0x8021409C: b           L_802140A8
    // 0x802140A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802140A8;
    // 0x802140A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802140A4:
    // 0x802140A4: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
L_802140A8:
    // 0x802140A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802140AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802140B0: jr          $ra
    // 0x802140B4: nop

    TRACE_RETURN()
    return;
    // 0x802140B4: nop

;}
RECOMP_FUNC void func_80229610_692FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229610: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80229614: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80229618: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8022961C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80229620: lwc1        $f4, 0x9C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x80229624: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229628: ldc1        $f16, -0x4D68($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4D68);
    // 0x8022962C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80229630: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80229634: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80229638: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8022963C: bc1fl       L_802296B8
    if (!c1cs) {
        // 0x80229640: addiu       $v1, $a1, 0x5C
        ctx->r3 = ADD32(ctx->r5, 0X5C);
            goto L_802296B8;
    }
    goto skip_0;
    // 0x80229640: addiu       $v1, $a1, 0x5C
    ctx->r3 = ADD32(ctx->r5, 0X5C);
    skip_0:
    // 0x80229644: lwc1        $f12, 0x3C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x80229648: lwc1        $f2, 0x38($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X38);
    // 0x8022964C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80229650: nop

    // 0x80229654: bc1fl       L_8022966C
    if (!c1cs) {
        // 0x80229658: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8022966C;
    }
    goto skip_1;
    // 0x80229658: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x8022965C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80229660: b           L_8022966C
    // 0x80229664: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8022966C;
    // 0x80229664: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80229668: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8022966C:
    // 0x8022966C: lwc1        $f14, 0x40($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X40);
    // 0x80229670: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80229674: nop

    // 0x80229678: bc1fl       L_80229694
    if (!c1cs) {
        // 0x8022967C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80229694;
    }
    goto skip_2;
    // 0x8022967C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x80229680: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80229684: swc1        $f12, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f12.u32l;
    // 0x80229688: b           L_802296B4
    // 0x8022968C: swc1        $f18, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f18.u32l;
        goto L_802296B4;
    // 0x8022968C: swc1        $f18, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f18.u32l;
    // 0x80229690: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80229694:
    // 0x80229694: nop

    // 0x80229698: bc1fl       L_802296B0
    if (!c1cs) {
        // 0x8022969C: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802296B0;
    }
    goto skip_3;
    // 0x8022969C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x802296A0: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802296A4: b           L_802296B4
    // 0x802296A8: swc1        $f8, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f8.u32l;
        goto L_802296B4;
    // 0x802296A8: swc1        $f8, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f8.u32l;
    // 0x802296AC: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_802296B0:
    // 0x802296B0: swc1        $f10, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f10.u32l;
L_802296B4:
    // 0x802296B4: addiu       $v1, $a1, 0x5C
    ctx->r3 = ADD32(ctx->r5, 0X5C);
L_802296B8:
    // 0x802296B8: lwc1        $f14, 0x4C($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x802296BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802296C0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x802296C4: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802296C8: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x802296CC: nop

    // 0x802296D0: bc1fl       L_80229744
    if (!c1cs) {
        // 0x802296D4: lwc1        $f14, 0x58($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X58);
            goto L_80229744;
    }
    goto skip_4;
    // 0x802296D4: lwc1        $f14, 0x58($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X58);
    skip_4:
    // 0x802296D8: lwc1        $f12, 0x48($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X48);
    // 0x802296DC: lwc1        $f2, 0x44($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802296E0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802296E4: nop

    // 0x802296E8: bc1fl       L_80229700
    if (!c1cs) {
        // 0x802296EC: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80229700;
    }
    goto skip_5;
    // 0x802296EC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_5:
    // 0x802296F0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802296F4: b           L_80229700
    // 0x802296F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80229700;
    // 0x802296F8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802296FC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80229700:
    // 0x80229700: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80229704: nop

    // 0x80229708: bc1fl       L_80229720
    if (!c1cs) {
        // 0x8022970C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80229720;
    }
    goto skip_6;
    // 0x8022970C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x80229710: swc1        $f12, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f12.u32l;
    // 0x80229714: b           L_80229740
    // 0x80229718: swc1        $f18, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f18.u32l;
        goto L_80229740;
    // 0x80229718: swc1        $f18, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f18.u32l;
    // 0x8022971C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80229720:
    // 0x80229720: nop

    // 0x80229724: bc1fl       L_8022973C
    if (!c1cs) {
        // 0x80229728: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8022973C;
    }
    goto skip_7;
    // 0x80229728: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_7:
    // 0x8022972C: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80229730: b           L_80229740
    // 0x80229734: swc1        $f6, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f6.u32l;
        goto L_80229740;
    // 0x80229734: swc1        $f6, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f6.u32l;
    // 0x80229738: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_8022973C:
    // 0x8022973C: swc1        $f8, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f8.u32l;
L_80229740:
    // 0x80229740: lwc1        $f14, 0x58($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X58);
L_80229744:
    // 0x80229744: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80229748: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x8022974C: nop

    // 0x80229750: bc1fl       L_802297C4
    if (!c1cs) {
        // 0x80229754: sw          $v1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r3;
            goto L_802297C4;
    }
    goto skip_8;
    // 0x80229754: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    skip_8:
    // 0x80229758: lwc1        $f12, 0x54($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X54);
    // 0x8022975C: lwc1        $f2, 0x50($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X50);
    // 0x80229760: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80229764: nop

    // 0x80229768: bc1fl       L_80229780
    if (!c1cs) {
        // 0x8022976C: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80229780;
    }
    goto skip_9;
    // 0x8022976C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_9:
    // 0x80229770: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80229774: b           L_80229780
    // 0x80229778: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80229780;
    // 0x80229778: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8022977C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80229780:
    // 0x80229780: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80229784: nop

    // 0x80229788: bc1fl       L_802297A0
    if (!c1cs) {
        // 0x8022978C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_802297A0;
    }
    goto skip_10;
    // 0x8022978C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_10:
    // 0x80229790: swc1        $f12, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f12.u32l;
    // 0x80229794: b           L_802297C0
    // 0x80229798: swc1        $f18, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f18.u32l;
        goto L_802297C0;
    // 0x80229798: swc1        $f18, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f18.u32l;
    // 0x8022979C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_802297A0:
    // 0x802297A0: nop

    // 0x802297A4: bc1fl       L_802297BC
    if (!c1cs) {
        // 0x802297A8: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_802297BC;
    }
    goto skip_11;
    // 0x802297A8: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_11:
    // 0x802297AC: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802297B0: b           L_802297C0
    // 0x802297B4: swc1        $f4, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f4.u32l;
        goto L_802297C0;
    // 0x802297B4: swc1        $f4, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f4.u32l;
    // 0x802297B8: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_802297BC:
    // 0x802297BC: swc1        $f6, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f6.u32l;
L_802297C0:
    // 0x802297C0: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
L_802297C4:
    // 0x802297C4: jal         0x8000DD58
    // 0x802297C8: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x802297C8: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    after_0:
    // 0x802297CC: addiu       $t6, $v0, -0x1E
    ctx->r14 = ADD32(ctx->r2, -0X1E);
    // 0x802297D0: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x802297D4: jal         0x8000DD58
    // 0x802297D8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x802297D8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x802297DC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802297E0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802297E4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x802297E8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x802297EC: mflo        $t0
    ctx->r8 = lo;
    // 0x802297F0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802297F4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x802297F8: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x802297FC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80229800: lwc1        $f10, 0x38($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X38);
    // 0x80229804: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80229808: addiu       $t8, $zero, 0xD0
    ctx->r24 = ADD32(0, 0XD0);
    // 0x8022980C: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x80229810: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80229814: lwc1        $f6, 0x50($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X50);
    // 0x80229818: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x8022981C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80229820: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80229824: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80229828: lwc1        $f10, 0x44($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X44);
    // 0x8022982C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80229830: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80229834: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80229838: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022983C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80229840: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229844: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80229848: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8022984C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80229850: lwc1        $f4, -0x4D60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D60);
    // 0x80229854: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80229858: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8022985C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80229860: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80229864: jal         0x80216B30
    // 0x80229868: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_2;
    // 0x80229868: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8022986C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80229870: beq         $v0, $zero, L_8022990C
    if (ctx->r2 == 0) {
        // 0x80229874: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8022990C;
    }
    // 0x80229874: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80229878: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8022987C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x80229880: jal         0x8021689C
    // 0x80229884: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_8021689C_68027C(rdram, ctx);
        goto after_3;
    // 0x80229884: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_3:
    // 0x80229888: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8022988C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80229890: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80229894: lwc1        $f8, 0x38($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X38);
    // 0x80229898: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8022989C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802298A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802298A4: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x802298A8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x802298AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802298B0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802298B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802298B8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802298BC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802298C0: lwc1        $f8, 0x50($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X50);
    // 0x802298C4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802298C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802298CC: nop

    // 0x802298D0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802298D4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802298D8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802298DC: jal         0x802168F8
    // 0x802298E0: nop

    func_802168F8_6802D8(rdram, ctx);
        goto after_4;
    // 0x802298E0: nop

    after_4:
    // 0x802298E4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x802298E8: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x802298EC: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    // 0x802298F0: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    // 0x802298F4: jal         0x802169BC
    // 0x802298F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_5;
    // 0x802298F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x802298FC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80229900: jal         0x802168A8
    // 0x80229904: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_802168A8_680288(rdram, ctx);
        goto after_6;
    // 0x80229904: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80229908: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
L_8022990C:
    // 0x8022990C: lwc1        $f6, 0x38($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X38);
    // 0x80229910: lwc1        $f8, 0x44($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X44);
    // 0x80229914: lwc1        $f10, 0x50($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X50);
    // 0x80229918: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x8022991C: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80229920: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x80229924: jal         0x80011760
    // 0x80229928: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_80011760_12360(rdram, ctx);
        goto after_7;
    // 0x80229928: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_7:
    // 0x8022992C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229930: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80229934: jr          $ra
    // 0x80229938: nop

    TRACE_RETURN()
    return;
    // 0x80229938: nop

;}
RECOMP_FUNC void func_80213B8C_67D56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213B8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213B94: beq         $a1, $zero, L_80213BBC
    if (ctx->r5 == 0) {
        // 0x80213B98: lw          $a2, 0x18($a0)
        ctx->r6 = MEM_W(ctx->r4, 0X18);
            goto L_80213BBC;
    }
    // 0x80213B98: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x80213B9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80213BA0: beq         $a1, $at, L_80213BF4
    if (ctx->r5 == ctx->r1) {
        // 0x80213BA4: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80213BF4;
    }
    // 0x80213BA4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80213BA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80213BAC: beq         $a1, $at, L_80213C28
    if (ctx->r5 == ctx->r1) {
        // 0x80213BB0: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80213C28;
    }
    // 0x80213BB0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80213BB4: b           L_80213C5C
    // 0x80213BB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
        goto L_80213C5C;
    // 0x80213BB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_80213BBC:
    // 0x80213BBC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80213BC0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80213BC4: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x80213BC8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213BCC: lwc1        $f4, -0x5728($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5728);
    // 0x80213BD0: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80213BD4: addiu       $t8, $t8, 0x9B4
    ctx->r24 = ADD32(ctx->r24, 0X9B4);
    // 0x80213BD8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213BDC: addiu       $t7, $zero, 0x277
    ctx->r15 = ADD32(0, 0X277);
    // 0x80213BE0: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80213BE4: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80213BE8: sh          $t7, 0x34($a2)
    MEM_H(0X34, ctx->r6) = ctx->r15;
    // 0x80213BEC: b           L_80213C58
    // 0x80213BF0: sw          $t9, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r25;
        goto L_80213C58;
    // 0x80213BF0: sw          $t9, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r25;
L_80213BF4:
    // 0x80213BF4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80213BF8: sb          $t0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r8;
    // 0x80213BFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213C00: lwc1        $f6, -0x5724($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5724);
    // 0x80213C04: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x80213C08: addiu       $t2, $t2, 0x554
    ctx->r10 = ADD32(ctx->r10, 0X554);
    // 0x80213C0C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213C10: addiu       $t1, $zero, 0x277
    ctx->r9 = ADD32(0, 0X277);
    // 0x80213C14: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x80213C18: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80213C1C: sh          $t1, 0x34($a2)
    MEM_H(0X34, ctx->r6) = ctx->r9;
    // 0x80213C20: b           L_80213C58
    // 0x80213C24: sw          $t3, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r11;
        goto L_80213C58;
    // 0x80213C24: sw          $t3, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r11;
L_80213C28:
    // 0x80213C28: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80213C2C: sb          $t4, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r12;
    // 0x80213C30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213C34: lwc1        $f8, -0x5720($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5720);
    // 0x80213C38: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80213C3C: addiu       $t6, $t6, 0x1A3C
    ctx->r14 = ADD32(ctx->r14, 0X1A3C);
    // 0x80213C40: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213C44: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80213C48: addiu       $t5, $zero, 0x4D8
    ctx->r13 = ADD32(0, 0X4D8);
    // 0x80213C4C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80213C50: sh          $t5, 0x34($a2)
    MEM_H(0X34, ctx->r6) = ctx->r13;
    // 0x80213C54: sw          $t7, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r15;
L_80213C58:
    // 0x80213C58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_80213C5C:
    // 0x80213C5C: jal         0x80014218
    // 0x80213C60: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80014218_14E18(rdram, ctx);
        goto after_0;
    // 0x80213C60: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80213C64: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80213C68: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80213C6C: nop

    // 0x80213C70: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    // 0x80213C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213C7C: jr          $ra
    // 0x80213C80: nop

    TRACE_RETURN()
    return;
    // 0x80213C80: nop

;}
RECOMP_FUNC void func_8021F8A0_689280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F8A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F8A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F8A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021F8AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F8B0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021F8B4: sb          $t6, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r14;
    // 0x8021F8B8: jal         0x80013AC4
    // 0x8021F8BC: addiu       $a0, $a0, -0x5BBC
    ctx->r4 = ADD32(ctx->r4, -0X5BBC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021F8BC: addiu       $a0, $a0, -0x5BBC
    ctx->r4 = ADD32(ctx->r4, -0X5BBC);
    after_0:
    // 0x8021F8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F8C4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F8C8: sb          $zero, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = 0;
    // 0x8021F8CC: jr          $ra
    // 0x8021F8D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8021F8D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80214A3C_67E41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214A3C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80214A40: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80214A44: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x80214A48: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80214A4C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80214A50: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80214A54: nop

    // 0x80214A58: bc1fl       L_80214A78
    if (!c1cs) {
        // 0x80214A5C: lwc1        $f6, 0x8($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80214A78;
    }
    goto skip_0;
    // 0x80214A5C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80214A60: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80214A64: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80214A68: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80214A6C: b           L_80214A7C
    // 0x80214A70: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80214A7C;
    // 0x80214A70: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80214A74: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
L_80214A78:
    // 0x80214A78: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_80214A7C:
    // 0x80214A7C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80214A80: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80214A84: jr          $ra
    // 0x80214A88: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x80214A88: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8022669C_69007C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022669C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802266A0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802266A4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x802266A8: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x802266AC: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x802266B0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x802266B4: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x802266B8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x802266BC: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x802266C0: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x802266C4: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x802266C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802266CC: lh          $t7, -0x5250($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5250);
    // 0x802266D0: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x802266D4: addiu       $t9, $t9, 0x1000
    ctx->r25 = ADD32(ctx->r25, 0X1000);
    // 0x802266D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802266DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802266E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802266E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802266E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802266EC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802266F0: sll         $t8, $t8, 11
    ctx->r24 = S32(ctx->r24 << 11);
    // 0x802266F4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802266F8: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x802266FC: lw          $v0, -0x2B90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2B90);
    // 0x80226700: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x80226704: addiu       $s3, $zero, 0x20
    ctx->r19 = ADD32(0, 0X20);
    // 0x80226708: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
    // 0x8022670C: addiu       $s5, $zero, 0x140
    ctx->r21 = ADD32(0, 0X140);
    // 0x80226710: addiu       $s6, $zero, 0xF0
    ctx->r22 = ADD32(0, 0XF0);
    // 0x80226714: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80226718: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8022671C:
    // 0x8022671C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_80226720:
    // 0x80226720: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80226724: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x80226728: sll         $t6, $t2, 7
    ctx->r14 = S32(ctx->r10 << 7);
    // 0x8022672C: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80226730: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80226734:
    // 0x80226734: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80226738: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
L_8022673C:
    // 0x8022673C: lhu         $a2, 0x0($t3)
    ctx->r6 = MEM_HU(ctx->r11, 0X0);
    // 0x80226740: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80226744: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80226748: sra         $t7, $a2, 11
    ctx->r15 = S32(SIGNED(ctx->r6) >> 11);
    // 0x8022674C: sra         $t9, $a2, 6
    ctx->r25 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80226750: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80226754: andi        $t4, $t7, 0x1F
    ctx->r12 = ctx->r15 & 0X1F;
    // 0x80226758: andi        $t6, $t9, 0x1F
    ctx->r14 = ctx->r25 & 0X1F;
    // 0x8022675C: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80226760: andi        $t7, $a2, 0x1F
    ctx->r15 = ctx->r6 & 0X1F;
    // 0x80226764: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80226768: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8022676C: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x80226770: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x80226774: div         $zero, $t6, $s2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r18)));
    // 0x80226778: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8022677C: bne         $s2, $zero, L_80226788
    if (ctx->r18 != 0) {
        // 0x80226780: nop
    
            goto L_80226788;
    }
    // 0x80226780: nop

    // 0x80226784: break       7
    do_break(2149738372);
L_80226788:
    // 0x80226788: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022678C: bne         $s2, $at, L_802267A0
    if (ctx->r18 != ctx->r1) {
        // 0x80226790: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802267A0;
    }
    // 0x80226790: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80226794: bne         $t6, $at, L_802267A0
    if (ctx->r14 != ctx->r1) {
        // 0x80226798: nop
    
            goto L_802267A0;
    }
    // 0x80226798: nop

    // 0x8022679C: break       6
    do_break(2149738396);
L_802267A0:
    // 0x802267A0: lhu         $a2, -0x2($t3)
    ctx->r6 = MEM_HU(ctx->r11, -0X2);
    // 0x802267A4: mflo        $s1
    ctx->r17 = lo;
    // 0x802267A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802267AC: sra         $t6, $a2, 11
    ctx->r14 = S32(SIGNED(ctx->r6) >> 11);
    // 0x802267B0: sra         $t8, $a2, 6
    ctx->r24 = S32(SIGNED(ctx->r6) >> 6);
    // 0x802267B4: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x802267B8: bgez        $s1, L_802267C8
    if (SIGNED(ctx->r17) >= 0) {
        // 0x802267BC: sra         $t7, $s1, 1
        ctx->r15 = S32(SIGNED(ctx->r17) >> 1);
            goto L_802267C8;
    }
    // 0x802267BC: sra         $t7, $s1, 1
    ctx->r15 = S32(SIGNED(ctx->r17) >> 1);
    // 0x802267C0: addiu       $at, $s1, 0x1
    ctx->r1 = ADD32(ctx->r17, 0X1);
    // 0x802267C4: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_802267C8:
    // 0x802267C8: andi        $t4, $t6, 0x1F
    ctx->r12 = ctx->r14 & 0X1F;
    // 0x802267CC: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x802267D0: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x802267D4: sll         $s1, $t7, 4
    ctx->r17 = S32(ctx->r15 << 4);
    // 0x802267D8: andi        $t6, $a2, 0x1F
    ctx->r14 = ctx->r6 & 0X1F;
    // 0x802267DC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x802267E0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x802267E4: addu        $t8, $t4, $t9
    ctx->r24 = ADD32(ctx->r12, ctx->r25);
    // 0x802267E8: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x802267EC: div         $zero, $t9, $s2
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r18)));
    // 0x802267F0: mflo        $t6
    ctx->r14 = lo;
    // 0x802267F4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802267F8: bne         $s2, $zero, L_80226804
    if (ctx->r18 != 0) {
        // 0x802267FC: nop
    
            goto L_80226804;
    }
    // 0x802267FC: nop

    // 0x80226800: break       7
    do_break(2149738496);
L_80226804:
    // 0x80226804: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80226808: bne         $s2, $at, L_8022681C
    if (ctx->r18 != ctx->r1) {
        // 0x8022680C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022681C;
    }
    // 0x8022680C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80226810: bne         $t9, $at, L_8022681C
    if (ctx->r25 != ctx->r1) {
        // 0x80226814: nop
    
            goto L_8022681C;
    }
    // 0x80226814: nop

    // 0x80226818: break       6
    do_break(2149738520);
L_8022681C:
    // 0x8022681C: bgez        $t6, L_8022682C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80226820: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_8022682C;
    }
    // 0x80226820: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x80226824: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x80226828: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_8022682C:
    // 0x8022682C: or          $s1, $s1, $t7
    ctx->r17 = ctx->r17 | ctx->r15;
    // 0x80226830: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x80226834: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80226838: bne         $t1, $s3, L_8022673C
    if (ctx->r9 != ctx->r19) {
        // 0x8022683C: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_8022673C;
    }
    // 0x8022683C: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x80226840: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80226844: bne         $a1, $s4, L_80226734
    if (ctx->r5 != ctx->r20) {
        // 0x80226848: addiu       $t2, $t2, 0x280
        ctx->r10 = ADD32(ctx->r10, 0X280);
            goto L_80226734;
    }
    // 0x80226848: addiu       $t2, $t2, 0x280
    ctx->r10 = ADD32(ctx->r10, 0X280);
    // 0x8022684C: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x80226850: bne         $a3, $s5, L_80226720
    if (ctx->r7 != ctx->r21) {
        // 0x80226854: addiu       $t0, $t0, 0x40
        ctx->r8 = ADD32(ctx->r8, 0X40);
            goto L_80226720;
    }
    // 0x80226854: addiu       $t0, $t0, 0x40
    ctx->r8 = ADD32(ctx->r8, 0X40);
    // 0x80226858: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
    // 0x8022685C: bnel        $v1, $s6, L_8022671C
    if (ctx->r3 != ctx->r22) {
        // 0x80226860: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8022671C;
    }
    goto skip_0;
    // 0x80226860: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    skip_0:
    // 0x80226864: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x80226868: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x8022686C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x80226870: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x80226874: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x80226878: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x8022687C: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x80226880: jr          $ra
    // 0x80226884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80214A8C_67E46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214A8C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80214A90: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80214A94: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80214A98: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80214A9C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214AA0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80214AA4: addiu       $a1, $a1, 0x48E4
    ctx->r5 = ADD32(ctx->r5, 0X48E4);
    // 0x80214AA8: jal         0x80034E08
    // 0x80214AAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80214AAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80214AB0: bne         $v0, $zero, L_80214AC0
    if (ctx->r2 != 0) {
        // 0x80214AB4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80214AC0;
    }
    // 0x80214AB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80214AB8: b           L_80214B24
    // 0x80214ABC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214B24;
    // 0x80214ABC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214AC0:
    // 0x80214AC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80214AC4: lwc1        $f0, -0x5680($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5680);
    // 0x80214AC8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80214ACC: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80214AD0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80214AD4: addiu       $a1, $a1, 0x4570
    ctx->r5 = ADD32(ctx->r5, 0X4570);
    // 0x80214AD8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214ADC: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80214AE0: addiu       $t6, $zero, 0x4DE
    ctx->r14 = ADD32(0, 0X4DE);
    // 0x80214AE4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80214AE8: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80214AEC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80214AF0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80214AF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80214AF8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80214AFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80214B00: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80214B04: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80214B08: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80214B0C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80214B10: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80214B14: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80214B18: jal         0x8000DBF0
    // 0x80214B1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80214B1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80214B20: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80214B24:
    // 0x80214B24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80214B28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80214B2C: jr          $ra
    // 0x80214B30: nop

    TRACE_RETURN()
    return;
    // 0x80214B30: nop

;}
RECOMP_FUNC void func_80213540_67CF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213540: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x80213544: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80213548: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8021354C: bne         $t6, $zero, L_802135D4
    if (ctx->r14 != 0) {
        // 0x80213550: lwc1        $f12, 0x10($a1)
        ctx->f12.u32l = MEM_W(ctx->r5, 0X10);
            goto L_802135D4;
    }
    // 0x80213550: lwc1        $f12, 0x10($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80213554: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80213558: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021355C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213560: ldc1        $f8, -0x5740($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5740);
    // 0x80213564: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80213568: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021356C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80213570: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80213574: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80213578: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021357C: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80213580: add.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x80213584: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80213588: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021358C: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80213590: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x80213594: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80213598: nop

    // 0x8021359C: bc1fl       L_802135D8
    if (!c1cs) {
        // 0x802135A0: swc1        $f0, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
            goto L_802135D8;
    }
    goto skip_0;
    // 0x802135A0: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    skip_0:
    // 0x802135A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802135A8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x802135AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802135B0: div.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f8.fl);
    // 0x802135B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802135B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802135BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802135C0: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802135C4: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x802135C8: div.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802135CC: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x802135D0: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
L_802135D4:
    // 0x802135D4: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
L_802135D8:
    // 0x802135D8: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    // 0x802135DC: jr          $ra
    // 0x802135E0: swc1        $f12, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802135E0: swc1        $f12, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021F0BC_688A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F0BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021F0C0: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x8021F0C4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021F0C8: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
    // 0x8021F0CC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021F0D0: nop

    // 0x8021F0D4: bc1fl       L_8021F0F8
    if (!c1cs) {
        // 0x8021F0D8: lwc1        $f10, 0x34($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
            goto L_8021F0F8;
    }
    goto skip_0;
    // 0x8021F0D8: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    skip_0:
    // 0x8021F0DC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021F0E0: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021F0E4: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021F0E8: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021F0EC: b           L_8021F100
    // 0x8021F0F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021F100;
    // 0x8021F0F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021F0F4: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
L_8021F0F8:
    // 0x8021F0F8: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021F0FC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8021F100:
    // 0x8021F100: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021F104: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021F108: jr          $ra
    // 0x8021F10C: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021F10C: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021E2B4_687C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E2B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021E2B8: jr          $ra
    // 0x8021E2BC: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021E2BC: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80227480_690E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227480: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80227484: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x80227488: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x8022748C: jr          $ra
    // 0x80227490: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x80227490: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
;}
RECOMP_FUNC void func_80212F50_67C930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212F50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80212F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212F58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80212F5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80212F60: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80212F64: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x80212F68: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80212F6C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80212F70: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80212F74: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80212F78: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80212F7C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80212F80: jal         0x800040A8
    // 0x80212F84: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80212F84: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80212F88: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80212F8C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80212F90: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80212F94: lwc1        $f16, 0x5C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X5C);
    // 0x80212F98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80212F9C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80212FA0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80212FA4: lhu         $t1, 0x64($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X64);
    // 0x80212FA8: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80212FAC: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x80212FB0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80212FB4: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80212FB8: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80212FBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80212FC0: lui         $t5, 0x800
    ctx->r13 = S32(0X800 << 16);
    // 0x80212FC4: addiu       $t5, $t5, 0x7C4
    ctx->r13 = ADD32(ctx->r13, 0X7C4);
    // 0x80212FC8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80212FCC: swc1        $f10, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f10.u32l;
    // 0x80212FD0: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x80212FD4: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    // 0x80212FD8: lh          $t3, 0xA($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XA);
    // 0x80212FDC: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x80212FE0: bne         $t3, $zero, L_80212FEC
    if (ctx->r11 != 0) {
        // 0x80212FE4: nop
    
            goto L_80212FEC;
    }
    // 0x80212FE4: nop

    // 0x80212FE8: break       7
    do_break(2149658600);
L_80212FEC:
    // 0x80212FEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80212FF0: bne         $t3, $at, L_80213004
    if (ctx->r11 != ctx->r1) {
        // 0x80212FF4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80213004;
    }
    // 0x80212FF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80212FF8: bne         $t2, $at, L_80213004
    if (ctx->r10 != ctx->r1) {
        // 0x80212FFC: nop
    
            goto L_80213004;
    }
    // 0x80212FFC: nop

    // 0x80213000: break       6
    do_break(2149658624);
L_80213004:
    // 0x80213004: mflo        $t4
    ctx->r12 = lo;
    // 0x80213008: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021300C: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80213010: sh          $t4, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r12;
    // 0x80213014: sw          $t6, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r14;
    // 0x80213018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021301C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213020: jr          $ra
    // 0x80213024: nop

    TRACE_RETURN()
    return;
    // 0x80213024: nop

;}
RECOMP_FUNC void func_80228CF8_6926D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CF8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80228CFC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80228D00: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80228D04: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80228D08: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x80228D0C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80228D10: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x80228D14: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80228D18: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80228D1C: bc1f        L_80228D3C
    if (!c1cs) {
        // 0x80228D20: swc1        $f4, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
            goto L_80228D3C;
    }
    // 0x80228D20: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x80228D24: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80228D28: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80228D2C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80228D30: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80228D34: b           L_80228D48
    // 0x80228D38: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228D48;
    // 0x80228D38: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80228D3C:
    // 0x80228D3C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80228D40: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80228D44: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80228D48:
    // 0x80228D48: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80228D4C: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80228D50: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80228D54: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80228D58: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80228D5C: nop

    // 0x80228D60: bc1f        L_80228D74
    if (!c1cs) {
        // 0x80228D64: swc1        $f4, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
            goto L_80228D74;
    }
    // 0x80228D64: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x80228D68: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228D6C: b           L_80228D78
    // 0x80228D70: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228D78;
    // 0x80228D70: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80228D74:
    // 0x80228D74: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80228D78:
    // 0x80228D78: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80228D7C: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80228D80: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80228D84: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80228D88: nop

    // 0x80228D8C: bc1f        L_80228DA0
    if (!c1cs) {
        // 0x80228D90: swc1        $f6, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
            goto L_80228DA0;
    }
    // 0x80228D90: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x80228D94: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228D98: b           L_80228DA4
    // 0x80228D9C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228DA4;
    // 0x80228D9C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80228DA0:
    // 0x80228DA0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80228DA4:
    // 0x80228DA4: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80228DA8: jr          $ra
    // 0x80228DAC: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80228DAC: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80227AE4_6914C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227AEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80227AF0: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80227AF4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80227AF8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80227AFC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80227B00: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x80227B04: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x80227B08: bc1fl       L_80227B2C
    if (!c1cs) {
        // 0x80227B0C: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_80227B2C;
    }
    goto skip_0;
    // 0x80227B0C: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x80227B10: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80227B14: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80227B18: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80227B1C: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80227B20: b           L_80227B34
    // 0x80227B24: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80227B34;
    // 0x80227B24: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80227B28: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_80227B2C:
    // 0x80227B2C: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80227B30: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
L_80227B34:
    // 0x80227B34: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80227B38: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80227B3C: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80227B40: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80227B44: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80227B48: nop

    // 0x80227B4C: bc1f        L_80227B60
    if (!c1cs) {
        // 0x80227B50: swc1        $f4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
            goto L_80227B60;
    }
    // 0x80227B50: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x80227B54: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80227B58: b           L_80227B68
    // 0x80227B5C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_80227B68;
    // 0x80227B5C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_80227B60:
    // 0x80227B60: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80227B64: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80227B68:
    // 0x80227B68: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80227B6C: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80227B70: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80227B74: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80227B78: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x80227B7C: jal         0x800040A8
    // 0x80227B80: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80227B80: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80227B84: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80227B88: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80227B8C: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
    // 0x80227B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80227B98: jr          $ra
    // 0x80227B9C: nop

    TRACE_RETURN()
    return;
    // 0x80227B9C: nop

;}
RECOMP_FUNC void func_80215DB4_67F794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215DB4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80215DB8: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80215DBC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215DC0: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x80215DC4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80215DC8: nop

    // 0x80215DCC: bc1fl       L_80215DF0
    if (!c1cs) {
        // 0x80215DD0: lwc1        $f10, 0x20($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
            goto L_80215DF0;
    }
    goto skip_0;
    // 0x80215DD0: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    skip_0:
    // 0x80215DD4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215DD8: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80215DDC: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80215DE0: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80215DE4: b           L_80215DF8
    // 0x80215DE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80215DF8;
    // 0x80215DE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80215DEC: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
L_80215DF0:
    // 0x80215DF0: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80215DF4: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_80215DF8:
    // 0x80215DF8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80215DFC: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80215E00: jr          $ra
    // 0x80215E04: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80215E04: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80228E88_692868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E88: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80228E8C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80228E90: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80228E94: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80228E98: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80228E9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228EA0: ldc1        $f16, -0x4D88($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X4D88);
    // 0x80228EA4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80228EA8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80228EAC: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x80228EB0: nop

    // 0x80228EB4: bc1f        L_80228F2C
    if (!c1cs) {
        // 0x80228EB8: addiu       $v1, $a0, 0x5C
        ctx->r3 = ADD32(ctx->r4, 0X5C);
            goto L_80228F2C;
    }
    // 0x80228EB8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80228EBC: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80228EC0: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80228EC4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80228EC8: nop

    // 0x80228ECC: bc1fl       L_80228EE4
    if (!c1cs) {
        // 0x80228ED0: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80228EE4;
    }
    goto skip_0;
    // 0x80228ED0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_0:
    // 0x80228ED4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80228ED8: b           L_80228EE4
    // 0x80228EDC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228EE4;
    // 0x80228EDC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80228EE0: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80228EE4:
    // 0x80228EE4: lwc1        $f14, 0x10($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80228EE8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80228EEC: nop

    // 0x80228EF0: bc1fl       L_80228F0C
    if (!c1cs) {
        // 0x80228EF4: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80228F0C;
    }
    goto skip_1;
    // 0x80228EF4: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x80228EF8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80228EFC: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x80228F00: b           L_80228F2C
    // 0x80228F04: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
        goto L_80228F2C;
    // 0x80228F04: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    // 0x80228F08: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80228F0C:
    // 0x80228F0C: nop

    // 0x80228F10: bc1fl       L_80228F28
    if (!c1cs) {
        // 0x80228F14: add.s       $f10, $f2, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80228F28;
    }
    goto skip_2;
    // 0x80228F14: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    skip_2:
    // 0x80228F18: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80228F1C: b           L_80228F2C
    // 0x80228F20: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
        goto L_80228F2C;
    // 0x80228F20: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x80228F24: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
L_80228F28:
    // 0x80228F28: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_80228F2C:
    // 0x80228F2C: addiu       $v1, $a1, 0x5C
    ctx->r3 = ADD32(ctx->r5, 0X5C);
    // 0x80228F30: lwc1        $f14, 0x1C($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80228F34: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80228F38: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x80228F3C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80228F40: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x80228F44: nop

    // 0x80228F48: bc1fl       L_80228FBC
    if (!c1cs) {
        // 0x80228F4C: lwc1        $f14, 0x28($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X28);
            goto L_80228FBC;
    }
    goto skip_3;
    // 0x80228F4C: lwc1        $f14, 0x28($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X28);
    skip_3:
    // 0x80228F50: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80228F54: lwc1        $f2, 0x14($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80228F58: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80228F5C: nop

    // 0x80228F60: bc1fl       L_80228F78
    if (!c1cs) {
        // 0x80228F64: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80228F78;
    }
    goto skip_4;
    // 0x80228F64: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_4:
    // 0x80228F68: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80228F6C: b           L_80228F78
    // 0x80228F70: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228F78;
    // 0x80228F70: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80228F74: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80228F78:
    // 0x80228F78: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80228F7C: nop

    // 0x80228F80: bc1fl       L_80228F98
    if (!c1cs) {
        // 0x80228F84: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80228F98;
    }
    goto skip_5;
    // 0x80228F84: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_5:
    // 0x80228F88: swc1        $f12, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f12.u32l;
    // 0x80228F8C: b           L_80228FB8
    // 0x80228F90: swc1        $f18, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f18.u32l;
        goto L_80228FB8;
    // 0x80228F90: swc1        $f18, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f18.u32l;
    // 0x80228F94: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80228F98:
    // 0x80228F98: nop

    // 0x80228F9C: bc1fl       L_80228FB4
    if (!c1cs) {
        // 0x80228FA0: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80228FB4;
    }
    goto skip_6;
    // 0x80228FA0: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_6:
    // 0x80228FA4: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80228FA8: b           L_80228FB8
    // 0x80228FAC: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
        goto L_80228FB8;
    // 0x80228FAC: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x80228FB0: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80228FB4:
    // 0x80228FB4: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
L_80228FB8:
    // 0x80228FB8: lwc1        $f14, 0x28($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X28);
L_80228FBC:
    // 0x80228FBC: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80228FC0: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80228FC4: nop

    // 0x80228FC8: bc1fl       L_8022903C
    if (!c1cs) {
        // 0x80228FCC: sw          $v1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r3;
            goto L_8022903C;
    }
    goto skip_7;
    // 0x80228FCC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    skip_7:
    // 0x80228FD0: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80228FD4: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80228FD8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80228FDC: nop

    // 0x80228FE0: bc1fl       L_80228FF8
    if (!c1cs) {
        // 0x80228FE4: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80228FF8;
    }
    goto skip_8;
    // 0x80228FE4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_8:
    // 0x80228FE8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80228FEC: b           L_80228FF8
    // 0x80228FF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80228FF8;
    // 0x80228FF0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80228FF4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80228FF8:
    // 0x80228FF8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80228FFC: nop

    // 0x80229000: bc1fl       L_80229018
    if (!c1cs) {
        // 0x80229004: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80229018;
    }
    goto skip_9;
    // 0x80229004: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_9:
    // 0x80229008: swc1        $f12, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f12.u32l;
    // 0x8022900C: b           L_80229038
    // 0x80229010: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
        goto L_80229038;
    // 0x80229010: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    // 0x80229014: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80229018:
    // 0x80229018: nop

    // 0x8022901C: bc1fl       L_80229034
    if (!c1cs) {
        // 0x80229020: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80229034;
    }
    goto skip_10;
    // 0x80229020: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_10:
    // 0x80229024: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80229028: b           L_80229038
    // 0x8022902C: swc1        $f4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f4.u32l;
        goto L_80229038;
    // 0x8022902C: swc1        $f4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f4.u32l;
    // 0x80229030: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80229034:
    // 0x80229034: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
L_80229038:
    // 0x80229038: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
L_8022903C:
    // 0x8022903C: jal         0x8000DD58
    // 0x80229040: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x80229040: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    after_0:
    // 0x80229044: addiu       $t6, $v0, -0x1E
    ctx->r14 = ADD32(ctx->r2, -0X1E);
    // 0x80229048: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8022904C: jal         0x8000DD58
    // 0x80229050: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x80229050: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80229054: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80229058: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8022905C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80229060: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80229064: mflo        $t0
    ctx->r8 = lo;
    // 0x80229068: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8022906C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80229070: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x80229074: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80229078: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8022907C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80229080: addiu       $t8, $zero, 0xD0
    ctx->r24 = ADD32(0, 0XD0);
    // 0x80229084: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x80229088: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8022908C: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80229090: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x80229094: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80229098: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8022909C: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x802290A0: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x802290A4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x802290A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802290AC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802290B0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802290B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802290B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802290BC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x802290C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802290C4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802290C8: lwc1        $f4, -0x4D80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D80);
    // 0x802290CC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802290D0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802290D4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802290D8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802290DC: jal         0x80216B30
    // 0x802290E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_2;
    // 0x802290E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802290E4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x802290E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802290EC: jal         0x8021689C
    // 0x802290F0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_8021689C_68027C(rdram, ctx);
        goto after_3;
    // 0x802290F0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_3:
    // 0x802290F4: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x802290F8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x802290FC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80229100: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80229104: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80229108: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8022910C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80229110: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x80229114: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80229118: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022911C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80229120: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80229124: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80229128: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8022912C: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80229130: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80229134: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80229138: nop

    // 0x8022913C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80229140: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80229144: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80229148: jal         0x802168F8
    // 0x8022914C: nop

    func_802168F8_6802D8(rdram, ctx);
        goto after_4;
    // 0x8022914C: nop

    after_4:
    // 0x80229150: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80229154: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x80229158: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    // 0x8022915C: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    // 0x80229160: jal         0x802169BC
    // 0x80229164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_5;
    // 0x80229164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80229168: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8022916C: jal         0x802168A8
    // 0x80229170: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_802168A8_680288(rdram, ctx);
        goto after_6;
    // 0x80229170: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80229174: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80229178: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8022917C: lw          $t4, 0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X34);
    // 0x80229180: swc1        $f6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f6.u32l;
    // 0x80229184: lw          $t5, 0x34($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X34);
    // 0x80229188: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8022918C: swc1        $f8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f8.u32l;
    // 0x80229190: lw          $t6, 0x34($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X34);
    // 0x80229194: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80229198: swc1        $f10, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f10.u32l;
    // 0x8022919C: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    // 0x802291A0: andi        $t7, $a0, 0x4
    ctx->r15 = ctx->r4 & 0X4;
    // 0x802291A4: beql        $t7, $zero, L_802291D8
    if (ctx->r15 == 0) {
        // 0x802291A8: addiu       $t8, $a0, 0x1
        ctx->r24 = ADD32(ctx->r4, 0X1);
            goto L_802291D8;
    }
    goto skip_11;
    // 0x802291A8: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    skip_11:
    // 0x802291AC: lw          $v0, 0x34($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X34);
    // 0x802291B0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802291B4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802291B8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802291BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802291C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802291C4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802291C8: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x802291CC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x802291D0: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    // 0x802291D4: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
L_802291D8:
    // 0x802291D8: sh          $t8, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r24;
    // 0x802291DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802291E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802291E4: jr          $ra
    // 0x802291E8: nop

    TRACE_RETURN()
    return;
    // 0x802291E8: nop

;}
RECOMP_FUNC void func_802147A0_67E180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802147A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802147A4: jr          $ra
    // 0x802147A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802147A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80213028_67CA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213028: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021302C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80213030: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80213034: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80213038: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021303C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80213040: addiu       $a1, $a1, 0x2E90
    ctx->r5 = ADD32(ctx->r5, 0X2E90);
    // 0x80213044: jal         0x80034E08
    // 0x80213048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80213048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021304C: bne         $v0, $zero, L_8021305C
    if (ctx->r2 != 0) {
        // 0x80213050: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021305C;
    }
    // 0x80213050: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80213054: b           L_802130F0
    // 0x80213058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802130F0;
    // 0x80213058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021305C:
    // 0x8021305C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80213060: lwc1        $f0, -0x5754($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5754);
    // 0x80213064: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80213068: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021306C: swc1        $f0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f0.u32l;
    // 0x80213070: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80213074: swc1        $f4, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f4.u32l;
    // 0x80213078: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021307C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80213080: addiu       $a1, $a1, 0x3EC
    ctx->r5 = ADD32(ctx->r5, 0X3EC);
    // 0x80213084: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80213088: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021308C: addiu       $t6, $zero, 0x27C
    ctx->r14 = ADD32(0, 0X27C);
    // 0x80213090: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80213094: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80213098: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021309C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802130A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802130A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802130A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802130AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802130B0: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x802130B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802130B8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802130BC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802130C0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802130C4: jal         0x8000DBF0
    // 0x802130C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802130C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802130CC: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x802130D0: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x802130D4: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x802130D8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802130DC: addiu       $t9, $t9, 0x19A0
    ctx->r25 = ADD32(ctx->r25, 0X19A0);
    // 0x802130E0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x802130E4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x802130E8: sw          $t0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r8;
    // 0x802130EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802130F0:
    // 0x802130F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802130F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802130F8: jr          $ra
    // 0x802130FC: nop

    TRACE_RETURN()
    return;
    // 0x802130FC: nop

;}
RECOMP_FUNC void func_8021A3A8_683D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021A3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A3B0: jal         0x80034EF8
    // 0x8021A3B4: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x8021A3B4: nop

    after_0:
    // 0x8021A3B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021A3BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021A3C0: jr          $ra
    // 0x8021A3C4: nop

    TRACE_RETURN()
    return;
    // 0x8021A3C4: nop

;}
RECOMP_FUNC void func_8021EED0_6888B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021EED0: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021EED4: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8021EED8: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x8021EEDC: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8021EEE0: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021EEE4: jr          $ra
    // 0x8021EEE8: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021EEE8: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802168A8_680288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802168A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802168AC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802168B0: swc1        $f12, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f12.u32l;
    // 0x802168B4: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802168B8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802168BC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802168C0: nop

    // 0x802168C4: bc1fl       L_802168E4
    if (!c1cs) {
        // 0x802168C8: lwc1        $f6, 0x1C($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_802168E4;
    }
    goto skip_0;
    // 0x802168C8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    skip_0:
    // 0x802168CC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802168D0: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802168D4: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802168D8: b           L_802168E8
    // 0x802168DC: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_802168E8;
    // 0x802168DC: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802168E0: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
L_802168E4:
    // 0x802168E4: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_802168E8:
    // 0x802168E8: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802168EC: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802168F0: jr          $ra
    // 0x802168F4: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x802168F4: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80212664_67C044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212664: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80212668: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x8021266C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80212670: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80212674: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x80212678: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x8021267C: jr          $ra
    // 0x80212680: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
    TRACE_RETURN()
    return;
    // 0x80212680: sb          $zero, 0x64($t7)
    MEM_B(0X64, ctx->r15) = 0;
;}
RECOMP_FUNC void func_80213264_67CC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021326C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80213270: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x80213274: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80213278: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021327C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80213280: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80213284: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80213288: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8021328C: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x80213290: jal         0x8001B5AC
    // 0x80213294: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80213294: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80213298: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021329C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802132A0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802132A4: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x802132A8: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x802132AC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802132B0: nop

    // 0x802132B4: bc1fl       L_802132CC
    if (!c1cs) {
        // 0x802132B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802132CC;
    }
    goto skip_0;
    // 0x802132B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802132BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802132C0: nop

    // 0x802132C4: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x802132C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802132CC:
    // 0x802132CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802132D0: jr          $ra
    // 0x802132D4: nop

    TRACE_RETURN()
    return;
    // 0x802132D4: nop

;}
RECOMP_FUNC void func_802241F4_68DBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802241F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802241F8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x802241FC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80224200: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80224204: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80224208: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022420C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80224210: addiu       $a1, $a1, 0x3D10
    ctx->r5 = ADD32(ctx->r5, 0X3D10);
    // 0x80224214: jal         0x80034E08
    // 0x80224218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80224218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8022421C: bne         $v0, $zero, L_8022422C
    if (ctx->r2 != 0) {
        // 0x80224220: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8022422C;
    }
    // 0x80224220: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80224224: b           L_802242C8
    // 0x80224228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802242C8;
    // 0x80224228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022422C:
    // 0x8022422C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80224230: jal         0x80011968
    // 0x80224234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80011968_12568(rdram, ctx);
        goto after_1;
    // 0x80224234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80224238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022423C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80224240: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x80224244: jal         0x80011908
    // 0x80224248: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_80011908_12508(rdram, ctx);
        goto after_2;
    // 0x80224248: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_2:
    // 0x8022424C: jal         0x80011760
    // 0x80224250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011760_12360(rdram, ctx);
        goto after_3;
    // 0x80224250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80224254: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x80224258: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8022425C: lw          $a3, 0x1C($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1C);
    // 0x80224260: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80224264: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80224268: lwc1        $f6, 0x24($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8022426C: lwc1        $f0, -0x4F38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4F38);
    // 0x80224270: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80224274: addiu       $a1, $a1, 0x22A0
    ctx->r5 = ADD32(ctx->r5, 0X22A0);
    // 0x80224278: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8022427C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80224280: addiu       $t6, $zero, 0x4E2
    ctx->r14 = ADD32(0, 0X4E2);
    // 0x80224284: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80224288: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8022428C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80224290: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80224294: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80224298: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022429C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802242A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802242A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802242A8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802242AC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802242B0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802242B4: jal         0x8000DBF0
    // 0x802242B8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x802242B8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x802242BC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802242C0: sw          $v0, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r2;
    // 0x802242C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_802242C8:
    // 0x802242C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802242CC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802242D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802242D4: jr          $ra
    // 0x802242D8: nop

    TRACE_RETURN()
    return;
    // 0x802242D8: nop

;}
RECOMP_FUNC void func_8021439C_67DD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021439C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802143A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802143A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802143A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802143AC: lwc1        $f10, 0x7C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802143B0: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x802143B4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802143B8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802143BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802143C0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802143C4: jal         0x800040A8
    // 0x802143C8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802143C8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x802143CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802143D0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802143D4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802143D8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802143DC: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802143E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802143E4: lhu         $t0, 0x2C($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2C);
    // 0x802143E8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802143EC: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x802143F0: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x802143F4: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x802143F8: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x802143FC: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80214400: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80214404: nop

    // 0x80214408: sh          $t7, 0x2E($v1)
    MEM_H(0X2E, ctx->r3) = ctx->r15;
    // 0x8021440C: lh          $t2, 0x2E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2E);
    // 0x80214410: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x80214414: mflo        $t3
    ctx->r11 = lo;
    // 0x80214418: sh          $t3, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r11;
    // 0x8021441C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214420: bne         $t2, $zero, L_8021442C
    if (ctx->r10 != 0) {
        // 0x80214424: nop
    
            goto L_8021442C;
    }
    // 0x80214424: nop

    // 0x80214428: break       7
    do_break(2149663784);
L_8021442C:
    // 0x8021442C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80214430: bne         $t2, $at, L_80214444
    if (ctx->r10 != ctx->r1) {
        // 0x80214434: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80214444;
    }
    // 0x80214434: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214438: bne         $t1, $at, L_80214444
    if (ctx->r9 != ctx->r1) {
        // 0x8021443C: nop
    
            goto L_80214444;
    }
    // 0x8021443C: nop

    // 0x80214440: break       6
    do_break(2149663808);
L_80214444:
    // 0x80214444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80214448: jr          $ra
    // 0x8021444C: nop

    TRACE_RETURN()
    return;
    // 0x8021444C: nop

;}
RECOMP_FUNC void func_8021B490_684E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021B494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B498: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021B49C: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x8021B4A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021B4A4: ldc1        $f16, -0x5340($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5340);
    // 0x8021B4A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8021B4AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B4B0: c.lt.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d < ctx->f6.d;
    // 0x8021B4B4: nop

    // 0x8021B4B8: bc1fl       L_8021B534
    if (!c1cs) {
        // 0x8021B4BC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8021B534;
    }
    goto skip_0;
    // 0x8021B4BC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x8021B4C0: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021B4C4: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B4C8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021B4CC: nop

    // 0x8021B4D0: bc1fl       L_8021B4E8
    if (!c1cs) {
        // 0x8021B4D4: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8021B4E8;
    }
    goto skip_1;
    // 0x8021B4D4: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_1:
    // 0x8021B4D8: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021B4DC: b           L_8021B4E8
    // 0x8021B4E0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021B4E8;
    // 0x8021B4E0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021B4E4: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8021B4E8:
    // 0x8021B4E8: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8021B4EC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8021B4F0: nop

    // 0x8021B4F4: bc1fl       L_8021B510
    if (!c1cs) {
        // 0x8021B4F8: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_8021B510;
    }
    goto skip_2;
    // 0x8021B4F8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_2:
    // 0x8021B4FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021B500: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x8021B504: b           L_8021B530
    // 0x8021B508: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
        goto L_8021B530;
    // 0x8021B508: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x8021B50C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_8021B510:
    // 0x8021B510: nop

    // 0x8021B514: bc1fl       L_8021B52C
    if (!c1cs) {
        // 0x8021B518: add.s       $f18, $f0, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_8021B52C;
    }
    goto skip_3;
    // 0x8021B518: add.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
    skip_3:
    // 0x8021B51C: sub.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8021B520: b           L_8021B530
    // 0x8021B524: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
        goto L_8021B530;
    // 0x8021B524: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x8021B528: add.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f14.fl;
L_8021B52C:
    // 0x8021B52C: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
L_8021B530:
    // 0x8021B530: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_8021B534:
    // 0x8021B534: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021B538: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8021B53C: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8021B540: nop

    // 0x8021B544: bc1fl       L_8021B5BC
    if (!c1cs) {
        // 0x8021B548: lwc1        $f18, 0x4($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
            goto L_8021B5BC;
    }
    goto skip_4;
    // 0x8021B548: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    skip_4:
    // 0x8021B54C: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8021B550: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021B554: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021B558: nop

    // 0x8021B55C: bc1fl       L_8021B574
    if (!c1cs) {
        // 0x8021B560: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8021B574;
    }
    goto skip_5;
    // 0x8021B560: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_5:
    // 0x8021B564: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021B568: b           L_8021B574
    // 0x8021B56C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021B574;
    // 0x8021B56C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021B570: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8021B574:
    // 0x8021B574: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8021B578: nop

    // 0x8021B57C: bc1fl       L_8021B598
    if (!c1cs) {
        // 0x8021B580: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_8021B598;
    }
    goto skip_6;
    // 0x8021B580: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_6:
    // 0x8021B584: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021B588: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x8021B58C: b           L_8021B5B8
    // 0x8021B590: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
        goto L_8021B5B8;
    // 0x8021B590: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x8021B594: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_8021B598:
    // 0x8021B598: nop

    // 0x8021B59C: bc1fl       L_8021B5B4
    if (!c1cs) {
        // 0x8021B5A0: add.s       $f10, $f0, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
            goto L_8021B5B4;
    }
    goto skip_7;
    // 0x8021B5A0: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
    skip_7:
    // 0x8021B5A4: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x8021B5A8: b           L_8021B5B8
    // 0x8021B5AC: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
        goto L_8021B5B8;
    // 0x8021B5AC: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x8021B5B0: add.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f14.fl;
L_8021B5B4:
    // 0x8021B5B4: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
L_8021B5B8:
    // 0x8021B5B8: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
L_8021B5BC:
    // 0x8021B5BC: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x8021B5C0: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8021B5C4: addiu       $a2, $a2, -0x4CDC
    ctx->r6 = ADD32(ctx->r6, -0X4CDC);
    // 0x8021B5C8: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x8021B5CC: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x8021B5D0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B5D4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021B5D8: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x8021B5DC: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x8021B5E0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021B5E4: swc1        $f6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f6.u32l;
    // 0x8021B5E8: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x8021B5EC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B5F0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021B5F4: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x8021B5F8: lw          $t2, 0x38($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X38);
    // 0x8021B5FC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B600: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8021B604: addiu       $t9, $t9, -0x6098
    ctx->r25 = ADD32(ctx->r25, -0X6098);
    // 0x8021B608: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    // 0x8021B60C: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x8021B610: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8021B614: swc1        $f18, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f18.u32l;
    // 0x8021B618: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x8021B61C: lw          $t6, 0x38($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X38);
    // 0x8021B620: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x8021B624: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8021B628: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x8021B62C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021B630: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021B634: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021B638: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8021B63C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8021B640: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8021B644: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8021B648: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8021B64C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021B650: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021B654: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x8021B658: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x8021B65C: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x8021B660: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8021B664: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021B668: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021B66C: nop

    // 0x8021B670: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021B674: beql        $t5, $zero, L_8021B6C4
    if (ctx->r13 == 0) {
        // 0x8021B678: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_8021B6C4;
    }
    goto skip_8;
    // 0x8021B678: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_8:
    // 0x8021B67C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B680: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021B684: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021B688: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021B68C: nop

    // 0x8021B690: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021B694: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021B698: nop

    // 0x8021B69C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021B6A0: bne         $t5, $zero, L_8021B6B8
    if (ctx->r13 != 0) {
        // 0x8021B6A4: nop
    
            goto L_8021B6B8;
    }
    // 0x8021B6A4: nop

    // 0x8021B6A8: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8021B6AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021B6B0: b           L_8021B6D0
    // 0x8021B6B4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8021B6D0;
    // 0x8021B6B4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8021B6B8:
    // 0x8021B6B8: b           L_8021B6D0
    // 0x8021B6BC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8021B6D0;
    // 0x8021B6BC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8021B6C0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_8021B6C4:
    // 0x8021B6C4: nop

    // 0x8021B6C8: bltz        $t5, L_8021B6B8
    if (SIGNED(ctx->r13) < 0) {
        // 0x8021B6CC: nop
    
            goto L_8021B6B8;
    }
    // 0x8021B6CC: nop

L_8021B6D0:
    // 0x8021B6D0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021B6D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021B6D8: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8021B6DC: sll         $t7, $t5, 24
    ctx->r15 = S32(ctx->r13 << 24);
    // 0x8021B6E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021B6E4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021B6E8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021B6EC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021B6F0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021B6F4: nop

    // 0x8021B6F8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021B6FC: beql        $t9, $zero, L_8021B74C
    if (ctx->r25 == 0) {
        // 0x8021B700: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_8021B74C;
    }
    goto skip_9;
    // 0x8021B700: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_9:
    // 0x8021B704: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021B708: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021B70C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021B710: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021B714: nop

    // 0x8021B718: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021B71C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021B720: nop

    // 0x8021B724: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021B728: bne         $t9, $zero, L_8021B740
    if (ctx->r25 != 0) {
        // 0x8021B72C: nop
    
            goto L_8021B740;
    }
    // 0x8021B72C: nop

    // 0x8021B730: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8021B734: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021B738: b           L_8021B758
    // 0x8021B73C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021B758;
    // 0x8021B73C: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8021B740:
    // 0x8021B740: b           L_8021B758
    // 0x8021B744: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021B758;
    // 0x8021B744: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021B748: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_8021B74C:
    // 0x8021B74C: nop

    // 0x8021B750: bltz        $t9, L_8021B740
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021B754: nop
    
            goto L_8021B740;
    }
    // 0x8021B754: nop

L_8021B758:
    // 0x8021B758: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021B75C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021B760: lwc1        $f18, 0x30($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021B764: andi        $t2, $t9, 0xFF
    ctx->r10 = ctx->r25 & 0XFF;
    // 0x8021B768: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021B76C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021B770: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8021B774: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x8021B778: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8021B77C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021B780: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021B784: nop

    // 0x8021B788: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8021B78C: beql        $t6, $zero, L_8021B7DC
    if (ctx->r14 == 0) {
        // 0x8021B790: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_8021B7DC;
    }
    goto skip_10;
    // 0x8021B790: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_10:
    // 0x8021B794: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021B798: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021B79C: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021B7A0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021B7A4: nop

    // 0x8021B7A8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021B7AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021B7B0: nop

    // 0x8021B7B4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8021B7B8: bne         $t6, $zero, L_8021B7D0
    if (ctx->r14 != 0) {
        // 0x8021B7BC: nop
    
            goto L_8021B7D0;
    }
    // 0x8021B7BC: nop

    // 0x8021B7C0: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x8021B7C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021B7C8: b           L_8021B7E8
    // 0x8021B7CC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8021B7E8;
    // 0x8021B7CC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8021B7D0:
    // 0x8021B7D0: b           L_8021B7E8
    // 0x8021B7D4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8021B7E8;
    // 0x8021B7D4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8021B7D8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_8021B7DC:
    // 0x8021B7DC: nop

    // 0x8021B7E0: bltz        $t6, L_8021B7D0
    if (SIGNED(ctx->r14) < 0) {
        // 0x8021B7E4: nop
    
            goto L_8021B7D0;
    }
    // 0x8021B7E4: nop

L_8021B7E8:
    // 0x8021B7E8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021B7EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021B7F0: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021B7F4: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x8021B7F8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8021B7FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8021B800: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8021B804: or          $t2, $t4, $t9
    ctx->r10 = ctx->r12 | ctx->r25;
    // 0x8021B808: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021B80C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021B810: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8021B814: nop

    // 0x8021B818: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8021B81C: beql        $t3, $zero, L_8021B86C
    if (ctx->r11 == 0) {
        // 0x8021B820: mfc1        $t3, $f8
        ctx->r11 = (int32_t)ctx->f8.u32l;
            goto L_8021B86C;
    }
    goto skip_11;
    // 0x8021B820: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    skip_11:
    // 0x8021B824: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021B828: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021B82C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021B830: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8021B834: nop

    // 0x8021B838: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021B83C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8021B840: nop

    // 0x8021B844: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8021B848: bne         $t3, $zero, L_8021B860
    if (ctx->r11 != 0) {
        // 0x8021B84C: nop
    
            goto L_8021B860;
    }
    // 0x8021B84C: nop

    // 0x8021B850: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x8021B854: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021B858: b           L_8021B878
    // 0x8021B85C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8021B878;
    // 0x8021B85C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8021B860:
    // 0x8021B860: b           L_8021B878
    // 0x8021B864: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8021B878;
    // 0x8021B864: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8021B868: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
L_8021B86C:
    // 0x8021B86C: nop

    // 0x8021B870: bltz        $t3, L_8021B860
    if (SIGNED(ctx->r11) < 0) {
        // 0x8021B874: nop
    
            goto L_8021B860;
    }
    // 0x8021B874: nop

L_8021B878:
    // 0x8021B878: andi        $t5, $t3, 0xFF
    ctx->r13 = ctx->r11 & 0XFF;
    // 0x8021B87C: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x8021B880: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x8021B884: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021B888: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x8021B88C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8021B890: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8021B894: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8021B898: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8021B89C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8021B8A0: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x8021B8A4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8021B8A8: lui         $t1, 0x8FFF
    ctx->r9 = S32(0X8FFF << 16);
    // 0x8021B8AC: lw          $t0, 0x30($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X30);
    // 0x8021B8B0: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x8021B8B4: subu        $t3, $t1, $t0
    ctx->r11 = SUB32(ctx->r9, ctx->r8);
    // 0x8021B8B8: and         $t2, $t7, $t3
    ctx->r10 = ctx->r15 & ctx->r11;
    // 0x8021B8BC: and         $a1, $t2, $t1
    ctx->r5 = ctx->r10 & ctx->r9;
    // 0x8021B8C0: jal         0x80040620
    // 0x8021B8C4: and         $a0, $t0, $t1
    ctx->r4 = ctx->r8 & ctx->r9;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021B8C4: and         $a0, $t0, $t1
    ctx->r4 = ctx->r8 & ctx->r9;
    after_0:
    // 0x8021B8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021B8D0: jr          $ra
    // 0x8021B8D4: nop

    TRACE_RETURN()
    return;
    // 0x8021B8D4: nop

;}
RECOMP_FUNC void func_8022472C_68E10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022472C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224730: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80224734: sh          $a3, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r7;
    // 0x80224738: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8022473C: jr          $ra
    // 0x80224740: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    TRACE_RETURN()
    return;
    // 0x80224740: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_802112E8_698CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112E8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802112EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802112F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802112F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802112F8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802112FC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80211300: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80211304: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80211308: nop

    // 0x8021130C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80211310: beql        $t7, $zero, L_80211360
    if (ctx->r15 == 0) {
        // 0x80211314: mfc1        $t7, $f4
        ctx->r15 = (int32_t)ctx->f4.u32l;
            goto L_80211360;
    }
    goto skip_0;
    // 0x80211314: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x80211318: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021131C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80211320: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80211324: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80211328: nop

    // 0x8021132C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80211330: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80211334: nop

    // 0x80211338: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8021133C: bne         $t7, $zero, L_80211354
    if (ctx->r15 != 0) {
        // 0x80211340: nop
    
            goto L_80211354;
    }
    // 0x80211340: nop

    // 0x80211344: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80211348: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021134C: b           L_8021136C
    // 0x80211350: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8021136C;
    // 0x80211350: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80211354:
    // 0x80211354: b           L_8021136C
    // 0x80211358: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8021136C;
    // 0x80211358: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8021135C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
L_80211360:
    // 0x80211360: nop

    // 0x80211364: bltz        $t7, L_80211354
    if (SIGNED(ctx->r15) < 0) {
        // 0x80211368: nop
    
            goto L_80211354;
    }
    // 0x80211368: nop

L_8021136C:
    // 0x8021136C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80211370: jr          $ra
    // 0x80211374: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80211374: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_8021084C_69824C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021084C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80210850: beq         $a1, $zero, L_8021086C
    if (ctx->r5 == 0) {
        // 0x80210854: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_8021086C;
    }
    // 0x80210854: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80210858: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021085C: beq         $a1, $at, L_80210894
    if (ctx->r5 == ctx->r1) {
        // 0x80210860: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80210894;
    }
    // 0x80210860: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80210864: b           L_802108B8
    // 0x80210868: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
        goto L_802108B8;
    // 0x80210868: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_8021086C:
    // 0x8021086C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80210870: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80210874: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80210878: addiu       $t6, $t6, 0x123C
    ctx->r14 = ADD32(ctx->r14, 0X123C);
    // 0x8021087C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80210880: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80210884: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80210888: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8021088C: b           L_802108B4
    // 0x80210890: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
        goto L_802108B4;
    // 0x80210890: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
L_80210894:
    // 0x80210894: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80210898: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8021089C: addiu       $t8, $t8, 0x1288
    ctx->r24 = ADD32(ctx->r24, 0X1288);
    // 0x802108A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x802108A4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802108A8: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802108AC: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x802108B0: sw          $t9, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r25;
L_802108B4:
    // 0x802108B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_802108B8:
    // 0x802108B8: swc1        $f12, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f12.u32l;
    // 0x802108BC: jr          $ra
    // 0x802108C0: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x802108C0: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80212F2C_69A92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212F2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80212F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212F34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80212F38: addiu       $a1, $a1, 0x2EBC
    ctx->r5 = ADD32(ctx->r5, 0X2EBC);
    // 0x80212F3C: jal         0x80034E08
    // 0x80212F40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80212F40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80212F44: bne         $v0, $zero, L_80212F54
    if (ctx->r2 != 0) {
        // 0x80212F48: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80212F54;
    }
    // 0x80212F48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80212F4C: b           L_80212FF8
    // 0x80212F50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80212FF8;
    // 0x80212F50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80212F54:
    // 0x80212F54: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80212F58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80212F5C: jal         0x80035EEC
    // 0x80212F60: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x80212F60: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80212F64: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80212F68: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212F6C: bne         $v0, $zero, L_80212F7C
    if (ctx->r2 != 0) {
        // 0x80212F70: sw          $v0, 0x2C($v1)
        MEM_W(0X2C, ctx->r3) = ctx->r2;
            goto L_80212F7C;
    }
    // 0x80212F70: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x80212F74: b           L_80212FF8
    // 0x80212F78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80212FF8;
    // 0x80212F78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80212F7C:
    // 0x80212F7C: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x80212F80: ori         $t6, $zero, 0x8009
    ctx->r14 = 0 | 0X8009;
    // 0x80212F84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80212F88: sh          $t6, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r14;
    // 0x80212F8C: lw          $t8, 0x2C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2C);
    // 0x80212F90: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x80212F94: addiu       $t0, $zero, 0x7B
    ctx->r8 = ADD32(0, 0X7B);
    // 0x80212F98: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
    // 0x80212F9C: lw          $t9, 0x2C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2C);
    // 0x80212FA0: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80212FA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80212FA8: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x80212FAC: lw          $t1, 0x2C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X2C);
    // 0x80212FB0: addiu       $t4, $zero, 0x280
    ctx->r12 = ADD32(0, 0X280);
    // 0x80212FB4: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x80212FB8: sh          $t0, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r8;
    // 0x80212FBC: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
    // 0x80212FC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80212FC4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80212FC8: sb          $t2, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r10;
    // 0x80212FCC: lw          $t5, 0x2C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X2C);
    // 0x80212FD0: sh          $t4, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r12;
    // 0x80212FD4: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x80212FD8: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x80212FDC: lw          $t8, 0x2C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2C);
    // 0x80212FE0: lwc1        $f4, 0x5184($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5184);
    // 0x80212FE4: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x80212FE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80212FEC: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x80212FF0: lw          $t9, 0x2C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2C);
    // 0x80212FF4: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
L_80212FF8:
    // 0x80212FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213000: jr          $ra
    // 0x80213004: nop

    TRACE_RETURN()
    return;
    // 0x80213004: nop

;}
RECOMP_FUNC void func_8021056C_697F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021056C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80210574: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80210578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021057C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80210580: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80210584: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80210588: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x8021058C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80210590: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80210594: lwc1        $f18, 0x70($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80210598: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
    // 0x8021059C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802105A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x802105A4: swc1        $f8, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f8.u32l;
    // 0x802105A8: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x802105AC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802105B0: lwc1        $f8, 0x74($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X74);
    // 0x802105B4: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802105B8: div.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802105BC: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
    // 0x802105C0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802105C4: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x802105C8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802105CC: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802105D0: swc1        $f16, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f16.u32l;
    // 0x802105D4: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802105D8: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802105DC: div.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802105E0: swc1        $f6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f6.u32l;
    // 0x802105E4: jal         0x800040A8
    // 0x802105E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802105E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802105EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802105F0: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x802105F4: sh          $t8, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r24;
    // 0x802105F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802105FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210600: jr          $ra
    // 0x80210604: nop

    TRACE_RETURN()
    return;
    // 0x80210604: nop

    // 0x80210608: jr          $ra
    // 0x8021060C: nop

    TRACE_RETURN()
    return;
    // 0x8021060C: nop

    // 0x80210610: jr          $ra
    // 0x80210614: nop

    TRACE_RETURN()
    return;
    // 0x80210614: nop

;}
RECOMP_FUNC void func_80211224_698C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211224: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80211228: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021122C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80211230: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x80211234: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80211238: addiu       $t7, $t7, 0x46D8
    ctx->r15 = ADD32(ctx->r15, 0X46D8);
    // 0x8021123C: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80211240: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80211244: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80211248: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8021124C: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x80211250: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80211254: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80211258: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x8021125C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80211260: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x80211264: sll         $t2, $a1, 24
    ctx->r10 = S32(ctx->r5 << 24);
    // 0x80211268: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021126C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80211270: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80211274: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x80211278: or          $t2, $t8, $t3
    ctx->r10 = ctx->r24 | ctx->r11;
    // 0x8021127C: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x80211280: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80211284: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x80211288: ori         $t4, $t4, 0x602
    ctx->r12 = ctx->r12 | 0X602;
    // 0x8021128C: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x80211290: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x80211294: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80211298: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8021129C: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x802112A0: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x802112A4: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x802112A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802112AC: addiu       $s0, $t1, 0x8
    ctx->r16 = ADD32(ctx->r9, 0X8);
    // 0x802112B0: jal         0x80040620
    // 0x802112B4: subu        $a1, $a0, $s0
    ctx->r5 = SUB32(ctx->r4, ctx->r16);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x802112B4: subu        $a1, $a0, $s0
    ctx->r5 = SUB32(ctx->r4, ctx->r16);
    after_0:
    // 0x802112B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802112BC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x802112C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802112C4: jr          $ra
    // 0x802112C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802112C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80210C34_698634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210C3C: jal         0x80034EF8
    // 0x80210C40: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x80210C40: nop

    after_0:
    // 0x80210C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210C4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80210C50: jr          $ra
    // 0x80210C54: nop

    TRACE_RETURN()
    return;
    // 0x80210C54: nop

;}
RECOMP_FUNC void func_80211378_698D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211378: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021137C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80211380: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80211384: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80211388: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021138C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80211390: addiu       $a1, $a1, 0x12D4
    ctx->r5 = ADD32(ctx->r5, 0X12D4);
    // 0x80211394: jal         0x80034E08
    // 0x80211398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80211398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021139C: bne         $v0, $zero, L_802113AC
    if (ctx->r2 != 0) {
        // 0x802113A0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802113AC;
    }
    // 0x802113A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802113A4: b           L_80211410
    // 0x802113A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80211410;
    // 0x802113A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802113AC:
    // 0x802113AC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802113B0: lwc1        $f0, 0x5130($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5130);
    // 0x802113B4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802113B8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802113BC: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x802113C0: addiu       $a1, $a1, 0x46D0
    ctx->r5 = ADD32(ctx->r5, 0X46D0);
    // 0x802113C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802113C8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802113CC: addiu       $t6, $zero, 0x4E1
    ctx->r14 = ADD32(0, 0X4E1);
    // 0x802113D0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802113D4: addiu       $a2, $a2, 0x4920
    ctx->r6 = ADD32(ctx->r6, 0X4920);
    // 0x802113D8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802113DC: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x802113E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802113E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802113E8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802113EC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802113F0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802113F4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802113F8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802113FC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80211400: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80211404: jal         0x8000DBF0
    // 0x80211408: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80211408: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021140C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80211410:
    // 0x80211410: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80211414: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80211418: jr          $ra
    // 0x8021141C: nop

    TRACE_RETURN()
    return;
    // 0x8021141C: nop

;}
RECOMP_FUNC void func_80214398_69BD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214398: jr          $ra
    // 0x8021439C: sw          $a1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021439C: sw          $a1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_802143D8_69BDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802143D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802143DC: jr          $ra
    // 0x802143E0: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x802143E0: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80214530_69BF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214530: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214534: lhu         $t6, 0x18($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X18);
    // 0x80214538: addiu       $t8, $t6, -0x2
    ctx->r24 = ADD32(ctx->r14, -0X2);
    // 0x8021453C: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x80214540: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x80214544: jr          $ra
    // 0x80214548: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80214548: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_8020FC50_697650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FC50: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x8020FC54: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020FC58: beql        $t6, $zero, L_8020FCC0
    if (ctx->r14 == 0) {
        // 0x8020FC5C: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8020FCC0;
    }
    goto skip_0;
    // 0x8020FC5C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x8020FC60: lw          $t7, 0x20($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X20);
    // 0x8020FC64: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8020FC68: beq         $t8, $zero, L_8020FCA4
    if (ctx->r24 == 0) {
        // 0x8020FC6C: sw          $t8, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->r24;
            goto L_8020FCA4;
    }
    // 0x8020FC6C: sw          $t8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r24;
    // 0x8020FC70: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8020FC74: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8020FC78: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8020FC7C: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8020FC80: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020FC84: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8020FC88: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8020FC8C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020FC90: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x8020FC94: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020FC98: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x8020FC9C: b           L_8020FCBC
    // 0x8020FCA0: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
        goto L_8020FCBC;
    // 0x8020FCA0: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
L_8020FCA4:
    // 0x8020FCA4: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8020FCA8: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8020FCAC: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8020FCB0: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x8020FCB4: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x8020FCB8: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
L_8020FCBC:
    // 0x8020FCBC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_8020FCC0:
    // 0x8020FCC0: lh          $v1, 0x3E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X3E);
    // 0x8020FCC4: beql        $v1, $zero, L_8020FCEC
    if (ctx->r3 == 0) {
        // 0x8020FCC8: lwc1        $f4, 0x70($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
            goto L_8020FCEC;
    }
    goto skip_1;
    // 0x8020FCC8: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    skip_1:
    // 0x8020FCCC: lhu         $t0, 0x3C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X3C);
    // 0x8020FCD0: lh          $t1, 0x40($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X40);
    // 0x8020FCD4: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    // 0x8020FCD8: sh          $t4, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r12;
    // 0x8020FCDC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8020FCE0: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x8020FCE4: sh          $t3, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r11;
    // 0x8020FCE8: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
L_8020FCEC:
    // 0x8020FCEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FCF0: ldc1        $f8, 0x5078($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X5078);
    // 0x8020FCF4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8020FCF8: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8020FCFC: nop

    // 0x8020FD00: bc1fl       L_8020FD50
    if (!c1cs) {
        // 0x8020FD04: lwc1        $f0, 0x44($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
            goto L_8020FD50;
    }
    goto skip_2;
    // 0x8020FD04: lwc1        $f0, 0x44($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
    skip_2:
    // 0x8020FD08: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8020FD0C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020FD10: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020FD14: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x8020FD18: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8020FD1C: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020FD20: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8020FD24: nop

    // 0x8020FD28: bc1fl       L_8020FD50
    if (!c1cs) {
        // 0x8020FD2C: lwc1        $f0, 0x44($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
            goto L_8020FD50;
    }
    goto skip_3;
    // 0x8020FD2C: lwc1        $f0, 0x44($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
    skip_3:
    // 0x8020FD30: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x8020FD34: beql        $t5, $zero, L_8020FD4C
    if (ctx->r13 == 0) {
        // 0x8020FD38: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_8020FD4C;
    }
    goto skip_4;
    // 0x8020FD38: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_4:
    // 0x8020FD3C: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8020FD40: b           L_8020FD4C
    // 0x8020FD44: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
        goto L_8020FD4C;
    // 0x8020FD44: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x8020FD48: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_8020FD4C:
    // 0x8020FD4C: lwc1        $f0, 0x44($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
L_8020FD50:
    // 0x8020FD50: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8020FD54: lwc1        $f10, 0x48($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8020FD58: lhu         $t6, 0x3C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X3C);
    // 0x8020FD5C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020FD60: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8020FD64: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x8020FD68: swc1        $f16, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f16.u32l;
    // 0x8020FD6C: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x8020FD70: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8020FD74: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x8020FD78: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8020FD7C: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x8020FD80: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8020FD84: jr          $ra
    // 0x8020FD88: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x8020FD88: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802112E0_698CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802112E0: jr          $ra
    // 0x802112E4: nop

    TRACE_RETURN()
    return;
    // 0x802112E4: nop

;}
RECOMP_FUNC void func_80211694_699094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211694: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80211698: jr          $ra
    // 0x8021169C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x8021169C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80214408_69BE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214408: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021440C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80214410: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214414: addiu       $a1, $a1, 0x43E4
    ctx->r5 = ADD32(ctx->r5, 0X43E4);
    // 0x80214418: jal         0x80034E08
    // 0x8021441C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021441C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80214420: bne         $v0, $zero, L_80214430
    if (ctx->r2 != 0) {
        // 0x80214424: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80214430;
    }
    // 0x80214424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80214428: b           L_802144E4
    // 0x8021442C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802144E4;
    // 0x8021442C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214430:
    // 0x80214430: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80214434: lwc1        $f2, 0x51BC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X51BC);
    // 0x80214438: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021443C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80214440: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x80214444: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80214448: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8021444C: addiu       $t6, $zero, 0x50A
    ctx->r14 = ADD32(0, 0X50A);
    // 0x80214450: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80214454: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80214458: addiu       $a2, $a2, 0x46D8
    ctx->r6 = ADD32(ctx->r6, 0X46D8);
    // 0x8021445C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80214460: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80214464: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80214468: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021446C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80214470: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80214474: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80214478: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8021447C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80214480: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80214484: jal         0x8000DBF0
    // 0x80214488: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80214488: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8021448C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80214490: lwc1        $f0, 0x51C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x80214494: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80214498: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x8021449C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802144A0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802144A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802144A8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802144AC: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x802144B0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x802144B4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x802144B8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x802144BC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x802144C0: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802144C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802144C8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x802144CC: sh          $a1, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r5;
    // 0x802144D0: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x802144D4: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x802144D8: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x802144DC: sh          $a1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r5;
    // 0x802144E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802144E4:
    // 0x802144E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802144E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802144EC: jr          $ra
    // 0x802144F0: nop

    TRACE_RETURN()
    return;
    // 0x802144F0: nop

    // 0x802144F4: jr          $ra
    // 0x802144F8: nop

    TRACE_RETURN()
    return;
    // 0x802144F8: nop

;}
RECOMP_FUNC void func_80210A74_698474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210A74: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210A78: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80210A7C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80210A80: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    // 0x80210A84: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x80210A88: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80210A8C: jr          $ra
    // 0x80210A90: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80210A90: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80210CA0_6986A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210CA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80210CA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80210CA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80210CAC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80210CB0: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x80210CB4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80210CB8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80210CBC: beq         $t7, $zero, L_80210D5C
    if (ctx->r15 == 0) {
        // 0x80210CC0: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_80210D5C;
    }
    // 0x80210CC0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80210CC4: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x80210CC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210CCC: addiu       $a0, $v0, 0x38
    ctx->r4 = ADD32(ctx->r2, 0X38);
    // 0x80210CD0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80210CD4: bne         $t9, $zero, L_80210CF4
    if (ctx->r25 != 0) {
        // 0x80210CD8: sw          $t9, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->r25;
            goto L_80210CF4;
    }
    // 0x80210CD8: sw          $t9, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r25;
    // 0x80210CDC: lw          $t1, 0x1C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C);
    // 0x80210CE0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80210CE4: nop

    // 0x80210CE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210CEC: b           L_80210D04
    // 0x80210CF0: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
        goto L_80210D04;
    // 0x80210CF0: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
L_80210CF4:
    // 0x80210CF4: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80210CF8: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80210CFC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80210D00: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_80210D04:
    // 0x80210D04: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80210D08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80210D0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80210D10: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x80210D14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80210D18: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80210D1C: bc1fl       L_80210D40
    if (!c1cs) {
        // 0x80210D20: trunc.w.s   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_80210D40;
    }
    goto skip_0;
    // 0x80210D20: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_0:
    // 0x80210D24: jal         0x80211224
    // 0x80210D28: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80211224_698C24(rdram, ctx);
        goto after_0;
    // 0x80210D28: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x80210D2C: jal         0x802110E8
    // 0x80210D30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_802110E8_698AE8(rdram, ctx);
        goto after_1;
    // 0x80210D30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80210D34: b           L_80210D60
    // 0x80210D38: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_80210D60;
    // 0x80210D38: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80210D3C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
L_80210D40:
    // 0x80210D40: addiu       $a0, $v0, 0x38
    ctx->r4 = ADD32(ctx->r2, 0X38);
    // 0x80210D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80210D48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80210D4C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80210D50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80210D54: jal         0x802110FC
    // 0x80210D58: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_802110FC_698AFC(rdram, ctx);
        goto after_2;
    // 0x80210D58: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_2:
L_80210D5C:
    // 0x80210D5C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
L_80210D60:
    // 0x80210D60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80210D64: ldc1        $f6, 0x5120($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X5120);
    // 0x80210D68: lwc1        $f14, 0x88($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X88);
    // 0x80210D6C: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x80210D70: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x80210D74: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80210D78: nop

    // 0x80210D7C: bc1fl       L_80210DF4
    if (!c1cs) {
        // 0x80210D80: lwc1        $f4, 0x4($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80210DF4;
    }
    goto skip_1;
    // 0x80210D80: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x80210D84: lwc1        $f12, 0x30($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80210D88: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80210D8C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80210D90: nop

    // 0x80210D94: bc1fl       L_80210DAC
    if (!c1cs) {
        // 0x80210D98: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80210DAC;
    }
    goto skip_2;
    // 0x80210D98: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_2:
    // 0x80210D9C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80210DA0: b           L_80210DAC
    // 0x80210DA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80210DAC;
    // 0x80210DA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80210DA8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80210DAC:
    // 0x80210DAC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80210DB0: nop

    // 0x80210DB4: bc1fl       L_80210DD0
    if (!c1cs) {
        // 0x80210DB8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80210DD0;
    }
    goto skip_3;
    // 0x80210DB8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_3:
    // 0x80210DBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80210DC0: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x80210DC4: b           L_80210DF0
    // 0x80210DC8: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
        goto L_80210DF0;
    // 0x80210DC8: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
    // 0x80210DCC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80210DD0:
    // 0x80210DD0: nop

    // 0x80210DD4: bc1fl       L_80210DEC
    if (!c1cs) {
        // 0x80210DD8: add.s       $f18, $f2, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80210DEC;
    }
    goto skip_4;
    // 0x80210DD8: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
    skip_4:
    // 0x80210DDC: sub.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80210DE0: b           L_80210DF0
    // 0x80210DE4: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
        goto L_80210DF0;
    // 0x80210DE4: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x80210DE8: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
L_80210DEC:
    // 0x80210DEC: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_80210DF0:
    // 0x80210DF0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
L_80210DF4:
    // 0x80210DF4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80210DF8: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80210DFC: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80210E00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80210E04: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80210E08: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80210E0C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80210E10: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80210E14: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80210E18: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80210E1C: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x80210E20: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80210E24: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80210E28: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80210E2C: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80210E30: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x80210E34: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80210E38: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80210E3C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x80210E40: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x80210E44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80210E48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80210E4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80210E50: jr          $ra
    // 0x80210E54: nop

    TRACE_RETURN()
    return;
    // 0x80210E54: nop

;}
RECOMP_FUNC void func_8021454C_69BF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021454C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80214550: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80214554: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80214558: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021455C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214560: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80214564: addiu       $a1, $a1, 0x4530
    ctx->r5 = ADD32(ctx->r5, 0X4530);
    // 0x80214568: jal         0x80034E08
    // 0x8021456C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021456C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80214570: bne         $v0, $zero, L_80214580
    if (ctx->r2 != 0) {
        // 0x80214574: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80214580;
    }
    // 0x80214574: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80214578: b           L_802145E8
    // 0x8021457C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802145E8;
    // 0x8021457C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80214580:
    // 0x80214580: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80214584: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80214588: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021458C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80214590: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x80214594: addiu       $a1, $a1, 0x75A0
    ctx->r5 = ADD32(ctx->r5, 0X75A0);
    // 0x80214598: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021459C: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802145A0: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x802145A4: addiu       $t7, $zero, 0x4E1
    ctx->r15 = ADD32(0, 0X4E1);
    // 0x802145A8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x802145AC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802145B0: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x802145B4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802145B8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x802145BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802145C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802145C4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802145C8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802145CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802145D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802145D4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802145D8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802145DC: jal         0x8000DBF0
    // 0x802145E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802145E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x802145E4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_802145E8:
    // 0x802145E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802145EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802145F0: jr          $ra
    // 0x802145F4: nop

    TRACE_RETURN()
    return;
    // 0x802145F4: nop

;}
RECOMP_FUNC void func_8021306C_69AA6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021306C: lw          $t6, 0x88($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X88);
    // 0x80213070: jr          $ra
    // 0x80213074: sh          $a1, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80213074: sh          $a1, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8021428C_69BC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021428C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80214290: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80214294: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80214298: addiu       $a1, $a1, 0x3F54
    ctx->r5 = ADD32(ctx->r5, 0X3F54);
    // 0x8021429C: jal         0x80034E08
    // 0x802142A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802142A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802142A4: bne         $v0, $zero, L_802142B4
    if (ctx->r2 != 0) {
        // 0x802142A8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802142B4;
    }
    // 0x802142A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802142AC: b           L_80214380
    // 0x802142B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80214380;
    // 0x802142B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802142B4:
    // 0x802142B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802142B8: lwc1        $f2, 0x51B8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X51B8);
    // 0x802142BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802142C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802142C4: addiu       $a1, $a1, 0x4B80
    ctx->r5 = ADD32(ctx->r5, 0X4B80);
    // 0x802142C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802142CC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802142D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802142D4: addiu       $a2, $a2, 0x4B38
    ctx->r6 = ADD32(ctx->r6, 0X4B38);
    // 0x802142D8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802142DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802142E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802142E4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802142E8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x802142EC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802142F0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802142F4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x802142F8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x802142FC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80214300: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80214304: jal         0x8000DBF0
    // 0x80214308: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80214308: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8021430C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80214310: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80214314: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80214318: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x8021431C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80214320: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x80214324: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80214328: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8021432C: sb          $t6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r14;
    // 0x80214330: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80214334: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80214338: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8021433C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x80214340: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80214344: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80214348: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8021434C: sh          $a1, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r5;
    // 0x80214350: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80214354: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x80214358: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x8021435C: sh          $a1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r5;
    // 0x80214360: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80214364: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x80214368: sb          $zero, 0x10($v1)
    MEM_B(0X10, ctx->r3) = 0;
    // 0x8021436C: sb          $zero, 0x11($v1)
    MEM_B(0X11, ctx->r3) = 0;
    // 0x80214370: sb          $t8, 0x12($v1)
    MEM_B(0X12, ctx->r3) = ctx->r24;
    // 0x80214374: sb          $t9, 0x13($v1)
    MEM_B(0X13, ctx->r3) = ctx->r25;
    // 0x80214378: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    // 0x8021437C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80214380:
    // 0x80214380: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80214384: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80214388: jr          $ra
    // 0x8021438C: nop

    TRACE_RETURN()
    return;
    // 0x8021438C: nop

    // 0x80214390: jr          $ra
    // 0x80214394: nop

    TRACE_RETURN()
    return;
    // 0x80214394: nop

;}
RECOMP_FUNC void func_80210648_698048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210648: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021064C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80210650: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80210654: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80210658: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8021065C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80210660: nop

    // 0x80210664: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80210668: nop

    // 0x8021066C: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80210670: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x80210674: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80210678: jr          $ra
    // 0x8021067C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x8021067C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8020FD8C_69778C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FD8C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8020FD90: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8020FD94: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8020FD98: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020FD9C: addiu       $a1, $a1, -0x3B0
    ctx->r5 = ADD32(ctx->r5, -0X3B0);
    // 0x8020FDA0: jal         0x80034E08
    // 0x8020FDA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8020FDA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8020FDA8: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x8020FDAC: bne         $v0, $zero, L_8020FDBC
    if (ctx->r2 != 0) {
        // 0x8020FDB0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020FDBC;
    }
    // 0x8020FDB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020FDB4: b           L_8020FE6C
    // 0x8020FDB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8020FE6C;
    // 0x8020FDB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8020FDBC:
    // 0x8020FDBC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020FDC0: lwc1        $f2, 0x5080($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5080);
    // 0x8020FDC4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8020FDC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020FDCC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8020FDD0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020FDD4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020FDD8: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x8020FDDC: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8020FDE0: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8020FDE4: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x8020FDE8: lw          $a1, 0x4770($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4770);
    // 0x8020FDEC: lhu         $t7, 0x4788($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X4788);
    // 0x8020FDF0: lhu         $t8, 0x4794($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X4794);
    // 0x8020FDF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x8020FDF8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8020FDFC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020FE00: addiu       $a2, $a2, 0x46D8
    ctx->r6 = ADD32(ctx->r6, 0X46D8);
    // 0x8020FE04: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020FE08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020FE0C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020FE10: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x8020FE14: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x8020FE18: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8020FE1C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x8020FE20: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8020FE24: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x8020FE28: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020FE2C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8020FE30: jal         0x8000DBF0
    // 0x8020FE34: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8020FE34: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    after_1:
    // 0x8020FE38: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8020FE3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020FE40: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8020FE44: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8020FE48: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x8020FE4C: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x8020FE50: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x8020FE54: jal         0x80011A38
    // 0x8020FE58: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    func_80011A38_12638(rdram, ctx);
        goto after_2;
    // 0x8020FE58: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_2:
    // 0x8020FE5C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8020FE60: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8020FE64: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
    // 0x8020FE68: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8020FE6C:
    // 0x8020FE6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8020FE70: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8020FE74: jr          $ra
    // 0x8020FE78: nop

    TRACE_RETURN()
    return;
    // 0x8020FE78: nop

;}
RECOMP_FUNC void func_8020D348_694D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020D34C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8020D350: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8020D354: addiu       $s0, $s0, 0x51D0
    ctx->r16 = ADD32(ctx->r16, 0X51D0);
    // 0x8020D358: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8020D35C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020D360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020D364: beq         $v0, $zero, L_8020D390
    if (ctx->r2 == 0) {
        // 0x8020D368: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8020D390;
    }
    // 0x8020D368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8020D36C: beq         $v0, $a1, L_8020D3D8
    if (ctx->r2 == ctx->r5) {
        // 0x8020D370: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8020D3D8;
    }
    // 0x8020D370: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020D374: beq         $v0, $at, L_8020D5BC
    if (ctx->r2 == ctx->r1) {
        // 0x8020D378: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_8020D5BC;
    }
    // 0x8020D378: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D37C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8020D380: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x8020D384: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8020D388: b           L_8020D61C
    // 0x8020D38C: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
        goto L_8020D61C;
    // 0x8020D38C: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
L_8020D390:
    // 0x8020D390: jal         0x80036840
    // 0x8020D394: nop

    func_80036840_37440(rdram, ctx);
        goto after_0;
    // 0x8020D394: nop

    after_0:
    // 0x8020D398: beq         $v0, $zero, L_8020D3B4
    if (ctx->r2 == 0) {
        // 0x8020D39C: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_8020D3B4;
    }
    // 0x8020D39C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D3A0: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8020D3A4: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x8020D3A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8020D3AC: b           L_8020D61C
    // 0x8020D3B0: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
        goto L_8020D61C;
    // 0x8020D3B0: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
L_8020D3B4:
    // 0x8020D3B4: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8020D3B8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D3BC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x8020D3C0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020D3C4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x8020D3C8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8020D3CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8020D3D0: b           L_8020D61C
    // 0x8020D3D4: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
        goto L_8020D61C;
    // 0x8020D3D4: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
L_8020D3D8:
    // 0x8020D3D8: jal         0x802143D0
    // 0x8020D3DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_802143D0_69BDD0(rdram, ctx);
        goto after_1;
    // 0x8020D3DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x8020D3E0: bne         $v0, $zero, L_8020D468
    if (ctx->r2 != 0) {
        // 0x8020D3E4: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_8020D468;
    }
    // 0x8020D3E4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8020D3E8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8020D3EC: addiu       $v1, $v1, 0x4CC0
    ctx->r3 = ADD32(ctx->r3, 0X4CC0);
    // 0x8020D3F0: lh          $t8, 0x307E($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X307E);
    // 0x8020D3F4: slti        $at, $t8, 0x29
    ctx->r1 = SIGNED(ctx->r24) < 0X29 ? 1 : 0;
    // 0x8020D3F8: beq         $at, $zero, L_8020D410
    if (ctx->r1 == 0) {
        // 0x8020D3FC: nop
    
            goto L_8020D410;
    }
    // 0x8020D3FC: nop

    // 0x8020D400: lhu         $v0, 0x307C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X307C);
    // 0x8020D404: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x8020D408: beql        $t9, $zero, L_8020D4D4
    if (ctx->r25 == 0) {
        // 0x8020D40C: andi        $t5, $v0, 0x4000
        ctx->r13 = ctx->r2 & 0X4000;
            goto L_8020D4D4;
    }
    goto skip_0;
    // 0x8020D40C: andi        $t5, $v0, 0x4000
    ctx->r13 = ctx->r2 & 0X4000;
    skip_0:
L_8020D410:
    // 0x8020D410: jal         0x80038B98
    // 0x8020D414: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x8020D414: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    after_2:
    // 0x8020D418: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8020D41C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8020D420: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8020D424: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8020D428: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020D42C: sb          $t0, 0x2DE3($at)
    MEM_B(0X2DE3, ctx->r1) = ctx->r8;
    // 0x8020D430: addiu       $a1, $v0, 0x7FFF
    ctx->r5 = ADD32(ctx->r2, 0X7FFF);
    // 0x8020D434: jal         0x802143A0
    // 0x8020D438: lbu         $a1, 0x2DE3($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2DE3);
    func_802143A0_69BDA0(rdram, ctx);
        goto after_3;
    // 0x8020D438: lbu         $a1, 0x2DE3($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2DE3);
    after_3:
    // 0x8020D43C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8020D440: jal         0x80214398
    // 0x8020D444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80214398_69BD98(rdram, ctx);
        goto after_4;
    // 0x8020D444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8020D448: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8020D44C: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x8020D450: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D454: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8020D458: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8020D45C: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x8020D460: b           L_8020D4D0
    // 0x8020D464: lhu         $v0, 0x7D3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7D3C);
        goto L_8020D4D0;
    // 0x8020D464: lhu         $v0, 0x7D3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7D3C);
L_8020D468:
    // 0x8020D468: addiu       $v1, $v1, 0x4CC0
    ctx->r3 = ADD32(ctx->r3, 0X4CC0);
    // 0x8020D46C: lh          $t2, 0x307E($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X307E);
    // 0x8020D470: slti        $at, $t2, -0x28
    ctx->r1 = SIGNED(ctx->r10) < -0X28 ? 1 : 0;
    // 0x8020D474: bne         $at, $zero, L_8020D48C
    if (ctx->r1 != 0) {
        // 0x8020D478: nop
    
            goto L_8020D48C;
    }
    // 0x8020D478: nop

    // 0x8020D47C: lhu         $v0, 0x307C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X307C);
    // 0x8020D480: andi        $t3, $v0, 0x200
    ctx->r11 = ctx->r2 & 0X200;
    // 0x8020D484: beql        $t3, $zero, L_8020D4D4
    if (ctx->r11 == 0) {
        // 0x8020D488: andi        $t5, $v0, 0x4000
        ctx->r13 = ctx->r2 & 0X4000;
            goto L_8020D4D4;
    }
    goto skip_1;
    // 0x8020D488: andi        $t5, $v0, 0x4000
    ctx->r13 = ctx->r2 & 0X4000;
    skip_1:
L_8020D48C:
    // 0x8020D48C: jal         0x80038B98
    // 0x8020D490: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    func_80038B98_39798(rdram, ctx);
        goto after_5;
    // 0x8020D490: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    after_5:
    // 0x8020D494: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8020D498: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8020D49C: sb          $zero, 0x7AA2($at)
    MEM_B(0X7AA2, ctx->r1) = 0;
    // 0x8020D4A0: jal         0x802143A0
    // 0x8020D4A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802143A0_69BDA0(rdram, ctx);
        goto after_6;
    // 0x8020D4A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8020D4A8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8020D4AC: jal         0x80214398
    // 0x8020D4B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80214398_69BD98(rdram, ctx);
        goto after_7;
    // 0x8020D4B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8020D4B4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8020D4B8: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x8020D4BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D4C0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8020D4C4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8020D4C8: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x8020D4CC: lhu         $v0, 0x7D3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7D3C);
L_8020D4D0:
    // 0x8020D4D0: andi        $t5, $v0, 0x4000
    ctx->r13 = ctx->r2 & 0X4000;
L_8020D4D4:
    // 0x8020D4D4: beql        $t5, $zero, L_8020D53C
    if (ctx->r13 == 0) {
        // 0x8020D4D8: andi        $t9, $v0, 0x9000
        ctx->r25 = ctx->r2 & 0X9000;
            goto L_8020D53C;
    }
    goto skip_2;
    // 0x8020D4D8: andi        $t9, $v0, 0x9000
    ctx->r25 = ctx->r2 & 0X9000;
    skip_2:
    // 0x8020D4DC: jal         0x80038B98
    // 0x8020D4E0: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    func_80038B98_39798(rdram, ctx);
        goto after_8;
    // 0x8020D4E0: addiu       $a0, $zero, 0x2A6
    ctx->r4 = ADD32(0, 0X2A6);
    after_8:
    // 0x8020D4E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8020D4E8: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x8020D4EC: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x8020D4F0: lbu         $t6, 0x2DE3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2DE3);
    // 0x8020D4F4: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8020D4F8: addiu       $a1, $v0, 0x7FFF
    ctx->r5 = ADD32(ctx->r2, 0X7FFF);
    // 0x8020D4FC: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x8020D500: sb          $t7, 0x2DE3($at)
    MEM_B(0X2DE3, ctx->r1) = ctx->r15;
    // 0x8020D504: lbu         $a1, 0x2DE3($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2DE3);
    // 0x8020D508: jal         0x802143A0
    // 0x8020D50C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_802143A0_69BDA0(rdram, ctx);
        goto after_9;
    // 0x8020D50C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_9:
    // 0x8020D510: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8020D514: jal         0x80214398
    // 0x8020D518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80214398_69BD98(rdram, ctx);
        goto after_10;
    // 0x8020D518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8020D51C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8020D520: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8020D524: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D528: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8020D52C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8020D530: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x8020D534: lhu         $v0, 0x7D3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7D3C);
    // 0x8020D538: andi        $t9, $v0, 0x9000
    ctx->r25 = ctx->r2 & 0X9000;
L_8020D53C:
    // 0x8020D53C: beq         $t9, $zero, L_8020D578
    if (ctx->r25 == 0) {
        // 0x8020D540: nop
    
            goto L_8020D578;
    }
    // 0x8020D540: nop

    // 0x8020D544: jal         0x80038B98
    // 0x8020D548: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80038B98_39798(rdram, ctx);
        goto after_11;
    // 0x8020D548: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_11:
    // 0x8020D54C: jal         0x802143D8
    // 0x8020D550: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_802143D8_69BDD8(rdram, ctx);
        goto after_12;
    // 0x8020D550: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_12:
    // 0x8020D554: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8020D558: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x8020D55C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D560: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8020D564: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x8020D568: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8020D56C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8020D570: b           L_8020D62C
    // 0x8020D574: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
        goto L_8020D62C;
    // 0x8020D574: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
L_8020D578:
    // 0x8020D578: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D57C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8020D580: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x8020D584: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8020D588: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
    // 0x8020D58C: slti        $at, $v1, 0x301
    ctx->r1 = SIGNED(ctx->r3) < 0X301 ? 1 : 0;
    // 0x8020D590: bne         $at, $zero, L_8020D61C
    if (ctx->r1 != 0) {
        // 0x8020D594: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_8020D61C;
    }
    // 0x8020D594: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D598: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8020D59C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020D5A0: sb          $t3, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r11;
    // 0x8020D5A4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D5A8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8020D5AC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x8020D5B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8020D5B4: b           L_8020D61C
    // 0x8020D5B8: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
        goto L_8020D61C;
    // 0x8020D5B8: lhu         $v1, -0x522E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X522E);
L_8020D5BC:
    // 0x8020D5BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8020D5C0: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x8020D5C4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D5C8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D5CC: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x8020D5D0: lhu         $v1, 0x2DD2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2DD2);
    // 0x8020D5D4: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8020D5D8: bnel        $v1, $at, L_8020D620
    if (ctx->r3 != ctx->r1) {
        // 0x8020D5DC: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_8020D620;
    }
    goto skip_3;
    // 0x8020D5DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    skip_3:
    // 0x8020D5E0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8020D5E4: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x8020D5E8: addiu       $t4, $v1, 0x7FFF
    ctx->r12 = ADD32(ctx->r3, 0X7FFF);
    // 0x8020D5EC: lbu         $t4, 0x2DE3($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X2DE3);
    // 0x8020D5F0: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8020D5F4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8020D5F8: bne         $t4, $zero, L_8020D60C
    if (ctx->r12 != 0) {
        // 0x8020D5FC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_8020D60C;
    }
    // 0x8020D5FC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8020D600: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x8020D604: b           L_8020D610
    // 0x8020D608: sb          $t5, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = ctx->r13;
        goto L_8020D610;
    // 0x8020D608: sb          $t5, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = ctx->r13;
L_8020D60C:
    // 0x8020D60C: sb          $t6, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = ctx->r14;
L_8020D610:
    // 0x8020D610: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D614: sw          $a1, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r5;
    // 0x8020D618: lhu         $v1, 0x2DD2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2DD2);
L_8020D61C:
    // 0x8020D61C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_8020D620:
    // 0x8020D620: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8020D624: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8020D628: sh          $t7, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = ctx->r15;
L_8020D62C:
    // 0x8020D62C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8020D630: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8020D634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020D638: jr          $ra
    // 0x8020D63C: nop

    TRACE_RETURN()
    return;
    // 0x8020D63C: nop

;}
RECOMP_FUNC void func_80211058_698A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211058: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8021105C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80211060: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80211064: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80211068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021106C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80211070: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80211074: addiu       $a0, $a0, 0x94
    ctx->r4 = ADD32(ctx->r4, 0X94);
    // 0x80211078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021107C: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80211080: swc1        $f0, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = ctx->f0.u32l;
    // 0x80211084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021108C: bc1f        L_802110B0
    if (!c1cs) {
        // 0x80211090: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_802110B0;
    }
    // 0x80211090: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80211094: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80211098: jal         0x80211224
    // 0x8021109C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80211224_698C24(rdram, ctx);
        goto after_0;
    // 0x8021109C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x802110A0: jal         0x802110E8
    // 0x802110A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_802110E8_698AE8(rdram, ctx);
        goto after_1;
    // 0x802110A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x802110A8: b           L_802110DC
    // 0x802110AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802110DC;
    // 0x802110AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802110B0:
    // 0x802110B0: lwc1        $f8, 0x80($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X80);
    // 0x802110B4: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x802110B8: addiu       $a0, $v0, 0x38
    ctx->r4 = ADD32(ctx->r2, 0X38);
    // 0x802110BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802110C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802110C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802110C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802110CC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x802110D0: jal         0x802110FC
    // 0x802110D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_802110FC_698AFC(rdram, ctx);
        goto after_2;
    // 0x802110D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_2:
    // 0x802110D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802110DC:
    // 0x802110DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802110E0: jr          $ra
    // 0x802110E4: nop

    TRACE_RETURN()
    return;
    // 0x802110E4: nop

;}
