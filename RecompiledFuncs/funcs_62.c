#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E2410_60D7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2410: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E2414: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E2418: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E241C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E2420: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E2424: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E2428: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801E242C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E2430: addiu       $a2, $a2, -0x3D60
    ctx->r6 = ADD32(ctx->r6, -0X3D60);
    // 0x801E2434: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E2438: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E243C: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E2440: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E2444: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E2448: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801E244C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E2450: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E2454: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E2458: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E245C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E2460: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E2464: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E2468: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E246C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E2470: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E2474: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E2478: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E247C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E2480: jal         0x800358E8
    // 0x801E2484: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E2484: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E2488: beq         $v0, $zero, L_801E24E8
    if (ctx->r2 == 0) {
        // 0x801E248C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E24E8;
    }
    // 0x801E248C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E2490: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E2494: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E2498: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E249C: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E24A0: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E24A4: addiu       $t0, $t0, -0x5018
    ctx->r8 = ADD32(ctx->r8, -0X5018);
    // 0x801E24A8: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x801E24AC: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E24B0: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E24B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E24B8: addiu       $t3, $t3, -0x54E0
    ctx->r11 = ADD32(ctx->r11, -0X54E0);
    // 0x801E24BC: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E24C0: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801E24C4: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801E24C8: sw          $t0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r8;
    // 0x801E24CC: sw          $t1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r9;
    // 0x801E24D0: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x801E24D4: sw          $t3, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r11;
    // 0x801E24D8: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E24DC: jal         0x801E18E4
    // 0x801E24E0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E24E0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E24E4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E24E8:
    // 0x801E24E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E24EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E24F0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E24F4: jr          $ra
    // 0x801E24F8: nop

    TRACE_RETURN()
    return;
    // 0x801E24F8: nop

;}
RECOMP_FUNC void func_801E4BC0_60FFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4BC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E4BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4BCC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4BD0: jal         0x801D31CC
    // 0x801E4BD4: addiu       $a1, $a1, -0x4E38
    ctx->r5 = ADD32(ctx->r5, -0X4E38);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801E4BD4: addiu       $a1, $a1, -0x4E38
    ctx->r5 = ADD32(ctx->r5, -0X4E38);
    after_0:
    // 0x801E4BD8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4BDC: jal         0x8003521C
    // 0x801E4BE0: addiu       $a0, $a0, 0x4BF4
    ctx->r4 = ADD32(ctx->r4, 0X4BF4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E4BE0: addiu       $a0, $a0, 0x4BF4
    ctx->r4 = ADD32(ctx->r4, 0X4BF4);
    after_1:
    // 0x801E4BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E4BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4BEC: jr          $ra
    // 0x801E4BF0: nop

    TRACE_RETURN()
    return;
    // 0x801E4BF0: nop

;}
RECOMP_FUNC void func_801E17F4_60CBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E17F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E17F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E17FC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801E1800: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E1804: jal         0x801D60E4
    // 0x801E1808: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_0;
    // 0x801E1808: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E180C: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801E1810: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E1814: jal         0x801D6508
    // 0x801E1818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801E1818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E181C: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E1820: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801E1824: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1828: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x801E182C: bnel        $t6, $zero, L_801E1890
    if (ctx->r14 != 0) {
        // 0x801E1830: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_801E1890;
    }
    goto skip_0;
    // 0x801E1830: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x801E1834: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801E1838: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E183C: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E1840: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x801E1844: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E1848: lw          $a3, 0xC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XC);
    // 0x801E184C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E1850: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x801E1854: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x801E1858: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x801E185C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x801E1860: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E1864: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E186C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801E1870: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801E1874: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801E1878: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801E187C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801E1880: jal         0x801E1E24
    // 0x801E1884: nop

    func_801E1E24_60D204(rdram, ctx);
        goto after_2;
    // 0x801E1884: nop

    after_2:
    // 0x801E1888: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801E188C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
L_801E1890:
    // 0x801E1890: bne         $t0, $zero, L_801E18A8
    if (ctx->r8 != 0) {
        // 0x801E1894: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_801E18A8;
    }
    // 0x801E1894: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x801E1898: jal         0x80034ED4
    // 0x801E189C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801E189C: nop

    after_3:
    // 0x801E18A0: b           L_801E18D4
    // 0x801E18A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801E18D4;
    // 0x801E18A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E18A8:
    // 0x801E18A8: lw          $t2, 0x80($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X80);
    // 0x801E18AC: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801E18B0: bne         $t3, $zero, L_801E18D0
    if (ctx->r11 != 0) {
        // 0x801E18B4: sw          $t3, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r11;
            goto L_801E18D0;
    }
    // 0x801E18B4: sw          $t3, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r11;
    // 0x801E18B8: lwc1        $f16, 0x70($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801E18BC: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E18C0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801E18C4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801E18C8: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
    // 0x801E18CC: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
L_801E18D0:
    // 0x801E18D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E18D4:
    // 0x801E18D4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801E18D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801E18DC: jr          $ra
    // 0x801E18E0: nop

    TRACE_RETURN()
    return;
    // 0x801E18E0: nop

;}
RECOMP_FUNC void func_801EE658_619A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE658: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801EE65C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EE660: lw          $t6, 0x98($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X98);
    // 0x801EE664: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801EE668: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x801EE66C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801EE670: andi        $t9, $t7, 0x3
    ctx->r25 = ctx->r15 & 0X3;
    // 0x801EE674: bne         $t9, $zero, L_801EE730
    if (ctx->r25 != 0) {
        // 0x801EE678: sw          $t7, 0x98($a0)
        MEM_W(0X98, ctx->r4) = ctx->r15;
            goto L_801EE730;
    }
    // 0x801EE678: sw          $t7, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r15;
    // 0x801EE67C: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801EE680: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x801EE684: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EE688: lw          $t1, 0x1D8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1D8);
    // 0x801EE68C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801EE690: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801EE694: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x801EE698: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EE69C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EE6A0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801EE6A4: nop

    // 0x801EE6A8: bc1fl       L_801EE6BC
    if (!c1cs) {
        // 0x801EE6AC: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_801EE6BC;
    }
    goto skip_0;
    // 0x801EE6AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_0:
    // 0x801EE6B0: b           L_801EE6BC
    // 0x801EE6B4: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_801EE6BC;
    // 0x801EE6B4: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x801EE6B8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_801EE6BC:
    // 0x801EE6BC: lhu         $a1, 0x14($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X14);
    // 0x801EE6C0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801EE6C4: jal         0x8000E630
    // 0x801EE6C8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801EE6C8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_0:
    // 0x801EE6CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801EE6D0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x801EE6D4: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801EE6D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EE6DC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EE6E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EE6E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EE6E8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801EE6EC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801EE6F0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801EE6F4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801EE6F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EE6FC: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EE700: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801EE704: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EE708: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EE70C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801EE710: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EE714: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801EE718: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801EE71C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801EE720: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801EE724: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801EE728: jal         0x801DFB90
    // 0x801EE72C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x801EE72C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_1:
L_801EE730:
    // 0x801EE730: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801EE734: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801EE738: jr          $ra
    // 0x801EE73C: nop

    TRACE_RETURN()
    return;
    // 0x801EE73C: nop

;}
RECOMP_FUNC void func_801FCA6C_627E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCA6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FCA70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FCA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FCA78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FCA7C: jal         0x801D2F40
    // 0x801FCA80: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FCA80: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    after_0:
    // 0x801FCA84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FCA88: nop

    // 0x801FCA8C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FCA90: nop

    // 0x801FCA94: bc1fl       L_801FCAA8
    if (!c1cs) {
        // 0x801FCA98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FCAA8;
    }
    goto skip_0;
    // 0x801FCA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FCA9C: jal         0x801FC3FC
    // 0x801FCAA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_1;
    // 0x801FCAA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801FCAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FCAA8:
    // 0x801FCAA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FCAAC: jr          $ra
    // 0x801FCAB0: nop

    TRACE_RETURN()
    return;
    // 0x801FCAB0: nop

;}
RECOMP_FUNC void func_801E329C_60E67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E329C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E32A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E32A4: addiu       $v1, $v1, -0x1100
    ctx->r3 = ADD32(ctx->r3, -0X1100);
    // 0x801E32A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E32AC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x801E32B0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801E32B4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801E32B8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801E32BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E32C0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801E32C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801E32C8: jal         0x800148F0
    // 0x801E32CC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x801E32CC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801E32D0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E32D4: addiu       $v1, $v1, -0x1100
    ctx->r3 = ADD32(ctx->r3, -0X1100);
    // 0x801E32D8: bne         $v0, $zero, L_801E32E8
    if (ctx->r2 != 0) {
        // 0x801E32DC: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_801E32E8;
    }
    // 0x801E32DC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801E32E0: b           L_801E331C
    // 0x801E32E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E331C;
    // 0x801E32E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E32E8:
    // 0x801E32E8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E32EC: addiu       $a0, $a0, 0x3030
    ctx->r4 = ADD32(ctx->r4, 0X3030);
    // 0x801E32F0: jal         0x80034DD8
    // 0x801E32F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801E32F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801E32F8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E32FC: addiu       $v1, $v1, -0x1100
    ctx->r3 = ADD32(ctx->r3, -0X1100);
    // 0x801E3300: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801E3304: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x801E3308: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801E330C: lbu         $t7, 0x1B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1B);
    // 0x801E3310: sb          $t7, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r15;
    // 0x801E3314: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801E3318: sb          $zero, 0xD($t9)
    MEM_B(0XD, ctx->r25) = 0;
L_801E331C:
    // 0x801E331C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E3320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E3324: jr          $ra
    // 0x801E3328: nop

    TRACE_RETURN()
    return;
    // 0x801E3328: nop

;}
RECOMP_FUNC void func_801DF200_60A5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF200: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801DF204: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801DF208: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801DF20C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801DF210: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801DF214: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801DF218: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DF21C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x801DF220: beq         $at, $zero, L_801DF23C
    if (ctx->r1 == 0) {
        // 0x801DF224: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801DF23C;
    }
    // 0x801DF224: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801DF228: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF22C: addu        $at, $at, $t7
    gpr jr_addend_801DF234 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801DF230: lw          $t7, -0x24E4($at)
    ctx->r15 = ADD32(ctx->r1, -0X24E4);
    // 0x801DF234: jr          $t7
    // 0x801DF238: nop

    switch (jr_addend_801DF234 >> 2) {
        case 0: goto L_801DF23C; break;
        case 1: goto L_801DF244; break;
        case 2: goto L_801DF30C; break;
        case 3: goto L_801DF23C; break;
        case 4: goto L_801DF378; break;
        default: switch_error(__func__, 0x801DF234, 0x8020DB1C);
    }
    // 0x801DF238: nop

L_801DF23C:
    // 0x801DF23C: jr          $ra
    // 0x801DF240: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801DF240: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF244:
    // 0x801DF244: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DF248: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF24C: ldc1        $f6, -0x24D0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X24D0);
    // 0x801DF250: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801DF254: lui         $at, 0xC3D7
    ctx->r1 = S32(0XC3D7 << 16);
    // 0x801DF258: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801DF25C: nop

    // 0x801DF260: bc1f        L_801DF27C
    if (!c1cs) {
        // 0x801DF264: nop
    
            goto L_801DF27C;
    }
    // 0x801DF264: nop

    // 0x801DF268: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DF26C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF270: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801DF274: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DF278: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
L_801DF27C:
    // 0x801DF27C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF280: ldc1        $f16, -0x24C8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X24C8);
    // 0x801DF284: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x801DF288: c.le.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d <= ctx->f0.d;
    // 0x801DF28C: nop

    // 0x801DF290: bc1fl       L_801DF2A8
    if (!c1cs) {
        // 0x801DF294: lwc1        $f6, 0x10($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801DF2A8;
    }
    goto skip_0;
    // 0x801DF294: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x801DF298: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DF29C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF2A0: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x801DF2A4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
L_801DF2A8:
    // 0x801DF2A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF2AC: ldc1        $f4, -0x24C0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X24C0);
    // 0x801DF2B0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DF2B4: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801DF2B8: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x801DF2BC: nop

    // 0x801DF2C0: bc1fl       L_801DF2D8
    if (!c1cs) {
        // 0x801DF2C4: lwc1        $f16, 0xC($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
            goto L_801DF2D8;
    }
    goto skip_1;
    // 0x801DF2C4: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x801DF2C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF2CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF2D0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801DF2D4: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
L_801DF2D8:
    // 0x801DF2D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF2DC: ldc1        $f10, -0x24B8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X24B8);
    // 0x801DF2E0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DF2E4: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x801DF2E8: c.le.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d <= ctx->f10.d;
    // 0x801DF2EC: nop

    // 0x801DF2F0: bc1f        L_801DF3E0
    if (!c1cs) {
        // 0x801DF2F4: nop
    
            goto L_801DF3E0;
    }
    // 0x801DF2F4: nop

    // 0x801DF2F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DF2FC: nop

    // 0x801DF300: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801DF304: jr          $ra
    // 0x801DF308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801DF308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF30C:
    // 0x801DF30C: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x801DF310: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DF314: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DF318: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x801DF31C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801DF320: nop

    // 0x801DF324: bc1fl       L_801DF33C
    if (!c1cs) {
        // 0x801DF328: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801DF33C;
    }
    goto skip_2;
    // 0x801DF328: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_2:
    // 0x801DF32C: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801DF330: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DF334: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF338: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801DF33C:
    // 0x801DF33C: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801DF340: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801DF344: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF348: bc1fl       L_801DF35C
    if (!c1cs) {
        // 0x801DF34C: lwc1        $f4, 0x10($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801DF35C;
    }
    goto skip_3;
    // 0x801DF34C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    skip_3:
    // 0x801DF350: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF354: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801DF358: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
L_801DF35C:
    // 0x801DF35C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801DF360: nop

    // 0x801DF364: bc1f        L_801DF3E0
    if (!c1cs) {
        // 0x801DF368: nop
    
            goto L_801DF3E0;
    }
    // 0x801DF368: nop

    // 0x801DF36C: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801DF370: jr          $ra
    // 0x801DF374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801DF374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DF378:
    // 0x801DF378: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x801DF37C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DF380: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DF384: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801DF388: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801DF38C: nop

    // 0x801DF390: bc1fl       L_801DF3A8
    if (!c1cs) {
        // 0x801DF394: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801DF3A8;
    }
    goto skip_4;
    // 0x801DF394: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_4:
    // 0x801DF398: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801DF39C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DF3A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF3A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801DF3A8:
    // 0x801DF3A8: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801DF3AC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801DF3B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF3B4: bc1fl       L_801DF3C8
    if (!c1cs) {
        // 0x801DF3B8: lwc1        $f8, 0x10($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801DF3C8;
    }
    goto skip_5;
    // 0x801DF3B8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    skip_5:
    // 0x801DF3BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF3C0: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801DF3C4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
L_801DF3C8:
    // 0x801DF3C8: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801DF3CC: nop

    // 0x801DF3D0: bc1f        L_801DF3E0
    if (!c1cs) {
        // 0x801DF3D4: nop
    
            goto L_801DF3E0;
    }
    // 0x801DF3D4: nop

    // 0x801DF3D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801DF3DC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_801DF3E0:
    // 0x801DF3E0: jr          $ra
    // 0x801DF3E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801DF3E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801FE964_629D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE964: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801FE968: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE96C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FE970: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FE974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FE978: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801FE97C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801FE980: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FE984: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801FE988: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801FE98C: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801FE990: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FE994: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x801FE998: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801FE99C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FE9A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801FE9A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FE9A8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FE9AC: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801FE9B0: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801FE9B4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801FE9B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FE9BC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801FE9C0: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x801FE9C4: nop

    // 0x801FE9C8: bc1f        L_801FE9DC
    if (!c1cs) {
        // 0x801FE9CC: nop
    
            goto L_801FE9DC;
    }
    // 0x801FE9CC: nop

    // 0x801FE9D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FE9D4: b           L_801FE9EC
    // 0x801FE9D8: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
        goto L_801FE9EC;
    // 0x801FE9D8: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
L_801FE9DC:
    // 0x801FE9DC: jal         0x801D2F40
    // 0x801FE9E0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FE9E0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801FE9E4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FE9E8: nop

L_801FE9EC:
    // 0x801FE9EC: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801FE9F0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x801FE9F4: bnel        $v1, $at, L_801FEA30
    if (ctx->r3 != ctx->r1) {
        // 0x801FE9F8: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_801FEA30;
    }
    goto skip_0;
    // 0x801FE9F8: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x801FE9FC: jal         0x80038BC8
    // 0x801FEA00: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FEA00: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    after_1:
    // 0x801FEA04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FEA08: jal         0x80037C9C
    // 0x801FEA0C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801FEA0C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_2:
    // 0x801FEA10: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801FEA14: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801FEA18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FEA1C: jal         0x80037C20
    // 0x801FEA20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801FEA20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x801FEA24: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FEA28: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801FEA2C: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
L_801FEA30:
    // 0x801FEA30: beq         $t7, $zero, L_801FECB0
    if (ctx->r15 == 0) {
        // 0x801FEA34: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_801FECB0;
    }
    // 0x801FEA34: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801FEA38: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801FEA3C: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801FEA40: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801FEA44: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801FEA48: lw          $t1, 0x1E4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1E4);
    // 0x801FEA4C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801FEA50: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801FEA54: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801FEA58: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x801FEA5C: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x801FEA60: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FEA64: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x801FEA68: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FEA6C: lwc1        $f8, -0x4F7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4F7C);
    // 0x801FEA70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FEA74: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801FEA78: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801FEA7C: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x801FEA80: nop

    // 0x801FEA84: bc1fl       L_801FEBD4
    if (!c1cs) {
        // 0x801FEA88: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801FEBD4;
    }
    goto skip_1;
    // 0x801FEA88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_1:
    // 0x801FEA8C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FEA90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FEA94: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801FEA98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FEA9C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FEAA0: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801FEAA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FEAA8: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x801FEAAC: nop

    // 0x801FEAB0: bc1fl       L_801FEAC0
    if (!c1cs) {
        // 0x801FEAB4: c.le.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
            goto L_801FEAC0;
    }
    goto skip_2;
    // 0x801FEAB4: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    skip_2:
    // 0x801FEAB8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801FEABC: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
L_801FEAC0:
    // 0x801FEAC0: nop

    // 0x801FEAC4: bc1fl       L_801FEAD4
    if (!c1cs) {
        // 0x801FEAC8: lwc1        $f4, 0x90($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801FEAD4;
    }
    goto skip_3;
    // 0x801FEAC8: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    skip_3:
    // 0x801FEACC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801FEAD0: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
L_801FEAD4:
    // 0x801FEAD4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801FEAD8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x801FEADC: add.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801FEAE0: jal         0x801D4BF4
    // 0x801FEAE4: swc1        $f8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f8.u32l;
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_4;
    // 0x801FEAE4: swc1        $f8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x801FEAE8: lw          $t4, 0x94($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X94);
    // 0x801FEAEC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801FEAF0: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801FEAF4: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x801FEAF8: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801FEAFC: bgez        $t4, L_801FEB14
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801FEB00: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801FEB14;
    }
    // 0x801FEB00: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801FEB04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801FEB08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FEB0C: nop

    // 0x801FEB10: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_801FEB14:
    // 0x801FEB14: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801FEB18: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FEB1C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801FEB20: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801FEB24: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801FEB28: nop

    // 0x801FEB2C: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801FEB30: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801FEB34: nop

    // 0x801FEB38: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801FEB3C: beql        $t6, $zero, L_801FEB8C
    if (ctx->r14 == 0) {
        // 0x801FEB40: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_801FEB8C;
    }
    goto skip_4;
    // 0x801FEB40: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x801FEB44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FEB48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FEB4C: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801FEB50: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801FEB54: nop

    // 0x801FEB58: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801FEB5C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801FEB60: nop

    // 0x801FEB64: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801FEB68: bne         $t6, $zero, L_801FEB80
    if (ctx->r14 != 0) {
        // 0x801FEB6C: nop
    
            goto L_801FEB80;
    }
    // 0x801FEB6C: nop

    // 0x801FEB70: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x801FEB74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801FEB78: b           L_801FEB98
    // 0x801FEB7C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_801FEB98;
    // 0x801FEB7C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_801FEB80:
    // 0x801FEB80: b           L_801FEB98
    // 0x801FEB84: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_801FEB98;
    // 0x801FEB84: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801FEB88: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_801FEB8C:
    // 0x801FEB8C: nop

    // 0x801FEB90: bltz        $t6, L_801FEB80
    if (SIGNED(ctx->r14) < 0) {
        // 0x801FEB94: nop
    
            goto L_801FEB80;
    }
    // 0x801FEB94: nop

L_801FEB98:
    // 0x801FEB98: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801FEB9C: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
    // 0x801FEBA0: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801FEBA4: jal         0x8000E630
    // 0x801FEBA8: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_5;
    // 0x801FEBA8: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_5:
    // 0x801FEBAC: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEBB0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801FEBB4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801FEBB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FEBBC: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801FEBC0: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x801FEBC4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801FEBC8: b           L_801FEC4C
    // 0x801FEBCC: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
        goto L_801FEC4C;
    // 0x801FEBCC: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x801FEBD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801FEBD4:
    // 0x801FEBD4: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801FEBD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FEBDC: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FEBE0: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801FEBE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FEBE8: c.le.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl <= ctx->f8.fl;
    // 0x801FEBEC: nop

    // 0x801FEBF0: bc1fl       L_801FEC00
    if (!c1cs) {
        // 0x801FEBF4: c.le.s      $f6, $f2
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
            goto L_801FEC00;
    }
    goto skip_5;
    // 0x801FEBF4: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    skip_5:
    // 0x801FEBF8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801FEBFC: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
L_801FEC00:
    // 0x801FEC00: nop

    // 0x801FEC04: bc1fl       L_801FEC14
    if (!c1cs) {
        // 0x801FEC08: lwc1        $f16, 0x90($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801FEC14;
    }
    goto skip_6;
    // 0x801FEC08: lwc1        $f16, 0x90($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
    skip_6:
    // 0x801FEC0C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801FEC10: lwc1        $f16, 0x90($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X90);
L_801FEC14:
    // 0x801FEC14: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801FEC18: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801FEC1C: add.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801FEC20: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801FEC24: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801FEC28: jal         0x8000E630
    // 0x801FEC2C: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_6;
    // 0x801FEC2C: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_6:
    // 0x801FEC30: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEC34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FEC38: ldc1        $f8, -0x1548($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1548);
    // 0x801FEC3C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801FEC40: add.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d + ctx->f8.d;
    // 0x801FEC44: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801FEC48: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
L_801FEC4C:
    // 0x801FEC4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FEC50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FEC54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FEC58: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x801FEC5C: jal         0x801D6330
    // 0x801FEC60: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    func_801D6330_601710(rdram, ctx);
        goto after_7;
    // 0x801FEC60: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    after_7:
    // 0x801FEC64: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEC68: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801FEC6C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801FEC70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FEC74: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801FEC78: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801FEC7C: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x801FEC80: nop

    // 0x801FEC84: bc1fl       L_801FECA0
    if (!c1cs) {
        // 0x801FEC88: trunc.w.s   $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801FECA0;
    }
    goto skip_7;
    // 0x801FEC88: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_7:
    // 0x801FEC8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FEC90: nop

    // 0x801FEC94: swc1        $f8, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
    // 0x801FEC98: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801FEC9C: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
L_801FECA0:
    // 0x801FECA0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801FECA4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x801FECA8: b           L_801FED28
    // 0x801FECAC: sw          $t8, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->r24;
        goto L_801FED28;
    // 0x801FECAC: sw          $t8, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->r24;
L_801FECB0:
    // 0x801FECB0: jal         0x8000DD58
    // 0x801FECB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801FECB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x801FECB8: addiu       $t1, $v0, -0x2
    ctx->r9 = ADD32(ctx->r2, -0X2);
    // 0x801FECBC: bgtz        $t1, L_801FECE0
    if (SIGNED(ctx->r9) > 0) {
        // 0x801FECC0: addiu       $t9, $zero, 0x12C
        ctx->r25 = ADD32(0, 0X12C);
            goto L_801FECE0;
    }
    // 0x801FECC0: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x801FECC4: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x801FECC8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801FECCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801FECD0: nop

    // 0x801FECD4: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x801FECD8: b           L_801FECF8
    // 0x801FECDC: swc1        $f10, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f10.u32l;
        goto L_801FECF8;
    // 0x801FECDC: swc1        $f10, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f10.u32l;
L_801FECE0:
    // 0x801FECE0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801FECE4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801FECE8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801FECEC: nop

    // 0x801FECF0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801FECF4: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
