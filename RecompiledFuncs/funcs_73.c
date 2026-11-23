#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801FD500_6288E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FD504: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801FD508: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801FD50C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FD510: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801FD514: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FD518: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FD51C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801FD520: jal         0x801D3018
    // 0x801FD524: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FD524: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FD528: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801FD52C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FD530: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801FD534: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FD538: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801FD53C: lw          $a1, 0x90($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X90);
    // 0x801FD540: swc1        $f0, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f0.u32l;
    // 0x801FD544: swc1        $f0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f0.u32l;
    // 0x801FD548: jal         0x801D6244
    // 0x801FD54C: swc1        $f4, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f4.u32l;
    func_801D6244_601624(rdram, ctx);
        goto after_1;
    // 0x801FD54C: swc1        $f4, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f4.u32l;
    after_1:
    // 0x801FD550: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x801FD554: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801FD558: jal         0x801D6330
    // 0x801FD55C: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x801FD55C: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    after_2:
    // 0x801FD560: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x801FD564: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x801FD568: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801FD56C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801FD570: jal         0x801D641C
    // 0x801FD574: lw          $a1, 0x94($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X94);
    func_801D641C_6017FC(rdram, ctx);
        goto after_3;
    // 0x801FD574: lw          $a1, 0x94($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X94);
    after_3:
    // 0x801FD578: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FD57C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x801FD580: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x801FD584: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x801FD588: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801FD58C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801FD590: jal         0x8000E9F4
    // 0x801FD594: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_4;
    // 0x801FD594: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_4:
    // 0x801FD598: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801FD59C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801FD5A0: bne         $s1, $at, L_801FD61C
    if (ctx->r17 != ctx->r1) {
        // 0x801FD5A4: sh          $zero, 0x18($s0)
        MEM_H(0X18, ctx->r16) = 0;
            goto L_801FD61C;
    }
    // 0x801FD5A4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801FD5A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FD5AC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801FD5B0: lwc1        $f14, 0x10($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801FD5B4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801FD5B8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801FD5BC: jal         0x8000E28C
    // 0x801FD5C0: nop

    func_8000E28C_EE8C(rdram, ctx);
        goto after_5;
    // 0x801FD5C0: nop

    after_5:
    // 0x801FD5C4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801FD5C8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FD5CC: sw          $v0, 0x90($s2)
    MEM_W(0X90, ctx->r18) = ctx->r2;
    // 0x801FD5D0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801FD5D4: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801FD5D8: jal         0x8000E630
    // 0x801FD5DC: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_6;
    // 0x801FD5DC: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    after_6:
    // 0x801FD5E0: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801FD5E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FD5E8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD5EC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801FD5F0: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801FD5F4: addiu       $t8, $zero, 0x3FE
    ctx->r24 = ADD32(0, 0X3FE);
    // 0x801FD5F8: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x801FD5FC: addiu       $a0, $a0, -0x29CC
    ctx->r4 = ADD32(ctx->r4, -0X29CC);
    // 0x801FD600: bc1fl       L_801FD614
    if (!c1cs) {
        // 0x801FD604: sw          $t9, 0x94($s2)
        MEM_W(0X94, ctx->r18) = ctx->r25;
            goto L_801FD614;
    }
    goto skip_0;
    // 0x801FD604: sw          $t9, 0x94($s2)
    MEM_W(0X94, ctx->r18) = ctx->r25;
    skip_0:
    // 0x801FD608: b           L_801FD614
    // 0x801FD60C: sw          $t8, 0x94($s2)
    MEM_W(0X94, ctx->r18) = ctx->r24;
        goto L_801FD614;
    // 0x801FD60C: sw          $t8, 0x94($s2)
    MEM_W(0X94, ctx->r18) = ctx->r24;
    // 0x801FD610: sw          $t9, 0x94($s2)
    MEM_W(0X94, ctx->r18) = ctx->r25;
L_801FD614:
    // 0x801FD614: jal         0x8003521C
    // 0x801FD618: sw          $t0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r8;
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801FD618: sw          $t0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r8;
    after_7:
L_801FD61C:
    // 0x801FD61C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FD620: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FD624: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801FD628: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801FD62C: jr          $ra
    // 0x801FD630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801FD630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E0E7C_60C25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0E7C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E0E80: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E0E84: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801E0E88: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E0E8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E0E90: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801E0E94: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E0E98: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801E0E9C: addiu       $a1, $a1, -0x4550
    ctx->r5 = ADD32(ctx->r5, -0X4550);
    // 0x801E0EA0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E0EA4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E0EA8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0EAC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E0EB0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E0EB4: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801E0EB8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E0EBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E0EC0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801E0EC4: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x801E0EC8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E0ECC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E0ED0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801E0ED4: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x801E0ED8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E0EDC: addiu       $t0, $zero, 0x4A8
    ctx->r8 = ADD32(0, 0X4A8);
    // 0x801E0EE0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801E0EE4: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E0EE8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E0EEC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801E0EF0: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E0EF4: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801E0EF8: addiu       $a0, $a0, 0xF68
    ctx->r4 = ADD32(ctx->r4, 0XF68);
    // 0x801E0EFC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E0F00: jal         0x80035854
    // 0x801E0F04: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801E0F04: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801E0F08: beq         $v0, $zero, L_801E0F54
    if (ctx->r2 == 0) {
        // 0x801E0F0C: lw          $a1, 0x40($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X40);
            goto L_801E0F54;
    }
    // 0x801E0F0C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x801E0F10: lwc1        $f18, 0x70($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X70);
    // 0x801E0F14: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E0F18: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801E0F1C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x801E0F20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E0F24: swc1        $f4, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f4.u32l;
    // 0x801E0F28: lwc1        $f6, 0x74($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X74);
    // 0x801E0F2C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E0F30: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801E0F34: swc1        $f8, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f8.u32l;
    // 0x801E0F38: lwc1        $f10, 0x78($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X78);
    // 0x801E0F3C: swc1        $f18, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f18.u32l;
    // 0x801E0F40: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x801E0F44: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E0F48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E0F4C: b           L_801E0F58
    // 0x801E0F50: sb          $t1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r9;
        goto L_801E0F58;
    // 0x801E0F50: sb          $t1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r9;
L_801E0F54:
    // 0x801E0F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0F58:
    // 0x801E0F58: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801E0F5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801E0F60: jr          $ra
    // 0x801E0F64: nop

    TRACE_RETURN()
    return;
    // 0x801E0F64: nop

;}
RECOMP_FUNC void func_801D7624_602A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D7628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D762C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D7630: jal         0x801D603C
    // 0x801D7634: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D603C_60141C(rdram, ctx);
        goto after_0;
    // 0x801D7634: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D7638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D763C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801D7640: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801D7644: bne         $t7, $zero, L_801D7654
    if (ctx->r15 != 0) {
        // 0x801D7648: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801D7654;
    }
    // 0x801D7648: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801D764C: jal         0x80034ED4
    // 0x801D7650: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801D7650: nop

    after_1:
L_801D7654:
    // 0x801D7654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D7658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D765C: jr          $ra
    // 0x801D7660: nop

    TRACE_RETURN()
    return;
    // 0x801D7660: nop

;}
RECOMP_FUNC void func_801D34D0_5FE8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D34D0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D34D4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D34D8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D34DC: beq         $a0, $zero, L_801D352C
    if (ctx->r4 == 0) {
        // 0x801D34E0: andi        $t7, $a3, 0xFF
        ctx->r15 = ctx->r7 & 0XFF;
            goto L_801D352C;
    }
    // 0x801D34E0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x801D34E4: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x801D34E8: sb          $zero, 0x8C($v0)
    MEM_B(0X8C, ctx->r2) = 0;
    // 0x801D34EC: sb          $t7, 0x90($v0)
    MEM_B(0X90, ctx->r2) = ctx->r15;
    // 0x801D34F0: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x801D34F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D34F8: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x801D34FC: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D3500: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x801D3504: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801D3508: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x801D350C: lw          $t5, -0x6320($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X6320);
    // 0x801D3510: lw          $t1, 0x38($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X38);
    // 0x801D3514: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801D3518: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x801D351C: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x801D3520: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x801D3524: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x801D3528: sw          $t3, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->r11;
L_801D352C:
    // 0x801D352C: jr          $ra
    // 0x801D3530: nop

    TRACE_RETURN()
    return;
    // 0x801D3530: nop

;}
RECOMP_FUNC void func_801FC9E4_627DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC9E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FC9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FC9EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FC9F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FC9F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FC9F8: jal         0x801D3F00
    // 0x801FC9FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_0;
    // 0x801FC9FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x801FCA00: beq         $v0, $zero, L_801FCA5C
    if (ctx->r2 == 0) {
        // 0x801FCA04: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_801FCA5C;
    }
    // 0x801FCA04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801FCA08: jal         0x801D2F40
    // 0x801FCA0C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801FCA0C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_1:
    // 0x801FCA10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FCA14: nop

    // 0x801FCA18: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FCA1C: nop

    // 0x801FCA20: bc1fl       L_801FCA60
    if (!c1cs) {
        // 0x801FCA24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FCA60;
    }
    goto skip_0;
    // 0x801FCA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FCA28: jal         0x801FFDFC
    // 0x801FCA2C: nop

    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_2;
    // 0x801FCA2C: nop

    after_2:
    // 0x801FCA30: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FCA34: addiu       $a1, $a1, -0x4BB8
    ctx->r5 = ADD32(ctx->r5, -0X4BB8);
    // 0x801FCA38: jal         0x801D31CC
    // 0x801FCA3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801FCA3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801FCA40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801FCA44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FCA48: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801FCA4C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FCA50: addiu       $a0, $a0, -0x3594
    ctx->r4 = ADD32(ctx->r4, -0X3594);
    // 0x801FCA54: jal         0x8003521C
    // 0x801FCA58: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FCA58: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    after_4:
L_801FCA5C:
    // 0x801FCA5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FCA60:
    // 0x801FCA60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FCA64: jr          $ra
    // 0x801FCA68: nop

    TRACE_RETURN()
    return;
    // 0x801FCA68: nop

;}
RECOMP_FUNC void func_801FB73C_626B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB73C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FB740: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FB744: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801FB748: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801FB74C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FB750: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FB754: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FB758: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FB75C: bne         $t7, $zero, L_801FB7EC
    if (ctx->r15 != 0) {
        // 0x801FB760: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801FB7EC;
    }
    // 0x801FB760: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801FB764: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FB768: jal         0x801D31CC
    // 0x801FB76C: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801FB76C: addiu       $a1, $a1, -0x4C00
    ctx->r5 = ADD32(ctx->r5, -0X4C00);
    after_0:
    // 0x801FB770: jal         0x80038BC8
    // 0x801FB774: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FB774: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_1:
    // 0x801FB778: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801FB77C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FB780: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801FB784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB788: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801FB78C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FB790: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801FB794: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801FB798: jal         0x801E1084
    // 0x801FB79C: nop

    func_801E1084_60C464(rdram, ctx);
        goto after_2;
    // 0x801FB79C: nop

    after_2:
    // 0x801FB7A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801FB7A4: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801FB7A8: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801FB7AC: jal         0x801E0950
    // 0x801FB7B0: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    func_801E0950_60BD30(rdram, ctx);
        goto after_3;
    // 0x801FB7B0: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    after_3:
    // 0x801FB7B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FB7B8: jal         0x80037C9C
    // 0x801FB7BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    func_80037C9C_3889C(rdram, ctx);
        goto after_4;
    // 0x801FB7BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_4:
    // 0x801FB7C0: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801FB7C4: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801FB7C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FB7CC: jal         0x80037C20
    // 0x801FB7D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_5;
    // 0x801FB7D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801FB7D4: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x801FB7D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB7DC: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801FB7E0: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801FB7E4: jal         0x8003521C
    // 0x801FB7E8: addiu       $a0, $a0, -0x47EC
    ctx->r4 = ADD32(ctx->r4, -0X47EC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801FB7E8: addiu       $a0, $a0, -0x47EC
    ctx->r4 = ADD32(ctx->r4, -0X47EC);
    after_6:
L_801FB7EC:
    // 0x801FB7EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FB7F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FB7F4: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801FB7F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801FB7FC: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x801FB800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FB804: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801FB808: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801FB80C: jr          $ra
    // 0x801FB810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801FB810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801E0530_60B910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0538: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x801E053C: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x801E0540: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x801E0544: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x801E0548: bne         $at, $zero, L_801E0558
    if (ctx->r1 != 0) {
        // 0x801E054C: sh          $t7, 0x16($a1)
        MEM_H(0X16, ctx->r5) = ctx->r15;
            goto L_801E0558;
    }
    // 0x801E054C: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801E0550: addiu       $t8, $v0, -0x400
    ctx->r24 = ADD32(ctx->r2, -0X400);
    // 0x801E0554: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
L_801E0558:
    // 0x801E0558: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x801E055C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801E0560: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0564: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E0568: ldc1        $f2, -0x2418($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X2418);
    // 0x801E056C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0570: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801E0574: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x801E0578: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801E057C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E0580: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E0584: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x801E0588: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x801E058C: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E0590: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801E0594: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801E0598: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801E059C: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x801E05A0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E05A4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E05A8: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x801E05AC: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x801E05B0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E05B4: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801E05B8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E05BC: swc1        $f18, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f18.u32l;
    // 0x801E05C0: ldc1        $f0, -0x2410($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X2410);
    // 0x801E05C4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E05C8: swc1        $f10, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f10.u32l;
    // 0x801E05CC: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x801E05D0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E05D4: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x801E05D8: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E05DC: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E05E0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E05E4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E05E8: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x801E05EC: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x801E05F0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E05F4: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E05F8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E05FC: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x801E0600: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E0604: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x801E0608: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x801E060C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E0610: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x801E0614: jal         0x801E07A0
    // 0x801E0618: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E07A0_60BB80(rdram, ctx);
        goto after_0;
    // 0x801E0618: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E061C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0620: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801E0624: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E0628: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801E062C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E0630: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E0634: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E0638: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x801E063C: nop

    // 0x801E0640: bc1fl       L_801E0654
    if (!c1cs) {
        // 0x801E0644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0654;
    }
    goto skip_0;
    // 0x801E0644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0648: jal         0x8003521C
    // 0x801E064C: addiu       $a0, $a0, 0x660
    ctx->r4 = ADD32(ctx->r4, 0X660);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E064C: addiu       $a0, $a0, 0x660
    ctx->r4 = ADD32(ctx->r4, 0X660);
    after_1:
    // 0x801E0650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0654:
    // 0x801E0654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0658: jr          $ra
    // 0x801E065C: nop

    TRACE_RETURN()
    return;
    // 0x801E065C: nop

;}
RECOMP_FUNC void func_80200508_62B8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200508: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8020050C: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x80200510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80200514: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80200518: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020051C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80200520: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80200524: sb          $zero, 0x5($t6)
    MEM_B(0X5, ctx->r14) = 0;
    // 0x80200528: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8020052C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80200530: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80200534: sb          $zero, 0x7($t7)
    MEM_B(0X7, ctx->r15) = 0;
    // 0x80200538: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8020053C: lbu         $t9, 0x12($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X12);
    // 0x80200540: bgtz        $t9, L_80200550
    if (SIGNED(ctx->r25) > 0) {
        // 0x80200544: nop
    
            goto L_80200550;
    }
    // 0x80200544: nop

    // 0x80200548: jal         0x8003521C
    // 0x8020054C: addiu       $a0, $a0, 0xBA4
    ctx->r4 = ADD32(ctx->r4, 0XBA4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8020054C: addiu       $a0, $a0, 0xBA4
    ctx->r4 = ADD32(ctx->r4, 0XBA4);
    after_0:
L_80200550:
    // 0x80200550: jal         0x80200948
    // 0x80200554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200948_62BD28(rdram, ctx);
        goto after_1;
    // 0x80200554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80200558: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8020055C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80200560: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80200564: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80200568: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x8020056C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80200570: nop

    // 0x80200574: bc1fl       L_80200590
    if (!c1cs) {
        // 0x80200578: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_80200590;
    }
    goto skip_0;
    // 0x80200578: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x8020057C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80200580: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80200584: b           L_80200630
    // 0x80200588: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
        goto L_80200630;
    // 0x80200588: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x8020058C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_80200590:
    // 0x80200590: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80200594: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80200598: nop

    // 0x8020059C: bc1fl       L_802005B8
    if (!c1cs) {
        // 0x802005A0: lwc1        $f0, 0x70($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
            goto L_802005B8;
    }
    goto skip_1;
    // 0x802005A0: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    skip_1:
    // 0x802005A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802005A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802005AC: b           L_80200630
    // 0x802005B0: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
        goto L_80200630;
    // 0x802005B0: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x802005B4: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
L_802005B8:
    // 0x802005B8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802005BC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802005C0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802005C4: nop

    // 0x802005C8: bc1fl       L_802005DC
    if (!c1cs) {
        // 0x802005CC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802005DC;
    }
    goto skip_2;
    // 0x802005CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x802005D0: b           L_802005DC
    // 0x802005D4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_802005DC;
    // 0x802005D4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x802005D8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802005DC:
    // 0x802005DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802005E0: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x802005E4: c.eq.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d == ctx->f18.d;
    // 0x802005E8: nop

    // 0x802005EC: bc1t        L_80200630
    if (c1cs) {
        // 0x802005F0: nop
    
            goto L_80200630;
    }
    // 0x802005F0: nop

    // 0x802005F4: jal         0x8000DDC0
    // 0x802005F8: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_2;
    // 0x802005F8: nop

    after_2:
    // 0x802005FC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80200600: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80200604: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80200608: beq         $v0, $zero, L_80200628
    if (ctx->r2 == 0) {
        // 0x8020060C: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_80200628;
    }
    // 0x8020060C: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80200610: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80200614: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80200618: nop

    // 0x8020061C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80200620: b           L_80200630
    // 0x80200624: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
        goto L_80200630;
    // 0x80200624: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
L_80200628:
    // 0x80200628: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x8020062C: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
L_80200630:
    // 0x80200630: jal         0x801D600C
    // 0x80200634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D600C_6013EC(rdram, ctx);
        goto after_3;
    // 0x80200634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80200638: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020063C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80200640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200644: lui         $a1, 0xC382
    ctx->r5 = S32(0XC382 << 16);
    // 0x80200648: jal         0x801D6330
    // 0x8020064C: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    func_801D6330_601710(rdram, ctx);
        goto after_4;
    // 0x8020064C: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x80200650: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200654: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80200658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020065C: lui         $a1, 0xC47A
    ctx->r5 = S32(0XC47A << 16);
    // 0x80200660: jal         0x801D641C
    // 0x80200664: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    func_801D641C_6017FC(rdram, ctx);
        goto after_5;
    // 0x80200664: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    after_5:
    // 0x80200668: jal         0x8020407C
    // 0x8020066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_6;
    // 0x8020066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80200670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80200674: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80200678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020067C: jr          $ra
    // 0x80200680: nop

    TRACE_RETURN()
    return;
    // 0x80200680: nop

;}
RECOMP_FUNC void func_801E6ECC_6122AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6ECC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E6ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E6ED4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E6ED8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E6EDC: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801E6EE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6EE4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E6EE8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E6EEC: bgez        $t7, L_801E6FB0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801E6EF0: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801E6FB0;
    }
    // 0x801E6EF0: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801E6EF4: jal         0x801D31F0
    // 0x801E6EF8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E6EF8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801E6EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6F00: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E6F04: jal         0x801D3B18
    // 0x801E6F08: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801E6F08: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x801E6F0C: jal         0x801D60E4
    // 0x801E6F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_2;
    // 0x801E6F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E6F14: jal         0x801EEEC0
    // 0x801E6F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_3;
    // 0x801E6F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E6F1C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E6F20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6F24: ldc1        $f6, -0x1F40($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1F40);
    // 0x801E6F28: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6F2C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6F30: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x801E6F34: nop

    // 0x801E6F38: bc1fl       L_801E6F90
    if (!c1cs) {
        // 0x801E6F3C: lw          $t9, 0x9C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X9C);
            goto L_801E6F90;
    }
    goto skip_0;
    // 0x801E6F3C: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    skip_0:
    // 0x801E6F40: ldc1        $f8, -0x1F38($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1F38);
    // 0x801E6F44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6F48: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6F4C: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x801E6F50: nop

    // 0x801E6F54: bc1fl       L_801E6F90
    if (!c1cs) {
        // 0x801E6F58: lw          $t9, 0x9C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X9C);
            goto L_801E6F90;
    }
    goto skip_1;
    // 0x801E6F58: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    skip_1:
    // 0x801E6F5C: jal         0x801D2EE4
    // 0x801E6F60: addiu       $a1, $a1, -0x4E88
    ctx->r5 = ADD32(ctx->r5, -0X4E88);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801E6F60: addiu       $a1, $a1, -0x4E88
    ctx->r5 = ADD32(ctx->r5, -0X4E88);
    after_4:
    // 0x801E6F64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E6F68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E6F6C: lwc1        $f10, 0x94($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X94);
    // 0x801E6F70: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6F74: addiu       $a0, $a0, 0x6FC4
    ctx->r4 = ADD32(ctx->r4, 0X6FC4);
    // 0x801E6F78: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E6F7C: jal         0x8003521C
    // 0x801E6F80: swc1        $f18, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f18.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E6F80: swc1        $f18, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f18.u32l;
    after_5:
    // 0x801E6F84: b           L_801E6FB4
    // 0x801E6F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E6FB4;
    // 0x801E6F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6F8C: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
