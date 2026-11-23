#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801ED26C_5A917C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED26C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801ED270: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801ED274: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801ED278: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801ED27C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801ED280: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801ED284: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801ED288: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x801ED28C: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x801ED290: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x801ED294: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x801ED298: jal         0x801ED420
    // 0x801ED29C: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    func_801ED420_5A9330(rdram, ctx);
        goto after_0;
    // 0x801ED29C: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    after_0:
    // 0x801ED2A0: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x801ED2A4: addiu       $v1, $s1, 0xA0
    ctx->r3 = ADD32(ctx->r17, 0XA0);
    // 0x801ED2A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x801ED2AC: lbu         $t8, 0x60($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X60);
    // 0x801ED2B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801ED2B4: bnel        $t8, $zero, L_801ED410
    if (ctx->r24 != 0) {
        // 0x801ED2B8: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_801ED410;
    }
    goto skip_0;
    // 0x801ED2B8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
L_801ED2BC:
    // 0x801ED2BC: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x801ED2C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801ED2C4: beq         $t9, $zero, L_801ED2D8
    if (ctx->r25 == 0) {
        // 0x801ED2C8: nop
    
            goto L_801ED2D8;
    }
    // 0x801ED2C8: nop

    // 0x801ED2CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801ED2D0: bne         $v0, $a0, L_801ED2BC
    if (ctx->r2 != ctx->r4) {
        // 0x801ED2D4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801ED2BC;
    }
    // 0x801ED2D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801ED2D8:
    // 0x801ED2D8: beql        $s0, $zero, L_801ED410
    if (ctx->r16 == 0) {
        // 0x801ED2DC: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_801ED410;
    }
    goto skip_1;
    // 0x801ED2DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x801ED2E0: lhu         $t0, 0x62($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X62);
    // 0x801ED2E4: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801ED2E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED2EC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801ED2F0: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x801ED2F4: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x801ED2F8: bne         $at, $zero, L_801ED40C
    if (ctx->r1 != 0) {
        // 0x801ED2FC: sh          $t1, 0x62($s1)
        MEM_H(0X62, ctx->r17) = ctx->r9;
            goto L_801ED40C;
    }
    // 0x801ED2FC: sh          $t1, 0x62($s1)
    MEM_H(0X62, ctx->r17) = ctx->r9;
    // 0x801ED300: sh          $zero, 0x62($s1)
    MEM_H(0X62, ctx->r17) = 0;
    // 0x801ED304: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
    // 0x801ED308: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x801ED30C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801ED310: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801ED314: lui         $a1, 0x901
    ctx->r5 = S32(0X901 << 16);
    // 0x801ED318: addiu       $a1, $a1, -0x4788
    ctx->r5 = ADD32(ctx->r5, -0X4788);
    // 0x801ED31C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED320: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801ED324: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ED328: addiu       $v0, $s0, 0x80
    ctx->r2 = ADD32(ctx->r16, 0X80);
    // 0x801ED32C: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x801ED330: addiu       $t5, $zero, 0x152
    ctx->r13 = ADD32(0, 0X152);
    // 0x801ED334: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801ED338: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x801ED33C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x801ED340: or          $a2, $v0, $at
    ctx->r6 = ctx->r2 | ctx->r1;
    // 0x801ED344: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x801ED348: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x801ED34C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801ED350: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x801ED354: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x801ED358: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801ED35C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801ED360: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801ED364: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801ED368: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x801ED36C: jal         0x80034680
    // 0x801ED370: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_80034680_35280(rdram, ctx);
        goto after_1;
    // 0x801ED370: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801ED374: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ED378: addiu       $a2, $a2, 0x4AB0
    ctx->r6 = ADD32(ctx->r6, 0X4AB0);
    // 0x801ED37C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED380: jal         0x801E8820
    // 0x801ED384: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_801E8820_5A4730(rdram, ctx);
        goto after_2;
    // 0x801ED384: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x801ED388: addiu       $t6, $zero, 0x120
    ctx->r14 = ADD32(0, 0X120);
    // 0x801ED38C: sh          $t6, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r14;
    // 0x801ED390: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x801ED394: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801ED398: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801ED39C: lbu         $t8, 0x90($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X90);
    // 0x801ED3A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801ED3A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801ED3A8: lw          $t0, -0x2DE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2DE0);
    // 0x801ED3AC: sw          $t0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r8;
    // 0x801ED3B0: jal         0x801EE25C
    // 0x801ED3B4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_3;
    // 0x801ED3B4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    after_3:
    // 0x801ED3B8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x801ED3BC: jal         0x801EE2BC
    // 0x801ED3C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801EE2BC_5AA1CC(rdram, ctx);
        goto after_4;
    // 0x801ED3C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x801ED3C4: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x801ED3C8: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x801ED3CC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ED3D0: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x801ED3D4: addiu       $t2, $zero, 0xF5
    ctx->r10 = ADD32(0, 0XF5);
    // 0x801ED3D8: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x801ED3DC: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x801ED3E0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x801ED3E4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801ED3E8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801ED3EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801ED3F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801ED3F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801ED3F8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801ED3FC: addiu       $a2, $a2, 0x4CA8
    ctx->r6 = ADD32(ctx->r6, 0X4CA8);
    // 0x801ED400: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801ED404: jal         0x801DC554
    // 0x801ED408: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801ED408: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
L_801ED40C:
    // 0x801ED40C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_801ED410:
    // 0x801ED410: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801ED414: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801ED418: jr          $ra
    // 0x801ED41C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801ED41C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801FA5A8_5B64B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA5A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FA5AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA5B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FA5B4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801FA5B8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801FA5BC: jal         0x801FA5D4
    // 0x801FA5C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801FA5D4_5B64E4(rdram, ctx);
        goto after_0;
    // 0x801FA5C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801FA5C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FA5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FA5CC: jr          $ra
    // 0x801FA5D0: nop

    TRACE_RETURN()
    return;
    // 0x801FA5D0: nop

;}
RECOMP_FUNC void func_801E7DE8_5A3CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7DE8: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E7DEC: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x801E7DF0: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x801E7DF4: beq         $v0, $zero, L_801E7E10
    if (ctx->r2 == 0) {
        // 0x801E7DF8: nop
    
            goto L_801E7E10;
    }
    // 0x801E7DF8: nop

    // 0x801E7DFC: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7E00: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801E7E04: lhu         $v0, 0x86($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X86);
    // 0x801E7E08: xor         $t8, $v0, $at
    ctx->r24 = ctx->r2 ^ ctx->r1;
    // 0x801E7E0C: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
L_801E7E10:
    // 0x801E7E10: jr          $ra
    // 0x801E7E14: nop

    TRACE_RETURN()
    return;
    // 0x801E7E14: nop

;}
RECOMP_FUNC void func_801ED50C_5A941C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED50C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801ED510: jr          $ra
    // 0x801ED514: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801ED514: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E2458_59E368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2458: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E245C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2460: jal         0x801E7DE8
    // 0x801E2464: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E2464: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E2468: beq         $v0, $zero, L_801E2480
    if (ctx->r2 == 0) {
        // 0x801E246C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801E2480;
    }
    // 0x801E246C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E2470: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E2474: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E2478: b           L_801E2490
    // 0x801E247C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
        goto L_801E2490;
    // 0x801E247C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
L_801E2480:
    // 0x801E2480: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E2484: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E2488: nop

    // 0x801E248C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
L_801E2490:
    // 0x801E2490: jal         0x801E7DE8
    // 0x801E2494: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_1;
    // 0x801E2494: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801E2498: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E249C: beq         $v0, $zero, L_801E24B4
    if (ctx->r2 == 0) {
        // 0x801E24A0: lwc1        $f0, 0x1C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_801E24B4;
    }
    // 0x801E24A0: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801E24A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E24A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E24AC: b           L_801E24C4
    // 0x801E24B0: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
        goto L_801E24C4;
    // 0x801E24B0: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
L_801E24B4:
    // 0x801E24B4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E24B8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E24BC: nop

    // 0x801E24C0: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
L_801E24C4:
    // 0x801E24C4: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801E24C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E24CC: lhu         $t6, 0x30($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X30);
    // 0x801E24D0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x801E24D4: bgez        $t6, L_801E24E8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801E24D8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801E24E8;
    }
    // 0x801E24D8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801E24DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E24E0: nop

    // 0x801E24E4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801E24E8:
    // 0x801E24E8: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x801E24EC: nop

    // 0x801E24F0: bc1t        L_801E2504
    if (c1cs) {
        // 0x801E24F4: nop
    
            goto L_801E2504;
    }
    // 0x801E24F4: nop

    // 0x801E24F8: lbu         $a1, 0x2E($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X2E);
    // 0x801E24FC: beql        $a1, $zero, L_801E2510
    if (ctx->r5 == 0) {
        // 0x801E2500: lbu         $t7, 0x90($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X90);
            goto L_801E2510;
    }
    goto skip_0;
    // 0x801E2500: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    skip_0:
L_801E2504:
    // 0x801E2504: b           L_801E2558
    // 0x801E2508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E2558;
    // 0x801E2508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E250C: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
L_801E2510:
    // 0x801E2510: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801E2514: addiu       $t1, $a1, 0x1
    ctx->r9 = ADD32(ctx->r5, 0X1);
    // 0x801E2518: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801E251C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E2520: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801E2524: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801E2528: lhu         $t9, 0x7DB2($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7DB2);
    // 0x801E252C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E2530: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x801E2534: bnel        $t0, $zero, L_801E255C
    if (ctx->r8 != 0) {
        // 0x801E2538: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E255C;
    }
    goto skip_1;
    // 0x801E2538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E253C: sb          $t1, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = ctx->r9;
    // 0x801E2540: lwc1        $f16, -0x4CC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4CC8);
    // 0x801E2544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E2548: mul.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801E254C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801E2550: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2554: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
L_801E2558:
    // 0x801E2558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E255C:
    // 0x801E255C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2560: jr          $ra
    // 0x801E2564: nop

    TRACE_RETURN()
    return;
    // 0x801E2564: nop

;}
RECOMP_FUNC void func_801F7170_5B3080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F7174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7178: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F717C: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F7180: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F7184: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F7188: jalr        $t9
    // 0x801F718C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F718C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F7190: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F7194: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F7198: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F719C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F71A0: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801F71A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F71A8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F71AC: nop

    // 0x801F71B0: bc1fl       L_801F71C4
    if (!c1cs) {
        // 0x801F71B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F71C4;
    }
    goto skip_0;
    // 0x801F71B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F71B8: jal         0x801DACDC
    // 0x801F71BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F71BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801F71C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F71C4:
    // 0x801F71C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F71C8: jr          $ra
    // 0x801F71CC: nop

    TRACE_RETURN()
    return;
    // 0x801F71CC: nop

;}
RECOMP_FUNC void func_801DDDBC_599CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDDBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDDC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDDC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DDDC8: jal         0x801E3400
    // 0x801DDDCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3400_59F310(rdram, ctx);
        goto after_0;
    // 0x801DDDCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDDD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DDDD4: jal         0x801E8964
    // 0x801DDDD8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_801E8964_5A4874(rdram, ctx);
        goto after_1;
    // 0x801DDDD8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_1:
    // 0x801DDDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDDE4: jr          $ra
    // 0x801DDDE8: nop

    TRACE_RETURN()
    return;
    // 0x801DDDE8: nop

;}
RECOMP_FUNC void func_801DBD1C_597C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBD1C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x801DBD20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801DBD24: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801DBD28: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801DBD2C: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x801DBD30: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x801DBD34: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801DBD38: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801DBD3C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801DBD40: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801DBD44: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DBD48: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801DBD4C: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801DBD50: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801DBD54: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801DBD58: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801DBD5C: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801DBD60: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801DBD64: addiu       $t6, $t6, 0x4000
    ctx->r14 = ADD32(ctx->r14, 0X4000);
    // 0x801DBD68: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801DBD6C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801DBD70: addiu       $v0, $sp, 0x84
    ctx->r2 = ADD32(ctx->r29, 0X84);
    // 0x801DBD74: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801DBD78: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801DBD7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DBD80: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DBD84: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801DBD88: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x801DBD8C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DBD90: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DBD94: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x801DBD98: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DBD9C: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
    // 0x801DBDA0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801DBDA4: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x801DBDA8: nop

    // 0x801DBDAC: bc1fl       L_801DBDC0
    if (!c1cs) {
        // 0x801DBDB0: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_801DBDC0;
    }
    goto skip_0;
    // 0x801DBDB0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x801DBDB4: b           L_801DBEB4
    // 0x801DBDB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DBEB4;
    // 0x801DBDB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DBDBC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_801DBDC0:
    // 0x801DBDC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DBDC4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801DBDC8: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x801DBDCC: swc1        $f12, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f12.u32l;
    // 0x801DBDD0: swc1        $f12, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f12.u32l;
    // 0x801DBDD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x801DBDD8: lw          $a3, 0xDC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XDC);
    // 0x801DBDDC: jal         0x801DBEC8
    // 0x801DBDE0: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    func_801DBEC8_597DD8(rdram, ctx);
        goto after_0;
    // 0x801DBDE0: lw          $a2, 0xD8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD8);
    after_0:
    // 0x801DBDE4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801DBDE8: beq         $v0, $zero, L_801DBEB0
    if (ctx->r2 == 0) {
        // 0x801DBDEC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_801DBEB0;
    }
    // 0x801DBDEC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x801DBDF0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801DBDF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DBDF8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x801DBDFC: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x801DBE00: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x801DBE04: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    // 0x801DBE08: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x801DBE0C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x801DBE10: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x801DBE14: jal         0x8002A458
    // 0x801DBE18: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_1;
    // 0x801DBE18: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801DBE1C: lh          $t1, 0x74($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X74);
    // 0x801DBE20: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801DBE24: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801DBE28: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
    // 0x801DBE2C: bne         $t1, $at, L_801DBEAC
    if (ctx->r9 != ctx->r1) {
        // 0x801DBE30: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_801DBEAC;
    }
    // 0x801DBE30: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x801DBE34: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801DBE38: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x801DBE3C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801DBE40: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801DBE44: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DBE48: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x801DBE4C: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801DBE50: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801DBE54: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801DBE58: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801DBE5C: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DBE60: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801DBE64: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801DBE68: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801DBE6C: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x801DBE70: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801DBE74: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801DBE78: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801DBE7C: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x801DBE80: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801DBE84: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801DBE88: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801DBE8C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801DBE90: lw          $a0, 0xE4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE4);
    // 0x801DBE94: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x801DBE98: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801DBE9C: jal         0x8002A458
    // 0x801DBEA0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_2;
    // 0x801DBEA0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801DBEA4: b           L_801DBEB0
    // 0x801DBEA8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
        goto L_801DBEB0;
    // 0x801DBEA8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_801DBEAC:
    // 0x801DBEAC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_801DBEB0:
    // 0x801DBEB0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_801DBEB4:
    // 0x801DBEB4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801DBEB8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801DBEBC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801DBEC0: jr          $ra
    // 0x801DBEC4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    TRACE_RETURN()
    return;
    // 0x801DBEC4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_801D8F74_594E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8F74: lbu         $t6, 0xE1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE1);
    // 0x801D8F78: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801D8F7C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x801D8F80: beq         $at, $zero, L_801D8F8C
    if (ctx->r1 == 0) {
        // 0x801D8F84: nop
    
            goto L_801D8F8C;
    }
    // 0x801D8F84: nop

    // 0x801D8F88: sb          $t7, 0xE1($a0)
    MEM_B(0XE1, ctx->r4) = ctx->r15;
L_801D8F8C:
    // 0x801D8F8C: jr          $ra
    // 0x801D8F90: nop

    TRACE_RETURN()
    return;
    // 0x801D8F90: nop

;}
RECOMP_FUNC void func_801DE2CC_59A1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE2CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DE2D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DE2D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DE2D8: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE2DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE2E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801DE2E4: bne         $t6, $at, L_801DE314
    if (ctx->r14 != ctx->r1) {
        // 0x801DE2E8: addiu       $a2, $zero, 0x62
        ctx->r6 = ADD32(0, 0X62);
            goto L_801DE314;
    }
    // 0x801DE2E8: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x801DE2EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801DE2F0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801DE2F4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801DE2F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801DE2FC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801DE300: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x801DE304: jal         0x801F5B04
    // 0x801DE308: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801DE308: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_0:
    // 0x801DE30C: b           L_801DE320
    // 0x801DE310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE320;
    // 0x801DE310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE314:
    // 0x801DE314: jal         0x801E4078
    // 0x801DE318: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_801E4078_59FF88(rdram, ctx);
        goto after_1;
    // 0x801DE318: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_1:
    // 0x801DE31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE320:
    // 0x801DE320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DE324: jr          $ra
    // 0x801DE328: nop

    TRACE_RETURN()
    return;
    // 0x801DE328: nop

;}
RECOMP_FUNC void func_801F5DF4_5B1D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5DF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F5DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F5E00: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F5E04: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801F5E08: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801F5E0C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801F5E10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F5E14: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801F5E18: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F5E1C: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x801F5E20: nop

    // 0x801F5E24: bc1f        L_801F5E5C
    if (!c1cs) {
        // 0x801F5E28: nop
    
            goto L_801F5E5C;
    }
    // 0x801F5E28: nop

    // 0x801F5E2C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F5E30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801F5E34: lbu         $v1, 0x2C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2C);
    // 0x801F5E38: bne         $v1, $zero, L_801F5E5C
    if (ctx->r3 != 0) {
        // 0x801F5E3C: addiu       $t8, $v1, 0x1
        ctx->r24 = ADD32(ctx->r3, 0X1);
            goto L_801F5E5C;
    }
    // 0x801F5E3C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x801F5E40: jal         0x801DD830
    // 0x801F5E44: sb          $t8, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r24;
    func_801DD830_599740(rdram, ctx);
        goto after_0;
    // 0x801F5E44: sb          $t8, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r24;
    after_0:
    // 0x801F5E48: jal         0x80038BC8
    // 0x801F5E4C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801F5E4C: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    after_1:
    // 0x801F5E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5E54: jal         0x801E8964
    // 0x801F5E58: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    func_801E8964_5A4874(rdram, ctx);
        goto after_2;
    // 0x801F5E58: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    after_2:
L_801F5E5C:
    // 0x801F5E5C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F5E60: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F5E64: jalr        $t9
    // 0x801F5E68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801F5E68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801F5E6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F5E70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F5E74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801F5E78: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801F5E7C: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801F5E80: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x801F5E84: nop

    // 0x801F5E88: bc1fl       L_801F5EA8
    if (!c1cs) {
        // 0x801F5E8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F5EA8;
    }
    goto skip_0;
    // 0x801F5E8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F5E90: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801F5E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5E98: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x801F5E9C: jal         0x801DACDC
    // 0x801F5EA0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801F5EA0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_4:
    // 0x801F5EA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F5EA8:
    // 0x801F5EA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F5EAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F5EB0: jr          $ra
    // 0x801F5EB4: nop

    TRACE_RETURN()
    return;
    // 0x801F5EB4: nop