L_801FECF8:
    // 0x801FECF8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FECFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FED00: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FED04: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801FED08: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801FED0C: addiu       $a1, $a1, -0x4BA8
    ctx->r5 = ADD32(ctx->r5, -0X4BA8);
    // 0x801FED10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FED14: jal         0x801D2EE4
    // 0x801FED18: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_9;
    // 0x801FED18: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    after_9:
    // 0x801FED1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FED20: jal         0x8003521C
    // 0x801FED24: addiu       $a0, $a0, -0x12C4
    ctx->r4 = ADD32(ctx->r4, -0X12C4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801FED24: addiu       $a0, $a0, -0x12C4
    ctx->r4 = ADD32(ctx->r4, -0X12C4);
    after_10:
L_801FED28:
    // 0x801FED28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FED2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801FED30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801FED34: jr          $ra
    // 0x801FED38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801FED38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801D4408_5FF7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4408: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D440C: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D4410: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D4414: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801D4418: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D441C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D4420: bne         $t6, $zero, L_801D4430
    if (ctx->r14 != 0) {
        // 0x801D4424: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_801D4430;
    }
    // 0x801D4424: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801D4428: b           L_801D44C8
    // 0x801D442C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D44C8;
    // 0x801D442C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4430:
    // 0x801D4430: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D4434: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D4438: bne         $t7, $zero, L_801D4448
    if (ctx->r15 != 0) {
        // 0x801D443C: nop
    
            goto L_801D4448;
    }
    // 0x801D443C: nop

    // 0x801D4440: b           L_801D44C8
    // 0x801D4444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D44C8;
    // 0x801D4444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4448:
    // 0x801D4448: bne         $a1, $zero, L_801D4458
    if (ctx->r5 != 0) {
        // 0x801D444C: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801D4458;
    }
    // 0x801D444C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D4450: b           L_801D44C8
    // 0x801D4454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D44C8;
    // 0x801D4454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4458:
    // 0x801D4458: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D445C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x801D4460: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D4464: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    // 0x801D4468: sw          $a1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r5;
    // 0x801D446C: jal         0x801D40A0
    // 0x801D4470: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801D40A0_5FF480(rdram, ctx);
        goto after_0;
    // 0x801D4470: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D4474: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4478: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801D447C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x801D4480: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    // 0x801D4484: jal         0x801D40A0
    // 0x801D4488: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    func_801D40A0_5FF480(rdram, ctx);
        goto after_1;
    // 0x801D4488: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    after_1:
    // 0x801D448C: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D4490: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4494: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801D4498: or          $t9, $v1, $v0
    ctx->r25 = ctx->r3 | ctx->r2;
    // 0x801D449C: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x801D44A0: sb          $t9, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r25;
    // 0x801D44A4: jal         0x801D40A0
    // 0x801D44A8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    func_801D40A0_5FF480(rdram, ctx);
        goto after_2;
    // 0x801D44A8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    after_2:
    // 0x801D44AC: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D44B0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x801D44B4: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x801D44B8: beq         $t1, $zero, L_801D44C8
    if (ctx->r9 == 0) {
        // 0x801D44BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D44C8;
    }
    // 0x801D44BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D44C0: b           L_801D44C8
    // 0x801D44C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D44C8;
    // 0x801D44C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D44C8:
    // 0x801D44C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D44CC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801D44D0: jr          $ra
    // 0x801D44D4: nop

    TRACE_RETURN()
    return;
    // 0x801D44D4: nop

;}
RECOMP_FUNC void func_801F1690_61CA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F169C: jal         0x801F76D0
    // 0x801F16A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F16A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F16A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F16A8: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    // 0x801F16AC: jal         0x801D31CC
    // 0x801F16B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801F16B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F16B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F16B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F16BC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F16C0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F16C4: addiu       $a0, $a0, 0xA50
    ctx->r4 = ADD32(ctx->r4, 0XA50);
    // 0x801F16C8: jal         0x8003521C
    // 0x801F16CC: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F16CC: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    after_2:
    // 0x801F16D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F16D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F16D8: jr          $ra
    // 0x801F16DC: nop

    TRACE_RETURN()
    return;
    // 0x801F16DC: nop

;}
RECOMP_FUNC void func_801E818C_61356C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E818C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8194: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E8198: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E819C: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x801E81A0: jal         0x80038BC8
    // 0x801E81A4: ori         $a0, $zero, 0x823E
    ctx->r4 = 0 | 0X823E;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801E81A4: ori         $a0, $zero, 0x823E
    ctx->r4 = 0 | 0X823E;
    after_0:
    // 0x801E81A8: jal         0x80038BC8
    // 0x801E81AC: ori         $a0, $zero, 0x8240
    ctx->r4 = 0 | 0X8240;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E81AC: ori         $a0, $zero, 0x8240
    ctx->r4 = 0 | 0X8240;
    after_1:
    // 0x801E81B0: jal         0x80038BC8
    // 0x801E81B4: ori         $a0, $zero, 0x8241
    ctx->r4 = 0 | 0X8241;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E81B4: ori         $a0, $zero, 0x8241
    ctx->r4 = 0 | 0X8241;
    after_2:
    // 0x801E81B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E81BC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E81C0: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x801E81C4: slti        $at, $t7, 0x201
    ctx->r1 = SIGNED(ctx->r15) < 0X201 ? 1 : 0;
    // 0x801E81C8: beq         $at, $zero, L_801E81E4
    if (ctx->r1 == 0) {
        // 0x801E81CC: nop
    
            goto L_801E81E4;
    }
    // 0x801E81CC: nop

    // 0x801E81D0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E81D4: jal         0x801D2EE4
    // 0x801E81D8: addiu       $a1, $a1, -0x4E70
    ctx->r5 = ADD32(ctx->r5, -0X4E70);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801E81D8: addiu       $a1, $a1, -0x4E70
    ctx->r5 = ADD32(ctx->r5, -0X4E70);
    after_3:
    // 0x801E81DC: b           L_801E81EC
    // 0x801E81E0: nop

        goto L_801E81EC;
    // 0x801E81E0: nop

L_801E81E4:
    // 0x801E81E4: jal         0x801D2EE4
    // 0x801E81E8: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801E81E8: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    after_4:
L_801E81EC:
    // 0x801E81EC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E81F0: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E81F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E81F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E81FC: jal         0x801D34D0
    // 0x801E8200: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_5;
    // 0x801E8200: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x801E8204: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E8208: jal         0x8003521C
    // 0x801E820C: addiu       $a0, $a0, -0x7DE0
    ctx->r4 = ADD32(ctx->r4, -0X7DE0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801E820C: addiu       $a0, $a0, -0x7DE0
    ctx->r4 = ADD32(ctx->r4, -0X7DE0);
    after_6:
    // 0x801E8210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E8214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E8218: jr          $ra
    // 0x801E821C: nop

    TRACE_RETURN()
    return;
    // 0x801E821C: nop

;}
RECOMP_FUNC void func_802096B8_634A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802096B8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802096BC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802096C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802096C4: lwc1        $f0, -0x1150($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1150);
    // 0x802096C8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802096CC: addiu       $a1, $a1, 0x42A0
    ctx->r5 = ADD32(ctx->r5, 0X42A0);
    // 0x802096D0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802096D4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802096D8: lui         $at, 0xC28E
    ctx->r1 = S32(0XC28E << 16);
    // 0x802096DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802096E0: lui         $at, 0xC3E6
    ctx->r1 = S32(0XC3E6 << 16);
    // 0x802096E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802096E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802096EC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802096F0: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x802096F4: addiu       $t7, $zero, 0x4BC
    ctx->r15 = ADD32(0, 0X4BC);
    // 0x802096F8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x802096FC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80209700: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80209704: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x80209708: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020970C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80209710: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80209714: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80209718: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8020971C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80209720: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80209724: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80209728: jal         0x8000DBF0
    // 0x8020972C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x8020972C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80209730: beq         $v0, $zero, L_80209778
    if (ctx->r2 == 0) {
        // 0x80209734: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_80209778;
    }
    // 0x80209734: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80209738: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x8020973C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80209740: addiu       $a0, $a0, -0x6878
    ctx->r4 = ADD32(ctx->r4, -0X6878);
    // 0x80209744: jal         0x8003521C
    // 0x80209748: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80209748: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x8020974C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80209750: lwc1        $f8, -0x114C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X114C);
    // 0x80209754: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x80209758: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x8020975C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80209760: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80209764: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80209768: addiu       $a1, $a1, -0x4720
    ctx->r5 = ADD32(ctx->r5, -0X4720);
    // 0x8020976C: swc1        $f8, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f8.u32l;
    // 0x80209770: jal         0x801D2EE4
    // 0x80209774: swc1        $f10, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f10.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x80209774: swc1        $f10, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f10.u32l;
    after_2:
L_80209778:
    // 0x80209778: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8020977C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80209780: jr          $ra
    // 0x80209784: nop

    TRACE_RETURN()
    return;
    // 0x80209784: nop

;}
RECOMP_FUNC void func_801F9508_6248E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9508: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F950C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F9510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9518: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F951C: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F9520: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x801F9524: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801F9528: beql        $t8, $at, L_801F9544
    if (ctx->r24 == ctx->r1) {
        // 0x801F952C: lw          $t9, 0x7C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X7C);
            goto L_801F9544;
    }
    goto skip_0;
    // 0x801F952C: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    skip_0:
    // 0x801F9530: jal         0x80034ED4
    // 0x801F9534: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801F9534: nop

    after_0:
    // 0x801F9538: b           L_801F955C
    // 0x801F953C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F955C;
    // 0x801F953C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9540: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
L_801F9544:
    // 0x801F9544: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801F9548: bne         $t0, $zero, L_801F9558
    if (ctx->r8 != 0) {
        // 0x801F954C: sw          $t0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r8;
            goto L_801F9558;
    }
    // 0x801F954C: sw          $t0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r8;
    // 0x801F9550: jal         0x80034ED4
    // 0x801F9554: sh          $zero, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801F9554: sh          $zero, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = 0;
    after_1:
L_801F9558:
    // 0x801F9558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F955C:
    // 0x801F955C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9560: jr          $ra
    // 0x801F9564: nop

    TRACE_RETURN()
    return;
    // 0x801F9564: nop

;}
RECOMP_FUNC void func_801DAAFC_605EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAAFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DAB00: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DAB04: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DAB08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAB0C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801DAB10: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801DAB14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DAB18: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DAB1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801DAB20: jal         0x801DAEC8
    // 0x801DAB24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_801DAEC8_6062A8(rdram, ctx);
        goto after_0;
    // 0x801DAB24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x801DAB28: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801DAB2C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801DAB30: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x801DAB34: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x801DAB38: bgez        $v0, L_801DABE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801DAB3C: sw          $t7, 0x7C($a1)
        MEM_W(0X7C, ctx->r5) = ctx->r15;
            goto L_801DABE4;
    }
    // 0x801DAB3C: sw          $t7, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r15;
    // 0x801DAB40: lw          $t8, 0xA0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XA0);
    // 0x801DAB44: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAB48: beq         $t8, $zero, L_801DABDC
    if (ctx->r24 == 0) {
        // 0x801DAB4C: nop
    
            goto L_801DABDC;
    }
    // 0x801DAB4C: nop

    // 0x801DAB50: lw          $t9, 0xC8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC8);
    // 0x801DAB54: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x801DAB58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DAB5C: addiu       $t0, $t9, -0x24
    ctx->r8 = ADD32(ctx->r25, -0X24);
    // 0x801DAB60: sw          $t0, 0xC8($a1)
    MEM_W(0XC8, ctx->r5) = ctx->r8;
    // 0x801DAB64: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801DAB68: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x801DAB6C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801DAB70: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DAB74: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x801DAB78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DAB7C: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x801DAB80: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAB84: sb          $t1, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r9;
    // 0x801DAB88: sb          $t3, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r11;
    // 0x801DAB8C: sb          $t4, 0x4C($a1)
    MEM_B(0X4C, ctx->r5) = ctx->r12;
    // 0x801DAB90: jal         0x801D36C4
    // 0x801DAB94: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_1;
    // 0x801DAB94: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DAB98: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801DAB9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DABA0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DABA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DABA8: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    // 0x801DABAC: swc1        $f0, 0x74($a1)
    MEM_W(0X74, ctx->r5) = ctx->f0.u32l;
    // 0x801DABB0: swc1        $f0, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f0.u32l;
    // 0x801DABB4: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
    // 0x801DABB8: swc1        $f0, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->f0.u32l;
    // 0x801DABBC: swc1        $f0, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f0.u32l;
    // 0x801DABC0: jal         0x80038BC8
    // 0x801DABC4: swc1        $f10, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->f10.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801DABC4: swc1        $f10, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->f10.u32l;
    after_2:
    // 0x801DABC8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DABCC: jal         0x8003521C
    // 0x801DABD0: addiu       $a0, $a0, -0x540C
    ctx->r4 = ADD32(ctx->r4, -0X540C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801DABD0: addiu       $a0, $a0, -0x540C
    ctx->r4 = ADD32(ctx->r4, -0X540C);
    after_3:
    // 0x801DABD4: b           L_801DABE8
    // 0x801DABD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DABE8;
    // 0x801DABD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DABDC:
    // 0x801DABDC: jal         0x8003521C
    // 0x801DABE0: addiu       $a0, $a0, -0x52D0
    ctx->r4 = ADD32(ctx->r4, -0X52D0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801DABE0: addiu       $a0, $a0, -0x52D0
    ctx->r4 = ADD32(ctx->r4, -0X52D0);
    after_4:
L_801DABE4:
    // 0x801DABE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DABE8:
    // 0x801DABE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DABEC: jr          $ra
    // 0x801DABF0: nop

    TRACE_RETURN()
    return;
    // 0x801DABF0: nop

;}
RECOMP_FUNC void func_801D3874_5FEC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3874: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x801D3878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D387C: beq         $v1, $zero, L_801D388C
    if (ctx->r3 == 0) {
        // 0x801D3880: nop
    
            goto L_801D388C;
    }
    // 0x801D3880: nop

    // 0x801D3884: jr          $ra
    // 0x801D3888: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
    TRACE_RETURN()
    return;
    // 0x801D3888: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
L_801D388C:
    // 0x801D388C: jr          $ra
    // 0x801D3890: nop

    TRACE_RETURN()
    return;
    // 0x801D3890: nop

;}
RECOMP_FUNC void func_802023DC_62D7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802023DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802023E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802023E4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802023E8: jal         0x80203F88
    // 0x802023EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x802023EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x802023F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x802023F4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x802023F8: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x802023FC: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80202400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80202404: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80202408: bne         $t7, $zero, L_8020246C
    if (ctx->r15 != 0) {
        // 0x8020240C: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_8020246C;
    }
    // 0x8020240C: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80202410: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80202414: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80202418: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x8020241C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80202420: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80202424: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80202428: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8020242C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80202430: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80202434: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80202438: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8020243C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x80202440: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80202444: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80202448: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8020244C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80202450: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80202454: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80202458: jal         0x801DFB90
    // 0x8020245C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x8020245C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80202460: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80202464: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80202468: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
L_8020246C:
    // 0x8020246C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80202470: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80202474: jr          $ra
    // 0x80202478: nop

    TRACE_RETURN()
    return;
    // 0x80202478: nop

;}
RECOMP_FUNC void func_801F5638_620A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F563C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5640: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F5644: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5648: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F564C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801F5650: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F5654: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F5658: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x801F565C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x801F5660: jal         0x801D2F40
    // 0x801F5664: lui         $a1, 0xC2F0
    ctx->r5 = S32(0XC2F0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F5664: lui         $a1, 0xC2F0
    ctx->r5 = S32(0XC2F0 << 16);
    after_0:
    // 0x801F5668: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F566C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801F5670: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x801F5674: nop

    // 0x801F5678: bc1fl       L_801F56BC
    if (!c1cs) {
        // 0x801F567C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F56BC;
    }
    goto skip_0;
    // 0x801F567C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F5680: lw          $t6, 0xE8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XE8);
    // 0x801F5684: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x801F5688: bne         $at, $zero, L_801F56B0
    if (ctx->r1 != 0) {
        // 0x801F568C: nop
    
            goto L_801F56B0;
    }
    // 0x801F568C: nop

    // 0x801F5690: sw          $zero, 0xE8($a3)
    MEM_W(0XE8, ctx->r7) = 0;
    // 0x801F5694: jal         0x801F703C
    // 0x801F5698: sw          $zero, 0xE0($a3)
    MEM_W(0XE0, ctx->r7) = 0;
    func_801F703C_62241C(rdram, ctx);
        goto after_1;
    // 0x801F5698: sw          $zero, 0xE0($a3)
    MEM_W(0XE0, ctx->r7) = 0;
    after_1:
    // 0x801F569C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F56A0: jal         0x8003521C
    // 0x801F56A4: addiu       $a0, $a0, 0x6988
    ctx->r4 = ADD32(ctx->r4, 0X6988);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F56A4: addiu       $a0, $a0, 0x6988
    ctx->r4 = ADD32(ctx->r4, 0X6988);
    after_2:
    // 0x801F56A8: b           L_801F56BC
    // 0x801F56AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F56BC;
    // 0x801F56AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F56B0:
    // 0x801F56B0: jal         0x801F0540
    // 0x801F56B4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_801F0540_61B920(rdram, ctx);
        goto after_3;
    // 0x801F56B4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x801F56B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F56BC:
    // 0x801F56BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F56C0: jr          $ra
    // 0x801F56C4: nop

    TRACE_RETURN()
    return;
    // 0x801F56C4: nop

;}
RECOMP_FUNC void func_801F7A1C_622DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7A1C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F7A20: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F7A24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F7A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7A2C: addiu       $t6, $v1, 0x140
    ctx->r14 = ADD32(ctx->r3, 0X140);
    // 0x801F7A30: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801F7A34: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801F7A38: lw          $v0, 0x1D8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1D8);
    // 0x801F7A3C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801F7A40: jal         0x8000DD04
    // 0x801F7A44: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    func_8000DD04_E904(rdram, ctx);
        goto after_0;
    // 0x801F7A44: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    after_0:
    // 0x801F7A48: jal         0x801D365C
    // 0x801F7A4C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_1;
    // 0x801F7A4C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x801F7A50: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F7A54: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F7A58: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x801F7A5C: lw          $t7, 0x1CC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X1CC);
    // 0x801F7A60: bne         $v0, $t7, L_801F7A94
    if (ctx->r2 != ctx->r15) {
        // 0x801F7A64: nop
    
            goto L_801F7A94;
    }
    // 0x801F7A64: nop

    // 0x801F7A68: lbu         $t9, 0xE($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XE);
    // 0x801F7A6C: bne         $t9, $zero, L_801F7A94
    if (ctx->r25 != 0) {
        // 0x801F7A70: nop
    
            goto L_801F7A94;
    }
    // 0x801F7A70: nop

    // 0x801F7A74: lbu         $t0, 0x2C5($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801F7A78: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x801F7A7C: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    // 0x801F7A80: bne         $t0, $zero, L_801F7A94
    if (ctx->r8 != 0) {
        // 0x801F7A84: nop
    
            goto L_801F7A94;
    }
    // 0x801F7A84: nop

    // 0x801F7A88: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x801F7A8C: jal         0x80038BC8
    // 0x801F7A90: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F7A90: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    after_2:
L_801F7A94:
    // 0x801F7A94: jal         0x801D36C4
    // 0x801F7A98: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_3;
    // 0x801F7A98: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x801F7A9C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x801F7AA0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801F7AA4: lw          $t2, 0xD8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XD8);
    // 0x801F7AA8: beql        $t2, $at, L_801F7ABC
    if (ctx->r10 == ctx->r1) {
        // 0x801F7AAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F7ABC;
    }
    goto skip_0;
    // 0x801F7AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F7AB0: jal         0x80034ED4
    // 0x801F7AB4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801F7AB4: nop

    after_4:
    // 0x801F7AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7ABC:
    // 0x801F7ABC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F7AC0: jr          $ra
    // 0x801F7AC4: nop

    TRACE_RETURN()
    return;
    // 0x801F7AC4: nop

;}
RECOMP_FUNC void func_801FB0CC_6264AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB0CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB0D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FB0D8: jal         0x801FFE14
    // 0x801FB0DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE14_62B1F4(rdram, ctx);
        goto after_0;
    // 0x801FB0DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FB0E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FB0E4: jal         0x801D326C
    // 0x801FB0E8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_1;
    // 0x801FB0E8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_1:
    // 0x801FB0EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801FB0F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FB0F4: lwc1        $f4, -0x1630($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1630);
    // 0x801FB0F8: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x801FB0FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB100: addiu       $a0, $a0, -0x4EE0
    ctx->r4 = ADD32(ctx->r4, -0X4EE0);
    // 0x801FB104: sw          $t6, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r14;
    // 0x801FB108: jal         0x8003521C
    // 0x801FB10C: swc1        $f4, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FB10C: swc1        $f4, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f4.u32l;
    after_2:
    // 0x801FB110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB118: jr          $ra
    // 0x801FB11C: nop

    TRACE_RETURN()
    return;
    // 0x801FB11C: nop

;}
RECOMP_FUNC void func_80205380_630760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80205384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205388: jal         0x801D5B70
    // 0x8020538C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D5B70_600F50(rdram, ctx);
        goto after_0;
    // 0x8020538C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80205390: beql        $v0, $zero, L_802053A4
    if (ctx->r2 == 0) {
        // 0x80205394: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802053A4;
    }
    goto skip_0;
    // 0x80205394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80205398: jal         0x80034ED4
    // 0x8020539C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x8020539C: nop

    after_1:
    // 0x802053A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802053A4:
    // 0x802053A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802053A8: jr          $ra
    // 0x802053AC: nop

    TRACE_RETURN()
    return;
    // 0x802053AC: nop

;}
RECOMP_FUNC void func_801E9E68_615248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9E68: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801E9E6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E9E70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E9E74: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801E9E78: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801E9E7C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801E9E80: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801E9E84: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801E9E88: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801E9E8C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E9E90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9E94: ldc1        $f8, -0x1EE0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1EE0);
    // 0x801E9E98: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E9E9C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x801E9EA0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801E9EA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E9EA8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E9EAC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E9EB0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E9EB4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801E9EB8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E9EBC: addiu       $t9, $sp, 0x44
    ctx->r25 = ADD32(ctx->r29, 0X44);
    // 0x801E9EC0: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x801E9EC4: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E9EC8: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x801E9ECC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E9ED0: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801E9ED4: nop

    // 0x801E9ED8: bc1f        L_801E9EEC
    if (!c1cs) {
        // 0x801E9EDC: nop
    
            goto L_801E9EEC;
    }
    // 0x801E9EDC: nop

    // 0x801E9EE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E9EE4: nop

    // 0x801E9EE8: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
L_801E9EEC:
    // 0x801E9EEC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E9EF0: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x801E9EF4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801E9EF8: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801E9EFC: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x801E9F00: lw          $v0, 0xDC($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XDC);
    // 0x801E9F04: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E9F08: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x801E9F0C: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x801E9F10: lwc1        $f14, 0x70($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801E9F14: lw          $a2, 0x74($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X74);
    // 0x801E9F18: lw          $a3, 0x78($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X78);
    // 0x801E9F1C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801E9F20: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801E9F24: jal         0x8000E4E4
    // 0x801E9F28: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801E9F28: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x801E9F2C: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E9F30: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E9F34: lui         $at, 0xC382
    ctx->r1 = S32(0XC382 << 16);
    // 0x801E9F38: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801E9F3C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E9F40: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801E9F44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E9F48: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x801E9F4C: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801E9F50: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E9F54: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E9F58: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E9F5C: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x801E9F60: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E9F64: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801E9F68: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801E9F6C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E9F70: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E9F74: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801E9F78: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x801E9F7C: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801E9F80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801E9F84: lh          $t3, -0x5250($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X5250);
    // 0x801E9F88: beq         $t3, $zero, L_801E9F98
    if (ctx->r11 == 0) {
        // 0x801E9F8C: nop
    
            goto L_801E9F98;
    }
    // 0x801E9F8C: nop

    // 0x801E9F90: b           L_801E9F98
    // 0x801E9F94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801E9F98;
    // 0x801E9F94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801E9F98:
    // 0x801E9F98: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9F9C: jal         0x80003EA0
    // 0x801E9FA0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x801E9FA0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E9FA4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x801E9FA8: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E9FAC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801E9FB0: nop

    // 0x801E9FB4: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801E9FB8: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801E9FBC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E9FC0: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x801E9FC4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9FC8: jal         0x80003E10
    // 0x801E9FCC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x801E9FCC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x801E9FD0: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E9FD4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E9FD8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801E9FDC: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801E9FE0: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E9FE4: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801E9FE8: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E9FEC: jal         0x8000E9F4
    // 0x801E9FF0: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_3;
    // 0x801E9FF0: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    after_3:
    // 0x801E9FF4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801E9FF8: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801E9FFC: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801EA000: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x801EA004: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801EA008: lbu         $t5, 0xE($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XE);
    // 0x801EA00C: bnel        $t5, $at, L_801EA050
    if (ctx->r13 != ctx->r1) {
        // 0x801EA010: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801EA050;
    }
    goto skip_0;
    // 0x801EA010: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x801EA014: jal         0x801EA074
    // 0x801EA018: nop

    func_801EA074_615454(rdram, ctx);
        goto after_4;
    // 0x801EA018: nop

    after_4:
    // 0x801EA01C: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x801EA020: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EA024: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801EA028: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801EA02C: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    // 0x801EA030: swc1        $f0, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f0.u32l;
    // 0x801EA034: swc1        $f0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f0.u32l;
    // 0x801EA038: jal         0x80038BC8
    // 0x801EA03C: swc1        $f18, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f18.u32l;
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801EA03C: swc1        $f18, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f18.u32l;
    after_5:
    // 0x801EA040: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EA044: jal         0x8003521C
    // 0x801EA048: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801EA048: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    after_6:
    // 0x801EA04C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EA050:
    // 0x801EA050: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801EA054: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801EA058: jr          $ra
    // 0x801EA05C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801EA05C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801F3254_61E634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3258: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F325C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F3260: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F3264: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F3268: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F326C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F3270: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3274: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F3278: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F327C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F3280: jal         0x801D3B18
    // 0x801F3284: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801F3284: nop

    after_0:
    // 0x801F3288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F328C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F3290: jal         0x801D3F00
    // 0x801F3294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801F3294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x801F3298: jal         0x801F732C
    // 0x801F329C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_2;
    // 0x801F329C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F32A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F32A4: jal         0x801D2F40
    // 0x801F32A8: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801F32A8: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_3:
    // 0x801F32AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F32B0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801F32B4: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x801F32B8: nop

    // 0x801F32BC: bc1fl       L_801F330C
    if (!c1cs) {
        // 0x801F32C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F330C;
    }
    goto skip_0;
    // 0x801F32C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F32C4: lwc1        $f16, 0x20($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X20);
    // 0x801F32C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F32CC: ldc1        $f4, -0x1990($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X1990);
    // 0x801F32D0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801F32D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F32D8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801F32DC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F32E0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F32E4: jal         0x801F8710
    // 0x801F32E8: nop

    func_801F8710_623AF0(rdram, ctx);
        goto after_4;
    // 0x801F32E8: nop

    after_4:
    // 0x801F32EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F32F0: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x801F32F4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F32F8: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801F32FC: addiu       $a0, $a0, 0x331C
    ctx->r4 = ADD32(ctx->r4, 0X331C);
    // 0x801F3300: jal         0x8003521C
    // 0x801F3304: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F3304: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    after_5:
    // 0x801F3308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F330C:
    // 0x801F330C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3314: jr          $ra
    // 0x801F3318: nop

    TRACE_RETURN()
    return;
    // 0x801F3318: nop