L_801E6F90:
    // 0x801E6F90: addiu       $v0, $t9, 0x4
    ctx->r2 = ADD32(ctx->r25, 0X4);
    // 0x801E6F94: bltz        $v0, L_801E6FA4
    if (SIGNED(ctx->r2) < 0) {
        // 0x801E6F98: sw          $v0, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = ctx->r2;
            goto L_801E6FA4;
    }
    // 0x801E6F98: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x801E6F9C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801E6FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E6FA4:
    // 0x801E6FA4: lw          $t1, 0x98($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X98);
    // 0x801E6FA8: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x801E6FAC: sh          $t2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r10;
L_801E6FB0:
    // 0x801E6FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E6FB4:
    // 0x801E6FB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E6FB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E6FBC: jr          $ra
    // 0x801E6FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801E6FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802065B8_631998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802065B8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802065BC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x802065C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802065C4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802065C8: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x802065CC: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x802065D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802065D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802065D8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802065DC: lbu         $v0, 0x816($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X816);
    // 0x802065E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802065E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802065E8: bnel        $v0, $at, L_80206644
    if (ctx->r2 != ctx->r1) {
        // 0x802065EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80206644;
    }
    goto skip_0;
    // 0x802065EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x802065F0: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x802065F4: lui         $t4, 0x802
    ctx->r12 = S32(0X802 << 16);
    // 0x802065F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802065FC: bne         $t9, $zero, L_80206628
    if (ctx->r25 != 0) {
        // 0x80206600: addiu       $t4, $t4, -0x6620
        ctx->r12 = ADD32(ctx->r12, -0X6620);
            goto L_80206628;
    }
    // 0x80206600: addiu       $t4, $t4, -0x6620
    ctx->r12 = ADD32(ctx->r12, -0X6620);
    // 0x80206604: lui         $t1, 0x802
    ctx->r9 = S32(0X802 << 16);
    // 0x80206608: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8020660C: addiu       $t1, $t1, -0x6620
    ctx->r9 = ADD32(ctx->r9, -0X6620);
    // 0x80206610: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206614: sb          $t0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r8;
    // 0x80206618: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8020661C: sw          $t2, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r10;
    // 0x80206620: b           L_80206694
    // 0x80206624: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
        goto L_80206694;
    // 0x80206624: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
L_80206628:
    // 0x80206628: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020662C: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x80206630: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x80206634: sw          $t5, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r13;
    // 0x80206638: b           L_80206694
    // 0x8020663C: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
        goto L_80206694;
    // 0x8020663C: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
    // 0x80206640: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80206644:
    // 0x80206644: bne         $v0, $at, L_80206674
    if (ctx->r2 != ctx->r1) {
        // 0x80206648: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80206674;
    }
    // 0x80206648: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020664C: lui         $t7, 0x802
    ctx->r15 = S32(0X802 << 16);
    // 0x80206650: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80206654: addiu       $t7, $t7, -0x6620
    ctx->r15 = ADD32(ctx->r15, -0X6620);
    // 0x80206658: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020665C: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x80206660: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x80206664: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80206668: sw          $t8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r24;
    // 0x8020666C: b           L_80206694
    // 0x80206670: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
        goto L_80206694;
    // 0x80206670: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
L_80206674:
    // 0x80206674: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x80206678: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x8020667C: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x80206680: sb          $t9, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r25;
    // 0x80206684: jal         0x801D36C4
    // 0x80206688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_0;
    // 0x80206688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8020668C: jal         0x801D3894
    // 0x80206690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_1;
    // 0x80206690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80206694:
    // 0x80206694: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80206698: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x8020669C: lbu         $t0, 0x816($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X816);
    // 0x802066A0: beq         $t0, $zero, L_80206764
    if (ctx->r8 == 0) {
        // 0x802066A4: nop
    
            goto L_80206764;
    }
    // 0x802066A4: nop

    // 0x802066A8: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x802066AC: beql        $v1, $zero, L_80206708
    if (ctx->r3 == 0) {
        // 0x802066B0: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_80206708;
    }
    goto skip_1;
    // 0x802066B0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_1:
    // 0x802066B4: lbu         $a0, 0x4C($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X4C);
    // 0x802066B8: slti        $at, $a0, 0x3C
    ctx->r1 = SIGNED(ctx->r4) < 0X3C ? 1 : 0;
    // 0x802066BC: bne         $at, $zero, L_80206704
    if (ctx->r1 != 0) {
        // 0x802066C0: addiu       $at, $zero, 0x51
        ctx->r1 = ADD32(0, 0X51);
            goto L_80206704;
    }
    // 0x802066C0: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x802066C4: beq         $a0, $at, L_80206704
    if (ctx->r4 == ctx->r1) {
        // 0x802066C8: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_80206704;
    }
    // 0x802066C8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802066CC: sb          $t1, 0x816($v0)
    MEM_B(0X816, ctx->r2) = ctx->r9;
    // 0x802066D0: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x802066D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802066D8: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x802066DC: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x802066E0: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x802066E4: jal         0x8003521C
    // 0x802066E8: addiu       $a0, $a0, 0x679C
    ctx->r4 = ADD32(ctx->r4, 0X679C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x802066E8: addiu       $a0, $a0, 0x679C
    ctx->r4 = ADD32(ctx->r4, 0X679C);
    after_2:
    // 0x802066EC: jal         0x801D36C4
    // 0x802066F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_3;
    // 0x802066F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802066F4: jal         0x801D3894
    // 0x802066F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_4;
    // 0x802066F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802066FC: b           L_8020678C
    // 0x80206700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8020678C;
    // 0x80206700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80206704:
    // 0x80206704: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_80206708:
    // 0x80206708: beq         $v0, $zero, L_80206718
    if (ctx->r2 == 0) {
        // 0x8020670C: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_80206718;
    }
    // 0x8020670C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80206710: b           L_80206764
    // 0x80206714: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
        goto L_80206764;
    // 0x80206714: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
L_80206718:
    // 0x80206718: jal         0x801D365C
    // 0x8020671C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_5;
    // 0x8020671C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80206720: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80206724: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80206728: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8020672C: lw          $t4, 0x1CC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1CC);
    // 0x80206730: bne         $v0, $t4, L_80206764
    if (ctx->r2 != ctx->r12) {
        // 0x80206734: nop
    
            goto L_80206764;
    }
    // 0x80206734: nop

    // 0x80206738: lbu         $t6, 0xE($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XE);
    // 0x8020673C: bnel        $t6, $zero, L_8020675C
    if (ctx->r14 != 0) {
        // 0x80206740: addiu       $t8, $zero, 0x32
        ctx->r24 = ADD32(0, 0X32);
            goto L_8020675C;
    }
    goto skip_2;
    // 0x80206740: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    skip_2:
    // 0x80206744: lbu         $t7, 0x2C5($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X2C5);
    // 0x80206748: bnel        $t7, $zero, L_8020675C
    if (ctx->r15 != 0) {
        // 0x8020674C: addiu       $t8, $zero, 0x32
        ctx->r24 = ADD32(0, 0X32);
            goto L_8020675C;
    }
    goto skip_3;
    // 0x8020674C: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    skip_3:
    // 0x80206750: jal         0x80038BC8
    // 0x80206754: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x80206754: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    after_6:
    // 0x80206758: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
L_8020675C:
    // 0x8020675C: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x80206760: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
L_80206764:
    // 0x80206764: jal         0x801D36C4
    // 0x80206768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_7;
    // 0x80206768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8020676C: jal         0x801D3894
    // 0x80206770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_8;
    // 0x80206770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80206774: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80206778: lw          $t9, -0x10C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10C0);
    // 0x8020677C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206780: jal         0x80203F88
    // 0x80206784: sb          $zero, 0x816($t9)
    MEM_B(0X816, ctx->r25) = 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_9;
    // 0x80206784: sb          $zero, 0x816($t9)
    MEM_B(0X816, ctx->r25) = 0;
    after_9:
    // 0x80206788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8020678C:
    // 0x8020678C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80206790: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80206794: jr          $ra
    // 0x80206798: nop

    TRACE_RETURN()
    return;
    // 0x80206798: nop

;}
RECOMP_FUNC void func_801D1E40_5FD220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1E40: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D1E44: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801D1E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D1E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1E50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D1E54: lbu         $v0, 0x2C1($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801D1E58: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801D1E5C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D1E60: bne         $v0, $at, L_801D1E78
    if (ctx->r2 != ctx->r1) {
        // 0x801D1E64: nop
    
            goto L_801D1E78;
    }
    // 0x801D1E64: nop

    // 0x801D1E68: jal         0x80034ED4
    // 0x801D1E6C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801D1E6C: nop

    after_0:
    // 0x801D1E70: b           L_801D1E8C
    // 0x801D1E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D1E8C;
    // 0x801D1E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D1E78:
    // 0x801D1E78: beql        $v0, $zero, L_801D1E8C
    if (ctx->r2 == 0) {
        // 0x801D1E7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D1E8C;
    }
    goto skip_0;
    // 0x801D1E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D1E80: jal         0x801D2F40
    // 0x801D1E84: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801D1E84: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_1:
    // 0x801D1E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D1E8C:
    // 0x801D1E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D1E90: jr          $ra
    // 0x801D1E94: nop

    TRACE_RETURN()
    return;
    // 0x801D1E94: nop

;}
RECOMP_FUNC void func_802053B0_630790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802053B0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802053B4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802053B8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x802053BC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x802053C0: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802053C4: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802053C8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802053CC: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x802053D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802053D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802053D8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802053DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802053E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802053E4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x802053E8: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x802053EC: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x802053F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802053F4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802053F8: lui         $a2, 0x802
    ctx->r6 = S32(0X802 << 16);
    // 0x802053FC: addiu       $a2, $a2, -0x6FF0
    ctx->r6 = ADD32(ctx->r6, -0X6FF0);
    // 0x80205400: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80205404: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205408: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x8020540C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80205410: addiu       $t6, $zero, 0x4B5
    ctx->r14 = ADD32(0, 0X4B5);
    // 0x80205414: addiu       $a1, $a1, 0x55B4
    ctx->r5 = ADD32(ctx->r5, 0X55B4);
    // 0x80205418: addiu       $a3, $a3, -0x5430
    ctx->r7 = ADD32(ctx->r7, -0X5430);
    // 0x8020541C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80205420: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80205424: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80205428: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8020542C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80205430: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80205434: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80205438: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8020543C: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80205440: jal         0x800358E8
    // 0x80205444: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80205444: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80205448: beq         $v0, $zero, L_8020559C
    if (ctx->r2 == 0) {
        // 0x8020544C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8020559C;
    }
    // 0x8020544C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80205450: lbu         $t0, 0x73($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X73);
    // 0x80205454: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80205458: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x8020545C: addiu       $t8, $t8, -0x4780
    ctx->r24 = ADD32(ctx->r24, -0X4780);
    // 0x80205460: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x80205464: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80205468: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020546C: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x80205470: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80205474: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80205478: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x8020547C: sw          $t2, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r10;
    // 0x80205480: sw          $t3, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r11;
    // 0x80205484: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80205488: sw          $t4, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r12;
    // 0x8020548C: addiu       $t5, $s1, 0x74
    ctx->r13 = ADD32(ctx->r17, 0X74);
    // 0x80205490: sw          $t1, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r9;
    // 0x80205494: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80205498: addiu       $t6, $s1, 0x78
    ctx->r14 = ADD32(ctx->r17, 0X78);
    // 0x8020549C: addiu       $a3, $s1, 0x70
    ctx->r7 = ADD32(ctx->r17, 0X70);
    // 0x802054A0: swc1        $f8, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f8.u32l;
    // 0x802054A4: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802054A8: swc1        $f10, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f10.u32l;
    // 0x802054AC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802054B0: swc1        $f16, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f16.u32l;
    // 0x802054B4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x802054B8: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x802054BC: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802054C0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802054C4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802054C8: jal         0x8000E808
    // 0x802054CC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x802054CC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    after_1:
    // 0x802054D0: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x802054D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802054D8: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x802054DC: addiu       $t9, $zero, 0xDC
    ctx->r25 = ADD32(0, 0XDC);
    // 0x802054E0: sb          $t7, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r15;
    // 0x802054E4: sh          $t8, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r24;
    // 0x802054E8: sh          $t9, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r25;
    // 0x802054EC: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x802054F0: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x802054F4: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802054F8: addiu       $t1, $v1, 0xC
    ctx->r9 = ADD32(ctx->r3, 0XC);
    // 0x802054FC: addiu       $t2, $v1, 0x10
    ctx->r10 = ADD32(ctx->r3, 0X10);
    // 0x80205500: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80205504: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x80205508: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x8020550C: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80205510: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80205514: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80205518: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x8020551C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80205520: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80205524: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80205528: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8020552C: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x80205530: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80205534: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x80205538: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8020553C: jal         0x8000E808
    // 0x80205540: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8000E808_F408(rdram, ctx);
        goto after_2;
    // 0x80205540: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_2:
    // 0x80205544: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x80205548: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8020554C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80205550: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80205554: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80205558: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8020555C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80205560: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80205564: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80205568: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020556C: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x80205570: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80205574: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80205578: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x8020557C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80205580: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x80205584: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80205588: sb          $t3, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r11;
    // 0x8020558C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80205590: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x80205594: jal         0x802046F0
    // 0x80205598: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_802046F0_62FAD0(rdram, ctx);
        goto after_3;
    // 0x80205598: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_3:
L_8020559C:
    // 0x8020559C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802055A0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x802055A4: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x802055A8: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x802055AC: jr          $ra
    // 0x802055B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802055B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801D3118_5FE4F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3118: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D311C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D3120: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D3124: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801D3128: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x801D312C: nop

    // 0x801D3130: bc1f        L_801D317C
    if (!c1cs) {
        // 0x801D3134: nop
    
            goto L_801D317C;
    }
    // 0x801D3134: nop

    // 0x801D3138: bnel        $a0, $zero, L_801D314C
    if (ctx->r4 != 0) {
        // 0x801D313C: c.le.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
            goto L_801D314C;
    }
    goto skip_0;
    // 0x801D313C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    skip_0:
    // 0x801D3140: jr          $ra
    // 0x801D3144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3148: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
L_801D314C:
    // 0x801D314C: nop

    // 0x801D3150: bc1fl       L_801D31C4
    if (!c1cs) {
        // 0x801D3154: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D31C4;
    }
    goto skip_1;
    // 0x801D3154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801D3158: lwc1        $f6, 0x94($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801D315C: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801D3160: sub.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801D3164: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D3168: nop

    // 0x801D316C: bc1fl       L_801D31C4
    if (!c1cs) {
        // 0x801D3170: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D31C4;
    }
    goto skip_2;
    // 0x801D3170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801D3174: jr          $ra
    // 0x801D3178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D3178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D317C:
    // 0x801D317C: bnel        $a0, $zero, L_801D3190
    if (ctx->r4 != 0) {
        // 0x801D3180: c.le.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
            goto L_801D3190;
    }
    goto skip_3;
    // 0x801D3180: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    skip_3:
    // 0x801D3184: jr          $ra
    // 0x801D3188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3188: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D318C: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
L_801D3190:
    // 0x801D3190: nop

    // 0x801D3194: bc1fl       L_801D31C4
    if (!c1cs) {
        // 0x801D3198: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D31C4;
    }
    goto skip_4;
    // 0x801D3198: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x801D319C: lwc1        $f10, 0x94($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801D31A0: div.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801D31A4: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x801D31A8: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801D31AC: nop

    // 0x801D31B0: bc1fl       L_801D31C4
    if (!c1cs) {
        // 0x801D31B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D31C4;
    }
    goto skip_5;
    // 0x801D31B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x801D31B8: jr          $ra
    // 0x801D31BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D31BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D31C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D31C4:
    // 0x801D31C4: jr          $ra
    // 0x801D31C8: nop

    TRACE_RETURN()
    return;
    // 0x801D31C8: nop

;}
RECOMP_FUNC void func_801EF888_61AC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF890: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EF894: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF898: jal         0x801D31F0
    // 0x801EF89C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801EF89C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801EF8A0: jal         0x801F732C
    // 0x801EF8A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F732C_62270C(rdram, ctx);
        goto after_1;
    // 0x801EF8A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801EF8A8: beq         $v0, $zero, L_801EF8B8
    if (ctx->r2 == 0) {
        // 0x801EF8AC: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801EF8B8;
    }
    // 0x801EF8AC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF8B0: jal         0x8003521C
    // 0x801EF8B4: addiu       $a0, $a0, -0x738
    ctx->r4 = ADD32(ctx->r4, -0X738);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801EF8B4: addiu       $a0, $a0, -0x738
    ctx->r4 = ADD32(ctx->r4, -0X738);
    after_2:
L_801EF8B8:
    // 0x801EF8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF8BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF8C0: jr          $ra
    // 0x801EF8C4: nop

    TRACE_RETURN()
    return;
    // 0x801EF8C4: nop

;}
RECOMP_FUNC void func_801DAD30_606110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAD30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DAD34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DAD38: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801DAD3C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801DAD40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DAD44: jal         0x801D9030
    // 0x801DAD48: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801D9030_604410(rdram, ctx);
        goto after_0;
    // 0x801DAD48: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801DAD4C: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x801DAD50: lw          $t7, 0x9C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X9C);
    // 0x801DAD54: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAD58: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x801DAD5C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801DAD60: sh          $t8, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r24;
    // 0x801DAD64: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801DAD68: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801DAD6C: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801DAD70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DAD74: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x801DAD78: addiu       $t0, $sp, 0x2C
    ctx->r8 = ADD32(ctx->r29, 0X2C);
    // 0x801DAD7C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801DAD80: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x801DAD84: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x801DAD88: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801DAD8C: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801DAD90: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801DAD94: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DAD98: jal         0x8000E808
    // 0x801DAD9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x801DAD9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x801DADA0: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801DADA4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801DADA8: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801DADAC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801DADB0: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801DADB4: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DADB8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801DADBC: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DADC0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801DADC4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801DADC8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DADCC: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801DADD0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801DADD4: jal         0x8000E39C
    // 0x801DADD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801DADD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x801DADDC: lwc1        $f18, 0x70($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801DADE0: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801DADE4: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801DADE8: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x801DADEC: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801DADF0: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x801DADF4: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x801DADF8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DADFC: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
    // 0x801DAE00: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801DAE04: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x801DAE08: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801DAE0C: jal         0x8003521C
    // 0x801DAE10: addiu       $a0, $a0, -0x51D8
    ctx->r4 = ADD32(ctx->r4, -0X51D8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801DAE10: addiu       $a0, $a0, -0x51D8
    ctx->r4 = ADD32(ctx->r4, -0X51D8);
    after_3:
    // 0x801DAE14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DAE18: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAE1C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801DAE20: jr          $ra
    // 0x801DAE24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801DAE24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801DAE28_606208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAE28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DAE2C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DAE30: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801DAE34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DAE38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DAE3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DAE40: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DAE44: jal         0x801D614C
    // 0x801DAE48: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801DAE48: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DAE4C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DAE50: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x801DAE54: bgez        $v0, L_801DAE98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801DAE58: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_801DAE98;
    }
    // 0x801DAE58: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801DAE5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DAE60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801DAE64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DAE68: jal         0x801D9030
    // 0x801DAE6C: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    func_801D9030_604410(rdram, ctx);
        goto after_1;
    // 0x801DAE6C: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    after_1:
    // 0x801DAE70: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x801DAE74: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801DAE78: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAE7C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x801DAE80: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DAE84: addiu       $a0, $a0, -0x629C
    ctx->r4 = ADD32(ctx->r4, -0X629C);
    // 0x801DAE88: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DAE8C: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801DAE90: jal         0x8003521C
    // 0x801DAE94: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801DAE94: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    after_2:
L_801DAE98:
    // 0x801DAE98: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    // 0x801DAE9C: lw          $t3, 0x9C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X9C);
    // 0x801DAEA0: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x801DAEA4: sw          $t1, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r9;
    // 0x801DAEA8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x801DAEAC: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x801DAEB0: sh          $t4, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r12;
    // 0x801DAEB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAEB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DAEBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DAEC0: jr          $ra
    // 0x801DAEC4: nop

    TRACE_RETURN()
    return;
    // 0x801DAEC4: nop

;}
RECOMP_FUNC void func_801E42D4_60F6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E42D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E42D8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E42DC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E42E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E42E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E42E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E42EC: jal         0x801D36CC
    // 0x801E42F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_0;
    // 0x801E42F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E42F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801E42F8: jal         0x801D3894
    // 0x801E42FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D3894_5FEC74(rdram, ctx);
        goto after_1;
    // 0x801E42FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801E4300: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801E4304: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E4308: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E430C: beq         $t7, $zero, L_801E4358
    if (ctx->r15 == 0) {
        // 0x801E4310: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_801E4358;
    }
    // 0x801E4310: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801E4314: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801E4318: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E431C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E4320: lwc1        $f2, -0x4E94($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4E94);
    // 0x801E4324: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801E4328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E432C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4330: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E4334: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x801E4338: lw          $t8, 0x60($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X60);
    // 0x801E433C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E4340: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801E4344: sw          $t9, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r25;
    // 0x801E4348: swc1        $f2, -0x4E94($at)
    MEM_W(-0X4E94, ctx->r1) = ctx->f2.u32l;
    // 0x801E434C: bc1f        L_801E4358
    if (!c1cs) {
        // 0x801E4350: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E4358;
    }
    // 0x801E4350: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E4354: swc1        $f0, -0x4E94($at)
    MEM_W(-0X4E94, ctx->r1) = ctx->f0.u32l;
L_801E4358:
    // 0x801E4358: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E435C: lwc1        $f2, -0x4E94($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4E94);
    // 0x801E4360: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x801E4364: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801E4368: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801E436C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801E4370: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
    // 0x801E4374: bc1f        L_801E438C
    if (!c1cs) {
        // 0x801E4378: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E438C;
    }
    // 0x801E4378: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E437C: ldc1        $f10, -0x22E8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X22E8);
    // 0x801E4380: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801E4384: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x801E4388: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
L_801E438C:
    // 0x801E438C: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x801E4390: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801E4394: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801E4398: lwc1        $f0, 0x94($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801E439C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x801E43A0: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E43A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E43A8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801E43AC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E43B0: div.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x801E43B4: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x801E43B8: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x801E43BC: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x801E43C0: lwc1        $f12, 0x28($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E43C4: swc1        $f2, -0x4E94($at)
    MEM_W(-0X4E94, ctx->r1) = ctx->f2.u32l;
    // 0x801E43C8: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801E43CC: nop

    // 0x801E43D0: bc1f        L_801E43E0
    if (!c1cs) {
        // 0x801E43D4: nop
    
            goto L_801E43E0;
    }
    // 0x801E43D4: nop

    // 0x801E43D8: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x801E43DC: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
L_801E43E0:
    // 0x801E43E0: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801E43E4: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E43E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E43EC: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x801E43F0: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E43F4: andi        $t3, $v0, 0x800
    ctx->r11 = ctx->r2 & 0X800;
    // 0x801E43F8: beql        $t3, $zero, L_801E4428
    if (ctx->r11 == 0) {
        // 0x801E43FC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801E4428;
    }
    goto skip_0;
    // 0x801E43FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x801E4400: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E4404: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801E4408: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801E440C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E4410: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801E4414: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x801E4418: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801E441C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x801E4420: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E4424: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_801E4428:
    // 0x801E4428: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E442C: andi        $t5, $v0, 0x400
    ctx->r13 = ctx->r2 & 0X400;
    // 0x801E4430: beql        $t5, $zero, L_801E445C
    if (ctx->r13 == 0) {
        // 0x801E4434: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_801E445C;
    }
    goto skip_1;
    // 0x801E4434: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    skip_1:
    // 0x801E4438: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801E443C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E4440: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E4444: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x801E4448: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    // 0x801E444C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E4450: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801E4454: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E4458: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
L_801E445C:
    // 0x801E445C: beql        $t7, $zero, L_801E4488
    if (ctx->r15 == 0) {
        // 0x801E4460: andi        $t9, $v0, 0x200
        ctx->r25 = ctx->r2 & 0X200;
            goto L_801E4488;
    }
    goto skip_2;
    // 0x801E4460: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    skip_2:
    // 0x801E4464: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E4468: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801E446C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E4470: add.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801E4474: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x801E4478: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801E447C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801E4480: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E4484: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
L_801E4488:
    // 0x801E4488: beql        $t9, $zero, L_801E44B4
    if (ctx->r25 == 0) {
        // 0x801E448C: andi        $t1, $v0, 0x8
        ctx->r9 = ctx->r2 & 0X8;
            goto L_801E44B4;
    }
    goto skip_3;
    // 0x801E448C: andi        $t1, $v0, 0x8
    ctx->r9 = ctx->r2 & 0X8;
    skip_3:
    // 0x801E4490: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E4494: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E4498: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E449C: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801E44A0: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x801E44A4: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801E44A8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x801E44AC: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E44B0: andi        $t1, $v0, 0x8
    ctx->r9 = ctx->r2 & 0X8;
L_801E44B4:
    // 0x801E44B4: beql        $t1, $zero, L_801E44E0
    if (ctx->r9 == 0) {
        // 0x801E44B8: andi        $t3, $v0, 0x4
        ctx->r11 = ctx->r2 & 0X4;
            goto L_801E44E0;
    }
    goto skip_4;
    // 0x801E44B8: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
    skip_4:
    // 0x801E44BC: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E44C0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801E44C4: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E44C8: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x801E44CC: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801E44D0: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801E44D4: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x801E44D8: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E44DC: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
L_801E44E0:
    // 0x801E44E0: beql        $t3, $zero, L_801E450C
    if (ctx->r11 == 0) {
        // 0x801E44E4: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_801E450C;
    }
    goto skip_5;
    // 0x801E44E4: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    skip_5:
    // 0x801E44E8: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E44EC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801E44F0: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E44F4: sub.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801E44F8: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x801E44FC: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801E4500: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x801E4504: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E4508: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
L_801E450C:
    // 0x801E450C: beql        $t5, $zero, L_801E4538
    if (ctx->r13 == 0) {
        // 0x801E4510: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_801E4538;
    }
    goto skip_6;
    // 0x801E4510: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    skip_6:
    // 0x801E4514: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E4518: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E451C: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E4520: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801E4524: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x801E4528: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E452C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801E4530: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E4534: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
L_801E4538:
    // 0x801E4538: beql        $t7, $zero, L_801E4564
    if (ctx->r15 == 0) {
        // 0x801E453C: andi        $t9, $v0, 0x10
        ctx->r25 = ctx->r2 & 0X10;
            goto L_801E4564;
    }
    goto skip_7;
    // 0x801E453C: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    skip_7:
    // 0x801E4540: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E4544: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801E4548: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E454C: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x801E4550: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x801E4554: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801E4558: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x801E455C: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E4560: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
L_801E4564:
    // 0x801E4564: beql        $t9, $zero, L_801E4590
    if (ctx->r25 == 0) {
        // 0x801E4568: andi        $t3, $v0, 0x20
        ctx->r11 = ctx->r2 & 0X20;
            goto L_801E4590;
    }
    goto skip_8;
    // 0x801E4568: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
    skip_8:
    // 0x801E456C: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x801E4570: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801E4574: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801E4578: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x801E457C: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
    // 0x801E4580: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801E4584: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x801E4588: lhu         $v0, -0x4F6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F6E);
    // 0x801E458C: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
L_801E4590:
    // 0x801E4590: beql        $t3, $zero, L_801E45A8
    if (ctx->r11 == 0) {
        // 0x801E4594: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E45A8;
    }
    goto skip_9;
    // 0x801E4594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x801E4598: lhu         $t4, 0x16($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X16);
    // 0x801E459C: addiu       $t5, $t4, -0x8
    ctx->r13 = ADD32(ctx->r12, -0X8);
    // 0x801E45A0: sh          $t5, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r13;
    // 0x801E45A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E45A8:
    // 0x801E45A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E45AC: jr          $ra
    // 0x801E45B0: nop

    TRACE_RETURN()
    return;
    // 0x801E45B0: nop

;}
RECOMP_FUNC void func_801FA904_625CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA904: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FA908: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801FA90C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA914: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FA918: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801FA91C: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x801FA920: addiu       $t9, $zero, 0x136
    ctx->r25 = ADD32(0, 0X136);
    // 0x801FA924: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x801FA928: sb          $t6, 0x2C0($v1)
    MEM_B(0X2C0, ctx->r3) = ctx->r14;
    // 0x801FA92C: sb          $zero, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = 0;
    // 0x801FA930: sb          $zero, 0x2C2($v1)
    MEM_B(0X2C2, ctx->r3) = 0;
    // 0x801FA934: sb          $zero, 0x2C3($v1)
    MEM_B(0X2C3, ctx->r3) = 0;
    // 0x801FA938: sw          $t7, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->r15;
    // 0x801FA93C: sw          $t8, 0x1F0($v1)
    MEM_W(0X1F0, ctx->r3) = ctx->r24;
    // 0x801FA940: sw          $t9, 0x1F4($v1)
    MEM_W(0X1F4, ctx->r3) = ctx->r25;
    // 0x801FA944: sw          $t0, 0x1F8($v1)
    MEM_W(0X1F8, ctx->r3) = ctx->r8;
    // 0x801FA948: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    // 0x801FA94C: jal         0x80038BC8
    // 0x801FA950: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801FA950: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801FA954: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801FA958: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x801FA95C: jal         0x80034EF8
    // 0x801FA960: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x801FA960: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    after_1:
    // 0x801FA964: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA968: addiu       $a0, $a0, -0x565C
    ctx->r4 = ADD32(ctx->r4, -0X565C);
    // 0x801FA96C: jal         0x80034DD8
    // 0x801FA970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x801FA970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801FA974: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801FA978: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801FA97C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA980: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801FA984: sw          $zero, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = 0;
    // 0x801FA988: addiu       $a1, $a1, 0xC4
    ctx->r5 = ADD32(ctx->r5, 0XC4);
    // 0x801FA98C: jal         0x8003522C
    // 0x801FA990: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801FA990: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    after_3:
    // 0x801FA994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FA998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FA99C: jr          $ra
    // 0x801FA9A0: nop

    TRACE_RETURN()
    return;
    // 0x801FA9A0: nop

;}
RECOMP_FUNC void func_801D3564_5FE944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3568: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D356C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801D3570: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D3574: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x801D3578: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D357C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D3580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D3584: bne         $a0, $zero, L_801D3594
    if (ctx->r4 != 0) {
        // 0x801D3588: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801D3594;
    }
    // 0x801D3588: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D358C: b           L_801D35A0
    // 0x801D3590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D35A0;
    // 0x801D3590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D3594:
    // 0x801D3594: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x801D3598: jal         0x801D3324
    // 0x801D359C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    func_801D3324_5FE704(rdram, ctx);
        goto after_0;
    // 0x801D359C: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    after_0:
L_801D35A0:
    // 0x801D35A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D35A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D35A8: jr          $ra
    // 0x801D35AC: nop

    TRACE_RETURN()
    return;
    // 0x801D35AC: nop