;}
RECOMP_FUNC void func_801EDF2C_5A9E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EDF2C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801EDF30: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x801EDF34: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x801EDF38: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x801EDF3C: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x801EDF40: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x801EDF44: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x801EDF48: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801EDF4C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801EDF50: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801EDF54: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801EDF58: lui         $s7, 0x8020
    ctx->r23 = S32(0X8020 << 16);
    // 0x801EDF5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EDF60: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801EDF64: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EDF68: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801EDF6C: lwc1        $f20, -0x4558($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4558);
    // 0x801EDF70: addiu       $s7, $s7, 0x49C0
    ctx->r23 = ADD32(ctx->r23, 0X49C0);
    // 0x801EDF74: addiu       $s1, $a0, 0x9C
    ctx->r17 = ADD32(ctx->r4, 0X9C);
    // 0x801EDF78: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801EDF7C: addiu       $s3, $a0, 0xA4
    ctx->r19 = ADD32(ctx->r4, 0XA4);
    // 0x801EDF80: addiu       $s6, $zero, 0x38
    ctx->r22 = ADD32(0, 0X38);
L_801EDF84:
    // 0x801EDF84: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EDF88: lwc1        $f6, 0x70($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X70);
    // 0x801EDF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EDF90: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801EDF94: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EDF98: jal         0x801EE090
    // 0x801EDF9C: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    func_801EE090_5A9FA0(rdram, ctx);
        goto after_0;
    // 0x801EDF9C: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    after_0:
    // 0x801EDFA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EDFA4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801EDFA8: jal         0x801EE330
    // 0x801EDFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_1;
    // 0x801EDFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801EDFB0: beql        $v0, $zero, L_801EDFC4
    if (ctx->r2 == 0) {
        // 0x801EDFB4: lwc1        $f10, 0x1C($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_801EDFC4;
    }
    goto skip_0;
    // 0x801EDFB4: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x801EDFB8: b           L_801EE014
    // 0x801EDFBC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_801EE014;
    // 0x801EDFBC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x801EDFC0: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
L_801EDFC4:
    // 0x801EDFC4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801EDFC8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801EDFCC: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801EDFD0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801EDFD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EDFD8: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    // 0x801EDFDC: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
    // 0x801EDFE0: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EDFE4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x801EDFE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EDFEC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801EDFF0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801EDFF4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801EDFF8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801EDFFC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801EE000: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EE004: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EE008: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x801EE00C: jal         0x801DC554
    // 0x801EE010: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801EE010: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_2:
L_801EE014:
    // 0x801EE014: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x801EE018: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801EE01C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x801EE020: bne         $s2, $s6, L_801EDF84
    if (ctx->r18 != ctx->r22) {
        // 0x801EE024: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801EDF84;
    }
    // 0x801EE024: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801EE028: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801EE02C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x801EE030: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x801EE034: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801EE038: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801EE03C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801EE040: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x801EE044: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x801EE048: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x801EE04C: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x801EE050: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x801EE054: jr          $ra
    // 0x801EE058: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801EE058: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801E77E4_5A36F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E77E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E77E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E77EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E77F0: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E77F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E77F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E77FC: beql        $v0, $zero, L_801E7828
    if (ctx->r2 == 0) {
        // 0x801E7800: lw          $t7, 0x5C($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X5C);
            goto L_801E7828;
    }
    goto skip_0;
    // 0x801E7800: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    skip_0:
    // 0x801E7804: beq         $v0, $at, L_801E7834
    if (ctx->r2 == ctx->r1) {
        // 0x801E7808: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E7834;
    }
    // 0x801E7808: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E780C: beq         $v0, $at, L_801E78C8
    if (ctx->r2 == ctx->r1) {
        // 0x801E7810: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E78C8;
    }
    // 0x801E7810: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E7814: beq         $v0, $at, L_801E7894
    if (ctx->r2 == ctx->r1) {
        // 0x801E7818: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E7894;
    }
    // 0x801E7818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E781C: b           L_801E78CC
    // 0x801E7820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E78CC;
    // 0x801E7820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E7824: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
L_801E7828:
    // 0x801E7828: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801E782C: b           L_801E78C8
    // 0x801E7830: sb          $t6, 0x84($t7)
    MEM_B(0X84, ctx->r15) = ctx->r14;
        goto L_801E78C8;
    // 0x801E7830: sb          $t6, 0x84($t7)
    MEM_B(0X84, ctx->r15) = ctx->r14;
L_801E7834:
    // 0x801E7834: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E7838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E783C: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x801E7840: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    // 0x801E7844: lbu         $t9, 0x30($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X30);
    // 0x801E7848: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x801E784C: jal         0x801DACDC
    // 0x801E7850: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801E7850: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    after_0:
    // 0x801E7854: jal         0x801E8160
    // 0x801E7858: nop

    func_801E8160_5A4070(rdram, ctx);
        goto after_1;
    // 0x801E7858: nop

    after_1:
    // 0x801E785C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7860: jal         0x801E8964
    // 0x801E7864: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_801E8964_5A4874(rdram, ctx);
        goto after_2;
    // 0x801E7864: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_2:
    // 0x801E7868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E786C: jal         0x801DD6E0
    // 0x801E7870: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_3;
    // 0x801E7870: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_3:
    // 0x801E7874: jal         0x80038BC8
    // 0x801E7878: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801E7878: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    after_4:
    // 0x801E787C: jal         0x80038BC8
    // 0x801E7880: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801E7880: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    after_5:
    // 0x801E7884: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E7888: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E788C: b           L_801E78C8
    // 0x801E7890: swc1        $f4, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f4.u32l;
        goto L_801E78C8;
    // 0x801E7890: swc1        $f4, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f4.u32l;
L_801E7894:
    // 0x801E7894: lbu         $t2, 0x30($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X30);
    // 0x801E7898: sb          $zero, 0x61($s0)
    MEM_B(0X61, ctx->r16) = 0;
    // 0x801E789C: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    // 0x801E78A0: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x801E78A4: jal         0x801DAD08
    // 0x801E78A8: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    func_801DAD08_596C18(rdram, ctx);
        goto after_6;
    // 0x801E78A8: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    after_6:
    // 0x801E78AC: jal         0x801E8160
    // 0x801E78B0: nop

    func_801E8160_5A4070(rdram, ctx);
        goto after_7;
    // 0x801E78B0: nop

    after_7:
    // 0x801E78B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E78B8: jal         0x801E8964
    // 0x801E78BC: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_801E8964_5A4874(rdram, ctx);
        goto after_8;
    // 0x801E78BC: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_8:
    // 0x801E78C0: jal         0x80038BC8
    // 0x801E78C4: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    func_80038BC8_397C8(rdram, ctx);
        goto after_9;
    // 0x801E78C4: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    after_9:
L_801E78C8:
    // 0x801E78C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E78CC:
    // 0x801E78CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E78D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E78D4: jr          $ra
    // 0x801E78D8: nop

    TRACE_RETURN()
    return;
    // 0x801E78D8: nop

;}
RECOMP_FUNC void func_801DF748_59B658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF748: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF74C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF750: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF754: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF758: jal         0x801E7F50
    // 0x801DF75C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801DF75C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF760: jal         0x801E31DC
    // 0x801DF764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E31DC_59F0EC(rdram, ctx);
        goto after_1;
    // 0x801DF764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DF768: jal         0x801E1E70
    // 0x801DF76C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1E70_59DD80(rdram, ctx);
        goto after_2;
    // 0x801DF76C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DF770: jal         0x801DF858
    // 0x801DF774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF858_59B768(rdram, ctx);
        goto after_3;
    // 0x801DF774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DF778: bne         $v0, $zero, L_801DF7CC
    if (ctx->r2 != 0) {
        // 0x801DF77C: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_801DF7CC;
    }
    // 0x801DF77C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DF780: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DF784: jalr        $t9
    // 0x801DF788: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x801DF788: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x801DF78C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DF790: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DF794: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801DF798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF79C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DF7A0: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DF7A4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DF7A8: nop

    // 0x801DF7AC: bc1f        L_801DF7C4
    if (!c1cs) {
        // 0x801DF7B0: nop
    
            goto L_801DF7C4;
    }
    // 0x801DF7B0: nop

    // 0x801DF7B4: jal         0x801DACDC
    // 0x801DF7B8: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801DF7B8: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    after_5:
    // 0x801DF7BC: b           L_801DF7D0
    // 0x801DF7C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF7D0;
    // 0x801DF7C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF7C4:
    // 0x801DF7C4: jal         0x801DF8B8
    // 0x801DF7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF8B8_59B7C8(rdram, ctx);
        goto after_6;
    // 0x801DF7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_801DF7CC:
    // 0x801DF7CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF7D0:
    // 0x801DF7D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF7D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF7D8: jr          $ra
    // 0x801DF7DC: nop

    TRACE_RETURN()
    return;
    // 0x801DF7DC: nop

;}
RECOMP_FUNC void func_801F8EDC_5B4DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F8EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8EE4: jal         0x8000B3E4
    // 0x801F8EE8: nop

    func_8000B3E4_BFE4(rdram, ctx);
        goto after_0;
    // 0x801F8EE8: nop

    after_0:
    // 0x801F8EEC: jal         0x801F8F0C
    // 0x801F8EF0: nop

    func_801F8F0C_5B4E1C(rdram, ctx);
        goto after_1;
    // 0x801F8EF0: nop

    after_1:
    // 0x801F8EF4: jal         0x801FA7B0
    // 0x801F8EF8: nop

    func_801FA7B0_5B66C0(rdram, ctx);
        goto after_2;
    // 0x801F8EF8: nop

    after_2:
    // 0x801F8EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F8F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F8F04: jr          $ra
    // 0x801F8F08: nop

    TRACE_RETURN()
    return;
    // 0x801F8F08: nop

;}
RECOMP_FUNC void func_801F5734_5B1644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F5738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F573C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F5740: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F5744: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F5748: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801F574C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801F5750: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F5754: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F5758: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801F575C: lbu         $t6, 0x59($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X59);
    // 0x801F5760: bnel        $t6, $zero, L_801F5780
    if (ctx->r14 != 0) {
        // 0x801F5764: lbu         $t7, 0x30($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X30);
            goto L_801F5780;
    }
    goto skip_0;
    // 0x801F5764: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    skip_0:
    // 0x801F5768: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F576C: nop

    // 0x801F5770: swc1        $f0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f0.u32l;
    // 0x801F5774: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x801F5778: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801F577C: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
L_801F5780:
    // 0x801F5780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5784: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x801F5788: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801F578C: jal         0x801DD720
    // 0x801F5790: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801F5790: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    after_0:
    // 0x801F5794: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801F5798: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801F579C: lhu         $a0, 0x30($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X30);
    // 0x801F57A0: beq         $a0, $zero, L_801F57C4
    if (ctx->r4 == 0) {
        // 0x801F57A4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_801F57C4;
    }
    // 0x801F57A4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801F57A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F57AC: beq         $v1, $at, L_801F57E8
    if (ctx->r3 == ctx->r1) {
        // 0x801F57B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F57E8;
    }
    // 0x801F57B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F57B4: beq         $v1, $at, L_801F582C
    if (ctx->r3 == ctx->r1) {
        // 0x801F57B8: nop
    
            goto L_801F582C;
    }
    // 0x801F57B8: nop

    // 0x801F57BC: b           L_801F582C
    // 0x801F57C0: nop

        goto L_801F582C;
    // 0x801F57C0: nop

L_801F57C4:
    // 0x801F57C4: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801F57C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F57CC: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x801F57D0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F57D4: nop

    // 0x801F57D8: bc1f        L_801F582C
    if (!c1cs) {
        // 0x801F57DC: nop
    
            goto L_801F582C;
    }
    // 0x801F57DC: nop

    // 0x801F57E0: b           L_801F582C
    // 0x801F57E4: sh          $t9, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r25;
        goto L_801F582C;
    // 0x801F57E4: sh          $t9, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r25;
L_801F57E8:
    // 0x801F57E8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F57EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F57F0: lwc1        $f12, 0x28($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801F57F4: addiu       $t0, $a0, 0x1
    ctx->r8 = ADD32(ctx->r4, 0X1);
    // 0x801F57F8: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801F57FC: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x801F5800: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801F5804: lui         $a3, 0x3CCC
    ctx->r7 = S32(0X3CCC << 16);
    // 0x801F5808: bc1f        L_801F5818
    if (!c1cs) {
        // 0x801F580C: nop
    
            goto L_801F5818;
    }
    // 0x801F580C: nop

    // 0x801F5810: b           L_801F582C
    // 0x801F5814: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
        goto L_801F582C;
    // 0x801F5814: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
L_801F5818:
    // 0x801F5818: jal         0x801E7D78
    // 0x801F581C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    func_801E7D78_5A3C88(rdram, ctx);
        goto after_1;
    // 0x801F581C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    after_1:
    // 0x801F5820: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x801F5824: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x801F5828: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
L_801F582C:
    // 0x801F582C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F5830: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F5834: jalr        $t9
    // 0x801F5838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801F5838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801F583C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F5840: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F5844: lwc1        $f10, 0x28($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801F5848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F584C: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x801F5850: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F5854: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x801F5858: nop

    // 0x801F585C: bc1f        L_801F58AC
    if (!c1cs) {
        // 0x801F5860: nop
    
            goto L_801F58AC;
    }
    // 0x801F5860: nop

    // 0x801F5864: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x801F5868: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x801F586C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x801F5870: lbu         $t1, 0x30($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X30);
    // 0x801F5874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F587C: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x801F5880: jal         0x801DACDC
    // 0x801F5884: sb          $t2, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r10;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F5884: sb          $t2, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r10;
    after_3:
    // 0x801F5888: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F588C: lwc1        $f4, -0x3D40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3D40);
    // 0x801F5890: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801F5894: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
    // 0x801F5898: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801F589C: jal         0x801E8178
    // 0x801F58A0: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    func_801E8178_5A4088(rdram, ctx);
        goto after_4;
    // 0x801F58A0: sh          $zero, 0x0($t4)
    MEM_H(0X0, ctx->r12) = 0;
    after_4:
    // 0x801F58A4: b           L_801F58AC
    // 0x801F58A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F58AC;
    // 0x801F58A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F58AC:
    // 0x801F58AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F58B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F58B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F58B8: jr          $ra
    // 0x801F58BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801F58BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801E026C_59C17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E026C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E0270: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E0274: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E0278: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E027C: jal         0x801E0158
    // 0x801E0280: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E0158_59C068(rdram, ctx);
        goto after_0;
    // 0x801E0280: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E0284: beq         $v0, $zero, L_801E029C
    if (ctx->r2 == 0) {
        // 0x801E0288: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E029C;
    }
    // 0x801E0288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E028C: jal         0x801DAD08
    // 0x801E0290: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_801DAD08_596C18(rdram, ctx);
        goto after_1;
    // 0x801E0290: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_1:
    // 0x801E0294: b           L_801E04C0
    // 0x801E0298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E04C0;
    // 0x801E0298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E029C:
    // 0x801E029C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E02A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E02A4: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x801E02A8: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801E02AC: beql        $v1, $zero, L_801E02C8
    if (ctx->r3 == 0) {
        // 0x801E02B0: lhu         $a0, 0x8($v0)
        ctx->r4 = MEM_HU(ctx->r2, 0X8);
            goto L_801E02C8;
    }
    goto skip_0;
    // 0x801E02B0: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    skip_0:
    // 0x801E02B4: beql        $v1, $at, L_801E0418
    if (ctx->r3 == ctx->r1) {
        // 0x801E02B8: lhu         $t4, 0x80($s0)
        ctx->r12 = MEM_HU(ctx->r16, 0X80);
            goto L_801E0418;
    }
    goto skip_1;
    // 0x801E02B8: lhu         $t4, 0x80($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X80);
    skip_1:
    // 0x801E02BC: b           L_801E04C0
    // 0x801E02C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E04C0;
    // 0x801E02C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E02C4: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
L_801E02C8:
    // 0x801E02C8: jal         0x801E3C34
    // 0x801E02CC: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    func_801E3C34_59FB44(rdram, ctx);
        goto after_2;
    // 0x801E02CC: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    after_2:
    // 0x801E02D0: beql        $v0, $zero, L_801E0348
    if (ctx->r2 == 0) {
        // 0x801E02D4: lhu         $t4, 0x98($s0)
        ctx->r12 = MEM_HU(ctx->r16, 0X98);
            goto L_801E0348;
    }
    goto skip_2;
    // 0x801E02D4: lhu         $t4, 0x98($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X98);
    skip_2:
    // 0x801E02D8: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801E02DC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801E02E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E02E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E02E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801E02EC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801E02F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801E02F4: lhu         $t8, 0x7DB2($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB2);
    // 0x801E02F8: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801E02FC: beql        $t9, $zero, L_801E0348
    if (ctx->r25 == 0) {
        // 0x801E0300: lhu         $t4, 0x98($s0)
        ctx->r12 = MEM_HU(ctx->r16, 0X98);
            goto L_801E0348;
    }
    goto skip_3;
    // 0x801E0300: lhu         $t4, 0x98($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X98);
    skip_3:
    // 0x801E0304: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E0308: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E030C: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0310: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    // 0x801E0314: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
    // 0x801E0318: sh          $zero, 0x30($t0)
    MEM_H(0X30, ctx->r8) = 0;
    // 0x801E031C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0324: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x801E0328: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x801E032C: addiu       $t2, $t1, 0x200
    ctx->r10 = ADD32(ctx->r9, 0X200);
    // 0x801E0330: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801E0334: jal         0x801DAD08
    // 0x801E0338: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    func_801DAD08_596C18(rdram, ctx);
        goto after_3;
    // 0x801E0338: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    after_3:
    // 0x801E033C: b           L_801E04C0
    // 0x801E0340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E04C0;
    // 0x801E0340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0344: lhu         $t4, 0x98($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X98);
L_801E0348:
    // 0x801E0348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E034C: bnel        $t4, $zero, L_801E0384
    if (ctx->r12 != 0) {
        // 0x801E0350: lw          $t5, 0x5C($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X5C);
            goto L_801E0384;
    }
    goto skip_4;
    // 0x801E0350: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    skip_4:
    // 0x801E0354: jal         0x801E62D0
    // 0x801E0358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E62D0_5A21E0(rdram, ctx);
        goto after_4;
    // 0x801E0358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E035C: jal         0x801E3324
    // 0x801E0360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_5;
    // 0x801E0360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E0364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0368: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801E036C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801E0370: jal         0x801DAC7C
    // 0x801E0374: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_6;
    // 0x801E0374: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_6:
    // 0x801E0378: b           L_801E04C0
    // 0x801E037C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E04C0;
    // 0x801E037C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0380: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