;}
RECOMP_FUNC void func_801E69F4_611DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E69F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E69F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E69FC: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801E6A00: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801E6A04: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801E6A08: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801E6A0C: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801E6A10: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E6A14: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E6A18: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x801E6A1C: beql        $at, $zero, L_801E6A58
    if (ctx->r1 == 0) {
        // 0x801E6A20: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_801E6A58;
    }
    goto skip_0;
    // 0x801E6A20: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_0:
    // 0x801E6A24: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x801E6A28: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x801E6A2C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x801E6A30: slti        $at, $t7, 0x28
    ctx->r1 = SIGNED(ctx->r15) < 0X28 ? 1 : 0;
    // 0x801E6A34: bne         $at, $zero, L_801E6A40
    if (ctx->r1 != 0) {
        // 0x801E6A38: sw          $t7, 0x94($a0)
        MEM_W(0X94, ctx->r4) = ctx->r15;
            goto L_801E6A40;
    }
    // 0x801E6A38: sw          $t7, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r15;
    // 0x801E6A3C: sw          $t9, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r25;
L_801E6A40:
    // 0x801E6A40: lw          $t0, 0x94($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X94);
    // 0x801E6A44: lw          $t1, 0x90($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X90);
    // 0x801E6A48: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x801E6A4C: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
    // 0x801E6A50: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
    // 0x801E6A54: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_801E6A58:
    // 0x801E6A58: bne         $v0, $at, L_801E6C68
    if (ctx->r2 != ctx->r1) {
        // 0x801E6A5C: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_801E6C68;
    }
    // 0x801E6A5C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801E6A60: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801E6A64: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E6A68: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801E6A6C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6A70: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6A74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6A78: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801E6A7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E6A80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6A84: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801E6A88: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6A8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801E6A90: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6A94: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801E6A98: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6A9C: jal         0x801E006C
    // 0x801E6AA0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_0;
    // 0x801E6AA0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801E6AA4: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6AA8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6AAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6AB0: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x801E6AB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E6AB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6ABC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E6AC0: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6AC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E6AC8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6ACC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E6AD0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6AD4: jal         0x801E006C
    // 0x801E6AD8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_1;
    // 0x801E6AD8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801E6ADC: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6AE0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6AE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6AE8: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E6AEC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801E6AF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6AF4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E6AF8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6AFC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E6B00: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6B04: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E6B08: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6B0C: jal         0x801E006C
    // 0x801E6B10: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801E6B10: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801E6B14: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6B18: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6B20: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x801E6B24: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x801E6B28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6B2C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E6B30: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6B34: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E6B38: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6B3C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801E6B40: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6B44: jal         0x801E006C
    // 0x801E6B48: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_3;
    // 0x801E6B48: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x801E6B4C: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6B50: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6B54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6B58: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801E6B5C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x801E6B60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6B64: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801E6B68: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6B6C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801E6B70: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6B74: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801E6B78: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6B7C: jal         0x801E006C
    // 0x801E6B80: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_4;
    // 0x801E6B80: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x801E6B84: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6B88: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6B8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6B90: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801E6B94: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x801E6B98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6B9C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E6BA0: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6BA4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E6BA8: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6BAC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801E6BB0: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6BB4: jal         0x801E006C
    // 0x801E6BB8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_5;
    // 0x801E6BB8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801E6BBC: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6BC0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6BC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6BC8: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801E6BCC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x801E6BD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6BD4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801E6BD8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6BDC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801E6BE0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6BE4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801E6BE8: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6BEC: jal         0x801E006C
    // 0x801E6BF0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_6;
    // 0x801E6BF0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x801E6BF4: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6BF8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6BFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6C00: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x801E6C04: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x801E6C08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6C0C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E6C10: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6C14: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E6C18: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6C1C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E6C20: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6C24: jal         0x801E006C
    // 0x801E6C28: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_7;
    // 0x801E6C28: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x801E6C2C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E6C30: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E6C34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6C38: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E6C3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x801E6C40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E6C44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E6C48: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6C4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E6C50: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E6C54: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E6C58: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6C5C: jal         0x801E006C
    // 0x801E6C60: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_8;
    // 0x801E6C60: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x801E6C64: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
L_801E6C68:
    // 0x801E6C68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E6C6C: bnel        $v0, $at, L_801E6C84
    if (ctx->r2 != ctx->r1) {
        // 0x801E6C70: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_801E6C84;
    }
    goto skip_1;
    // 0x801E6C70: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    skip_1:
    // 0x801E6C74: jal         0x80038BC8
    // 0x801E6C78: addiu       $a0, $zero, 0x237
    ctx->r4 = ADD32(0, 0X237);
    func_80038BC8_397C8(rdram, ctx);
        goto after_9;
    // 0x801E6C78: addiu       $a0, $zero, 0x237
    ctx->r4 = ADD32(0, 0X237);
    after_9:
    // 0x801E6C7C: lw          $v0, 0x7C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X7C);
    // 0x801E6C80: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
L_801E6C84:
    // 0x801E6C84: bgtz        $t3, L_801E6CE4
    if (SIGNED(ctx->r11) > 0) {
        // 0x801E6C88: sw          $t3, 0x7C($s1)
        MEM_W(0X7C, ctx->r17) = ctx->r11;
            goto L_801E6CE4;
    }
    // 0x801E6C88: sw          $t3, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r11;
    // 0x801E6C8C: jal         0x801D614C
    // 0x801E6C90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_10;
    // 0x801E6C90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x801E6C94: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E6C98: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E6C9C: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801E6CA0: nop

    // 0x801E6CA4: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801E6CA8: jal         0x800417E0
    // 0x801E6CAC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    _nsqrtf(rdram, ctx);
        goto after_11;
    // 0x801E6CAC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_11:
    // 0x801E6CB0: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x801E6CB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E6CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6CBC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6CC0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801E6CC4: nop

    // 0x801E6CC8: bc1fl       L_801E6CE8
    if (!c1cs) {
        // 0x801E6CCC: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801E6CE8;
    }
    goto skip_2;
    // 0x801E6CCC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x801E6CD0: jal         0x801D2EE4
    // 0x801E6CD4: addiu       $a1, $a1, -0x4E58
    ctx->r5 = ADD32(ctx->r5, -0X4E58);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_12;
    // 0x801E6CD4: addiu       $a1, $a1, -0x4E58
    ctx->r5 = ADD32(ctx->r5, -0X4E58);
    after_12:
    // 0x801E6CD8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6CDC: jal         0x8003521C
    // 0x801E6CE0: addiu       $a0, $a0, 0x6D00
    ctx->r4 = ADD32(ctx->r4, 0X6D00);
    func_8003521C_35E1C(rdram, ctx);
        goto after_13;
    // 0x801E6CE0: addiu       $a0, $a0, 0x6D00
    ctx->r4 = ADD32(ctx->r4, 0X6D00);
    after_13:
L_801E6CE4:
    // 0x801E6CE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E6CE8:
    // 0x801E6CE8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801E6CEC: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801E6CF0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801E6CF4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801E6CF8: jr          $ra
    // 0x801E6CFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801E6CFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801F718C_62256C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F718C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F7190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7194: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F7198: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801F719C: jal         0x801F7168
    // 0x801F71A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_801F7168_622548(rdram, ctx);
        goto after_0;
    // 0x801F71A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x801F71A4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801F71A8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801F71AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F71B0: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x801F71B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F71B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F71BC: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801F71C0: nop

    // 0x801F71C4: bc1f        L_801F71D4
    if (!c1cs) {
        // 0x801F71C8: nop
    
            goto L_801F71D4;
    }
    // 0x801F71C8: nop

    // 0x801F71CC: b           L_801F71D4
    // 0x801F71D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F71D4;
    // 0x801F71D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F71D4:
    // 0x801F71D4: jr          $ra
    // 0x801F71D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801F71D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80208504_6338E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208504: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80208508: jr          $ra
    // 0x8020850C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8020850C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_802046F0_62FAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802046F0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802046F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802046F8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x802046FC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x80204700: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x80204704: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80204708: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020470C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80204710: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80204714: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80204718: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020471C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80204720: lui         $a2, 0x802
    ctx->r6 = S32(0X802 << 16);
    // 0x80204724: addiu       $a2, $a2, -0x6BD0
    ctx->r6 = ADD32(ctx->r6, -0X6BD0);
    // 0x80204728: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8020472C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80204730: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80204734: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80204738: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x8020473C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80204740: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80204744: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80204748: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8020474C: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80204750: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80204754: addiu       $a3, $a3, -0x5238
    ctx->r7 = ADD32(ctx->r7, -0X5238);
    // 0x80204758: addiu       $a1, $a1, 0x4910
    ctx->r5 = ADD32(ctx->r5, 0X4910);
    // 0x8020475C: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x80204760: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80204764: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80204768: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8020476C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80204770: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80204774: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80204778: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8020477C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80204780: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80204784: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80204788: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8020478C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80204790: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80204794: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80204798: jal         0x800358E8
    // 0x8020479C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x8020479C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x802047A0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x802047A4: beq         $v0, $zero, L_802048F8
    if (ctx->r2 == 0) {
        // 0x802047A8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_802048F8;
    }
    // 0x802047A8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802047AC: lbu         $a1, 0x7B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X7B);
    // 0x802047B0: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
    // 0x802047B4: sw          $a0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r4;
    // 0x802047B8: sw          $s0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r16;
    // 0x802047BC: sw          $a1, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r5;
    // 0x802047C0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802047C4: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x802047C8: addiu       $t2, $t2, -0x47C0
    ctx->r10 = ADD32(ctx->r10, -0X47C0);
    // 0x802047CC: swc1        $f6, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f6.u32l;
    // 0x802047D0: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802047D4: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x802047D8: addu        $t0, $t1, $t2
    ctx->r8 = ADD32(ctx->r9, ctx->r10);
    // 0x802047DC: swc1        $f8, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f8.u32l;
    // 0x802047E0: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802047E4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x802047E8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802047EC: swc1        $f10, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f10.u32l;
    // 0x802047F0: lbu         $t3, 0xE($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XE);
    // 0x802047F4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802047F8: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x802047FC: sw          $t3, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r11;
    // 0x80204800: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80204804: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204808: swc1        $f16, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f16.u32l;
    // 0x8020480C: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80204810: swc1        $f18, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f18.u32l;
    // 0x80204814: lbu         $t8, 0xD($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XD);
    // 0x80204818: lbu         $t7, 0xC($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0XC);
    // 0x8020481C: lbu         $t6, 0xB($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0XB);
    // 0x80204820: lbu         $t4, 0xA($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0XA);
    // 0x80204824: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80204828: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8020482C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80204830: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80204834: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80204838: lw          $t9, 0x9C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X9C);
    // 0x8020483C: lbu         $a3, 0x9($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X9);
    // 0x80204840: lbu         $a2, 0x8($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X8);
    // 0x80204844: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x80204848: jal         0x8000E030
    // 0x8020484C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x8020484C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_1:
    // 0x80204850: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80204854: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80204858: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x8020485C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80204860: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80204864: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
    // 0x80204868: lwc1        $f4, 0xA0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XA0);
    // 0x8020486C: addiu       $t3, $v1, 0xC
    ctx->r11 = ADD32(ctx->r3, 0XC);
    // 0x80204870: addiu       $t4, $v1, 0x10
    ctx->r12 = ADD32(ctx->r3, 0X10);
    // 0x80204874: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x80204878: lwc1        $f6, 0xA4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XA4);
    // 0x8020487C: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x80204880: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x80204884: lwc1        $f8, 0xA8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XA8);
    // 0x80204888: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x8020488C: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x80204890: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80204894: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x80204898: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020489C: jal         0x8000E808
    // 0x802048A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8000E808_F408(rdram, ctx);
        goto after_2;
    // 0x802048A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x802048A4: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x802048A8: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x802048AC: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x802048B0: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802048B4: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802048B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802048BC: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802048C0: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x802048C4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802048C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802048CC: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x802048D0: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802048D4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802048D8: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    // 0x802048DC: lwc1        $f4, 0xAC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XAC);
    // 0x802048E0: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x802048E4: lwc1        $f6, 0xAC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XAC);
    // 0x802048E8: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
    // 0x802048EC: lwc1        $f8, 0xAC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XAC);
    // 0x802048F0: sb          $t5, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r13;
    // 0x802048F4: swc1        $f8, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f8.u32l;
L_802048F8:
    // 0x802048F8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802048FC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80204900: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80204904: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80204908: jr          $ra
    // 0x8020490C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8020490C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801D10E4_5FC4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D10E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D10E8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D10EC: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D10F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D10F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D10F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D10FC: lw          $a0, 0x1A4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1A4);
    // 0x801D1100: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D1104: addiu       $v1, $v1, 0x178
    ctx->r3 = ADD32(ctx->r3, 0X178);
    // 0x801D1108: bnel        $a0, $zero, L_801D1124
    if (ctx->r4 != 0) {
        // 0x801D110C: lwc1        $f4, 0x10($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
            goto L_801D1124;
    }
    goto skip_0;
    // 0x801D110C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x801D1110: jal         0x80034ED4
    // 0x801D1114: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801D1114: nop

    after_0:
    // 0x801D1118: b           L_801D1138
    // 0x801D111C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D1138;
    // 0x801D111C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1120: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
L_801D1124:
    // 0x801D1124: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1128: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D112C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D1130: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x801D1134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D1138:
    // 0x801D1138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D113C: jr          $ra
    // 0x801D1140: nop

    TRACE_RETURN()
    return;
    // 0x801D1140: nop

;}
RECOMP_FUNC void func_801E2A04_60DDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2A04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E2A08: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E2A0C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E2A10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2A14: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E2A18: bne         $a1, $zero, L_801E2A30
    if (ctx->r5 != 0) {
        // 0x801E2A1C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_801E2A30;
    }
    // 0x801E2A1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E2A20: jal         0x80034ED4
    // 0x801E2A24: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2A24: nop

    after_0:
    // 0x801E2A28: b           L_801E2AC8
    // 0x801E2A2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E2AC8;
    // 0x801E2A2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2A30:
    // 0x801E2A30: lw          $t6, 0xA0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA0);
    // 0x801E2A34: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E2A38: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E2A3C: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    // 0x801E2A40: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E2A44: lbu         $t7, 0x90($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X90);
    // 0x801E2A48: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801E2A4C: lwc1        $f6, 0x180($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X180);
    // 0x801E2A50: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801E2A54: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E2A58: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E2A5C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x801E2A60: subu        $v1, $t9, $t8
    ctx->r3 = SUB32(ctx->r25, ctx->r24);
    // 0x801E2A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2A68: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x801E2A6C: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    // 0x801E2A70: lw          $a3, 0x94($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X94);
    // 0x801E2A74: lw          $a2, 0x90($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X90);
    // 0x801E2A78: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x801E2A7C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x801E2A80: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801E2A84: jal         0x8000DF10
    // 0x801E2A88: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801E2A88: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
    // 0x801E2A8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2A90: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801E2A94: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E2A98: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801E2A9C: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x801E2AA0: lbu         $a3, 0xA7($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XA7);
    // 0x801E2AA4: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x801E2AA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E2AAC: jal         0x801D3324
    // 0x801E2AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D3324_5FE704(rdram, ctx);
        goto after_2;
    // 0x801E2AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801E2AB4: bnel        $v0, $zero, L_801E2AC8
    if (ctx->r2 != 0) {
        // 0x801E2AB8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E2AC8;
    }
    goto skip_0;
    // 0x801E2AB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E2ABC: jal         0x80034ED4
    // 0x801E2AC0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801E2AC0: nop

    after_3:
    // 0x801E2AC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2AC8:
    // 0x801E2AC8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2ACC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E2AD0: jr          $ra
    // 0x801E2AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E2AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D1144_5FC524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1144: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D1148: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D114C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1150: lwc1        $f0, -0x2DD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2DD4);
    // 0x801D1154: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D1158: addiu       $a1, $a1, 0x2FC0
    ctx->r5 = ADD32(ctx->r5, 0X2FC0);
    // 0x801D115C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D1160: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D1164: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801D1168: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D116C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1170: lwc1        $f6, -0x2DD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2DD0);
    // 0x801D1174: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D1178: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D117C: addiu       $t6, $zero, 0x4B4
    ctx->r14 = ADD32(0, 0X4B4);
    // 0x801D1180: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801D1184: addiu       $a2, $a2, -0x5430
    ctx->r6 = ADD32(ctx->r6, -0X5430);
    // 0x801D1188: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D118C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D1190: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D1194: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D1198: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801D119C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D11A0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D11A4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D11A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D11AC: jal         0x8000DBF0
    // 0x801D11B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801D11B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801D11B4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D11B8: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801D11BC: jal         0x8003521C
    // 0x801D11C0: addiu       $a0, $a0, 0x1264
    ctx->r4 = ADD32(ctx->r4, 0X1264);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D11C0: addiu       $a0, $a0, 0x1264
    ctx->r4 = ADD32(ctx->r4, 0X1264);
    after_1:
    // 0x801D11C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D11C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D11CC: jr          $ra
    // 0x801D11D0: nop

    TRACE_RETURN()
    return;
    // 0x801D11D0: nop

;}
RECOMP_FUNC void func_801DF3E8_60A7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF3E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DF3EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF3F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF3F4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801DF3F8: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801DF3FC: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801DF400: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DF404: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801DF408: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801DF40C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801DF410: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801DF414: lhu         $t9, -0x520C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X520C);
    // 0x801DF418: lw          $v0, 0x1D8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X1D8);
    // 0x801DF41C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF420: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x801DF424: beq         $at, $zero, L_801DF444
    if (ctx->r1 == 0) {
        // 0x801DF428: lw          $v1, 0x18($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X18);
            goto L_801DF444;
    }
    // 0x801DF428: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801DF42C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801DF430: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF434: addu        $at, $at, $t9
    gpr jr_addend_801DF43C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801DF438: lw          $t9, -0x24B0($at)
    ctx->r25 = ADD32(ctx->r1, -0X24B0);
    // 0x801DF43C: jr          $t9
    // 0x801DF440: nop

    switch (jr_addend_801DF43C >> 2) {
        case 0: goto L_801DF444; break;
        case 1: goto L_801DF444; break;
        case 2: goto L_801DF4F4; break;
        case 3: goto L_801DF528; break;
        case 4: goto L_801DF550; break;
        default: switch_error(__func__, 0x801DF43C, 0x8020DB50);
    }
    // 0x801DF440: nop

L_801DF444:
    // 0x801DF444: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x801DF448: jal         0x8000DD58
    // 0x801DF44C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801DF44C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x801DF450: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801DF454: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801DF458: bne         $v0, $a1, L_801DF464
    if (ctx->r2 != ctx->r5) {
        // 0x801DF45C: sw          $v0, 0xA8($s0)
        MEM_W(0XA8, ctx->r16) = ctx->r2;
            goto L_801DF464;
    }
    // 0x801DF45C: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
    // 0x801DF460: sw          $zero, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = 0;
L_801DF464:
    // 0x801DF464: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801DF468: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF46C: ldc1        $f6, -0x2498($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2498);
    // 0x801DF470: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801DF474: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x801DF478: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801DF47C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF480: bc1f        L_801DF494
    if (!c1cs) {
        // 0x801DF484: nop
    
            goto L_801DF494;
    }
    // 0x801DF484: nop

    // 0x801DF488: sw          $t0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r8;
    // 0x801DF48C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801DF490: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_801DF494:
    // 0x801DF494: ldc1        $f10, -0x2490($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2490);
    // 0x801DF498: c.le.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d <= ctx->f0.d;
    // 0x801DF49C: nop

    // 0x801DF4A0: bc1fl       L_801DF4B0
    if (!c1cs) {
        // 0x801DF4A4: lwc1        $f18, 0x10($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
            goto L_801DF4B0;
    }
    goto skip_0;
    // 0x801DF4A4: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x801DF4A8: sw          $a1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r5;
    // 0x801DF4AC: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
L_801DF4B0:
    // 0x801DF4B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF4B4: ldc1        $f16, -0x2488($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X2488);
    // 0x801DF4B8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DF4BC: c.le.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d <= ctx->f16.d;
    // 0x801DF4C0: nop

    // 0x801DF4C4: bc1fl       L_801DF56C
    if (!c1cs) {
        // 0x801DF4C8: lw          $t5, 0xA8($s0)
        ctx->r13 = MEM_W(ctx->r16, 0XA8);
            goto L_801DF56C;
    }
    goto skip_1;
    // 0x801DF4C8: lw          $t5, 0xA8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XA8);
    skip_1:
    // 0x801DF4CC: jal         0x8000DD58
    // 0x801DF4D0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801DF4D0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x801DF4D4: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x801DF4D8: bne         $at, $zero, L_801DF4E8
    if (ctx->r1 != 0) {
        // 0x801DF4DC: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_801DF4E8;
    }
    // 0x801DF4DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801DF4E0: b           L_801DF568
    // 0x801DF4E4: sw          $a1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r5;
        goto L_801DF568;
    // 0x801DF4E4: sw          $a1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r5;
L_801DF4E8:
    // 0x801DF4E8: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801DF4EC: b           L_801DF568
    // 0x801DF4F0: sw          $t1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r9;
        goto L_801DF568;
    // 0x801DF4F0: sw          $t1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r9;
L_801DF4F4:
    // 0x801DF4F4: jal         0x801F71DC
    // 0x801DF4F8: nop

    func_801F71DC_6225BC(rdram, ctx);
        goto after_2;
    // 0x801DF4F8: nop

    after_2:
    // 0x801DF4FC: bne         $v0, $zero, L_801DF514
    if (ctx->r2 != 0) {
        // 0x801DF500: nop
    
            goto L_801DF514;
    }
    // 0x801DF500: nop

    // 0x801DF504: jal         0x8000DDC0
    // 0x801DF508: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_3;
    // 0x801DF508: nop

    after_3:
    // 0x801DF50C: b           L_801DF568
    // 0x801DF510: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
        goto L_801DF568;
    // 0x801DF510: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
L_801DF514:
    // 0x801DF514: jal         0x8000DDC0
    // 0x801DF518: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_4;
    // 0x801DF518: nop

    after_4:
    // 0x801DF51C: addiu       $t2, $v0, 0x2
    ctx->r10 = ADD32(ctx->r2, 0X2);
    // 0x801DF520: b           L_801DF568
    // 0x801DF524: sw          $t2, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r10;
        goto L_801DF568;
    // 0x801DF524: sw          $t2, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r10;
L_801DF528:
    // 0x801DF528: jal         0x8000DD58
    // 0x801DF52C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801DF52C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x801DF530: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x801DF534: bne         $at, $zero, L_801DF548
    if (ctx->r1 != 0) {
        // 0x801DF538: addiu       $t4, $zero, 0x7
        ctx->r12 = ADD32(0, 0X7);
            goto L_801DF548;
    }
    // 0x801DF538: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x801DF53C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x801DF540: b           L_801DF568
    // 0x801DF544: sw          $t3, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r11;
        goto L_801DF568;
    // 0x801DF544: sw          $t3, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r11;
L_801DF548:
    // 0x801DF548: b           L_801DF568
    // 0x801DF54C: sw          $t4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r12;
        goto L_801DF568;
    // 0x801DF54C: sw          $t4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r12;
L_801DF550:
    // 0x801DF550: jal         0x8000DD58
    // 0x801DF554: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801DF554: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x801DF558: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801DF55C: bne         $v0, $a1, L_801DF568
    if (ctx->r2 != ctx->r5) {
        // 0x801DF560: sw          $v0, 0xA8($s0)
        MEM_W(0XA8, ctx->r16) = ctx->r2;
            goto L_801DF568;
    }
    // 0x801DF560: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
    // 0x801DF564: sw          $zero, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = 0;