;}
RECOMP_FUNC void func_801D9D64_605144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D9D68: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D9D6C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D9D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9D74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D9D78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D9D7C: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801D9D80: jal         0x80034ED4
    // 0x801D9D84: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801D9D84: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    after_0:
    // 0x801D9D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D9D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D9D90: jr          $ra
    // 0x801D9D94: nop

    TRACE_RETURN()
    return;
    // 0x801D9D94: nop

;}
RECOMP_FUNC void func_801E341C_60E7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E341C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E3420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3424: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E3428: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801E342C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801E3430: jal         0x80035EEC
    // 0x801E3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801E3434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801E3438: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801E343C: beq         $v0, $zero, L_801E354C
    if (ctx->r2 == 0) {
        // 0x801E3440: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_801E354C;
    }
    // 0x801E3440: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x801E3444: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801E3448: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801E344C: addiu       $t8, $t8, -0x4F54
    ctx->r24 = ADD32(ctx->r24, -0X4F54);
    // 0x801E3450: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E3454: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801E3458: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801E345C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x801E3460: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801E3464: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x801E3468: lhu         $a3, 0x8($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X8);
    // 0x801E346C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801E3470: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E3474: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801E3478: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x801E347C: sh          $a3, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r7;
    // 0x801E3480: lw          $t2, 0x90($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X90);
    // 0x801E3484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E3488: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E348C: bne         $a1, $t2, L_801E34A0
    if (ctx->r5 != ctx->r10) {
        // 0x801E3490: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E34A0;
    }
    // 0x801E3490: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3494: addiu       $t3, $zero, 0x2002
    ctx->r11 = ADD32(0, 0X2002);
    // 0x801E3498: b           L_801E34A8
    // 0x801E349C: sh          $t3, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r11;
        goto L_801E34A8;
    // 0x801E349C: sh          $t3, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r11;
L_801E34A0:
    // 0x801E34A0: addiu       $t4, $zero, 0x2009
    ctx->r12 = ADD32(0, 0X2009);
    // 0x801E34A4: sh          $t4, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r12;
L_801E34A8:
    // 0x801E34A8: lw          $t5, 0x90($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X90);
    // 0x801E34AC: addiu       $t8, $zero, 0x280
    ctx->r24 = ADD32(0, 0X280);
    // 0x801E34B0: addiu       $t0, $zero, 0x13F
    ctx->r8 = ADD32(0, 0X13F);
    // 0x801E34B4: bne         $a1, $t5, L_801E34D0
    if (ctx->r5 != ctx->r13) {
        // 0x801E34B8: addiu       $t1, $zero, 0xEF
        ctx->r9 = ADD32(0, 0XEF);
            goto L_801E34D0;
    }
    // 0x801E34B8: addiu       $t1, $zero, 0xEF
    ctx->r9 = ADD32(0, 0XEF);
    // 0x801E34BC: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x801E34C0: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x801E34C4: sh          $t6, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r14;
    // 0x801E34C8: b           L_801E34DC
    // 0x801E34CC: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
        goto L_801E34DC;
    // 0x801E34CC: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
L_801E34D0:
    // 0x801E34D0: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x801E34D4: sh          $t8, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r24;
    // 0x801E34D8: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
L_801E34DC:
    // 0x801E34DC: swc1        $f0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f0.u32l;
    // 0x801E34E0: swc1        $f0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f0.u32l;
    // 0x801E34E4: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x801E34E8: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x801E34EC: lwc1        $f4, -0x233C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X233C);
    // 0x801E34F0: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x801E34F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E34F8: sh          $zero, 0x2E($a2)
    MEM_H(0X2E, ctx->r6) = 0;
    // 0x801E34FC: sh          $zero, 0x32($a2)
    MEM_H(0X32, ctx->r6) = 0;
    // 0x801E3500: sh          $t0, 0x30($a2)
    MEM_H(0X30, ctx->r6) = ctx->r8;
    // 0x801E3504: sh          $t1, 0x34($a2)
    MEM_H(0X34, ctx->r6) = ctx->r9;
    // 0x801E3508: swc1        $f4, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f4.u32l;
    // 0x801E350C: swc1        $f6, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f6.u32l;
    // 0x801E3510: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x801E3514: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801E3518: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E351C: jal         0x80014840
    // 0x801E3520: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80014840_15440(rdram, ctx);
        goto after_1;
    // 0x801E3520: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x801E3524: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801E3528: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801E352C: sw          $v0, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r2;
    // 0x801E3530: jal         0x80014840
    // 0x801E3534: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x801E3534: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801E3538: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801E353C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E3540: addiu       $a0, $a0, 0x355C
    ctx->r4 = ADD32(ctx->r4, 0X355C);
    // 0x801E3544: jal         0x8003521C
    // 0x801E3548: sw          $v0, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E3548: sw          $v0, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r2;
    after_3:
L_801E354C:
    // 0x801E354C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E3550: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E3554: jr          $ra
    // 0x801E3558: nop

    TRACE_RETURN()
    return;
    // 0x801E3558: nop

;}
RECOMP_FUNC void func_801FFE54_62B234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFE54: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FFE58: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FFE5C: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x801FFE60: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801FFE64: jr          $ra
    // 0x801FFE68: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801FFE68: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801F3EB8_61F298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3EB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F3EBC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F3EC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3EC4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F3EC8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801F3ECC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F3ED0: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801F3ED4: jal         0x801D3018
    // 0x801F3ED8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F3ED8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F3EDC: jal         0x801F76D0
    // 0x801F3EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F3EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F3EE4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F3EE8: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801F3EEC: lw          $a2, 0x94($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X94);
    // 0x801F3EF0: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801F3EF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F3EF8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x801F3EFC: jal         0x801D46B8
    // 0x801F3F00: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_2;
    // 0x801F3F00: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x801F3F04: jal         0x801D614C
    // 0x801F3F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_3;
    // 0x801F3F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F3F0C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x801F3F10: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F3F14: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F3F18: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F3F1C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F3F20: addiu       $t7, $v0, 0x14
    ctx->r15 = ADD32(ctx->r2, 0X14);
    // 0x801F3F24: addiu       $t8, $v0, 0x16
    ctx->r24 = ADD32(ctx->r2, 0X16);
    // 0x801F3F28: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801F3F2C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801F3F30: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801F3F34: jal         0x8000EC04
    // 0x801F3F38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_4;
    // 0x801F3F38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x801F3F3C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801F3F40: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801F3F44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F3F48: jal         0x8000ED00
    // 0x801F3F4C: lw          $a0, 0x1CC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_5;
    // 0x801F3F4C: lw          $a0, 0x1CC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1CC);
    after_5:
    // 0x801F3F50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3F54: lwc1        $f4, -0x1988($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1988);
    // 0x801F3F58: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3F5C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801F3F60: nop

    // 0x801F3F64: bc1fl       L_801F3FB0
    if (!c1cs) {
        // 0x801F3F68: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F3FB0;
    }
    goto skip_0;
    // 0x801F3F68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x801F3F6C: lwc1        $f6, -0x1984($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1984);
    // 0x801F3F70: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x801F3F74: nop

    // 0x801F3F78: bc1fl       L_801F3FB0
    if (!c1cs) {
        // 0x801F3F7C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F3FB0;
    }
    goto skip_1;
    // 0x801F3F7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x801F3F80: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x801F3F84: swc1        $f20, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f20.u32l;
    // 0x801F3F88: jal         0x801F703C
    // 0x801F3F8C: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    func_801F703C_62241C(rdram, ctx);
        goto after_6;
    // 0x801F3F8C: swc1        $f20, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f20.u32l;
    after_6:
    // 0x801F3F90: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F3F94: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    // 0x801F3F98: jal         0x801D31CC
    // 0x801F3F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_7;
    // 0x801F3F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801F3FA0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3FA4: jal         0x8003521C
    // 0x801F3FA8: addiu       $a0, $a0, 0x3FC0
    ctx->r4 = ADD32(ctx->r4, 0X3FC0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F3FA8: addiu       $a0, $a0, 0x3FC0
    ctx->r4 = ADD32(ctx->r4, 0X3FC0);
    after_8:
    // 0x801F3FAC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F3FB0:
    // 0x801F3FB0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801F3FB4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F3FB8: jr          $ra
    // 0x801F3FBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801F3FBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801F28A4_61DC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F28A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F28A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F28AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F28B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F28B4: jal         0x801D3018
    // 0x801F28B8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F28B8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F28BC: jal         0x801F76D0
    // 0x801F28C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F28C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801F28C4: jal         0x8000DD58
    // 0x801F28C8: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801F28C8: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    after_2:
    // 0x801F28CC: addiu       $t6, $v0, -0x190
    ctx->r14 = ADD32(ctx->r2, -0X190);
    // 0x801F28D0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801F28D4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801F28D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F28DC: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F28E0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F28E4: lui         $a2, 0xC396
    ctx->r6 = S32(0XC396 << 16);
    // 0x801F28E8: lui         $a3, 0xC416
    ctx->r7 = S32(0XC416 << 16);
    // 0x801F28EC: swc1        $f14, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->f14.u32l;
    // 0x801F28F0: jal         0x8000E39C
    // 0x801F28F4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801F28F4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x801F28F8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F28FC: jal         0x8003521C
    // 0x801F2900: addiu       $a0, $a0, 0x2914
    ctx->r4 = ADD32(ctx->r4, 0X2914);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F2900: addiu       $a0, $a0, 0x2914
    ctx->r4 = ADD32(ctx->r4, 0X2914);
    after_4:
    // 0x801F2904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F2908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F290C: jr          $ra
    // 0x801F2910: nop

    TRACE_RETURN()
    return;
    // 0x801F2910: nop

;}
RECOMP_FUNC void func_801D7438_602818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7438: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801D743C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D7440: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x801D7444: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801D7448: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801D744C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D7450: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801D7454: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x801D7458: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x801D745C: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x801D7460: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x801D7464: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x801D7468: bne         $v1, $at, L_801D7488
    if (ctx->r3 != ctx->r1) {
        // 0x801D746C: swc1        $f2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
            goto L_801D7488;
    }
    // 0x801D746C: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x801D7470: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x801D7474: addiu       $t7, $t7, 0x40
    ctx->r15 = ADD32(ctx->r15, 0X40);
    // 0x801D7478: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D747C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801D7480: b           L_801D749C
    // 0x801D7484: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
        goto L_801D749C;
    // 0x801D7484: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
L_801D7488:
    // 0x801D7488: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801D748C: addiu       $t9, $t9, 0x120
    ctx->r25 = ADD32(ctx->r25, 0X120);
    // 0x801D7490: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D7494: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x801D7498: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
L_801D749C:
    // 0x801D749C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801D74A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D74A4: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x801D74A8: addiu       $t2, $sp, 0x5C
    ctx->r10 = ADD32(ctx->r29, 0X5C);
    // 0x801D74AC: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x801D74B0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801D74B4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D74B8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D74BC: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x801D74C0: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x801D74C4: jal         0x8000E4E4
    // 0x801D74C8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801D74C8: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D74CC: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D74D0: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801D74D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D74D8: lwc1        $f0, -0x29A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X29A8);
    // 0x801D74DC: lw          $a0, 0x1CC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X1CC);
    // 0x801D74E0: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D74E4: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D74E8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D74EC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801D74F0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801D74F4: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x801D74F8: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801D74FC: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801D7500: addiu       $t8, $zero, 0x4AF
    ctx->r24 = ADD32(0, 0X4AF);
    // 0x801D7504: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801D7508: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801D750C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801D7510: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801D7514: addiu       $a3, $a3, -0x5688
    ctx->r7 = ADD32(ctx->r7, -0X5688);
    // 0x801D7518: addiu       $a1, $a1, 0x7624
    ctx->r5 = ADD32(ctx->r5, 0X7624);
    // 0x801D751C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801D7520: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x801D7524: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D7528: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D752C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D7530: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D7534: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801D7538: jal         0x800358E8
    // 0x801D753C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x801D753C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x801D7540: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7544: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D7548: lwc1        $f0, -0x29A4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X29A4);
    // 0x801D754C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x801D7550: beq         $v0, $zero, L_801D7610
    if (ctx->r2 == 0) {
        // 0x801D7554: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D7610;
    }
    // 0x801D7554: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D7558: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x801D755C: bne         $v1, $at, L_801D75D4
    if (ctx->r3 != ctx->r1) {
        // 0x801D7560: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801D75D4;
    }
    // 0x801D7560: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D7564: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D7568: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D756C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D7570: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D7574: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D7578: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D757C: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801D7580: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x801D7584: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x801D7588: addiu       $t2, $zero, 0x4AF
    ctx->r10 = ADD32(0, 0X4AF);
    // 0x801D758C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801D7590: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801D7594: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801D7598: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801D759C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D75A0: addiu       $a2, $a2, -0x5688
    ctx->r6 = ADD32(ctx->r6, -0X5688);
    // 0x801D75A4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801D75A8: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x801D75AC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D75B0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D75B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D75B8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D75BC: jal         0x8000DBF0
    // 0x801D75C0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x801D75C0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801D75C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D75C8: beq         $v0, $zero, L_801D75D4
    if (ctx->r2 == 0) {
        // 0x801D75CC: addiu       $t3, $zero, 0x8
        ctx->r11 = ADD32(0, 0X8);
            goto L_801D75D4;
    }
    // 0x801D75CC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x801D75D0: sb          $t3, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r11;
L_801D75D4:
    // 0x801D75D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D75D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D75DC: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x801D75E0: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x801D75E4: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
    // 0x801D75E8: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    // 0x801D75EC: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x801D75F0: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x801D75F4: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801D75F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D75FC: sb          $t5, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r13;
    // 0x801D7600: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801D7604: addiu       $a0, $zero, 0x26B
    ctx->r4 = ADD32(0, 0X26B);
    // 0x801D7608: jal         0x8000F240
    // 0x801D760C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_3;
    // 0x801D760C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_3:
L_801D7610:
    // 0x801D7610: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D7614: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801D7618: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x801D761C: jr          $ra
    // 0x801D7620: nop

    TRACE_RETURN()
    return;
    // 0x801D7620: nop

;}
RECOMP_FUNC void func_801F8F84_624364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8F84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F8F88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F8F8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F8F90: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801F8F94: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F8F98: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x801F8F9C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F8FA0: bne         $t7, $zero, L_801F8FB8
    if (ctx->r15 != 0) {
        // 0x801F8FA4: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801F8FB8;
    }
    // 0x801F8FA4: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801F8FA8: jal         0x80034ED4
    // 0x801F8FAC: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801F8FAC: nop

    after_0:
    // 0x801F8FB0: b           L_801F9140
    // 0x801F8FB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F9140;
    // 0x801F8FB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F8FB8:
    // 0x801F8FB8: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801F8FBC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F8FC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F8FC4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F8FC8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F8FCC: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801F8FD0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F8FD4: swc1        $f16, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f16.u32l;
    // 0x801F8FD8: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x801F8FDC: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x801F8FE0: bgez        $t9, L_801F8FF4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801F8FE4: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801F8FF4;
    }
    // 0x801F8FE4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801F8FE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F8FEC: nop

    // 0x801F8FF0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801F8FF4:
    // 0x801F8FF4: lwc1        $f8, 0x98($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801F8FF8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F8FFC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F9000: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801F9004: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801F9008: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801F900C: nop

    // 0x801F9010: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801F9014: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801F9018: nop

    // 0x801F901C: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801F9020: beql        $t1, $zero, L_801F9070
    if (ctx->r9 == 0) {
        // 0x801F9024: mfc1        $t1, $f16
        ctx->r9 = (int32_t)ctx->f16.u32l;
            goto L_801F9070;
    }
    goto skip_0;
    // 0x801F9024: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x801F9028: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F902C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F9030: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801F9034: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801F9038: nop

    // 0x801F903C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801F9040: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801F9044: nop

    // 0x801F9048: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x801F904C: bne         $t1, $zero, L_801F9064
    if (ctx->r9 != 0) {
        // 0x801F9050: nop
    
            goto L_801F9064;
    }
    // 0x801F9050: nop

    // 0x801F9054: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x801F9058: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F905C: b           L_801F907C
    // 0x801F9060: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_801F907C;
    // 0x801F9060: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_801F9064:
    // 0x801F9064: b           L_801F907C
    // 0x801F9068: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_801F907C;
    // 0x801F9068: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x801F906C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
L_801F9070:
    // 0x801F9070: nop

    // 0x801F9074: bltz        $t1, L_801F9064
    if (SIGNED(ctx->r9) < 0) {
        // 0x801F9078: nop
    
            goto L_801F9064;
    }
    // 0x801F9078: nop

L_801F907C:
    // 0x801F907C: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801F9080: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801F9084: lwc1        $f12, 0x90($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F9088: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F908C: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x801F9090: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801F9094: nop

    // 0x801F9098: bc1fl       L_801F90E4
    if (!c1cs) {
        // 0x801F909C: lwc1        $f18, 0x94($a0)
        ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
            goto L_801F90E4;
    }
    goto skip_1;
    // 0x801F909C: lwc1        $f18, 0x94($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
    skip_1:
    // 0x801F90A0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801F90A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F90A8: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x801F90AC: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x801F90B0: div.d       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x801F90B4: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801F90B8: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801F90BC: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x801F90C0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F90C4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x801F90C8: lwc1        $f18, 0x90($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801F90CC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F90D0: div.d       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x801F90D4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F90D8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F90DC: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x801F90E0: lwc1        $f18, 0x94($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
L_801F90E4:
    // 0x801F90E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F90E8: ldc1        $f6, -0x1778($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1778);
    // 0x801F90EC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F90F0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801F90F4: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801F90F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F90FC: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801F9100: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F9104: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F9108: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801F910C: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x801F9110: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801F9114: lwc1        $f16, 0x94($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801F9118: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801F911C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x801F9120: jal         0x8000DF10
    // 0x801F9124: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801F9124: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x801F9128: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F912C: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x801F9130: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F9134: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x801F9138: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x801F913C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F9140:
    // 0x801F9140: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F9144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F9148: jr          $ra
    // 0x801F914C: nop

    TRACE_RETURN()
    return;
    // 0x801F914C: nop