L_801E0384:
    // 0x801E0384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E0388: jal         0x801E5D2C
    // 0x801E038C: lw          $a1, 0x90($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X90);
    func_801E5D2C_5A1C3C(rdram, ctx);
        goto after_7;
    // 0x801E038C: lw          $a1, 0x90($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X90);
    after_7:
    // 0x801E0390: bne         $v0, $zero, L_801E03C0
    if (ctx->r2 != 0) {
        // 0x801E0394: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801E03C0;
    }
    // 0x801E0394: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0398: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E039C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E03A0: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E03A4: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    // 0x801E03A8: swc1        $f10, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f10.u32l;
    // 0x801E03AC: lhu         $t6, 0x30($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X30);
    // 0x801E03B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801E03B4: sh          $t7, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r15;
    // 0x801E03B8: b           L_801E04BC
    // 0x801E03BC: sh          $zero, 0x80($s0)
    MEM_H(0X80, ctx->r16) = 0;
        goto L_801E04BC;
    // 0x801E03BC: sh          $zero, 0x80($s0)
    MEM_H(0X80, ctx->r16) = 0;
L_801E03C0:
    // 0x801E03C0: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    // 0x801E03C4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801E03C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E03CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E03D0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E03D4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E03D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E03DC: lhu         $t0, 0x7DB2($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB2);
    // 0x801E03E0: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x801E03E4: bnel        $t1, $zero, L_801E04C0
    if (ctx->r9 != 0) {
        // 0x801E03E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E04C0;
    }
    goto skip_5;
    // 0x801E03E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x801E03EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E03F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E03F4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E03F8: swc1        $f16, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f16.u32l;
    // 0x801E03FC: swc1        $f18, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f18.u32l;
    // 0x801E0400: lhu         $t2, 0x30($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X30);
    // 0x801E0404: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801E0408: sh          $t3, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r11;
    // 0x801E040C: b           L_801E04BC
    // 0x801E0410: sh          $zero, 0x80($s0)
    MEM_H(0X80, ctx->r16) = 0;
        goto L_801E04BC;
    // 0x801E0410: sh          $zero, 0x80($s0)
    MEM_H(0X80, ctx->r16) = 0;
    // 0x801E0414: lhu         $t4, 0x80($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X80);
L_801E0418:
    // 0x801E0418: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x801E041C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801E0420: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x801E0424: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x801E0428: bne         $at, $zero, L_801E04BC
    if (ctx->r1 != 0) {
        // 0x801E042C: sh          $t5, 0x80($s0)
        MEM_H(0X80, ctx->r16) = ctx->r13;
            goto L_801E04BC;
    }
    // 0x801E042C: sh          $t5, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r13;
    // 0x801E0430: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0434: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    // 0x801E0438: jal         0x801E3C34
    // 0x801E043C: lhu         $a0, 0x8($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X8);
    func_801E3C34_59FB44(rdram, ctx);
        goto after_8;
    // 0x801E043C: lhu         $a0, 0x8($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X8);
    after_8:
    // 0x801E0440: beq         $v0, $zero, L_801E04B4
    if (ctx->r2 == 0) {
        // 0x801E0444: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E04B4;
    }
    // 0x801E0444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0448: lbu         $t8, 0x90($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X90);
    // 0x801E044C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x801E0450: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0454: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E0458: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E045C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E0460: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E0464: lhu         $t0, 0x7DB2($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X7DB2);
    // 0x801E0468: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x801E046C: beq         $t1, $zero, L_801E04B4
    if (ctx->r9 == 0) {
        // 0x801E0470: nop
    
            goto L_801E04B4;
    }
    // 0x801E0470: nop

    // 0x801E0474: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E0478: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E047C: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0480: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    // 0x801E0484: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
    // 0x801E0488: sh          $zero, 0x30($t2)
    MEM_H(0X30, ctx->r10) = 0;
    // 0x801E048C: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0494: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x801E0498: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x801E049C: addiu       $t4, $t3, 0x200
    ctx->r12 = ADD32(ctx->r11, 0X200);
    // 0x801E04A0: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x801E04A4: jal         0x801DAD08
    // 0x801E04A8: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
    func_801DAD08_596C18(rdram, ctx);
        goto after_9;
    // 0x801E04A8: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
    after_9:
    // 0x801E04AC: b           L_801E04C0
    // 0x801E04B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E04C0;
    // 0x801E04B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E04B4:
    // 0x801E04B4: jal         0x801DAD08
    // 0x801E04B8: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_801DAD08_596C18(rdram, ctx);
        goto after_10;
    // 0x801E04B8: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_10:
L_801E04BC:
    // 0x801E04BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E04C0:
    // 0x801E04C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E04C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E04C8: jr          $ra
    // 0x801E04CC: nop

    TRACE_RETURN()
    return;
    // 0x801E04CC: nop

;}
RECOMP_FUNC void func_801F13B0_5AD2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F13B0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801F13B4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801F13B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F13BC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801F13C0: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801F13C4: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x801F13C8: addiu       $t8, $t8, 0x4FDC
    ctx->r24 = ADD32(ctx->r24, 0X4FDC);
    // 0x801F13CC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801F13D0: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801F13D4: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801F13D8: addiu       $t0, $sp, 0x50
    ctx->r8 = ADD32(ctx->r29, 0X50);
    // 0x801F13DC: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801F13E0: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x801F13E4: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x801F13E8: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x801F13EC: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x801F13F0: lw          $t2, 0xC($t8)
    ctx->r10 = MEM_W(ctx->r24, 0XC);
    // 0x801F13F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F13F8: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801F13FC: sw          $t2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r10;
    // 0x801F1400: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x801F1404: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801F1408: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x801F140C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801F1410: addu        $v1, $t0, $t4
    ctx->r3 = ADD32(ctx->r8, ctx->r12);
    // 0x801F1414: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x801F1418: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F141C: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801F1420: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x801F1424: addiu       $t2, $zero, 0x152
    ctx->r10 = ADD32(0, 0X152);
    // 0x801F1428: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F142C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F1430: addiu       $a2, $a2, 0xA4
    ctx->r6 = ADD32(ctx->r6, 0XA4);
    // 0x801F1434: or          $t5, $a2, $at
    ctx->r13 = ctx->r6 | ctx->r1;
    // 0x801F1438: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F143C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F1440: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F1444: or          $a2, $t5, $at
    ctx->r6 = ctx->r13 | ctx->r1;
    // 0x801F1448: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801F144C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F1450: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801F1454: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801F1458: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801F145C: lhu         $t1, 0x16($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X16);
    // 0x801F1460: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801F1464: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x801F1468: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x801F146C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801F1470: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801F1474: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801F1478: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    // 0x801F147C: jal         0x80034680
    // 0x801F1480: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801F1480: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    after_0:
    // 0x801F1484: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x801F1488: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x801F148C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x801F1490: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x801F1494: bne         $v1, $t4, L_801F14AC
    if (ctx->r3 != ctx->r12) {
        // 0x801F1498: sb          $t3, 0x5($a0)
        MEM_B(0X5, ctx->r4) = ctx->r11;
            goto L_801F14AC;
    }
    // 0x801F1498: sb          $t3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r11;
    // 0x801F149C: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x801F14A0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x801F14A4: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x801F14A8: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_801F14AC:
    // 0x801F14AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F14B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801F14B4: jr          $ra
    // 0x801F14B8: nop

    TRACE_RETURN()
    return;
    // 0x801F14B8: nop

;}
RECOMP_FUNC void func_801DB060_596F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB060: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801DB064: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DB068: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x801DB06C: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x801DB070: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x801DB074: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x801DB078: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801DB07C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801DB080: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801DB084: lbu         $t6, 0xCC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DB088: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801DB08C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DB090: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801DB094: lw          $t0, 0x3F34($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3F34);
    // 0x801DB098: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801DB09C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x801DB0A0: addiu       $t1, $t1, 0x3FF8
    ctx->r9 = ADD32(ctx->r9, 0X3FF8);
    // 0x801DB0A4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DB0A8: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801DB0AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801DB0B0: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x801DB0B4: addiu       $s3, $sp, 0x58
    ctx->r19 = ADD32(ctx->r29, 0X58);
    // 0x801DB0B8: lw          $s2, 0x18($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X18);
    // 0x801DB0BC: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x801DB0C0: lhu         $at, 0x4($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X4);
    // 0x801DB0C4: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x801DB0C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DB0CC: addiu       $s4, $s4, -0x2DF0
    ctx->r20 = ADD32(ctx->r20, -0X2DF0);
    // 0x801DB0D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801DB0D4: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x801DB0D8: sh          $at, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r1;
L_801DB0DC:
    // 0x801DB0DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB0E0: jal         0x801DB180
    // 0x801DB0E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801DB180_597090(rdram, ctx);
        goto after_0;
    // 0x801DB0E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x801DB0E8: lbu         $t5, 0x90($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X90);
    // 0x801DB0EC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801DB0F0: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x801DB0F4: addu        $t8, $s4, $t6
    ctx->r24 = ADD32(ctx->r20, ctx->r14);
    // 0x801DB0F8: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    // 0x801DB0FC: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x801DB100: beql        $t9, $zero, L_801DB114
    if (ctx->r25 == 0) {
        // 0x801DB104: addu        $v0, $s1, $s0
        ctx->r2 = ADD32(ctx->r17, ctx->r16);
            goto L_801DB114;
    }
    goto skip_0;
    // 0x801DB104: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
    skip_0:
    // 0x801DB108: b           L_801DB154
    // 0x801DB10C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
        goto L_801DB154;
    // 0x801DB10C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x801DB110: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
L_801DB114:
    // 0x801DB114: addiu       $a2, $v0, 0xD5
    ctx->r6 = ADD32(ctx->r2, 0XD5);
    // 0x801DB118: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x801DB11C: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x801DB120: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x801DB124: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x801DB128: addu        $t3, $t0, $s2
    ctx->r11 = ADD32(ctx->r8, ctx->r18);
    // 0x801DB12C: addu        $t1, $t3, $t2
    ctx->r9 = ADD32(ctx->r11, ctx->r10);
    // 0x801DB130: lbu         $a1, 0x4($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X4);
    // 0x801DB134: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x801DB138: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x801DB13C: addu        $t5, $s3, $t4
    ctx->r13 = ADD32(ctx->r19, ctx->r12);
    // 0x801DB140: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x801DB144: addiu       $a3, $v0, 0xD8
    ctx->r7 = ADD32(ctx->r2, 0XD8);
    // 0x801DB148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB14C: jal         0x801DB1D4
    // 0x801DB150: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_801DB1D4_5970E4(rdram, ctx);
        goto after_1;
    // 0x801DB150: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_1:
L_801DB154:
    // 0x801DB154: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801DB158: bne         $s0, $s5, L_801DB0DC
    if (ctx->r16 != ctx->r21) {
        // 0x801DB15C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801DB0DC;
    }
    // 0x801DB15C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DB160: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801DB164: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801DB168: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x801DB16C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x801DB170: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x801DB174: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x801DB178: jr          $ra
    // 0x801DB17C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801DB17C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801D9480_595390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9480: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D9484: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x801D9488: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801D948C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D9490: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D9494: lbu         $t6, 0x60($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X60);
    // 0x801D9498: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D949C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801D94A0: sb          $t6, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r14;
    // 0x801D94A4: lhu         $a0, 0x94($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X94);
    // 0x801D94A8: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x801D94AC: jal         0x80003F30
    // 0x801D94B0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80003F30_4B30(rdram, ctx);
        goto after_0;
    // 0x801D94B0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x801D94B4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D94B8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D94BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D94C0: lw          $a2, -0x39FC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X39FC);
    // 0x801D94C4: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x801D94C8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x801D94CC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x801D94D0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x801D94D4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x801D94D8: jal         0x8001D718
    // 0x801D94DC: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    func_8001D718_1E318(rdram, ctx);
        goto after_1;
    // 0x801D94DC: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    after_1:
    // 0x801D94E0: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D94E4: jal         0x80003A94
    // 0x801D94E8: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    func_80003A94_4694(rdram, ctx);
        goto after_2;
    // 0x801D94E8: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x801D94EC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D94F0: addiu       $v1, $v1, -0x2E40
    ctx->r3 = ADD32(ctx->r3, -0X2E40);
    // 0x801D94F4: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D94F8: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D94FC: sh          $v0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r2;
    // 0x801D9500: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x801D9504: jal         0x80003A94
    // 0x801D9508: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801D9508: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_3:
    // 0x801D950C: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x801D9510: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9514: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x801D9518: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x801D951C: lwc1        $f12, -0x2E3C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x801D9520: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9524: jal         0x80003A94
    // 0x801D9528: lwc1        $f14, -0x2E30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2E30);
    func_80003A94_4694(rdram, ctx);
        goto after_4;
    // 0x801D9528: lwc1        $f14, -0x2E30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2E30);
    after_4:
    // 0x801D952C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801D9530: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x801D9534: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x801D9538: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x801D953C: lhu         $t0, 0x6E($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X6E);
    // 0x801D9540: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x801D9544: subu        $t2, $v0, $t1
    ctx->r10 = SUB32(ctx->r2, ctx->r9);
    // 0x801D9548: sh          $t2, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r10;
    // 0x801D954C: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x801D9550: lbu         $t2, 0x39($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X39);
    // 0x801D9554: addiu       $t3, $a0, 0x4000
    ctx->r11 = ADD32(ctx->r4, 0X4000);
    // 0x801D9558: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x801D955C: beq         $t4, $zero, L_801D9630
    if (ctx->r12 == 0) {
        // 0x801D9560: sll         $t3, $t2, 3
        ctx->r11 = S32(ctx->r10 << 3);
            goto L_801D9630;
    }
    // 0x801D9560: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x801D9564: addu        $t5, $a0, $at
    ctx->r13 = ADD32(ctx->r4, ctx->r1);
    // 0x801D9568: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    // 0x801D956C: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x801D9570: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801D9574: addiu       $t0, $t0, -0x337C
    ctx->r8 = ADD32(ctx->r8, -0X337C);
    // 0x801D9578: negu        $t1, $t6
    ctx->r9 = SUB32(0, ctx->r14);
    // 0x801D957C: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
    // 0x801D9580: lbu         $t8, 0x39($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X39);
    // 0x801D9584: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x801D9588: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801D958C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x801D9590: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801D9594: lhu         $t2, 0x6($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X6);
    // 0x801D9598: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x801D959C: sh          $t3, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r11;
    // 0x801D95A0: lhu         $a1, 0x8($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X8);
    // 0x801D95A4: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x801D95A8: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x801D95AC: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801D95B0: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x801D95B4: beql        $at, $zero, L_801D95C8
    if (ctx->r1 == 0) {
        // 0x801D95B8: lhu         $a0, 0xA($v0)
        ctx->r4 = MEM_HU(ctx->r2, 0XA);
            goto L_801D95C8;
    }
    goto skip_0;
    // 0x801D95B8: lhu         $a0, 0xA($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA);
    skip_0:
    // 0x801D95BC: sh          $a1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r5;
    // 0x801D95C0: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x801D95C4: lhu         $a0, 0xA($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA);
L_801D95C8:
    // 0x801D95C8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x801D95CC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D95D0: slt         $at, $t7, $v1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D95D4: beql        $at, $zero, L_801D95E4
    if (ctx->r1 == 0) {
        // 0x801D95D8: lhu         $a2, 0xC($v0)
        ctx->r6 = MEM_HU(ctx->r2, 0XC);
            goto L_801D95E4;
    }
    goto skip_1;
    // 0x801D95D8: lhu         $a2, 0xC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XC);
    skip_1:
    // 0x801D95DC: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x801D95E0: lhu         $a2, 0xC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XC);
L_801D95E4:
    // 0x801D95E4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x801D95E8: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    // 0x801D95EC: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801D95F0: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D95F4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801D95F8: beq         $at, $zero, L_801D9618
    if (ctx->r1 == 0) {
        // 0x801D95FC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801D9618;
    }
    // 0x801D95FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801D9600: sh          $a2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r6;
    // 0x801D9604: lhu         $a0, 0xC($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC);
    // 0x801D9608: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x801D960C: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x801D9610: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801D9614: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_801D9618:
    // 0x801D9618: negu        $t0, $a1
    ctx->r8 = SUB32(0, ctx->r5);
    // 0x801D961C: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801D9620: beq         $at, $zero, L_801D96D0
    if (ctx->r1 == 0) {
        // 0x801D9624: negu        $t1, $a0
        ctx->r9 = SUB32(0, ctx->r4);
            goto L_801D96D0;
    }
    // 0x801D9624: negu        $t1, $a0
    ctx->r9 = SUB32(0, ctx->r4);
    // 0x801D9628: b           L_801D96D0
    // 0x801D962C: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
        goto L_801D96D0;
    // 0x801D962C: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
L_801D9630:
    // 0x801D9630: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x801D9634: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801D9638: addiu       $t4, $t4, -0x337C
    ctx->r12 = ADD32(ctx->r12, -0X337C);
    // 0x801D963C: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x801D9640: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x801D9644: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x801D9648: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x801D964C: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x801D9650: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x801D9654: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801D9658: beql        $at, $zero, L_801D966C
    if (ctx->r1 == 0) {
        // 0x801D965C: lhu         $a0, 0x2($v0)
        ctx->r4 = MEM_HU(ctx->r2, 0X2);
            goto L_801D966C;
    }
    goto skip_2;
    // 0x801D965C: lhu         $a0, 0x2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2);
    skip_2:
    // 0x801D9660: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x801D9664: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x801D9668: lhu         $a0, 0x2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2);
L_801D966C:
    // 0x801D966C: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x801D9670: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801D9674: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D9678: beql        $at, $zero, L_801D9688
    if (ctx->r1 == 0) {
        // 0x801D967C: lhu         $a2, 0x4($v0)
        ctx->r6 = MEM_HU(ctx->r2, 0X4);
            goto L_801D9688;
    }
    goto skip_3;
    // 0x801D967C: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    skip_3:
    // 0x801D9680: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x801D9684: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
L_801D9688:
    // 0x801D9688: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x801D968C: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    // 0x801D9690: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801D9694: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D9698: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x801D969C: beq         $at, $zero, L_801D96BC
    if (ctx->r1 == 0) {
        // 0x801D96A0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801D96BC;
    }
    // 0x801D96A0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801D96A4: sh          $a2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r6;
    // 0x801D96A8: lhu         $a0, 0x4($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X4);
    // 0x801D96AC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x801D96B0: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x801D96B4: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801D96B8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_801D96BC:
    // 0x801D96BC: negu        $t1, $a1
    ctx->r9 = SUB32(0, ctx->r5);
    // 0x801D96C0: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x801D96C4: beq         $at, $zero, L_801D96D0
    if (ctx->r1 == 0) {
        // 0x801D96C8: negu        $t2, $a0
        ctx->r10 = SUB32(0, ctx->r4);
            goto L_801D96D0;
    }
    // 0x801D96C8: negu        $t2, $a0
    ctx->r10 = SUB32(0, ctx->r4);
    // 0x801D96CC: sh          $t2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r10;
L_801D96D0:
    // 0x801D96D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D96D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D96D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801D96DC: jr          $ra
    // 0x801D96E0: nop

    TRACE_RETURN()
    return;
    // 0x801D96E0: nop