L_801DF568:
    // 0x801DF568: lw          $t5, 0xA8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XA8);
L_801DF56C:
    // 0x801DF56C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DF570: addiu       $t7, $t7, -0x6100
    ctx->r15 = ADD32(ctx->r15, -0X6100);
    // 0x801DF574: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801DF578: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x801DF57C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801DF580: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801DF584: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801DF588: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    // 0x801DF58C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DF590: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x801DF594: swc1        $f8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f8.u32l;
    // 0x801DF598: lh          $t8, 0x8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8);
    // 0x801DF59C: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x801DF5A0: sw          $t8, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r24;
    // 0x801DF5A4: lhu         $a3, 0xB6($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XB6);
    // 0x801DF5A8: jal         0x801D53EC
    // 0x801DF5AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D53EC_6007CC(rdram, ctx);
        goto after_7;
    // 0x801DF5AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x801DF5B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF5B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF5B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801DF5BC: jr          $ra
    // 0x801DF5C0: nop

    TRACE_RETURN()
    return;
    // 0x801DF5C0: nop

;}
RECOMP_FUNC void func_801EEB30_619F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEB30: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801EEB34: jr          $ra
    // 0x801EEB38: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801EEB38: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80201618_62C9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020161C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80201620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201624: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80201628: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x8020162C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80201630: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x80201634: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201638: addiu       $a0, $a0, 0x1684
    ctx->r4 = ADD32(ctx->r4, 0X1684);
    // 0x8020163C: jal         0x8003521C
    // 0x80201640: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80201640: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80201644: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80201648: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x8020164C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80201650: lbu         $t8, 0xA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XA);
    // 0x80201654: beq         $t8, $zero, L_8020166C
    if (ctx->r24 == 0) {
        // 0x80201658: nop
    
            goto L_8020166C;
    }
    // 0x80201658: nop

    // 0x8020165C: jal         0x80200684
    // 0x80201660: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_1;
    // 0x80201660: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x80201664: b           L_80201678
    // 0x80201668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80201678;
    // 0x80201668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020166C:
    // 0x8020166C: jal         0x8020407C
    // 0x80201670: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_2;
    // 0x80201670: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80201674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80201678:
    // 0x80201678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020167C: jr          $ra
    // 0x80201680: nop

    TRACE_RETURN()
    return;
    // 0x80201680: nop

;}
RECOMP_FUNC void func_80205978_630D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205978: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x8020597C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80205980: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205984: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80205988: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8020598C: lw          $v1, 0x1D8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X1D8);
    // 0x80205990: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80205994: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x80205998: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x8020599C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802059A0: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x802059A4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x802059A8: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802059AC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802059B0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802059B4: jal         0x8000EDF4
    // 0x802059B8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000EDF4_F9F4(rdram, ctx);
        goto after_0;
    // 0x802059B8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802059BC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802059C0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802059C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802059C8: swc1        $f0, 0x90($t7)
    MEM_W(0X90, ctx->r15) = ctx->f0.u32l;
    // 0x802059CC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x802059D0: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x802059D4: lwc1        $f14, 0x10($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802059D8: jal         0x8000E28C
    // 0x802059DC: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_1;
    // 0x802059DC: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    after_1:
    // 0x802059E0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802059E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802059E8: addiu       $a0, $a0, 0x5A04
    ctx->r4 = ADD32(ctx->r4, 0X5A04);
    // 0x802059EC: jal         0x8003521C
    // 0x802059F0: sw          $v0, 0x94($t8)
    MEM_W(0X94, ctx->r24) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x802059F0: sw          $v0, 0x94($t8)
    MEM_W(0X94, ctx->r24) = ctx->r2;
    after_2:
    // 0x802059F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802059F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802059FC: jr          $ra
    // 0x80205A00: nop

    TRACE_RETURN()
    return;
    // 0x80205A00: nop

;}
RECOMP_FUNC void func_801E1C4C_60D02C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1C4C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E1C50: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1C54: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1C58: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E1C5C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E1C60: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E1C64: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E1C68: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1C6C: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E1C70: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1C74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1C78: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1C7C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E1C80: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1C84: addiu       $t9, $zero, 0x4A9
    ctx->r25 = ADD32(0, 0X4A9);
    // 0x801E1C88: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E1C8C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E1C90: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1C94: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E1C98: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E1C9C: addiu       $a1, $a1, 0x2934
    ctx->r5 = ADD32(ctx->r5, 0X2934);
    // 0x801E1CA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E1CA4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1CA8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1CAC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E1CB0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E1CB4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E1CB8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E1CBC: jal         0x800358E8
    // 0x801E1CC0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E1CC0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1CC4: beq         $v0, $zero, L_801E1D24
    if (ctx->r2 == 0) {
        // 0x801E1CC8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E1D24;
    }
    // 0x801E1CC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E1CCC: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1CD0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E1CD4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E1CD8: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E1CDC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E1CE0: addiu       $t0, $t0, -0x4FF4
    ctx->r8 = ADD32(ctx->r8, -0X4FF4);
    // 0x801E1CE4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E1CE8: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E1CEC: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E1CF0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E1CF4: addiu       $t3, $t3, -0x54E0
    ctx->r11 = ADD32(ctx->r11, -0X54E0);
    // 0x801E1CF8: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E1CFC: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801E1D00: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801E1D04: sw          $t0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r8;
    // 0x801E1D08: sw          $t1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r9;
    // 0x801E1D0C: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x801E1D10: sw          $t3, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r11;
    // 0x801E1D14: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E1D18: jal         0x801E18E4
    // 0x801E1D1C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E1D1C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E1D20: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E1D24:
    // 0x801E1D24: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1D28: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E1D2C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E1D30: jr          $ra
    // 0x801E1D34: nop

    TRACE_RETURN()
    return;
    // 0x801E1D34: nop

;}
RECOMP_FUNC void func_801E59EC_610DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E59EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E59F0: jr          $ra
    // 0x801E59F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E59F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E5D38_611118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5D38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E5D3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E5D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E5D44: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801E5D48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E5D4C: jal         0x801D6B8C
    // 0x801E5D50: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6B8C_601F6C(rdram, ctx);
        goto after_0;
    // 0x801E5D50: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x801E5D54: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x801E5D58: jal         0x801EEE54
    // 0x801E5D5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801EEE54_61A234(rdram, ctx);
        goto after_1;
    // 0x801E5D5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801E5D60: jal         0x801EEEA0
    // 0x801E5D64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801EEEA0_61A280(rdram, ctx);
        goto after_2;
    // 0x801E5D64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x801E5D68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E5D6C: jal         0x801D2F40
    // 0x801E5D70: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801E5D70: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    after_3:
    // 0x801E5D74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5D78: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x801E5D7C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E5D80: nop

    // 0x801E5D84: bc1fl       L_801E5DA0
    if (!c1cs) {
        // 0x801E5D88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E5DA0;
    }
    goto skip_0;
    // 0x801E5D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E5D8C: beql        $t6, $zero, L_801E5DA0
    if (ctx->r14 == 0) {
        // 0x801E5D90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E5DA0;
    }
    goto skip_1;
    // 0x801E5D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E5D94: jal         0x801E599C
    // 0x801E5D98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801E599C_610D7C(rdram, ctx);
        goto after_4;
    // 0x801E5D98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x801E5D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5DA0:
    // 0x801E5DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E5DA4: jr          $ra
    // 0x801E5DA8: nop

    TRACE_RETURN()
    return;
    // 0x801E5DA8: nop

;}
RECOMP_FUNC void func_801F24F4_61D8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F24F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F24F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F24FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F2500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F2504: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F2508: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F250C: jal         0x801D3018
    // 0x801F2510: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F2510: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F2514: jal         0x801F76D0
    // 0x801F2518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F2518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F251C: jal         0x801D619C
    // 0x801F2520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_2;
    // 0x801F2520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F2524: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801F2528: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F252C: lwc1        $f4, -0x19AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X19AC);
    // 0x801F2530: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801F2534: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F2538: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801F253C: nop

    // 0x801F2540: bc1fl       L_801F2590
    if (!c1cs) {
        // 0x801F2544: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F2590;
    }
    goto skip_0;
    // 0x801F2544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F2548: lwc1        $f6, -0x19A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X19A8);
    // 0x801F254C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F2550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F2554: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x801F2558: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F255C: bc1fl       L_801F2590
    if (!c1cs) {
        // 0x801F2560: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F2590;
    }
    goto skip_1;
    // 0x801F2560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F2564: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F2568: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F256C: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    // 0x801F2570: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x801F2574: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F2578: jal         0x801D31CC
    // 0x801F257C: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801F257C: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x801F2580: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2584: jal         0x8003521C
    // 0x801F2588: addiu       $a0, $a0, 0x25A0
    ctx->r4 = ADD32(ctx->r4, 0X25A0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F2588: addiu       $a0, $a0, 0x25A0
    ctx->r4 = ADD32(ctx->r4, 0X25A0);
    after_4:
    // 0x801F258C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F2590:
    // 0x801F2590: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F2594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F2598: jr          $ra
    // 0x801F259C: nop

    TRACE_RETURN()
    return;
    // 0x801F259C: nop

;}
RECOMP_FUNC void func_802034C4_62E8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802034C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802034C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802034CC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802034D0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802034D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802034D8: jal         0x80203F88
    // 0x802034DC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x802034DC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x802034E0: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x802034E4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802034E8: blez        $t7, L_80203550
    if (SIGNED(ctx->r15) <= 0) {
        // 0x802034EC: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_80203550;
    }
    // 0x802034EC: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x802034F0: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x802034F4: bnel        $t8, $zero, L_80203558
    if (ctx->r24 != 0) {
        // 0x802034F8: lw          $t9, 0x80($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X80);
            goto L_80203558;
    }
    goto skip_0;
    // 0x802034F8: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
    skip_0:
    // 0x802034FC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80203500: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80203504: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80203508: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8020350C: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80203510: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80203514: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80203518: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8020351C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80203520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80203524: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80203528: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8020352C: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80203530: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80203534: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80203538: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8020353C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80203540: jal         0x801DFB90
    // 0x80203544: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_1;
    // 0x80203544: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80203548: b           L_80203558
    // 0x8020354C: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
        goto L_80203558;
    // 0x8020354C: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_80203550:
    // 0x80203550: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x80203554: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_80203558:
    // 0x80203558: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8020355C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80203560: bne         $t0, $zero, L_802035BC
    if (ctx->r8 != 0) {
        // 0x80203564: sw          $t0, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r8;
            goto L_802035BC;
    }
    // 0x80203564: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
    // 0x80203568: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020356C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80203570: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80203574: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80203578: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8020357C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80203580: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80203584: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80203588: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8020358C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80203590: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x80203594: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80203598: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020359C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x802035A0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x802035A4: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x802035A8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802035AC: jal         0x801E006C
    // 0x802035B0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x802035B0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802035B4: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x802035B8: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
L_802035BC:
    // 0x802035BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802035C0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802035C4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802035C8: jr          $ra
    // 0x802035CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802035CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801CDD10_5F90F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDD10: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CDD14: lw          $t1, -0x1130($v0)
    ctx->r9 = MEM_W(ctx->r2, -0X1130);
    // 0x801CDD18: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801CDD1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CDD20: addiu       $t6, $t1, 0x140
    ctx->r14 = ADD32(ctx->r9, 0X140);
    // 0x801CDD24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CDD28: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801CDD2C: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x801CDD30: lw          $t7, 0x1D8($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X1D8);
    // 0x801CDD34: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801CDD38: beq         $t7, $zero, L_801CDD48
    if (ctx->r15 == 0) {
        // 0x801CDD3C: sw          $t7, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r15;
            goto L_801CDD48;
    }
    // 0x801CDD3C: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x801CDD40: lw          $t9, 0x18($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X18);
    // 0x801CDD44: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_801CDD48:
    // 0x801CDD48: lhu         $v1, 0x2E($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X2E);
    // 0x801CDD4C: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x801CDD50: beql        $at, $zero, L_801CDD70
    if (ctx->r1 == 0) {
        // 0x801CDD54: sltiu       $at, $v1, 0x18
        ctx->r1 = ctx->r3 < 0X18 ? 1 : 0;
            goto L_801CDD70;
    }
    goto skip_0;
    // 0x801CDD54: sltiu       $at, $v1, 0x18
    ctx->r1 = ctx->r3 < 0X18 ? 1 : 0;
    skip_0:
    // 0x801CDD58: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801CDD5C: jal         0x801D27BC
    // 0x801CDD60: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D27BC_5FDB9C(rdram, ctx);
        goto after_0;
    // 0x801CDD60: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_0:
    // 0x801CDD64: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CDD68: lhu         $v1, 0x2E($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X2E);
    // 0x801CDD6C: sltiu       $at, $v1, 0x18
    ctx->r1 = ctx->r3 < 0X18 ? 1 : 0;
L_801CDD70:
    // 0x801CDD70: beq         $at, $zero, L_801CE564
    if (ctx->r1 == 0) {
        // 0x801CDD74: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_801CE564;
    }
    // 0x801CDD74: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x801CDD78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDD7C: addu        $at, $at, $t2
    gpr jr_addend_801CDD84 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801CDD80: lw          $t2, -0x300C($at)
    ctx->r10 = ADD32(ctx->r1, -0X300C);
    // 0x801CDD84: jr          $t2
    // 0x801CDD88: nop

    switch (jr_addend_801CDD84 >> 2) {
        case 0: goto L_801CE564; break;
        case 1: goto L_801CDD8C; break;
        case 2: goto L_801CDE74; break;
        case 3: goto L_801CDF68; break;
        case 4: goto L_801CDFE0; break;
        case 5: goto L_801CE058; break;
        case 6: goto L_801CE0D0; break;
        case 7: goto L_801CE148; break;
        case 8: goto L_801CE1C0; break;
        case 9: goto L_801CE238; break;
        case 10: goto L_801CE2A4; break;
        case 11: goto L_801CE564; break;
        case 12: goto L_801CE564; break;
        case 13: goto L_801CE564; break;
        case 14: goto L_801CE564; break;
        case 15: goto L_801CE564; break;
        case 16: goto L_801CE564; break;
        case 17: goto L_801CE564; break;
        case 18: goto L_801CE564; break;
        case 19: goto L_801CE564; break;
        case 20: goto L_801CE44C; break;
        case 21: goto L_801CE2A4; break;
        case 22: goto L_801CE474; break;
        case 23: goto L_801CE540; break;
        default: switch_error(__func__, 0x801CDD84, 0x8020CFF4);
    }
    // 0x801CDD88: nop

L_801CDD8C:
    // 0x801CDD8C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801CDD90: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CDD94: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
    // 0x801CDD98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDD9C: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CDDA0: nop

    // 0x801CDDA4: bc1t        L_801CDDCC
    if (c1cs) {
        // 0x801CDDA8: nop
    
            goto L_801CDDCC;
    }
    // 0x801CDDA8: nop

    // 0x801CDDAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CDDB0: nop

    // 0x801CDDB4: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x801CDDB8: nop

    // 0x801CDDBC: bc1t        L_801CDDCC
    if (c1cs) {
        // 0x801CDDC0: nop
    
            goto L_801CDDCC;
    }
    // 0x801CDDC0: nop

    // 0x801CDDC4: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CDDC8: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
L_801CDDCC:
    // 0x801CDDCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDDD0: ldc1        $f6, -0x2FA8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2FA8);
    // 0x801CDDD4: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801CDDD8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CDDDC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CDDE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDDE4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CDDE8: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x801CDDEC: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x801CDDF0: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801CDDF4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CDDF8: ldc1        $f10, -0x2FA0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2FA0);
    // 0x801CDDFC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDE00: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x801CDE04: c.le.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d <= ctx->f0.d;
    // 0x801CDE08: nop

    // 0x801CDE0C: bc1f        L_801CDE28
    if (!c1cs) {
        // 0x801CDE10: nop
    
            goto L_801CDE28;
    }
    // 0x801CDE10: nop

    // 0x801CDE14: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CDE18: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDE1C: lwc1        $f8, -0x2F98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2F98);
    // 0x801CDE20: b           L_801CDE54
    // 0x801CDE24: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
        goto L_801CDE54;
    // 0x801CDE24: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_801CDE28:
    // 0x801CDE28: ldc1        $f4, -0x2F90($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2F90);
    // 0x801CDE2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDE30: c.le.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d <= ctx->f4.d;
    // 0x801CDE34: nop

    // 0x801CDE38: bc1fl       L_801CDE58
    if (!c1cs) {
        // 0x801CDE3C: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_801CDE58;
    }
    goto skip_1;
    // 0x801CDE3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x801CDE40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CDE44: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDE48: swc1        $f6, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f6.u32l;
    // 0x801CDE4C: lwc1        $f10, -0x2F88($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2F88);
    // 0x801CDE50: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
L_801CDE54:
    // 0x801CDE54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_801CDE58:
    // 0x801CDE58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CDE5C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801CDE60: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x801CDE64: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801CDE68: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x801CDE6C: b           L_801CE590
    // 0x801CDE70: swc1        $f4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f4.u32l;
        goto L_801CE590;
    // 0x801CDE70: swc1        $f4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f4.u32l;
L_801CDE74:
    // 0x801CDE74: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801CDE78: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CDE7C: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
    // 0x801CDE80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDE84: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CDE88: nop

    // 0x801CDE8C: bc1t        L_801CDEB4
    if (c1cs) {
        // 0x801CDE90: nop
    
            goto L_801CDEB4;
    }
    // 0x801CDE90: nop

    // 0x801CDE94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CDE98: nop

    // 0x801CDE9C: c.eq.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl == ctx->f2.fl;
    // 0x801CDEA0: nop

    // 0x801CDEA4: bc1t        L_801CDEB4
    if (c1cs) {
        // 0x801CDEA8: nop
    
            goto L_801CDEB4;
    }
    // 0x801CDEA8: nop

    // 0x801CDEAC: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CDEB0: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
L_801CDEB4:
    // 0x801CDEB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDEB8: ldc1        $f10, -0x2F80($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2F80);
    // 0x801CDEBC: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801CDEC0: lwc1        $f6, 0x30($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X30);
    // 0x801CDEC4: mul.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x801CDEC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDECC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801CDED0: add.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d + ctx->f4.d;
    // 0x801CDED4: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x801CDED8: swc1        $f6, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f6.u32l;
    // 0x801CDEDC: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
    // 0x801CDEE0: ldc1        $f10, -0x2F78($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2F78);
    // 0x801CDEE4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDEE8: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x801CDEEC: c.le.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d <= ctx->f0.d;
    // 0x801CDEF0: nop

    // 0x801CDEF4: bc1f        L_801CDF14
    if (!c1cs) {
        // 0x801CDEF8: nop
    
            goto L_801CDF14;
    }
    // 0x801CDEF8: nop

    // 0x801CDEFC: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CDF00: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDF04: lwc1        $f4, -0x2F70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2F70);
    // 0x801CDF08: swc1        $f4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f4.u32l;
    // 0x801CDF0C: b           L_801CDF44
    // 0x801CDF10: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
        goto L_801CDF44;
    // 0x801CDF10: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
L_801CDF14:
    // 0x801CDF14: ldc1        $f8, -0x2F68($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2F68);
    // 0x801CDF18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CDF1C: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x801CDF20: nop

    // 0x801CDF24: bc1fl       L_801CDF48
    if (!c1cs) {
        // 0x801CDF28: swc1        $f12, 0x8C($t1)
        MEM_W(0X8C, ctx->r9) = ctx->f12.u32l;
            goto L_801CDF48;
    }
    goto skip_2;
    // 0x801CDF28: swc1        $f12, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->f12.u32l;
    skip_2:
    // 0x801CDF2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CDF30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CDF34: swc1        $f6, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f6.u32l;
    // 0x801CDF38: lwc1        $f10, -0x2F60($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2F60);
    // 0x801CDF3C: swc1        $f10, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f10.u32l;
    // 0x801CDF40: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
L_801CDF44:
    // 0x801CDF44: swc1        $f12, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->f12.u32l;
L_801CDF48:
    // 0x801CDF48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CDF4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CDF50: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801CDF54: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x801CDF58: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801CDF5C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x801CDF60: b           L_801CE590
    // 0x801CDF64: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
        goto L_801CE590;
    // 0x801CDF64: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_801CDF68:
    // 0x801CDF68: jal         0x801CEEB8
    // 0x801CDF6C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_1;
    // 0x801CDF6C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_1:
    // 0x801CDF70: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x801CDF74: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CDF78: addiu       $t4, $t3, 0x3FD
    ctx->r12 = ADD32(ctx->r11, 0X3FD);
    // 0x801CDF7C: andi        $v1, $t4, 0xFFFF
    ctx->r3 = ctx->r12 & 0XFFFF;
    // 0x801CDF80: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801CDF84: bne         $at, $zero, L_801CDF98
    if (ctx->r1 != 0) {
        // 0x801CDF88: sh          $t4, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r12;
            goto L_801CDF98;
    }
    // 0x801CDF88: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x801CDF8C: addiu       $t5, $v1, -0x400
    ctx->r13 = ADD32(ctx->r3, -0X400);
    // 0x801CDF90: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x801CDF94: andi        $v1, $t5, 0xFFFF
    ctx->r3 = ctx->r13 & 0XFFFF;
L_801CDF98:
    // 0x801CDF98: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801CDF9C: bne         $at, $zero, L_801CDFD4
    if (ctx->r1 != 0) {
        // 0x801CDFA0: slti        $at, $v1, 0x3E9
        ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
            goto L_801CDFD4;
    }
    // 0x801CDFA0: slti        $at, $v1, 0x3E9
    ctx->r1 = SIGNED(ctx->r3) < 0X3E9 ? 1 : 0;
    // 0x801CDFA4: beq         $at, $zero, L_801CDFD4
    if (ctx->r1 == 0) {
        // 0x801CDFA8: addiu       $t6, $zero, 0x3E8
        ctx->r14 = ADD32(0, 0X3E8);
            goto L_801CDFD4;
    }
    // 0x801CDFA8: addiu       $t6, $zero, 0x3E8
    ctx->r14 = ADD32(0, 0X3E8);
    // 0x801CDFAC: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
    // 0x801CDFB0: jal         0x801D39A0
    // 0x801CDFB4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_2;
    // 0x801CDFB4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_2:
    // 0x801CDFB8: beq         $v0, $zero, L_801CDFCC
    if (ctx->r2 == 0) {
        // 0x801CDFBC: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801CDFCC;
    }
    // 0x801CDFBC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CDFC0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x801CDFC4: b           L_801CDFD4
    // 0x801CDFC8: sh          $t7, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r15;
        goto L_801CDFD4;
    // 0x801CDFC8: sh          $t7, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r15;
L_801CDFCC:
    // 0x801CDFCC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801CDFD0: sh          $t8, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r24;
L_801CDFD4:
    // 0x801CDFD4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CDFD8: b           L_801CE590
    // 0x801CDFDC: sh          $t9, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r25;
        goto L_801CE590;
    // 0x801CDFDC: sh          $t9, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r25;
L_801CDFE0:
    // 0x801CDFE0: jal         0x801CEEB8
    // 0x801CDFE4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_3;
    // 0x801CDFE4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_3:
    // 0x801CDFE8: lhu         $t2, 0x16($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X16);
    // 0x801CDFEC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CDFF0: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x801CDFF4: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
    // 0x801CDFF8: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801CDFFC: bne         $at, $zero, L_801CE010
    if (ctx->r1 != 0) {
        // 0x801CE000: sh          $t3, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r11;
            goto L_801CE010;
    }
    // 0x801CE000: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
    // 0x801CE004: addiu       $t4, $v1, -0x400
    ctx->r12 = ADD32(ctx->r3, -0X400);
    // 0x801CE008: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x801CE00C: andi        $v1, $t4, 0xFFFF
    ctx->r3 = ctx->r12 & 0XFFFF;
L_801CE010:
    // 0x801CE010: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801CE014: beq         $at, $zero, L_801CE04C
    if (ctx->r1 == 0) {
        // 0x801CE018: slti        $at, $v1, 0x18
        ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
            goto L_801CE04C;
    }
    // 0x801CE018: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x801CE01C: bne         $at, $zero, L_801CE04C
    if (ctx->r1 != 0) {
        // 0x801CE020: addiu       $t5, $zero, 0x18
        ctx->r13 = ADD32(0, 0X18);
            goto L_801CE04C;
    }
    // 0x801CE020: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x801CE024: sh          $t5, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r13;
    // 0x801CE028: jal         0x801D39A0
    // 0x801CE02C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_4;
    // 0x801CE02C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_4:
    // 0x801CE030: beq         $v0, $zero, L_801CE044
    if (ctx->r2 == 0) {
        // 0x801CE034: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801CE044;
    }
    // 0x801CE034: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE038: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x801CE03C: b           L_801CE04C
    // 0x801CE040: sh          $t6, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r14;
        goto L_801CE04C;
    // 0x801CE040: sh          $t6, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r14;
L_801CE044:
    // 0x801CE044: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801CE048: sh          $t7, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r15;
L_801CE04C:
    // 0x801CE04C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CE050: b           L_801CE590
    // 0x801CE054: sh          $t8, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r24;
        goto L_801CE590;
    // 0x801CE054: sh          $t8, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r24;