;}
RECOMP_FUNC void func_801EF704_61AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF70C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EF710: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF714: jal         0x801D326C
    // 0x801EF718: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_0;
    // 0x801EF718: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801EF71C: jal         0x801F7168
    // 0x801EF720: nop

    func_801F7168_622548(rdram, ctx);
        goto after_1;
    // 0x801EF720: nop

    after_1:
    // 0x801EF724: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF728: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801EF72C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EF730: lwc1        $f6, 0x20($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801EF734: lui         $a2, 0x3CA3
    ctx->r6 = S32(0X3CA3 << 16);
    // 0x801EF738: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x801EF73C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EF740: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801EF744: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801EF748: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801EF74C: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801EF750: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x801EF754: jal         0x801D6A30
    // 0x801EF758: nop

    func_801D6A30_601E10(rdram, ctx);
        goto after_2;
    // 0x801EF758: nop

    after_2:
    // 0x801EF75C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF760: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF764: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801EF768: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EF76C: lbu         $t8, 0x2C1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2C1);
    // 0x801EF770: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x801EF774: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF778: bne         $t8, $at, L_801EF798
    if (ctx->r24 != ctx->r1) {
        // 0x801EF77C: addiu       $a1, $a1, -0x4D68
        ctx->r5 = ADD32(ctx->r5, -0X4D68);
            goto L_801EF798;
    }
    // 0x801EF77C: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    // 0x801EF780: sb          $t9, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r25;
    // 0x801EF784: jal         0x801D31CC
    // 0x801EF788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801EF788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801EF78C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF790: jal         0x8003521C
    // 0x801EF794: addiu       $a0, $a0, -0x858
    ctx->r4 = ADD32(ctx->r4, -0X858);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801EF794: addiu       $a0, $a0, -0x858
    ctx->r4 = ADD32(ctx->r4, -0X858);
    after_4:
L_801EF798:
    // 0x801EF798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF7A0: jr          $ra
    // 0x801EF7A4: nop

    TRACE_RETURN()
    return;
    // 0x801EF7A4: nop

;}
RECOMP_FUNC void func_801F9F70_625350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9F70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F9F74: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F9F78: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F9F7C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801F9F80: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F9F84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F9F88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F9F8C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F9F90: addiu       $t6, $zero, 0xAB
    ctx->r14 = ADD32(0, 0XAB);
    // 0x801F9F94: sw          $t6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r14;
    // 0x801F9F98: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x801F9F9C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801F9FA0: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    // 0x801F9FA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F9FA8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x801F9FAC: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x801F9FB0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x801F9FB4: jal         0x8000E630
    // 0x801F9FB8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801F9FB8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x801F9FBC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x801F9FC0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801F9FC4: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801F9FC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F9FCC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x801F9FD0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801F9FD4: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x801F9FD8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9FDC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F9FE0: addiu       $a0, $a0, -0x5FF4
    ctx->r4 = ADD32(ctx->r4, -0X5FF4);
    // 0x801F9FE4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x801F9FE8: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801F9FEC: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x801F9FF0: jal         0x8003521C
    // 0x801F9FF4: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F9FF4: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    after_1:
    // 0x801F9FF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F9FFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FA000: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801FA004: jr          $ra
    // 0x801FA008: nop

    TRACE_RETURN()
    return;
    // 0x801FA008: nop

;}
RECOMP_FUNC void func_80203F5C_62F33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203F5C: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x80203F60: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80203F64: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80203F68: sw          $a1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r5;
    // 0x80203F6C: sw          $v0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->r2;
    // 0x80203F70: swc1        $f12, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f12.u32l;
    // 0x80203F74: swc1        $f14, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f14.u32l;
    // 0x80203F78: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80203F7C: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x80203F80: jr          $ra
    // 0x80203F84: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80203F84: swc1        $f4, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_801E4FD4_6103B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4FD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E4FD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E4FDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E4FE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4FE4: jal         0x801EF280
    // 0x801E4FE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801EF280_61A660(rdram, ctx);
        goto after_0;
    // 0x801E4FE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E4FEC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E4FF0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4FF4: sw          $t6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r14;
    // 0x801E4FF8: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801E4FFC: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x801E5000: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    // 0x801E5004: jal         0x801D31CC
    // 0x801E5008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E5008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E500C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5010: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E5014: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801E5018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E501C: jal         0x801D34D0
    // 0x801E5020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E5020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E5024: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801E5028: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801E502C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E5030: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801E5034: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x801E5038: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801E503C: jal         0x8000E39C
    // 0x801E5040: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801E5040: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    after_3:
    // 0x801E5044: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5048: jal         0x8003521C
    // 0x801E504C: addiu       $a0, $a0, 0x5064
    ctx->r4 = ADD32(ctx->r4, 0X5064);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E504C: addiu       $a0, $a0, 0x5064
    ctx->r4 = ADD32(ctx->r4, 0X5064);
    after_4:
    // 0x801E5050: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E5054: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E5058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E505C: jr          $ra
    // 0x801E5060: nop

    TRACE_RETURN()
    return;
    // 0x801E5060: nop

;}
RECOMP_FUNC void func_801E2934_60DD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2934: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E2938: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E293C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E2940: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2944: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E2948: bne         $a1, $zero, L_801E2960
    if (ctx->r5 != 0) {
        // 0x801E294C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_801E2960;
    }
    // 0x801E294C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E2950: jal         0x80034ED4
    // 0x801E2954: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2954: nop

    after_0:
    // 0x801E2958: b           L_801E29F4
    // 0x801E295C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E29F4;
    // 0x801E295C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2960:
    // 0x801E2960: lw          $t6, 0xA0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA0);
    // 0x801E2964: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801E2968: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E296C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2970: jal         0x801D6508
    // 0x801E2974: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801E2974: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    after_1:
    // 0x801E2978: jal         0x801D60E4
    // 0x801E297C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_2;
    // 0x801E297C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E2980: lbu         $t7, 0x90($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X90);
    // 0x801E2984: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    // 0x801E2988: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801E298C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801E2990: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E2994: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x801E2998: subu        $v0, $t9, $t8
    ctx->r2 = SUB32(ctx->r25, ctx->r24);
    // 0x801E299C: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x801E29A0: lw          $a2, 0x90($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X90);
    // 0x801E29A4: lw          $a3, 0x94($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X94);
    // 0x801E29A8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801E29AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E29B0: jal         0x8000DF10
    // 0x801E29B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_3;
    // 0x801E29B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x801E29B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E29BC: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801E29C0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E29C4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801E29C8: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x801E29CC: lbu         $a3, 0xA7($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XA7);
    // 0x801E29D0: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x801E29D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E29D8: jal         0x801D3324
    // 0x801E29DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D3324_5FE704(rdram, ctx);
        goto after_4;
    // 0x801E29DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801E29E0: bnel        $v0, $zero, L_801E29F4
    if (ctx->r2 != 0) {
        // 0x801E29E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E29F4;
    }
    goto skip_0;
    // 0x801E29E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E29E8: jal         0x80034ED4
    // 0x801E29EC: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_5;
    // 0x801E29EC: nop

    after_5:
    // 0x801E29F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E29F4:
    // 0x801E29F4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E29F8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E29FC: jr          $ra
    // 0x801E2A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E2A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D8B74_603F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8B74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D8B78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D8B7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D8B80: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D8B84: lwc1        $f6, 0x90($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801D8B88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D8B8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D8B90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D8B94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D8B98: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8B9C: addiu       $a0, $a0, -0x737C
    ctx->r4 = ADD32(ctx->r4, -0X737C);
    // 0x801D8BA0: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x801D8BA4: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D8BA8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801D8BAC: nop

    // 0x801D8BB0: bc1fl       L_801D8BC4
    if (!c1cs) {
        // 0x801D8BB4: lw          $a1, 0x34($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X34);
            goto L_801D8BC4;
    }
    goto skip_0;
    // 0x801D8BB4: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    skip_0:
    // 0x801D8BB8: jal         0x8003521C
    // 0x801D8BBC: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D8BBC: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x801D8BC0: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
L_801D8BC4:
    // 0x801D8BC4: beq         $a1, $zero, L_801D8C68
    if (ctx->r5 == 0) {
        // 0x801D8BC8: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801D8C68;
    }
    // 0x801D8BC8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801D8BCC: lbu         $t6, 0x4C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4C);
    // 0x801D8BD0: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x801D8BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8BD8: bne         $t6, $at, L_801D8C40
    if (ctx->r14 != ctx->r1) {
        // 0x801D8BDC: lui         $t1, 0x801E
        ctx->r9 = S32(0X801E << 16);
            goto L_801D8C40;
    }
    // 0x801D8BDC: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x801D8BE0: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x801D8BE4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x801D8BE8: addiu       $t9, $t9, -0x737C
    ctx->r25 = ADD32(ctx->r25, -0X737C);
    // 0x801D8BEC: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x801D8BF0: beq         $t8, $zero, L_801D8C24
    if (ctx->r24 == 0) {
        // 0x801D8BF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D8C24;
    }
    // 0x801D8BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D8BF8: jal         0x801D8E08
    // 0x801D8BFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801D8E08_6041E8(rdram, ctx);
        goto after_1;
    // 0x801D8BFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_1:
    // 0x801D8C00: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x801D8C04: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801D8C08: sw          $t0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r8;
    // 0x801D8C0C: jal         0x801D36BC
    // 0x801D8C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_2;
    // 0x801D8C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D8C14: jal         0x8003521C
    // 0x801D8C18: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801D8C18: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801D8C1C: b           L_801D8C68
    // 0x801D8C20: nop

        goto L_801D8C68;
    // 0x801D8C20: nop

L_801D8C24:
    // 0x801D8C24: jal         0x801D8E08
    // 0x801D8C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D8E08_6041E8(rdram, ctx);
        goto after_4;
    // 0x801D8C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D8C2C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8C30: jal         0x8003521C
    // 0x801D8C34: addiu       $a0, $a0, -0x7248
    ctx->r4 = ADD32(ctx->r4, -0X7248);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801D8C34: addiu       $a0, $a0, -0x7248
    ctx->r4 = ADD32(ctx->r4, -0X7248);
    after_5:
    // 0x801D8C38: b           L_801D8C68
    // 0x801D8C3C: nop

        goto L_801D8C68;
    // 0x801D8C3C: nop

L_801D8C40:
    // 0x801D8C40: addiu       $t1, $t1, -0x737C
    ctx->r9 = ADD32(ctx->r9, -0X737C);
    // 0x801D8C44: jal         0x801D8F20
    // 0x801D8C48: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801D8F20_604300(rdram, ctx);
        goto after_6;
    // 0x801D8C48: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_6:
    // 0x801D8C4C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x801D8C50: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801D8C54: sw          $t2, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r10;
    // 0x801D8C58: jal         0x801D36BC
    // 0x801D8C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_7;
    // 0x801D8C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801D8C60: jal         0x8003521C
    // 0x801D8C64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801D8C64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
L_801D8C68:
    // 0x801D8C68: jal         0x801D9030
    // 0x801D8C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9030_604410(rdram, ctx);
        goto after_9;
    // 0x801D8C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801D8C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D8C74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D8C78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D8C7C: jr          $ra
    // 0x801D8C80: nop

    TRACE_RETURN()
    return;
    // 0x801D8C80: nop

;}
RECOMP_FUNC void func_801F2854_61DC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F285C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F2860: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F2864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F2868: jal         0x801D3F00
    // 0x801F286C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_0;
    // 0x801F286C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801F2870: beq         $v0, $zero, L_801F2894
    if (ctx->r2 == 0) {
        // 0x801F2874: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801F2894;
    }
    // 0x801F2874: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F2878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F287C: jal         0x801D3E90
    // 0x801F2880: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801D3E90_5FF270(rdram, ctx);
        goto after_1;
    // 0x801F2880: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x801F2884: beql        $v0, $zero, L_801F2898
    if (ctx->r2 == 0) {
        // 0x801F2888: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F2898;
    }
    goto skip_0;
    // 0x801F2888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F288C: jal         0x801F0540
    // 0x801F2890: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F0540_61B920(rdram, ctx);
        goto after_2;
    // 0x801F2890: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
L_801F2894:
    // 0x801F2894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2898:
    // 0x801F2898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F289C: jr          $ra
    // 0x801F28A0: nop

    TRACE_RETURN()
    return;
    // 0x801F28A0: nop

;}
RECOMP_FUNC void func_801ECBC0_617FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECBC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ECBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ECBC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801ECBCC: jal         0x801ECEDC
    // 0x801ECBD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801ECBD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801ECBD4: bne         $v0, $zero, L_801ECC00
    if (ctx->r2 != 0) {
        // 0x801ECBD8: addiu       $t6, $zero, 0xF
        ctx->r14 = ADD32(0, 0XF);
            goto L_801ECC00;
    }
    // 0x801ECBD8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x801ECBDC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801ECBE0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ECBE4: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    // 0x801ECBE8: sw          $t6, 0xA4($t7)
    MEM_W(0XA4, ctx->r15) = ctx->r14;
    // 0x801ECBEC: jal         0x801D2EE4
    // 0x801ECBF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801ECBF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801ECBF4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ECBF8: jal         0x8003521C
    // 0x801ECBFC: addiu       $a0, $a0, -0x33F0
    ctx->r4 = ADD32(ctx->r4, -0X33F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801ECBFC: addiu       $a0, $a0, -0x33F0
    ctx->r4 = ADD32(ctx->r4, -0X33F0);
    after_2:
L_801ECC00:
    // 0x801ECC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ECC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ECC08: jr          $ra
    // 0x801ECC0C: nop

    TRACE_RETURN()
    return;
    // 0x801ECC0C: nop

;}
RECOMP_FUNC void func_801F3B20_61EF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F3B28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F3B2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3B30: jal         0x801F76D0
    // 0x801F3B34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F3B34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F3B38: jal         0x801D603C
    // 0x801F3B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D603C_60141C(rdram, ctx);
        goto after_1;
    // 0x801F3B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F3B40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F3B44: jal         0x801D2F40
    // 0x801F3B48: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801F3B48: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_2:
    // 0x801F3B4C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F3B50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F3B54: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F3B58: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801F3B5C: nop

    // 0x801F3B60: bc1fl       L_801F3B9C
    if (!c1cs) {
        // 0x801F3B64: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F3B9C;
    }
    goto skip_0;
    // 0x801F3B64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F3B68: jal         0x801D2EE4
    // 0x801F3B6C: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801F3B6C: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    after_3:
    // 0x801F3B70: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F3B74: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x801F3B78: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3B7C: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801F3B80: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
    // 0x801F3B84: addiu       $a0, $a0, 0x3BAC
    ctx->r4 = ADD32(ctx->r4, 0X3BAC);
    // 0x801F3B88: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
    // 0x801F3B8C: swc1        $f2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f2.u32l;
    // 0x801F3B90: jal         0x8003521C
    // 0x801F3B94: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F3B94: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    after_4:
    // 0x801F3B98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F3B9C:
    // 0x801F3B9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3BA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3BA4: jr          $ra
    // 0x801F3BA8: nop

    TRACE_RETURN()
    return;
    // 0x801F3BA8: nop

;}
RECOMP_FUNC void func_801D6330_601710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D6334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6338: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D633C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801D6340: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D6344: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D6348: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D634C: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801D6350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D6354: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D6358: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801D635C: nop

    // 0x801D6360: bc1fl       L_801D6374
    if (!c1cs) {
        // 0x801D6364: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_801D6374;
    }
    goto skip_0;
    // 0x801D6364: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    skip_0:
    // 0x801D6368: b           L_801D6374
    // 0x801D636C: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
        goto L_801D6374;
    // 0x801D636C: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
    // 0x801D6370: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_801D6374:
    // 0x801D6374: lwc1        $f0, 0x74($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D6378: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D637C: nop

    // 0x801D6380: bc1fl       L_801D6394
    if (!c1cs) {
        // 0x801D6384: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_801D6394;
    }
    goto skip_1;
    // 0x801D6384: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_1:
    // 0x801D6388: b           L_801D6394
    // 0x801D638C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_801D6394;
    // 0x801D638C: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x801D6390: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_801D6394:
    // 0x801D6394: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x801D6398: nop

    // 0x801D639C: bc1fl       L_801D640C
    if (!c1cs) {
        // 0x801D63A0: swc1        $f18, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
            goto L_801D640C;
    }
    goto skip_2;
    // 0x801D63A0: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    skip_2:
    // 0x801D63A4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x801D63A8: nop

    // 0x801D63AC: bc1fl       L_801D63DC
    if (!c1cs) {
        // 0x801D63B0: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_801D63DC;
    }
    goto skip_3;
    // 0x801D63B0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_3:
    // 0x801D63B4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D63B8: nop

    // 0x801D63BC: bc1f        L_801D63D0
    if (!c1cs) {
        // 0x801D63C0: nop
    
            goto L_801D63D0;
    }
    // 0x801D63C0: nop

    // 0x801D63C4: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x801D63C8: b           L_801D63F8
    // 0x801D63CC: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
        goto L_801D63F8;
    // 0x801D63CC: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