;}
RECOMP_FUNC void func_801EA434_5A6344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA434: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801EA438: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801EA43C: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801EA440: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x801EA444: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA448: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x801EA44C: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801EA450: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EA454: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    // 0x801EA458: lwc1        $f16, 0x6C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801EA45C: lwc1        $f10, 0xC4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC4);
    // 0x801EA460: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA464: swc1        $f18, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f18.u32l;
    // 0x801EA468: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801EA46C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EA470: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    // 0x801EA474: lwc1        $f16, 0x74($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801EA478: lwc1        $f10, 0xCC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XCC);
    // 0x801EA47C: lwc1        $f4, 0xC8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x801EA480: swc1        $f18, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f18.u32l;
    // 0x801EA484: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EA488: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801EA48C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA490: swc1        $f18, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->f18.u32l;
    // 0x801EA494: lwc1        $f4, 0xC4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC4);
    // 0x801EA498: swc1        $f8, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f8.u32l;
    // 0x801EA49C: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801EA4A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EA4A4: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x801EA4A8: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801EA4AC: lwc1        $f10, 0xC8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x801EA4B0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EA4B4: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x801EA4B8: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801EA4BC: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801EA4C0: lwc1        $f6, 0xCC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XCC);
    // 0x801EA4C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EA4C8: jr          $ra
    // 0x801EA4CC: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x801EA4CC: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_801F110C_5AD01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F110C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1114: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F1118: jal         0x801EEDF8
    // 0x801F111C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801EEDF8_5AAD08(rdram, ctx);
        goto after_0;
    // 0x801F111C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x801F1120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F1124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1128: jr          $ra
    // 0x801F112C: nop

    TRACE_RETURN()
    return;
    // 0x801F112C: nop

;}
RECOMP_FUNC void func_801EBC90_5A7BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBC90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EBC94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EBC98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EBC9C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EBCA0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EBCA4: jal         0x801EBCE8
    // 0x801EBCA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EBCE8_5A7BF8(rdram, ctx);
        goto after_0;
    // 0x801EBCA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801EBCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBCB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EBCB4: jr          $ra
    // 0x801EBCB8: nop

    TRACE_RETURN()
    return;
    // 0x801EBCB8: nop

;}
RECOMP_FUNC void func_801D46F8_590608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D46F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D46FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D4700: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801D4704: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801D4708: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801D470C: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x801D4710: lui         $t7, 0x0
    ctx->r15 = S32(0X0 << 16);
    // 0x801D4714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D4718: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x801D471C: addiu       $t6, $t6, 0xA0
    ctx->r14 = ADD32(ctx->r14, 0XA0);
    // 0x801D4720: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801D4724: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D4728: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x801D472C: jal         0x800148F0
    // 0x801D4730: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x801D4730: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801D4734: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D4738: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801D473C: jal         0x80001C00
    // 0x801D4740: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80001C00_2800(rdram, ctx);
        goto after_1;
    // 0x801D4740: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x801D4744: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801D4748: lui         $t8, 0x0
    ctx->r24 = S32(0X0 << 16);
    // 0x801D474C: addiu       $t8, $t8, 0x88
    ctx->r24 = ADD32(ctx->r24, 0X88);
    // 0x801D4750: lbu         $a1, 0xD3($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0XD3);
    // 0x801D4754: addu        $a0, $s0, $t8
    ctx->r4 = ADD32(ctx->r16, ctx->r24);
    // 0x801D4758: lui         $a3, 0x0
    ctx->r7 = S32(0X0 << 16);
    // 0x801D475C: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x801D4760: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x801D4764: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x801D4768: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x801D476C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801D4770: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x801D4774: addiu       $a3, $a3, 0x0
    ctx->r7 = ADD32(ctx->r7, 0X0);
    // 0x801D4778: subu        $t3, $t2, $a3
    ctx->r11 = SUB32(ctx->r10, ctx->r7);
    // 0x801D477C: subu        $t7, $t6, $a3
    ctx->r15 = SUB32(ctx->r14, ctx->r7);
    // 0x801D4780: addu        $v1, $t3, $s0
    ctx->r3 = ADD32(ctx->r11, ctx->r16);
    // 0x801D4784: addu        $a2, $t7, $s0
    ctx->r6 = ADD32(ctx->r15, ctx->r16);
    // 0x801D4788: subu        $t8, $a2, $v1
    ctx->r24 = SUB32(ctx->r6, ctx->r3);
    // 0x801D478C: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x801D4790: slti        $at, $t9, 0x1E
    ctx->r1 = SIGNED(ctx->r25) < 0X1E ? 1 : 0;
    // 0x801D4794: bne         $at, $zero, L_801D47A0
    if (ctx->r1 != 0) {
        // 0x801D4798: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801D47A0;
    }
    // 0x801D4798: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D479C: addiu       $a2, $v1, 0xF0
    ctx->r6 = ADD32(ctx->r3, 0XF0);
L_801D47A0:
    // 0x801D47A0: addiu       $a0, $a0, -0x3830
    ctx->r4 = ADD32(ctx->r4, -0X3830);
    // 0x801D47A4: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x801D47A8: beq         $at, $zero, L_801D47F8
    if (ctx->r1 == 0) {
        // 0x801D47AC: sb          $zero, 0x0($a0)
        MEM_B(0X0, ctx->r4) = 0;
            goto L_801D47F8;
    }
    // 0x801D47AC: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x801D47B0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D47B4: addiu       $a1, $a1, -0x3350
    ctx->r5 = ADD32(ctx->r5, -0X3350);
L_801D47B8:
    // 0x801D47B8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x801D47BC: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x801D47C0: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x801D47C4: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
    // 0x801D47C8: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x801D47CC: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x801D47D0: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x801D47D4: lwl         $t3, 0x4($v1)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r3, 0X4);
    // 0x801D47D8: lwr         $t3, 0x7($v1)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r3, 0X7);
    // 0x801D47DC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x801D47E0: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x801D47E4: swl         $t3, 0x4($t1)
    do_swl(rdram, 0X4, ctx->r9, ctx->r11);
    // 0x801D47E8: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x801D47EC: swr         $t3, 0x7($t1)
    do_swr(rdram, 0X7, ctx->r9, ctx->r11);
    // 0x801D47F0: bne         $at, $zero, L_801D47B8
    if (ctx->r1 != 0) {
        // 0x801D47F4: sb          $t4, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r12;
            goto L_801D47B8;
    }
    // 0x801D47F4: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_801D47F8:
    // 0x801D47F8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801D47FC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801D4800: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801D4804: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801D4808: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801D480C: jal         0x80014B74
    // 0x801D4810: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_2;
    // 0x801D4810: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x801D4814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4818: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D481C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D4820: jr          $ra
    // 0x801D4824: nop

    TRACE_RETURN()
    return;
    // 0x801D4824: nop

;}
RECOMP_FUNC void func_801F5C4C_5B1B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5C4C: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x801F5C50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F5C54: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801F5C58: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801F5C5C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801F5C60: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801F5C64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F5C68: lw          $t9, 0x18($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X18);
    // 0x801F5C6C: addiu       $s4, $sp, 0x48
    ctx->r20 = ADD32(ctx->r29, 0X48);
    // 0x801F5C70: or          $t0, $s4, $zero
    ctx->r8 = ctx->r20 | 0;
    // 0x801F5C74: addiu       $t8, $t9, 0x90
    ctx->r24 = ADD32(ctx->r25, 0X90);
L_801F5C78:
    // 0x801F5C78: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801F5C7C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801F5C80: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801F5C84: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x801F5C88: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x801F5C8C: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x801F5C90: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x801F5C94: bne         $t9, $t8, L_801F5C78
    if (ctx->r25 != ctx->r24) {
        // 0x801F5C98: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_801F5C78;
    }
    // 0x801F5C98: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x801F5C9C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801F5CA0: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x801F5CA4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x801F5CA8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801F5CAC: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x801F5CB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F5CB4: beq         $v1, $zero, L_801F5CC4
    if (ctx->r3 == 0) {
        // 0x801F5CB8: sw          $t8, 0x4($t0)
        MEM_W(0X4, ctx->r8) = ctx->r24;
            goto L_801F5CC4;
    }
    // 0x801F5CB8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x801F5CBC: bnel        $v1, $at, L_801F5CD4
    if (ctx->r3 != ctx->r1) {
        // 0x801F5CC0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801F5CD4;
    }
    goto skip_0;
    // 0x801F5CC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
L_801F5CC4:
    // 0x801F5CC4: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801F5CC8: lw          $v0, 0x98($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X98);
    // 0x801F5CCC: sw          $v0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r2;
    // 0x801F5CD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_801F5CD4:
    // 0x801F5CD4: bne         $v1, $at, L_801F5CE4
    if (ctx->r3 != ctx->r1) {
        // 0x801F5CD8: lw          $v0, 0xE4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XE4);
            goto L_801F5CE4;
    }
    // 0x801F5CD8: lw          $v0, 0xE4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE4);
    // 0x801F5CDC: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801F5CE0: lw          $v0, 0x9C($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X9C);
L_801F5CE4:
    // 0x801F5CE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F5CE8: bne         $v1, $at, L_801F5CF8
    if (ctx->r3 != ctx->r1) {
        // 0x801F5CEC: addiu       $s1, $s1, 0x52F0
        ctx->r17 = ADD32(ctx->r17, 0X52F0);
            goto L_801F5CF8;
    }
    // 0x801F5CEC: addiu       $s1, $s1, 0x52F0
    ctx->r17 = ADD32(ctx->r17, 0X52F0);
    // 0x801F5CF0: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801F5CF4: lw          $v0, 0xA0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XA0);
L_801F5CF8:
    // 0x801F5CF8: beq         $v0, $zero, L_801F5D50
    if (ctx->r2 == 0) {
        // 0x801F5CFC: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_801F5D50;
    }
    // 0x801F5CFC: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x801F5D00: lw          $s0, 0x18($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X18);
    // 0x801F5D04: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x801F5D08: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801F5D0C: addiu       $t5, $t5, 0x5308
    ctx->r13 = ADD32(ctx->r13, 0X5308);
    // 0x801F5D10: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x801F5D14: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x801F5D18: addiu       $s3, $s3, 0x5308
    ctx->r19 = ADD32(ctx->r19, 0X5308);
    // 0x801F5D1C: addu        $s2, $t4, $t5
    ctx->r18 = ADD32(ctx->r12, ctx->r13);
    // 0x801F5D20: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801F5D24:
    // 0x801F5D24: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801F5D28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F5D2C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x801F5D30: jal         0x801E5570
    // 0x801F5D34: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    func_801E5570_5A1480(rdram, ctx);
        goto after_0;
    // 0x801F5D34: lw          $a3, 0x0($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X0);
    after_0:
    // 0x801F5D38: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801F5D3C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x801F5D40: beql        $s0, $zero, L_801F5D54
    if (ctx->r16 == 0) {
        // 0x801F5D44: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801F5D54;
    }
    goto skip_1;
    // 0x801F5D44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801F5D48: bne         $s1, $s3, L_801F5D24
    if (ctx->r17 != ctx->r19) {
        // 0x801F5D4C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_801F5D24;
    }
    // 0x801F5D4C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_801F5D50:
    // 0x801F5D50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F5D54:
    // 0x801F5D54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F5D58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5D5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801F5D60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801F5D64: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801F5D68: jr          $ra
    // 0x801F5D6C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    TRACE_RETURN()
    return;
    // 0x801F5D6C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_801DD498_5993A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD49C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD4A0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD4A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DD4A8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801DD4AC: lbu         $v0, 0x84($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X84);
    // 0x801DD4B0: beq         $v0, $zero, L_801DD4C8
    if (ctx->r2 == 0) {
        // 0x801DD4B4: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_801DD4C8;
    }
    // 0x801DD4B4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801DD4B8: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x801DD4BC: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801DD4C0: jal         0x8001C3E0
    // 0x801DD4C4: lw          $a2, 0x4048($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4048);
    func_8001C3E0_1CFE0(rdram, ctx);
        goto after_0;
    // 0x801DD4C4: lw          $a2, 0x4048($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4048);
    after_0:
L_801DD4C8:
    // 0x801DD4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD4CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD4D0: jr          $ra
    // 0x801DD4D4: nop

    TRACE_RETURN()
    return;
    // 0x801DD4D4: nop

;}
RECOMP_FUNC void func_801E2EB0_59EDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2EB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2EB8: jal         0x801E2EF0
    // 0x801E2EBC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_801E2EF0_59EE00(rdram, ctx);
        goto after_0;
    // 0x801E2EBC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x801E2EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2EC8: jr          $ra
    // 0x801E2ECC: nop

    TRACE_RETURN()
    return;
    // 0x801E2ECC: nop

;}
RECOMP_FUNC void func_801DD988_599898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD98C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DD994: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD998: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801DD99C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DD9A0: lw          $v0, 0x38($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X38);
    // 0x801DD9A4: bnel        $v0, $zero, L_801DD9C4
    if (ctx->r2 != 0) {
        // 0x801DD9A8: lhu         $a1, 0x16($v0)
        ctx->r5 = MEM_HU(ctx->r2, 0X16);
            goto L_801DD9C4;
    }
    goto skip_0;
    // 0x801DD9A8: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    skip_0:
    // 0x801DD9AC: sb          $zero, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = 0;
    // 0x801DD9B0: jal         0x801DACDC
    // 0x801DD9B4: sb          $zero, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801DD9B4: sb          $zero, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = 0;
    after_0:
    // 0x801DD9B8: b           L_801DD9FC
    // 0x801DD9BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DD9FC;
    // 0x801DD9BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD9C0: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
L_801DD9C4:
    // 0x801DD9C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DD9C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801DD9CC: addiu       $t7, $a1, 0x200
    ctx->r15 = ADD32(ctx->r5, 0X200);
    // 0x801DD9D0: jal         0x801DB3E4
    // 0x801DD9D4: andi        $a1, $t7, 0x3FF
    ctx->r5 = ctx->r15 & 0X3FF;
    func_801DB3E4_5972F4(rdram, ctx);
        goto after_1;
    // 0x801DD9D4: andi        $a1, $t7, 0x3FF
    ctx->r5 = ctx->r15 & 0X3FF;
    after_1:
    // 0x801DD9D8: beq         $v0, $zero, L_801DD9F8
    if (ctx->r2 == 0) {
        // 0x801DD9DC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DD9F8;
    }
    // 0x801DD9DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DD9E0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801DD9E4: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x801DD9E8: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x801DD9EC: sb          $t9, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = ctx->r25;
    // 0x801DD9F0: jal         0x801DACDC
    // 0x801DD9F4: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DD9F4: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    after_2:
L_801DD9F8:
    // 0x801DD9F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DD9FC:
    // 0x801DD9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDA00: jr          $ra
    // 0x801DDA04: nop

    TRACE_RETURN()
    return;
    // 0x801DDA04: nop

;}
RECOMP_FUNC void func_801EB69C_5A75AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB69C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB6A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB6A4: jal         0x801EB6BC
    // 0x801EB6A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB6A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB6B4: jr          $ra
    // 0x801EB6B8: nop

    TRACE_RETURN()
    return;
    // 0x801EB6B8: nop

;}
RECOMP_FUNC void func_801D5FA8_591EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5FA8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D5FAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D5FB0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801D5FB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5FB8: lwc1        $f2, -0x2E34($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D5FBC: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D5FC0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D5FC4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801D5FC8: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x801D5FCC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D5FD0: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D5FD4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801D5FD8: bc1tl       L_801D607C
    if (c1cs) {
        // 0x801D5FDC: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_801D607C;
    }
    goto skip_0;
    // 0x801D5FDC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x801D5FE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5FE4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D5FE8: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x801D5FEC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x801D5FF0: lwc1        $f8, 0x74($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D5FF4: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x801D5FF8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801D5FFC: lhu         $t6, 0xB6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XB6);
    // 0x801D6000: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D6004: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D6008: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x801D600C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x801D6010: bgez        $t6, L_801D6024
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D6014: cvt.s.w     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
            goto L_801D6024;
    }
    // 0x801D6014: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D6018: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D601C: nop

    // 0x801D6020: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
L_801D6024:
    // 0x801D6024: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D6028: nop

    // 0x801D602C: bc1fl       L_801D6040
    if (!c1cs) {
        // 0x801D6030: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_801D6040;
    }
    goto skip_1;
    // 0x801D6030: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_1:
    // 0x801D6034: b           L_801D6054
    // 0x801D6038: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
        goto L_801D6054;
    // 0x801D6038: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801D603C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_801D6040:
    // 0x801D6040: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801D6044: nop

    // 0x801D6048: bc1f        L_801D6054
    if (!c1cs) {
        // 0x801D604C: nop
    
            goto L_801D6054;
    }
    // 0x801D604C: nop

    // 0x801D6050: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
L_801D6054:
    // 0x801D6054: jal         0x8001D5B8
    // 0x801D6058: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_0;
    // 0x801D6058: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_0:
    // 0x801D605C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D6060: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801D6064: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x801D6068: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D606C: jal         0x801D56D0
    // 0x801D6070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_1;
    // 0x801D6070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x801D6074: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D6078: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801D607C:
    // 0x801D607C: jal         0x801D55E0
    // 0x801D6080: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    func_801D55E0_5914F0(rdram, ctx);
        goto after_2;
    // 0x801D6080: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    after_2:
    // 0x801D6084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D6088: lhu         $v0, 0x2E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2E);
    // 0x801D608C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D6090: jr          $ra
    // 0x801D6094: nop

    TRACE_RETURN()
    return;
    // 0x801D6094: nop

;}
RECOMP_FUNC void func_801D8290_5941A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8290: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x801D8294: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D8298: lw          $v1, -0x39EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39EC);
    // 0x801D829C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D82A0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801D82A4: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x801D82A8: sh          $zero, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = 0;
    // 0x801D82AC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801D82B0: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D82B4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D82B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D82BC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D82C0: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x801D82C4: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D82C8: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801D82CC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D82D0: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801D82D4: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x801D82D8: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801D82DC: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D82E0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D82E4: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x801D82E8: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x801D82EC: lwc1        $f14, 0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801D82F0: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801D82F4: jal         0x80029E08
    // 0x801D82F8: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x801D82F8: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D82FC: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x801D8300: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x801D8304: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D8308: lbu         $t7, 0xA3($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XA3);
    // 0x801D830C: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D8310: beq         $t7, $zero, L_801D83D0
    if (ctx->r15 == 0) {
        // 0x801D8314: nop
    
            goto L_801D83D0;
    }
    // 0x801D8314: nop

    // 0x801D8318: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D831C: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D8320: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D8324: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D8328: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D832C: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D8330: bne         $v0, $zero, L_801D83B8
    if (ctx->r2 != 0) {
        // 0x801D8334: sqrt.s      $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
            goto L_801D83B8;
    }
    // 0x801D8334: sqrt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
    // 0x801D8338: jal         0x8001D394
    // 0x801D833C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801D833C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    after_1:
    // 0x801D8340: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D8344: lw          $v1, -0x39EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39EC);
    // 0x801D8348: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D834C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D8350: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D8354: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x801D8358: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x801D835C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D8360: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D8364: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D8368: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D836C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801D8370: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801D8374: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801D8378: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D837C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801D8380: jal         0x8002C9D4
    // 0x801D8384: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_2;
    // 0x801D8384: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801D8388: lh          $t8, 0x6C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6C);
    // 0x801D838C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D8390: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D8394: bnel        $t8, $at, L_801D83BC
    if (ctx->r24 != ctx->r1) {
        // 0x801D8398: lhu         $t0, 0x7C($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X7C);
            goto L_801D83BC;
    }
    goto skip_0;
    // 0x801D8398: lhu         $t0, 0x7C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7C);
    skip_0:
    // 0x801D839C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D83A0: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801D83A4: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x801D83A8: nop

    // 0x801D83AC: bc1fl       L_801D83BC
    if (!c1cs) {
        // 0x801D83B0: lhu         $t0, 0x7C($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X7C);
            goto L_801D83BC;
    }
    goto skip_1;
    // 0x801D83B0: lhu         $t0, 0x7C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7C);
    skip_1:
    // 0x801D83B4: sh          $t9, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r25;
