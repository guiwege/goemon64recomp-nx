#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08003284_6D91D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003284: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003288: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800328C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003294: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003298: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x0800329C: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x080032A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080032A4: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    // 0x080032A8: jalr        $t9
    // 0x080032AC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080032AC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x080032B0: beq         $v0, $zero, L_080032C0
    if (ctx->r2 == 0) {
        // 0x080032B4: nop
    
            goto L_080032C0;
    }
    // 0x080032B4: nop

    // 0x080032B8: jal         0x0800281C
    // 0x080032BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_0800281C_6D876C(rdram, ctx);
        goto after_1;
    // 0x080032BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
L_080032C0:
    // 0x080032C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032C4: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x080032C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080032CC: lhu         $a1, 0xD0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD0);
    // 0x080032D0: jalr        $t9
    // 0x080032D4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080032D4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_2:
    // 0x080032D8: beq         $v0, $zero, L_080032F4
    if (ctx->r2 == 0) {
        // 0x080032DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080032F4;
    }
    // 0x080032DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080032E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032E4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080032E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080032EC: jalr        $t9
    // 0x080032F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080032F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_080032F4:
    // 0x080032F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080032F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080032FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003300: jr          $ra
    // 0x08003304: nop

    TRACE_RETURN()
    return;
    // 0x08003304: nop

;}
RECOMP_FUNC void func_0800250C_6D845C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800250C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002514: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002518: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x0800251C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002520: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08002524: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08002528: bne         $t7, $zero, L_08002560
    if (ctx->r15 != 0) {
        // 0x0800252C: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_08002560;
    }
    // 0x0800252C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002530: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002534: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002538: jalr        $t9
    // 0x0800253C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800253C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002540: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002544: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x08002548: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800254C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002550: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2570) << 16);
    // 0x08002554: addiu       $a0, $a0, 0x2570
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2570));
    // 0x08002558: jalr        $t9
    // 0x0800255C: swc1        $f4, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800255C: swc1        $f4, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->f4.u32l;
    after_1:
L_08002560:
    // 0x08002560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002568: jr          $ra
    // 0x0800256C: nop

    TRACE_RETURN()
    return;
    // 0x0800256C: nop

;}
RECOMP_FUNC void func_08002714_6D8664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002714: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002718: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800271C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002724: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002728: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x0800272C: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x08002730: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002734: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08002738: jalr        $t9
    // 0x0800273C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800273C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x08002740: lh          $t6, 0xA0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA0);
    // 0x08002744: lh          $t7, 0xA2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA2);
    // 0x08002748: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800274C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08002750: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08002754: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08002758: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800275C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002760: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x08002764: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08002768: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x0800276C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08002770: jalr        $t9
    // 0x08002774: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002774: nop

    after_1:
    // 0x08002778: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800277C: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002780: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08002784: jalr        $t9
    // 0x08002788: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002788: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x0800278C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08002790: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x08002794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002798: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x0800279C: lh          $t8, 0xA2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA2);
    // 0x080027A0: lh          $t0, 0xA0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XA0);
    // 0x080027A4: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080027A8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x080027AC: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x080027B0: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080027B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080027B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080027BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x080027C0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080027C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080027C8: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080027CC: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080027D0: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080027D4: nop

    // 0x080027D8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080027DC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080027E0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x080027E4: nop

    // 0x080027E8: bc1f        L_08002808
    if (!c1cs) {
        // 0x080027EC: nop
    
            goto L_08002808;
    }
    // 0x080027EC: nop

    // 0x080027F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080027F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027F8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080027FC: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08002800: jalr        $t9
    // 0x08002804: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002804: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_3:
L_08002808:
    // 0x08002808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800280C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002814: jr          $ra
    // 0x08002818: nop

    TRACE_RETURN()
    return;
    // 0x08002818: nop

;}
RECOMP_FUNC void func_08000CCC_6D6C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000CD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000CD4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000CD8: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08000CDC: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08000CE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000CE4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08000CE8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08000CEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CF0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000CF4: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08000CF8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08000CFC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000D00: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000D04: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000D08: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08000D0C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000D10: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08000D14: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08000D18: jalr        $t9
    // 0x08000D1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D1C: nop

    after_0:
    // 0x08000D20: bne         $v0, $zero, L_08000D38
    if (ctx->r2 != 0) {
        // 0x08000D24: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(26, 0XD48) << 16);
            goto L_08000D38;
    }
    // 0x08000D24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0XD48) << 16);
    // 0x08000D28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D30: jalr        $t9
    // 0x08000D34: addiu       $a0, $a0, 0xD48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XD48));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D34: addiu       $a0, $a0, 0xD48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XD48));
    after_1:
L_08000D38:
    // 0x08000D38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000D40: jr          $ra
    // 0x08000D44: nop

    TRACE_RETURN()
    return;
    // 0x08000D44: nop

;}
RECOMP_FUNC void func_08000B10_6D6A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000B14: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(26, 0X7C0) << 16);
    // 0x08000B18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000B1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000B20: addiu       $t9, $t9, 0x7C0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(26, 0X7C0));
    // 0x08000B24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000B28: jalr        $t9
    // 0x08000B2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000B30: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000B34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0XA9C) << 16);
    // 0x08000B38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B3C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000B40: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000B44: beq         $v1, $zero, L_08000B60
    if (ctx->r3 == 0) {
        // 0x08000B48: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08000B60;
    }
    // 0x08000B48: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08000B4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B50: jalr        $t9
    // 0x08000B54: addiu       $a0, $a0, 0xA9C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XA9C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B54: addiu       $a0, $a0, 0xA9C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0XA9C));
    after_1:
    // 0x08000B58: b           L_08000C08
    // 0x08000B5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000C08;
    // 0x08000B5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000B60:
    // 0x08000B60: lhu         $t7, 0x8A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X8A);
    // 0x08000B64: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x08000B68: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08000B6C: subu        $v0, $t8, $t7
    ctx->r2 = SUB32(ctx->r24, ctx->r15);
    // 0x08000B70: bgez        $v0, L_08000B80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08000B74: lui         $t9, 0x8000
        ctx->r25 = S32(0X8000 << 16);
            goto L_08000B80;
    }
    // 0x08000B74: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000B78: b           L_08000B84
    // 0x08000B7C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_08000B84;
    // 0x08000B7C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_08000B80:
    // 0x08000B80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_08000B84:
    // 0x08000B84: lhu         $a0, 0x16($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X16);
    // 0x08000B88: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000B8C: jalr        $t9
    // 0x08000B90: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B90: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x08000B94: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x08000B98: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x08000B9C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000BA0: subu        $t2, $t1, $v1
    ctx->r10 = SUB32(ctx->r9, ctx->r3);
    // 0x08000BA4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x08000BA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000BAC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000BB0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000BB4: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000BB8: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08000BBC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x08000BC0: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x08000BC4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x08000BC8: lhu         $a0, 0x16($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X16);
    // 0x08000BCC: jalr        $t9
    // 0x08000BD0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000BD0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x08000BD4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x08000BD8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000BDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000BE0: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08000BE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BE8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000BF8: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x08000BFC: jalr        $t9
    // 0x08000C00: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000C00: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x08000C04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000C08:
    // 0x08000C08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000C0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000C10: jr          $ra
    // 0x08000C14: nop

    TRACE_RETURN()
    return;
    // 0x08000C14: nop

;}
RECOMP_FUNC void func_08001180_6D70D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001188: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800118C: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08001190: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08001194: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001198: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x0800119C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080011A0: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x080011A4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080011A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080011AC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x080011B0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080011B4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080011B8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080011BC: jalr        $t9
    // 0x080011C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011C0: nop

    after_0:
    // 0x080011C4: bne         $v0, $zero, L_080011E0
    if (ctx->r2 != 0) {
        // 0x080011C8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080011E0;
    }
    // 0x080011C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080011CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011D0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080011D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080011D8: jalr        $t9
    // 0x080011DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080011DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_080011E0:
    // 0x080011E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080011E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080011E8: jr          $ra
    // 0x080011EC: nop

    TRACE_RETURN()
    return;
    // 0x080011EC: nop

;}
RECOMP_FUNC void func_08000DB8_6D6D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DB8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08000DBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000DC0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000DC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000DC8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000DCC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08000DD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000DD4: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000DD8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DDC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000DE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000DE4: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x08000DE8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x08000DEC: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x08000DF0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000DF4: jalr        $t9
    // 0x08000DF8: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DF8: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    after_0:
    // 0x08000DFC: lh          $t6, 0x60($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X60);
    // 0x08000E00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E04: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08000E08: beq         $t6, $zero, L_08000E1C
    if (ctx->r14 == 0) {
        // 0x08000E0C: addiu       $t9, $t9, -0x59BC
        ctx->r25 = ADD32(ctx->r25, -0X59BC);
            goto L_08000E1C;
    }
    // 0x08000E0C: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000E10: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000E14: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08000E18: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
L_08000E1C:
    // 0x08000E1C: jalr        $t9
    // 0x08000E20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x08000E24: lui         $t7, 0x222
    ctx->r15 = S32(0X222 << 16);
    // 0x08000E28: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000E2C: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08000E30: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000E34: sw          $t7, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r15;
    // 0x08000E38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E40: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000E44: jalr        $t9
    // 0x08000E48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000E4C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3EF4) << 16);
    // 0x08000E50: lwc1        $f0, 0x3EF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(26, 0X3EF4));
    // 0x08000E54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E58: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000E5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E60: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x08000E64: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x08000E68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000E6C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000E70: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000E74: jalr        $t9
    // 0x08000E78: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E78: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x08000E7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E80: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000E84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000E88: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x08000E8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000E90: jalr        $t9
    // 0x08000E94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000E94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000E98: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E9C: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000EA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EA4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08000EA8: jalr        $t9
    // 0x08000EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08000EB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EB4: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000EB8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(26, 0X3DA0) << 16);
    // 0x08000EBC: addiu       $a1, $a1, 0x3DA0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(26, 0X3DA0));
    // 0x08000EC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EC4: jalr        $t9
    // 0x08000EC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000EC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x08000ECC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ED0: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000ED4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000ED8: addiu       $a1, $a1, 0x1810
    ctx->r5 = ADD32(ctx->r5, 0X1810);
    // 0x08000EDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EE0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000EE4: jalr        $t9
    // 0x08000EE8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000EE8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x08000EEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EF0: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08000EF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000EF8: jalr        $t9
    // 0x08000EFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000EFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x08000F00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F04: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000F08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F10: jalr        $t9
    // 0x08000F14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000F14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x08000F18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F1C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000F20: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000F24: jr          $ra
    // 0x08000F28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000F28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08003008_6D8F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800300C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003014: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08003018: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800301C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08003020: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003024: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08003028: sb          $t6, 0xDC($a0)
    MEM_B(0XDC, ctx->r4) = ctx->r14;
    // 0x0800302C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003030: jal         0x08002854
    // 0x08003034: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    func_08002854_6D87A4(rdram, ctx);
        goto after_0;
    // 0x08003034: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08003038: lhu         $t7, 0xD4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XD4);
    // 0x0800303C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003040: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003044: beq         $t7, $zero, L_0800305C
    if (ctx->r15 == 0) {
        // 0x08003048: lui         $a2, 0x3EAA
        ctx->r6 = S32(0X3EAA << 16);
            goto L_0800305C;
    }
    // 0x08003048: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x0800304C: lhu         $t8, 0x16($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X16);
    // 0x08003050: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x08003054: b           L_08003068
    // 0x08003058: sh          $t9, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r25;
        goto L_08003068;
    // 0x08003058: sh          $t9, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r25;
L_0800305C:
    // 0x0800305C: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
    // 0x08003060: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x08003064: sh          $t1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r9;
L_08003068:
    // 0x08003068: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x0800306C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08003070: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08003074: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08003078: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x0800307C: beq         $v1, $zero, L_080030D8
    if (ctx->r3 == 0) {
        // 0x08003080: sh          $t2, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r10;
            goto L_080030D8;
    }
    // 0x08003080: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08003084: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003088: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800308C: jalr        $t9
    // 0x08003090: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003090: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    after_1:
    // 0x08003094: lhu         $t5, 0xD0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XD0);
    // 0x08003098: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x0800309C: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x080030A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030A4: sb          $t3, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r11;
    // 0x080030A8: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x080030AC: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080030B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080030B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080030B8: sh          $t5, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r13;
    // 0x080030BC: jalr        $t9
    // 0x080030C0: andi        $a1, $t5, 0xFFFF
    ctx->r5 = ctx->r13 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080030C0: andi        $a1, $t5, 0xFFFF
    ctx->r5 = ctx->r13 & 0XFFFF;
    after_2:
    // 0x080030C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2DA0) << 16);
    // 0x080030D0: jalr        $t9
    // 0x080030D4: addiu       $a0, $a0, 0x2DA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2DA0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080030D4: addiu       $a0, $a0, 0x2DA0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2DA0));
    after_3:
L_080030D8:
    // 0x080030D8: lhu         $t6, 0xD2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XD2);
    // 0x080030DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080030E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080030E4: beq         $t6, $zero, L_080030F8
    if (ctx->r14 == 0) {
        // 0x080030E8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080030F8;
    }
    // 0x080030E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030EC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080030F0: jalr        $t9
    // 0x080030F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080030F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_080030F8:
    // 0x080030F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080030FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08003100: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08003104: jr          $ra
    // 0x08003108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08003108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08002278_6D81C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800227C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002284: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002288: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800228C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002290: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x08002294: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002298: bne         $v0, $zero, L_080022C0
    if (ctx->r2 != 0) {
        // 0x0800229C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080022C0;
    }
    // 0x0800229C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080022A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080022A4: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080022A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022AC: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x080022B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X22D0) << 16);
    // 0x080022B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080022B8: jalr        $t9
    // 0x080022BC: addiu       $a0, $a0, 0x22D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X22D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022BC: addiu       $a0, $a0, 0x22D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X22D0));
    after_0:
L_080022C0:
    // 0x080022C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080022C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080022C8: jr          $ra
    // 0x080022CC: nop

    TRACE_RETURN()
    return;
    // 0x080022CC: nop

;}
RECOMP_FUNC void func_08000C74_6D6BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C78: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(26, 0X7C0) << 16);
    // 0x08000C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C80: addiu       $t9, $t9, 0x7C0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(26, 0X7C0));
    // 0x08000C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000C88: jalr        $t9
    // 0x08000C8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000C90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C94: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000C98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000C9C: jalr        $t9
    // 0x08000CA0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CA0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x08000CA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CA8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000CB4: jalr        $t9
    // 0x08000CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08000CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000CC4: jr          $ra
    // 0x08000CC8: nop

    TRACE_RETURN()
    return;
    // 0x08000CC8: nop

;}
RECOMP_FUNC void func_08001360_6D72B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001360: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001364: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08001368: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x0800136C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08001370: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001374: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x08001378: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x0800137C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001380: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x08001384: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001388: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800138C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08001390: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001394: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x08001398: nop

    // 0x0800139C: bc1f        L_080013E8
    if (!c1cs) {
        // 0x080013A0: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_080013E8;
    }
    // 0x080013A0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080013A4: lhu         $t7, -0x33D0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X33D0);
    // 0x080013A8: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x080013AC: addiu       $s2, $s2, 0x3EA0
    ctx->r18 = ADD32(ctx->r18, 0X3EA0);
    // 0x080013B0: addu        $a0, $t7, $a0
    ctx->r4 = ADD32(ctx->r15, ctx->r4);
    // 0x080013B4: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x080013B8: jalr        $s2
    // 0x080013BC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x080013BC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x080013C0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3EF8) << 16);
    // 0x080013C4: ldc1        $f18, 0x3EF8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3EF8));
    // 0x080013C8: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x080013CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F00) << 16);
    // 0x080013D0: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x080013D4: ldc1        $f8, 0x3F00($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F00));
    // 0x080013D8: add.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f6.d + ctx->f8.d;
    // 0x080013DC: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x080013E0: b           L_0800142C
    // 0x080013E4: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
        goto L_0800142C;
    // 0x080013E4: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
L_080013E8:
    // 0x080013E8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x080013EC: lhu         $t9, -0x33D0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X33D0);
    // 0x080013F0: lui         $s2, 0x8000
    ctx->r18 = S32(0X8000 << 16);
    // 0x080013F4: addiu       $s2, $s2, 0x3EA0
    ctx->r18 = ADD32(ctx->r18, 0X3EA0);
    // 0x080013F8: addu        $a0, $t9, $s0
    ctx->r4 = ADD32(ctx->r25, ctx->r16);
    // 0x080013FC: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x08001400: jalr        $s2
    // 0x08001404: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_1;
    // 0x08001404: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_1:
    // 0x08001408: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F08) << 16);
    // 0x0800140C: ldc1        $f18, 0x3F08($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F08));
    // 0x08001410: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08001414: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(26, 0X3F10) << 16);
    // 0x08001418: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x0800141C: ldc1        $f8, 0x3F10($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(26, 0X3F10));
    // 0x08001420: sub.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f6.d - ctx->f8.d;
    // 0x08001424: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x08001428: swc1        $f10, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f10.u32l;
L_0800142C:
    // 0x0800142C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08001430: lhu         $t2, -0x33D0($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X33D0);
    // 0x08001434: lh          $t1, 0xD0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XD0);
    // 0x08001438: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800143C: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08001440: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001444: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001448: mflo        $a0
    ctx->r4 = lo;
    // 0x0800144C: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x08001450: jalr        $v0
    // 0x08001454: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08001454: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_2:
    // 0x08001458: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800145C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001460: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001464: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001468: lhu         $t4, 0x14($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X14);
    // 0x0800146C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x08001470: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08001474: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x08001478: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x0800147C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001480: bgez        $t4, L_08001498
    if (SIGNED(ctx->r12) >= 0) {
        // 0x08001484: sub.s       $f8, $f16, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
            goto L_08001498;
    }
    // 0x08001484: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x08001488: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800148C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001490: nop

    // 0x08001494: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_08001498:
    // 0x08001498: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x0800149C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080014A0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x080014A4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x080014A8: nop

    // 0x080014AC: cvt.w.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = CVT_W_S(ctx->f16.fl);
    // 0x080014B0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x080014B4: nop

    // 0x080014B8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x080014BC: beq         $t6, $zero, L_08001508
    if (ctx->r14 == 0) {
        // 0x080014C0: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_08001508;
    }
    // 0x080014C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x080014C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080014C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080014CC: sub.s       $f6, $f16, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x080014D0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x080014D4: nop

    // 0x080014D8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x080014DC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x080014E0: nop

    // 0x080014E4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x080014E8: bne         $t6, $zero, L_08001500
    if (ctx->r14 != 0) {
        // 0x080014EC: nop
    
            goto L_08001500;
    }
    // 0x080014EC: nop

    // 0x080014F0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x080014F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080014F8: b           L_08001518
    // 0x080014FC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_08001518;
    // 0x080014FC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_08001500:
    // 0x08001500: b           L_08001518
    // 0x08001504: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_08001518;
    // 0x08001504: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_08001508:
    // 0x08001508: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x0800150C: nop

    // 0x08001510: bltz        $t6, L_08001500
    if (SIGNED(ctx->r14) < 0) {
        // 0x08001514: nop
    
            goto L_08001500;
    }
    // 0x08001514: nop

L_08001518:
    // 0x08001518: sh          $t6, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r14;
    // 0x0800151C: lhu         $t8, -0x33D0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X33D0);
    // 0x08001520: lh          $t7, 0xD2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD2);
    // 0x08001524: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x08001528: bgez        $t8, L_08001538
    if (SIGNED(ctx->r24) >= 0) {
        // 0x0800152C: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_08001538;
    }
    // 0x0800152C: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x08001530: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x08001534: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_08001538:
    // 0x08001538: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x0800153C: mflo        $a0
    ctx->r4 = lo;
    // 0x08001540: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x08001544: jalr        $v0
    // 0x08001548: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08001548: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x0800154C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001550: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001554: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001558: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800155C: lhu         $t1, 0x16($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X16);
    // 0x08001560: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001564: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x08001568: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x0800156C: nop

    // 0x08001570: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001574: bgez        $t1, L_08001588
    if (SIGNED(ctx->r9) >= 0) {
        // 0x08001578: sub.s       $f8, $f4, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
            goto L_08001588;
    }
    // 0x08001578: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x0800157C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001580: nop

    // 0x08001584: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
L_08001588:
    // 0x08001588: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x0800158C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08001590: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001594: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x08001598: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x0800159C: nop

    // 0x080015A0: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x080015A4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x080015A8: nop

    // 0x080015AC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x080015B0: beql        $t3, $zero, L_08001600
    if (ctx->r11 == 0) {
        // 0x080015B4: mfc1        $t3, $f10
        ctx->r11 = (int32_t)ctx->f10.u32l;
            goto L_08001600;
    }
    goto skip_0;
    // 0x080015B4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x080015B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080015BC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080015C0: sub.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x080015C4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x080015C8: nop

    // 0x080015CC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x080015D0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x080015D4: nop

    // 0x080015D8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x080015DC: bne         $t3, $zero, L_080015F4
    if (ctx->r11 != 0) {
        // 0x080015E0: nop
    
            goto L_080015F4;
    }
    // 0x080015E0: nop

    // 0x080015E4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x080015E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080015EC: b           L_0800160C
    // 0x080015F0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_0800160C;
    // 0x080015F0: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_080015F4:
    // 0x080015F4: b           L_0800160C
    // 0x080015F8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_0800160C;
    // 0x080015F8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x080015FC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
L_08001600:
    // 0x08001600: nop

    // 0x08001604: bltz        $t3, L_080015F4
    if (SIGNED(ctx->r11) < 0) {
        // 0x08001608: nop
    
            goto L_080015F4;
    }
    // 0x08001608: nop

L_0800160C:
    // 0x0800160C: sh          $t3, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r11;
    // 0x08001610: lh          $t4, 0xD4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XD4);
    // 0x08001614: andi        $t5, $t3, 0xFFFF
    ctx->r13 = ctx->r11 & 0XFFFF;
    // 0x08001618: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x0800161C: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x08001620: mflo        $a0
    ctx->r4 = lo;
    // 0x08001624: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x08001628: jalr        $s2
    // 0x0800162C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_4;
    // 0x0800162C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x08001630: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001634: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001638: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x0800163C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001640: lhu         $t8, 0x18($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X18);
    // 0x08001644: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08001648: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x0800164C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08001650: nop

    // 0x08001654: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001658: bgez        $t8, L_0800166C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x0800165C: sub.s       $f8, $f16, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
            goto L_0800166C;
    }
    // 0x0800165C: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x08001660: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001664: nop

    // 0x08001668: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_0800166C:
    // 0x0800166C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x08001670: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08001674: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001678: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x0800167C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08001680: nop

    // 0x08001684: cvt.w.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001688: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x0800168C: nop

    // 0x08001690: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x08001694: beql        $t9, $zero, L_080016E4
    if (ctx->r25 == 0) {
        // 0x08001698: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_080016E4;
    }
    goto skip_1;
    // 0x08001698: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x0800169C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080016A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080016A4: sub.s       $f6, $f16, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x080016A8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x080016AC: nop

    // 0x080016B0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x080016B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x080016B8: nop

    // 0x080016BC: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x080016C0: bne         $t9, $zero, L_080016D8
    if (ctx->r25 != 0) {
        // 0x080016C4: nop
    
            goto L_080016D8;
    }
    // 0x080016C4: nop

    // 0x080016C8: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x080016CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080016D0: b           L_080016F0
    // 0x080016D4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_080016F0;
    // 0x080016D4: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_080016D8:
    // 0x080016D8: b           L_080016F0
    // 0x080016DC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_080016F0;
    // 0x080016DC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x080016E0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_080016E4:
    // 0x080016E4: nop

    // 0x080016E8: bltz        $t9, L_080016D8
    if (SIGNED(ctx->r25) < 0) {
        // 0x080016EC: nop
    
            goto L_080016D8;
    }
    // 0x080016EC: nop