L_801D63D0:
    // 0x801D63D0: b           L_801D63F8
    // 0x801D63D4: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
        goto L_801D63F8;
    // 0x801D63D4: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801D63D8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_801D63DC:
    // 0x801D63DC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801D63E0: bc1fl       L_801D63F8
    if (!c1cs) {
        // 0x801D63E4: swc1        $f2, 0x74($a0)
        MEM_W(0X74, ctx->r4) = ctx->f2.u32l;
            goto L_801D63F8;
    }
    goto skip_4;
    // 0x801D63E4: swc1        $f2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f2.u32l;
    skip_4:
    // 0x801D63E8: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x801D63EC: b           L_801D63F8
    // 0x801D63F0: swc1        $f10, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f10.u32l;
        goto L_801D63F8;
    // 0x801D63F0: swc1        $f10, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f10.u32l;
    // 0x801D63F4: swc1        $f2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f2.u32l;
L_801D63F8:
    // 0x801D63F8: jal         0x801D603C
    // 0x801D63FC: nop

    func_801D603C_60141C(rdram, ctx);
        goto after_0;
    // 0x801D63FC: nop

    after_0:
    // 0x801D6400: b           L_801D640C
    // 0x801D6404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D640C;
    // 0x801D6404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D6408: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
L_801D640C:
    // 0x801D640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D6414: jr          $ra
    // 0x801D6418: nop

    TRACE_RETURN()
    return;
    // 0x801D6418: nop

;}
RECOMP_FUNC void func_801F3C9C_61F07C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3C9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F3CA0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F3CA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F3CA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F3CAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F3CB0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F3CB4: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801F3CB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3CBC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F3CC0: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x801F3CC4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x801F3CC8: jal         0x801D655C
    // 0x801F3CCC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D655C_60193C(rdram, ctx);
        goto after_0;
    // 0x801F3CCC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801F3CD0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F3CD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F3CD8: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801F3CDC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F3CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3CE4: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    // 0x801F3CE8: lui         $a2, 0xC3C8
    ctx->r6 = S32(0XC3C8 << 16);
    // 0x801F3CEC: jal         0x801D67FC
    // 0x801F3CF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D67FC_601BDC(rdram, ctx);
        goto after_1;
    // 0x801F3CF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801F3CF4: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x801F3CF8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F3CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3D00: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x801F3D04: jal         0x801D6A30
    // 0x801F3D08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_801D6A30_601E10(rdram, ctx);
        goto after_2;
    // 0x801F3D08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x801F3D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3D10: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801F3D14: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801F3D18: jal         0x801D5D98
    // 0x801F3D1C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_3;
    // 0x801F3D1C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_3:
    // 0x801F3D20: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801F3D24: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F3D28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F3D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3D30: jal         0x801D5C30
    // 0x801F3D34: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_4;
    // 0x801F3D34: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x801F3D38: jal         0x801F76D0
    // 0x801F3D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_5;
    // 0x801F3D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F3D40: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801F3D44: jal         0x801D2F40
    // 0x801F3D48: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_6;
    // 0x801F3D48: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_6:
    // 0x801F3D4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F3D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3D54: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801F3D58: nop

    // 0x801F3D5C: bc1fl       L_801F3DBC
    if (!c1cs) {
        // 0x801F3D60: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F3DBC;
    }
    goto skip_0;
    // 0x801F3D60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801F3D64: jal         0x801F80F0
    // 0x801F3D68: lbu         $a1, 0x87($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X87);
    func_801F80F0_6234D0(rdram, ctx);
        goto after_7;
    // 0x801F3D68: lbu         $a1, 0x87($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X87);
    after_7:
    // 0x801F3D6C: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x801F3D70: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801F3D74: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x801F3D78: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801F3D7C: bne         $t7, $at, L_801F3D98
    if (ctx->r15 != ctx->r1) {
        // 0x801F3D80: sw          $t7, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->r15;
            goto L_801F3D98;
    }
    // 0x801F3D80: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x801F3D84: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3D88: jal         0x8003521C
    // 0x801F3D8C: addiu       $a0, $a0, 0x3DCC
    ctx->r4 = ADD32(ctx->r4, 0X3DCC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F3D8C: addiu       $a0, $a0, 0x3DCC
    ctx->r4 = ADD32(ctx->r4, 0X3DCC);
    after_8:
    // 0x801F3D90: b           L_801F3DBC
    // 0x801F3D94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F3DBC;
    // 0x801F3D94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F3D98:
    // 0x801F3D98: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801F3D9C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F3DA0: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    // 0x801F3DA4: jal         0x801D2EE4
    // 0x801F3DA8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_9;
    // 0x801F3DA8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x801F3DAC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3DB0: jal         0x8003521C
    // 0x801F3DB4: addiu       $a0, $a0, 0x3BAC
    ctx->r4 = ADD32(ctx->r4, 0X3BAC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801F3DB4: addiu       $a0, $a0, 0x3BAC
    ctx->r4 = ADD32(ctx->r4, 0X3BAC);
    after_10:
    // 0x801F3DB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F3DBC:
    // 0x801F3DBC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F3DC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F3DC4: jr          $ra
    // 0x801F3DC8: nop

    TRACE_RETURN()
    return;
    // 0x801F3DC8: nop

;}
RECOMP_FUNC void func_801E8C04_613FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8C0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E8C10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E8C14: lwc1        $f12, 0x94($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801E8C18: lwc1        $f2, 0x28($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E8C1C: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x801E8C20: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x801E8C24: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801E8C28: nop

    // 0x801E8C2C: bc1fl       L_801E8C7C
    if (!c1cs) {
        // 0x801E8C30: lw          $v0, 0x7C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X7C);
            goto L_801E8C7C;
    }
    goto skip_0;
    // 0x801E8C30: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    skip_0:
    // 0x801E8C34: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E8C38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E8C3C: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x801E8C40: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x801E8C44: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801E8C48: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x801E8C4C: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x801E8C50: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E8C54: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801E8C58: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E8C5C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x801E8C60: nop

    // 0x801E8C64: bc1fl       L_801E8CD0
    if (!c1cs) {
        // 0x801E8C68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E8CD0;
    }
    goto skip_1;
    // 0x801E8C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E8C6C: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801E8C70: b           L_801E8CCC
    // 0x801E8C74: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
        goto L_801E8CCC;
    // 0x801E8C74: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801E8C78: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_801E8C7C:
    // 0x801E8C7C: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x801E8C80: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x801E8C84: bgtz        $v0, L_801E8CCC
    if (SIGNED(ctx->r2) > 0) {
        // 0x801E8C88: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801E8CCC;
    }
    // 0x801E8C88: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801E8C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E8C90: jal         0x801D3A18
    // 0x801E8C94: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_0;
    // 0x801E8C94: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    after_0:
    // 0x801E8C98: beq         $v0, $zero, L_801E8CC4
    if (ctx->r2 == 0) {
        // 0x801E8C9C: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801E8CC4;
    }
    // 0x801E8C9C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E8CA0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801E8CA4: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801E8CA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E8CAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E8CB0: addiu       $a0, $a0, 0x4C5C
    ctx->r4 = ADD32(ctx->r4, 0X4C5C);
    // 0x801E8CB4: jal         0x8003521C
    // 0x801E8CB8: sb          $t8, 0x2C4($t9)
    MEM_B(0X2C4, ctx->r25) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E8CB8: sb          $t8, 0x2C4($t9)
    MEM_B(0X2C4, ctx->r25) = ctx->r24;
    after_1:
    // 0x801E8CBC: b           L_801E8CD0
    // 0x801E8CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8CD0;
    // 0x801E8CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8CC4:
    // 0x801E8CC4: jal         0x8003521C
    // 0x801E8CC8: addiu       $a0, $a0, -0x7324
    ctx->r4 = ADD32(ctx->r4, -0X7324);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E8CC8: addiu       $a0, $a0, -0x7324
    ctx->r4 = ADD32(ctx->r4, -0X7324);
    after_2:
L_801E8CCC:
    // 0x801E8CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8CD0:
    // 0x801E8CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E8CD4: jr          $ra
    // 0x801E8CD8: nop

    TRACE_RETURN()
    return;
    // 0x801E8CD8: nop

;}
RECOMP_FUNC void func_801DA720_605B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA720: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801DA724: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801DA728: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801DA72C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801DA730: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DA734: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801DA738: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801DA73C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x801DA740: bne         $a0, $at, L_801DA758
    if (ctx->r4 != ctx->r1) {
        // 0x801DA744: lw          $t0, -0x1130($t0)
        ctx->r8 = MEM_W(ctx->r8, -0X1130);
            goto L_801DA758;
    }
    // 0x801DA744: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801DA748: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x801DA74C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DA750: b           L_801DA764
    // 0x801DA754: lw          $t1, 0x28($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X28);
        goto L_801DA764;
    // 0x801DA754: lw          $t1, 0x28($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X28);
L_801DA758:
    // 0x801DA758: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x801DA75C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DA760: lw          $t1, 0x20($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X20);
L_801DA764:
    // 0x801DA764: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801DA768: addiu       $a1, $a1, 0x40C
    ctx->r5 = ADD32(ctx->r5, 0X40C);
    // 0x801DA76C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801DA770: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801DA774: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DA778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DA77C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA780: ldc1        $f8, -0x26C0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X26C0);
    // 0x801DA784: mul.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x801DA788: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x801DA78C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DA790: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801DA794: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801DA798: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801DA79C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DA7A0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA7A4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801DA7A8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801DA7AC: addiu       $t7, $zero, 0x4A8
    ctx->r15 = ADD32(0, 0X4A8);
    // 0x801DA7B0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801DA7B4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801DA7B8: addiu       $a2, $a2, -0x5AA0
    ctx->r6 = ADD32(ctx->r6, -0X5AA0);
    // 0x801DA7BC: addiu       $a0, $a0, -0x5670
    ctx->r4 = ADD32(ctx->r4, -0X5670);
    // 0x801DA7C0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DA7C4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DA7C8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801DA7CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801DA7D0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DA7D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801DA7D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801DA7DC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DA7E0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801DA7E4: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x801DA7E8: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x801DA7EC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801DA7F0: jal         0x80035854
    // 0x801DA7F4: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801DA7F4: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x801DA7F8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801DA7FC: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x801DA800: beq         $v0, $zero, L_801DA97C
    if (ctx->r2 == 0) {
        // 0x801DA804: lw          $t1, 0x48($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X48);
            goto L_801DA97C;
    }
    // 0x801DA804: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x801DA808: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801DA80C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801DA810: addiu       $a3, $zero, 0x4A8
    ctx->r7 = ADD32(0, 0X4A8);
    // 0x801DA814: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x801DA818: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x801DA81C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x801DA820: jal         0x8000E100
    // 0x801DA824: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_8000E100_ED00(rdram, ctx);
        goto after_1;
    // 0x801DA824: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_1:
    // 0x801DA828: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x801DA82C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x801DA830: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x801DA834: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x801DA838: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x801DA83C: addiu       $t8, $t8, 0x1E1C
    ctx->r24 = ADD32(ctx->r24, 0X1E1C);
    // 0x801DA840: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x801DA844: addiu       $t2, $v1, 0xD0
    ctx->r10 = ADD32(ctx->r3, 0XD0);
    // 0x801DA848: sb          $zero, 0x30($v1)
    MEM_B(0X30, ctx->r3) = 0;
    // 0x801DA84C: sw          $t8, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r24;
    // 0x801DA850: sb          $t9, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r25;
    // 0x801DA854: sw          $t2, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r10;
    // 0x801DA858: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DA85C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x801DA860: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801DA864: swc1        $f6, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->f6.u32l;
    // 0x801DA868: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DA86C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x801DA870: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801DA874: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x801DA878: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DA87C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA880: sw          $zero, 0x98($v1)
    MEM_W(0X98, ctx->r3) = 0;
    // 0x801DA884: sw          $zero, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = 0;
    // 0x801DA888: sw          $t3, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->r11;
    // 0x801DA88C: ldc1        $f16, -0x26B8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X26B8);
    // 0x801DA890: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x801DA894: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA898: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801DA89C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DA8A0: ldc1        $f10, -0x26B0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X26B0);
    // 0x801DA8A4: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x801DA8A8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801DA8AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DA8B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DA8B4: addiu       $t9, $zero, 0x41
    ctx->r25 = ADD32(0, 0X41);
    // 0x801DA8B8: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x801DA8BC: addiu       $t2, $zero, -0x25
    ctx->r10 = ADD32(0, -0X25);
    // 0x801DA8C0: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x801DA8C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DA8C8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x801DA8CC: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x801DA8D0: trunc.w.d   $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x801DA8D4: swc1        $f18, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->f18.u32l;
    // 0x801DA8D8: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801DA8DC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801DA8E0: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801DA8E4: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801DA8E8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x801DA8EC: nop

    // 0x801DA8F0: sw          $t6, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r14;
    // 0x801DA8F4: lhu         $t7, 0x16($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X16);
    // 0x801DA8F8: sw          $t7, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = ctx->r15;
    // 0x801DA8FC: lhu         $t8, 0x14($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X14);
    // 0x801DA900: sw          $t9, 0xBC($v1)
    MEM_W(0XBC, ctx->r3) = ctx->r25;
    // 0x801DA904: sw          $t2, 0xC0($v1)
    MEM_W(0XC0, ctx->r3) = ctx->r10;
    // 0x801DA908: sw          $t3, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = ctx->r11;
    // 0x801DA90C: sw          $t1, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r9;
    // 0x801DA910: swc1        $f2, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->f2.u32l;
    // 0x801DA914: swc1        $f2, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->f2.u32l;
    // 0x801DA918: swc1        $f2, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->f2.u32l;
    // 0x801DA91C: sw          $t8, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r24;
    // 0x801DA920: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x801DA924: bgez        $a0, L_801DA934
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801DA928: sra         $t4, $a0, 1
        ctx->r12 = S32(SIGNED(ctx->r4) >> 1);
            goto L_801DA934;
    }
    // 0x801DA928: sra         $t4, $a0, 1
    ctx->r12 = S32(SIGNED(ctx->r4) >> 1);
    // 0x801DA92C: addiu       $at, $a0, 0x1
    ctx->r1 = ADD32(ctx->r4, 0X1);
    // 0x801DA930: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_801DA934:
    // 0x801DA934: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x801DA938: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x801DA93C: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801DA940: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DA944: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DA948: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801DA94C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x801DA950: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801DA954: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801DA958: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801DA95C: nop

    // 0x801DA960: slti        $at, $t6, 0x401
    ctx->r1 = SIGNED(ctx->r14) < 0X401 ? 1 : 0;
    // 0x801DA964: bne         $at, $zero, L_801DA974
    if (ctx->r1 != 0) {
        // 0x801DA968: sw          $t6, 0x9C($v1)
        MEM_W(0X9C, ctx->r3) = ctx->r14;
            goto L_801DA974;
    }
    // 0x801DA968: sw          $t6, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r14;
    // 0x801DA96C: addiu       $t7, $t6, -0x400
    ctx->r15 = ADD32(ctx->r14, -0X400);
    // 0x801DA970: sw          $t7, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r15;
L_801DA974:
    // 0x801DA974: b           L_801DA980
    // 0x801DA978: sw          $zero, 0xC8($v1)
    MEM_W(0XC8, ctx->r3) = 0;
        goto L_801DA980;
    // 0x801DA978: sw          $zero, 0xC8($v1)
    MEM_W(0XC8, ctx->r3) = 0;
L_801DA97C:
    // 0x801DA97C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA980:
    // 0x801DA980: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DA984: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801DA988: jr          $ra
    // 0x801DA98C: nop

    TRACE_RETURN()
    return;
    // 0x801DA98C: nop

;}
RECOMP_FUNC void func_802045E8_62F9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802045E8: addiu       $t6, $zero, 0x42
    ctx->r14 = ADD32(0, 0X42);
    // 0x802045EC: jr          $ra
    // 0x802045F0: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x802045F0: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801D6534_601914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6534: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D653C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6540: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801D6544: jal         0x801D6508
    // 0x801D6548: nop

    func_801D6508_6018E8(rdram, ctx);
        goto after_0;
    // 0x801D6548: nop

    after_0:
    // 0x801D654C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D6554: jr          $ra
    // 0x801D6558: nop

    TRACE_RETURN()
    return;
    // 0x801D6558: nop