L_801D83B8:
    // 0x801D83B8: lhu         $t0, 0x7C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7C);
L_801D83BC:
    // 0x801D83BC: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x801D83C0: beql        $t0, $zero, L_801D8598
    if (ctx->r8 == 0) {
        // 0x801D83C4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801D8598;
    }
    goto skip_2;
    // 0x801D83C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801D83C8: b           L_801D8594
    // 0x801D83CC: sb          $zero, 0xA3($t1)
    MEM_B(0XA3, ctx->r9) = 0;
        goto L_801D8594;
    // 0x801D83CC: sb          $zero, 0xA3($t1)
    MEM_B(0XA3, ctx->r9) = 0;
L_801D83D0:
    // 0x801D83D0: bne         $v0, $zero, L_801D8594
    if (ctx->r2 != 0) {
        // 0x801D83D4: addiu       $a0, $sp, 0x94
        ctx->r4 = ADD32(ctx->r29, 0X94);
            goto L_801D8594;
    }
    // 0x801D83D4: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x801D83D8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D83DC: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D83E0: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x801D83E4: jal         0x8001D460
    // 0x801D83E8: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    func_8001D460_1E060(rdram, ctx);
        goto after_3;
    // 0x801D83E8: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    after_3:
    // 0x801D83EC: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x801D83F0: jal         0x80003DC0
    // 0x801D83F4: lhu         $a0, 0x1A($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X1A);
    func_80003DC0_49C0(rdram, ctx);
        goto after_4;
    // 0x801D83F4: lhu         $a0, 0x1A($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X1A);
    after_4:
    // 0x801D83F8: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x801D83FC: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x801D8400: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D8404: lwc1        $f2, 0x1C($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x801D8408: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801D840C: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801D8410: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801D8414: sub.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x801D8418: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D841C: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D8420: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x801D8424: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x801D8428: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x801D842C: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D8430: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x801D8434: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    // 0x801D8438: jal         0x8001D5B8
    // 0x801D843C: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_5;
    // 0x801D843C: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x801D8440: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D8444: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D8448: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D844C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D8450: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x801D8454: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D8458: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D845C: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D8460: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D8464: jal         0x8001D394
    // 0x801D8468: sqrt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
    func_8001D394_1DF94(rdram, ctx);
        goto after_6;
    // 0x801D8468: sqrt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = sqrtf(ctx->f0.fl);
    after_6:
    // 0x801D846C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D8470: lw          $v1, -0x39EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39EC);
    // 0x801D8474: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D8478: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D847C: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D8480: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x801D8484: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x801D8488: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D848C: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D8490: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D8494: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D8498: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801D849C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801D84A0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801D84A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801D84A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D84AC: jal         0x8002C9D4
    // 0x801D84B0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_7;
    // 0x801D84B0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x801D84B4: lh          $t2, 0x6C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6C);
    // 0x801D84B8: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D84BC: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D84C0: bne         $t2, $at, L_801D84E8
    if (ctx->r10 != ctx->r1) {
        // 0x801D84C4: lwc1        $f8, 0x80($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
            goto L_801D84E8;
    }
    // 0x801D84C4: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801D84C8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D84CC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801D84D0: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x801D84D4: nop

    // 0x801D84D8: bc1fl       L_801D84EC
    if (!c1cs) {
        // 0x801D84DC: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801D84EC;
    }
    goto skip_3;
    // 0x801D84DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_3:
    // 0x801D84E0: b           L_801D8594
    // 0x801D84E4: sh          $t3, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r11;
        goto L_801D8594;
    // 0x801D84E4: sh          $t3, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r11;
L_801D84E8:
    // 0x801D84E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_801D84EC:
    // 0x801D84EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D84F0: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801D84F4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D84F8: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801D84FC: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D8500: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x801D8504: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x801D8508: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D850C: jal         0x8001D5B8
    // 0x801D8510: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_8;
    // 0x801D8510: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x801D8514: jal         0x8001D394
    // 0x801D8518: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    func_8001D394_1DF94(rdram, ctx);
        goto after_9;
    // 0x801D8518: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    after_9:
    // 0x801D851C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D8520: lw          $v1, -0x39EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39EC);
    // 0x801D8524: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D8528: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D852C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D8530: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x801D8534: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x801D8538: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D853C: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D8540: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D8544: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D8548: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801D854C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801D8550: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801D8554: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801D8558: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801D855C: jal         0x8002C9D4
    // 0x801D8560: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_10;
    // 0x801D8560: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x801D8564: lh          $t4, 0x6C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6C);
    // 0x801D8568: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D856C: lwc1        $f0, 0x70($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D8570: bnel        $t4, $at, L_801D8598
    if (ctx->r12 != ctx->r1) {
        // 0x801D8574: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801D8598;
    }
    goto skip_4;
    // 0x801D8574: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x801D8578: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D857C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D8580: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x801D8584: nop

    // 0x801D8588: bc1fl       L_801D8598
    if (!c1cs) {
        // 0x801D858C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801D8598;
    }
    goto skip_5;
    // 0x801D858C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x801D8590: sh          $t5, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r13;
L_801D8594:
    // 0x801D8594: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D8598:
    // 0x801D8598: lb          $v0, 0x7D($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X7D);
    // 0x801D859C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801D85A0: jr          $ra
    // 0x801D85A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x801D85A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_801DE4BC_59A3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE4BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE4C4: jal         0x801E3AC0
    // 0x801DE4C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE4C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE4D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE4D4: jr          $ra
    // 0x801DE4D8: nop

    TRACE_RETURN()
    return;
    // 0x801DE4D8: nop

;}
RECOMP_FUNC void func_801D2B58_58EA68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2B60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D2B64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D2B68: jal         0x801D2D10
    // 0x801D2B6C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_801D2D10_58EC20(rdram, ctx);
        goto after_0;
    // 0x801D2B6C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_0:
    // 0x801D2B70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D2B74: jal         0x801D2C88
    // 0x801D2B78: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801D2C88_58EB98(rdram, ctx);
        goto after_1;
    // 0x801D2B78: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801D2B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D2B84: jr          $ra
    // 0x801D2B88: nop

    TRACE_RETURN()
    return;
    // 0x801D2B88: nop

;}
RECOMP_FUNC void func_801D85B0_5944C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D85B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D85B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D85B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D85BC: lw          $a1, 0x2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C);
    // 0x801D85C0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D85C4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D85C8: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x801D85CC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801D85D0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801D85D4: jal         0x801D8F94
    // 0x801D85D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D8F94_594EA4(rdram, ctx);
        goto after_0;
    // 0x801D85D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D85DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801D85E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D85E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D85E8: lbu         $t9, 0x64($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X64);
    // 0x801D85EC: bnel        $t9, $zero, L_801D8628
    if (ctx->r25 != 0) {
        // 0x801D85F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D8628;
    }
    goto skip_0;
    // 0x801D85F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D85F4: jal         0x801D896C
    // 0x801D85F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D896C_59487C(rdram, ctx);
        goto after_1;
    // 0x801D85F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x801D85FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D8600: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8604: addiu       $v0, $v0, -0x2E5E
    ctx->r2 = ADD32(ctx->r2, -0X2E5E);
    // 0x801D8608: lhu         $t0, 0x5C($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X5C);
    // 0x801D860C: beql        $t0, $zero, L_801D8628
    if (ctx->r8 == 0) {
        // 0x801D8610: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D8628;
    }
    goto skip_1;
    // 0x801D8610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801D8614: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x801D8618: sb          $t2, 0x98($a0)
    MEM_B(0X98, ctx->r4) = ctx->r10;
    // 0x801D861C: jal         0x801D90D8
    // 0x801D8620: sb          $t2, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r10;
    func_801D90D8_594FE8(rdram, ctx);
        goto after_2;
    // 0x801D8620: sb          $t2, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r10;
    after_2:
    // 0x801D8624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D8628:
    // 0x801D8628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D862C: jr          $ra
    // 0x801D8630: nop

    TRACE_RETURN()
    return;
    // 0x801D8630: nop

;}
RECOMP_FUNC void func_801E5788_5A1698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5788: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E578C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E5790: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E5794: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5798: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801E579C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E57A0: lw          $v1, 0x7C($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X7C);
    // 0x801E57A4: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801E57A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E57AC: beq         $v1, $zero, L_801E57BC
    if (ctx->r3 == 0) {
        // 0x801E57B0: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801E57BC;
    }
    // 0x801E57B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E57B4: b           L_801E57BC
    // 0x801E57B8: lhu         $v0, 0x5C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X5C);
        goto L_801E57BC;
    // 0x801E57B8: lhu         $v0, 0x5C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X5C);
L_801E57BC:
    // 0x801E57BC: beql        $a1, $v0, L_801E57D0
    if (ctx->r5 == ctx->r2) {
        // 0x801E57C0: lw          $v0, 0x18($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X18);
            goto L_801E57D0;
    }
    goto skip_0;
    // 0x801E57C0: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    skip_0:
    // 0x801E57C4: b           L_801E5A10
    // 0x801E57C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5A10;
    // 0x801E57C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E57CC: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
L_801E57D0:
    // 0x801E57D0: lwc1        $f12, 0xC($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E57D4: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E57D8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801E57DC: nop

    // 0x801E57E0: bc1fl       L_801E57F8
    if (!c1cs) {
        // 0x801E57E4: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_801E57F8;
    }
    goto skip_1;
    // 0x801E57E4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x801E57E8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x801E57EC: b           L_801E57F8
    // 0x801E57F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801E57F8;
    // 0x801E57F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801E57F4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_801E57F8:
    // 0x801E57F8: ldc1        $f6, -0x4A80($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4A80);
    // 0x801E57FC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E5800: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801E5804: nop

    // 0x801E5808: bc1tl       L_801E581C
    if (c1cs) {
        // 0x801E580C: lwc1        $f8, 0x8($t0)
        ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
            goto L_801E581C;
    }
    goto skip_2;
    // 0x801E580C: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    skip_2:
    // 0x801E5810: b           L_801E5A10
    // 0x801E5814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5A10;
    // 0x801E5814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E5818: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
L_801E581C:
    // 0x801E581C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E5820: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x801E5824: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x801E5828: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801E582C: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x801E5830: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x801E5834: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E5838: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E583C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801E5840: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x801E5844: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E5848: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801E584C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E5850: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801E5854: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5858: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E585C: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E5860: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801E5864: jal         0x80033A3C
    // 0x801E5868: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80033A3C_3463C(rdram, ctx);
        goto after_0;
    // 0x801E5868: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801E586C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E5870: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E5874: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801E5878: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E587C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801E5880: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E5884: bc1fl       L_801E5898
    if (!c1cs) {
        // 0x801E5888: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801E5898;
    }
    goto skip_3;
    // 0x801E5888: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_3:
    // 0x801E588C: b           L_801E5898
    // 0x801E5890: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801E5898;
    // 0x801E5890: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801E5894: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801E5898:
    // 0x801E5898: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801E589C: nop

    // 0x801E58A0: bc1fl       L_801E58E0
    if (!c1cs) {
        // 0x801E58A4: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_801E58E0;
    }
    goto skip_4;
    // 0x801E58A4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_4:
    // 0x801E58A8: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x801E58AC: nop

    // 0x801E58B0: bc1fl       L_801E58C4
    if (!c1cs) {
        // 0x801E58B4: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801E58C4;
    }
    goto skip_5;
    // 0x801E58B4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_5:
    // 0x801E58B8: b           L_801E58C4
    // 0x801E58BC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801E58C4;
    // 0x801E58BC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801E58C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E58C4:
    // 0x801E58C4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801E58C8: nop

    // 0x801E58CC: bc1fl       L_801E58E0
    if (!c1cs) {
        // 0x801E58D0: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_801E58E0;
    }
    goto skip_6;
    // 0x801E58D0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_6:
    // 0x801E58D4: b           L_801E5A10
    // 0x801E58D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5A10;
    // 0x801E58D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E58DC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
L_801E58E0:
    // 0x801E58E0: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E58E4: lui         $at, 0x4178
    ctx->r1 = S32(0X4178 << 16);
    // 0x801E58E8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x801E58EC: bc1fl       L_801E5900
    if (!c1cs) {
        // 0x801E58F0: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801E5900;
    }
    goto skip_7;
    // 0x801E58F0: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_7:
    // 0x801E58F4: b           L_801E5900
    // 0x801E58F8: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801E5900;
    // 0x801E58F8: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801E58FC: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801E5900:
    // 0x801E5900: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801E5904: nop

    // 0x801E5908: bc1fl       L_801E5948
    if (!c1cs) {
        // 0x801E590C: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801E5948;
    }
    goto skip_8;
    // 0x801E590C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_8:
    // 0x801E5910: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x801E5914: nop

    // 0x801E5918: bc1fl       L_801E592C
    if (!c1cs) {
        // 0x801E591C: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801E592C;
    }
    goto skip_9;
    // 0x801E591C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_9:
    // 0x801E5920: b           L_801E592C
    // 0x801E5924: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801E592C;
    // 0x801E5924: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801E5928: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E592C:
    // 0x801E592C: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801E5930: nop

    // 0x801E5934: bc1fl       L_801E5948
    if (!c1cs) {
        // 0x801E5938: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801E5948;
    }
    goto skip_10;
    // 0x801E5938: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_10:
    // 0x801E593C: b           L_801E5A10
    // 0x801E5940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5A10;
    // 0x801E5940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E5944: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801E5948:
    // 0x801E5948: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801E594C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E5950: jal         0x801E5A20
    // 0x801E5954: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_801E5A20_5A1930(rdram, ctx);
        goto after_1;
    // 0x801E5954: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x801E5958: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E595C: beq         $v0, $zero, L_801E5988
    if (ctx->r2 == 0) {
        // 0x801E5960: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801E5988;
    }
    // 0x801E5960: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E5964: beq         $v0, $at, L_801E59D0
    if (ctx->r2 == ctx->r1) {
        // 0x801E5968: lwc1        $f16, 0x3C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_801E59D0;
    }
    // 0x801E5968: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E596C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E5970: beq         $v0, $at, L_801E5988
    if (ctx->r2 == ctx->r1) {
        // 0x801E5974: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E5988;
    }
    // 0x801E5974: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E5978: beql        $v0, $at, L_801E59D4
    if (ctx->r2 == ctx->r1) {
        // 0x801E597C: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_801E59D4;
    }
    goto skip_11;
    // 0x801E597C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_11:
    // 0x801E5980: b           L_801E5A10
    // 0x801E5984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5A10;
    // 0x801E5984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E5988:
    // 0x801E5988: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E598C: lui         $at, 0x40B0
    ctx->r1 = S32(0X40B0 << 16);
    // 0x801E5990: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E5994: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x801E5998: nop

    // 0x801E599C: bc1fl       L_801E59B0
    if (!c1cs) {
        // 0x801E59A0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801E59B0;
    }
    goto skip_12;
    // 0x801E59A0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_12:
    // 0x801E59A4: b           L_801E59B0
    // 0x801E59A8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801E59B0;
    // 0x801E59A8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801E59AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E59B0:
    // 0x801E59B0: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x801E59B4: nop

    // 0x801E59B8: bc1f        L_801E59C8
    if (!c1cs) {
        // 0x801E59BC: nop
    
            goto L_801E59C8;
    }
    // 0x801E59BC: nop

    // 0x801E59C0: b           L_801E5A10
    // 0x801E59C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E5A10;
    // 0x801E59C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E59C8:
    // 0x801E59C8: b           L_801E5A10
    // 0x801E59CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5A10;
    // 0x801E59CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E59D0:
    // 0x801E59D0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
L_801E59D4:
    // 0x801E59D4: lui         $at, 0x40B0
    ctx->r1 = S32(0X40B0 << 16);
    // 0x801E59D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E59DC: bc1fl       L_801E59F0
    if (!c1cs) {
        // 0x801E59E0: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801E59F0;
    }
    goto skip_13;
    // 0x801E59E0: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_13:
    // 0x801E59E4: b           L_801E59F0
    // 0x801E59E8: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801E59F0;
    // 0x801E59E8: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801E59EC: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801E59F0:
    // 0x801E59F0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801E59F4: nop

    // 0x801E59F8: bc1f        L_801E5A08
    if (!c1cs) {
        // 0x801E59FC: nop
    
            goto L_801E5A08;
    }
    // 0x801E59FC: nop

    // 0x801E5A00: b           L_801E5A10
    // 0x801E5A04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E5A10;
    // 0x801E5A04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E5A08:
    // 0x801E5A08: b           L_801E5A10
    // 0x801E5A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5A10;
    // 0x801E5A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E5A10:
    // 0x801E5A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5A14: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E5A18: jr          $ra
    // 0x801E5A1C: nop

    TRACE_RETURN()
    return;
    // 0x801E5A1C: nop

;}
RECOMP_FUNC void func_801F3510_5AF420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3510: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F3514: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F3518: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F351C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801F3520: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801F3524: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801F3528: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F352C: beq         $v0, $zero, L_801F3548
    if (ctx->r2 == 0) {
        // 0x801F3530: lw          $t0, 0x18($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X18);
            goto L_801F3548;
    }
    // 0x801F3530: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x801F3534: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F3538: beq         $v0, $at, L_801F3634
    if (ctx->r2 == ctx->r1) {
        // 0x801F353C: nop
    
            goto L_801F3634;
    }
    // 0x801F353C: nop

    // 0x801F3540: b           L_801F364C
    // 0x801F3544: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801F364C;
    // 0x801F3544: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F3548:
    // 0x801F3548: lhu         $t6, 0x68($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X68);
    // 0x801F354C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F3550: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801F3554: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F3558: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801F355C: bne         $t8, $zero, L_801F3604
    if (ctx->r24 != 0) {
        // 0x801F3560: sh          $t7, 0x68($s0)
        MEM_H(0X68, ctx->r16) = ctx->r15;
            goto L_801F3604;
    }
    // 0x801F3560: sh          $t7, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r15;
    // 0x801F3564: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F3568: ldc1        $f2, -0x3F08($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X3F08);
    // 0x801F356C: sh          $t9, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r25;
    // 0x801F3570: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F3574: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x801F3578: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F357C: ldc1        $f8, -0x3F00($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3F00);
    // 0x801F3580: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F3584: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F3588: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801F358C: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x801F3590: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F3594: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x801F3598: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F359C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F35A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801F35A4: div.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x801F35A8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801F35AC: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x801F35B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F35B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F35B8: div.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x801F35BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F35C0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F35C4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801F35C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801F35CC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801F35D0: jal         0x801F2CD0
    // 0x801F35D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_801F2CD0_5AEBE0(rdram, ctx);
        goto after_0;
    // 0x801F35D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801F35D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F35DC: beq         $v0, $zero, L_801F3604
    if (ctx->r2 == 0) {
        // 0x801F35E0: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_801F3604;
    }
    // 0x801F35E0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801F35E4: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x801F35E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F35EC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F35F0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x801F35F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F35F8: jal         0x801EE530
    // 0x801F35FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801EE530_5AA440(rdram, ctx);
        goto after_1;
    // 0x801F35FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x801F3600: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_801F3604:
    // 0x801F3604: lbu         $t2, 0xCC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XCC);
    // 0x801F3608: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x801F360C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F3610: bnel        $t2, $at, L_801F3628
    if (ctx->r10 != ctx->r1) {
        // 0x801F3614: lbu         $t4, 0x60($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X60);
            goto L_801F3628;
    }
    goto skip_0;
    // 0x801F3614: lbu         $t4, 0x60($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X60);
    skip_0:
    // 0x801F3618: lbu         $t3, -0x3594($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3594);
    // 0x801F361C: beql        $t3, $zero, L_801F364C
    if (ctx->r11 == 0) {
        // 0x801F3620: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F364C;
    }
    goto skip_1;
    // 0x801F3620: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x801F3624: lbu         $t4, 0x60($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X60);