L_080016F0:
    // 0x080016F0: sh          $t9, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r25;
    // 0x080016F4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080016F8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x080016FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001700: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08001704: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001708: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800170C: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x08001710: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x08001714: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x08001718: addiu       $t9, $t9, -0xD94
    ctx->r25 = ADD32(ctx->r25, -0XD94);
    // 0x0800171C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08001720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001724: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08001728: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x0800172C: nop

    // 0x08001730: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x08001734: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08001738: nop

    // 0x0800173C: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x08001740: beql        $a2, $zero, L_08001790
    if (ctx->r6 == 0) {
        // 0x08001744: mfc1        $a2, $f8
        ctx->r6 = (int32_t)ctx->f8.u32l;
            goto L_08001790;
    }
    goto skip_2;
    // 0x08001744: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x08001748: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800174C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001750: sub.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x08001754: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x08001758: nop

    // 0x0800175C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x08001760: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x08001764: nop

    // 0x08001768: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x0800176C: bne         $a2, $zero, L_08001784
    if (ctx->r6 != 0) {
        // 0x08001770: nop
    
            goto L_08001784;
    }
    // 0x08001770: nop

    // 0x08001774: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001778: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800177C: b           L_0800179C
    // 0x08001780: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_0800179C;
    // 0x08001780: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_08001784:
    // 0x08001784: b           L_0800179C
    // 0x08001788: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_0800179C;
    // 0x08001788: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x0800178C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
L_08001790:
    // 0x08001790: nop

    // 0x08001794: bltz        $a2, L_08001784
    if (SIGNED(ctx->r6) < 0) {
        // 0x08001798: nop
    
            goto L_08001784;
    }
    // 0x08001798: nop

L_0800179C:
    // 0x0800179C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080017A0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x080017A4: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x080017A8: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080017AC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x080017B0: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x080017B4: jalr        $t9
    // 0x080017B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080017B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x080017BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017C0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080017C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080017CC: jalr        $t9
    // 0x080017D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080017D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x080017D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080017D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080017DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x080017E0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x080017E4: jr          $ra
    // 0x080017E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x080017E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08002338_6D8288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800233C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002340: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002348: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x0800234C: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x08002350: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08002354: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002358: jalr        $t9
    // 0x0800235C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800235C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_0:
    // 0x08002360: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002364: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002368: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800236C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002370: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002374: bne         $v0, $zero, L_08002388
    if (ctx->r2 != 0) {
        // 0x08002378: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002388;
    }
    // 0x08002378: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800237C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2398) << 16);
    // 0x08002380: jalr        $t9
    // 0x08002384: addiu       $a0, $a0, 0x2398
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2398));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002384: addiu       $a0, $a0, 0x2398
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2398));
    after_1:
L_08002388:
    // 0x08002388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800238C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002390: jr          $ra
    // 0x08002394: nop

    TRACE_RETURN()
    return;
    // 0x08002394: nop

;}
RECOMP_FUNC void func_08002610_6D8560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002614: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800261C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002620: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002624: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800262C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002630: jalr        $t9
    // 0x08002634: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002634: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08002638: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x0800263C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002640: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002644: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08002648: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800264C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X2670) << 16);
    // 0x08002650: addiu       $a0, $a0, 0x2670
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X2670));
    // 0x08002654: sh          $t6, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = ctx->r14;
    // 0x08002658: jalr        $t9
    // 0x0800265C: swc1        $f4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800265C: swc1        $f4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f4.u32l;
    after_1:
    // 0x08002660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002668: jr          $ra
    // 0x0800266C: nop

    TRACE_RETURN()
    return;
    // 0x0800266C: nop

;}
RECOMP_FUNC void func_080024B0_6D8400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080024B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080024B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080024BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080024C0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080024C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080024C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080024CC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080024D0: jalr        $t9
    // 0x080024D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080024D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080024D8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x080024DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080024E0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080024E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080024E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080024EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X250C) << 16);
    // 0x080024F0: addiu       $a0, $a0, 0x250C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X250C));
    // 0x080024F4: jalr        $t9
    // 0x080024F8: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080024F8: swc1        $f4, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f4.u32l;
    after_1:
    // 0x080024FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002504: jr          $ra
    // 0x08002508: nop

    TRACE_RETURN()
    return;
    // 0x08002508: nop

;}
RECOMP_FUNC void func_080037F8_6D9748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080037FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003800: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003804: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08003808: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x0800380C: ori         $t6, $t6, 0x321
    ctx->r14 = ctx->r14 | 0X321;
    // 0x08003810: addiu       $t7, $zero, 0x32B
    ctx->r15 = ADD32(0, 0X32B);
    // 0x08003814: addiu       $t8, $zero, 0xE1
    ctx->r24 = ADD32(0, 0XE1);
    // 0x08003818: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800381C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08003820: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08003824: addiu       $t9, $zero, -0x1E
    ctx->r25 = ADD32(0, -0X1E);
    // 0x08003828: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x0800382C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003830: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x08003834: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003838: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x0800383C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x08003840: jalr        $t9
    // 0x08003844: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003844: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_0:
    // 0x08003848: lhu         $v0, 0xD0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD0);
    // 0x0800384C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003850: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08003854: beq         $v0, $zero, L_08003888
    if (ctx->r2 == 0) {
        // 0x08003858: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003888;
    }
    // 0x08003858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800385C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003860: beq         $v0, $at, L_08003898
    if (ctx->r2 == ctx->r1) {
        // 0x08003864: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08003898;
    }
    // 0x08003864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003868: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800386C: beq         $v0, $at, L_080038B0
    if (ctx->r2 == ctx->r1) {
        // 0x08003870: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080038B0;
    }
    // 0x08003870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003874: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08003878: beq         $v0, $at, L_080038C8
    if (ctx->r2 == ctx->r1) {
        // 0x0800387C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080038C8;
    }
    // 0x0800387C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003880: b           L_080038E0
    // 0x08003884: nop

        goto L_080038E0;
    // 0x08003884: nop

L_08003888:
    // 0x08003888: jalr        $t9
    // 0x0800388C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800388C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08003890: b           L_080038E0
    // 0x08003894: nop

        goto L_080038E0;
    // 0x08003894: nop

L_08003898:
    // 0x08003898: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800389C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080038A0: jalr        $t9
    // 0x080038A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080038A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x080038A8: b           L_080038E0
    // 0x080038AC: nop

        goto L_080038E0;
    // 0x080038AC: nop

L_080038B0:
    // 0x080038B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080038B4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080038B8: jalr        $t9
    // 0x080038BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080038BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x080038C0: b           L_080038E0
    // 0x080038C4: nop

        goto L_080038E0;
    // 0x080038C4: nop

L_080038C8:
    // 0x080038C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080038CC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080038D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080038D4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080038D8: jalr        $t9
    // 0x080038DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080038DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
L_080038E0:
    // 0x080038E0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080038E4: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x080038E8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080038EC: jalr        $v0
    // 0x080038F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x080038F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_5:
    // 0x080038F4: sh          $v0, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r2;
    // 0x080038F8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080038FC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08003900: jalr        $t9
    // 0x08003904: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003904: nop

    after_6:
    // 0x08003908: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
    // 0x0800390C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08003910: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x08003914: jalr        $t9
    // 0x08003918: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003918: nop

    after_7:
    // 0x0800391C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003920: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003924: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(26, 0X3948) << 16);
    // 0x08003928: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x0800392C: jalr        $t9
    // 0x08003930: addiu       $a0, $a0, 0x3948
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3948));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003930: addiu       $a0, $a0, 0x3948
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(26, 0X3948));
    after_8:
    // 0x08003934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003938: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800393C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003940: jr          $ra
    // 0x08003944: nop

    TRACE_RETURN()
    return;
    // 0x08003944: nop

;}
RECOMP_FUNC void func_0800281C_6D876C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800281C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002820: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002828: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x0800282C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002830: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002834: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002838: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    // 0x0800283C: jalr        $t9
    // 0x08002840: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002840: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08002844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800284C: jr          $ra
    // 0x08002850: nop

    TRACE_RETURN()
    return;
    // 0x08002850: nop

;}
RECOMP_FUNC void func_08000034_6D5F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000038: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800003C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000040: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000044: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800004C: jalr        $t9
    // 0x08000050: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000050: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000054: lui         $t6, 0x6AE
    ctx->r14 = S32(0X6AE << 16);
    // 0x08000058: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800005C: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x08000060: addiu       $t7, $zero, 0x3E1
    ctx->r15 = ADD32(0, 0X3E1);
    // 0x08000064: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000068: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x0800006C: sh          $t7, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r15;
    // 0x08000070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000078: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800007C: jalr        $t9
    // 0x08000080: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000080: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000084: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000088: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x0800008C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000090: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08000094: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000098: sb          $t8, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r24;
    // 0x0800009C: sb          $t0, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r8;
    // 0x080000A0: sb          $t1, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r9;
    // 0x080000A4: jalr        $t9
    // 0x080000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080000AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000B0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000B8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080000BC: jalr        $t9
    // 0x080000C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x080000C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C8: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080000D4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x080000D8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x080000DC: jalr        $t9
    // 0x080000E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x080000E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000E8: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080000EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(26, 0X3D60) << 16);
    // 0x080000F0: addiu       $a1, $a1, 0x3D60
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(26, 0X3D60));
    // 0x080000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000F8: jalr        $t9
    // 0x080000FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08000100: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000104: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800010C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000110: jalr        $t9
    // 0x08000114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000114: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x08000118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800011C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000120: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000124: jr          $ra
    // 0x08000128: nop

    TRACE_RETURN()
    return;
    // 0x08000128: nop

;}
RECOMP_FUNC void func_080038AC_6DD77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080038AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080038B0: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X3C40) << 16);
    // 0x080038B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080038B8: addiu       $t9, $t9, 0x3C40
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X3C40));
    // 0x080038BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080038C0: jalr        $t9
    // 0x080038C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080038C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080038C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080038CC: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x080038D0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080038D4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080038D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080038DC: lui         $a2, 0x3E00
    ctx->r6 = S32(0X3E00 << 16);
    // 0x080038E0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080038E4: bne         $v0, $zero, L_08003934
    if (ctx->r2 != 0) {
        // 0x080038E8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003934;
    }
    // 0x080038E8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080038EC: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080038F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080038F4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080038F8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080038FC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08003900: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003904: jalr        $t9
    // 0x08003908: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003908: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
    // 0x0800390C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003910: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08003914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003918: jalr        $t9
    // 0x0800391C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800391C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x08003920: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003924: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003928: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3944) << 16);
    // 0x0800392C: jalr        $t9
    // 0x08003930: addiu       $a0, $a0, 0x3944
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3944));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003930: addiu       $a0, $a0, 0x3944
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3944));
    after_3:
L_08003934:
    // 0x08003934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800393C: jr          $ra
    // 0x08003940: nop

    TRACE_RETURN()
    return;
    // 0x08003940: nop

;}
RECOMP_FUNC void func_08000B28_6DA9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000B2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000B30: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000B34: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000B38: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x08000B3C: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08000B40: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5248) << 16);
    // 0x08000B44: ldc1        $f0, 0x5248($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5248));
    // 0x08000B48: lwc1        $f16, 0x80($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08000B4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000B50: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08000B54: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08000B58: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000B5C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000B60: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000B64: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08000B68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000B6C: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x08000B70: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000B74: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08000B78: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000B7C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x08000B80: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000B84: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x08000B88: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000B8C: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x08000B90: bne         $t6, $zero, L_08000BA0
    if (ctx->r14 != 0) {
        // 0x08000B94: swc1        $f6, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
            goto L_08000BA0;
    }
    // 0x08000B94: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x08000B98: beql        $t7, $zero, L_08000D54
    if (ctx->r15 == 0) {
        // 0x08000B9C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08000D54;
    }
    goto skip_0;
    // 0x08000B9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_08000BA0:
    // 0x08000BA0: jalr        $t9
    // 0x08000BA4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BA4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x08000BA8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0XD68) << 16);
    // 0x08000BAC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08000BB0: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08000BB4: addiu       $a1, $a1, 0xD68
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0XD68));
    // 0x08000BB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000BBC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08000BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000BC4: jalr        $v0
    // 0x08000BC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000BC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08000BCC: beq         $v0, $zero, L_08000C14
    if (ctx->r2 == 0) {
        // 0x08000BD0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000C14;
    }
    // 0x08000BD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000BD4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000BD8: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x08000BDC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000BE0: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08000BE4: jalr        $t9
    // 0x08000BE8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000BE8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_2:
    // 0x08000BEC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5250) << 16);
    // 0x08000BF0: lwc1        $f20, 0x5250($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5250));
    // 0x08000BF4: lw          $t0, 0xE8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE8);
    // 0x08000BF8: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08000BFC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000C00: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08000C04: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
    // 0x08000C08: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x08000C0C: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08000C10: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