L_801CE058:
    // 0x801CE058: jal         0x801CEEB8
    // 0x801CE05C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_5;
    // 0x801CE05C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_5:
    // 0x801CE060: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x801CE064: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE068: addiu       $t2, $t9, 0x2
    ctx->r10 = ADD32(ctx->r25, 0X2);
    // 0x801CE06C: andi        $v1, $t2, 0xFFFF
    ctx->r3 = ctx->r10 & 0XFFFF;
    // 0x801CE070: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801CE074: bne         $at, $zero, L_801CE088
    if (ctx->r1 != 0) {
        // 0x801CE078: sh          $t2, 0x14($s0)
        MEM_H(0X14, ctx->r16) = ctx->r10;
            goto L_801CE088;
    }
    // 0x801CE078: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
    // 0x801CE07C: addiu       $t3, $v1, -0x400
    ctx->r11 = ADD32(ctx->r3, -0X400);
    // 0x801CE080: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x801CE084: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
L_801CE088:
    // 0x801CE088: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801CE08C: beq         $at, $zero, L_801CE0C4
    if (ctx->r1 == 0) {
        // 0x801CE090: slti        $at, $v1, 0x10
        ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
            goto L_801CE0C4;
    }
    // 0x801CE090: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x801CE094: bne         $at, $zero, L_801CE0C4
    if (ctx->r1 != 0) {
        // 0x801CE098: addiu       $t4, $zero, 0x10
        ctx->r12 = ADD32(0, 0X10);
            goto L_801CE0C4;
    }
    // 0x801CE098: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x801CE09C: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
    // 0x801CE0A0: jal         0x801D39A0
    // 0x801CE0A4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_6;
    // 0x801CE0A4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_6:
    // 0x801CE0A8: beq         $v0, $zero, L_801CE0BC
    if (ctx->r2 == 0) {
        // 0x801CE0AC: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801CE0BC;
    }
    // 0x801CE0AC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE0B0: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x801CE0B4: b           L_801CE0C4
    // 0x801CE0B8: sh          $t5, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r13;
        goto L_801CE0C4;
    // 0x801CE0B8: sh          $t5, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r13;
L_801CE0BC:
    // 0x801CE0BC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801CE0C0: sh          $t6, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r14;
L_801CE0C4:
    // 0x801CE0C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CE0C8: b           L_801CE590
    // 0x801CE0CC: sh          $t7, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r15;
        goto L_801CE590;
    // 0x801CE0CC: sh          $t7, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r15;
L_801CE0D0:
    // 0x801CE0D0: jal         0x801CEEB8
    // 0x801CE0D4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_7;
    // 0x801CE0D4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_7:
    // 0x801CE0D8: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x801CE0DC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE0E0: addiu       $t9, $t8, 0x3FE
    ctx->r25 = ADD32(ctx->r24, 0X3FE);
    // 0x801CE0E4: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
    // 0x801CE0E8: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801CE0EC: bne         $at, $zero, L_801CE100
    if (ctx->r1 != 0) {
        // 0x801CE0F0: sh          $t9, 0x14($s0)
        MEM_H(0X14, ctx->r16) = ctx->r25;
            goto L_801CE100;
    }
    // 0x801CE0F0: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x801CE0F4: addiu       $t2, $v1, -0x400
    ctx->r10 = ADD32(ctx->r3, -0X400);
    // 0x801CE0F8: sh          $t2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r10;
    // 0x801CE0FC: andi        $v1, $t2, 0xFFFF
    ctx->r3 = ctx->r10 & 0XFFFF;
L_801CE100:
    // 0x801CE100: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801CE104: bne         $at, $zero, L_801CE13C
    if (ctx->r1 != 0) {
        // 0x801CE108: slti        $at, $v1, 0x3F1
        ctx->r1 = SIGNED(ctx->r3) < 0X3F1 ? 1 : 0;
            goto L_801CE13C;
    }
    // 0x801CE108: slti        $at, $v1, 0x3F1
    ctx->r1 = SIGNED(ctx->r3) < 0X3F1 ? 1 : 0;
    // 0x801CE10C: beq         $at, $zero, L_801CE13C
    if (ctx->r1 == 0) {
        // 0x801CE110: addiu       $t3, $zero, 0x3F0
        ctx->r11 = ADD32(0, 0X3F0);
            goto L_801CE13C;
    }
    // 0x801CE110: addiu       $t3, $zero, 0x3F0
    ctx->r11 = ADD32(0, 0X3F0);
    // 0x801CE114: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x801CE118: jal         0x801D39A0
    // 0x801CE11C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_8;
    // 0x801CE11C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_8:
    // 0x801CE120: beq         $v0, $zero, L_801CE134
    if (ctx->r2 == 0) {
        // 0x801CE124: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801CE134;
    }
    // 0x801CE124: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE128: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x801CE12C: b           L_801CE13C
    // 0x801CE130: sh          $t4, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r12;
        goto L_801CE13C;
    // 0x801CE130: sh          $t4, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r12;
L_801CE134:
    // 0x801CE134: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x801CE138: sh          $t5, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r13;
L_801CE13C:
    // 0x801CE13C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CE140: b           L_801CE590
    // 0x801CE144: sh          $t6, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r14;
        goto L_801CE590;
    // 0x801CE144: sh          $t6, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r14;
L_801CE148:
    // 0x801CE148: jal         0x801CEEB8
    // 0x801CE14C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_9;
    // 0x801CE14C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_9:
    // 0x801CE150: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x801CE154: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE158: addiu       $t8, $t7, 0x3FE
    ctx->r24 = ADD32(ctx->r15, 0X3FE);
    // 0x801CE15C: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
    // 0x801CE160: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801CE164: bne         $at, $zero, L_801CE178
    if (ctx->r1 != 0) {
        // 0x801CE168: sh          $t8, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r24;
            goto L_801CE178;
    }
    // 0x801CE168: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
    // 0x801CE16C: addiu       $t9, $v1, -0x400
    ctx->r25 = ADD32(ctx->r3, -0X400);
    // 0x801CE170: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x801CE174: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
L_801CE178:
    // 0x801CE178: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801CE17C: bne         $at, $zero, L_801CE1B4
    if (ctx->r1 != 0) {
        // 0x801CE180: slti        $at, $v1, 0x3F1
        ctx->r1 = SIGNED(ctx->r3) < 0X3F1 ? 1 : 0;
            goto L_801CE1B4;
    }
    // 0x801CE180: slti        $at, $v1, 0x3F1
    ctx->r1 = SIGNED(ctx->r3) < 0X3F1 ? 1 : 0;
    // 0x801CE184: beq         $at, $zero, L_801CE1B4
    if (ctx->r1 == 0) {
        // 0x801CE188: addiu       $t2, $zero, 0x3F0
        ctx->r10 = ADD32(0, 0X3F0);
            goto L_801CE1B4;
    }
    // 0x801CE188: addiu       $t2, $zero, 0x3F0
    ctx->r10 = ADD32(0, 0X3F0);
    // 0x801CE18C: sh          $t2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r10;
    // 0x801CE190: jal         0x801D39A0
    // 0x801CE194: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_10;
    // 0x801CE194: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_10:
    // 0x801CE198: beq         $v0, $zero, L_801CE1AC
    if (ctx->r2 == 0) {
        // 0x801CE19C: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801CE1AC;
    }
    // 0x801CE19C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE1A0: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x801CE1A4: b           L_801CE1B4
    // 0x801CE1A8: sh          $t3, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r11;
        goto L_801CE1B4;
    // 0x801CE1A8: sh          $t3, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r11;
L_801CE1AC:
    // 0x801CE1AC: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x801CE1B0: sh          $t4, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r12;
L_801CE1B4:
    // 0x801CE1B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CE1B8: b           L_801CE590
    // 0x801CE1BC: sh          $t5, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r13;
        goto L_801CE590;
    // 0x801CE1BC: sh          $t5, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r13;
L_801CE1C0:
    // 0x801CE1C0: jal         0x801CEEB8
    // 0x801CE1C4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_11;
    // 0x801CE1C4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_11:
    // 0x801CE1C8: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x801CE1CC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE1D0: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x801CE1D4: andi        $v1, $t7, 0xFFFF
    ctx->r3 = ctx->r15 & 0XFFFF;
    // 0x801CE1D8: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801CE1DC: bne         $at, $zero, L_801CE1F0
    if (ctx->r1 != 0) {
        // 0x801CE1E0: sh          $t7, 0x18($s0)
        MEM_H(0X18, ctx->r16) = ctx->r15;
            goto L_801CE1F0;
    }
    // 0x801CE1E0: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
    // 0x801CE1E4: addiu       $t8, $v1, -0x400
    ctx->r24 = ADD32(ctx->r3, -0X400);
    // 0x801CE1E8: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
    // 0x801CE1EC: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
L_801CE1F0:
    // 0x801CE1F0: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801CE1F4: beq         $at, $zero, L_801CE22C
    if (ctx->r1 == 0) {
        // 0x801CE1F8: slti        $at, $v1, 0x10
        ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
            goto L_801CE22C;
    }
    // 0x801CE1F8: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x801CE1FC: bne         $at, $zero, L_801CE22C
    if (ctx->r1 != 0) {
        // 0x801CE200: addiu       $t9, $zero, 0x10
        ctx->r25 = ADD32(0, 0X10);
            goto L_801CE22C;
    }
    // 0x801CE200: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x801CE204: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x801CE208: jal         0x801D39A0
    // 0x801CE20C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_12;
    // 0x801CE20C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_12:
    // 0x801CE210: beq         $v0, $zero, L_801CE224
    if (ctx->r2 == 0) {
        // 0x801CE214: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801CE224;
    }
    // 0x801CE214: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE218: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x801CE21C: b           L_801CE22C
    // 0x801CE220: sh          $t2, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r10;
        goto L_801CE22C;
    // 0x801CE220: sh          $t2, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r10;
L_801CE224:
    // 0x801CE224: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801CE228: sh          $t3, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r11;
L_801CE22C:
    // 0x801CE22C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CE230: b           L_801CE590
    // 0x801CE234: sh          $t4, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r12;
        goto L_801CE590;
    // 0x801CE234: sh          $t4, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r12;
L_801CE238:
    // 0x801CE238: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x801CE23C: addiu       $t6, $t5, 0x3FF
    ctx->r14 = ADD32(ctx->r13, 0X3FF);
    // 0x801CE240: andi        $v1, $t6, 0xFFFF
    ctx->r3 = ctx->r14 & 0XFFFF;
    // 0x801CE244: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801CE248: bne         $at, $zero, L_801CE25C
    if (ctx->r1 != 0) {
        // 0x801CE24C: sh          $t6, 0x14($s0)
        MEM_H(0X14, ctx->r16) = ctx->r14;
            goto L_801CE25C;
    }
    // 0x801CE24C: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
    // 0x801CE250: addiu       $t7, $v1, -0x400
    ctx->r15 = ADD32(ctx->r3, -0X400);
    // 0x801CE254: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
    // 0x801CE258: andi        $v1, $t7, 0xFFFF
    ctx->r3 = ctx->r15 & 0XFFFF;
L_801CE25C:
    // 0x801CE25C: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801CE260: bne         $at, $zero, L_801CE298
    if (ctx->r1 != 0) {
        // 0x801CE264: slti        $at, $v1, 0x3F9
        ctx->r1 = SIGNED(ctx->r3) < 0X3F9 ? 1 : 0;
            goto L_801CE298;
    }
    // 0x801CE264: slti        $at, $v1, 0x3F9
    ctx->r1 = SIGNED(ctx->r3) < 0X3F9 ? 1 : 0;
    // 0x801CE268: beq         $at, $zero, L_801CE298
    if (ctx->r1 == 0) {
        // 0x801CE26C: addiu       $t8, $zero, 0x3F8
        ctx->r24 = ADD32(0, 0X3F8);
            goto L_801CE298;
    }
    // 0x801CE26C: addiu       $t8, $zero, 0x3F8
    ctx->r24 = ADD32(0, 0X3F8);
    // 0x801CE270: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x801CE274: jal         0x801D39A0
    // 0x801CE278: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_13;
    // 0x801CE278: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_13:
    // 0x801CE27C: beq         $v0, $zero, L_801CE290
    if (ctx->r2 == 0) {
        // 0x801CE280: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801CE290;
    }
    // 0x801CE280: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE284: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x801CE288: b           L_801CE298
    // 0x801CE28C: sh          $t9, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r25;
        goto L_801CE298;
    // 0x801CE28C: sh          $t9, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r25;
L_801CE290:
    // 0x801CE290: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x801CE294: sh          $t2, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r10;
L_801CE298:
    // 0x801CE298: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CE29C: b           L_801CE590
    // 0x801CE2A0: sh          $t3, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r11;
        goto L_801CE590;
    // 0x801CE2A0: sh          $t3, 0x40($t1)
    MEM_H(0X40, ctx->r9) = ctx->r11;
L_801CE2A4:
    // 0x801CE2A4: jal         0x801CEEB8
    // 0x801CE2A8: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_14;
    // 0x801CE2A8: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_14:
    // 0x801CE2AC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE2B0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801CE2B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CE2B8: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
    // 0x801CE2BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CE2C0: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CE2C4: nop

    // 0x801CE2C8: bc1t        L_801CE2F0
    if (c1cs) {
        // 0x801CE2CC: nop
    
            goto L_801CE2F0;
    }
    // 0x801CE2CC: nop

    // 0x801CE2D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CE2D4: nop

    // 0x801CE2D8: c.eq.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl == ctx->f2.fl;
    // 0x801CE2DC: nop

    // 0x801CE2E0: bc1t        L_801CE2F0
    if (c1cs) {
        // 0x801CE2E4: nop
    
            goto L_801CE2F0;
    }
    // 0x801CE2E4: nop

    // 0x801CE2E8: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CE2EC: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
L_801CE2F0:
    // 0x801CE2F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE2F4: ldc1        $f10, -0x2F58($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2F58);
    // 0x801CE2F8: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801CE2FC: lwc1        $f6, 0x30($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X30);
    // 0x801CE300: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801CE304: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE308: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801CE30C: add.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d + ctx->f8.d;
    // 0x801CE310: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801CE314: swc1        $f6, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f6.u32l;
    // 0x801CE318: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
    // 0x801CE31C: ldc1        $f10, -0x2F50($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2F50);
    // 0x801CE320: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE324: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x801CE328: c.le.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d <= ctx->f0.d;
    // 0x801CE32C: nop

    // 0x801CE330: bc1f        L_801CE350
    if (!c1cs) {
        // 0x801CE334: nop
    
            goto L_801CE350;
    }
    // 0x801CE334: nop

    // 0x801CE338: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CE33C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE340: lwc1        $f8, -0x2F48($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2F48);
    // 0x801CE344: swc1        $f8, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f8.u32l;
    // 0x801CE348: b           L_801CE380
    // 0x801CE34C: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
        goto L_801CE380;
    // 0x801CE34C: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
L_801CE350:
    // 0x801CE350: ldc1        $f4, -0x2F40($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2F40);
    // 0x801CE354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CE358: c.le.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d <= ctx->f4.d;
    // 0x801CE35C: nop

    // 0x801CE360: bc1fl       L_801CE384
    if (!c1cs) {
        // 0x801CE364: swc1        $f12, 0x8C($t1)
        MEM_W(0X8C, ctx->r9) = ctx->f12.u32l;
            goto L_801CE384;
    }
    goto skip_3;
    // 0x801CE364: swc1        $f12, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->f12.u32l;
    skip_3:
    // 0x801CE368: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CE36C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE370: swc1        $f6, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f6.u32l;
    // 0x801CE374: lwc1        $f10, -0x2F38($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2F38);
    // 0x801CE378: swc1        $f10, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f10.u32l;
    // 0x801CE37C: lwc1        $f12, 0x30($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X30);
L_801CE380:
    // 0x801CE380: swc1        $f12, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->f12.u32l;
L_801CE384:
    // 0x801CE384: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x801CE388: beq         $v0, $zero, L_801CE3A8
    if (ctx->r2 == 0) {
        // 0x801CE38C: slti        $at, $v0, 0x200
        ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
            goto L_801CE3A8;
    }
    // 0x801CE38C: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x801CE390: bne         $at, $zero, L_801CE3A4
    if (ctx->r1 != 0) {
        // 0x801CE394: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_801CE3A4;
    }
    // 0x801CE394: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x801CE398: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x801CE39C: b           L_801CE3A8
    // 0x801CE3A0: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
        goto L_801CE3A8;
    // 0x801CE3A0: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
L_801CE3A4:
    // 0x801CE3A4: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
L_801CE3A8:
    // 0x801CE3A8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x801CE3AC: beq         $v0, $zero, L_801CE3CC
    if (ctx->r2 == 0) {
        // 0x801CE3B0: slti        $at, $v0, 0x200
        ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
            goto L_801CE3CC;
    }
    // 0x801CE3B0: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x801CE3B4: bne         $at, $zero, L_801CE3C8
    if (ctx->r1 != 0) {
        // 0x801CE3B8: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_801CE3C8;
    }
    // 0x801CE3B8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x801CE3BC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x801CE3C0: b           L_801CE3CC
    // 0x801CE3C4: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
        goto L_801CE3CC;
    // 0x801CE3C4: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
L_801CE3C8:
    // 0x801CE3C8: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
L_801CE3CC:
    // 0x801CE3CC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x801CE3D0: beq         $v0, $zero, L_801CE3F0
    if (ctx->r2 == 0) {
        // 0x801CE3D4: slti        $at, $v0, 0x200
        ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
            goto L_801CE3F0;
    }
    // 0x801CE3D4: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x801CE3D8: bne         $at, $zero, L_801CE3EC
    if (ctx->r1 != 0) {
        // 0x801CE3DC: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_801CE3EC;
    }
    // 0x801CE3DC: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x801CE3E0: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x801CE3E4: b           L_801CE3F0
    // 0x801CE3E8: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
        goto L_801CE3F0;
    // 0x801CE3E8: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
L_801CE3EC:
    // 0x801CE3EC: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
L_801CE3F0:
    // 0x801CE3F0: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x801CE3F4: bnel        $t2, $zero, L_801CE594
    if (ctx->r10 != 0) {
        // 0x801CE3F8: lw          $a2, 0x20($t1)
        ctx->r6 = MEM_W(ctx->r9, 0X20);
            goto L_801CE594;
    }
    goto skip_4;
    // 0x801CE3F8: lw          $a2, 0x20($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X20);
    skip_4:
    // 0x801CE3FC: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x801CE400: bnel        $t3, $zero, L_801CE594
    if (ctx->r11 != 0) {
        // 0x801CE404: lw          $a2, 0x20($t1)
        ctx->r6 = MEM_W(ctx->r9, 0X20);
            goto L_801CE594;
    }
    goto skip_5;
    // 0x801CE404: lw          $a2, 0x20($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X20);
    skip_5:
    // 0x801CE408: lhu         $t4, 0x18($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X18);
    // 0x801CE40C: bnel        $t4, $zero, L_801CE594
    if (ctx->r12 != 0) {
        // 0x801CE410: lw          $a2, 0x20($t1)
        ctx->r6 = MEM_W(ctx->r9, 0X20);
            goto L_801CE594;
    }
    goto skip_6;
    // 0x801CE410: lw          $a2, 0x20($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X20);
    skip_6:
    // 0x801CE414: lhu         $t5, 0x2E($t1)
    ctx->r13 = MEM_HU(ctx->r9, 0X2E);
    // 0x801CE418: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x801CE41C: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x801CE420: bnel        $t5, $at, L_801CE43C
    if (ctx->r13 != ctx->r1) {
        // 0x801CE424: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_801CE43C;
    }
    goto skip_7;
    // 0x801CE424: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_7:
    // 0x801CE428: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CE42C: sh          $t6, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r14;
    // 0x801CE430: b           L_801CE590
    // 0x801CE434: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
        goto L_801CE590;
    // 0x801CE434: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x801CE438: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_801CE43C:
    // 0x801CE43C: sh          $zero, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = 0;
    // 0x801CE440: sh          $zero, 0x40($t1)
    MEM_H(0X40, ctx->r9) = 0;
    // 0x801CE444: b           L_801CE590
    // 0x801CE448: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
        goto L_801CE590;
    // 0x801CE448: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
L_801CE44C:
    // 0x801CE44C: jal         0x801CEEB8
    // 0x801CE450: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801CEEB8_5FA298(rdram, ctx);
        goto after_15;
    // 0x801CE450: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_15:
    // 0x801CE454: jal         0x801CFA5C
    // 0x801CE458: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_801CFA5C_5FAE3C(rdram, ctx);
        goto after_16;
    // 0x801CE458: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_16:
    // 0x801CE45C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x801CE460: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE464: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x801CE468: sw          $v0, 0x90($t7)
    MEM_W(0X90, ctx->r15) = ctx->r2;
    // 0x801CE46C: b           L_801CE590
    // 0x801CE470: sh          $t8, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r24;
        goto L_801CE590;
    // 0x801CE470: sh          $t8, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = ctx->r24;
L_801CE474:
    // 0x801CE474: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801CE478: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CE47C: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
    // 0x801CE480: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CE484: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x801CE488: nop

    // 0x801CE48C: bc1t        L_801CE4B4
    if (c1cs) {
        // 0x801CE490: nop
    
            goto L_801CE4B4;
    }
    // 0x801CE490: nop

    // 0x801CE494: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CE498: nop

    // 0x801CE49C: c.eq.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl == ctx->f2.fl;
    // 0x801CE4A0: nop

    // 0x801CE4A4: bc1t        L_801CE4B4
    if (c1cs) {
        // 0x801CE4A8: nop
    
            goto L_801CE4B4;
    }
    // 0x801CE4A8: nop

    // 0x801CE4AC: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CE4B0: lwc1        $f2, 0x34($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X34);
L_801CE4B4:
    // 0x801CE4B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE4B8: ldc1        $f10, -0x2F30($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2F30);
    // 0x801CE4BC: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801CE4C0: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CE4C4: mul.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x801CE4C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE4CC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801CE4D0: add.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d + ctx->f4.d;
    // 0x801CE4D4: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x801CE4D8: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801CE4DC: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CE4E0: ldc1        $f4, -0x2F28($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2F28);
    // 0x801CE4E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE4E8: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x801CE4EC: c.le.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d <= ctx->f0.d;
    // 0x801CE4F0: nop

    // 0x801CE4F4: bc1f        L_801CE510
    if (!c1cs) {
        // 0x801CE4F8: nop
    
            goto L_801CE510;
    }
    // 0x801CE4F8: nop

    // 0x801CE4FC: swc1        $f14, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f14.u32l;
    // 0x801CE500: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE504: lwc1        $f8, -0x2F20($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2F20);
    // 0x801CE508: b           L_801CE590
    // 0x801CE50C: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
        goto L_801CE590;
    // 0x801CE50C: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_801CE510:
    // 0x801CE510: ldc1        $f6, -0x2F18($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2F18);
    // 0x801CE514: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CE518: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801CE51C: nop

    // 0x801CE520: bc1fl       L_801CE594
    if (!c1cs) {
        // 0x801CE524: lw          $a2, 0x20($t1)
        ctx->r6 = MEM_W(ctx->r9, 0X20);
            goto L_801CE594;
    }
    goto skip_8;
    // 0x801CE524: lw          $a2, 0x20($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X20);
    skip_8:
    // 0x801CE528: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CE52C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CE530: swc1        $f10, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f10.u32l;
    // 0x801CE534: lwc1        $f4, -0x2F10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2F10);
    // 0x801CE538: b           L_801CE590
    // 0x801CE53C: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
        goto L_801CE590;
    // 0x801CE53C: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
L_801CE540:
    // 0x801CE540: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x801CE544: lw          $a0, 0x90($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X90);
    // 0x801CE548: jal         0x80034EF8
    // 0x801CE54C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_17;
    // 0x801CE54C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_17:
    // 0x801CE550: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE554: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CE558: sh          $zero, 0x2E($t1)
    MEM_H(0X2E, ctx->r9) = 0;
    // 0x801CE55C: b           L_801CE590
    // 0x801CE560: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
        goto L_801CE590;
    // 0x801CE560: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
L_801CE564:
    // 0x801CE564: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CE568: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801CE56C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x801CE570: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801CE574: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x801CE578: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x801CE57C: sh          $zero, 0x40($t1)
    MEM_H(0X40, ctx->r9) = 0;
    // 0x801CE580: swc1        $f0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f0.u32l;
    // 0x801CE584: swc1        $f0, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->f0.u32l;
    // 0x801CE588: swc1        $f0, 0x38($t1)
    MEM_W(0X38, ctx->r9) = ctx->f0.u32l;
    // 0x801CE58C: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
L_801CE590:
    // 0x801CE590: lw          $a2, 0x20($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X20);
L_801CE594:
    // 0x801CE594: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x801CE598: lw          $a3, 0x28($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X28);
    // 0x801CE59C: lhu         $t2, 0x16($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X16);
    // 0x801CE5A0: beql        $t2, $at, L_801CE5C4
    if (ctx->r10 == ctx->r1) {
        // 0x801CE5A4: lhu         $v0, 0x24($t1)
        ctx->r2 = MEM_HU(ctx->r9, 0X24);
            goto L_801CE5C4;
    }
    goto skip_9;
    // 0x801CE5A4: lhu         $v0, 0x24($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X24);
    skip_9:
    // 0x801CE5A8: lhu         $v0, 0x24($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X24);
    // 0x801CE5AC: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801CE5B0: beq         $at, $zero, L_801CE5D0
    if (ctx->r1 == 0) {
        // 0x801CE5B4: addiu       $t3, $v0, 0x1
        ctx->r11 = ADD32(ctx->r2, 0X1);
            goto L_801CE5D0;
    }
    // 0x801CE5B4: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801CE5B8: b           L_801CE5D0
    // 0x801CE5BC: sh          $t3, 0x24($t1)
    MEM_H(0X24, ctx->r9) = ctx->r11;
        goto L_801CE5D0;
    // 0x801CE5BC: sh          $t3, 0x24($t1)
    MEM_H(0X24, ctx->r9) = ctx->r11;
    // 0x801CE5C0: lhu         $v0, 0x24($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X24);