L_801F3628:
    // 0x801F3628: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801F362C: b           L_801F3648
    // 0x801F3630: sb          $t5, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r13;
        goto L_801F3648;
    // 0x801F3630: sb          $t5, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r13;
L_801F3634:
    // 0x801F3634: jal         0x801F3AF0
    // 0x801F3638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F3AF0_5AFA00(rdram, ctx);
        goto after_2;
    // 0x801F3638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F363C: bne         $v0, $zero, L_801F3648
    if (ctx->r2 != 0) {
        // 0x801F3640: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_801F3648;
    }
    // 0x801F3640: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F3644: sb          $t6, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r14;
L_801F3648:
    // 0x801F3648: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F364C:
    // 0x801F364C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F3650: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801F3654: jr          $ra
    // 0x801F3658: nop

    TRACE_RETURN()
    return;
    // 0x801F3658: nop

;}
RECOMP_FUNC void func_801DEB50_59AA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEB54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEB58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DEB5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DEB60: jal         0x801DD720
    // 0x801DEB64: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801DEB64: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x801DEB68: jal         0x801E50C0
    // 0x801DEB6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E50C0_5A0FD0(rdram, ctx);
        goto after_1;
    // 0x801DEB6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801DEB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEB78: jr          $ra
    // 0x801DEB7C: nop

    TRACE_RETURN()
    return;
    // 0x801DEB7C: nop

;}
RECOMP_FUNC void func_801FA420_5B6330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA424: lhu         $t3, 0x32($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X32);
    // 0x801FA428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FA42C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FA430: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FA434: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801FA438: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801FA43C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801FA440: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x801FA444: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x801FA448: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x801FA44C: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x801FA450: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801FA454: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801FA458: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801FA45C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801FA460: jal         0x801FA4FC
    // 0x801FA464: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_801FA4FC_5B640C(rdram, ctx);
        goto after_0;
    // 0x801FA464: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x801FA468: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x801FA46C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801FA470: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801FA474: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801FA478: sw          $t4, 0x2E2D($at)
    MEM_W(0X2E2D, ctx->r1) = ctx->r12;
    // 0x801FA47C: lhu         $t5, 0x3A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X3A);
    // 0x801FA480: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x801FA484: sh          $t5, 0x2E31($at)
    MEM_H(0X2E31, ctx->r1) = ctx->r13;
    // 0x801FA488: lbu         $t6, 0x2E2A($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E2A);
    // 0x801FA48C: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x801FA490: sb          $t7, 0x2E2A($at)
    MEM_B(0X2E2A, ctx->r1) = ctx->r15;
    // 0x801FA494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FA49C: jr          $ra
    // 0x801FA4A0: nop

    TRACE_RETURN()
    return;
    // 0x801FA4A0: nop

;}
RECOMP_FUNC void func_801F236C_5AE27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F236C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801F2370: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801F2374: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801F2378: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_801F237C:
    // 0x801F237C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801F2380: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x801F2384: nop

    // 0x801F2388: bc1fl       L_801F239C
    if (!c1cs) {
        // 0x801F238C: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_801F239C;
    }
    goto skip_0;
    // 0x801F238C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_0:
    // 0x801F2390: jr          $ra
    // 0x801F2394: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801F2394: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801F2398: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_801F239C:
    // 0x801F239C: nop

    // 0x801F23A0: bc1fl       L_801F23B4
    if (!c1cs) {
        // 0x801F23A4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801F23B4;
    }
    goto skip_1;
    // 0x801F23A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x801F23A8: jr          $ra
    // 0x801F23AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801F23AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801F23B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801F23B4:
    // 0x801F23B4: bne         $v1, $a0, L_801F237C
    if (ctx->r3 != ctx->r4) {
        // 0x801F23B8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_801F237C;
    }
    // 0x801F23B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801F23BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801F23C0: jr          $ra
    // 0x801F23C4: nop

    TRACE_RETURN()
    return;
    // 0x801F23C4: nop

;}
RECOMP_FUNC void func_801E8E8C_5A4D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8E8C: beq         $a0, $zero, L_801E8EBC
    if (ctx->r4 == 0) {
        // 0x801E8E90: nop
    
            goto L_801E8EBC;
    }
    // 0x801E8E90: nop

    // 0x801E8E94: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E8E98: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E8E9C: beq         $v0, $zero, L_801E8EBC
    if (ctx->r2 == 0) {
        // 0x801E8EA0: nop
    
            goto L_801E8EBC;
    }
    // 0x801E8EA0: nop

    // 0x801E8EA4: sb          $v1, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r3;
L_801E8EA8:
    // 0x801E8EA8: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x801E8EAC: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x801E8EB0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801E8EB4: bnel        $v0, $zero, L_801E8EA8
    if (ctx->r2 != 0) {
        // 0x801E8EB8: sb          $v1, 0x64($v0)
        MEM_B(0X64, ctx->r2) = ctx->r3;
            goto L_801E8EA8;
    }
    goto skip_0;
    // 0x801E8EB8: sb          $v1, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r3;
    skip_0:
L_801E8EBC:
    // 0x801E8EBC: jr          $ra
    // 0x801E8EC0: nop

    TRACE_RETURN()
    return;
    // 0x801E8EC0: nop

;}
RECOMP_FUNC void func_801E14F4_59D404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14F8: jr          $ra
    // 0x801E14FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F8428_5B4338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F842C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F8434: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F8438: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F843C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F8440: sb          $t6, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r14;
    // 0x801F8444: jal         0x80003728
    // 0x801F8448: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80003728_4328(rdram, ctx);
        goto after_0;
    // 0x801F8448: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x801F844C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F8450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F8454: jr          $ra
    // 0x801F8458: nop

    TRACE_RETURN()
    return;
    // 0x801F8458: nop

;}
RECOMP_FUNC void func_801D9E9C_595DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9E9C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D9EA0: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x801D9EA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D9EA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D9EAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D9EB0: bgtz        $t6, L_801D9F70
    if (SIGNED(ctx->r14) > 0) {
        // 0x801D9EB4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_801D9F70;
    }
    // 0x801D9EB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D9EB8: jal         0x801E5274
    // 0x801D9EBC: nop

    func_801E5274_5A1184(rdram, ctx);
        goto after_0;
    // 0x801D9EBC: nop

    after_0:
    // 0x801D9EC0: beql        $v0, $zero, L_801D9ED4
    if (ctx->r2 == 0) {
        // 0x801D9EC4: lbu         $v1, 0xCC($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0XCC);
            goto L_801D9ED4;
    }
    goto skip_0;
    // 0x801D9EC4: lbu         $v1, 0xCC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCC);
    skip_0:
    // 0x801D9EC8: b           L_801DA668
    // 0x801D9ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801D9ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D9ED0: lbu         $v1, 0xCC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCC);
L_801D9ED4:
    // 0x801D9ED4: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x801D9ED8: beq         $v1, $at, L_801D9F68
    if (ctx->r3 == ctx->r1) {
        // 0x801D9EDC: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_801D9F68;
    }
    // 0x801D9EDC: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x801D9EE0: beq         $v1, $at, L_801D9F68
    if (ctx->r3 == ctx->r1) {
        // 0x801D9EE4: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_801D9F68;
    }
    // 0x801D9EE4: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x801D9EE8: beq         $v1, $at, L_801D9F68
    if (ctx->r3 == ctx->r1) {
        // 0x801D9EEC: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_801D9F68;
    }
    // 0x801D9EEC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x801D9EF0: beq         $v1, $at, L_801D9F68
    if (ctx->r3 == ctx->r1) {
        // 0x801D9EF4: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_801D9F68;
    }
    // 0x801D9EF4: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x801D9EF8: beq         $v1, $at, L_801D9F68
    if (ctx->r3 == ctx->r1) {
        // 0x801D9EFC: addiu       $at, $zero, 0xB9
        ctx->r1 = ADD32(0, 0XB9);
            goto L_801D9F68;
    }
    // 0x801D9EFC: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x801D9F00: beq         $v1, $at, L_801D9F68
    if (ctx->r3 == ctx->r1) {
        // 0x801D9F04: nop
    
            goto L_801D9F68;
    }
    // 0x801D9F04: nop

    // 0x801D9F08: jal         0x801E3098
    // 0x801D9F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3098_59EFA8(rdram, ctx);
        goto after_1;
    // 0x801D9F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801D9F10: jal         0x801E7E40
    // 0x801D9F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7E40_5A3D50(rdram, ctx);
        goto after_2;
    // 0x801D9F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D9F18: beq         $v0, $zero, L_801D9F30
    if (ctx->r2 == 0) {
        // 0x801D9F1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D9F30;
    }
    // 0x801D9F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D9F20: jal         0x801DACDC
    // 0x801D9F24: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801D9F24: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    after_3:
    // 0x801D9F28: b           L_801DA668
    // 0x801D9F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801D9F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D9F30:
    // 0x801D9F30: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801D9F34: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x801D9F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D9F3C: lbu         $t8, 0x59($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X59);
    // 0x801D9F40: beq         $t8, $zero, L_801D9F58
    if (ctx->r24 == 0) {
        // 0x801D9F44: nop
    
            goto L_801D9F58;
    }
    // 0x801D9F44: nop

    // 0x801D9F48: jal         0x801DACDC
    // 0x801D9F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801D9F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D9F50: b           L_801DA668
    // 0x801D9F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801D9F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D9F58:
    // 0x801D9F58: jal         0x801DACDC
    // 0x801D9F5C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801D9F5C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_5:
    // 0x801D9F60: b           L_801DA668
    // 0x801D9F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801D9F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D9F68:
    // 0x801D9F68: b           L_801DA668
    // 0x801D9F6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801D9F6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D9F70:
    // 0x801D9F70: jal         0x801D9D74
    // 0x801D9F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9D74_595C84(rdram, ctx);
        goto after_6;
    // 0x801D9F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801D9F78: beq         $v0, $zero, L_801D9F88
    if (ctx->r2 == 0) {
        // 0x801D9F7C: nop
    
            goto L_801D9F88;
    }
    // 0x801D9F7C: nop

    // 0x801D9F80: b           L_801DA668
    // 0x801D9F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801D9F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D9F88:
    // 0x801D9F88: jal         0x801D9E28
    // 0x801D9F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9E28_595D38(rdram, ctx);
        goto after_7;
    // 0x801D9F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801D9F90: beql        $v0, $zero, L_801D9FA4
    if (ctx->r2 == 0) {
        // 0x801D9F94: lw          $v0, 0x38($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X38);
            goto L_801D9FA4;
    }
    goto skip_1;
    // 0x801D9F94: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    skip_1:
    // 0x801D9F98: b           L_801DA668
    // 0x801D9F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801D9F9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D9FA0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
L_801D9FA4:
    // 0x801D9FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D9FA8: beql        $v0, $zero, L_801DA668
    if (ctx->r2 == 0) {
        // 0x801D9FAC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DA668;
    }
    goto skip_2;
    // 0x801D9FAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801D9FB0: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x801D9FB4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801D9FB8: jal         0x801E7E40
    // 0x801D9FBC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_801E7E40_5A3D50(rdram, ctx);
        goto after_8;
    // 0x801D9FBC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_8:
    // 0x801D9FC0: beq         $v0, $zero, L_801DA034
    if (ctx->r2 == 0) {
        // 0x801D9FC4: lw          $t0, 0x28($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X28);
            goto L_801DA034;
    }
    // 0x801D9FC4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801D9FC8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x801D9FCC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801D9FD0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801D9FD4: lbu         $a1, 0x4C($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X4C);
    // 0x801D9FD8: beq         $t1, $a1, L_801D9FF0
    if (ctx->r9 == ctx->r5) {
        // 0x801D9FDC: nop
    
            goto L_801D9FF0;
    }
    // 0x801D9FDC: nop

    // 0x801D9FE0: beq         $a0, $a1, L_801D9FF0
    if (ctx->r4 == ctx->r5) {
        // 0x801D9FE4: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_801D9FF0;
    }
    // 0x801D9FE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x801D9FE8: bne         $a2, $a1, L_801D9FF8
    if (ctx->r6 != ctx->r5) {
        // 0x801D9FEC: nop
    
            goto L_801D9FF8;
    }
    // 0x801D9FEC: nop

L_801D9FF0:
    // 0x801D9FF0: b           L_801DA668
    // 0x801D9FF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801D9FF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D9FF8:
    // 0x801D9FF8: jal         0x801DA67C
    // 0x801D9FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA67C_59658C(rdram, ctx);
        goto after_9;
    // 0x801D9FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801DA000: beq         $v0, $zero, L_801DA010
    if (ctx->r2 == 0) {
        // 0x801DA004: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA010;
    }
    // 0x801DA004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA008: jal         0x801DA708
    // 0x801DA00C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_10;
    // 0x801DA00C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_10:
L_801DA010:
    // 0x801DA010: jal         0x801E3134
    // 0x801DA014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_11;
    // 0x801DA014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801DA018: jal         0x801E307C
    // 0x801DA01C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_12;
    // 0x801DA01C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801DA020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA024: jal         0x801DACDC
    // 0x801DA028: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_13;
    // 0x801DA028: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    after_13:
    // 0x801DA02C: b           L_801DA668
    // 0x801DA030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA034:
    // 0x801DA034: lbu         $v1, 0xCC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCC);
    // 0x801DA038: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x801DA03C: slti        $at, $v1, 0x42
    ctx->r1 = SIGNED(ctx->r3) < 0X42 ? 1 : 0;
    // 0x801DA040: bne         $at, $zero, L_801DA0B0
    if (ctx->r1 != 0) {
        // 0x801DA044: slti        $at, $v1, 0x46
        ctx->r1 = SIGNED(ctx->r3) < 0X46 ? 1 : 0;
            goto L_801DA0B0;
    }
    // 0x801DA044: slti        $at, $v1, 0x46
    ctx->r1 = SIGNED(ctx->r3) < 0X46 ? 1 : 0;
    // 0x801DA048: beq         $at, $zero, L_801DA0B0
    if (ctx->r1 == 0) {
        // 0x801DA04C: lw          $t2, 0x34($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X34);
            goto L_801DA0B0;
    }
    // 0x801DA04C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x801DA050: lbu         $a1, 0x4C($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X4C);
    // 0x801DA054: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801DA058: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801DA05C: beql        $t1, $a1, L_801DA0B4
    if (ctx->r9 == ctx->r5) {
        // 0x801DA060: lbu         $a1, 0x4C($t3)
        ctx->r5 = MEM_BU(ctx->r11, 0X4C);
            goto L_801DA0B4;
    }
    goto skip_3;
    // 0x801DA060: lbu         $a1, 0x4C($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X4C);
    skip_3:
    // 0x801DA064: beq         $a0, $a1, L_801DA0B0
    if (ctx->r4 == ctx->r5) {
        // 0x801DA068: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_801DA0B0;
    }
    // 0x801DA068: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x801DA06C: beql        $a2, $a1, L_801DA0B4
    if (ctx->r6 == ctx->r5) {
        // 0x801DA070: lbu         $a1, 0x4C($t3)
        ctx->r5 = MEM_BU(ctx->r11, 0X4C);
            goto L_801DA0B4;
    }
    goto skip_4;
    // 0x801DA070: lbu         $a1, 0x4C($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X4C);
    skip_4:
    // 0x801DA074: jal         0x801DA67C
    // 0x801DA078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA67C_59658C(rdram, ctx);
        goto after_14;
    // 0x801DA078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x801DA07C: beq         $v0, $zero, L_801DA08C
    if (ctx->r2 == 0) {
        // 0x801DA080: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA08C;
    }
    // 0x801DA080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA084: jal         0x801DA708
    // 0x801DA088: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_15;
    // 0x801DA088: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_15:
L_801DA08C:
    // 0x801DA08C: jal         0x801E3134
    // 0x801DA090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_16;
    // 0x801DA090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x801DA094: jal         0x801E307C
    // 0x801DA098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_17;
    // 0x801DA098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x801DA09C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA0A0: jal         0x801DACDC
    // 0x801DA0A4: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_18;
    // 0x801DA0A4: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_18:
    // 0x801DA0A8: b           L_801DA668
    // 0x801DA0AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA0AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA0B0:
    // 0x801DA0B0: lbu         $a1, 0x4C($t3)
    ctx->r5 = MEM_BU(ctx->r11, 0X4C);
L_801DA0B4:
    // 0x801DA0B4: slti        $at, $v1, 0x35
    ctx->r1 = SIGNED(ctx->r3) < 0X35 ? 1 : 0;
    // 0x801DA0B8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x801DA0BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x801DA0C0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801DA0C4: bne         $at, $zero, L_801DA118
    if (ctx->r1 != 0) {
        // 0x801DA0C8: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801DA118;
    }
    // 0x801DA0C8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801DA0CC: slti        $at, $v1, 0x3B
    ctx->r1 = SIGNED(ctx->r3) < 0X3B ? 1 : 0;
    // 0x801DA0D0: beql        $at, $zero, L_801DA11C
    if (ctx->r1 == 0) {
        // 0x801DA0D4: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_801DA11C;
    }
    goto skip_5;
    // 0x801DA0D4: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    skip_5:
    // 0x801DA0D8: beql        $t1, $v0, L_801DA11C
    if (ctx->r9 == ctx->r2) {
        // 0x801DA0DC: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_801DA11C;
    }
    goto skip_6;
    // 0x801DA0DC: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    skip_6:
    // 0x801DA0E0: beql        $a0, $v0, L_801DA11C
    if (ctx->r4 == ctx->r2) {
        // 0x801DA0E4: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_801DA11C;
    }
    goto skip_7;
    // 0x801DA0E4: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    skip_7:
    // 0x801DA0E8: beql        $a2, $v0, L_801DA11C
    if (ctx->r6 == ctx->r2) {
        // 0x801DA0EC: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_801DA11C;
    }
    goto skip_8;
    // 0x801DA0EC: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    skip_8:
    // 0x801DA0F0: jal         0x801DA67C
    // 0x801DA0F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA67C_59658C(rdram, ctx);
        goto after_19;
    // 0x801DA0F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x801DA0F8: beq         $v0, $zero, L_801DA108
    if (ctx->r2 == 0) {
        // 0x801DA0FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA108;
    }
    // 0x801DA0FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA100: jal         0x801DA758
    // 0x801DA104: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA758_596668(rdram, ctx);
        goto after_20;
    // 0x801DA104: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_20:
L_801DA108:
    // 0x801DA108: jal         0x801E3158
    // 0x801DA10C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3158_59F068(rdram, ctx);
        goto after_21;
    // 0x801DA10C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x801DA110: b           L_801DA668
    // 0x801DA114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA118:
    // 0x801DA118: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
L_801DA11C:
    // 0x801DA11C: bnel        $v1, $at, L_801DA1A0
    if (ctx->r3 != ctx->r1) {
        // 0x801DA120: slti        $at, $v1, 0x4E
        ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
            goto L_801DA1A0;
    }
    goto skip_9;
    // 0x801DA120: slti        $at, $v1, 0x4E
    ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
    skip_9:
    // 0x801DA124: beql        $t1, $v0, L_801DA1A0
    if (ctx->r9 == ctx->r2) {
        // 0x801DA128: slti        $at, $v1, 0x4E
        ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
            goto L_801DA1A0;
    }
    goto skip_10;
    // 0x801DA128: slti        $at, $v1, 0x4E
    ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
    skip_10:
    // 0x801DA12C: beql        $a0, $v0, L_801DA1A0
    if (ctx->r4 == ctx->r2) {
        // 0x801DA130: slti        $at, $v1, 0x4E
        ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
            goto L_801DA1A0;
    }
    goto skip_11;
    // 0x801DA130: slti        $at, $v1, 0x4E
    ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
    skip_11:
    // 0x801DA134: beql        $a2, $v0, L_801DA1A0
    if (ctx->r6 == ctx->r2) {
        // 0x801DA138: slti        $at, $v1, 0x4E
        ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
            goto L_801DA1A0;
    }
    goto skip_12;
    // 0x801DA138: slti        $at, $v1, 0x4E
    ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
    skip_12:
    // 0x801DA13C: jal         0x801DA67C
    // 0x801DA140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA67C_59658C(rdram, ctx);
        goto after_22;
    // 0x801DA140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x801DA144: beq         $v0, $zero, L_801DA154
    if (ctx->r2 == 0) {
        // 0x801DA148: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA154;
    }
    // 0x801DA148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA14C: jal         0x801DA708
    // 0x801DA150: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_23;
    // 0x801DA150: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_23:
L_801DA154:
    // 0x801DA154: jal         0x801E3134
    // 0x801DA158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_24;
    // 0x801DA158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x801DA15C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801DA160: sw          $zero, -0x383C($at)
    MEM_W(-0X383C, ctx->r1) = 0;
    // 0x801DA164: jal         0x801E8724
    // 0x801DA168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E8724_5A4634(rdram, ctx);
        goto after_25;
    // 0x801DA168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x801DA16C: jal         0x801E3324
    // 0x801DA170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_26;
    // 0x801DA170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x801DA174: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA17C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DA180: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801DA184: jal         0x801DAC7C
    // 0x801DA188: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_27;
    // 0x801DA188: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_27:
    // 0x801DA18C: jal         0x801CC454
    // 0x801DA190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CC454_588364(rdram, ctx);
        goto after_28;
    // 0x801DA190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x801DA194: b           L_801DA668
    // 0x801DA198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DA19C: slti        $at, $v1, 0x4E
    ctx->r1 = SIGNED(ctx->r3) < 0X4E ? 1 : 0;
L_801DA1A0:
    // 0x801DA1A0: bne         $at, $zero, L_801DA224
    if (ctx->r1 != 0) {
        // 0x801DA1A4: slti        $at, $v1, 0x53
        ctx->r1 = SIGNED(ctx->r3) < 0X53 ? 1 : 0;
            goto L_801DA224;
    }
    // 0x801DA1A4: slti        $at, $v1, 0x53
    ctx->r1 = SIGNED(ctx->r3) < 0X53 ? 1 : 0;
    // 0x801DA1A8: beql        $at, $zero, L_801DA228
    if (ctx->r1 == 0) {
        // 0x801DA1AC: sltiu       $at, $v0, 0xA
        ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
            goto L_801DA228;
    }
    goto skip_13;
    // 0x801DA1AC: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    skip_13:
    // 0x801DA1B0: beql        $t1, $v0, L_801DA228
    if (ctx->r9 == ctx->r2) {
        // 0x801DA1B4: sltiu       $at, $v0, 0xA
        ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
            goto L_801DA228;
    }
    goto skip_14;
    // 0x801DA1B4: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    skip_14:
    // 0x801DA1B8: beql        $a0, $v0, L_801DA228
    if (ctx->r4 == ctx->r2) {
        // 0x801DA1BC: sltiu       $at, $v0, 0xA
        ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
            goto L_801DA228;
    }
    goto skip_15;
    // 0x801DA1BC: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    skip_15:
    // 0x801DA1C0: beql        $a2, $v0, L_801DA228
    if (ctx->r6 == ctx->r2) {
        // 0x801DA1C4: sltiu       $at, $v0, 0xA
        ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
            goto L_801DA228;
    }
    goto skip_16;
    // 0x801DA1C4: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
    skip_16:
    // 0x801DA1C8: jal         0x801DA67C
    // 0x801DA1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA67C_59658C(rdram, ctx);
        goto after_29;
    // 0x801DA1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x801DA1D0: beq         $v0, $zero, L_801DA1E0
    if (ctx->r2 == 0) {
        // 0x801DA1D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA1E0;
    }
    // 0x801DA1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA1D8: jal         0x801DA708
    // 0x801DA1DC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_30;
    // 0x801DA1DC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_30:
L_801DA1E0:
    // 0x801DA1E0: jal         0x801E3134
    // 0x801DA1E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_31;
    // 0x801DA1E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x801DA1E8: lbu         $v1, 0xCC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCC);
    // 0x801DA1EC: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x801DA1F0: beq         $v1, $at, L_801DA21C
    if (ctx->r3 == ctx->r1) {
        // 0x801DA1F4: addiu       $at, $zero, 0x51
        ctx->r1 = ADD32(0, 0X51);
            goto L_801DA21C;
    }
    // 0x801DA1F4: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x801DA1F8: beq         $v1, $at, L_801DA21C
    if (ctx->r3 == ctx->r1) {
        // 0x801DA1FC: nop
    
            goto L_801DA21C;
    }
    // 0x801DA1FC: nop

    // 0x801DA200: jal         0x801E307C
    // 0x801DA204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E307C_59EF8C(rdram, ctx);
        goto after_32;
    // 0x801DA204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x801DA208: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DA20C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA210: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x801DA214: jal         0x801DACDC
    // 0x801DA218: swc1        $f4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f4.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_33;
    // 0x801DA218: swc1        $f4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f4.u32l;
    after_33:
L_801DA21C:
    // 0x801DA21C: b           L_801DA668
    // 0x801DA220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA224:
    // 0x801DA224: sltiu       $at, $v0, 0xA
    ctx->r1 = ctx->r2 < 0XA ? 1 : 0;
L_801DA228:
    // 0x801DA228: beq         $at, $zero, L_801DA664
    if (ctx->r1 == 0) {
        // 0x801DA22C: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_801DA664;
    }
    // 0x801DA22C: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x801DA230: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA234: addu        $at, $at, $t4
    gpr jr_addend_801DA23C = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801DA238: lw          $t4, -0x5100($at)
    ctx->r12 = ADD32(ctx->r1, -0X5100);
    // 0x801DA23C: jr          $t4
    // 0x801DA240: nop

    switch (jr_addend_801DA23C >> 2) {
        case 0: goto L_801DA664; break;
        case 1: goto L_801DA244; break;
        case 2: goto L_801DA2A8; break;
        case 3: goto L_801DA664; break;
        case 4: goto L_801DA3C8; break;
        case 5: goto L_801DA418; break;
        case 6: goto L_801DA494; break;
        case 7: goto L_801DA4F8; break;
        case 8: goto L_801DA500; break;
        case 9: goto L_801DA558; break;
        default: switch_error(__func__, 0x801DA23C, 0x8020AF00);
    }
    // 0x801DA240: nop

L_801DA244:
    // 0x801DA244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA248: jal         0x801DA67C
    // 0x801DA24C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801DA67C_59658C(rdram, ctx);
        goto after_34;
    // 0x801DA24C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_34:
    // 0x801DA250: beq         $v0, $zero, L_801DA298
    if (ctx->r2 == 0) {
        // 0x801DA254: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA298;
    }
    // 0x801DA254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA258: jal         0x801DA708
    // 0x801DA25C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_35;
    // 0x801DA25C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_35:
    // 0x801DA260: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x801DA264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA268: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x801DA26C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801DA270: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801DA274: jal         0x801CF51C
    // 0x801DA278: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    func_801CF51C_58B42C(rdram, ctx);
        goto after_36;
    // 0x801DA278: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_36:
    // 0x801DA27C: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x801DA280: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801DA284: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DA288: jal         0x801DA84C
    // 0x801DA28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA84C_59675C(rdram, ctx);
        goto after_37;
    // 0x801DA28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x801DA290: b           L_801DA668
    // 0x801DA294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA298:
    // 0x801DA298: jal         0x801E3134
    // 0x801DA29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_38;
    // 0x801DA29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x801DA2A0: b           L_801DA668
    // 0x801DA2A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801DA2A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA2A8:
    // 0x801DA2A8: lbu         $t7, 0xCD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XCD);
    // 0x801DA2AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA2B0: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x801DA2B4: bnel        $t7, $zero, L_801DA390
    if (ctx->r15 != 0) {
        // 0x801DA2B8: lbu         $v0, 0xCD($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XCD);
            goto L_801DA390;
    }
    goto skip_17;
    // 0x801DA2B8: lbu         $v0, 0xCD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCD);
    skip_17:
    // 0x801DA2BC: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    // 0x801DA2C0: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x801DA2C4: lw          $a3, 0x10($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X10);
    // 0x801DA2C8: jal         0x801DB330
    // 0x801DA2CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801DB330_597240(rdram, ctx);
        goto after_39;
    // 0x801DA2CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_39:
    // 0x801DA2D0: beq         $v0, $zero, L_801DA38C
    if (ctx->r2 == 0) {
        // 0x801DA2D4: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_801DA38C;
    }
    // 0x801DA2D4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801DA2D8: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x801DA2DC: lbu         $t9, 0x7930($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7930);
    // 0x801DA2E0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x801DA2E4: bnel        $t9, $zero, L_801DA668
    if (ctx->r25 != 0) {
        // 0x801DA2E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DA668;
    }
    goto skip_18;
    // 0x801DA2E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_18:
    // 0x801DA2EC: lw          $t3, 0x68($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X68);
    // 0x801DA2F0: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x801DA2F4: beql        $t4, $zero, L_801DA668
    if (ctx->r12 == 0) {
        // 0x801DA2F8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DA668;
    }
    goto skip_19;
    // 0x801DA2F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_19:
    // 0x801DA2FC: lhu         $t5, 0x98($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X98);
    // 0x801DA300: beql        $t5, $zero, L_801DA668
    if (ctx->r13 == 0) {
        // 0x801DA304: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DA668;
    }
    goto skip_20;
    // 0x801DA304: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_20:
    // 0x801DA308: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801DA30C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801DA310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DA314: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DA318: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DA31C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801DA320: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801DA324: lhu         $t8, 0x7DB4($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB4);
    // 0x801DA328: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801DA32C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA330: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x801DA334: beq         $t9, $zero, L_801DA664
    if (ctx->r25 == 0) {
        // 0x801DA338: addiu       $a1, $zero, 0x53
        ctx->r5 = ADD32(0, 0X53);
            goto L_801DA664;
    }
    // 0x801DA338: addiu       $a1, $zero, 0x53
    ctx->r5 = ADD32(0, 0X53);
    // 0x801DA33C: sw          $t2, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r10;
    // 0x801DA340: sb          $v0, 0xCD($s0)
    MEM_B(0XCD, ctx->r16) = ctx->r2;
    // 0x801DA344: jal         0x801DACDC
    // 0x801DA348: sb          $v0, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = ctx->r2;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_40;
    // 0x801DA348: sb          $v0, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = ctx->r2;
    after_40:
    // 0x801DA34C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA350: nop

    // 0x801DA354: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801DA358: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    // 0x801DA35C: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801DA360: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801DA364: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x801DA368: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x801DA36C: lw          $t4, 0x68($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X68);
    // 0x801DA370: ori         $t5, $t4, 0x100
    ctx->r13 = ctx->r12 | 0X100;
    // 0x801DA374: jal         0x80221EBC
    // 0x801DA378: sw          $t5, 0x68($t3)
    MEM_W(0X68, ctx->r11) = ctx->r13;
    func_80221EBC_5DD38C(rdram, ctx);
        goto after_41;
    // 0x801DA378: sw          $t5, 0x68($t3)
    MEM_W(0X68, ctx->r11) = ctx->r13;
    after_41:
    // 0x801DA37C: jal         0x801E7FB4
    // 0x801DA380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7FB4_5A3EC4(rdram, ctx);
        goto after_42;
    // 0x801DA380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x801DA384: b           L_801DA668
    // 0x801DA388: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA388: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA38C:
    // 0x801DA38C: lbu         $v0, 0xCD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCD);
L_801DA390:
    // 0x801DA390: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DA394: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801DA398: bne         $v0, $at, L_801DA3A8
    if (ctx->r2 != ctx->r1) {
        // 0x801DA39C: nop
    
            goto L_801DA3A8;
    }
    // 0x801DA39C: nop

    // 0x801DA3A0: b           L_801DA664
    // 0x801DA3A4: sb          $t6, 0xCD($s0)
    MEM_B(0XCD, ctx->r16) = ctx->r14;
        goto L_801DA664;
    // 0x801DA3A4: sb          $t6, 0xCD($s0)
    MEM_B(0XCD, ctx->r16) = ctx->r14;
L_801DA3A8:
    // 0x801DA3A8: beq         $t1, $v0, L_801DA664
    if (ctx->r9 == ctx->r2) {
        // 0x801DA3AC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801DA664;
    }
    // 0x801DA3AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DA3B0: beq         $v0, $at, L_801DA664
    if (ctx->r2 == ctx->r1) {
        // 0x801DA3B4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_801DA664;
    }
    // 0x801DA3B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801DA3B8: bnel        $v0, $at, L_801DA668
    if (ctx->r2 != ctx->r1) {
        // 0x801DA3BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DA668;
    }
    goto skip_21;
    // 0x801DA3BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_21:
    // 0x801DA3C0: b           L_801DA668
    // 0x801DA3C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801DA3C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA3C8:
    // 0x801DA3C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA3CC: jal         0x801DA67C
    // 0x801DA3D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DA67C_59658C(rdram, ctx);
        goto after_43;
    // 0x801DA3D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_43:
    // 0x801DA3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA3D8: jal         0x801DA708
    // 0x801DA3DC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_44;
    // 0x801DA3DC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_44:
    // 0x801DA3E0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801DA3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA3E8: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x801DA3EC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801DA3F0: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801DA3F4: jal         0x801CF51C
    // 0x801DA3F8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    func_801CF51C_58B42C(rdram, ctx);
        goto after_45;
    // 0x801DA3F8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_45:
    // 0x801DA3FC: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x801DA400: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801DA404: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801DA408: jal         0x801DAA10
    // 0x801DA40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DAA10_596920(rdram, ctx);
        goto after_46;
    // 0x801DA40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x801DA410: b           L_801DA668
    // 0x801DA414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA418:
    // 0x801DA418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA41C: jal         0x801DA67C
    // 0x801DA420: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DA67C_59658C(rdram, ctx);
        goto after_47;
    // 0x801DA420: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_47:
    // 0x801DA424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA428: jal         0x801DA708
    // 0x801DA42C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_48;
    // 0x801DA42C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_48:
    // 0x801DA430: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x801DA434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA438: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x801DA43C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801DA440: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801DA444: jal         0x801CF51C
    // 0x801DA448: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    func_801CF51C_58B42C(rdram, ctx);
        goto after_49;
    // 0x801DA448: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_49:
    // 0x801DA44C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x801DA450: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x801DA454: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801DA458: lwc1        $f2, 0x78($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X78);
    // 0x801DA45C: lwc1        $f12, 0x7C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X7C);
    // 0x801DA460: lwc1        $f0, 0x80($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X80);
    // 0x801DA464: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801DA468: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x801DA46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA470: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801DA474: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DA478: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801DA47C: add.s       $f14, $f16, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801DA480: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DA484: jal         0x801DAAD8
    // 0x801DA488: nop

    func_801DAAD8_5969E8(rdram, ctx);
        goto after_50;
    // 0x801DA488: nop

    after_50:
    // 0x801DA48C: b           L_801DA668
    // 0x801DA490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA494:
    // 0x801DA494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA498: jal         0x801DA67C
    // 0x801DA49C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801DA67C_59658C(rdram, ctx);
        goto after_51;
    // 0x801DA49C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_51:
    // 0x801DA4A0: beq         $v0, $zero, L_801DA4E8
    if (ctx->r2 == 0) {
        // 0x801DA4A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA4E8;
    }
    // 0x801DA4A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA4A8: jal         0x801DA708
    // 0x801DA4AC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_52;
    // 0x801DA4AC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_52:
    // 0x801DA4B0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x801DA4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA4B8: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x801DA4BC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801DA4C0: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801DA4C4: jal         0x801CF51C
    // 0x801DA4C8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    func_801CF51C_58B42C(rdram, ctx);
        goto after_53;
    // 0x801DA4C8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_53:
    // 0x801DA4CC: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x801DA4D0: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801DA4D4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x801DA4D8: jal         0x801DA84C
    // 0x801DA4DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA84C_59675C(rdram, ctx);
        goto after_54;
    // 0x801DA4DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_54:
    // 0x801DA4E0: b           L_801DA668
    // 0x801DA4E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA4E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA4E8:
    // 0x801DA4E8: jal         0x801E3134
    // 0x801DA4EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_55;
    // 0x801DA4EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x801DA4F0: b           L_801DA668
    // 0x801DA4F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801DA4F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA4F8:
    // 0x801DA4F8: b           L_801DA664
    // 0x801DA4FC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
        goto L_801DA664;
    // 0x801DA4FC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_801DA500:
    // 0x801DA500: jal         0x801DAB2C
    // 0x801DA504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DAB2C_596A3C(rdram, ctx);
        goto after_56;
    // 0x801DA504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_56:
    // 0x801DA508: lbu         $t6, 0x60($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X60);
    // 0x801DA50C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DA510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA514: bne         $t6, $at, L_801DA548
    if (ctx->r14 != ctx->r1) {
        // 0x801DA518: nop
    
            goto L_801DA548;
    }
    // 0x801DA518: nop

    // 0x801DA51C: jal         0x8001DA08
    // 0x801DA520: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8001DA08_1E608(rdram, ctx);
        goto after_57;
    // 0x801DA520: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_57:
    // 0x801DA524: beq         $v0, $zero, L_801DA534
    if (ctx->r2 == 0) {
        // 0x801DA528: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA534;
    }
    // 0x801DA528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA52C: b           L_801DA538
    // 0x801DA530: addiu       $v0, $zero, 0xCE
    ctx->r2 = ADD32(0, 0XCE);
        goto L_801DA538;
    // 0x801DA530: addiu       $v0, $zero, 0xCE
    ctx->r2 = ADD32(0, 0XCE);