L_08000C14:
    // 0x08000C14: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000C18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5254) << 16);
    // 0x08000C1C: lwc1        $f20, 0x5254($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5254));
    // 0x08000C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000C24: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000C28: jalr        $t9
    // 0x08000C2C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C2C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x08000C30: beq         $v0, $zero, L_08000C70
    if (ctx->r2 == 0) {
        // 0x08000C34: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000C70;
    }
    // 0x08000C34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000C38: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C3C: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x08000C40: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000C44: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08000C48: jalr        $t9
    // 0x08000C4C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000C4C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_4:
    // 0x08000C50: lw          $t3, 0xE8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XE8);
    // 0x08000C54: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08000C58: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000C5C: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x08000C60: sw          $t4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r12;
    // 0x08000C64: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x08000C68: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08000C6C: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
L_08000C70:
    // 0x08000C70: lw          $t5, 0x68($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X68);
    // 0x08000C74: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000C78: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x08000C7C: beq         $t6, $zero, L_08000D24
    if (ctx->r14 == 0) {
        // 0x08000C80: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08000D24;
    }
    // 0x08000C80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000C84: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000C88: jalr        $t9
    // 0x08000C8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000C8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x08000C90: beq         $v0, $zero, L_08000CD0
    if (ctx->r2 == 0) {
        // 0x08000C94: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000CD0;
    }
    // 0x08000C94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000C98: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000C9C: addiu       $t7, $zero, 0x24
    ctx->r15 = ADD32(0, 0X24);
    // 0x08000CA0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000CA4: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000CA8: jalr        $t9
    // 0x08000CAC: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000CAC: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_6:
    // 0x08000CB0: lw          $t8, 0xE8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE8);
    // 0x08000CB4: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08000CB8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000CBC: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x08000CC0: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    // 0x08000CC4: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x08000CC8: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08000CCC: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
L_08000CD0:
    // 0x08000CD0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000CD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000CD8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000CDC: jalr        $t9
    // 0x08000CE0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000CE0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x08000CE4: beq         $v0, $zero, L_08000D24
    if (ctx->r2 == 0) {
        // 0x08000CE8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000D24;
    }
    // 0x08000CE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000CEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000CF0: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x08000CF4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000CF8: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08000CFC: jalr        $t9
    // 0x08000D00: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000D00: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_8:
    // 0x08000D04: lw          $t2, 0xE8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE8);
    // 0x08000D08: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x08000D0C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000D10: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x08000D14: sw          $t3, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r11;
    // 0x08000D18: swc1        $f20, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f20.u32l;
    // 0x08000D1C: swc1        $f20, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f20.u32l;
    // 0x08000D20: swc1        $f20, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f20.u32l;
L_08000D24:
    // 0x08000D24: lw          $a0, 0xD0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XD0);
    // 0x08000D28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D2C: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000D30: beq         $a0, $zero, L_08000D40
    if (ctx->r4 == 0) {
        // 0x08000D34: nop
    
            goto L_08000D40;
    }
    // 0x08000D34: nop

    // 0x08000D38: jalr        $t9
    // 0x08000D3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000D3C: nop

    after_9:
L_08000D40:
    // 0x08000D40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D44: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000D48: jalr        $t9
    // 0x08000D4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000D4C: nop

    after_10:
    // 0x08000D50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000D54:
    // 0x08000D54: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08000D58: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D5C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000D60: jr          $ra
    // 0x08000D64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08000D64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08001B68_6DBA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001B6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001B70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001B74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B78: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08001B7C: lw          $a3, 0xD8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XD8);
    // 0x08001B80: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x08001B84: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x08001B88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08001B8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08001B90: jalr        $t9
    // 0x08001B94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x08001B98: bne         $v0, $zero, L_08001BF0
    if (ctx->r2 != 0) {
        // 0x08001B9C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001BF0;
    }
    // 0x08001B9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001BA0: lh          $t7, 0xA0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA0);
    // 0x08001BA4: lh          $t8, 0xA2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA2);
    // 0x08001BA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001BAC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x08001BB0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x08001BB4: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08001BB8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001BBC: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x08001BC0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x08001BC4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001BC8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08001BCC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08001BD0: jalr        $t9
    // 0x08001BD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001BD4: nop

    after_1:
    // 0x08001BD8: bne         $v0, $zero, L_08001BF0
    if (ctx->r2 != 0) {
        // 0x08001BDC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(27, 0X17DC) << 16);
            goto L_08001BF0;
    }
    // 0x08001BDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X17DC) << 16);
    // 0x08001BE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BE4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BE8: jalr        $t9
    // 0x08001BEC: addiu       $a0, $a0, 0x17DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X17DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001BEC: addiu       $a0, $a0, 0x17DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X17DC));
    after_2:
L_08001BF0:
    // 0x08001BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001BF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001BF8: jr          $ra
    // 0x08001BFC: nop

    TRACE_RETURN()
    return;
    // 0x08001BFC: nop

;}
RECOMP_FUNC void func_08004A10_6DE8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004A10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004A14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004A18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08004A1C: lh          $t8, 0xA2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA2);
    // 0x08004A20: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08004A24: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x08004A28: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x08004A2C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08004A30: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x08004A34: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08004A38: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x08004A3C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08004A40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A44: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08004A48: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004A4C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08004A50: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08004A54: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08004A58: jalr        $t9
    // 0x08004A5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004A5C: nop

    after_0:
    // 0x08004A60: bne         $v0, $zero, L_08004A78
    if (ctx->r2 != 0) {
        // 0x08004A64: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(27, 0X4AA8) << 16);
            goto L_08004A78;
    }
    // 0x08004A64: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X4AA8) << 16);
    // 0x08004A68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004A6C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004A70: jalr        $t9
    // 0x08004A74: addiu       $a0, $a0, 0x4AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4AA8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004A74: addiu       $a0, $a0, 0x4AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4AA8));
    after_1:
L_08004A78:
    // 0x08004A78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08004A7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A80: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08004A84: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x08004A88: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08004A8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004A90: jalr        $t9
    // 0x08004A94: lhu         $a1, 0x16($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004A94: lhu         $a1, 0x16($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X16);
    after_2:
    // 0x08004A98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004A9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004AA0: jr          $ra
    // 0x08004AA4: nop

    TRACE_RETURN()
    return;
    // 0x08004AA4: nop

;}
RECOMP_FUNC void func_08004568_6DE438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800456C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004570: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08004574: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004578: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800457C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08004580: beq         $t7, $zero, L_08004590
    if (ctx->r15 == 0) {
        // 0x08004584: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08004590;
    }
    // 0x08004584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004588: jalr        $t9
    // 0x0800458C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800458C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08004590:
    // 0x08004590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004598: jr          $ra
    // 0x0800459C: nop

    TRACE_RETURN()
    return;
    // 0x0800459C: nop

;}
RECOMP_FUNC void func_08001058_6DAF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001058: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x0800105C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001060: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001064: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001068: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800106C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001070: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001074: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001078: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0800107C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001084: jalr        $t9
    // 0x08001088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800108C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001090: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08001094: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001098: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x0800109C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080010A0: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x080010A4: addiu       $t8, $zero, 0x7E
    ctx->r24 = ADD32(0, 0X7E);
    // 0x080010A8: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x080010AC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080010B0: sh          $t8, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r24;
    // 0x080010B4: sw          $t0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r8;
    // 0x080010B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080010BC: jalr        $t9
    // 0x080010C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080010C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x080010C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010C8: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x080010CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080010D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080010D4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080010D8: jalr        $t9
    // 0x080010DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080010E0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5268) << 16);
    // 0x080010E4: lwc1        $f0, 0x5268($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5268));
    // 0x080010E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010EC: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080010F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080010F4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080010F8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080010FC: jalr        $t9
    // 0x08001100: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001100: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x08001104: lbu         $v0, 0xDC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDC);
    // 0x08001108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800110C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x08001110: bne         $v0, $at, L_080011B8
    if (ctx->r2 != ctx->r1) {
        // 0x08001114: lui         $at, 0xC170
        ctx->r1 = S32(0XC170 << 16);
            goto L_080011B8;
    }
    // 0x08001114: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x08001118: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800111C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x08001120: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001124: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001128: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x0800112C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x08001130: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x08001134: lw          $t1, 0xD8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XD8);
    // 0x08001138: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800113C: addiu       $t9, $t9, 0x3898
    ctx->r25 = ADD32(ctx->r25, 0X3898);
    // 0x08001140: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x08001144: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x08001148: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x0800114C: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x08001150: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x08001154: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x08001158: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x0800115C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x08001160: jalr        $t9
    // 0x08001164: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001164: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_4:
    // 0x08001168: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0800116C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08001170: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001174: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001178: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800117C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1224) << 16);
    // 0x08001180: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08001184: addiu       $a0, $a0, 0x1224
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1224));
    // 0x08001188: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x0800118C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08001190: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001194: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001198: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x0800119C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x080011A0: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080011A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080011A8: jalr        $t9
    // 0x080011AC: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080011AC: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x080011B0: b           L_08001214
    // 0x080011B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08001214;
    // 0x080011B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080011B8:
    // 0x080011B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080011BC: bnel        $v0, $at, L_08001214
    if (ctx->r2 != ctx->r1) {
        // 0x080011C0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08001214;
    }
    goto skip_0;
    // 0x080011C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x080011C4: lw          $t4, 0xD8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XD8);
    // 0x080011C8: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x080011CC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080011D0: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x080011D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080011D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011DC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080011E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X132C) << 16);
    // 0x080011E8: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x080011EC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080011F0: addiu       $a0, $a0, 0x132C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X132C));
    // 0x080011F4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080011F8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x080011FC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001200: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x08001204: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001208: jalr        $t9
    // 0x0800120C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800120C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    after_6:
    // 0x08001210: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001214:
    // 0x08001214: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001218: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800121C: jr          $ra
    // 0x08001220: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08001220: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_080027C0_6DC690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080027C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080027C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080027C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080027CC: lbu         $t6, 0xD8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD8);
    // 0x080027D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027D4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080027D8: beq         $t6, $zero, L_08002808
    if (ctx->r14 == 0) {
        // 0x080027DC: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_08002808;
    }
    // 0x080027DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080027E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027E4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080027E8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080027EC: jalr        $t9
    // 0x080027F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080027F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080027F4: bne         $v0, $zero, L_08002834
    if (ctx->r2 != 0) {
        // 0x080027F8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002834;
    }
    // 0x080027F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080027FC: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08002800: b           L_08002820
    // 0x08002804: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
        goto L_08002820;
    // 0x08002804: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
L_08002808:
    // 0x08002808: jalr        $t9
    // 0x0800280C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800280C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08002810: bne         $v0, $zero, L_08002834
    if (ctx->r2 != 0) {
        // 0x08002814: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002834;
    }
    // 0x08002814: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002818: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x0800281C: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
L_08002820:
    // 0x08002820: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002824: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002828: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2844) << 16);
    // 0x0800282C: jalr        $t9
    // 0x08002830: addiu       $a0, $a0, 0x2844
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2844));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002830: addiu       $a0, $a0, 0x2844
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2844));
    after_2:
L_08002834:
    // 0x08002834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800283C: jr          $ra
    // 0x08002840: nop

    TRACE_RETURN()
    return;
    // 0x08002840: nop

;}
RECOMP_FUNC void func_0800463C_6DE50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800463C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004640: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004648: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800464C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08004650: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08004654: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x08004658: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800465C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08004660: jalr        $t9
    // 0x08004664: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004664: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    after_0:
    // 0x08004668: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800466C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08004670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004674: jalr        $t9
    // 0x08004678: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004678: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x0800467C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x08004680: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x08004684: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x08004688: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x0800468C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x08004690: nop

    // 0x08004694: bnel        $v0, $at, L_08004708
    if (ctx->r2 != ctx->r1) {
        // 0x08004698: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_08004708;
    }
    goto skip_0;
    // 0x08004698: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    skip_0:
    // 0x0800469C: lbu         $t0, 0xEC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XEC);
    // 0x080046A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080046A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080046A8: bne         $t0, $at, L_080046E8
    if (ctx->r8 != ctx->r1) {
        // 0x080046AC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_080046E8;
    }
    // 0x080046AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080046B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080046B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080046B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080046BC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080046C0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x080046C4: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x080046C8: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x080046CC: jalr        $t9
    // 0x080046D0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080046D0: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x080046D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080046D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080046DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X4794) << 16);
    // 0x080046E0: jalr        $t9
    // 0x080046E4: addiu       $a0, $a0, 0x4794
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4794));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080046E4: addiu       $a0, $a0, 0x4794
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X4794));
    after_3:
L_080046E8:
    // 0x080046E8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080046EC: sb          $t1, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r9;
    // 0x080046F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x080046F4: lwc1        $f8, 0x28($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X28);
    // 0x080046F8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080046FC: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x08004700: nop

    // 0x08004704: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_08004708:
    // 0x08004708: bnel        $v0, $at, L_08004784
    if (ctx->r2 != ctx->r1) {
        // 0x0800470C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08004784;
    }
    goto skip_1;
    // 0x0800470C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08004710: lbu         $t4, 0xEC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XEC);
    // 0x08004714: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08004718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800471C: bne         $t4, $at, L_08004778
    if (ctx->r12 != ctx->r1) {
        // 0x08004720: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08004778;
    }
    // 0x08004720: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004724: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08004728: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x0800472C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08004730: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(27, 0X4794) << 16);
    // 0x08004734: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x08004738: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800473C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004740: addiu       $t6, $t6, 0x521C
    ctx->r14 = ADD32(ctx->r14, 0X521C);
    // 0x08004744: addiu       $t5, $t5, 0x4794
    ctx->r13 = ADD32(ctx->r13, (int16_t)RELOC_LO16(27, 0X4794));
    // 0x08004748: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x0800474C: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x08004750: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x08004754: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x08004758: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x0800475C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004760: jalr        $t9
    // 0x08004764: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004764: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_4:
    // 0x08004768: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x0800476C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08004770: jalr        $t9
    // 0x08004774: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004774: nop

    after_5:
L_08004778:
    // 0x08004778: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x0800477C: sb          $t7, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r15;
    // 0x08004780: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004784:
    // 0x08004784: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004788: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800478C: jr          $ra
    // 0x08004790: nop

    TRACE_RETURN()
    return;
    // 0x08004790: nop

;}
RECOMP_FUNC void func_08000EB4_6DAD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000EB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000EBC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000EC0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000EC4: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x08000EC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000ECC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000ED0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x08000ED4: bne         $t6, $zero, L_08000EE4
    if (ctx->r14 != 0) {
        // 0x08000ED8: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_08000EE4;
    }
    // 0x08000ED8: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x08000EDC: beql        $t7, $zero, L_08000F78
    if (ctx->r15 == 0) {
        // 0x08000EE0: lw          $v0, 0xE8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XE8);
            goto L_08000F78;
    }
    goto skip_0;
    // 0x08000EE0: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    skip_0:
L_08000EE4:
    // 0x08000EE4: lbu         $t8, 0xD0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD0);
    // 0x08000EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000EEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000EF0: addiu       $t9, $t8, -0x30
    ctx->r25 = ADD32(ctx->r24, -0X30);
    // 0x08000EF4: sb          $t9, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r25;
    // 0x08000EF8: andi        $a1, $t9, 0xFF
    ctx->r5 = ctx->r25 & 0XFF;
    // 0x08000EFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F00: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000F04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000F08: jalr        $t9
    // 0x08000F0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000F10: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x08000F14: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5258) << 16);
    // 0x08000F18: ldc1        $f0, 0x5258($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5258));
    // 0x08000F1C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000F20: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x08000F24: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08000F28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F2C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000F30: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000F34: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08000F38: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000F3C: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x08000F40: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000F44: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x08000F48: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000F4C: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x08000F50: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x08000F54: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000F58: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    // 0x08000F5C: lbu         $t0, 0xD0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD0);
    // 0x08000F60: slti        $at, $t0, 0x30
    ctx->r1 = SIGNED(ctx->r8) < 0X30 ? 1 : 0;
    // 0x08000F64: beql        $at, $zero, L_08000F78
    if (ctx->r1 == 0) {
        // 0x08000F68: lw          $v0, 0xE8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XE8);
            goto L_08000F78;
    }
    goto skip_1;
    // 0x08000F68: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    skip_1:
    // 0x08000F6C: jalr        $t9
    // 0x08000F70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F70: nop

    after_1:
    // 0x08000F74: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
L_08000F78:
    // 0x08000F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000F80: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x08000F84: bne         $t1, $zero, L_08000F94
    if (ctx->r9 != 0) {
        // 0x08000F88: andi        $t2, $v0, 0x8
        ctx->r10 = ctx->r2 & 0X8;
            goto L_08000F94;
    }
    // 0x08000F88: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
    // 0x08000F8C: beql        $t2, $zero, L_08001038
    if (ctx->r10 == 0) {
        // 0x08000F90: lhu         $t7, 0x16($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X16);
            goto L_08001038;
    }
    goto skip_2;
    // 0x08000F90: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
    skip_2:
L_08000F94:
    // 0x08000F94: lbu         $t3, 0xD0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD0);
    // 0x08000F98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000F9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FA0: addiu       $t4, $t3, -0x2
    ctx->r12 = ADD32(ctx->r11, -0X2);
    // 0x08000FA4: andi        $a1, $t4, 0xFF
    ctx->r5 = ctx->r12 & 0XFF;
    // 0x08000FA8: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x08000FAC: beq         $at, $zero, L_08000FC0
    if (ctx->r1 == 0) {
        // 0x08000FB0: sb          $t4, 0xD0($s0)
        MEM_B(0XD0, ctx->r16) = ctx->r12;
            goto L_08000FC0;
    }
    // 0x08000FB0: sb          $t4, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r12;
    // 0x08000FB4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08000FB8: sb          $t5, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r13;
    // 0x08000FBC: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
L_08000FC0:
    // 0x08000FC0: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000FC4: jalr        $t9
    // 0x08000FC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000FC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08000FCC: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x08000FD0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5260) << 16);
    // 0x08000FD4: ldc1        $f0, 0x5260($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(27, 0X5260));
    // 0x08000FD8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000FDC: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x08000FE0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x08000FE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FE8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000FEC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000FF0: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x08000FF4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000FF8: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x08000FFC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001000: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x08001004: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001008: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x0800100C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x08001010: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001014: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    // 0x08001018: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x0800101C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001020: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001024: beq         $v1, $zero, L_08001034
    if (ctx->r3 == 0) {
        // 0x08001028: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08001034;
    }
    // 0x08001028: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x0800102C: jalr        $t9
    // 0x08001030: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001030: nop

    after_3:
L_08001034:
    // 0x08001034: lhu         $t7, 0x16($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X16);
L_08001038:
    // 0x08001038: addiu       $t8, $t7, 0x20
    ctx->r24 = ADD32(ctx->r15, 0X20);
    // 0x0800103C: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x08001040: sh          $t0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r8;
    // 0x08001044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001048: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800104C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001050: jr          $ra
    // 0x08001054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08001054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000144_6DA014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000144: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x08000148: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800014C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000150: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000154: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x08000158: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x0800015C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000160: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000164: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000168: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x0800016C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000170: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x08000174: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x08000178: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x0800017C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000180: jalr        $t9
    // 0x08000184: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000184: nop

    after_0:
    // 0x08000188: lh          $t6, 0x58($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X58);
    // 0x0800018C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000190: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08000194: beq         $t6, $zero, L_080001AC
    if (ctx->r14 == 0) {
        // 0x08000198: lui         $a1, 0x4348
        ctx->r5 = S32(0X4348 << 16);
            goto L_080001AC;
    }
    // 0x08000198: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x0800019C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080001A0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x080001A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080001A8: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
L_080001AC:
    // 0x080001AC: jalr        $t9
    // 0x080001B0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001B0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x080001B4: beq         $v0, $zero, L_080001DC
    if (ctx->r2 == 0) {
        // 0x080001B8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_080001DC;
    }
    // 0x080001B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080001BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080001C0: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x080001C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1F0) << 16);
    // 0x080001D0: addiu       $a0, $a0, 0x1F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1F0));
    // 0x080001D4: jalr        $t9
    // 0x080001D8: swc1        $f4, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001D8: swc1        $f4, 0xE8($t7)
    MEM_W(0XE8, ctx->r15) = ctx->f4.u32l;
    after_2:
L_080001DC:
    // 0x080001DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080001E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080001E4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x080001E8: jr          $ra
    // 0x080001EC: nop

    TRACE_RETURN()
    return;
    // 0x080001EC: nop

;}
RECOMP_FUNC void func_08002EB8_6DCD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002EC0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002EC4: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x08002EC8: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x08002ECC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002ED0: beq         $v0, $at, L_08002EE0
    if (ctx->r2 == ctx->r1) {
        // 0x08002ED4: addiu       $t7, $v0, 0x20
        ctx->r15 = ADD32(ctx->r2, 0X20);
            goto L_08002EE0;
    }
    // 0x08002ED4: addiu       $t7, $v0, 0x20
    ctx->r15 = ADD32(ctx->r2, 0X20);
    // 0x08002ED8: b           L_08002EE4
    // 0x08002EDC: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
        goto L_08002EE4;
    // 0x08002EDC: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
L_08002EE0:
    // 0x08002EE0: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
L_08002EE4:
    // 0x08002EE4: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x08002EE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08002EEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08002EF0: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x08002EF4: bne         $t9, $zero, L_08002FA8
    if (ctx->r25 != 0) {
        // 0x08002EF8: ori         $a2, $a2, 0xAAAB
        ctx->r6 = ctx->r6 | 0XAAAB;
            goto L_08002FA8;
    }
    // 0x08002EF8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002EFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002F00: sh          $zero, 0x14($t0)
    MEM_H(0X14, ctx->r8) = 0;
    // 0x08002F04: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002F08: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002F0C: jalr        $t9
    // 0x08002F10: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F10: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x08002F14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F18: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002F1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002F20: jalr        $t9
    // 0x08002F24: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002F24: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x08002F28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002F2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002F30: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002F34: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002F38: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X3148) << 16);
    // 0x08002F3C: addiu       $a1, $a1, 0x3148
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X3148));
    // 0x08002F40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08002F44: jalr        $t9
    // 0x08002F48: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002F48: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x08002F4C: beq         $v0, $zero, L_08002F74
    if (ctx->r2 == 0) {
        // 0x08002F50: addiu       $t1, $zero, 0x24
        ctx->r9 = ADD32(0, 0X24);
            goto L_08002F74;
    }
    // 0x08002F50: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x08002F54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002F58: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08002F5C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002F60: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08002F64: jalr        $t9
    // 0x08002F68: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002F68: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_3:
    // 0x08002F6C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08002F70: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08002F74:
    // 0x08002F74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002F78: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002F7C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002F80: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002F84: addiu       $a0, $zero, 0x2A3
    ctx->r4 = ADD32(0, 0X2A3);
    // 0x08002F88: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08002F8C: jalr        $t9
    // 0x08002F90: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002F90: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_4:
    // 0x08002F94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F98: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F9C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2FB8) << 16);
    // 0x08002FA0: jalr        $t9
    // 0x08002FA4: addiu       $a0, $a0, 0x2FB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2FB8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002FA4: addiu       $a0, $a0, 0x2FB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2FB8));
    after_5:
L_08002FA8:
    // 0x08002FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002FAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002FB0: jr          $ra
    // 0x08002FB4: nop

    TRACE_RETURN()
    return;
    // 0x08002FB4: nop

;}
RECOMP_FUNC void func_0800097C_6DA84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800097C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000984: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000988: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800098C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08000990: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000994: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000998: bne         $v0, $zero, L_080009BC
    if (ctx->r2 != 0) {
        // 0x0800099C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080009BC;
    }
    // 0x0800099C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080009A0: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x080009A4: jalr        $t9
    // 0x080009A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080009AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080009B0: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x080009B4: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x080009B8: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
L_080009BC:
    // 0x080009BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080009C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080009C4: jr          $ra
    // 0x080009C8: nop

    TRACE_RETURN()
    return;
    // 0x080009C8: nop

;}
RECOMP_FUNC void func_08004980_6DE850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004984: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800498C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004990: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08004994: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004998: jalr        $t9
    // 0x0800499C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800499C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x080049A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080049A4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080049A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080049AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080049B0: jalr        $t9
    // 0x080049B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080049B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x080049B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080049BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080049C0: jr          $ra
    // 0x080049C4: nop

    TRACE_RETURN()
    return;
    // 0x080049C4: nop