L_801CE5C4:
    // 0x801CE5C4: blez        $v0, L_801CE5D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801CE5C8: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_801CE5D0;
    }
    // 0x801CE5C8: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x801CE5CC: sh          $t4, 0x24($t1)
    MEM_H(0X24, ctx->r9) = ctx->r12;
L_801CE5D0:
    // 0x801CE5D0: lhu         $t5, 0x16($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X16);
    // 0x801CE5D4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x801CE5D8: beql        $t5, $at, L_801CE5FC
    if (ctx->r13 == ctx->r1) {
        // 0x801CE5DC: lhu         $v0, 0x2C($t1)
        ctx->r2 = MEM_HU(ctx->r9, 0X2C);
            goto L_801CE5FC;
    }
    goto skip_10;
    // 0x801CE5DC: lhu         $v0, 0x2C($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2C);
    skip_10:
    // 0x801CE5E0: lhu         $v0, 0x2C($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2C);
    // 0x801CE5E4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801CE5E8: beq         $at, $zero, L_801CE608
    if (ctx->r1 == 0) {
        // 0x801CE5EC: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_801CE608;
    }
    // 0x801CE5EC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x801CE5F0: b           L_801CE608
    // 0x801CE5F4: sh          $t6, 0x2C($t1)
    MEM_H(0X2C, ctx->r9) = ctx->r14;
        goto L_801CE608;
    // 0x801CE5F4: sh          $t6, 0x2C($t1)
    MEM_H(0X2C, ctx->r9) = ctx->r14;
    // 0x801CE5F8: lhu         $v0, 0x2C($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2C);
L_801CE5FC:
    // 0x801CE5FC: blez        $v0, L_801CE608
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801CE600: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_801CE608;
    }
    // 0x801CE600: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x801CE604: sh          $t7, 0x2C($t1)
    MEM_H(0X2C, ctx->r9) = ctx->r15;
L_801CE608:
    // 0x801CE608: lhu         $v1, 0x2E($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X2E);
    // 0x801CE60C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CE610: beq         $v1, $at, L_801CE63C
    if (ctx->r3 == ctx->r1) {
        // 0x801CE614: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_801CE63C;
    }
    // 0x801CE614: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CE618: beq         $v1, $at, L_801CE63C
    if (ctx->r3 == ctx->r1) {
        // 0x801CE61C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_801CE63C;
    }
    // 0x801CE61C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801CE620: beql        $v1, $at, L_801CE640
    if (ctx->r3 == ctx->r1) {
        // 0x801CE624: lwc1        $f6, 0x8($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
            goto L_801CE640;
    }
    goto skip_11;
    // 0x801CE624: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    skip_11:
    // 0x801CE628: lhu         $t8, 0x24($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X24);
    // 0x801CE62C: lhu         $t9, 0x2C($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X2C);
    // 0x801CE630: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x801CE634: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801CE638: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
L_801CE63C:
    // 0x801CE63C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
L_801CE640:
    // 0x801CE640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE644: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x801CE648: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CE64C: swc1        $f10, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f10.u32l;
    // 0x801CE650: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CE654: swc1        $f4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f4.u32l;
    // 0x801CE658: lbu         $t4, 0x64($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X64);
    // 0x801CE65C: sb          $t4, 0x64($a2)
    MEM_B(0X64, ctx->r6) = ctx->r12;
    // 0x801CE660: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CE664: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    // 0x801CE668: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CE66C: swc1        $f6, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f6.u32l;
    // 0x801CE670: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CE674: swc1        $f10, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f10.u32l;
    // 0x801CE678: lbu         $t5, 0x64($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X64);
    // 0x801CE67C: sb          $t5, 0x64($a3)
    MEM_B(0X64, ctx->r7) = ctx->r13;
    // 0x801CE680: lw          $a1, 0x4C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4C);
    // 0x801CE684: jal         0x8000DD04
    // 0x801CE688: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_8000DD04_E904(rdram, ctx);
        goto after_18;
    // 0x801CE688: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_18:
    // 0x801CE68C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE690: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE694: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE698: lw          $t0, 0x64($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X64);
    // 0x801CE69C: slti        $at, $t0, 0x3E8
    ctx->r1 = SIGNED(ctx->r8) < 0X3E8 ? 1 : 0;
    // 0x801CE6A0: bnel        $at, $zero, L_801CE6B4
    if (ctx->r1 != 0) {
        // 0x801CE6A4: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_801CE6B4;
    }
    goto skip_12;
    // 0x801CE6A4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_12:
    // 0x801CE6A8: sw          $zero, 0x64($t1)
    MEM_W(0X64, ctx->r9) = 0;
    // 0x801CE6AC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801CE6B0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_801CE6B4:
    // 0x801CE6B4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x801CE6B8: mfhi        $t6
    ctx->r14 = hi;
    // 0x801CE6BC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CE6C0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801CE6C4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x801CE6C8: mfhi        $v1
    ctx->r3 = hi;
    // 0x801CE6CC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801CE6D0: lw          $a0, 0x4C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4C);
    // 0x801CE6D4: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x801CE6D8: mflo        $t7
    ctx->r15 = lo;
    // 0x801CE6DC: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x801CE6E0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x801CE6E4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x801CE6E8: mfhi        $v0
    ctx->r2 = hi;
    // 0x801CE6EC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CE6F0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x801CE6F4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x801CE6F8: mflo        $t8
    ctx->r24 = lo;
    // 0x801CE6FC: andi        $a3, $t8, 0xFF
    ctx->r7 = ctx->r24 & 0XFF;
    // 0x801CE700: jal         0x8000E23C
    // 0x801CE704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000E23C_EE3C(rdram, ctx);
        goto after_19;
    // 0x801CE704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x801CE708: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801CE70C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE710: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE714: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE718: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CE71C: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x801CE720: jal         0x8000E23C
    // 0x801CE724: lw          $a0, 0x4C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4C);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_20;
    // 0x801CE724: lw          $a0, 0x4C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4C);
    after_20:
    // 0x801CE728: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE72C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE730: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE734: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CE738: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x801CE73C: jal         0x8000E23C
    // 0x801CE740: lw          $a0, 0x4C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4C);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_21;
    // 0x801CE740: lw          $a0, 0x4C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4C);
    after_21:
    // 0x801CE744: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE74C: lhu         $t9, 0x40($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X40);
    // 0x801CE750: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x801CE754: bnel        $at, $zero, L_801CE76C
    if (ctx->r1 != 0) {
        // 0x801CE758: lw          $a1, 0x50($t1)
        ctx->r5 = MEM_W(ctx->r9, 0X50);
            goto L_801CE76C;
    }
    goto skip_13;
    // 0x801CE758: lw          $a1, 0x50($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X50);
    skip_13:
    // 0x801CE75C: lw          $t3, 0x4C($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4C);
    // 0x801CE760: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801CE764: sb          $t2, 0x64($t3)
    MEM_B(0X64, ctx->r11) = ctx->r10;
    // 0x801CE768: lw          $a1, 0x50($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X50);
L_801CE76C:
    // 0x801CE76C: jal         0x8000DD04
    // 0x801CE770: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_8000DD04_E904(rdram, ctx);
        goto after_22;
    // 0x801CE770: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_22:
    // 0x801CE774: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE778: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE77C: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE780: lw          $t0, 0x68($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X68);
    // 0x801CE784: slti        $at, $t0, 0x3E8
    ctx->r1 = SIGNED(ctx->r8) < 0X3E8 ? 1 : 0;
    // 0x801CE788: bnel        $at, $zero, L_801CE79C
    if (ctx->r1 != 0) {
        // 0x801CE78C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_801CE79C;
    }
    goto skip_14;
    // 0x801CE78C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_14:
    // 0x801CE790: sw          $zero, 0x68($t1)
    MEM_W(0X68, ctx->r9) = 0;
    // 0x801CE794: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801CE798: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_801CE79C:
    // 0x801CE79C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x801CE7A0: mfhi        $t4
    ctx->r12 = hi;
    // 0x801CE7A4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CE7A8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801CE7AC: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x801CE7B0: mfhi        $v1
    ctx->r3 = hi;
    // 0x801CE7B4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801CE7B8: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    // 0x801CE7BC: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x801CE7C0: mflo        $t5
    ctx->r13 = lo;
    // 0x801CE7C4: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x801CE7C8: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x801CE7CC: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x801CE7D0: mfhi        $v0
    ctx->r2 = hi;
    // 0x801CE7D4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CE7D8: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x801CE7DC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x801CE7E0: mflo        $t6
    ctx->r14 = lo;
    // 0x801CE7E4: andi        $a3, $t6, 0xFF
    ctx->r7 = ctx->r14 & 0XFF;
    // 0x801CE7E8: jal         0x8000E23C
    // 0x801CE7EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000E23C_EE3C(rdram, ctx);
        goto after_23;
    // 0x801CE7EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x801CE7F0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801CE7F4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE7F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE7FC: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CE804: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x801CE808: jal         0x8000E23C
    // 0x801CE80C: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_24;
    // 0x801CE80C: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    after_24:
    // 0x801CE810: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE814: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE818: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE81C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801CE820: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x801CE824: jal         0x8000E23C
    // 0x801CE828: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_25;
    // 0x801CE828: lw          $a0, 0x50($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X50);
    after_25:
    // 0x801CE82C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE830: lhu         $t7, 0x40($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X40);
    // 0x801CE834: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x801CE838: bnel        $at, $zero, L_801CE850
    if (ctx->r1 != 0) {
        // 0x801CE83C: lw          $a2, 0x60($t1)
        ctx->r6 = MEM_W(ctx->r9, 0X60);
            goto L_801CE850;
    }
    goto skip_15;
    // 0x801CE83C: lw          $a2, 0x60($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X60);
    skip_15:
    // 0x801CE840: lw          $t9, 0x50($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X50);
    // 0x801CE844: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CE848: sb          $t8, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r24;
    // 0x801CE84C: lw          $a2, 0x60($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X60);
L_801CE850:
    // 0x801CE850: slti        $at, $a2, 0x2710
    ctx->r1 = SIGNED(ctx->r6) < 0X2710 ? 1 : 0;
    // 0x801CE854: bnel        $at, $zero, L_801CE868
    if (ctx->r1 != 0) {
        // 0x801CE858: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_801CE868;
    }
    goto skip_16;
    // 0x801CE858: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_16:
    // 0x801CE85C: sw          $zero, 0x60($t1)
    MEM_W(0X60, ctx->r9) = 0;
    // 0x801CE860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CE864: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_801CE868:
    // 0x801CE868: div         $zero, $a2, $at
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r1)));
    // 0x801CE86C: mfhi        $t2
    ctx->r10 = hi;
    // 0x801CE870: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CE874: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801CE878: div         $zero, $a2, $at
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r1)));
    // 0x801CE87C: mfhi        $a3
    ctx->r7 = hi;
    // 0x801CE880: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801CE884: lw          $a1, 0x44($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X44);
    // 0x801CE888: divu        $zero, $a3, $at
    lo = S32(U32(ctx->r7) / U32(ctx->r1)); hi = S32(U32(ctx->r7) % U32(ctx->r1));
    // 0x801CE88C: mflo        $t3
    ctx->r11 = lo;
    // 0x801CE890: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x801CE894: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x801CE898: div         $zero, $a2, $at
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r1)));
    // 0x801CE89C: mfhi        $v1
    ctx->r3 = hi;
    // 0x801CE8A0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CE8A4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x801CE8A8: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x801CE8AC: mflo        $t4
    ctx->r12 = lo;
    // 0x801CE8B0: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x801CE8B4: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x801CE8B8: div         $zero, $a2, $at
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r1)));
    // 0x801CE8BC: mfhi        $v0
    ctx->r2 = hi;
    // 0x801CE8C0: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x801CE8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE8C8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x801CE8CC: mflo        $t5
    ctx->r13 = lo;
    // 0x801CE8D0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x801CE8D4: jal         0x8000DD04
    // 0x801CE8D8: nop

    func_8000DD04_E904(rdram, ctx);
        goto after_26;
    // 0x801CE8D8: nop

    after_26:
    // 0x801CE8DC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801CE8E0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE8E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE8E8: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CE8F0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x801CE8F4: jal         0x8000E23C
    // 0x801CE8F8: lw          $a0, 0x44($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X44);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_27;
    // 0x801CE8F8: lw          $a0, 0x44($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X44);
    after_27:
    // 0x801CE8FC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801CE900: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE904: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE908: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE90C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CE910: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x801CE914: jal         0x8000E23C
    // 0x801CE918: lw          $a0, 0x44($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X44);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_28;
    // 0x801CE918: lw          $a0, 0x44($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X44);
    after_28:
    // 0x801CE91C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE924: jal         0x8000DD04
    // 0x801CE928: lw          $a1, 0x48($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X48);
    func_8000DD04_E904(rdram, ctx);
        goto after_29;
    // 0x801CE928: lw          $a1, 0x48($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X48);
    after_29:
    // 0x801CE92C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE930: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE934: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE938: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CE93C: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x801CE940: jal         0x8000E23C
    // 0x801CE944: lw          $a0, 0x48($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X48);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_30;
    // 0x801CE944: lw          $a0, 0x48($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X48);
    after_30:
    // 0x801CE948: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE94C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CE950: addiu       $a1, $a1, -0x5044
    ctx->r5 = ADD32(ctx->r5, -0X5044);
    // 0x801CE954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CE958: lbu         $a3, 0x23($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X23);
    // 0x801CE95C: jal         0x8000E23C
    // 0x801CE960: lw          $a0, 0x48($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X48);
    func_8000E23C_EE3C(rdram, ctx);
        goto after_31;
    // 0x801CE960: lw          $a0, 0x48($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X48);
    after_31:
    // 0x801CE964: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE96C: lhu         $t6, 0x40($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0X40);
    // 0x801CE970: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x801CE974: bnel        $at, $zero, L_801CE998
    if (ctx->r1 != 0) {
        // 0x801CE978: lw          $a1, 0x54($t1)
        ctx->r5 = MEM_W(ctx->r9, 0X54);
            goto L_801CE998;
    }
    goto skip_17;
    // 0x801CE978: lw          $a1, 0x54($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X54);
    skip_17:
    // 0x801CE97C: lw          $t8, 0x44($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X44);
    // 0x801CE980: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CE984: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CE988: sb          $t7, 0x64($t8)
    MEM_B(0X64, ctx->r24) = ctx->r15;
    // 0x801CE98C: lw          $t2, 0x48($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X48);
    // 0x801CE990: sb          $t9, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r25;
    // 0x801CE994: lw          $a1, 0x54($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X54);
L_801CE998:
    // 0x801CE998: jal         0x8000DD04
    // 0x801CE99C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_8000DD04_E904(rdram, ctx);
        goto after_32;
    // 0x801CE99C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_32:
    // 0x801CE9A0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CE9A4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801CE9A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CE9AC: lhu         $t3, 0x40($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X40);
    // 0x801CE9B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CE9B4: blezl       $t3, L_801CE9CC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x801CE9B8: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_801CE9CC;
    }
    goto skip_18;
    // 0x801CE9B8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    skip_18:
    // 0x801CE9BC: lw          $t5, 0x54($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X54);
    // 0x801CE9C0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CE9C4: sb          $t4, 0x64($t5)
    MEM_B(0X64, ctx->r13) = ctx->r12;
    // 0x801CE9C8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_801CE9CC:
    // 0x801CE9CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801CE9D0: lbu         $t7, 0xA($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XA);
    // 0x801CE9D4: bnel        $v1, $t7, L_801CE9F0
    if (ctx->r3 != ctx->r15) {
        // 0x801CE9D8: lw          $t9, 0x6C($t1)
        ctx->r25 = MEM_W(ctx->r9, 0X6C);
            goto L_801CE9F0;
    }
    goto skip_19;
    // 0x801CE9D8: lw          $t9, 0x6C($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X6C);
    skip_19:
    // 0x801CE9DC: lw          $t8, 0x70($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X70);
    // 0x801CE9E0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CE9E4: b           L_801CE9FC
    // 0x801CE9E8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
        goto L_801CE9FC;
    // 0x801CE9E8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CE9EC: lw          $t9, 0x6C($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X6C);
L_801CE9F0:
    // 0x801CE9F0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x801CE9F4: nop

    // 0x801CE9F8: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
L_801CE9FC:
    // 0x801CE9FC: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801CEA00: nop

    // 0x801CEA04: bc1fl       L_801CEA14
    if (!c1cs) {
        // 0x801CEA08: lw          $v0, 0x54($t1)
        ctx->r2 = MEM_W(ctx->r9, 0X54);
            goto L_801CEA14;
    }
    goto skip_20;
    // 0x801CEA08: lw          $v0, 0x54($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X54);
    skip_20:
    // 0x801CEA0C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x801CEA10: lw          $v0, 0x54($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X54);
L_801CEA14:
    // 0x801CEA14: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801CEA18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CEA1C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CEA20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEA24: ldc1        $f4, -0x2F08($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2F08);
    // 0x801CEA28: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801CEA2C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801CEA30: add.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d + ctx->f4.d;
    // 0x801CEA34: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x801CEA38: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x801CEA3C: lw          $v0, 0x54($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X54);
    // 0x801CEA40: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801CEA44: div.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801CEA48: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x801CEA4C: lw          $v0, 0x54($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X54);
    // 0x801CEA50: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801CEA54: div.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801CEA58: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801CEA5C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801CEA60: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x801CEA64: lw          $v0, 0x54($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X54);
    // 0x801CEA68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CEA6C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801CEA70: div.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801CEA74: div.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x801CEA78: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x801CEA7C: lw          $t2, 0x54($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X54);
    // 0x801CEA80: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801CEA84: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x801CEA88: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x801CEA8C: lbu         $t4, 0xA($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XA);
    // 0x801CEA90: beql        $v1, $t4, L_801CEB00
    if (ctx->r3 == ctx->r12) {
        // 0x801CEA94: c.eq.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
            goto L_801CEB00;
    }
    goto skip_21;
    // 0x801CEA94: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    skip_21:
    // 0x801CEA98: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x801CEA9C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801CEAA0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801CEAA4: bc1fl       L_801CEAF0
    if (!c1cs) {
        // 0x801CEAA8: lw          $t4, 0x54($t1)
        ctx->r12 = MEM_W(ctx->r9, 0X54);
            goto L_801CEAF0;
    }
    goto skip_22;
    // 0x801CEAA8: lw          $t4, 0x54($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X54);
    skip_22:
    // 0x801CEAAC: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801CEAB0: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CEAB4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CEAB8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801CEABC: lh          $t6, -0x524E($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X524E);
    // 0x801CEAC0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801CEAC4: beql        $t6, $zero, L_801CEAE0
    if (ctx->r14 == 0) {
        // 0x801CEAC8: lw          $t2, 0x54($t1)
        ctx->r10 = MEM_W(ctx->r9, 0X54);
            goto L_801CEAE0;
    }
    goto skip_23;
    // 0x801CEAC8: lw          $t2, 0x54($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X54);
    skip_23:
    // 0x801CEACC: lw          $t8, 0x54($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X54);
    // 0x801CEAD0: addiu       $t7, $t7, -0x5B00
    ctx->r15 = ADD32(ctx->r15, -0X5B00);
    // 0x801CEAD4: b           L_801CEB5C
    // 0x801CEAD8: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
        goto L_801CEB5C;
    // 0x801CEAD8: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x801CEADC: lw          $t2, 0x54($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X54);
L_801CEAE0:
    // 0x801CEAE0: addiu       $t9, $t9, -0x5AE8
    ctx->r25 = ADD32(ctx->r25, -0X5AE8);
    // 0x801CEAE4: b           L_801CEB5C
    // 0x801CEAE8: sw          $t9, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r25;
        goto L_801CEB5C;
    // 0x801CEAE8: sw          $t9, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r25;
    // 0x801CEAEC: lw          $t4, 0x54($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X54);
L_801CEAF0:
    // 0x801CEAF0: addiu       $t3, $t3, -0x5B00
    ctx->r11 = ADD32(ctx->r11, -0X5B00);
    // 0x801CEAF4: b           L_801CEB5C
    // 0x801CEAF8: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
        goto L_801CEB5C;
    // 0x801CEAF8: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
    // 0x801CEAFC: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
L_801CEB00:
    // 0x801CEB00: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801CEB04: bc1fl       L_801CEB50
    if (!c1cs) {
        // 0x801CEB08: lw          $t4, 0x54($t1)
        ctx->r12 = MEM_W(ctx->r9, 0X54);
            goto L_801CEB50;
    }
    goto skip_24;
    // 0x801CEB08: lw          $t4, 0x54($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X54);
    skip_24:
    // 0x801CEB0C: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801CEB10: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CEB14: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CEB18: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801CEB1C: lh          $t6, -0x524E($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X524E);
    // 0x801CEB20: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801CEB24: beql        $t6, $zero, L_801CEB40
    if (ctx->r14 == 0) {
        // 0x801CEB28: lw          $t2, 0x54($t1)
        ctx->r10 = MEM_W(ctx->r9, 0X54);
            goto L_801CEB40;
    }
    goto skip_25;
    // 0x801CEB28: lw          $t2, 0x54($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X54);
    skip_25:
    // 0x801CEB2C: lw          $t8, 0x54($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X54);
    // 0x801CEB30: addiu       $t7, $t7, -0x5AD0
    ctx->r15 = ADD32(ctx->r15, -0X5AD0);
    // 0x801CEB34: b           L_801CEB5C
    // 0x801CEB38: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
        goto L_801CEB5C;
    // 0x801CEB38: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x801CEB3C: lw          $t2, 0x54($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X54);
L_801CEB40:
    // 0x801CEB40: addiu       $t9, $t9, -0x5AB8
    ctx->r25 = ADD32(ctx->r25, -0X5AB8);
    // 0x801CEB44: b           L_801CEB5C
    // 0x801CEB48: sw          $t9, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r25;
        goto L_801CEB5C;
    // 0x801CEB48: sw          $t9, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r25;
    // 0x801CEB4C: lw          $t4, 0x54($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X54);
L_801CEB50:
    // 0x801CEB50: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801CEB54: addiu       $t3, $t3, -0x5AD0
    ctx->r11 = ADD32(ctx->r11, -0X5AD0);
    // 0x801CEB58: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
L_801CEB5C:
    // 0x801CEB5C: lw          $a1, 0x58($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X58);
    // 0x801CEB60: jal         0x8000DD04
    // 0x801CEB64: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_8000DD04_E904(rdram, ctx);
        goto after_33;
    // 0x801CEB64: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_33:
    // 0x801CEB68: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CEB6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEB70: ldc1        $f0, -0x2F00($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X2F00);
    // 0x801CEB74: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEB78: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801CEB7C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CEB80: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CEB84: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEB88: ldc1        $f18, -0x2EF8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X2EF8);
    // 0x801CEB8C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801CEB90: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEB94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEB98: ldc1        $f4, -0x2EF0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X2EF0);
    // 0x801CEB9C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CEBA0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801CEBA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CEBA8: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x801CEBAC: sub.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d - ctx->f4.d;
    // 0x801CEBB0: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x801CEBB4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801CEBB8: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEBBC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CEBC0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801CEBC4: sub.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f4.d - ctx->f18.d;
    // 0x801CEBC8: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x801CEBCC: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x801CEBD0: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEBD4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801CEBD8: div.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801CEBDC: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x801CEBE0: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEBE4: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801CEBE8: div.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801CEBEC: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x801CEBF0: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEBF4: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801CEBF8: div.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801CEBFC: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x801CEC00: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEC04: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801CEC08: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x801CEC0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CEC10: add.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f6.d + ctx->f0.d;
    // 0x801CEC14: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x801CEC18: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x801CEC1C: lw          $v0, 0x58($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X58);
    // 0x801CEC20: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801CEC24: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x801CEC28: nop

    // 0x801CEC2C: bc1fl       L_801CEC44
    if (!c1cs) {
        // 0x801CEC30: lhu         $t5, 0x40($t1)
        ctx->r13 = MEM_HU(ctx->r9, 0X40);
            goto L_801CEC44;
    }
    goto skip_26;
    // 0x801CEC30: lhu         $t5, 0x40($t1)
    ctx->r13 = MEM_HU(ctx->r9, 0X40);
    skip_26:
    // 0x801CEC34: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CEC38: nop

    // 0x801CEC3C: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x801CEC40: lhu         $t5, 0x40($t1)
    ctx->r13 = MEM_HU(ctx->r9, 0X40);