L_801DA534:
    // 0x801DA534: addiu       $v0, $zero, 0xCF
    ctx->r2 = ADD32(0, 0XCF);
L_801DA538:
    // 0x801DA538: jal         0x801DACDC
    // 0x801DA53C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_58;
    // 0x801DA53C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_58:
    // 0x801DA540: b           L_801DA668
    // 0x801DA544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801DA544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA548:
    // 0x801DA548: jal         0x801DACDC
    // 0x801DA54C: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_59;
    // 0x801DA54C: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    after_59:
    // 0x801DA550: b           L_801DA668
    // 0x801DA554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801DA554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA558:
    // 0x801DA558: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    // 0x801DA55C: beql        $t7, $zero, L_801DA5F8
    if (ctx->r15 == 0) {
        // 0x801DA560: lbu         $t3, 0xD4($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XD4);
            goto L_801DA5F8;
    }
    goto skip_22;
    // 0x801DA560: lbu         $t3, 0xD4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD4);
    skip_22:
    // 0x801DA564: jal         0x801E5274
    // 0x801DA568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E5274_5A1184(rdram, ctx);
        goto after_60;
    // 0x801DA568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x801DA56C: beq         $v0, $zero, L_801DA5B4
    if (ctx->r2 == 0) {
        // 0x801DA570: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_801DA5B4;
    }
    // 0x801DA570: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801DA574: jal         0x801E3134
    // 0x801DA578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_61;
    // 0x801DA578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_61:
    // 0x801DA57C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x801DA580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA584: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x801DA588: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801DA58C: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801DA590: jal         0x801CF51C
    // 0x801DA594: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    func_801CF51C_58B42C(rdram, ctx);
        goto after_62;
    // 0x801DA594: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_62:
    // 0x801DA598: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x801DA59C: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801DA5A0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x801DA5A4: jal         0x801DA84C
    // 0x801DA5A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA84C_59675C(rdram, ctx);
        goto after_63;
    // 0x801DA5A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_63:
    // 0x801DA5AC: b           L_801DA668
    // 0x801DA5B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801DA5B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA5B4:
    // 0x801DA5B4: sw          $zero, -0x3A1C($at)
    MEM_W(-0X3A1C, ctx->r1) = 0;
    // 0x801DA5B8: jal         0x80038BC8
    // 0x801DA5BC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_80038BC8_397C8(rdram, ctx);
        goto after_64;
    // 0x801DA5BC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_64:
    // 0x801DA5C0: jal         0x801E30E4
    // 0x801DA5C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E30E4_59EFF4(rdram, ctx);
        goto after_65;
    // 0x801DA5C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_65:
    // 0x801DA5C8: lbu         $t4, 0xDB($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XDB);
    // 0x801DA5CC: addiu       $t2, $zero, 0x2D
    ctx->r10 = ADD32(0, 0X2D);
    // 0x801DA5D0: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DA5D4: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x801DA5D8: sb          $t2, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r10;
    // 0x801DA5DC: sb          $t5, 0xDB($s0)
    MEM_B(0XDB, ctx->r16) = ctx->r13;
    // 0x801DA5E0: addiu       $a1, $a1, -0x1480
    ctx->r5 = ADD32(ctx->r5, -0X1480);
    // 0x801DA5E4: jal         0x8003522C
    // 0x801DA5E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_66;
    // 0x801DA5E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_66:
    // 0x801DA5EC: b           L_801DA668
    // 0x801DA5F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA5F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DA5F4: lbu         $t3, 0xD4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD4);
L_801DA5F8:
    // 0x801DA5F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA5FC: beq         $t3, $zero, L_801DA60C
    if (ctx->r11 == 0) {
        // 0x801DA600: nop
    
            goto L_801DA60C;
    }
    // 0x801DA600: nop

    // 0x801DA604: b           L_801DA668
    // 0x801DA608: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DA668;
    // 0x801DA608: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA60C:
    // 0x801DA60C: jal         0x801DA67C
    // 0x801DA610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801DA67C_59658C(rdram, ctx);
        goto after_67;
    // 0x801DA610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_67:
    // 0x801DA614: beq         $v0, $zero, L_801DA65C
    if (ctx->r2 == 0) {
        // 0x801DA618: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DA65C;
    }
    // 0x801DA618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA61C: jal         0x801DA708
    // 0x801DA620: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_801DA708_596618(rdram, ctx);
        goto after_68;
    // 0x801DA620: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_68:
    // 0x801DA624: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x801DA628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DA62C: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x801DA630: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801DA634: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801DA638: jal         0x801CF51C
    // 0x801DA63C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    func_801CF51C_58B42C(rdram, ctx);
        goto after_69;
    // 0x801DA63C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_69:
    // 0x801DA640: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x801DA644: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801DA648: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801DA64C: jal         0x801DA84C
    // 0x801DA650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DA84C_59675C(rdram, ctx);
        goto after_70;
    // 0x801DA650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_70:
    // 0x801DA654: b           L_801DA668
    // 0x801DA658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DA668;
    // 0x801DA658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DA65C:
    // 0x801DA65C: jal         0x801E3134
    // 0x801DA660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_71;
    // 0x801DA660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_71:
L_801DA664:
    // 0x801DA664: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DA668:
    // 0x801DA668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DA66C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DA670: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801DA674: jr          $ra
    // 0x801DA678: nop

    TRACE_RETURN()
    return;
    // 0x801DA678: nop

;}
RECOMP_FUNC void func_801E1204_59D114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1204: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1208: jr          $ra
    // 0x801E120C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E120C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F6094_5B1FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6098: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F609C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F60A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F60A4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F60A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F60AC: jalr        $t9
    // 0x801F60B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F60B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801F60B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F60B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F60BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F60C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F60C4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F60C8: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F60CC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F60D0: nop

    // 0x801F60D4: bc1fl       L_801F60E8
    if (!c1cs) {
        // 0x801F60D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F60E8;
    }
    goto skip_0;
    // 0x801F60D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F60DC: jal         0x801DACDC
    // 0x801F60E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F60E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801F60E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F60E8:
    // 0x801F60E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F60EC: jr          $ra
    // 0x801F60F0: nop

    TRACE_RETURN()
    return;
    // 0x801F60F0: nop

;}
RECOMP_FUNC void func_801F11F0_5AD100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F11F0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x801F11F4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801F11F8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801F11FC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x801F1200: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x801F1204: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801F1208: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801F120C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801F1210: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801F1214: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801F1218: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801F121C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F1220: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x801F1224: addiu       $t7, $t7, 0x4FC0
    ctx->r15 = ADD32(ctx->r15, 0X4FC0);
    // 0x801F1228: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801F122C: lw          $s7, 0x5C($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X5C);
    // 0x801F1230: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x801F1234: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801F1238: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801F123C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801F1240: andi        $fp, $a1, 0xFF
    ctx->r30 = ctx->r5 & 0XFF;
    // 0x801F1244: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x801F1248: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x801F124C: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x801F1250: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x801F1254: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801F1258: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x801F125C: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x801F1260: lw          $at, 0x18($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X18);
    // 0x801F1264: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x801F1268: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x801F126C: sw          $at, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r1;
    // 0x801F1270: jal         0x801E8C44
    // 0x801F1274: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F1274: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    after_0:
    // 0x801F1278: bne         $v0, $zero, L_801F1380
    if (ctx->r2 != 0) {
        // 0x801F127C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_801F1380;
    }
    // 0x801F127C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801F1280: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801F1284: addiu       $t2, $t2, 0x4868
    ctx->r10 = ADD32(ctx->r10, 0X4868);
    // 0x801F1288: sll         $t1, $fp, 2
    ctx->r9 = S32(ctx->r30 << 2);
    // 0x801F128C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x801F1290: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x801F1294: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x801F1298: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
L_801F129C:
    // 0x801F129C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801F12A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F12A4: jal         0x80034E08
    // 0x801F12A8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F12A8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x801F12AC: beq         $v0, $zero, L_801F1380
    if (ctx->r2 == 0) {
        // 0x801F12B0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801F1380;
    }
    // 0x801F12B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801F12B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F12B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F12BC: jal         0x80035EEC
    // 0x801F12C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801F12C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801F12C4: bne         $v0, $zero, L_801F12D8
    if (ctx->r2 != 0) {
        // 0x801F12C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801F12D8;
    }
    // 0x801F12C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F12CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801F12D0: b           L_801F1380
    // 0x801F12D4: sb          $t3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r11;
        goto L_801F1380;
    // 0x801F12D4: sb          $t3, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r11;
L_801F12D8:
    // 0x801F12D8: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x801F12DC: addiu       $s4, $s4, 0x4C28
    ctx->r20 = ADD32(ctx->r20, 0X4C28);
    // 0x801F12E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F12E4: or          $t9, $s4, $at
    ctx->r25 = ctx->r20 | ctx->r1;
    // 0x801F12E8: sll         $t4, $s2, 3
    ctx->r12 = S32(ctx->r18 << 3);
    // 0x801F12EC: subu        $t4, $t4, $s2
    ctx->r12 = SUB32(ctx->r12, ctx->r18);
    // 0x801F12F0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F12F4: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x801F12F8: addu        $s3, $t4, $t5
    ctx->r19 = ADD32(ctx->r12, ctx->r13);
    // 0x801F12FC: or          $s4, $t9, $at
    ctx->r20 = ctx->r25 | ctx->r1;
    // 0x801F1300: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x801F1304: jal         0x801F13B0
    // 0x801F1308: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_801F13B0_5AD2C0(rdram, ctx);
        goto after_3;
    // 0x801F1308: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x801F130C: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F1310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1314: jal         0x801EE3AC
    // 0x801F1318: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_801EE3AC_5AA2BC(rdram, ctx);
        goto after_4;
    // 0x801F1318: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x801F131C: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
    // 0x801F1320: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801F1324: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F1328: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F132C: lbu         $t7, 0x3($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3);
    // 0x801F1330: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801F1334: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x801F1338: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F133C: lbu         $t0, 0x4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X4);
    // 0x801F1340: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801F1344: lbu         $t1, 0x5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X5);
    // 0x801F1348: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801F134C: lbu         $t2, 0x6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X6);
    // 0x801F1350: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801F1354: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x801F1358: jal         0x801DC554
    // 0x801F135C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801F135C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_5:
    // 0x801F1360: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F1364: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801F1368: jal         0x801EE4AC
    // 0x801F136C: andi        $a2, $fp, 0xFF
    ctx->r6 = ctx->r30 & 0XFF;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_6;
    // 0x801F136C: andi        $a2, $fp, 0xFF
    ctx->r6 = ctx->r30 & 0XFF;
    after_6:
    // 0x801F1370: sb          $s2, 0x61($s1)
    MEM_B(0X61, ctx->r17) = ctx->r18;
    // 0x801F1374: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801F1378: bnel        $s2, $s6, L_801F129C
    if (ctx->r18 != ctx->r22) {
        // 0x801F137C: lw          $v0, 0x68($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X68);
            goto L_801F129C;
    }
    goto skip_0;
    // 0x801F137C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    skip_0:
L_801F1380:
    // 0x801F1380: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801F1384: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F1388: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801F138C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801F1390: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801F1394: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801F1398: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x801F139C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x801F13A0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x801F13A4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x801F13A8: jr          $ra
    // 0x801F13AC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x801F13AC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_801F75C0_5B34D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F75C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F75C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F75C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F75CC: jal         0x801FB2A4
    // 0x801F75D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FB2A4_5B71B4(rdram, ctx);
        goto after_0;
    // 0x801F75D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F75D4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x801F75D8: lbu         $t6, 0x7AA4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7AA4);
    // 0x801F75DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F75E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801F75E4: bne         $t6, $at, L_801F75FC
    if (ctx->r14 != ctx->r1) {
        // 0x801F75E8: nop
    
            goto L_801F75FC;
    }
    // 0x801F75E8: nop

    // 0x801F75EC: lw          $v0, -0x39D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39D8);
    // 0x801F75F0: lbu         $t7, 0x64($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X64);
    // 0x801F75F4: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801F75F8: sb          $t8, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r24;
L_801F75FC:
    // 0x801F75FC: jal         0x801F9354
    // 0x801F7600: nop

    func_801F9354_5B5264(rdram, ctx);
        goto after_1;
    // 0x801F7600: nop

    after_1:
    // 0x801F7604: jal         0x801F9470
    // 0x801F7608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801F9470_5B5380(rdram, ctx);
        goto after_2;
    // 0x801F7608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x801F760C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801F7610: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801F7614: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x801F7618: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x801F761C: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x801F7620: lhu         $a1, -0x51F6($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X51F6);
    // 0x801F7624: jal         0x801F9E18
    // 0x801F7628: lhu         $a0, 0x7AC6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AC6);
    func_801F9E18_5B5D28(rdram, ctx);
        goto after_3;
    // 0x801F7628: lhu         $a0, 0x7AC6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7AC6);
    after_3:
    // 0x801F762C: jal         0x801F8D94
    // 0x801F7630: nop

    func_801F8D94_5B4CA4(rdram, ctx);
        goto after_4;
    // 0x801F7630: nop

    after_4:
    // 0x801F7634: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F7638: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F763C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F7640: sb          $zero, 0x2E39($at)
    MEM_B(0X2E39, ctx->r1) = 0;
    // 0x801F7644: addiu       $t0, $v0, 0x7FFF
    ctx->r8 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F7648: lbu         $t0, 0x2E0D($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2E0D);
    // 0x801F764C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F7650: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801F7654: beql        $t0, $zero, L_801F7670
    if (ctx->r8 == 0) {
        // 0x801F7658: addiu       $at, $v0, 0x7FFF
        ctx->r1 = ADD32(ctx->r2, 0X7FFF);
            goto L_801F7670;
    }
    goto skip_0;
    // 0x801F7658: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    skip_0:
    // 0x801F765C: jal         0x801DD6E0
    // 0x801F7660: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_5;
    // 0x801F7660: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    after_5:
    // 0x801F7664: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F7668: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F766C: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
L_801F7670:
    // 0x801F7670: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7674: sb          $zero, 0x2E0D($at)
    MEM_B(0X2E0D, ctx->r1) = 0;
    // 0x801F7678: jal         0x8003521C
    // 0x801F767C: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F767C: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    after_6:
    // 0x801F7680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7688: jr          $ra
    // 0x801F768C: nop

    TRACE_RETURN()
    return;
    // 0x801F768C: nop

;}
RECOMP_FUNC void func_801F3298_5AF1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F329C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F32A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F32A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F32A8: jal         0x801E8C44
    // 0x801F32AC: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F32AC: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    after_0:
    // 0x801F32B0: bne         $v0, $zero, L_801F3304
    if (ctx->r2 != 0) {
        // 0x801F32B4: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801F3304;
    }
    // 0x801F32B4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F32B8: lbu         $t6, -0x3594($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3594);
    // 0x801F32BC: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    // 0x801F32C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801F32C4: bne         $t6, $zero, L_801F3304
    if (ctx->r14 != 0) {
        // 0x801F32C8: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_801F3304;
    }
    // 0x801F32C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801F32CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F32D0: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801F32D4: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801F32D8: jal         0x80034E08
    // 0x801F32DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801F32DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F32E0: beq         $v0, $zero, L_801F3304
    if (ctx->r2 == 0) {
        // 0x801F32E4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F3304;
    }
    // 0x801F32E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F32E8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801F32EC: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x801F32F0: jal         0x801EE4AC
    // 0x801F32F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801F32F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x801F32F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F32FC: sw          $zero, 0x88($a0)
    MEM_W(0X88, ctx->r4) = 0;
    // 0x801F3300: sw          $zero, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = 0;
L_801F3304:
    // 0x801F3304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F3308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F330C: jr          $ra
    // 0x801F3310: nop

    TRACE_RETURN()
    return;
    // 0x801F3310: nop

;}
RECOMP_FUNC void func_801F5934_5B1844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F593C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5940: addiu       $a1, $zero, 0x65
    ctx->r5 = ADD32(0, 0X65);
    // 0x801F5944: jal         0x801F5B9C
    // 0x801F5948: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801F5B9C_5B1AAC(rdram, ctx);
        goto after_0;
    // 0x801F5948: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801F594C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5954: jr          $ra
    // 0x801F5958: nop

    TRACE_RETURN()
    return;
    // 0x801F5958: nop

;}
RECOMP_FUNC void func_801E8EC4_5A4DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8EC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E8EC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E8ECC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801E8ED0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801E8ED4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E8ED8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E8EDC: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x801E8EE0: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x801E8EE4: beq         $s0, $zero, L_801E8F38
    if (ctx->r16 == 0) {
        // 0x801E8EE8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_801E8F38;
    }
    // 0x801E8EE8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801E8EEC: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
L_801E8EF0:
    // 0x801E8EF0: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801E8EF4: beql        $at, $zero, L_801E8F3C
    if (ctx->r1 == 0) {
        // 0x801E8EF8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E8F3C;
    }
    goto skip_0;
    // 0x801E8EF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E8EFC: lbu         $t7, 0x65($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X65);
    // 0x801E8F00: beql        $t7, $zero, L_801E8F30
    if (ctx->r15 == 0) {
        // 0x801E8F04: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801E8F30;
    }
    goto skip_1;
    // 0x801E8F04: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x801E8F08: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x801E8F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E8F10: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x801E8F14: bgtz        $v0, L_801E8F2C
    if (SIGNED(ctx->r2) > 0) {
        // 0x801E8F18: sb          $t8, 0x66($s0)
        MEM_B(0X66, ctx->r16) = ctx->r24;
            goto L_801E8F2C;
    }
    // 0x801E8F18: sb          $t8, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r24;
    // 0x801E8F1C: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x801E8F20: jal         0x80034EF8
    // 0x801E8F24: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801E8F24: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x801E8F28: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_801E8F2C:
    // 0x801E8F2C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E8F30:
    // 0x801E8F30: bnel        $s0, $zero, L_801E8EF0
    if (ctx->r16 != 0) {
        // 0x801E8F34: lhu         $t6, 0x20($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X20);
            goto L_801E8EF0;
    }
    goto skip_2;
    // 0x801E8F34: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    skip_2:
L_801E8F38:
    // 0x801E8F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E8F3C:
    // 0x801E8F3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E8F40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8F44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801E8F48: jr          $ra
    // 0x801E8F4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E8F4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