;}
RECOMP_FUNC void func_08002274_6DC144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002274: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002278: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800227C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002280: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002284: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002288: lbu         $t6, 0xD8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD8);
    // 0x0800228C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002290: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002294: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08002298: beq         $t6, $zero, L_080022C0
    if (ctx->r14 == 0) {
        // 0x0800229C: swc1        $f0, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
            goto L_080022C0;
    }
    // 0x0800229C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x080022A0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080022A4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080022A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080022AC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080022B0: jalr        $t9
    // 0x080022B4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022B4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x080022B8: b           L_080022DC
    // 0x080022BC: nop

        goto L_080022DC;
    // 0x080022BC: nop

L_080022C0:
    // 0x080022C0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080022C4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080022C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080022CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080022D0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080022D4: jalr        $t9
    // 0x080022D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080022D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_1:
L_080022DC:
    // 0x080022DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080022E0: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080022E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080022E8: jalr        $t9
    // 0x080022EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080022EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x080022F0: lwc1        $f4, 0xD0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x080022F4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x080022F8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080022FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002300: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x08002304: lhu         $t8, -0x33D0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X33D0);
    // 0x08002308: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x0800230C: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x08002310: beql        $t0, $zero, L_08002330
    if (ctx->r8 == 0) {
        // 0x08002314: sh          $zero, 0xDA($s0)
        MEM_H(0XDA, ctx->r16) = 0;
            goto L_08002330;
    }
    goto skip_0;
    // 0x08002314: sh          $zero, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = 0;
    skip_0:
    // 0x08002318: jalr        $t9
    // 0x0800231C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800231C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x08002320: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x08002324: b           L_08002330
    // 0x08002328: sh          $t1, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r9;
        goto L_08002330;
    // 0x08002328: sh          $t1, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r9;
    // 0x0800232C: sh          $zero, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = 0;
L_08002330:
    // 0x08002330: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002334: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002338: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X235C) << 16);
    // 0x0800233C: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08002340: jalr        $t9
    // 0x08002344: addiu       $a0, $a0, 0x235C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X235C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002344: addiu       $a0, $a0, 0x235C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X235C));
    after_4:
    // 0x08002348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800234C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002354: jr          $ra
    // 0x08002358: nop

    TRACE_RETURN()
    return;
    // 0x08002358: nop

;}
RECOMP_FUNC void func_0800162C_6DB4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800162C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001630: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001634: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001638: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800163C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001640: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001644: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08001648: lw          $a2, 0xE0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XE0);
    // 0x0800164C: lw          $a1, 0xDC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XDC);
    // 0x08001650: jalr        $t9
    // 0x08001654: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001654: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x08001658: bne         $v0, $zero, L_08001680
    if (ctx->r2 != 0) {
        // 0x0800165C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(27, 0X14A0) << 16);
            goto L_08001680;
    }
    // 0x0800165C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X14A0) << 16);
    // 0x08001660: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001664: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001668: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800166C: addiu       $a0, $a0, 0x14A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X14A0));
    // 0x08001670: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08001674: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08001678: jalr        $t9
    // 0x0800167C: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800167C: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_1:
L_08001680:
    // 0x08001680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800168C: jr          $ra
    // 0x08001690: nop

    TRACE_RETURN()
    return;
    // 0x08001690: nop

;}
RECOMP_FUNC void func_08001F8C_6DBE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001F94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001F98: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001F9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FA0: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08001FA4: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08001FA8: bnel        $t7, $zero, L_08001FD0
    if (ctx->r15 != 0) {
        // 0x08001FAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001FD0;
    }
    goto skip_0;
    // 0x08001FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001FB0: jalr        $t9
    // 0x08001FB4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001FB4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08001FB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FC0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X1FDC) << 16);
    // 0x08001FC4: jalr        $t9
    // 0x08001FC8: addiu       $a0, $a0, 0x1FDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1FDC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001FC8: addiu       $a0, $a0, 0x1FDC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X1FDC));
    after_1:
    // 0x08001FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001FD0:
    // 0x08001FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001FD4: jr          $ra
    // 0x08001FD8: nop

    TRACE_RETURN()
    return;
    // 0x08001FD8: nop

;}
RECOMP_FUNC void func_08001694_6DB564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800169C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080016A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080016A4: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x080016A8: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x080016AC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x080016B0: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x080016B4: sb          $t9, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r25;
    // 0x080016B8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080016BC: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(27, 0X1C00) << 16);
    // 0x080016C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016C4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x080016C8: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x080016CC: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x080016D0: addiu       $t2, $t2, 0x1C00
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(27, 0X1C00));
    // 0x080016D4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x080016D8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x080016DC: addiu       $t5, $zero, 0x154
    ctx->r13 = ADD32(0, 0X154);
    // 0x080016E0: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x080016E4: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080016E8: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x080016EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080016F0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080016F4: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x080016F8: sb          $t0, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r8;
    // 0x080016FC: sh          $t1, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r9;
    // 0x08001700: sw          $t2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r10;
    // 0x08001704: sb          $t3, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r11;
    // 0x08001708: sh          $t4, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r12;
    // 0x0800170C: sh          $t5, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r13;
    // 0x08001710: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x08001714: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x08001718: sb          $t6, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r14;
    // 0x0800171C: sb          $v0, 0x99($a0)
    MEM_B(0X99, ctx->r4) = ctx->r2;
    // 0x08001720: sb          $v0, 0x9A($a0)
    MEM_B(0X9A, ctx->r4) = ctx->r2;
    // 0x08001724: jalr        $t9
    // 0x08001728: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001728: sb          $zero, 0x9B($a0)
    MEM_B(0X9B, ctx->r4) = 0;
    after_0:
    // 0x0800172C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001730: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001738: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0800173C: jalr        $t9
    // 0x08001740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08001744: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001748: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800174C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001754: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001758: jalr        $t9
    // 0x0800175C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800175C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08001760: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001764: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08001768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800176C: jalr        $t9
    // 0x08001770: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001770: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08001774: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08001778: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5270) << 16);
    // 0x0800177C: lwc1        $f0, 0x5270($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5270));
    // 0x08001780: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08001784: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001788: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x0800178C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08001790: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x08001794: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08001798: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800179C: sh          $t8, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = ctx->r24;
    // 0x080017A0: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080017A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X17DC) << 16);
    // 0x080017A8: addiu       $a0, $a0, 0x17DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X17DC));
    // 0x080017AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080017B0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x080017B4: nop

    // 0x080017B8: sh          $t1, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = ctx->r9;
    // 0x080017BC: lhu         $t2, 0x16($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X16);
    // 0x080017C0: jalr        $t9
    // 0x080017C4: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080017C4: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    after_4:
    // 0x080017C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080017CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080017D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x080017D4: jr          $ra
    // 0x080017D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x080017D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080041E4_6DE0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080041E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080041E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080041EC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x080041F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080041F4: lwc1        $f0, 0x28($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X28);
    // 0x080041F8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080041FC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x08004200: nop

    // 0x08004204: bc1fl       L_08004258
    if (!c1cs) {
        // 0x08004208: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_08004258;
    }
    goto skip_0;
    // 0x08004208: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_0:
    // 0x0800420C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004210: nop

    // 0x08004214: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x08004218: nop

    // 0x0800421C: bc1fl       L_08004258
    if (!c1cs) {
        // 0x08004220: lbu         $t8, 0x7C($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X7C);
            goto L_08004258;
    }
    goto skip_1;
    // 0x08004220: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
    skip_1:
    // 0x08004224: lhu         $v0, 0x7E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X7E);
    // 0x08004228: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x0800422C: bgez        $v0, L_0800423C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08004230: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_0800423C;
    }
    // 0x08004230: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x08004234: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x08004238: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_0800423C:
    // 0x0800423C: blez        $t6, L_0800424C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x08004240: nop
    
            goto L_0800424C;
    }
    // 0x08004240: nop

    // 0x08004244: b           L_0800428C
    // 0x08004248: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
        goto L_0800428C;
    // 0x08004248: sh          $t6, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r14;
L_0800424C:
    // 0x0800424C: b           L_0800428C
    // 0x08004250: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
        goto L_0800428C;
    // 0x08004250: sh          $t7, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r15;
    // 0x08004254: lbu         $t8, 0x7C($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X7C);
L_08004258:
    // 0x08004258: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x0800425C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004260: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x08004264: beq         $t9, $zero, L_0800428C
    if (ctx->r25 == 0) {
        // 0x08004268: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_0800428C;
    }
    // 0x08004268: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800426C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004270: jalr        $t9
    // 0x08004274: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004274: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x08004278: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800427C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004280: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X429C) << 16);
    // 0x08004284: jalr        $t9
    // 0x08004288: addiu       $a0, $a0, 0x429C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X429C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004288: addiu       $a0, $a0, 0x429C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X429C));
    after_1:
L_0800428C:
    // 0x0800428C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004294: jr          $ra
    // 0x08004298: nop

    TRACE_RETURN()
    return;
    // 0x08004298: nop

;}
RECOMP_FUNC void func_08003364_6DD234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003364: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003368: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X3C40) << 16);
    // 0x0800336C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003370: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003374: addiu       $t9, $t9, 0x3C40
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X3C40));
    // 0x08003378: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800337C: jalr        $t9
    // 0x08003380: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003380: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003384: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003388: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800338C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003390: jalr        $t9
    // 0x08003394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08003398: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x0800339C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080033A0: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x080033A4: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x080033A8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x080033AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080033B0: jalr        $t9
    // 0x080033B4: lhu         $a1, 0x16($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080033B4: lhu         $a1, 0x16($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X16);
    after_2:
    // 0x080033B8: lw          $t7, 0xD0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD0);
    // 0x080033BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x080033C0: beq         $t7, $zero, L_08003448
    if (ctx->r15 == 0) {
        // 0x080033C4: nop
    
            goto L_08003448;
    }
    // 0x080033C4: nop

    // 0x080033C8: lh          $t0, 0xDE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XDE);
    // 0x080033CC: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x080033D0: lwc1        $f6, 0x10($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X10);
    // 0x080033D4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x080033D8: lh          $t1, 0xDC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XDC);
    // 0x080033DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080033E0: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x080033E4: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x080033E8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080033EC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x080033F0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080033F4: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080033F8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080033FC: sub.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x08003400: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08003404: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08003408: sub.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x0800340C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08003410: jalr        $t9
    // 0x08003414: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003414: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    after_3:
    // 0x08003418: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x0800341C: lw          $t4, 0xD0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD0);
    // 0x08003420: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x08003424: nop

    // 0x08003428: sltu        $at, $t3, $t4
    ctx->r1 = ctx->r11 < ctx->r12 ? 1 : 0;
    // 0x0800342C: bne         $at, $zero, L_08003448
    if (ctx->r1 != 0) {
        // 0x08003430: nop
    
            goto L_08003448;
    }
    // 0x08003430: nop

    // 0x08003434: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003438: nop

    // 0x0800343C: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08003440: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08003444: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
L_08003448:
    // 0x08003448: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800344C: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08003450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003454: jalr        $t9
    // 0x08003458: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003458: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_4:
    // 0x0800345C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003460: beq         $v0, $zero, L_080034F8
    if (ctx->r2 == 0) {
        // 0x08003464: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080034F8;
    }
    // 0x08003464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003468: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x0800346C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X4DA8) << 16);
    // 0x08003470: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x08003474: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08003478: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x0800347C: addiu       $t9, $t9, 0x4DA8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X4DA8));
    // 0x08003480: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x08003484: jalr        $t9
    // 0x08003488: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003488: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    after_5:
    // 0x0800348C: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x08003490: bne         $at, $zero, L_080034A0
    if (ctx->r1 != 0) {
        // 0x08003494: andi        $t5, $v0, 0xFFFF
        ctx->r13 = ctx->r2 & 0XFFFF;
            goto L_080034A0;
    }
    // 0x08003494: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x08003498: slti        $at, $t5, 0x300
    ctx->r1 = SIGNED(ctx->r13) < 0X300 ? 1 : 0;
    // 0x0800349C: bne         $at, $zero, L_080034F8
    if (ctx->r1 != 0) {
        // 0x080034A0: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_080034F8;
    }
L_080034A0:
    // 0x080034A0: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x080034A4: slti        $at, $v1, 0x61
    ctx->r1 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
    // 0x080034A8: bne         $at, $zero, L_080034B8
    if (ctx->r1 != 0) {
        // 0x080034AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080034B8;
    }
    // 0x080034AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080034B0: slti        $at, $v1, 0x3A0
    ctx->r1 = SIGNED(ctx->r3) < 0X3A0 ? 1 : 0;
    // 0x080034B4: bne         $at, $zero, L_080034F8
    if (ctx->r1 != 0) {
        // 0x080034B8: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080034F8;
    }