;}
RECOMP_FUNC void func_801EB628_616A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB628: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801EB62C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EB630: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801EB634: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801EB638: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EB63C: jal         0x801D609C
    // 0x801EB640: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801D609C_60147C(rdram, ctx);
        goto after_0;
    // 0x801EB640: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801EB644: jal         0x801D60B4
    // 0x801EB648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60B4_601494(rdram, ctx);
        goto after_1;
    // 0x801EB648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801EB64C: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x801EB650: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EB654: addiu       $a1, $a1, -0x5C58
    ctx->r5 = ADD32(ctx->r5, -0X5C58);
    // 0x801EB658: addiu       $t7, $t6, -0x6
    ctx->r15 = ADD32(ctx->r14, -0X6);
    // 0x801EB65C: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    // 0x801EB660: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB664: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x801EB668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EB66C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EB670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EB674: jal         0x8000DDF0
    // 0x801EB678: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8000DDF0_E9F0(rdram, ctx);
        goto after_2;
    // 0x801EB678: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_2:
    // 0x801EB67C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB680: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801EB684: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB688: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801EB68C: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x801EB690: lw          $t1, 0x80($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X80);
    // 0x801EB694: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801EB698: bne         $t2, $zero, L_801EB6B0
    if (ctx->r10 != 0) {
        // 0x801EB69C: sw          $t2, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r10;
            goto L_801EB6B0;
    }
    // 0x801EB69C: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
    // 0x801EB6A0: jal         0x80035020
    // 0x801EB6A4: nop

    func_80035020_35C20(rdram, ctx);
        goto after_3;
    // 0x801EB6A4: nop

    after_3:
    // 0x801EB6A8: b           L_801EB780
    // 0x801EB6AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_801EB780;
    // 0x801EB6AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801EB6B0:
    // 0x801EB6B0: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    // 0x801EB6B4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801EB6B8: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801EB6BC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801EB6C0: bgtz        $t5, L_801EB77C
    if (SIGNED(ctx->r13) > 0) {
        // 0x801EB6C4: sw          $t5, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r13;
            goto L_801EB77C;
    }
    // 0x801EB6C4: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x801EB6C8: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801EB6CC: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801EB6D0: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x801EB6D4: lw          $a1, 0x2C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X2C);
    // 0x801EB6D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EB6DC: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EB6E0: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801EB6E4: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x801EB6E8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801EB6EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801EB6F0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801EB6F4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EB6F8: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EB6FC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EB700: addiu       $t1, $zero, 0x4B0
    ctx->r9 = ADD32(0, 0X4B0);
    // 0x801EB704: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801EB708: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801EB70C: addiu       $a0, $a0, -0x4870
    ctx->r4 = ADD32(ctx->r4, -0X4870);
    // 0x801EB710: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EB714: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801EB718: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801EB71C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EB720: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x801EB724: jal         0x80035854
    // 0x801EB728: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_4;
    // 0x801EB728: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x801EB72C: beq         $v0, $zero, L_801EB77C
    if (ctx->r2 == 0) {
        // 0x801EB730: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801EB77C;
    }
    // 0x801EB730: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EB734: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x801EB738: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x801EB73C: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x801EB740: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x801EB744: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x801EB748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB74C: lw          $t4, 0x90($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X90);
    // 0x801EB750: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EB754: addiu       $a1, $a1, -0x5C58
    ctx->r5 = ADD32(ctx->r5, -0X5C58);
    // 0x801EB758: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EB75C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EB760: jal         0x8000DDF0
    // 0x801EB764: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_8000DDF0_E9F0(rdram, ctx);
        goto after_5;
    // 0x801EB764: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_5:
    // 0x801EB768: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB76C: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x801EB770: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB774: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x801EB778: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
L_801EB77C:
    // 0x801EB77C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801EB780:
    // 0x801EB780: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801EB784: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801EB788: jr          $ra
    // 0x801EB78C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801EB78C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801F9860_624C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9860: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F9864: addiu       $a2, $a2, -0x1130
    ctx->r6 = ADD32(ctx->r6, -0X1130);
    // 0x801F9868: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801F986C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9874: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F9878: lw          $t6, 0x1D8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D8);
    // 0x801F987C: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x801F9880: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801F9884: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x801F9888: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F988C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801F9890: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x801F9894: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801F9898: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x801F989C: nop

    // 0x801F98A0: bc1fl       L_801F98D8
    if (!c1cs) {
        // 0x801F98A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F98D8;
    }
    goto skip_0;
    // 0x801F98A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F98A8: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x801F98AC: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x801F98B0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801F98B4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801F98B8: bne         $t8, $zero, L_801F98D4
    if (ctx->r24 != 0) {
        // 0x801F98BC: sw          $t8, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r24;
            goto L_801F98D4;
    }
    // 0x801F98BC: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x801F98C0: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x801F98C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F98C8: addiu       $a0, $a0, -0x671C
    ctx->r4 = ADD32(ctx->r4, -0X671C);
    // 0x801F98CC: jal         0x8003521C
    // 0x801F98D0: sb          $t0, 0x2C1($t1)
    MEM_B(0X2C1, ctx->r9) = ctx->r8;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F98D0: sb          $t0, 0x2C1($t1)
    MEM_B(0X2C1, ctx->r9) = ctx->r8;
    after_0:
L_801F98D4:
    // 0x801F98D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F98D8:
    // 0x801F98D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F98DC: jr          $ra
    // 0x801F98E0: nop

    TRACE_RETURN()
    return;
    // 0x801F98E0: nop

;}
RECOMP_FUNC void func_80204910_62FCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204910: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80204914: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80204918: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8020491C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80204920: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x80204924: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80204928: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8020492C: bnel        $v1, $zero, L_80204948
    if (ctx->r3 != 0) {
        // 0x80204930: lw          $v0, 0x18($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X18);
            goto L_80204948;
    }
    goto skip_0;
    // 0x80204930: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    skip_0:
    // 0x80204934: jal         0x80034ED4
    // 0x80204938: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80204938: nop

    after_0:
    // 0x8020493C: b           L_80204A48
    // 0x80204940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80204A48;
    // 0x80204940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80204944: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
L_80204948:
    // 0x80204948: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8020494C: bnel        $v0, $zero, L_80204968
    if (ctx->r2 != 0) {
        // 0x80204950: lwc1        $f0, 0xAC($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0XAC);
            goto L_80204968;
    }
    goto skip_1;
    // 0x80204950: lwc1        $f0, 0xAC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAC);
    skip_1:
    // 0x80204954: jal         0x80034ED4
    // 0x80204958: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80204958: nop

    after_1:
    // 0x8020495C: b           L_80204A48
    // 0x80204960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80204A48;
    // 0x80204960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80204964: lwc1        $f0, 0xAC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XAC);
L_80204968:
    // 0x80204968: lwc1        $f2, 0xB0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x8020496C: lw          $t6, 0x7C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X7C);
    // 0x80204970: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80204974: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80204978: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8020497C: sw          $t7, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r15;
    // 0x80204980: bc1fl       L_80204998
    if (!c1cs) {
        // 0x80204984: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_80204998;
    }
    goto skip_2;
    // 0x80204984: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_2:
    // 0x80204988: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8020498C: b           L_80204998
    // 0x80204990: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_80204998;
    // 0x80204990: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x80204994: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_80204998:
    // 0x80204998: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8020499C: lw          $t8, 0x7C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X7C);
    // 0x802049A0: addiu       $t0, $s0, 0xC
    ctx->r8 = ADD32(ctx->r16, 0XC);
    // 0x802049A4: addiu       $t1, $s0, 0x10
    ctx->r9 = ADD32(ctx->r16, 0X10);
    // 0x802049A8: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x802049AC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802049B0: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
    // 0x802049B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802049B8: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x802049BC: add.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x802049C0: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
    // 0x802049C4: lwc1        $f18, 0xB0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x802049C8: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x802049CC: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x802049D0: lwc1        $f8, 0xB0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XB0);
    // 0x802049D4: add.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x802049D8: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x802049DC: lwc1        $f10, 0xA0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XA0);
    // 0x802049E0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x802049E4: lwc1        $f16, 0xA4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XA4);
    // 0x802049E8: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x802049EC: lwc1        $f18, 0xA8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XA8);
    // 0x802049F0: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x802049F4: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x802049F8: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x802049FC: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x80204A00: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80204A04: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80204A08: jal         0x8000E808
    // 0x80204A0C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000E808_F408(rdram, ctx);
        goto after_2;
    // 0x80204A0C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x80204A10: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80204A14: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80204A18: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80204A1C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80204A20: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80204A24: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80204A28: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x80204A2C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80204A30: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80204A34: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x80204A38: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80204A3C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80204A40: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x80204A44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80204A48:
    // 0x80204A48: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80204A4C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80204A50: jr          $ra
    // 0x80204A54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80204A54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801EE604_6199E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EE608: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EE60C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801EE610: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EE614: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801EE618: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EE61C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801EE620: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EE624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EE628: jal         0x801D15BC
    // 0x801EE62C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801EE62C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x801EE630: jal         0x80038BC8
    // 0x801EE634: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801EE634: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_1:
    // 0x801EE638: jal         0x801D16B4
    // 0x801EE63C: nop

    func_801D16B4_5FCA94(rdram, ctx);
        goto after_2;
    // 0x801EE63C: nop

    after_2:
    // 0x801EE640: jal         0x80034ED4
    // 0x801EE644: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801EE644: nop

    after_3:
    // 0x801EE648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EE64C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EE650: jr          $ra
    // 0x801EE654: nop

    TRACE_RETURN()
    return;
    // 0x801EE654: nop

;}
RECOMP_FUNC void func_801D655C_60193C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D655C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6564: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6568: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801D656C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6570: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801D6574: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801D6578: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D657C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D6580: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D6584: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D6588: nop

    // 0x801D658C: bc1fl       L_801D65AC
    if (!c1cs) {
        // 0x801D6590: c.lt.s      $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
            goto L_801D65AC;
    }
    goto skip_0;
    // 0x801D6590: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    skip_0:
    // 0x801D6594: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D6598: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D659C: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D65A0: b           L_801D6658
    // 0x801D65A4: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
        goto L_801D6658;
    // 0x801D65A4: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
    // 0x801D65A8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
L_801D65AC:
    // 0x801D65AC: nop

    // 0x801D65B0: bc1fl       L_801D65D0
    if (!c1cs) {
        // 0x801D65B4: lwc1        $f0, 0x70($a2)
        ctx->f0.u32l = MEM_W(ctx->r6, 0X70);
            goto L_801D65D0;
    }
    goto skip_1;
    // 0x801D65B4: lwc1        $f0, 0x70($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X70);
    skip_1:
    // 0x801D65B8: lwc1        $f10, 0x70($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X70);
    // 0x801D65BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D65C0: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x801D65C4: b           L_801D6658
    // 0x801D65C8: swc1        $f16, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f16.u32l;
        goto L_801D6658;
    // 0x801D65C8: swc1        $f16, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f16.u32l;
    // 0x801D65CC: lwc1        $f0, 0x70($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X70);
L_801D65D0:
    // 0x801D65D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D65D4: nop

    // 0x801D65D8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801D65DC: nop

    // 0x801D65E0: bc1fl       L_801D65F8
    if (!c1cs) {
        // 0x801D65E4: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_801D65F8;
    }
    goto skip_2;
    // 0x801D65E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_2:
    // 0x801D65E8: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801D65EC: b           L_801D6654
    // 0x801D65F0: swc1        $f4, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f4.u32l;
        goto L_801D6654;
    // 0x801D65F0: swc1        $f4, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f4.u32l;
    // 0x801D65F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_801D65F8:
    // 0x801D65F8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x801D65FC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801D6600: nop

    // 0x801D6604: bc1f        L_801D6618
    if (!c1cs) {
        // 0x801D6608: nop
    
            goto L_801D6618;
    }
    // 0x801D6608: nop

    // 0x801D660C: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D6610: b           L_801D6654
    // 0x801D6614: swc1        $f8, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f8.u32l;
        goto L_801D6654;
    // 0x801D6614: swc1        $f8, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f8.u32l;
L_801D6618:
    // 0x801D6618: jal         0x8000DD58
    // 0x801D661C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801D661C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D6620: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D6624: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801D6628: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D662C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801D6630: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D6634: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801D6638: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D663C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D6640: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x801D6644: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801D6648: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801D664C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D6650: swc1        $f10, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f10.u32l;
L_801D6654:
    // 0x801D6654: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D6658:
    // 0x801D6658: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D665C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D6660: addiu       $a0, $a2, 0x70
    ctx->r4 = ADD32(ctx->r6, 0X70);
    // 0x801D6664: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801D6668: nop

    // 0x801D666C: bc1fl       L_801D6680
    if (!c1cs) {
        // 0x801D6670: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801D6680;
    }
    goto skip_3;
    // 0x801D6670: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x801D6674: b           L_801D6680
    // 0x801D6678: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801D6680;
    // 0x801D6678: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801D667C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801D6680:
    // 0x801D6680: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801D6684: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    // 0x801D6688: jal         0x801D725C
    // 0x801D668C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_801D725C_60263C(rdram, ctx);
        goto after_1;
    // 0x801D668C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x801D6690: jal         0x801D609C
    // 0x801D6694: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D609C_60147C(rdram, ctx);
        goto after_2;
    // 0x801D6694: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801D6698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D669C: lbu         $v0, 0x1B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D66A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D66A4: jr          $ra
    // 0x801D66A8: nop

    TRACE_RETURN()
    return;
    // 0x801D66A8: nop

;}
RECOMP_FUNC void func_801EA174_615554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA174: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801EA178: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EA17C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EA180: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801EA184: lbu         $t7, 0x6B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6B);
    // 0x801EA188: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EA18C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801EA190: lw          $t0, 0x1D8($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EA194: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801EA198: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801EA19C: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x801EA1A0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801EA1A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801EA1A8: addiu       $t9, $t9, -0x4E28
    ctx->r25 = ADD32(ctx->r25, -0X4E28);
    // 0x801EA1AC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x801EA1B0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801EA1B4: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EA1B8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801EA1BC: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x801EA1C0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EA1C4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EA1C8: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x801EA1CC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x801EA1D0: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x801EA1D4: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EA1D8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801EA1DC: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x801EA1E0: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EA1E4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EA1E8: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801EA1EC: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801EA1F0: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801EA1F4: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801EA1F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801EA1FC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801EA200: jal         0x8000E808
    // 0x801EA204: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801EA204: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EA208: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x801EA20C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801EA210: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801EA214: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EA218: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801EA21C: addiu       $a1, $a1, -0x840
    ctx->r5 = ADD32(ctx->r5, -0X840);
    // 0x801EA220: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EA224: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EA228: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EA22C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EA230: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x801EA234: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EA238: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801EA23C: addiu       $t6, $zero, 0x4B0
    ctx->r14 = ADD32(0, 0X4B0);
    // 0x801EA240: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA244: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801EA248: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x801EA24C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EA250: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x801EA254: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EA258: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801EA25C: addiu       $a0, $a0, -0x5C10
    ctx->r4 = ADD32(ctx->r4, -0X5C10);
    // 0x801EA260: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EA264: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EA268: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801EA26C: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EA270: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EA274: lhu         $t3, 0x14($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X14);
    // 0x801EA278: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801EA27C: lhu         $t4, 0x16($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X16);
    // 0x801EA280: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801EA284: lhu         $t5, 0x18($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X18);
    // 0x801EA288: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801EA28C: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EA290: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801EA294: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EA298: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801EA29C: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EA2A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EA2A4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801EA2A8: jal         0x80035854
    // 0x801EA2AC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801EA2AC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801EA2B0: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x801EA2B4: beq         $v0, $zero, L_801EA3DC
    if (ctx->r2 == 0) {
        // 0x801EA2B8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801EA3DC;
    }
    // 0x801EA2B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801EA2BC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EA2C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EA2C4: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EA2C8: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801EA2CC: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801EA2D0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801EA2D4: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EA2D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EA2DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801EA2E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EA2E4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801EA2E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801EA2EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801EA2F0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801EA2F4: jal         0x801E006C
    // 0x801EA2F8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801EA2F8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801EA2FC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EA300: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x801EA304: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x801EA308: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EA30C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EA310: sb          $t7, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r15;
    // 0x801EA314: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801EA318: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801EA31C: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x801EA320: jal         0x8000E39C
    // 0x801EA324: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801EA324: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_3:
    // 0x801EA328: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801EA32C: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801EA330: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801EA334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EA338: jal         0x8000EE50
    // 0x801EA33C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_8000EE50_FA50(rdram, ctx);
        goto after_4;
    // 0x801EA33C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_4:
    // 0x801EA340: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    // 0x801EA344: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801EA348: addiu       $t9, $t9, -0x4DF8
    ctx->r25 = ADD32(ctx->r25, -0X4DF8);
    // 0x801EA34C: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x801EA350: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801EA354: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x801EA358: sw          $a0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r4;
    // 0x801EA35C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801EA360: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x801EA364: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x801EA368: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
    // 0x801EA36C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801EA370: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801EA374: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x801EA378: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801EA37C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EA380: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x801EA384: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x801EA388: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x801EA38C: lh          $t1, 0xC($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XC);
    // 0x801EA390: addiu       $t7, $zero, -0x28
    ctx->r15 = ADD32(0, -0X28);
    // 0x801EA394: sb          $t2, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r10;
    // 0x801EA398: sw          $t3, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r11;
    // 0x801EA39C: sb          $t4, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r12;
    // 0x801EA3A0: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x801EA3A4: sh          $t5, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r13;
    // 0x801EA3A8: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x801EA3AC: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
    // 0x801EA3B0: sh          $t6, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r14;
    // 0x801EA3B4: sh          $t7, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r15;
    // 0x801EA3B8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EA3BC: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801EA3C0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801EA3C4: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801EA3C8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801EA3CC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x801EA3D0: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x801EA3D4: jal         0x8000F3D8
    // 0x801EA3D8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_5;
    // 0x801EA3D8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_5:
L_801EA3DC:
    // 0x801EA3DC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EA3E0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801EA3E4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801EA3E8: jr          $ra
    // 0x801EA3EC: nop

    TRACE_RETURN()
    return;
    // 0x801EA3EC: nop