L_801CEC44:
    // 0x801CEC44: blezl       $t5, L_801CEC5C
    if (SIGNED(ctx->r13) <= 0) {
        // 0x801CEC48: lw          $a1, 0x5C($t1)
        ctx->r5 = MEM_W(ctx->r9, 0X5C);
            goto L_801CEC5C;
    }
    goto skip_27;
    // 0x801CEC48: lw          $a1, 0x5C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X5C);
    skip_27:
    // 0x801CEC4C: lw          $t7, 0x58($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X58);
    // 0x801CEC50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CEC54: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x801CEC58: lw          $a1, 0x5C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X5C);
L_801CEC5C:
    // 0x801CEC5C: jal         0x8000DD04
    // 0x801CEC60: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_8000DD04_E904(rdram, ctx);
        goto after_34;
    // 0x801CEC60: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_34:
    // 0x801CEC64: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801CEC68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEC6C: ldc1        $f0, -0x2EE8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X2EE8);
    // 0x801CEC70: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CEC74: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801CEC78: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CEC7C: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801CEC80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEC84: ldc1        $f18, -0x2EE0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X2EE0);
    // 0x801CEC88: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801CEC8C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801CEC90: add.d       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f8.d + ctx->f0.d;
    // 0x801CEC94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CEC98: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CEC9C: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x801CECA0: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x801CECA4: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CECA8: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801CECAC: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x801CECB0: nop

    // 0x801CECB4: bc1fl       L_801CECD0
    if (!c1cs) {
        // 0x801CECB8: lw          $t8, 0x44($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X44);
            goto L_801CECD0;
    }
    goto skip_28;
    // 0x801CECB8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    skip_28:
    // 0x801CECBC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801CECC0: nop

    // 0x801CECC4: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x801CECC8: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CECCC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
L_801CECD0:
    // 0x801CECD0: bnel        $t8, $zero, L_801CECE4
    if (ctx->r24 != 0) {
        // 0x801CECD4: lw          $t2, 0x1C($t1)
        ctx->r10 = MEM_W(ctx->r9, 0X1C);
            goto L_801CECE4;
    }
    goto skip_29;
    // 0x801CECD4: lw          $t2, 0x1C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1C);
    skip_29:
    // 0x801CECD8: b           L_801CEE54
    // 0x801CECDC: sb          $t9, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r25;
        goto L_801CEE54;
    // 0x801CECDC: sb          $t9, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r25;
    // 0x801CECE0: lw          $t2, 0x1C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1C);
L_801CECE4:
    // 0x801CECE4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801CECE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CECEC: lbu         $t3, 0x64($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X64);
    // 0x801CECF0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CECF4: sb          $t3, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r11;
    // 0x801CECF8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x801CECFC: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CED00: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x801CED04: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CED08: div.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801CED0C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801CED10: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x801CED14: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CED18: ldc1        $f8, -0x2ED8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2ED8);
    // 0x801CED1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CED20: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CED24: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801CED28: add.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f10.d + ctx->f8.d;
    // 0x801CED2C: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x801CED30: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801CED34: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x801CED38: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CED3C: lwc1        $f6, 0x10($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X10);
    // 0x801CED40: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CED44: div.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801CED48: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801CED4C: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801CED50: sub.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f10.d - ctx->f18.d;
    // 0x801CED54: add.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f8.d + ctx->f6.d;
    // 0x801CED58: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801CED5C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801CED60: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CED64: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801CED68: div.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801CED6C: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x801CED70: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CED74: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801CED78: div.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801CED7C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x801CED80: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CED84: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801CED88: div.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801CED8C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x801CED90: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CED94: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CED98: ldc1        $f8, -0x2ED0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2ED0);
    // 0x801CED9C: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
    // 0x801CEDA0: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CEDA4: add.d       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = ctx->f8.d + ctx->f2.d;
    // 0x801CEDA8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CEDAC: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801CEDB0: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x801CEDB4: nop

    // 0x801CEDB8: bc1f        L_801CEDDC
    if (!c1cs) {
        // 0x801CEDBC: nop
    
            goto L_801CEDDC;
    }
    // 0x801CEDBC: nop

    // 0x801CEDC0: cvt.s.d     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f6.fl = CVT_S_D(ctx->f12.d);
    // 0x801CEDC4: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x801CEDC8: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CEDCC: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CEDD0: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CEDD4: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
    // 0x801CEDD8: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
L_801CEDDC:
    // 0x801CEDDC: ldc1        $f8, -0x2EC8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X2EC8);
    // 0x801CEDE0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x801CEDE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CEDE8: add.d       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = ctx->f8.d + ctx->f2.d;
    // 0x801CEDEC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CEDF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CEDF4: c.lt.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d < ctx->f0.d;
    // 0x801CEDF8: nop

    // 0x801CEDFC: bc1fl       L_801CEE14
    if (!c1cs) {
        // 0x801CEE00: lwc1        $f0, 0x8($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
            goto L_801CEE14;
    }
    goto skip_30;
    // 0x801CEE00: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    skip_30:
    // 0x801CEE04: cvt.s.d     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f6.fl = CVT_S_D(ctx->f12.d);
    // 0x801CEE08: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x801CEE0C: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CEE10: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
L_801CEE14:
    // 0x801CEE14: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CEE18: add.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801CEE1C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801CEE20: nop

    // 0x801CEE24: bc1fl       L_801CEE40
    if (!c1cs) {
        // 0x801CEE28: add.s       $f12, $f10, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f0.fl;
            goto L_801CEE40;
    }
    goto skip_31;
    // 0x801CEE28: add.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f0.fl;
    skip_31:
    // 0x801CEE2C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x801CEE30: lw          $v0, 0x5C($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X5C);
    // 0x801CEE34: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CEE38: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CEE3C: add.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f0.fl;
L_801CEE40:
    // 0x801CEE40: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CEE44: nop

    // 0x801CEE48: bc1fl       L_801CEE58
    if (!c1cs) {
        // 0x801CEE4C: lhu         $t6, 0x40($t1)
        ctx->r14 = MEM_HU(ctx->r9, 0X40);
            goto L_801CEE58;
    }
    goto skip_32;
    // 0x801CEE4C: lhu         $t6, 0x40($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0X40);
    skip_32:
    // 0x801CEE50: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
L_801CEE54:
    // 0x801CEE54: lhu         $t6, 0x40($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0X40);
L_801CEE58:
    // 0x801CEE58: blezl       $t6, L_801CEE70
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801CEE5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801CEE70;
    }
    goto skip_33;
    // 0x801CEE5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_33:
    // 0x801CEE60: lw          $t8, 0x5C($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X5C);
    // 0x801CEE64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CEE68: sb          $t7, 0x64($t8)
    MEM_B(0X64, ctx->r24) = ctx->r15;
    // 0x801CEE6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CEE70:
    // 0x801CEE70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CEE74: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801CEE78: jr          $ra
    // 0x801CEE7C: nop

    TRACE_RETURN()
    return;
    // 0x801CEE7C: nop

;}
RECOMP_FUNC void func_80203154_62E534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80203158: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020315C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203160: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80203164: jal         0x80203F88
    // 0x80203168: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x80203168: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8020316C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80203170: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x80203174: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80203178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020317C: lbu         $t7, 0x9($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X9);
    // 0x80203180: beq         $t7, $zero, L_802031F4
    if (ctx->r15 == 0) {
        // 0x80203184: nop
    
            goto L_802031F4;
    }
    // 0x80203184: nop

    // 0x80203188: jal         0x801D31F0
    // 0x8020318C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_1;
    // 0x8020318C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80203190: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80203194: nop

    // 0x80203198: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8020319C: nop

    // 0x802031A0: bc1f        L_802031FC
    if (!c1cs) {
        // 0x802031A4: nop
    
            goto L_802031FC;
    }
    // 0x802031A4: nop

    // 0x802031A8: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x802031AC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802031B0: bgtz        $t9, L_802031FC
    if (SIGNED(ctx->r25) > 0) {
        // 0x802031B4: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_802031FC;
    }
    // 0x802031B4: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x802031B8: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    // 0x802031BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802031C0: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x802031C4: andi        $t1, $a1, 0xFF
    ctx->r9 = ctx->r5 & 0XFF;
    // 0x802031C8: jal         0x80203BC0
    // 0x802031CC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_2;
    // 0x802031CC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_2:
    // 0x802031D0: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x802031D4: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x802031D8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802031DC: sltiu       $at, $t3, 0x6
    ctx->r1 = ctx->r11 < 0X6 ? 1 : 0;
    // 0x802031E0: bne         $at, $zero, L_802031EC
    if (ctx->r1 != 0) {
        // 0x802031E4: sw          $t3, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r11;
            goto L_802031EC;
    }
    // 0x802031E4: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
    // 0x802031E8: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
L_802031EC:
    // 0x802031EC: b           L_802031FC
    // 0x802031F0: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
        goto L_802031FC;
    // 0x802031F0: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
L_802031F4:
    // 0x802031F4: jal         0x801D31F0
    // 0x802031F8: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_3;
    // 0x802031F8: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    after_3:
L_802031FC:
    // 0x802031FC: jal         0x802043E4
    // 0x80203200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802043E4_62F7C4(rdram, ctx);
        goto after_4;
    // 0x80203200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80203204: beq         $v0, $zero, L_80203238
    if (ctx->r2 == 0) {
        // 0x80203208: addiu       $t7, $zero, 0x8
        ctx->r15 = ADD32(0, 0X8);
            goto L_80203238;
    }
    // 0x80203208: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8020320C: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x80203210: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80203214: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80203218: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020321C: sw          $zero, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = 0;
    // 0x80203220: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x80203224: lw          $t9, -0x10C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10C0);
    // 0x80203228: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8020322C: addiu       $a0, $a0, 0x324C
    ctx->r4 = ADD32(ctx->r4, 0X324C);
    // 0x80203230: jal         0x8003521C
    // 0x80203234: sb          $t8, 0xA($t9)
    MEM_B(0XA, ctx->r25) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80203234: sb          $t8, 0xA($t9)
    MEM_B(0XA, ctx->r25) = ctx->r24;
    after_5:
L_80203238:
    // 0x80203238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8020323C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80203240: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80203244: jr          $ra
    // 0x80203248: nop

    TRACE_RETURN()
    return;
    // 0x80203248: nop

;}
RECOMP_FUNC void func_801F2C70_61E050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2C74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F2C78: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F2C7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F2C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F2C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F2C8C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801F2C90: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801F2C94: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x801F2C98: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2C9C: jal         0x8003521C
    // 0x801F2CA0: addiu       $a0, $a0, 0x2CB4
    ctx->r4 = ADD32(ctx->r4, 0X2CB4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F2CA0: addiu       $a0, $a0, 0x2CB4
    ctx->r4 = ADD32(ctx->r4, 0X2CB4);
    after_0:
    // 0x801F2CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F2CA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2CAC: jr          $ra
    // 0x801F2CB0: nop

    TRACE_RETURN()
    return;
    // 0x801F2CB0: nop

;}
RECOMP_FUNC void func_801E5F64_611344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5F64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E5F68: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E5F6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E5F70: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E5F74: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801E5F78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5F7C: jal         0x801D6C4C
    // 0x801E5F80: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6C4C_60202C(rdram, ctx);
        goto after_0;
    // 0x801E5F80: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x801E5F84: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x801E5F88: jal         0x801EEE54
    // 0x801E5F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEE54_61A234(rdram, ctx);
        goto after_1;
    // 0x801E5F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E5F90: jal         0x801EEEA0
    // 0x801E5F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEA0_61A280(rdram, ctx);
        goto after_2;
    // 0x801E5F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E5F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5F9C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801E5FA0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x801E5FA4: jal         0x801D5D98
    // 0x801E5FA8: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_3;
    // 0x801E5FA8: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_3:
    // 0x801E5FAC: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801E5FB0: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801E5FB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E5FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5FBC: jal         0x801D5C30
    // 0x801E5FC0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_4;
    // 0x801E5FC0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x801E5FC4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801E5FC8: jal         0x801D2F40
    // 0x801E5FCC: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_5;
    // 0x801E5FCC: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    after_5:
    // 0x801E5FD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5FD4: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E5FD8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E5FDC: nop

    // 0x801E5FE0: bc1fl       L_801E6014
    if (!c1cs) {
        // 0x801E5FE4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E6014;
    }
    goto skip_0;
    // 0x801E5FE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E5FE8: beql        $t6, $zero, L_801E6014
    if (ctx->r14 == 0) {
        // 0x801E5FEC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E6014;
    }
    goto skip_1;
    // 0x801E5FEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801E5FF0: lw          $t7, 0xEC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XEC);
    // 0x801E5FF4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x801E5FF8: bne         $at, $zero, L_801E6008
    if (ctx->r1 != 0) {
        // 0x801E5FFC: nop
    
            goto L_801E6008;
    }
    // 0x801E5FFC: nop

    // 0x801E6000: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    // 0x801E6004: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
L_801E6008:
    // 0x801E6008: jal         0x801E599C
    // 0x801E600C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E599C_610D7C(rdram, ctx);
        goto after_6;
    // 0x801E600C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E6010: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E6014:
    // 0x801E6014: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E6018: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E601C: jr          $ra
    // 0x801E6020: nop

    TRACE_RETURN()
    return;
    // 0x801E6020: nop

;}
RECOMP_FUNC void func_801F3BAC_61EF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3BAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F3BB0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F3BB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F3BB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F3BBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F3BC0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F3BC4: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801F3BC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3BCC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F3BD0: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x801F3BD4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x801F3BD8: jal         0x801D655C
    // 0x801F3BDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D655C_60193C(rdram, ctx);
        goto after_0;
    // 0x801F3BDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801F3BE0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F3BE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F3BE8: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801F3BEC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F3BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3BF4: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    // 0x801F3BF8: lui         $a2, 0xC3C8
    ctx->r6 = S32(0XC3C8 << 16);
    // 0x801F3BFC: jal         0x801D67FC
    // 0x801F3C00: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D67FC_601BDC(rdram, ctx);
        goto after_1;
    // 0x801F3C00: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801F3C04: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x801F3C08: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F3C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3C10: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x801F3C14: jal         0x801D6A30
    // 0x801F3C18: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_801D6A30_601E10(rdram, ctx);
        goto after_2;
    // 0x801F3C18: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x801F3C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3C20: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801F3C24: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801F3C28: jal         0x801D5D98
    // 0x801F3C2C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_3;
    // 0x801F3C2C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_3:
    // 0x801F3C30: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801F3C34: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F3C38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F3C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F3C40: jal         0x801D5C30
    // 0x801F3C44: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_4;
    // 0x801F3C44: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x801F3C48: jal         0x801F76D0
    // 0x801F3C4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_5;
    // 0x801F3C4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F3C50: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801F3C54: jal         0x801D3018
    // 0x801F3C58: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_6;
    // 0x801F3C58: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_6:
    // 0x801F3C5C: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x801F3C60: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F3C64: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    // 0x801F3C68: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F3C6C: bne         $t7, $zero, L_801F3C88
    if (ctx->r15 != 0) {
        // 0x801F3C70: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_801F3C88;
    }
    // 0x801F3C70: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801F3C74: jal         0x801D2EE4
    // 0x801F3C78: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_7;
    // 0x801F3C78: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x801F3C7C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3C80: jal         0x8003521C
    // 0x801F3C84: addiu       $a0, $a0, 0x3C9C
    ctx->r4 = ADD32(ctx->r4, 0X3C9C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F3C84: addiu       $a0, $a0, 0x3C9C
    ctx->r4 = ADD32(ctx->r4, 0X3C9C);
    after_8:
L_801F3C88:
    // 0x801F3C88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F3C8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F3C90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F3C94: jr          $ra
    // 0x801F3C98: nop

    TRACE_RETURN()
    return;
    // 0x801F3C98: nop

;}
RECOMP_FUNC void func_801E07A0_60BB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E07A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E07A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E07A8: beq         $a0, $zero, L_801E07B4
    if (ctx->r4 == 0) {
        // 0x801E07AC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_801E07B4;
    }
    // 0x801E07AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E07B0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
L_801E07B4:
    // 0x801E07B4: beq         $v1, $zero, L_801E0938
    if (ctx->r3 == 0) {
        // 0x801E07B8: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_801E0938;
    }
    // 0x801E07B8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E07BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801E07C0: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x801E07C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E07C8: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801E07CC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801E07D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E07D4: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801E07D8: lui         $at, 0x437E
    ctx->r1 = S32(0X437E << 16);
    // 0x801E07DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E07E0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E07E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E07E8: mul.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801E07EC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801E07F0: c.le.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl <= ctx->f18.fl;
    // 0x801E07F4: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x801E07F8: bc1fl       L_801E0808
    if (!c1cs) {
        // 0x801E07FC: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_801E0808;
    }
    goto skip_0;
    // 0x801E07FC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_0:
    // 0x801E0800: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x801E0804: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_801E0808:
    // 0x801E0808: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801E080C: bc1fl       L_801E081C
    if (!c1cs) {
        // 0x801E0810: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_801E081C;
    }
    goto skip_1;
    // 0x801E0810: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_1:
    // 0x801E0814: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801E0818: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_801E081C:
    // 0x801E081C: mul.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x801E0820: bc1fl       L_801E0830
    if (!c1cs) {
        // 0x801E0824: c.le.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
            goto L_801E0830;
    }
    goto skip_2;
    // 0x801E0824: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    skip_2:
    // 0x801E0828: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x801E082C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
L_801E0830:
    // 0x801E0830: sub.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x801E0834: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E0838: bc1f        L_801E0848
    if (!c1cs) {
        // 0x801E083C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E0848;
    }
    // 0x801E083C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0840: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E0844: nop

L_801E0848:
    // 0x801E0848: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801E084C: nop

    // 0x801E0850: bc1f        L_801E085C
    if (!c1cs) {
        // 0x801E0854: nop
    
            goto L_801E085C;
    }
    // 0x801E0854: nop

    // 0x801E0858: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_801E085C:
    // 0x801E085C: ldc1        $f8, -0x23F8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X23F8);
    // 0x801E0860: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x801E0864: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801E0868: div.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f0.d, ctx->f8.d);
    // 0x801E086C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E0870: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801E0874: sdc1        $f0, 0x20($sp)
    CHECK_FR(ctx, 0);
    SD(ctx->f0.u64, 0X20, ctx->r29);
    // 0x801E0878: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x801E087C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x801E0880: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801E0884: trunc.w.s   $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    ctx->f6.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x801E0888: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801E088C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x801E0890: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x801E0894: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x801E0898: nop

    // 0x801E089C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E08A0: trunc.w.d   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801E08A4: jal         0x8000DF10
    // 0x801E08A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x801E08A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801E08AC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x801E08B0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801E08B4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801E08B8: ldc1        $f0, 0x20($sp)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r29, 0X20);
    // 0x801E08BC: beq         $v1, $zero, L_801E08D8
    if (ctx->r3 == 0) {
        // 0x801E08C0: lwc1        $f12, 0x48($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
            goto L_801E08D8;
    }
    // 0x801E08C0: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E08C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E08C8: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x801E08CC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E08D0: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x801E08D4: sw          $t3, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r11;
L_801E08D8:
    // 0x801E08D8: lui         $at, 0x400C
    ctx->r1 = S32(0X400C << 16);
    // 0x801E08DC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E08E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E08E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E08E8: addiu       $a1, $a1, -0x5288
    ctx->r5 = ADD32(ctx->r5, -0X5288);
    // 0x801E08EC: div.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f0.d, ctx->f6.d);
    // 0x801E08F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801E08F4: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    // 0x801E08F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E08FC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x801E0900: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x801E0904: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801E0908: jal         0x8000DFA0
    // 0x801E090C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8000DFA0_EBA0(rdram, ctx);
        goto after_1;
    // 0x801E090C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801E0910: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801E0914: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0918: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E091C: beq         $t0, $zero, L_801E0930
    if (ctx->r8 == 0) {
        // 0x801E0920: or          $t5, $v0, $at
        ctx->r13 = ctx->r2 | ctx->r1;
            goto L_801E0930;
    }
    // 0x801E0920: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x801E0924: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E0928: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x801E092C: sw          $t6, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r14;
L_801E0930:
    // 0x801E0930: b           L_801E0940
    // 0x801E0934: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_801E0940;
    // 0x801E0934: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801E0938:
    // 0x801E0938: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E093C: nop

L_801E0940:
    // 0x801E0940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0944: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E0948: jr          $ra
    // 0x801E094C: nop

    TRACE_RETURN()
    return;
    // 0x801E094C: nop

;}
RECOMP_FUNC void func_802008D0_62BCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802008D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802008D4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x802008D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802008DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802008E0: lw          $t6, 0x2C8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C8);
    // 0x802008E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802008E8: addiu       $t9, $t9, -0x50D0
    ctx->r25 = ADD32(ctx->r25, -0X50D0);
    // 0x802008EC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802008F0: beq         $t7, $zero, L_80200908
    if (ctx->r15 == 0) {
        // 0x802008F4: addiu       $v1, $v0, 0x140
        ctx->r3 = ADD32(ctx->r2, 0X140);
            goto L_80200908;
    }
    // 0x802008F4: addiu       $v1, $v0, 0x140
    ctx->r3 = ADD32(ctx->r2, 0X140);
    // 0x802008F8: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802008FC: addiu       $t8, $t8, -0x5198
    ctx->r24 = ADD32(ctx->r24, -0X5198);
    // 0x80200900: b           L_8020090C
    // 0x80200904: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
        goto L_8020090C;
    // 0x80200904: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_80200908:
    // 0x80200908: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
L_8020090C:
    // 0x8020090C: lw          $t0, 0x7C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X7C);
    // 0x80200910: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80200914: bgez        $t1, L_80200938
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80200918: sw          $t1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r9;
            goto L_80200938;
    }
    // 0x80200918: sw          $t1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r9;
    // 0x8020091C: lbu         $t3, 0xE($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XE);
    // 0x80200920: bnel        $t3, $zero, L_8020093C
    if (ctx->r11 != 0) {
        // 0x80200924: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020093C;
    }
    goto skip_0;
    // 0x80200924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80200928: jal         0x80200684
    // 0x8020092C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80200684_62BA64(rdram, ctx);
        goto after_0;
    // 0x8020092C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80200930: jal         0x8020407C
    // 0x80200934: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8020407C_62F45C(rdram, ctx);
        goto after_1;
    // 0x80200934: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_80200938:
    // 0x80200938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020093C:
    // 0x8020093C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200940: jr          $ra
    // 0x80200944: nop

    TRACE_RETURN()
    return;
    // 0x80200944: nop

;}
RECOMP_FUNC void func_80204600_62F9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204600: addiu       $t6, $zero, 0x1042
    ctx->r14 = ADD32(0, 0X1042);
    // 0x80204604: jr          $ra
    // 0x80204608: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80204608: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801F1AF8_61CED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1B00: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x801F1B04: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801F1B08: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801F1B0C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F1B10: bgtz        $t7, L_801F1B68
    if (SIGNED(ctx->r15) > 0) {
        // 0x801F1B14: sw          $t7, 0xD4($a0)
        MEM_W(0XD4, ctx->r4) = ctx->r15;
            goto L_801F1B68;
    }
    // 0x801F1B14: sw          $t7, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r15;
    // 0x801F1B18: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F1B1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F1B20: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801F1B24: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801F1B28: nop

    // 0x801F1B2C: bc1fl       L_801F1B6C
    if (!c1cs) {
        // 0x801F1B30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F1B6C;
    }
    goto skip_0;
    // 0x801F1B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F1B34: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801F1B38: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x801F1B3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F1B40: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801F1B44: lhu         $t0, -0x51EA($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X51EA);
    // 0x801F1B48: bne         $t0, $at, L_801F1B60
    if (ctx->r8 != ctx->r1) {
        // 0x801F1B4C: nop
    
            goto L_801F1B60;
    }
    // 0x801F1B4C: nop

    // 0x801F1B50: jal         0x801F1BD8
    // 0x801F1B54: nop

    func_801F1BD8_61CFB8(rdram, ctx);
        goto after_0;
    // 0x801F1B54: nop

    after_0:
    // 0x801F1B58: b           L_801F1B6C
    // 0x801F1B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1B6C;
    // 0x801F1B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1B60:
    // 0x801F1B60: jal         0x801F1C34
    // 0x801F1B64: nop

    func_801F1C34_61D014(rdram, ctx);
        goto after_1;
    // 0x801F1B64: nop

    after_1:
L_801F1B68:
    // 0x801F1B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1B6C:
    // 0x801F1B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1B70: jr          $ra
    // 0x801F1B74: nop

    TRACE_RETURN()
    return;
    // 0x801F1B74: nop