L_080034B8:
    // 0x080034B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080034BC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080034C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080034C4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080034C8: jalr        $t9
    // 0x080034CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080034CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x080034D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080034D4: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080034D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080034DC: jalr        $t9
    // 0x080034E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080034E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x080034E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080034E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080034EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X350C) << 16);
    // 0x080034F0: jalr        $t9
    // 0x080034F4: addiu       $a0, $a0, 0x350C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X350C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080034F4: addiu       $a0, $a0, 0x350C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X350C));
    after_8:
L_080034F8:
    // 0x080034F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080034FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003500: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003504: jr          $ra
    // 0x08003508: nop

    TRACE_RETURN()
    return;
    // 0x08003508: nop

;}
RECOMP_FUNC void func_08003C40_6DDB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003C44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003C4C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003C50: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08003C54: jalr        $t9
    // 0x08003C58: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C58: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x08003C5C: bne         $v0, $zero, L_08003CB0
    if (ctx->r2 != 0) {
        // 0x08003C60: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08003CB0;
    }
    // 0x08003C60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003C64: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003C68: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003C6C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X39D8) << 16);
    // 0x08003C70: addiu       $a1, $a1, 0x39D8
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X39D8));
    // 0x08003C74: jalr        $t9
    // 0x08003C78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003C78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08003C7C: beq         $v0, $zero, L_08003CB0
    if (ctx->r2 == 0) {
        // 0x08003C80: addiu       $t6, $zero, 0x24
        ctx->r14 = ADD32(0, 0X24);
            goto L_08003CB0;
    }
    // 0x08003C80: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x08003C84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003C88: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08003C8C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003C90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08003C94: jalr        $t9
    // 0x08003C98: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003C98: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_2:
    // 0x08003C9C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08003CA0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08003CA4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08003CA8: lw          $t8, 0x64($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X64);
    // 0x08003CAC: sw          $t8, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r24;
L_08003CB0:
    // 0x08003CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003CB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003CB8: jr          $ra
    // 0x08003CBC: nop

    TRACE_RETURN()
    return;
    // 0x08003CBC: nop

;}
RECOMP_FUNC void func_08002FB8_6DCE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002FB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002FBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002FC0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002FC4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08002FC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002FCC: lwc1        $f4, 0xE4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x08002FD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002FD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002FD8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002FDC: sb          $t6, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r14;
    // 0x08002FE0: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002FE4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002FE8: swc1        $f8, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f8.u32l;
    // 0x08002FEC: lwc1        $f10, 0xE4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x08002FF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002FF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002FF8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x08002FFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003000: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08003004: jalr        $t9
    // 0x08003008: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003008: nop

    after_0:
    // 0x0800300C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08003010: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003014: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08003018: lbu         $t0, 0x7C($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X7C);
    // 0x0800301C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003020: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x08003024: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x08003028: beq         $t1, $zero, L_08003074
    if (ctx->r9 == 0) {
        // 0x0800302C: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_08003074;
    }
    // 0x0800302C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x08003030: lw          $t2, 0x68($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X68);
    // 0x08003034: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003038: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800303C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x08003040: sw          $t3, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r11;
    // 0x08003044: jalr        $t9
    // 0x08003048: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003048: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x0800304C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003050: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08003054: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003058: jalr        $t9
    // 0x0800305C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800305C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08003060: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003064: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003068: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3084) << 16);
    // 0x0800306C: jalr        $t9
    // 0x08003070: addiu       $a0, $a0, 0x3084
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3084));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003070: addiu       $a0, $a0, 0x3084
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3084));
    after_3:
L_08003074:
    // 0x08003074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800307C: jr          $ra
    // 0x08003080: nop

    TRACE_RETURN()
    return;
    // 0x08003080: nop

;}
RECOMP_FUNC void func_08004400_6DE2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004400: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004404: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004408: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x0800440C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08004410: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(27, 0X4B18) << 16);
    // 0x08004414: addiu       $a1, $a1, 0x4B18
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(27, 0X4B18));
    // 0x08004418: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800441C: beq         $t7, $zero, L_080044A8
    if (ctx->r15 == 0) {
        // 0x08004420: addiu       $a2, $zero, 0xA
        ctx->r6 = ADD32(0, 0XA);
            goto L_080044A8;
    }
    // 0x08004420: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08004424: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08004428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800442C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08004430: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004434: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004438: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x0800443C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08004440: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08004444: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08004448: jalr        $t9
    // 0x0800444C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800444C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x08004450: beq         $v0, $zero, L_08004478
    if (ctx->r2 == 0) {
        // 0x08004454: addiu       $t8, $zero, 0x24
        ctx->r24 = ADD32(0, 0X24);
            goto L_08004478;
    }
    // 0x08004454: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x08004458: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800445C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08004460: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004464: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08004468: jalr        $t9
    // 0x0800446C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800446C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_1:
    // 0x08004470: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08004474: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08004478:
    // 0x08004478: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800447C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004480: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08004484: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08004488: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800448C: jalr        $t9
    // 0x08004490: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004490: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_2:
    // 0x08004494: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004498: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800449C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X44B8) << 16);
    // 0x080044A0: jalr        $t9
    // 0x080044A4: addiu       $a0, $a0, 0x44B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X44B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080044A4: addiu       $a0, $a0, 0x44B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X44B8));
    after_3:
L_080044A8:
    // 0x080044A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080044AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080044B0: jr          $ra
    // 0x080044B4: nop

    TRACE_RETURN()
    return;
    // 0x080044B4: nop

;}
RECOMP_FUNC void func_08004364_6DE234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004368: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800436C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004370: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004374: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004378: sb          $zero, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = 0;
    // 0x0800437C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004380: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08004384: jalr        $t9
    // 0x08004388: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004388: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x0800438C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004390: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004394: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X43B0) << 16);
    // 0x08004398: jalr        $t9
    // 0x0800439C: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X43B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800439C: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X43B0));
    after_1:
    // 0x080043A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080043A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080043A8: jr          $ra
    // 0x080043AC: nop

    TRACE_RETURN()
    return;
    // 0x080043AC: nop

;}
RECOMP_FUNC void func_08000000_6D9ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x08000004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800000C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000010: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08000014: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800001C: addiu       $t9, $t9, 0x2850
    ctx->r25 = ADD32(ctx->r25, 0X2850);
    // 0x08000020: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x08000024: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x08000028: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x0800002C: jalr        $t9
    // 0x08000030: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000030: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    after_0:
    // 0x08000034: lh          $t6, 0x60($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X60);
    // 0x08000038: lui         $t7, 0x2A0
    ctx->r15 = S32(0X2A0 << 16);
    // 0x0800003C: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08000040: beq         $t6, $zero, L_08000058
    if (ctx->r14 == 0) {
        // 0x08000044: addiu       $t8, $zero, 0x1E0
        ctx->r24 = ADD32(0, 0X1E0);
            goto L_08000058;
    }
    // 0x08000044: addiu       $t8, $zero, 0x1E0
    ctx->r24 = ADD32(0, 0X1E0);
    // 0x08000048: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x0800004C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08000050: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000054: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
L_08000058:
    // 0x08000058: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800005C: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000060: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000064: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x08000068: jalr        $t9
    // 0x0800006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08000070: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000074: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000078: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800007C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000080: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    // 0x08000084: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x08000088: jalr        $t9
    // 0x0800008C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800008C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08000090: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000094: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800009C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000A0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080000A4: jalr        $t9
    // 0x080000A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080000AC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X5200) << 16);
    // 0x080000B0: lwc1        $f0, 0x5200($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X5200));
    // 0x080000B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x080000B8: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x080000BC: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x080000C0: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x080000C4: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x080000C8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x080000CC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x080000D0: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x080000D4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x080000D8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x080000DC: addiu       $t6, $zero, -0x3
    ctx->r14 = ADD32(0, -0X3);
    // 0x080000E0: sh          $t0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r8;
    // 0x080000E4: sh          $t1, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r9;
    // 0x080000E8: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x080000EC: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x080000F0: sh          $t3, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r11;
    // 0x080000F4: sh          $t4, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r12;
    // 0x080000F8: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x080000FC: sb          $t5, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r13;
    // 0x08000100: sb          $v0, 0x99($s0)
    MEM_B(0X99, ctx->r16) = ctx->r2;
    // 0x08000104: sb          $v0, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = ctx->r2;
    // 0x08000108: sb          $t6, 0x9B($s0)
    MEM_B(0X9B, ctx->r16) = ctx->r14;
    // 0x0800010C: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08000110: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000114: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000118: swc1        $f10, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f10.u32l;
    // 0x0800011C: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08000120: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X144) << 16);
    // 0x08000124: addiu       $a0, $a0, 0x144
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X144));
    // 0x08000128: jalr        $t9
    // 0x0800012C: swc1        $f16, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800012C: swc1        $f16, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f16.u32l;
    after_4:
    // 0x08000130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000134: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000138: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x0800013C: jr          $ra
    // 0x08000140: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08000140: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08004C48_6DEB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004C48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004C50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004C54: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08004C58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004C5C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08004C60: addiu       $t7, $t6, 0x100
    ctx->r15 = ADD32(ctx->r14, 0X100);
    // 0x08004C64: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08004C68: sh          $t8, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r24;
    // 0x08004C6C: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08004C70: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08004C74: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08004C78: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x08004C7C: beql        $t9, $zero, L_08004CF8
    if (ctx->r25 == 0) {
        // 0x08004C80: lbu         $t3, 0xED($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XED);
            goto L_08004CF8;
    }
    goto skip_0;
    // 0x08004C80: lbu         $t3, 0xED($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XED);
    skip_0:
    // 0x08004C84: lbu         $v0, 0x13B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X13B);
    // 0x08004C88: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004C8C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08004C90: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x08004C94: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x08004C98: beq         $v1, $zero, L_08004CC4
    if (ctx->r3 == 0) {
        // 0x08004C9C: sb          $t0, 0x13B($a0)
        MEM_B(0X13B, ctx->r4) = ctx->r8;
            goto L_08004CC4;
    }
    // 0x08004C9C: sb          $t0, 0x13B($a0)
    MEM_B(0X13B, ctx->r4) = ctx->r8;
    // 0x08004CA0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004CA4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08004CA8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004CAC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08004CB0: addiu       $a0, $zero, 0x266
    ctx->r4 = ADD32(0, 0X266);
    // 0x08004CB4: jalr        $t9
    // 0x08004CB8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004CB8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x08004CBC: b           L_08004CDC
    // 0x08004CC0: lbu         $t1, 0xED($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XED);
        goto L_08004CDC;
    // 0x08004CC0: lbu         $t1, 0xED($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XED);
L_08004CC4:
    // 0x08004CC4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004CC8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08004CCC: addiu       $a0, $zero, 0x267
    ctx->r4 = ADD32(0, 0X267);
    // 0x08004CD0: jalr        $t9
    // 0x08004CD4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004CD4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08004CD8: lbu         $t1, 0xED($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XED);
L_08004CDC:
    // 0x08004CDC: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08004CE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004CE4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08004CE8: sb          $t2, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r10;
    // 0x08004CEC: b           L_08004D94
    // 0x08004CF0: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
        goto L_08004D94;
    // 0x08004CF0: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x08004CF4: lbu         $t3, 0xED($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XED);
L_08004CF8:
    // 0x08004CF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08004CFC: andi        $t4, $v0, 0x2000
    ctx->r12 = ctx->r2 & 0X2000;
    // 0x08004D00: bne         $t3, $at, L_08004D24
    if (ctx->r11 != ctx->r1) {
        // 0x08004D04: nop
    
            goto L_08004D24;
    }
    // 0x08004D04: nop

    // 0x08004D08: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08004D0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08004D10: nop

    // 0x08004D14: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08004D18: nop

    // 0x08004D1C: bc1t        L_08004D30
    if (c1cs) {
        // 0x08004D20: nop
    
            goto L_08004D30;
    }
    // 0x08004D20: nop

L_08004D24:
    // 0x08004D24: bne         $t4, $zero, L_08004D30
    if (ctx->r12 != 0) {
        // 0x08004D28: andi        $t5, $v0, 0x200
        ctx->r13 = ctx->r2 & 0X200;
            goto L_08004D30;
    }
    // 0x08004D28: andi        $t5, $v0, 0x200
    ctx->r13 = ctx->r2 & 0X200;
    // 0x08004D2C: beq         $t5, $zero, L_08004D94
    if (ctx->r13 == 0) {
        // 0x08004D30: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08004D94;
    }