;}
RECOMP_FUNC void func_801D6D40_602120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6D40: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D6D44: lw          $a2, -0x1130($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1130);
    // 0x801D6D48: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801D6D4C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x801D6D50: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x801D6D54: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x801D6D58: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D6D5C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D6D60: addiu       $v1, $a2, 0x100
    ctx->r3 = ADD32(ctx->r6, 0X100);
    // 0x801D6D64: addiu       $a3, $a2, 0x118
    ctx->r7 = ADD32(ctx->r6, 0X118);
    // 0x801D6D68: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x801D6D6C: addu        $t3, $v1, $t0
    ctx->r11 = ADD32(ctx->r3, ctx->r8);
    // 0x801D6D70: lbu         $t4, 0x3($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X3);
    // 0x801D6D74: lbu         $t2, 0x3($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X3);
    // 0x801D6D78: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x801D6D7C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801D6D80: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801D6D84: beq         $at, $zero, L_801D6DB4
    if (ctx->r1 == 0) {
        // 0x801D6D88: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D6DB4;
    }
    // 0x801D6D88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D6D8C: subu        $t8, $t4, $t7
    ctx->r24 = SUB32(ctx->r12, ctx->r15);
    // 0x801D6D90: sb          $t8, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r24;
    // 0x801D6D94: lbu         $v1, 0x3($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X3);
    // 0x801D6D98: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x801D6D9C: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x801D6DA0: bnel        $at, $zero, L_801D6DEC
    if (ctx->r1 != 0) {
        // 0x801D6DA4: lbu         $v1, 0x4($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X4);
            goto L_801D6DEC;
    }
    goto skip_0;
    // 0x801D6DA4: lbu         $v1, 0x4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X4);
    skip_0:
    // 0x801D6DA8: sb          $v1, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r3;
    // 0x801D6DAC: b           L_801D6DE8
    // 0x801D6DB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D6DE8;
    // 0x801D6DB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6DB4:
    // 0x801D6DB4: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x801D6DB8: beq         $at, $zero, L_801D6DE4
    if (ctx->r1 == 0) {
        // 0x801D6DBC: addu        $t5, $t4, $a1
        ctx->r13 = ADD32(ctx->r12, ctx->r5);
            goto L_801D6DE4;
    }
    // 0x801D6DBC: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x801D6DC0: sb          $t5, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r13;
    // 0x801D6DC4: lbu         $v1, 0x3($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X3);
    // 0x801D6DC8: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x801D6DCC: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D6DD0: bnel        $at, $zero, L_801D6DEC
    if (ctx->r1 != 0) {
        // 0x801D6DD4: lbu         $v1, 0x4($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X4);
            goto L_801D6DEC;
    }
    goto skip_1;
    // 0x801D6DD4: lbu         $v1, 0x4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X4);
    skip_1:
    // 0x801D6DD8: sb          $v1, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r3;
    // 0x801D6DDC: b           L_801D6DE8
    // 0x801D6DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D6DE8;
    // 0x801D6DE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6DE4:
    // 0x801D6DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6DE8:
    // 0x801D6DE8: lbu         $v1, 0x4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X4);
L_801D6DEC:
    // 0x801D6DEC: lbu         $a0, 0x4($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X4);
    // 0x801D6DF0: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D6DF4: beq         $at, $zero, L_801D6E20
    if (ctx->r1 == 0) {
        // 0x801D6DF8: subu        $t7, $a0, $a1
        ctx->r15 = SUB32(ctx->r4, ctx->r5);
            goto L_801D6E20;
    }
    // 0x801D6DF8: subu        $t7, $a0, $a1
    ctx->r15 = SUB32(ctx->r4, ctx->r5);
    // 0x801D6DFC: sb          $t7, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r15;
    // 0x801D6E00: lbu         $v1, 0x4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X4);
    // 0x801D6E04: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x801D6E08: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801D6E0C: bnel        $at, $zero, L_801D6E58
    if (ctx->r1 != 0) {
        // 0x801D6E10: lbu         $v1, 0x5($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X5);
            goto L_801D6E58;
    }
    goto skip_2;
    // 0x801D6E10: lbu         $v1, 0x5($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X5);
    skip_2:
    // 0x801D6E14: sb          $v1, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r3;
    // 0x801D6E18: b           L_801D6E54
    // 0x801D6E1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D6E54;
    // 0x801D6E1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6E20:
    // 0x801D6E20: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D6E24: beq         $at, $zero, L_801D6E50
    if (ctx->r1 == 0) {
        // 0x801D6E28: addu        $t9, $a0, $a1
        ctx->r25 = ADD32(ctx->r4, ctx->r5);
            goto L_801D6E50;
    }
    // 0x801D6E28: addu        $t9, $a0, $a1
    ctx->r25 = ADD32(ctx->r4, ctx->r5);
    // 0x801D6E2C: sb          $t9, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r25;
    // 0x801D6E30: lbu         $v1, 0x4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X4);
    // 0x801D6E34: andi        $t5, $t9, 0xFF
    ctx->r13 = ctx->r25 & 0XFF;
    // 0x801D6E38: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D6E3C: bnel        $at, $zero, L_801D6E58
    if (ctx->r1 != 0) {
        // 0x801D6E40: lbu         $v1, 0x5($t1)
        ctx->r3 = MEM_BU(ctx->r9, 0X5);
            goto L_801D6E58;
    }
    goto skip_3;
    // 0x801D6E40: lbu         $v1, 0x5($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X5);
    skip_3:
    // 0x801D6E44: sb          $v1, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r3;
    // 0x801D6E48: b           L_801D6E54
    // 0x801D6E4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D6E54;
    // 0x801D6E4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6E50:
    // 0x801D6E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6E54:
    // 0x801D6E54: lbu         $v1, 0x5($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X5);
L_801D6E58:
    // 0x801D6E58: lbu         $a0, 0x5($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X5);
    // 0x801D6E5C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D6E60: beq         $at, $zero, L_801D6E8C
    if (ctx->r1 == 0) {
        // 0x801D6E64: subu        $t6, $a0, $a1
        ctx->r14 = SUB32(ctx->r4, ctx->r5);
            goto L_801D6E8C;
    }
    // 0x801D6E64: subu        $t6, $a0, $a1
    ctx->r14 = SUB32(ctx->r4, ctx->r5);
    // 0x801D6E68: sb          $t6, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r14;
    // 0x801D6E6C: lbu         $v1, 0x5($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X5);
    // 0x801D6E70: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801D6E74: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801D6E78: bnel        $at, $zero, L_801D6EC4
    if (ctx->r1 != 0) {
        // 0x801D6E7C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801D6EC4;
    }
    goto skip_4;
    // 0x801D6E7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_4:
    // 0x801D6E80: sb          $v1, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r3;
    // 0x801D6E84: b           L_801D6EC0
    // 0x801D6E88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D6EC0;
    // 0x801D6E88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6E8C:
    // 0x801D6E8C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D6E90: beq         $at, $zero, L_801D6EBC
    if (ctx->r1 == 0) {
        // 0x801D6E94: addu        $t8, $a0, $a1
        ctx->r24 = ADD32(ctx->r4, ctx->r5);
            goto L_801D6EBC;
    }
    // 0x801D6E94: addu        $t8, $a0, $a1
    ctx->r24 = ADD32(ctx->r4, ctx->r5);
    // 0x801D6E98: sb          $t8, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r24;
    // 0x801D6E9C: lbu         $v1, 0x5($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X5);
    // 0x801D6EA0: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x801D6EA4: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D6EA8: bnel        $at, $zero, L_801D6EC4
    if (ctx->r1 != 0) {
        // 0x801D6EAC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801D6EC4;
    }
    goto skip_5;
    // 0x801D6EAC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_5:
    // 0x801D6EB0: sb          $v1, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r3;
    // 0x801D6EB4: b           L_801D6EC0
    // 0x801D6EB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D6EC0;
    // 0x801D6EB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6EBC:
    // 0x801D6EBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6EC0:
    // 0x801D6EC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_801D6EC4:
    // 0x801D6EC4: bnel        $v0, $at, L_801D6ED8
    if (ctx->r2 != ctx->r1) {
        // 0x801D6EC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D6ED8;
    }
    goto skip_6;
    // 0x801D6EC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x801D6ECC: jr          $ra
    // 0x801D6ED0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D6ED0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D6ED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D6ED8:
    // 0x801D6ED8: jr          $ra
    // 0x801D6EDC: nop

    TRACE_RETURN()
    return;
    // 0x801D6EDC: nop

;}
RECOMP_FUNC void func_801CCC0C_5F7FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCC0C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CCC10: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CCC14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CCC18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCC1C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801CCC20: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801CCC24: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CCC28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CCC2C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x801CCC30: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x801CCC34: addiu       $a3, $v0, 0x100
    ctx->r7 = ADD32(ctx->r2, 0X100);
    // 0x801CCC38: addiu       $t0, $v0, 0x118
    ctx->r8 = ADD32(ctx->r2, 0X118);
    // 0x801CCC3C: beq         $t6, $zero, L_801CCC4C
    if (ctx->r14 == 0) {
        // 0x801CCC40: addiu       $t2, $v0, 0x130
        ctx->r10 = ADD32(ctx->r2, 0X130);
            goto L_801CCC4C;
    }
    // 0x801CCC40: addiu       $t2, $v0, 0x130
    ctx->r10 = ADD32(ctx->r2, 0X130);
    // 0x801CCC44: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801CCC48: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
L_801CCC4C:
    // 0x801CCC4C: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x801CCC50: beql        $v0, $zero, L_801CCC60
    if (ctx->r2 == 0) {
        // 0x801CCC54: sw          $v1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r3;
            goto L_801CCC60;
    }
    goto skip_0;
    // 0x801CCC54: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    skip_0:
    // 0x801CCC58: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x801CCC5C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
L_801CCC60:
    // 0x801CCC60: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x801CCC64: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801CCC68: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x801CCC6C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801CCC70: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x801CCC74: jal         0x801D2178
    // 0x801CCC78: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_801D2178_5FD558(rdram, ctx);
        goto after_0;
    // 0x801CCC78: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x801CCC7C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801CCC80: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801CCC84: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801CCC88: lbu         $t8, 0x2C2($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X2C2);
    // 0x801CCC8C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x801CCC90: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801CCC94: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCC98: beq         $t8, $zero, L_801CCCC4
    if (ctx->r24 == 0) {
        // 0x801CCC9C: lw          $t2, 0x24($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X24);
            goto L_801CCCC4;
    }
    // 0x801CCC9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801CCCA0: lw          $t9, 0x1C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X1C);
    // 0x801CCCA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CCCA8: beq         $v1, $zero, L_801CCCB4
    if (ctx->r3 == 0) {
        // 0x801CCCAC: sb          $a0, 0x64($t9)
        MEM_B(0X64, ctx->r25) = ctx->r4;
            goto L_801CCCB4;
    }
    // 0x801CCCAC: sb          $a0, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r4;
    // 0x801CCCB0: sb          $a0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r4;
L_801CCCB4:
    // 0x801CCCB4: beql        $a1, $zero, L_801CCCE4
    if (ctx->r5 == 0) {
        // 0x801CCCB8: sw          $v1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r3;
            goto L_801CCCE4;
    }
    goto skip_1;
    // 0x801CCCB8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    skip_1:
    // 0x801CCCBC: b           L_801CCCE0
    // 0x801CCCC0: sb          $a0, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r4;
        goto L_801CCCE0;
    // 0x801CCCC0: sb          $a0, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r4;
L_801CCCC4:
    // 0x801CCCC4: lw          $t3, 0x1C($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X1C);
    // 0x801CCCC8: beq         $v1, $zero, L_801CCCD4
    if (ctx->r3 == 0) {
        // 0x801CCCCC: sb          $zero, 0x64($t3)
        MEM_B(0X64, ctx->r11) = 0;
            goto L_801CCCD4;
    }
    // 0x801CCCCC: sb          $zero, 0x64($t3)
    MEM_B(0X64, ctx->r11) = 0;
    // 0x801CCCD0: sb          $zero, 0x64($v1)
    MEM_B(0X64, ctx->r3) = 0;
L_801CCCD4:
    // 0x801CCCD4: beql        $a1, $zero, L_801CCCE4
    if (ctx->r5 == 0) {
        // 0x801CCCD8: sw          $v1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r3;
            goto L_801CCCE4;
    }
    goto skip_2;
    // 0x801CCCD8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    skip_2:
    // 0x801CCCDC: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
L_801CCCE0:
    // 0x801CCCE0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
L_801CCCE4:
    // 0x801CCCE4: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x801CCCE8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801CCCEC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x801CCCF0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801CCCF4: jal         0x801D39A0
    // 0x801CCCF8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_1;
    // 0x801CCCF8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_1:
    // 0x801CCCFC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801CCD00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CCD04: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x801CCD08: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x801CCD0C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801CCD10: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCD14: beq         $v0, $zero, L_801CCD34
    if (ctx->r2 == 0) {
        // 0x801CCD18: lw          $t2, 0x24($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X24);
            goto L_801CCD34;
    }
    // 0x801CCD18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801CCD1C: beq         $v1, $zero, L_801CCD28
    if (ctx->r3 == 0) {
        // 0x801CCD20: nop
    
            goto L_801CCD28;
    }
    // 0x801CCD20: nop

    // 0x801CCD24: sb          $a0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r4;
L_801CCD28:
    // 0x801CCD28: beql        $a1, $zero, L_801CCD38
    if (ctx->r5 == 0) {
        // 0x801CCD2C: lbu         $v0, 0x9C($a2)
        ctx->r2 = MEM_BU(ctx->r6, 0X9C);
            goto L_801CCD38;
    }
    goto skip_3;
    // 0x801CCD2C: lbu         $v0, 0x9C($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9C);
    skip_3:
    // 0x801CCD30: sb          $a0, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r4;
L_801CCD34:
    // 0x801CCD34: lbu         $v0, 0x9C($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9C);
L_801CCD38:
    // 0x801CCD38: sb          $v0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r2;
    // 0x801CCD3C: sb          $v0, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r2;
    // 0x801CCD40: lbu         $v0, 0x9D($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9D);
    // 0x801CCD44: sb          $v0, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r2;
    // 0x801CCD48: sb          $v0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r2;
    // 0x801CCD4C: lbu         $v0, 0x9E($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9E);
    // 0x801CCD50: sb          $v0, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r2;
    // 0x801CCD54: sb          $v0, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r2;
    // 0x801CCD58: lw          $t4, 0x68($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X68);
    // 0x801CCD5C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CCD60: slti        $at, $t4, 0x33
    ctx->r1 = SIGNED(ctx->r12) < 0X33 ? 1 : 0;
    // 0x801CCD64: beql        $at, $zero, L_801CCE6C
    if (ctx->r1 == 0) {
        // 0x801CCD68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CCE6C;
    }
    goto skip_4;
    // 0x801CCD68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x801CCD6C: lw          $v0, -0x6338($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6338);
    // 0x801CCD70: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x801CCD74: slti        $at, $v0, 0x168
    ctx->r1 = SIGNED(ctx->r2) < 0X168 ? 1 : 0;
    // 0x801CCD78: bnel        $at, $zero, L_801CCD88
    if (ctx->r1 != 0) {
        // 0x801CCD7C: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_801CCD88;
    }
    goto skip_5;
    // 0x801CCD7C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_5:
    // 0x801CCD80: addiu       $v0, $v0, -0x168
    ctx->r2 = ADD32(ctx->r2, -0X168);
    // 0x801CCD84: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_801CCD88:
    // 0x801CCD88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCD8C: ldc1        $f8, -0x30A0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X30A0);
    // 0x801CCD90: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CCD94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCD98: ldc1        $f16, -0x3098($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X3098);
    // 0x801CCD9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCDA0: sw          $v0, -0x6338($at)
    MEM_W(-0X6338, ctx->r1) = ctx->r2;
    // 0x801CCDA4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CCDA8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x801CCDAC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801CCDB0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801CCDB4: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801CCDB8: jal         0x800419B0
    // 0x801CCDBC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x801CCDBC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x801CCDC0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801CCDC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CCDC8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CCDCC: lw          $v0, -0x6338($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6338);
    // 0x801CCDD0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CCDD4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801CCDD8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801CCDDC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCDE0: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801CCDE4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CCDE8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801CCDEC: nop

    // 0x801CCDF0: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x801CCDF4: ldc1        $f18, -0x3090($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X3090);
    // 0x801CCDF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCDFC: ldc1        $f6, -0x3088($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3088);
    // 0x801CCE00: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801CCE04: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801CCE08: jal         0x800417F0
    // 0x801CCE0C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x801CCE0C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x801CCE10: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801CCE14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CCE18: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801CCE1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801CCE20: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CCE24: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCE28: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x801CCE2C: sb          $zero, 0x1($a3)
    MEM_B(0X1, ctx->r7) = 0;
    // 0x801CCE30: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CCE34: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801CCE38: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801CCE3C: nop

    // 0x801CCE40: sb          $t8, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r24;
    // 0x801CCE44: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
    // 0x801CCE48: sb          $v0, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r2;
    // 0x801CCE4C: sb          $v0, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r2;
    // 0x801CCE50: sb          $t3, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r11;
    // 0x801CCE54: sb          $t3, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r11;
    // 0x801CCE58: sb          $v0, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r2;
    // 0x801CCE5C: sb          $v0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r2;
    // 0x801CCE60: sb          $v0, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r2;
    // 0x801CCE64: sb          $v0, 0x5($a3)
    MEM_B(0X5, ctx->r7) = ctx->r2;
    // 0x801CCE68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CCE6C:
    // 0x801CCE6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801CCE70: jr          $ra
    // 0x801CCE74: nop

    TRACE_RETURN()
    return;
    // 0x801CCE74: nop

;}
RECOMP_FUNC void func_802003E0_62B7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802003E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802003E4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802003E8: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x802003EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802003F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802003F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802003F8: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x802003FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80200400: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80200404: bnel        $t7, $at, L_80200428
    if (ctx->r15 != ctx->r1) {
        // 0x80200408: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80200428;
    }
    goto skip_0;
    // 0x80200408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8020040C: jal         0x8003521C
    // 0x80200410: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, 0X434);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80200410: addiu       $a0, $a0, 0x434
    ctx->r4 = ADD32(ctx->r4, 0X434);
    after_0:
    // 0x80200414: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80200418: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020041C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80200420: swc1        $f4, 0x74($t8)
    MEM_W(0X74, ctx->r24) = ctx->f4.u32l;
    // 0x80200424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80200428:
    // 0x80200428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020042C: jr          $ra
    // 0x80200430: nop

    TRACE_RETURN()
    return;
    // 0x80200430: nop

;}