;}
RECOMP_FUNC void func_801E628C_61166C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E628C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E6290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E6294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E6298: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E629C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E62A0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E62A4: jal         0x801D3B18
    // 0x801E62A8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801E62A8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x801E62AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E62B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E62B4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801E62B8: jal         0x801D3F00
    // 0x801E62BC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_1;
    // 0x801E62BC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E62C0: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x801E62C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E62C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801E62CC: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x801E62D0: bne         $t6, $at, L_801E6354
    if (ctx->r14 != ctx->r1) {
        // 0x801E62D4: nop
    
            goto L_801E6354;
    }
    // 0x801E62D4: nop

    // 0x801E62D8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801E62DC: sltiu       $at, $v1, 0x38
    ctx->r1 = ctx->r3 < 0X38 ? 1 : 0;
    // 0x801E62E0: beq         $at, $zero, L_801E634C
    if (ctx->r1 == 0) {
        // 0x801E62E4: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_801E634C;
    }
    // 0x801E62E4: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x801E62E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E62EC: addu        $at, $at, $t7
    gpr jr_addend_801E62F4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801E62F0: lw          $t7, -0x2030($at)
    ctx->r15 = ADD32(ctx->r1, -0X2030);
    // 0x801E62F4: jr          $t7
    // 0x801E62F8: nop

    switch (jr_addend_801E62F4 >> 2) {
        case 0: goto L_801E633C; break;
        case 1: goto L_801E634C; break;
        case 2: goto L_801E634C; break;
        case 3: goto L_801E634C; break;
        case 4: goto L_801E634C; break;
        case 5: goto L_801E634C; break;
        case 6: goto L_801E634C; break;
        case 7: goto L_801E634C; break;
        case 8: goto L_801E634C; break;
        case 9: goto L_801E634C; break;
        case 10: goto L_801E632C; break;
        case 11: goto L_801E634C; break;
        case 12: goto L_801E634C; break;
        case 13: goto L_801E634C; break;
        case 14: goto L_801E634C; break;
        case 15: goto L_801E634C; break;
        case 16: goto L_801E634C; break;
        case 17: goto L_801E634C; break;
        case 18: goto L_801E634C; break;
        case 19: goto L_801E634C; break;
        case 20: goto L_801E634C; break;
        case 21: goto L_801E634C; break;
        case 22: goto L_801E634C; break;
        case 23: goto L_801E634C; break;
        case 24: goto L_801E634C; break;
        case 25: goto L_801E631C; break;
        case 26: goto L_801E634C; break;
        case 27: goto L_801E634C; break;
        case 28: goto L_801E634C; break;
        case 29: goto L_801E634C; break;
        case 30: goto L_801E634C; break;
        case 31: goto L_801E634C; break;
        case 32: goto L_801E634C; break;
        case 33: goto L_801E634C; break;
        case 34: goto L_801E634C; break;
        case 35: goto L_801E634C; break;
        case 36: goto L_801E634C; break;
        case 37: goto L_801E634C; break;
        case 38: goto L_801E634C; break;
        case 39: goto L_801E634C; break;
        case 40: goto L_801E630C; break;
        case 41: goto L_801E634C; break;
        case 42: goto L_801E634C; break;
        case 43: goto L_801E634C; break;
        case 44: goto L_801E634C; break;
        case 45: goto L_801E634C; break;
        case 46: goto L_801E634C; break;
        case 47: goto L_801E634C; break;
        case 48: goto L_801E634C; break;
        case 49: goto L_801E634C; break;
        case 50: goto L_801E634C; break;
        case 51: goto L_801E634C; break;
        case 52: goto L_801E634C; break;
        case 53: goto L_801E634C; break;
        case 54: goto L_801E634C; break;
        case 55: goto L_801E62FC; break;
        default: switch_error(__func__, 0x801E62F4, 0x8020DFD0);
    }
    // 0x801E62F8: nop

L_801E62FC:
    // 0x801E62FC: jal         0x801EA174
    // 0x801E6300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801EA174_615554(rdram, ctx);
        goto after_2;
    // 0x801E6300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x801E6304: b           L_801E634C
    // 0x801E6308: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
        goto L_801E634C;
    // 0x801E6308: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801E630C:
    // 0x801E630C: jal         0x801EA174
    // 0x801E6310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_801EA174_615554(rdram, ctx);
        goto after_3;
    // 0x801E6310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x801E6314: b           L_801E634C
    // 0x801E6318: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
        goto L_801E634C;
    // 0x801E6318: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801E631C:
    // 0x801E631C: jal         0x801EA174
    // 0x801E6320: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_801EA174_615554(rdram, ctx);
        goto after_4;
    // 0x801E6320: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x801E6324: b           L_801E634C
    // 0x801E6328: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
        goto L_801E634C;
    // 0x801E6328: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801E632C:
    // 0x801E632C: jal         0x801EA174
    // 0x801E6330: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801EA174_615554(rdram, ctx);
        goto after_5;
    // 0x801E6330: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_5:
    // 0x801E6334: b           L_801E634C
    // 0x801E6338: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
        goto L_801E634C;
    // 0x801E6338: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801E633C:
    // 0x801E633C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6340: jal         0x8003521C
    // 0x801E6344: addiu       $a0, $a0, 0x6370
    ctx->r4 = ADD32(ctx->r4, 0X6370);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801E6344: addiu       $a0, $a0, 0x6370
    ctx->r4 = ADD32(ctx->r4, 0X6370);
    after_6:
    // 0x801E6348: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801E634C:
    // 0x801E634C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x801E6350: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
L_801E6354:
    // 0x801E6354: jal         0x801EEEC0
    // 0x801E6358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_7;
    // 0x801E6358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801E635C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6360: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E6364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E6368: jr          $ra
    // 0x801E636C: nop

    TRACE_RETURN()
    return;
    // 0x801E636C: nop

;}
RECOMP_FUNC void func_801D9030_604410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9030: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D9034: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D9038: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801D903C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D9040: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D9044: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D9048: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x801D904C: lw          $t7, 0xA4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA4);
    // 0x801D9050: lw          $v0, 0xAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC);
    // 0x801D9054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D9058: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801D905C: subu        $t0, $t7, $v0
    ctx->r8 = SUB32(ctx->r15, ctx->r2);
    // 0x801D9060: sll         $t8, $t0, 16
    ctx->r24 = S32(ctx->r8 << 16);
    // 0x801D9064: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801D9068: slti        $at, $t9, -0x1FF
    ctx->r1 = SIGNED(ctx->r25) < -0X1FF ? 1 : 0;
    // 0x801D906C: lw          $a1, 0xB4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XB4);
    // 0x801D9070: beq         $at, $zero, L_801D9084
    if (ctx->r1 == 0) {
        // 0x801D9074: or          $t0, $t9, $zero
        ctx->r8 = ctx->r25 | 0;
            goto L_801D9084;
    }
    // 0x801D9074: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x801D9078: addiu       $t0, $t9, 0x400
    ctx->r8 = ADD32(ctx->r25, 0X400);
    // 0x801D907C: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x801D9080: sra         $t0, $t1, 16
    ctx->r8 = S32(SIGNED(ctx->r9) >> 16);
L_801D9084:
    // 0x801D9084: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D9088: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D908C: lwc1        $f6, 0x94($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X94);
    // 0x801D9090: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801D9094: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x801D9098: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x801D909C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801D90A0: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801D90A4: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D90A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D90AC: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801D90B0: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801D90B4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801D90B8: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x801D90BC: nop

    // 0x801D90C0: sll         $t4, $t0, 16
    ctx->r12 = S32(ctx->r8 << 16);
    // 0x801D90C4: sra         $t0, $t4, 16
    ctx->r8 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801D90C8: addu        $t6, $v0, $t0
    ctx->r14 = ADD32(ctx->r2, ctx->r8);
    // 0x801D90CC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x801D90D0: nop

    // 0x801D90D4: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D90D8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D90DC: nop

    // 0x801D90E0: bc1fl       L_801D90F8
    if (!c1cs) {
        // 0x801D90E4: lui         $at, 0x4480
        ctx->r1 = S32(0X4480 << 16);
            goto L_801D90F8;
    }
    goto skip_0;
    // 0x801D90E4: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    skip_0:
    // 0x801D90E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D90EC: nop

    // 0x801D90F0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x801D90F4: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
L_801D90F8:
    // 0x801D90F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D90FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9100: lwc1        $f16, -0x26F8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X26F8);
    // 0x801D9104: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801D9108: nop

    // 0x801D910C: bc1fl       L_801D911C
    if (!c1cs) {
        // 0x801D9110: cfc1        $t7, $FpcCsr
        ctx->r15 = get_cop1_cs();
            goto L_801D911C;
    }
    goto skip_1;
    // 0x801D9110: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    skip_1:
    // 0x801D9114: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801D9118: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_801D911C:
    // 0x801D911C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801D9120: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D9124: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801D9128: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801D912C: nop

    // 0x801D9130: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801D9134: beql        $t8, $zero, L_801D9184
    if (ctx->r24 == 0) {
        // 0x801D9138: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_801D9184;
    }
    goto skip_2;
    // 0x801D9138: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x801D913C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D9140: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D9144: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801D9148: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801D914C: nop

    // 0x801D9150: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801D9154: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801D9158: nop

    // 0x801D915C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801D9160: bne         $t8, $zero, L_801D9178
    if (ctx->r24 != 0) {
        // 0x801D9164: nop
    
            goto L_801D9178;
    }
    // 0x801D9164: nop

    // 0x801D9168: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x801D916C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D9170: b           L_801D9190
    // 0x801D9174: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801D9190;
    // 0x801D9174: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801D9178:
    // 0x801D9178: b           L_801D9190
    // 0x801D917C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801D9190;
    // 0x801D917C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801D9180: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_801D9184:
    // 0x801D9184: nop

    // 0x801D9188: bltz        $t8, L_801D9178
    if (SIGNED(ctx->r24) < 0) {
        // 0x801D918C: nop
    
            goto L_801D9178;
    }
    // 0x801D918C: nop

L_801D9190:
    // 0x801D9190: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x801D9194: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x801D9198: lw          $v1, 0xB0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XB0);
    // 0x801D919C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801D91A0: subu        $v0, $t9, $v1
    ctx->r2 = SUB32(ctx->r25, ctx->r3);
    // 0x801D91A4: bgez        $v0, L_801D91B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D91A8: sra         $t1, $v0, 1
        ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
            goto L_801D91B4;
    }
    // 0x801D91A8: sra         $t1, $v0, 1
    ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
    // 0x801D91AC: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x801D91B0: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_801D91B4:
    // 0x801D91B4: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x801D91B8: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x801D91BC: slti        $at, $t3, -0x1FF
    ctx->r1 = SIGNED(ctx->r11) < -0X1FF ? 1 : 0;
    // 0x801D91C0: beq         $at, $zero, L_801D91D4
    if (ctx->r1 == 0) {
        // 0x801D91C4: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_801D91D4;
    }
    // 0x801D91C4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x801D91C8: addiu       $v0, $t3, 0x400
    ctx->r2 = ADD32(ctx->r11, 0X400);
    // 0x801D91CC: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x801D91D0: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_801D91D4:
    // 0x801D91D4: lwc1        $f4, 0x94($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X94);
    // 0x801D91D8: lwc1        $f6, 0x28($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801D91DC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D91E0: sub.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x801D91E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D91E8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D91EC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D91F0: div.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D91F4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801D91F8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D91FC: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x801D9200: nop

    // 0x801D9204: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x801D9208: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801D920C: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x801D9210: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801D9214: nop

    // 0x801D9218: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D921C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D9220: nop

    // 0x801D9224: bc1fl       L_801D9234
    if (!c1cs) {
        // 0x801D9228: c.lt.s      $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
            goto L_801D9234;
    }
    goto skip_3;
    // 0x801D9228: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    skip_3:
    // 0x801D922C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x801D9230: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
L_801D9234:
    // 0x801D9234: nop

    // 0x801D9238: bc1fl       L_801D9248
    if (!c1cs) {
        // 0x801D923C: cfc1        $t1, $FpcCsr
        ctx->r9 = get_cop1_cs();
            goto L_801D9248;
    }
    goto skip_4;
    // 0x801D923C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    skip_4:
    // 0x801D9240: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801D9244: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
L_801D9248:
    // 0x801D9248: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801D924C: nop

    // 0x801D9250: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801D9254: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801D9258: nop

    // 0x801D925C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801D9260: beql        $t2, $zero, L_801D92B0
    if (ctx->r10 == 0) {
        // 0x801D9264: mfc1        $t2, $f18
        ctx->r10 = (int32_t)ctx->f18.u32l;
            goto L_801D92B0;
    }
    goto skip_5;
    // 0x801D9264: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    skip_5:
    // 0x801D9268: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D926C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D9270: sub.s       $f18, $f0, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x801D9274: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801D9278: nop

    // 0x801D927C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801D9280: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801D9284: nop

    // 0x801D9288: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801D928C: bne         $t2, $zero, L_801D92A4
    if (ctx->r10 != 0) {
        // 0x801D9290: nop
    
            goto L_801D92A4;
    }
    // 0x801D9290: nop

    // 0x801D9294: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x801D9298: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D929C: b           L_801D92BC
    // 0x801D92A0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_801D92BC;
    // 0x801D92A0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_801D92A4:
    // 0x801D92A4: b           L_801D92BC
    // 0x801D92A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_801D92BC;
    // 0x801D92A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x801D92AC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
L_801D92B0:
    // 0x801D92B0: nop

    // 0x801D92B4: bltz        $t2, L_801D92A4
    if (SIGNED(ctx->r10) < 0) {
        // 0x801D92B8: nop
    
            goto L_801D92A4;
    }
    // 0x801D92B8: nop

L_801D92BC:
    // 0x801D92BC: sh          $t2, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r10;
    // 0x801D92C0: lw          $t3, 0xB8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XB8);
    // 0x801D92C4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801D92C8: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801D92CC: bnel        $t3, $at, L_801D935C
    if (ctx->r11 != ctx->r1) {
        // 0x801D92D0: lw          $t1, 0xC0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0XC0);
            goto L_801D935C;
    }
    goto skip_6;
    // 0x801D92D0: lw          $t1, 0xC0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC0);
    skip_6:
    // 0x801D92D4: lw          $t5, 0xC0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC0);
    // 0x801D92D8: lw          $t6, 0xC4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC4);
    // 0x801D92DC: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x801D92E0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801D92E4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x801D92E8: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x801D92EC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D92F0: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x801D92F4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x801D92F8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801D92FC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x801D9300: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D9304: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801D9308: sh          $t0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r8;
    // 0x801D930C: addiu       $a3, $s1, 0xC
    ctx->r7 = ADD32(ctx->r17, 0XC);
    // 0x801D9310: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801D9314: jal         0x8000E764
    // 0x801D9318: nop

    func_8000E764_F364(rdram, ctx);
        goto after_0;
    // 0x801D9318: nop

    after_0:
    // 0x801D931C: lw          $t7, 0xBC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XBC);
    // 0x801D9320: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801D9324: lh          $t0, 0x4A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4A);
    // 0x801D9328: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x801D932C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801D9330: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    // 0x801D9334: addiu       $a3, $s1, 0x8
    ctx->r7 = ADD32(ctx->r17, 0X8);
    // 0x801D9338: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D933C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x801D9340: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x801D9344: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801D9348: jal         0x8000E764
    // 0x801D934C: nop

    func_8000E764_F364(rdram, ctx);
        goto after_1;
    // 0x801D934C: nop

    after_1:
    // 0x801D9350: b           L_801D93D4
    // 0x801D9354: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
        goto L_801D93D4;
    // 0x801D9354: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x801D9358: lw          $t1, 0xC0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC0);
L_801D935C:
    // 0x801D935C: lw          $t2, 0xC4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC4);
    // 0x801D9360: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x801D9364: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x801D9368: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x801D936C: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x801D9370: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D9374: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x801D9378: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x801D937C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801D9380: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x801D9384: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D9388: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801D938C: sh          $t0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r8;
    // 0x801D9390: addiu       $a3, $s1, 0xC
    ctx->r7 = ADD32(ctx->r17, 0XC);
    // 0x801D9394: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801D9398: jal         0x8000E764
    // 0x801D939C: nop

    func_8000E764_F364(rdram, ctx);
        goto after_2;
    // 0x801D939C: nop

    after_2:
    // 0x801D93A0: lw          $t3, 0xBC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XBC);
    // 0x801D93A4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801D93A8: lh          $t0, 0x4A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4A);
    // 0x801D93AC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801D93B0: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    // 0x801D93B4: addiu       $a3, $s1, 0x8
    ctx->r7 = ADD32(ctx->r17, 0X8);
    // 0x801D93B8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D93BC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x801D93C0: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x801D93C4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801D93C8: jal         0x8000E764
    // 0x801D93CC: nop

    func_8000E764_F364(rdram, ctx);
        goto after_3;
    // 0x801D93CC: nop

    after_3:
    // 0x801D93D0: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
L_801D93D4:
    // 0x801D93D4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801D93D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D93DC: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x801D93E0: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801D93E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D93E8: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D93EC: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x801D93F0: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x801D93F4: addiu       $t4, $sp, 0x38
    ctx->r12 = ADD32(ctx->r29, 0X38);
    // 0x801D93F8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D93FC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x801D9400: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D9404: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D9408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D940C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D9410: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D9414: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801D9418: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x801D941C: nop

    // 0x801D9420: addiu       $t9, $t7, 0x100
    ctx->r25 = ADD32(ctx->r15, 0X100);
    // 0x801D9424: andi        $a2, $t9, 0xFFFF
    ctx->r6 = ctx->r25 & 0XFFFF;
    // 0x801D9428: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x801D942C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D9430: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D9434: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801D9438: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x801D943C: nop

    // 0x801D9440: subu        $t8, $t6, $t5
    ctx->r24 = SUB32(ctx->r14, ctx->r13);
    // 0x801D9444: jal         0x8000E68C
    // 0x801D9448: andi        $a1, $t8, 0xFFFF
    ctx->r5 = ctx->r24 & 0XFFFF;
    func_8000E68C_F28C(rdram, ctx);
        goto after_4;
    // 0x801D9448: andi        $a1, $t8, 0xFFFF
    ctx->r5 = ctx->r24 & 0XFFFF;
    after_4:
    // 0x801D944C: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D9450: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D9454: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x801D9458: jal         0x8000EB50
    // 0x801D945C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8000EB50_F750(rdram, ctx);
        goto after_5;
    // 0x801D945C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_5:
    // 0x801D9460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D9464: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9468: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D946C: jr          $ra
    // 0x801D9470: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801D9470: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801EBDC0_6171A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBDC0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801EBDC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EBDC8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801EBDCC: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801EBDD0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EBDD4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EBDD8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801EBDDC: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EBDE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EBDE4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801EBDE8: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801EBDEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EBDF0: addiu       $t7, $sp, 0x58
    ctx->r15 = ADD32(ctx->r29, 0X58);
    // 0x801EBDF4: addiu       $t8, $sp, 0x54
    ctx->r24 = ADD32(ctx->r29, 0X54);
    // 0x801EBDF8: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x801EBDFC: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x801EBE00: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EBE04: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801EBE08: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x801EBE0C: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EBE10: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801EBE14: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x801EBE18: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801EBE1C: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801EBE20: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801EBE24: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801EBE28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801EBE2C: jal         0x8000E808
    // 0x801EBE30: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801EBE30: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EBE34: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801EBE38: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801EBE3C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801EBE40: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EBE44: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EBE48: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801EBE4C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EBE50: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801EBE54: addiu       $a1, $a1, -0x4550
    ctx->r5 = ADD32(ctx->r5, -0X4550);
    // 0x801EBE58: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EBE5C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801EBE60: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801EBE64: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EBE68: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x801EBE6C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EBE70: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EBE74: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EBE78: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EBE7C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EBE80: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801EBE84: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801EBE88: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801EBE8C: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EBE90: addiu       $a0, $a0, -0x3F2C
    ctx->r4 = ADD32(ctx->r4, -0X3F2C);
    // 0x801EBE94: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EBE98: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801EBE9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EBEA0: addiu       $t5, $zero, 0x4A8
    ctx->r13 = ADD32(0, 0X4A8);
    // 0x801EBEA4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801EBEA8: nop

    // 0x801EBEAC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x801EBEB0: beql        $t0, $zero, L_801EBF00
    if (ctx->r8 == 0) {
        // 0x801EBEB4: mfc1        $t0, $f4
        ctx->r8 = (int32_t)ctx->f4.u32l;
            goto L_801EBF00;
    }
    goto skip_0;
    // 0x801EBEB4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x801EBEB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EBEBC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801EBEC0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801EBEC4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801EBEC8: nop

    // 0x801EBECC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801EBED0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801EBED4: nop

    // 0x801EBED8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x801EBEDC: bne         $t0, $zero, L_801EBEF4
    if (ctx->r8 != 0) {
        // 0x801EBEE0: nop
    
            goto L_801EBEF4;
    }
    // 0x801EBEE0: nop

    // 0x801EBEE4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x801EBEE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EBEEC: b           L_801EBF0C
    // 0x801EBEF0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_801EBF0C;
    // 0x801EBEF0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_801EBEF4:
    // 0x801EBEF4: b           L_801EBF0C
    // 0x801EBEF8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_801EBF0C;
    // 0x801EBEF8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x801EBEFC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
L_801EBF00:
    // 0x801EBF00: nop

    // 0x801EBF04: bltz        $t0, L_801EBEF4
    if (SIGNED(ctx->r8) < 0) {
        // 0x801EBF08: nop
    
            goto L_801EBEF4;
    }
    // 0x801EBF08: nop

L_801EBF0C:
    // 0x801EBF0C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801EBF10: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801EBF14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801EBF18: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EBF1C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801EBF20: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801EBF24: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EBF28: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801EBF2C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801EBF30: nop

    // 0x801EBF34: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801EBF38: beql        $t2, $zero, L_801EBF88
    if (ctx->r10 == 0) {
        // 0x801EBF3C: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_801EBF88;
    }
    goto skip_1;
    // 0x801EBF3C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x801EBF40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EBF44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801EBF48: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801EBF4C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801EBF50: nop

    // 0x801EBF54: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801EBF58: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801EBF5C: nop

    // 0x801EBF60: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x801EBF64: bne         $t2, $zero, L_801EBF7C
    if (ctx->r10 != 0) {
        // 0x801EBF68: nop
    
            goto L_801EBF7C;
    }
    // 0x801EBF68: nop

    // 0x801EBF6C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x801EBF70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EBF74: b           L_801EBF94
    // 0x801EBF78: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_801EBF94;
    // 0x801EBF78: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_801EBF7C:
    // 0x801EBF7C: b           L_801EBF94
    // 0x801EBF80: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_801EBF94;
    // 0x801EBF80: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x801EBF84: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_801EBF88:
    // 0x801EBF88: nop

    // 0x801EBF8C: bltz        $t2, L_801EBF7C
    if (SIGNED(ctx->r10) < 0) {
        // 0x801EBF90: nop
    
            goto L_801EBF7C;
    }
    // 0x801EBF90: nop

L_801EBF94:
    // 0x801EBF94: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801EBF98: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801EBF9C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801EBFA0: lwc1        $f10, 0x24($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EBFA4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801EBFA8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801EBFAC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801EBFB0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801EBFB4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801EBFB8: nop

    // 0x801EBFBC: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801EBFC0: beql        $t4, $zero, L_801EC010
    if (ctx->r12 == 0) {
        // 0x801EBFC4: mfc1        $t4, $f16
        ctx->r12 = (int32_t)ctx->f16.u32l;
            goto L_801EC010;
    }
    goto skip_2;
    // 0x801EBFC4: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    skip_2:
    // 0x801EBFC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EBFCC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801EBFD0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801EBFD4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801EBFD8: nop

    // 0x801EBFDC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801EBFE0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801EBFE4: nop

    // 0x801EBFE8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801EBFEC: bne         $t4, $zero, L_801EC004
    if (ctx->r12 != 0) {
        // 0x801EBFF0: nop
    
            goto L_801EC004;
    }
    // 0x801EBFF0: nop

    // 0x801EBFF4: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x801EBFF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801EBFFC: b           L_801EC01C
    // 0x801EC000: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_801EC01C;
    // 0x801EC000: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_801EC004:
    // 0x801EC004: b           L_801EC01C
    // 0x801EC008: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_801EC01C;
    // 0x801EC008: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801EC00C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
L_801EC010:
    // 0x801EC010: nop

    // 0x801EC014: bltz        $t4, L_801EC004
    if (SIGNED(ctx->r12) < 0) {
        // 0x801EC018: nop
    
            goto L_801EC004;
    }
    // 0x801EC018: nop

L_801EC01C:
    // 0x801EC01C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801EC020: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801EC024: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x801EC028: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x801EC02C: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x801EC030: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801EC034: jal         0x80035854
    // 0x801EC038: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801EC038: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_1:
    // 0x801EC03C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EC040: beq         $v0, $zero, L_801EC0C0
    if (ctx->r2 == 0) {
        // 0x801EC044: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801EC0C0;
    }
    // 0x801EC044: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EC048: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EC04C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EC050: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EC054: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801EC058: swc1        $f18, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f18.u32l;
    // 0x801EC05C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x801EC060: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801EC064: jal         0x8000E39C
    // 0x801EC068: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801EC068: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    after_2:
    // 0x801EC06C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801EC070: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EC074: addiu       $t6, $zero, 0xDE
    ctx->r14 = ADD32(0, 0XDE);
    // 0x801EC078: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EC07C: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801EC080: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EC084: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EC088: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801EC08C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EC090: addiu       $a3, $zero, 0x44
    ctx->r7 = ADD32(0, 0X44);
    // 0x801EC094: jal         0x8000DF10
    // 0x801EC098: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_8000DF10_EB10(rdram, ctx);
        goto after_3;
    // 0x801EC098: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_3:
    // 0x801EC09C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x801EC0A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EC0A4: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x801EC0A8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801EC0AC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EC0B0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801EC0B4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x801EC0B8: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x801EC0BC: sb          $t0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r8;
L_801EC0C0:
    // 0x801EC0C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EC0C4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801EC0C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801EC0CC: jr          $ra
    // 0x801EC0D0: nop

    TRACE_RETURN()
    return;
    // 0x801EC0D0: nop

;}