L_08004D30:
    // 0x08004D30: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004D34: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004D38: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08004D3C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08004D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004D44: jalr        $t9
    // 0x08004D48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004D48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x08004D4C: beq         $v0, $zero, L_08004D84
    if (ctx->r2 == 0) {
        // 0x08004D50: addiu       $t6, $zero, 0x24
        ctx->r14 = ADD32(0, 0X24);
            goto L_08004D84;
    }
    // 0x08004D50: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x08004D54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004D58: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08004D5C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004D60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08004D64: jalr        $t9
    // 0x08004D68: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004D68: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_3:
    // 0x08004D6C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x08004D70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004D74: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08004D78: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08004D7C: jalr        $t9
    // 0x08004D80: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004D80: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    after_4:
L_08004D84:
    // 0x08004D84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004D88: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004D8C: jalr        $t9
    // 0x08004D90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004D90: nop

    after_5:
L_08004D94:
    // 0x08004D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004D98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004DA0: jr          $ra
    // 0x08004DA4: nop

    TRACE_RETURN()
    return;
    // 0x08004DA4: nop

;}
RECOMP_FUNC void func_08002CD8_6DCBA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002CDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002CE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002CE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002CE8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002CEC: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x08002CF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002CF4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002CF8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002CFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002D00: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08002D04: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002D08: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x08002D0C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002D10: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08002D14: jalr        $t9
    // 0x08002D18: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D18: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x08002D1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D20: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D28: jalr        $t9
    // 0x08002D2C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D2C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x08002D30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D34: addiu       $t9, $t9, -0x4B04
    ctx->r25 = ADD32(ctx->r25, -0X4B04);
    // 0x08002D38: jalr        $t9
    // 0x08002D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08002D40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D44: addiu       $t9, $t9, -0x54E8
    ctx->r25 = ADD32(ctx->r25, -0X54E8);
    // 0x08002D48: jalr        $t9
    // 0x08002D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08002D50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2D78) << 16);
    // 0x08002D5C: jalr        $t9
    // 0x08002D60: addiu       $a0, $a0, 0x2D78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2D78));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002D60: addiu       $a0, $a0, 0x2D78
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2D78));
    after_4:
    // 0x08002D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002D68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002D70: jr          $ra
    // 0x08002D74: nop

    TRACE_RETURN()
    return;
    // 0x08002D74: nop

;}
RECOMP_FUNC void func_080037A4_6DD674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080037A8: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(27, 0X3C40) << 16);
    // 0x080037AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080037B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080037B4: addiu       $t9, $t9, 0x3C40
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(27, 0X3C40));
    // 0x080037B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080037BC: jalr        $t9
    // 0x080037C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080037C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080037C4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x080037C8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080037CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080037D0: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x080037D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080037D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080037DC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x080037E0: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080037E4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080037E8: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    // 0x080037EC: bc1fl       L_08003804
    if (!c1cs) {
        // 0x080037F0: lbu         $t6, 0x7C($a2)
        ctx->r14 = MEM_BU(ctx->r6, 0X7C);
            goto L_08003804;
    }
    goto skip_0;
    // 0x080037F0: lbu         $t6, 0x7C($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X7C);
    skip_0:
    // 0x080037F4: jalr        $t9
    // 0x080037F8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080037F8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x080037FC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08003800: lbu         $t6, 0x7C($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X7C);
L_08003804:
    // 0x08003804: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003808: beql        $t7, $zero, L_0800389C
    if (ctx->r15 == 0) {
        // 0x0800380C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800389C;
    }
    goto skip_1;
    // 0x0800380C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08003810: lbu         $t8, 0x8D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8D);
    // 0x08003814: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003818: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x0800381C: bne         $t8, $zero, L_0800387C
    if (ctx->r24 != 0) {
        // 0x08003820: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800387C;
    }
    // 0x08003820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003824: jalr        $t9
    // 0x08003828: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003828: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x0800382C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003830: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003834: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08003838: addiu       $a1, $a1, 0x41AC
    ctx->r5 = ADD32(ctx->r5, 0X41AC);
    // 0x0800383C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003840: jalr        $t9
    // 0x08003844: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003844: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_3:
    // 0x08003848: beq         $v0, $zero, L_08003870
    if (ctx->r2 == 0) {
        // 0x0800384C: addiu       $t0, $zero, 0x24
        ctx->r8 = ADD32(0, 0X24);
            goto L_08003870;
    }
    // 0x0800384C: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x08003850: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003854: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x08003858: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800385C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08003860: jalr        $t9
    // 0x08003864: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003864: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_4:
    // 0x08003868: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800386C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08003870:
    // 0x08003870: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    // 0x08003874: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x08003878: sw          $t2, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r10;
L_0800387C:
    // 0x0800387C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003880: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x08003884: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003888: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X38AC) << 16);
    // 0x0800388C: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08003890: jalr        $t9
    // 0x08003894: addiu       $a0, $a0, 0x38AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X38AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003894: addiu       $a0, $a0, 0x38AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X38AC));
    after_5:
    // 0x08003898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800389C:
    // 0x0800389C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080038A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080038A4: jr          $ra
    // 0x080038A8: nop

    TRACE_RETURN()
    return;
    // 0x080038A8: nop

;}
RECOMP_FUNC void func_08003CC0_6DDB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003CC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003CC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003CCC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003CD0: addiu       $t9, $zero, 0x21
    ctx->r25 = ADD32(0, 0X21);
    // 0x08003CD4: sh          $t9, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r25;
    // 0x08003CD8: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x08003CDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003CE0: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x08003CE4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08003CE8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08003CEC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003CF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003CF4: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003CF8: sb          $t7, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r15;
    // 0x08003CFC: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    // 0x08003D00: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x08003D04: addiu       $a2, $zero, 0xDC
    ctx->r6 = ADD32(0, 0XDC);
    // 0x08003D08: jalr        $t9
    // 0x08003D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003D10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D14: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08003D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003D1C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x08003D20: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    // 0x08003D24: jalr        $t9
    // 0x08003D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08003D2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D30: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08003D34: jalr        $t9
    // 0x08003D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003D3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D40: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08003D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003D48: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x08003D4C: jalr        $t9
    // 0x08003D50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003D50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08003D54: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(27, 0X52C0) << 16);
    // 0x08003D58: lwc1        $f0, 0x52C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(27, 0X52C0));
    // 0x08003D5C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08003D60: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003D64: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003D68: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08003D6C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08003D70: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08003D74: lw          $t0, 0xD0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD0);
    // 0x08003D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003D80: bne         $t0, $zero, L_08003DC0
    if (ctx->r8 != 0) {
        // 0x08003D84: lui         $a2, 0x3F00
        ctx->r6 = S32(0X3F00 << 16);
            goto L_08003DC0;
    }
    // 0x08003D84: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003D88: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003D8C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003D94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003D98: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08003D9C: jalr        $t9
    // 0x08003DA0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003DA0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_4:
    // 0x08003DA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003DA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003DAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3DFC) << 16);
    // 0x08003DB0: jalr        $t9
    // 0x08003DB4: addiu       $a0, $a0, 0x3DFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3DFC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003DB4: addiu       $a0, $a0, 0x3DFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3DFC));
    after_5:
    // 0x08003DB8: b           L_08003DEC
    // 0x08003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003DEC;
    // 0x08003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003DC0:
    // 0x08003DC0: jalr        $t9
    // 0x08003DC4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003DC4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_6:
    // 0x08003DC8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x08003DCC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003DD0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003DD4: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x08003DD8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X401C) << 16);
    // 0x08003DDC: addiu       $a0, $a0, 0x401C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X401C));
    // 0x08003DE0: jalr        $t9
    // 0x08003DE4: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003DE4: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    after_7:
    // 0x08003DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003DEC:
    // 0x08003DEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003DF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003DF4: jr          $ra
    // 0x08003DF8: nop

    TRACE_RETURN()
    return;
    // 0x08003DF8: nop

;}
RECOMP_FUNC void func_08003FCC_6DDE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003FD4: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003FDC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08003FE0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003FE4: beq         $t7, $zero, L_0800400C
    if (ctx->r15 == 0) {
        // 0x08003FE8: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_0800400C;
    }
    // 0x08003FE8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003FEC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003FF0: jalr        $t9
    // 0x08003FF4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003FF4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x08003FF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003FFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004000: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X3DFC) << 16);
    // 0x08004004: jalr        $t9
    // 0x08004008: addiu       $a0, $a0, 0x3DFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3DFC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004008: addiu       $a0, $a0, 0x3DFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X3DFC));
    after_1:
L_0800400C:
    // 0x0800400C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004014: jr          $ra
    // 0x08004018: nop

    TRACE_RETURN()
    return;
    // 0x08004018: nop

;}
RECOMP_FUNC void func_080030F0_6DCFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080030F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080030F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080030FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003100: addiu       $t9, $t9, -0x44FC
    ctx->r25 = ADD32(ctx->r25, -0X44FC);
    // 0x08003104: lw          $a2, 0xE0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XE0);
    // 0x08003108: lw          $a1, 0xDC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XDC);
    // 0x0800310C: lui         $a3, 0x3FAC
    ctx->r7 = S32(0X3FAC << 16);
    // 0x08003110: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x08003114: jalr        $t9
    // 0x08003118: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003118: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800311C: bne         $v0, $zero, L_08003138
    if (ctx->r2 != 0) {
        // 0x08003120: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08003138;
    }
    // 0x08003120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003124: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003128: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x0800312C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003130: jalr        $t9
    // 0x08003134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08003138:
    // 0x08003138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800313C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003140: jr          $ra
    // 0x08003144: nop

    TRACE_RETURN()
    return;
    // 0x08003144: nop

;}
RECOMP_FUNC void func_08003230_6DD100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003230: jr          $ra
    // 0x08003234: nop

    TRACE_RETURN()
    return;
    // 0x08003234: nop

;}
RECOMP_FUNC void func_08004DA8_6DEC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004DA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004DB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08004DB4: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x08004DB8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08004DBC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x08004DC0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08004DC4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004DC8: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08004DCC: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08004DD0: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08004DD4: sub.s       $f12, $f18, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x08004DD8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08004DDC: jalr        $t9
    // 0x08004DE0: sub.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f8.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004DE0: sub.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f8.fl;
    after_0:
    // 0x08004DE4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08004DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004DEC: or          $t7, $v0, $zero
    ctx->r15 = ctx->r2 | 0;
    // 0x08004DF0: lhu         $t8, 0x16($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X16);
    // 0x08004DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004DF8: subu        $t0, $t7, $t8
    ctx->r8 = SUB32(ctx->r15, ctx->r24);
    // 0x08004DFC: jr          $ra
    // 0x08004E00: andi        $v0, $t0, 0x3FF
    ctx->r2 = ctx->r8 & 0X3FF;
    TRACE_RETURN()
    return;
    // 0x08004E00: andi        $v0, $t0, 0x3FF
    ctx->r2 = ctx->r8 & 0X3FF;
;}
RECOMP_FUNC void func_08001FDC_6DBEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001FE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001FE8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001FEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FF0: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08001FF4: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08001FF8: bne         $t7, $zero, L_08002060
    if (ctx->r15 != 0) {
        // 0x08001FFC: lui         $a1, 0x4000
        ctx->r5 = S32(0X4000 << 16);
            goto L_08002060;
    }
    // 0x08001FFC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x08002000: jalr        $t9
    // 0x08002004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002008: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800200C: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08002010: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08002014: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08002018: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800201C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002020: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08002024: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08002028: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800202C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x08002030: jalr        $t9
    // 0x08002034: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002034: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    after_1:
    // 0x08002038: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800203C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002044: jalr        $t9
    // 0x08002048: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002048: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x0800204C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002050: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002054: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(27, 0X2070) << 16);
    // 0x08002058: jalr        $t9
    // 0x0800205C: addiu       $a0, $a0, 0x2070
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2070));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800205C: addiu       $a0, $a0, 0x2070
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(27, 0X2070));
    after_3:
L_08002060:
    // 0x08002060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002068: jr          $ra
    // 0x0800206C: nop

    TRACE_RETURN()
    return;
    // 0x0800206C: nop

;}
