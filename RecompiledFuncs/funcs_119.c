#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08002B1C_6E1CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002B20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002B24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002B28: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002B30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B34: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002B38: bne         $v0, $zero, L_08002B4C
    if (ctx->r2 != 0) {
        // 0x08002B3C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002B4C;
    }
    // 0x08002B3C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002B40: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002B44: jalr        $t9
    // 0x08002B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08002B4C:
    // 0x08002B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002B54: jr          $ra
    // 0x08002B58: nop

    TRACE_RETURN()
    return;
    // 0x08002B58: nop

;}
RECOMP_FUNC void func_08003378_6E2518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800337C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003380: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003384: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003388: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x0800338C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003390: beq         $t7, $zero, L_080033A8
    if (ctx->r15 == 0) {
        // 0x08003394: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_080033A8;
    }
    // 0x08003394: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003398: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x0800339C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X33B8) << 16);
    // 0x080033A0: jalr        $t9
    // 0x080033A4: addiu       $a0, $a0, 0x33B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X33B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080033A4: addiu       $a0, $a0, 0x33B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X33B8));
    after_0:
L_080033A8:
    // 0x080033A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080033AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080033B0: jr          $ra
    // 0x080033B4: nop

    TRACE_RETURN()
    return;
    // 0x080033B4: nop

;}
RECOMP_FUNC void func_08003770_6E2910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003770: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08003774: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x08003778: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x0800377C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x08003780: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x08003784: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x08003788: lui         $s3, 0x8021
    ctx->r19 = S32(0X8021 << 16);
    // 0x0800378C: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x08003790: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x08003794: lui         $s0, 0x8001
    ctx->r16 = S32(0X8001 << 16);
    // 0x08003798: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x0800379C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x080037A0: addiu       $s3, $s3, -0x3410
    ctx->r19 = ADD32(ctx->r19, -0X3410);
    // 0x080037A4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x080037A8: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x080037AC: addiu       $s0, $s0, -0xB98
    ctx->r16 = ADD32(ctx->r16, -0XB98);
    // 0x080037B0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x080037B4: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x080037B8: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x080037BC: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x080037C0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x080037C4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x080037C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x080037CC: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    // 0x080037D0: jalr        $s0
    // 0x080037D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x080037D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x080037D8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x080037DC: addiu       $a0, $zero, 0x20E
    ctx->r4 = ADD32(0, 0X20E);
    // 0x080037E0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x080037E4: jalr        $s0
    // 0x080037E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x080037E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x080037EC: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    // 0x080037F0: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x080037F4: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x080037F8: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x080037FC: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x08003800: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x08003804: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08003808: lui         $s6, 0x800
    ctx->r22 = S32(RELOC_HI16(28, 0X3B30) << 16);
    // 0x0800380C: lui         $s7, 0x8022
    ctx->r23 = S32(0X8022 << 16);
    // 0x08003810: lui         $s3, 0x8001
    ctx->r19 = S32(0X8001 << 16);
    // 0x08003814: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x08003818: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x0800381C: addiu       $s3, $s3, 0x41C4
    ctx->r19 = ADD32(ctx->r19, 0X41C4);
    // 0x08003820: addiu       $s7, $s7, -0x2218
    ctx->r23 = ADD32(ctx->r23, -0X2218);
    // 0x08003824: addiu       $s6, $s6, 0x3B30
    ctx->r22 = ADD32(ctx->r22, (int16_t)RELOC_LO16(28, 0X3B30));
    // 0x08003828: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x0800382C: addiu       $s2, $zero, 0x25
    ctx->r18 = ADD32(0, 0X25);
    // 0x08003830: addiu       $s4, $zero, 0x3FC
    ctx->r20 = ADD32(0, 0X3FC);
    // 0x08003834: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
L_08003838:
    // 0x08003838: andi        $t6, $s1, 0x3FF
    ctx->r14 = ctx->r17 & 0X3FF;
    // 0x0800383C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x08003840: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x08003844: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x08003848: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x0800384C: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x08003850: jalr        $s7
    // 0x08003854: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    LOOKUP_FUNC(ctx->r23)(rdram, ctx);
        goto after_2;
    // 0x08003854: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x08003858: beq         $v0, $zero, L_08003870
    if (ctx->r2 == 0) {
        // 0x0800385C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08003870;
    }
    // 0x0800385C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08003860: sh          $s2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r18;
    // 0x08003864: jalr        $s3
    // 0x08003868: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_3;
    // 0x08003868: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x0800386C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_08003870:
    // 0x08003870: addiu       $s1, $s1, 0xCC
    ctx->r17 = ADD32(ctx->r17, 0XCC);
    // 0x08003874: bnel        $s1, $s4, L_08003838
    if (ctx->r17 != ctx->r20) {
        // 0x08003878: mfc1        $a3, $f20
        ctx->r7 = (int32_t)ctx->f20.u32l;
            goto L_08003838;
    }
    goto skip_0;
    // 0x08003878: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    skip_0:
    // 0x0800387C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003880: addiu       $t7, $zero, 0xB4
    ctx->r15 = ADD32(0, 0XB4);
    // 0x08003884: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003888: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X38CC) << 16);
    // 0x0800388C: sh          $t7, 0x8A($s5)
    MEM_H(0X8A, ctx->r21) = ctx->r15;
    // 0x08003890: jalr        $t9
    // 0x08003894: addiu       $a0, $a0, 0x38CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X38CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003894: addiu       $a0, $a0, 0x38CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X38CC));
    after_4:
    // 0x08003898: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x0800389C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x080038A0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x080038A4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x080038A8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x080038AC: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x080038B0: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x080038B4: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x080038B8: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x080038BC: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x080038C0: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x080038C4: jr          $ra
    // 0x080038C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x080038C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08004838_6E39D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800483C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004840: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004844: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800484C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004850: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08004854: bne         $v0, $zero, L_08004868
    if (ctx->r2 != 0) {
        // 0x08004858: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08004868;
    }
    // 0x08004858: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800485C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08004860: jalr        $t9
    // 0x08004864: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004864: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_08004868:
    // 0x08004868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800486C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004870: jr          $ra
    // 0x08004874: nop

    TRACE_RETURN()
    return;
    // 0x08004874: nop

;}
RECOMP_FUNC void func_080011E8_6E0388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080011EC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080011F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x080011F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080011FC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001200: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001204: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001208: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x0800120C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001214: jalr        $t9
    // 0x08001218: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001218: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800121C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D94) << 16);
    // 0x08001220: lwc1        $f0, 0x4D94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D94));
    // 0x08001224: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001228: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x0800122C: sw          $t6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r14;
    // 0x08001230: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08001234: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x08001238: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x0800123C: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08001240: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08001244: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08001248: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800124C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08001250: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08001254: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08001258: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x0800125C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001260: jalr        $t9
    // 0x08001264: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001264: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_1:
    // 0x08001268: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x0800126C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001270: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001274: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08001278: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800127C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08001280: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001284: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001288: swc1        $f10, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f10.u32l;
    // 0x0800128C: jalr        $t9
    // 0x08001290: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001290: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_2:
    // 0x08001294: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x08001298: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800129C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080012A0: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x080012A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012A8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x080012AC: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x080012B0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080012B4: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x080012B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080012BC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x080012C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080012C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080012C8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080012CC: jalr        $t9
    // 0x080012D0: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080012D0: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x080012D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080012DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X12FC) << 16);
    // 0x080012E0: jalr        $t9
    // 0x080012E4: addiu       $a0, $a0, 0x12FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X12FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080012E4: addiu       $a0, $a0, 0x12FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X12FC));
    after_4:
    // 0x080012E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080012EC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080012F0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080012F4: jr          $ra
    // 0x080012F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080012F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000524_6DF6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800052C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000530: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08000534: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000538: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800053C: beql        $t7, $zero, L_08000570
    if (ctx->r15 == 0) {
        // 0x08000540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000570;
    }
    goto skip_0;
    // 0x08000540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000544: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x08000548: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800054C: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08000550: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x08000554: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08000558: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800055C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000560: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X57C) << 16);
    // 0x08000564: jalr        $t9
    // 0x08000568: addiu       $a0, $a0, 0x57C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X57C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000568: addiu       $a0, $a0, 0x57C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X57C));
    after_0:
    // 0x0800056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000570:
    // 0x08000570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000574: jr          $ra
    // 0x08000578: nop

    TRACE_RETURN()
    return;
    // 0x08000578: nop

;}
RECOMP_FUNC void func_08001FE0_6E1180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08001FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001FE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001FEC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001FF0: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08001FF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FF8: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001FFC: addiu       $t7, $t6, 0x80
    ctx->r15 = ADD32(ctx->r14, 0X80);
    // 0x08002000: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08002004: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08002008: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800200C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08002010: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08002014: jalr        $t9
    // 0x08002018: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002018: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    after_0:
    // 0x0800201C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002020: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002024: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x08002028: jalr        $t9
    // 0x0800202C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800202C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_1:
    // 0x08002030: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08002034: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002038: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800203C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08002040: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08002044: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x08002048: jalr        $t9
    // 0x0800204C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800204C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x08002050: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08002054: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002058: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800205C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08002060: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08002064: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08002068: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800206C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08002070: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08002074: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002078: add.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x0800207C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x08002080: jalr        $t9
    // 0x08002084: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002084: nop

    after_3:
    // 0x08002088: beq         $v0, $zero, L_080020E4
    if (ctx->r2 == 0) {
        // 0x0800208C: addiu       $t0, $zero, 0x3C
        ctx->r8 = ADD32(0, 0X3C);
            goto L_080020E4;
    }
    // 0x0800208C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x08002090: sh          $t0, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r8;
    // 0x08002094: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08002098: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800209C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080020A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080020A4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080020A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080020AC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080020B0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080020B4: addiu       $a0, $zero, 0x269
    ctx->r4 = ADD32(0, 0X269);
    // 0x080020B8: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x080020BC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x080020C0: jalr        $t9
    // 0x080020C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080020C4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_4:
    // 0x080020C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X212C) << 16);
    // 0x080020D4: jalr        $t9
    // 0x080020D8: addiu       $a0, $a0, 0x212C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X212C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080020D8: addiu       $a0, $a0, 0x212C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X212C));
    after_5:
    // 0x080020DC: b           L_0800211C
    // 0x080020E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800211C;
    // 0x080020E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080020E4:
    // 0x080020E4: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080020E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020EC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080020F0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x080020F4: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080020F8: bne         $v1, $zero, L_08002110
    if (ctx->r3 != 0) {
        // 0x080020FC: sh          $t1, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r9;
            goto L_08002110;
    }
    // 0x080020FC: sh          $t1, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r9;
    // 0x08002100: lw          $t2, 0x68($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X68);
    // 0x08002104: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x08002108: beql        $t3, $zero, L_0800211C
    if (ctx->r11 == 0) {
        // 0x0800210C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800211C;
    }
    goto skip_0;
    // 0x0800210C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_08002110:
    // 0x08002110: jalr        $t9
    // 0x08002114: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002114: nop

    after_6:
    // 0x08002118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800211C:
    // 0x0800211C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08002120: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08002124: jr          $ra
    // 0x08002128: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x08002128: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_08002C78_6E1E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002C7C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002C84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002C88: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002C8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002C90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002C94: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002C98: jalr        $t9
    // 0x08002C9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08002CA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002CA4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08002CA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002CAC: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08002CB0: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08002CB4: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08002CB8: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08002CBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08002CC0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08002CC4: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08002CC8: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08002CCC: jalr        $t9
    // 0x08002CD0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002CD0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x08002CD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002CDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2CF8) << 16);
    // 0x08002CE0: jalr        $t9
    // 0x08002CE4: addiu       $a0, $a0, 0x2CF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2CF8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002CE4: addiu       $a0, $a0, 0x2CF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2CF8));
    after_2:
    // 0x08002CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002CF0: jr          $ra
    // 0x08002CF4: nop

    TRACE_RETURN()
    return;
    // 0x08002CF4: nop

;}
RECOMP_FUNC void func_08003424_6E25C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800342C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003430: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x08003434: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08003438: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800343C: beql        $t7, $zero, L_08003470
    if (ctx->r15 == 0) {
        // 0x08003440: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003470;
    }
    goto skip_0;
    // 0x08003440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003444: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x08003448: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800344C: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08003450: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x08003454: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08003458: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800345C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003460: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X347C) << 16);
    // 0x08003464: jalr        $t9
    // 0x08003468: addiu       $a0, $a0, 0x347C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X347C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003468: addiu       $a0, $a0, 0x347C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X347C));
    after_0:
    // 0x0800346C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003470:
    // 0x08003470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003474: jr          $ra
    // 0x08003478: nop

    TRACE_RETURN()
    return;
    // 0x08003478: nop

;}
RECOMP_FUNC void func_08003A8C_6E2C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003A94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003A98: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003A9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003AA0: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08003AA4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003AA8: bne         $v0, $zero, L_08003ACC
    if (ctx->r2 != 0) {
        // 0x08003AAC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003ACC;
    }
    // 0x08003AAC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003AB0: jalr        $t9
    // 0x08003AB4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003AB4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_0:
    // 0x08003AB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003ABC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003AC0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3ADC) << 16);
    // 0x08003AC4: jalr        $t9
    // 0x08003AC8: addiu       $a0, $a0, 0x3ADC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3ADC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003AC8: addiu       $a0, $a0, 0x3ADC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3ADC));
    after_1:
L_08003ACC:
    // 0x08003ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003AD4: jr          $ra
    // 0x08003AD8: nop

    TRACE_RETURN()
    return;
    // 0x08003AD8: nop

;}
RECOMP_FUNC void func_08000CD4_6DFE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000CD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000CE0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000CE4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000CE8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000CEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000CF0: jalr        $t9
    // 0x08000CF4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CF4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x08000CF8: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08000CFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000D00: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000D04: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000D08: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000D0C: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08000D10: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D18: jalr        $t9
    // 0x08000D1C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D1C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x08000D20: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D84) << 16);
    // 0x08000D24: lwc1        $f0, 0x4D84($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D84));
    // 0x08000D28: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08000D2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000D30: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000D34: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000D38: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08000D3C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08000D40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D44: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08000D48: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000D4C: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000D50: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D58: jalr        $t9
    // 0x08000D5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x08000D60: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000D64: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000D68: jalr        $t9
    // 0x08000D6C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D6C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x08000D70: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08000D74: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000D78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000D7C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08000D80: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000D84: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08000D88: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000D8C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000D90: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x08000D94: jalr        $t9
    // 0x08000D98: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000D98: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_4:
    // 0x08000D9C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08000DA0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08000DA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000DA8: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x08000DAC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DB0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x08000DB4: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000DBC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000DC0: jalr        $t9
    // 0x08000DC4: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000DC4: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x08000DC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DCC: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x08000DD0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000DD4: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08000DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000DDC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000DE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000DE4: jalr        $t9
    // 0x08000DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08000DEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DF0: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08000DF4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000DF8: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000E04: jalr        $t9
    // 0x08000E08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000E08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000E0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XE34) << 16);
    // 0x08000E18: jalr        $t9
    // 0x08000E1C: addiu       $a0, $a0, 0xE34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XE34));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000E1C: addiu       $a0, $a0, 0xE34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XE34));
    after_8:
    // 0x08000E20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000E24: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000E28: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000E2C: jr          $ra
    // 0x08000E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08002F18_6E20B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002F1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002F20: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002F24: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08002F28: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DF0) << 16);
    // 0x08002F2C: ldc1        $f0, 0x4DF0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DF0));
    // 0x08002F30: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002F34: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08002F38: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08002F3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F40: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08002F44: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002F48: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002F4C: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08002F50: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002F54: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08002F58: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08002F5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002F60: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002F64: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002F6C: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08002F70: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08002F74: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002F78: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08002F7C: lbu         $t6, 0xE0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE0);
    // 0x08002F80: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x08002F84: sb          $t7, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r15;
    // 0x08002F88: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08002F8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002F90: jalr        $t9
    // 0x08002F94: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002F94: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_0:
    // 0x08002F98: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08002F9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FA0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08002FA4: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002FA8: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08002FAC: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x08002FB0: bne         $a1, $zero, L_08002FF0
    if (ctx->r5 != 0) {
        // 0x08002FB4: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08002FF0;
    }
    // 0x08002FB4: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08002FB8: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08002FBC: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08002FC0: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x08002FC4: jalr        $t9
    // 0x08002FC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002FC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x08002FCC: bne         $v0, $zero, L_08002FF0
    if (ctx->r2 != 0) {
        // 0x08002FD0: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_08002FF0;
    }
    // 0x08002FD0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08002FD4: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x08002FD8: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x08002FDC: bne         $t1, $zero, L_08002FF0
    if (ctx->r9 != 0) {
        // 0x08002FE0: nop
    
            goto L_08002FF0;
    }
    // 0x08002FE0: nop

    // 0x08002FE4: lbu         $t2, 0xE0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XE0);
    // 0x08002FE8: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x08002FEC: beq         $at, $zero, L_08003000
    if (ctx->r1 == 0) {
        // 0x08002FF0: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08003000;
    }
L_08002FF0:
    // 0x08002FF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FF4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002FF8: jalr        $t9
    // 0x08002FFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002FFC: nop

    after_2:
L_08003000:
    // 0x08003000: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003004: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003008: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800300C: jr          $ra
    // 0x08003010: nop

    TRACE_RETURN()
    return;
    // 0x08003010: nop

;}
RECOMP_FUNC void func_08001AEC_6E0C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AEC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001AF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001AF8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08001AFC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08001B00: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001B04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001B08: jalr        $t9
    // 0x08001B0C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B0C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x08001B10: lui         $t7, 0x60
    ctx->r15 = S32(0X60 << 16);
    // 0x08001B14: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001B18: addiu       $t6, $zero, 0x141
    ctx->r14 = ADD32(0, 0X141);
    // 0x08001B1C: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08001B20: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001B24: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08001B28: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08001B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B30: jalr        $t9
    // 0x08001B34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x08001B38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DD0) << 16);
    // 0x08001B3C: lwc1        $f0, 0x4DD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DD0));
    // 0x08001B40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B44: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08001B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B4C: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x08001B50: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x08001B54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001B58: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08001B5C: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08001B60: jalr        $t9
    // 0x08001B64: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001B64: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x08001B68: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001B6C: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08001B70: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001B74: jalr        $v0
    // 0x08001B78: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08001B78: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x08001B7C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001B80: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001B84: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08001B88: jalr        $t9
    // 0x08001B8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001B8C: nop

    after_4:
    // 0x08001B90: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001B94: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001B98: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x08001B9C: jalr        $t9
    // 0x08001BA0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001BA0: nop

    after_5:
    // 0x08001BA4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x08001BA8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001BAC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08001BB0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08001BB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001BB8: lw          $v1, 0x84($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X84);
    // 0x08001BBC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001BC0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001BC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001BC8: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001BCC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08001BD0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001BD4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001BD8: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x08001BDC: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08001BE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001BE4: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x08001BE8: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08001BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001BF0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001BF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001BF8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001BFC: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x08001C00: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08001C04: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001C08: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x08001C0C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08001C10: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x08001C14: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001C18: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08001C1C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001C20: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08001C24: div.d       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x08001C28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001C2C: add.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f10.d + ctx->f6.d;
    // 0x08001C30: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x08001C34: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x08001C38: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001C3C: div.d       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x08001C40: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08001C44: sub.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x08001C48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001C4C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x08001C50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08001C54: add.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d + ctx->f16.d;
    // 0x08001C58: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x08001C5C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x08001C60: jalr        $t9
    // 0x08001C64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001C64: nop

    after_6:
    // 0x08001C68: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001C6C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08001C70: jalr        $t9
    // 0x08001C74: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001C74: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_7:
    // 0x08001C78: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001C7C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08001C80: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08001C84: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08001C88: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001C8C: mul.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x08001C90: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001C94: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001C98: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x08001C9C: jalr        $t9
    // 0x08001CA0: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001CA0: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_8:
    // 0x08001CA4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x08001CA8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001CAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001CB0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x08001CB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CB8: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x08001CBC: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x08001CC0: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x08001CC4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001CC8: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08001CCC: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
    // 0x08001CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001CD4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08001CD8: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x08001CDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001CE0: jalr        $t9
    // 0x08001CE4: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001CE4: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_9:
    // 0x08001CE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1D10) << 16);
    // 0x08001CF4: jalr        $t9
    // 0x08001CF8: addiu       $a0, $a0, 0x1D10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1D10));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001CF8: addiu       $a0, $a0, 0x1D10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1D10));
    after_10:
    // 0x08001CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001D00: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001D04: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001D08: jr          $ra
    // 0x08001D0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08001D0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_0800320C_6E23AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800320C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003210: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003218: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800321C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003220: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08003224: jalr        $t9
    // 0x08003228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800322C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003230: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X326C) << 16);
    // 0x08003234: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08003238: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x0800323C: addiu       $a0, $a0, 0x326C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X326C));
    // 0x08003240: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003244: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08003248: bne         $v0, $zero, L_0800325C
    if (ctx->r2 != 0) {
        // 0x0800324C: sh          $t6, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r14;
            goto L_0800325C;
    }
    // 0x0800324C: sh          $t6, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r14;
    // 0x08003250: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003254: jalr        $t9
    // 0x08003258: sh          $t7, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003258: sh          $t7, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r15;
    after_1:
L_0800325C:
    // 0x0800325C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003264: jr          $ra
    // 0x08003268: nop

    TRACE_RETURN()
    return;
    // 0x08003268: nop

;}
RECOMP_FUNC void func_08000930_6DFAD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000934: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000938: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800093C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000940: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000944: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000948: jalr        $t9
    // 0x0800094C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800094C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000950: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000954: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800095C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x08000960: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000968: jalr        $t9
    // 0x0800096C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800096C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08000970: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x08000974: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08000978: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x0800097C: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x08000980: lw          $t0, 0xD0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD0);
    // 0x08000984: lui         $t8, 0x220
    ctx->r24 = S32(0X220 << 16);
    // 0x08000988: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800098C: ori         $t8, $t8, 0x87E1
    ctx->r24 = ctx->r24 | 0X87E1;
    // 0x08000990: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x08000994: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000998: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x0800099C: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x080009A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009A4: jalr        $t9
    // 0x080009A8: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080009A8: sw          $t0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r8;
    after_2:
    // 0x080009AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080009B0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080009B4: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080009B8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080009BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009C4: jalr        $t9
    // 0x080009C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080009C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080009CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009D0: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080009D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009D8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x080009DC: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x080009E0: jalr        $t9
    // 0x080009E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080009E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080009E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009EC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009F4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080009F8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x080009FC: jalr        $t9
    // 0x08000A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08000A04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A08: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000A14: jalr        $t9
    // 0x08000A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x08000A1C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D80) << 16);
    // 0x08000A20: lwc1        $f0, 0x4D80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D80));
    // 0x08000A24: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A28: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A2C: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000A30: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X4BD0) << 16);
    // 0x08000A34: addiu       $a1, $a1, 0x4BD0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X4BD0));
    // 0x08000A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A40: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000A44: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000A48: jalr        $t9
    // 0x08000A4C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000A4C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_7:
    // 0x08000A50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A54: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000A60: jalr        $t9
    // 0x08000A64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000A64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x08000A68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000A6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000A70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000A74: jr          $ra
    // 0x08000A78: nop

    TRACE_RETURN()
    return;
    // 0x08000A78: nop

    // 0x08000A7C: jr          $ra
    // 0x08000A80: nop

    TRACE_RETURN()
    return;
    // 0x08000A80: nop

;}
RECOMP_FUNC void func_08002694_6E1834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800269C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080026A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080026A4: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x080026A8: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x080026AC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080026B0: sw          $t9, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r25;
    // 0x080026B4: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x080026B8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080026BC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x080026C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080026C4: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080026C8: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x080026CC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080026D0: sb          $t7, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r15;
    // 0x080026D4: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    // 0x080026D8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080026DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080026E0: sw          $v1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r3;
    // 0x080026E4: jalr        $t9
    // 0x080026E8: sw          $v1, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080026E8: sw          $v1, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r3;
    after_0:
    // 0x080026EC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080026F0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080026F4: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x080026F8: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080026FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002704: jalr        $t9
    // 0x08002708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x0800270C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002710: addiu       $t0, $zero, 0xE1
    ctx->r8 = ADD32(0, 0XE1);
    // 0x08002714: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08002718: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x0800271C: jalr        $t9
    // 0x08002720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08002724: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002728: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800272C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002730: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x08002734: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x08002738: jalr        $t9
    // 0x0800273C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800273C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08002740: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002744: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08002748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800274C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x08002750: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x08002754: jalr        $t9
    // 0x08002758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x0800275C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002760: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002768: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x0800276C: jalr        $t9
    // 0x08002770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08002774: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002778: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x0800277C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X4BF0) << 16);
    // 0x08002780: addiu       $a1, $a1, 0x4BF0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X4BF0));
    // 0x08002784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002788: jalr        $t9
    // 0x0800278C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800278C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x08002790: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002794: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800279C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080027A0: jalr        $t9
    // 0x080027A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080027A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x080027A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080027AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080027B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080027B4: jr          $ra
    // 0x080027B8: nop

    TRACE_RETURN()
    return;
    // 0x080027B8: nop

;}
RECOMP_FUNC void func_08004904_6E3AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004904: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004908: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800490C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004910: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004914: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x08004918: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800491C: sb          $t6, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r14;
    // 0x08004920: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004924: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004928: lbu         $a1, 0xE0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XE0);
    // 0x0800492C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08004930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004934: jalr        $t9
    // 0x08004938: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004938: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800493C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08004940: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004944: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08004948: lui         $t1, 0x40
    ctx->r9 = S32(0X40 << 16);
    // 0x0800494C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004950: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
    // 0x08004954: ori         $t1, $t1, 0x6E2
    ctx->r9 = ctx->r9 | 0X6E2;
    // 0x08004958: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800495C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x08004960: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x08004964: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08004968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800496C: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    // 0x08004970: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08004974: jalr        $t9
    // 0x08004978: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004978: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800497C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004980: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08004984: jalr        $t9
    // 0x08004988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x0800498C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004990: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08004994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004998: jalr        $t9
    // 0x0800499C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800499C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x080049A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080049A4: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x080049A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080049AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080049B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080049B4: jalr        $t9
    // 0x080049B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080049B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080049BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080049C0: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080049C4: jalr        $t9
    // 0x080049C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080049C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080049CC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E1C) << 16);
    // 0x080049D0: lwc1        $f0, 0x4E1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E1C));
    // 0x080049D4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080049D8: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x080049DC: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x080049E0: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x080049E4: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x080049E8: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080049EC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080049F0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080049F4: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080049F8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080049FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004A00: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08004A04: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E20) << 16);
    // 0x08004A08: lwc1        $f10, 0x4E20($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E20));
    // 0x08004A0C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08004A10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A14: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08004A18: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08004A1C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08004A20: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08004A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004A28: jalr        $t9
    // 0x08004A2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08004A2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x08004A30: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004A34: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08004A38: jalr        $t9
    // 0x08004A3C: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004A3C: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    after_7:
    // 0x08004A40: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E28) << 16);
    // 0x08004A44: ldc1        $f18, 0x4E28($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E28));
    // 0x08004A48: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08004A4C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08004A50: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x08004A54: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08004A58: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    // 0x08004A5C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08004A60: jalr        $t9
    // 0x08004A64: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08004A64: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    after_8:
    // 0x08004A68: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E30) << 16);
    // 0x08004A6C: ldc1        $f10, 0x4E30($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E30));
    // 0x08004A70: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08004A74: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004A78: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08004A7C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004A80: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X4AA8) << 16);
    // 0x08004A84: addiu       $a0, $a0, 0x4AA8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X4AA8));
    // 0x08004A88: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08004A8C: jalr        $t9
    // 0x08004A90: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08004A90: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    after_9:
    // 0x08004A94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004A98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004A9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004AA0: jr          $ra
    // 0x08004AA4: nop

    TRACE_RETURN()
    return;
    // 0x08004AA4: nop

;}
RECOMP_FUNC void func_0800284C_6E19EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800284C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002850: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002858: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800285C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08002860: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08002864: jalr        $t9
    // 0x08002868: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002868: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800286C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002870: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08002874: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x08002878: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800287C: addiu       $a1, $a1, -0x33D0
    ctx->r5 = ADD32(ctx->r5, -0X33D0);
    // 0x08002880: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x08002884: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002888: bne         $v0, $zero, L_080028FC
    if (ctx->r2 != 0) {
        // 0x0800288C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080028FC;
    }
    // 0x0800288C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002890: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08002894: lbu         $v0, 0x13A($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X13A);
    // 0x08002898: addiu       $a0, $zero, 0x25F
    ctx->r4 = ADD32(0, 0X25F);
    // 0x0800289C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x080028A0: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x080028A4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x080028A8: beq         $v1, $zero, L_080028D4
    if (ctx->r3 == 0) {
        // 0x080028AC: sb          $t8, 0x13A($a1)
        MEM_B(0X13A, ctx->r5) = ctx->r24;
            goto L_080028D4;
    }
    // 0x080028AC: sb          $t8, 0x13A($a1)
    MEM_B(0X13A, ctx->r5) = ctx->r24;
    // 0x080028B0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080028B4: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x080028B8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080028BC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080028C0: addiu       $a0, $zero, 0x25E
    ctx->r4 = ADD32(0, 0X25E);
    // 0x080028C4: jalr        $t9
    // 0x080028C8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080028C8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x080028CC: b           L_080028E8
    // 0x080028D0: nop

        goto L_080028E8;
    // 0x080028D0: nop

L_080028D4:
    // 0x080028D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080028D8: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x080028DC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080028E0: jalr        $t9
    // 0x080028E4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080028E4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_2:
L_080028E8:
    // 0x080028E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080028EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080028F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X290C) << 16);
    // 0x080028F4: jalr        $t9
    // 0x080028F8: addiu       $a0, $a0, 0x290C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X290C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080028F8: addiu       $a0, $a0, 0x290C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X290C));
    after_3:
L_080028FC:
    // 0x080028FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002904: jr          $ra
    // 0x08002908: nop

    TRACE_RETURN()
    return;
    // 0x08002908: nop

;}
RECOMP_FUNC void func_080012FC_6E049C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001304: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001308: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0800130C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D98) << 16);
    // 0x08001310: ldc1        $f0, 0x4D98($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D98));
    // 0x08001314: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001318: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0800131C: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001320: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001324: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001328: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x0800132C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001330: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08001334: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DA0) << 16);
    // 0x08001338: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x0800133C: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08001340: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001344: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001348: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800134C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001350: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001354: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001358: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x0800135C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X13CC) << 16);
    // 0x08001360: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001364: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001368: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x0800136C: ldc1        $f8, 0x4DA0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DA0));
    // 0x08001370: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08001374: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001378: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x0800137C: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001380: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x08001384: nop

    // 0x08001388: bc1fl       L_08001398
    if (!c1cs) {
        // 0x0800138C: lwc1        $f4, 0x1C($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
            goto L_08001398;
    }
    goto skip_0;
    // 0x0800138C: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    skip_0:
    // 0x08001390: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    // 0x08001394: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
L_08001398:
    // 0x08001398: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DA8) << 16);
    // 0x0800139C: ldc1        $f8, 0x4DA8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DA8));
    // 0x080013A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080013A4: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x080013A8: nop

    // 0x080013AC: bc1fl       L_080013C0
    if (!c1cs) {
        // 0x080013B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080013C0;
    }
    goto skip_1;
    // 0x080013B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x080013B4: jalr        $t9
    // 0x080013B8: addiu       $a0, $a0, 0x13CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X13CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013B8: addiu       $a0, $a0, 0x13CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X13CC));
    after_0:
    // 0x080013BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080013C0:
    // 0x080013C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080013C4: jr          $ra
    // 0x080013C8: nop

    TRACE_RETURN()
    return;
    // 0x080013C8: nop

;}
RECOMP_FUNC void func_08002B5C_6E1CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002B60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002B68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002B6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002B70: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002B74: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002B78: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002B80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002B84: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002B88: jalr        $t9
    // 0x08002B8C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B8C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08002B90: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B94: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002B98: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2BB4) << 16);
    // 0x08002B9C: jalr        $t9
    // 0x08002BA0: addiu       $a0, $a0, 0x2BB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2BB4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002BA0: addiu       $a0, $a0, 0x2BB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2BB4));
    after_1:
    // 0x08002BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002BAC: jr          $ra
    // 0x08002BB0: nop

    TRACE_RETURN()
    return;
    // 0x08002BB0: nop

;}
RECOMP_FUNC void func_080048B8_6E3A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080048B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080048BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080048C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080048C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080048C8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080048CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080048D0: jalr        $t9
    // 0x080048D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080048D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x080048D8: bne         $v0, $zero, L_080048F4
    if (ctx->r2 != 0) {
        // 0x080048DC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080048F4;
    }
    // 0x080048DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080048E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080048E4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080048E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080048EC: jalr        $t9
    // 0x080048F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080048F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_080048F4:
    // 0x080048F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080048F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080048FC: jr          $ra
    // 0x08004900: nop

    TRACE_RETURN()
    return;
    // 0x08004900: nop

;}
RECOMP_FUNC void func_08002A58_6E1BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002A64: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002A68: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x08002A6C: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x08002A70: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002A74: bne         $v0, $zero, L_08002AB4
    if (ctx->r2 != 0) {
        // 0x08002A78: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002AB4;
    }
    // 0x08002A78: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002A7C: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08002A80: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002A84: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002A88: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08002A8C: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08002A90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002A94: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002A98: jalr        $t9
    // 0x08002A9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002AA0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002AA4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002AA8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2AC4) << 16);
    // 0x08002AAC: jalr        $t9
    // 0x08002AB0: addiu       $a0, $a0, 0x2AC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2AC4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002AB0: addiu       $a0, $a0, 0x2AC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2AC4));
    after_1:
L_08002AB4:
    // 0x08002AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002AB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002ABC: jr          $ra
    // 0x08002AC0: nop

    TRACE_RETURN()
    return;
    // 0x08002AC0: nop

;}
RECOMP_FUNC void func_08000000_6DF1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800000C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000010: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x08000014: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x08000018: ori         $t6, $t6, 0x87E1
    ctx->r14 = ctx->r14 | 0X87E1;
    // 0x0800001C: sw          $t9, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r25;
    // 0x08000020: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000024: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000028: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x0800002C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000030: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000034: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000038: sb          $t7, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r15;
    // 0x0800003C: jalr        $t9
    // 0x08000040: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000040: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    after_0:
    // 0x08000044: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000048: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800004C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000050: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800005C: jalr        $t9
    // 0x08000060: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000060: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000064: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000068: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x0800006C: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000070: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x08000074: jalr        $t9
    // 0x08000078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x0800007C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000080: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000088: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x0800008C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08000090: jalr        $t9
    // 0x08000094: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000094: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000098: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800009C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x080000A8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x080000AC: jalr        $t9
    // 0x080000B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080000B4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000B8: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080000BC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X4BB0) << 16);
    // 0x080000C0: addiu       $a1, $a1, 0x4BB0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X4BB0));
    // 0x080000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000C8: jalr        $t9
    // 0x080000CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x080000D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000D4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080000E0: jalr        $t9
    // 0x080000E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x080000E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080000EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080000F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080000F4: jr          $ra
    // 0x080000F8: nop

    TRACE_RETURN()
    return;
    // 0x080000F8: nop

;}
RECOMP_FUNC void func_08001828_6E09C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001828: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x0800182C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001830: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001834: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08001838: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800183C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08001840: jalr        $t9
    // 0x08001844: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001844: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001848: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0800184C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X1AEC) << 16);
    // 0x08001850: addiu       $a1, $a1, 0x1AEC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X1AEC));
    // 0x08001854: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001858: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x0800185C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08001860: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x08001864: bne         $v1, $zero, L_080018F0
    if (ctx->r3 != 0) {
        // 0x08001868: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080018F0;
    }
    // 0x08001868: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800186C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001870: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001874: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001878: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800187C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001880: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08001884: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001888: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x0800188C: jalr        $t9
    // 0x08001890: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001890: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x08001894: beq         $v0, $zero, L_080018DC
    if (ctx->r2 == 0) {
        // 0x08001898: addiu       $t7, $zero, 0x25
        ctx->r15 = ADD32(0, 0X25);
            goto L_080018DC;
    }
    // 0x08001898: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x0800189C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080018A0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080018A4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080018A8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080018AC: jalr        $t9
    // 0x080018B0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080018B0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_2:
    // 0x080018B4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080018B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080018BC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080018C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080018C4: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080018C8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x080018CC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080018D0: addiu       $a0, $zero, 0x268
    ctx->r4 = ADD32(0, 0X268);
    // 0x080018D4: jalr        $t9
    // 0x080018D8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080018D8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_3:
L_080018DC:
    // 0x080018DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1900) << 16);
    // 0x080018E8: jalr        $t9
    // 0x080018EC: addiu       $a0, $a0, 0x1900
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1900));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080018EC: addiu       $a0, $a0, 0x1900
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1900));
    after_4:
L_080018F0:
    // 0x080018F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080018F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080018F8: jr          $ra
    // 0x080018FC: nop

    TRACE_RETURN()
    return;
    // 0x080018FC: nop

;}
RECOMP_FUNC void func_08000A84_6DFC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000A88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000A8C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000A90: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000A94: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0XCD4) << 16);
    // 0x08000A98: addiu       $a1, $a1, 0xCD4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0XCD4));
    // 0x08000A9C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000AA0: bne         $v0, $zero, L_08000B10
    if (ctx->r2 != 0) {
        // 0x08000AA4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000B10;
    }
    // 0x08000AA4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000AA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000AAC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000AB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000AB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AB8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000ABC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08000AC0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000AC4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000AC8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08000ACC: jalr        $t9
    // 0x08000AD0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AD0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08000AD4: beq         $v0, $zero, L_08000AFC
    if (ctx->r2 == 0) {
        // 0x08000AD8: addiu       $t7, $zero, 0x25
        ctx->r15 = ADD32(0, 0X25);
            goto L_08000AFC;
    }
    // 0x08000AD8: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08000ADC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000AE0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000AE4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000AE8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000AEC: jalr        $t9
    // 0x08000AF0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000AF0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_1:
    // 0x08000AF4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08000AF8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08000AFC:
    // 0x08000AFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B00: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B04: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XB20) << 16);
    // 0x08000B08: jalr        $t9
    // 0x08000B0C: addiu       $a0, $a0, 0xB20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XB20));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B0C: addiu       $a0, $a0, 0xB20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XB20));
    after_2:
L_08000B10:
    // 0x08000B10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000B18: jr          $ra
    // 0x08000B1C: nop

    TRACE_RETURN()
    return;
    // 0x08000B1C: nop

;}
RECOMP_FUNC void func_080047F8_6E3998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080047F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080047FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004800: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08004804: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004808: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x0800480C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08004810: beq         $t7, $zero, L_08004828
    if (ctx->r15 == 0) {
        // 0x08004814: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08004828;
    }
    // 0x08004814: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004818: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x0800481C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X4838) << 16);
    // 0x08004820: jalr        $t9
    // 0x08004824: addiu       $a0, $a0, 0x4838
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X4838));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004824: addiu       $a0, $a0, 0x4838
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X4838));
    after_0:
L_08004828:
    // 0x08004828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800482C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004830: jr          $ra
    // 0x08004834: nop

    TRACE_RETURN()
    return;
    // 0x08004834: nop

;}
RECOMP_FUNC void func_080002AC_6DF44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080002B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080002B8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080002BC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080002C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080002C4: jalr        $t9
    // 0x080002C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x080002CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080002D0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080002D4: lui         $a3, 0xC040
    ctx->r7 = S32(0XC040 << 16);
    // 0x080002D8: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x080002DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080002E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002E4: slti        $a1, $v1, 0x13
    ctx->r5 = SIGNED(ctx->r3) < 0X13 ? 1 : 0;
    // 0x080002E8: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x080002EC: beq         $a1, $zero, L_0800037C
    if (ctx->r5 == 0) {
        // 0x080002F0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800037C;
    }
    // 0x080002F0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080002F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080002F8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080002FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000300: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X6E0) << 16);
    // 0x08000304: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000308: addiu       $a1, $a1, 0x6E0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X6E0));
    // 0x0800030C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000310: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000314: jalr        $t9
    // 0x08000318: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000318: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x0800031C: beq         $v0, $zero, L_08000368
    if (ctx->r2 == 0) {
        // 0x08000320: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_08000368;
    }
    // 0x08000320: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000324: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000328: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800032C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000330: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000334: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08000338: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800033C: jalr        $t9
    // 0x08000340: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000340: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08000344: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000348: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800034C: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08000350: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000354: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x08000358: jalr        $t9
    // 0x0800035C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800035C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    after_3:
    // 0x08000360: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08000364: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_08000368:
    // 0x08000368: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800036C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000370: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X38C) << 16);
    // 0x08000374: jalr        $t9
    // 0x08000378: addiu       $a0, $a0, 0x38C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X38C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000378: addiu       $a0, $a0, 0x38C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X38C));
    after_4:
L_0800037C:
    // 0x0800037C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000380: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000384: jr          $ra
    // 0x08000388: nop

    TRACE_RETURN()
    return;
    // 0x08000388: nop

;}
RECOMP_FUNC void func_0800212C_6E12CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800212C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002138: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800213C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08002140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002144: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002148: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800214C: jalr        $t9
    // 0x08002150: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002150: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002158: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800215C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002160: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08002164: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x08002168: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x0800216C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08002170: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08002174: sh          $a1, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r5;
    // 0x08002178: sh          $a1, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r5;
    // 0x0800217C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002180: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002184: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002188: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800218C: bne         $v0, $zero, L_0800219C
    if (ctx->r2 != 0) {
        // 0x08002190: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800219C;
    }
    // 0x08002190: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002194: jalr        $t9
    // 0x08002198: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002198: nop

    after_1:
L_0800219C:
    // 0x0800219C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080021A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080021A4: jr          $ra
    // 0x080021A8: nop

    TRACE_RETURN()
    return;
    // 0x080021A8: nop

;}
RECOMP_FUNC void func_0800141C_6E05BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800141C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001424: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001428: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0800142C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DB8) << 16);
    // 0x08001430: ldc1        $f0, 0x4DB8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DB8));
    // 0x08001434: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001438: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0800143C: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08001440: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DC0) << 16);
    // 0x08001444: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001448: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800144C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001450: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x08001454: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001458: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0800145C: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08001460: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001464: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x08001468: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800146C: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08001470: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08001474: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001478: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x0800147C: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08001480: ldc1        $f8, 0x4DC0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DC0));
    // 0x08001484: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x08001488: nop

    // 0x0800148C: bc1tl       L_080014A0
    if (c1cs) {
        // 0x08001490: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080014A0;
    }
    goto skip_0;
    // 0x08001490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001494: jalr        $t9
    // 0x08001498: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001498: nop

    after_0:
    // 0x0800149C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080014A0:
    // 0x080014A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080014A4: jr          $ra
    // 0x080014A8: nop

    TRACE_RETURN()
    return;
    // 0x080014A8: nop

    // 0x080014AC: jr          $ra
    // 0x080014B0: nop

    TRACE_RETURN()
    return;
    // 0x080014B0: nop

;}
RECOMP_FUNC void func_080000FC_6DF29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000100: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000104: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000108: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800010C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000110: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000114: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800011C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000120: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000124: jalr        $t9
    // 0x08000128: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000128: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x0800012C: bne         $v0, $zero, L_080001B8
    if (ctx->r2 != 0) {
        // 0x08000130: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080001B8;
    }
    // 0x08000130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000134: addiu       $t9, $t9, -0x1284
    ctx->r25 = ADD32(ctx->r25, -0X1284);
    // 0x08000138: jalr        $t9
    // 0x0800013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08000140: beq         $v0, $zero, L_08000168
    if (ctx->r2 == 0) {
        // 0x08000144: lui         $at, 0xFEFF
        ctx->r1 = S32(0XFEFF << 16);
            goto L_08000168;
    }
    // 0x08000144: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x08000148: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800014C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000158: jalr        $t9
    // 0x0800015C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800015C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x08000160: b           L_080001BC
    // 0x08000164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080001BC;
    // 0x08000164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000168:
    // 0x08000168: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x0800016C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000170: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000174: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08000178: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x0800017C: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x08000180: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000184: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08000188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800018C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000190: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000194: jalr        $t9
    // 0x08000198: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000198: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x0800019C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001A0: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x080001A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1CC) << 16);
    // 0x080001AC: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x080001B0: jalr        $t9
    // 0x080001B4: addiu       $a0, $a0, 0x1CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080001B4: addiu       $a0, $a0, 0x1CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1CC));
    after_4:
L_080001B8:
    // 0x080001B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080001BC:
    // 0x080001BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080001C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080001C4: jr          $ra
    // 0x080001C8: nop

    TRACE_RETURN()
    return;
    // 0x080001C8: nop

;}
RECOMP_FUNC void func_0800390C_6E2AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800390C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003910: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800391C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003920: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08003924: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08003928: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800392C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003930: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08003934: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08003938: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3958) << 16);
    // 0x0800393C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003940: jalr        $t9
    // 0x08003944: addiu       $a0, $a0, 0x3958
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3958));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003944: addiu       $a0, $a0, 0x3958
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3958));
    after_0:
    // 0x08003948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800394C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003950: jr          $ra
    // 0x08003954: nop

    TRACE_RETURN()
    return;
    // 0x08003954: nop

;}
RECOMP_FUNC void func_08004468_6E3608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800446C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08004474: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08004478: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x0800447C: lui         $t6, 0x68
    ctx->r14 = S32(0X68 << 16);
    // 0x08004480: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x08004484: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004488: ori         $t6, $t6, 0x6E1
    ctx->r14 = ctx->r14 | 0X6E1;
    // 0x0800448C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08004490: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08004494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004498: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800449C: jalr        $t9
    // 0x080044A0: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080044A0: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    after_0:
    // 0x080044A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080044A8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080044AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080044B0: jalr        $t9
    // 0x080044B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080044B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x080044B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080044BC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080044C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080044C4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080044C8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080044CC: jalr        $t9
    // 0x080044D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080044D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080044D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080044D8: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080044DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080044E0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x080044E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080044E8: jalr        $t9
    // 0x080044EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080044EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080044F0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080044F4: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x080044F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080044FC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08004500: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x08004504: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x08004508: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x0800450C: sw          $v1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r3;
    // 0x08004510: sw          $v1, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r3;
    // 0x08004514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004518: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x0800451C: jalr        $t9
    // 0x08004520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08004524: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4E18) << 16);
    // 0x08004528: lwc1        $f0, 0x4E18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4E18));
    // 0x0800452C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08004530: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004534: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08004538: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X4C30) << 16);
    // 0x0800453C: addiu       $a1, $a1, 0x4C30
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X4C30));
    // 0x08004540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004544: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004548: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x0800454C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08004550: jalr        $t9
    // 0x08004554: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004554: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_5:
    // 0x08004558: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800455C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08004560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004568: jalr        $t9
    // 0x0800456C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800456C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x08004570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08004574: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08004578: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800457C: jr          $ra
    // 0x08004580: nop

    TRACE_RETURN()
    return;
    // 0x08004580: nop

;}
RECOMP_FUNC void func_080010F4_6E0294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010F4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4D90) << 16);
    // 0x080010F8: lwc1        $f0, 0x4D90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4D90));
    // 0x080010FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001104: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08001108: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x0800110C: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08001110: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08001114: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001118: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800111C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001120: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X113C) << 16);
    // 0x08001124: jalr        $t9
    // 0x08001128: addiu       $a0, $a0, 0x113C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X113C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001128: addiu       $a0, $a0, 0x113C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X113C));
    after_0:
    // 0x0800112C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001134: jr          $ra
    // 0x08001138: nop

    TRACE_RETURN()
    return;
    // 0x08001138: nop

;}
RECOMP_FUNC void func_080035EC_6E278C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080035EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080035F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080035F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080035F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080035FC: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x08003600: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x08003604: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x08003608: sw          $t9, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r25;
    // 0x0800360C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003610: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08003614: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08003618: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x0800361C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003620: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003624: sb          $t7, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r15;
    // 0x08003628: jalr        $t9
    // 0x0800362C: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800362C: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    after_0:
    // 0x08003630: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003634: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003638: jalr        $t9
    // 0x0800363C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800363C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08003640: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003644: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003648: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x0800364C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003658: jalr        $t9
    // 0x0800365C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800365C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08003660: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003664: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003668: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x0800366C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08003670: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08003674: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003678: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x0800367C: sb          $t1, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r9;
    // 0x08003680: sb          $t2, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r10;
    // 0x08003684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003688: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x0800368C: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x08003690: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003694: swc1        $f0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f0.u32l;
    // 0x08003698: jalr        $t9
    // 0x0800369C: swc1        $f0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800369C: swc1        $f0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x080036A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080036A4: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080036A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036AC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x080036B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x080036B4: jalr        $t9
    // 0x080036B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080036B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080036BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080036C0: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080036C4: jalr        $t9
    // 0x080036C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080036C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080036CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080036D0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080036D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036D8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x080036DC: jalr        $t9
    // 0x080036E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080036E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x080036E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080036E8: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080036EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X4C10) << 16);
    // 0x080036F0: addiu       $a1, $a1, 0x4C10
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X4C10));
    // 0x080036F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036F8: jalr        $t9
    // 0x080036FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080036FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08003700: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003704: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800370C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003710: jalr        $t9
    // 0x08003714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x08003718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800371C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003724: jr          $ra
    // 0x08003728: nop

    TRACE_RETURN()
    return;
    // 0x08003728: nop

;}
RECOMP_FUNC void func_08001EBC_6E105C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001EC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001EC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001ECC: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001ED0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001ED4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001ED8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001EDC: jalr        $t9
    // 0x08001EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001EE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001EE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001EEC: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x08001EF0: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x08001EF4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08001EF8: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08001EFC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08001F00: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x08001F04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F08: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001F0C: sh          $t6, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r14;
    // 0x08001F10: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001F14: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08001F18: bne         $v0, $zero, L_08001F28
    if (ctx->r2 != 0) {
        // 0x08001F1C: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08001F28;
    }
    // 0x08001F1C: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08001F20: jalr        $t9
    // 0x08001F24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001F24: nop

    after_1:
L_08001F28:
    // 0x08001F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001F30: jr          $ra
    // 0x08001F34: nop

    TRACE_RETURN()
    return;
    // 0x08001F34: nop

;}
RECOMP_FUNC void func_08001794_6E0934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800179C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080017A0: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080017A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080017A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080017AC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080017B0: beq         $t7, $zero, L_080017C0
    if (ctx->r15 == 0) {
        // 0x080017B4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(28, 0X17D0) << 16);
            goto L_080017C0;
    }
    // 0x080017B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X17D0) << 16);
    // 0x080017B8: jalr        $t9
    // 0x080017BC: addiu       $a0, $a0, 0x17D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X17D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017BC: addiu       $a0, $a0, 0x17D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X17D0));
    after_0:
L_080017C0:
    // 0x080017C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080017C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080017C8: jr          $ra
    // 0x080017CC: nop

    TRACE_RETURN()
    return;
    // 0x080017CC: nop

;}
RECOMP_FUNC void func_08002A18_6E1BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A20: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002A24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A28: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08002A2C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002A30: beq         $t7, $zero, L_08002A48
    if (ctx->r15 == 0) {
        // 0x08002A34: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08002A48;
    }
    // 0x08002A34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A38: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08002A3C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2A58) << 16);
    // 0x08002A40: jalr        $t9
    // 0x08002A44: addiu       $a0, $a0, 0x2A58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2A58));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002A44: addiu       $a0, $a0, 0x2A58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2A58));
    after_0:
L_08002A48:
    // 0x08002A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002A50: jr          $ra
    // 0x08002A54: nop

    TRACE_RETURN()
    return;
    // 0x08002A54: nop

;}
RECOMP_FUNC void func_0800113C_6E02DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800113C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001144: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001148: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800114C: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001150: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001154: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XF20) << 16);
    // 0x08001158: bgez        $t6, L_0800116C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x0800115C: andi        $t7, $t6, 0x3
        ctx->r15 = ctx->r14 & 0X3;
            goto L_0800116C;
    }
    // 0x0800115C: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x08001160: beq         $t7, $zero, L_0800116C
    if (ctx->r15 == 0) {
        // 0x08001164: nop
    
            goto L_0800116C;
    }
    // 0x08001164: nop

    // 0x08001168: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_0800116C:
    // 0x0800116C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x08001170: beq         $at, $zero, L_0800118C
    if (ctx->r1 == 0) {
        // 0x08001174: addiu       $a0, $a0, 0xF20
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XF20));
            goto L_0800118C;
    }
    // 0x08001174: addiu       $a0, $a0, 0xF20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XF20));
    // 0x08001178: lw          $t8, 0x60($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X60);
    // 0x0800117C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08001180: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001184: b           L_08001198
    // 0x08001188: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
        goto L_08001198;
    // 0x08001188: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
L_0800118C:
    // 0x0800118C: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08001190: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x08001194: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
L_08001198:
    // 0x08001198: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x0800119C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080011A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011A4: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x080011A8: bne         $v0, $zero, L_080011D0
    if (ctx->r2 != 0) {
        // 0x080011AC: sh          $t2, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r10;
            goto L_080011D0;
    }
    // 0x080011AC: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    // 0x080011B0: lw          $t3, 0x60($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X60);
    // 0x080011B4: lw          $t5, 0x68($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X68);
    // 0x080011B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011BC: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x080011C0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x080011C4: sw          $t4, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r12;
    // 0x080011C8: jalr        $t9
    // 0x080011CC: sw          $t6, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011CC: sw          $t6, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r14;
    after_0:
L_080011D0:
    // 0x080011D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080011D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080011D8: jr          $ra
    // 0x080011DC: nop

    TRACE_RETURN()
    return;
    // 0x080011DC: nop

    // 0x080011E0: jr          $ra
    // 0x080011E4: nop

    TRACE_RETURN()
    return;
    // 0x080011E4: nop

;}
RECOMP_FUNC void func_080043C4_6E3564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080043C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080043C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080043CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080043D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080043D4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080043D8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080043DC: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080043E0: jalr        $t9
    // 0x080043E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080043E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080043E8: beq         $v0, $zero, L_08004458
    if (ctx->r2 == 0) {
        // 0x080043EC: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08004458;
    }
    // 0x080043EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080043F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080043F4: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080043F8: jalr        $t9
    // 0x080043FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080043FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x08004400: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08004404: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08004408: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800440C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08004410: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08004414: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08004418: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800441C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08004420: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004424: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08004428: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800442C: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08004430: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08004434: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08004438: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800443C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08004440: jalr        $t9
    // 0x08004444: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004444: nop

    after_2:
    // 0x08004448: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800444C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08004450: jalr        $t9
    // 0x08004454: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004454: nop

    after_3:
L_08004458:
    // 0x08004458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800445C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004460: jr          $ra
    // 0x08004464: nop

    TRACE_RETURN()
    return;
    // 0x08004464: nop

;}
RECOMP_FUNC void func_0800038C_6DF52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800038C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000390: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000394: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000398: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x0800039C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080003A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080003A4: jalr        $t9
    // 0x080003A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x080003AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080003B0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080003B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080003B8: lhu         $v1, 0x8A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8A);
    // 0x080003BC: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x080003C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C4: slti        $a1, $v1, 0xB
    ctx->r5 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x080003C8: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x080003CC: beq         $a1, $zero, L_0800045C
    if (ctx->r5 == 0) {
        // 0x080003D0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800045C;
    }
    // 0x080003D0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080003D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080003D8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x080003DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080003E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X6E0) << 16);
    // 0x080003E4: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080003E8: addiu       $a1, $a1, 0x6E0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X6E0));
    // 0x080003EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080003F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080003F4: jalr        $t9
    // 0x080003F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x080003FC: beq         $v0, $zero, L_08000448
    if (ctx->r2 == 0) {
        // 0x08000400: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_08000448;
    }
    // 0x08000400: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000404: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000408: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800040C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000410: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000414: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08000418: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x0800041C: jalr        $t9
    // 0x08000420: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000420: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08000424: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000428: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800042C: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08000430: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000434: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x08000438: jalr        $t9
    // 0x0800043C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800043C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    after_3:
    // 0x08000440: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08000444: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_08000448:
    // 0x08000448: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800044C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000450: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X46C) << 16);
    // 0x08000454: jalr        $t9
    // 0x08000458: addiu       $a0, $a0, 0x46C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X46C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000458: addiu       $a0, $a0, 0x46C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X46C));
    after_4:
L_0800045C:
    // 0x0800045C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000460: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000464: jr          $ra
    // 0x08000468: nop

    TRACE_RETURN()
    return;
    // 0x08000468: nop

;}
RECOMP_FUNC void func_08001640_6E07E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001644: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800164C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001650: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001654: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001658: jalr        $t9
    // 0x0800165C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800165C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x08001660: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001664: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001668: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800166C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001670: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001674: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001678: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x0800167C: bnel        $t7, $zero, L_080016B0
    if (ctx->r15 != 0) {
        // 0x08001680: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080016B0;
    }
    goto skip_0;
    // 0x08001680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001684: jalr        $t9
    // 0x08001688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800168C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x08001690: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001694: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08001698: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800169C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X16BC) << 16);
    // 0x080016A0: addiu       $a0, $a0, 0x16BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X16BC));
    // 0x080016A4: jalr        $t9
    // 0x080016A8: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080016A8: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    after_2:
    // 0x080016AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080016B0:
    // 0x080016B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080016B4: jr          $ra
    // 0x080016B8: nop

    TRACE_RETURN()
    return;
    // 0x080016B8: nop

;}
RECOMP_FUNC void func_08002D74_6E1F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002D78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002D7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002D80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002D84: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x08002D88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002D8C: sb          $t6, 0xE0($a0)
    MEM_B(0XE0, ctx->r4) = ctx->r14;
    // 0x08002D90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D94: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002D98: lbu         $a1, 0xE0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XE0);
    // 0x08002D9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002DA4: jalr        $t9
    // 0x08002DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002DAC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08002DB0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002DB4: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08002DB8: lui         $t1, 0x40
    ctx->r9 = S32(0X40 << 16);
    // 0x08002DBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DC0: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
    // 0x08002DC4: ori         $t1, $t1, 0x6E2
    ctx->r9 = ctx->r9 | 0X6E2;
    // 0x08002DC8: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08002DCC: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x08002DD0: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x08002DD4: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08002DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002DDC: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x08002DE0: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08002DE4: jalr        $t9
    // 0x08002DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002DE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002DEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DF0: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002DF4: jalr        $t9
    // 0x08002DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08002DFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E00: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E08: jalr        $t9
    // 0x08002E0C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E0C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x08002E10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E14: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08002E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002E20: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08002E24: jalr        $t9
    // 0x08002E28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002E28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x08002E2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E30: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08002E34: jalr        $t9
    // 0x08002E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x08002E3C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DD8) << 16);
    // 0x08002E40: lwc1        $f0, 0x4DD8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DD8));
    // 0x08002E44: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002E48: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x08002E4C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x08002E50: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08002E54: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x08002E58: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08002E5C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08002E60: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08002E64: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08002E68: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08002E6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002E70: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002E74: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DDC) << 16);
    // 0x08002E78: lwc1        $f10, 0x4DDC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DDC));
    // 0x08002E7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002E80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E84: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08002E88: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08002E8C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08002E90: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08002E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E98: jalr        $t9
    // 0x08002E9C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002E9C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x08002EA0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002EA4: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002EA8: jalr        $t9
    // 0x08002EAC: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002EAC: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    after_7:
    // 0x08002EB0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DE0) << 16);
    // 0x08002EB4: ldc1        $f18, 0x4DE0($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DE0));
    // 0x08002EB8: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08002EBC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002EC0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x08002EC4: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08002EC8: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    // 0x08002ECC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002ED0: jalr        $t9
    // 0x08002ED4: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002ED4: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    after_8:
    // 0x08002ED8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(28, 0X4DE8) << 16);
    // 0x08002EDC: ldc1        $f10, 0x4DE8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(28, 0X4DE8));
    // 0x08002EE0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08002EE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002EE8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08002EEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002EF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X2F18) << 16);
    // 0x08002EF4: addiu       $a0, $a0, 0x2F18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X2F18));
    // 0x08002EF8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002EFC: jalr        $t9
    // 0x08002F00: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002F00: swc1        $f18, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f18.u32l;
    after_9:
    // 0x08002F04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002F08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002F0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002F10: jr          $ra
    // 0x08002F14: nop

    TRACE_RETURN()
    return;
    // 0x08002F14: nop

;}
RECOMP_FUNC void func_0800326C_6E240C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800326C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08003270: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003274: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08003278: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800327C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08003280: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08003284: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08003288: jalr        $t9
    // 0x0800328C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800328C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x08003290: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x08003294: beq         $at, $zero, L_080032B0
    if (ctx->r1 == 0) {
        // 0x08003298: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(28, 0X2D74) << 16);
            goto L_080032B0;
    }
    // 0x08003298: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(28, 0X2D74) << 16);
    // 0x0800329C: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x080032A0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x080032A4: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080032A8: b           L_080032C0
    // 0x080032AC: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
        goto L_080032C0;
    // 0x080032AC: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
L_080032B0:
    // 0x080032B0: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x080032B4: addiu       $t1, $t0, -0x10
    ctx->r9 = ADD32(ctx->r8, -0X10);
    // 0x080032B8: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x080032BC: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
L_080032C0:
    // 0x080032C0: lhu         $t3, 0x16($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X16);
    // 0x080032C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080032C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080032CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080032D0: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x080032D4: lhu         $t5, 0x8A($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X8A);
    // 0x080032D8: addiu       $a1, $a1, 0x2D74
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(28, 0X2D74));
    // 0x080032DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080032E0: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x080032E4: mfhi        $t9
    ctx->r25 = hi;
    // 0x080032E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x080032EC: bnel        $t9, $zero, L_08003340
    if (ctx->r25 != 0) {
        // 0x080032F0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_08003340;
    }
    goto skip_0;
    // 0x080032F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_0:
    // 0x080032F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080032F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080032FC: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08003300: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08003304: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08003308: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x0800330C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08003310: jalr        $t9
    // 0x08003314: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003314: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_1:
    // 0x08003318: beq         $v0, $zero, L_0800333C
    if (ctx->r2 == 0) {
        // 0x0800331C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800333C;
    }
    // 0x0800331C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08003320: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003324: addiu       $t7, $zero, 0x25
    ctx->r15 = ADD32(0, 0X25);
    // 0x08003328: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800332C: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08003330: jalr        $t9
    // 0x08003334: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003334: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_2:
    // 0x08003338: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_0800333C:
    // 0x0800333C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_08003340:
    // 0x08003340: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003344: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003348: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800334C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08003350: bne         $v0, $zero, L_08003364
    if (ctx->r2 != 0) {
        // 0x08003354: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08003364;
    }
    // 0x08003354: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08003358: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3378) << 16);
    // 0x0800335C: jalr        $t9
    // 0x08003360: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3378));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003360: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3378));
    after_3:
L_08003364:
    // 0x08003364: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08003368: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800336C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003370: jr          $ra
    // 0x08003374: nop

    TRACE_RETURN()
    return;
    // 0x08003374: nop

;}
RECOMP_FUNC void func_08003958_6E2AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800395C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003964: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003968: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800396C: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x08003970: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003974: jalr        $t9
    // 0x08003978: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003978: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_0:
    // 0x0800397C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003980: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003984: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003988: jalr        $t9
    // 0x0800398C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800398C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08003990: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08003994: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003998: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800399C: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    // 0x080039A0: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x080039A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080039A8: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x080039AC: bne         $v1, $zero, L_080039D8
    if (ctx->r3 != 0) {
        // 0x080039B0: sh          $t7, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r15;
            goto L_080039D8;
    }
    // 0x080039B0: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x080039B4: jalr        $t9
    // 0x080039B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080039B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x080039BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080039C0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x080039C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080039C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X39EC) << 16);
    // 0x080039CC: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x080039D0: jalr        $t9
    // 0x080039D4: addiu       $a0, $a0, 0x39EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X39EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080039D4: addiu       $a0, $a0, 0x39EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X39EC));
    after_3:
L_080039D8:
    // 0x080039D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080039DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080039E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080039E4: jr          $ra
    // 0x080039E8: nop

    TRACE_RETURN()
    return;
    // 0x080039E8: nop

;}
RECOMP_FUNC void func_080033B8_6E2558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080033B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080033BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080033C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080033C4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080033C8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x080033CC: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x080033D0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080033D4: bne         $v0, $zero, L_08003414
    if (ctx->r2 != 0) {
        // 0x080033D8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003414;
    }
    // 0x080033D8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080033DC: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080033E0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080033E4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080033E8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x080033EC: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080033F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080033F4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080033F8: jalr        $t9
    // 0x080033FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080033FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003400: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003404: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003408: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X3424) << 16);
    // 0x0800340C: jalr        $t9
    // 0x08003410: addiu       $a0, $a0, 0x3424
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3424));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003410: addiu       $a0, $a0, 0x3424
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X3424));
    after_1:
L_08003414:
    // 0x08003414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800341C: jr          $ra
    // 0x08003420: nop

    TRACE_RETURN()
    return;
    // 0x08003420: nop

;}
RECOMP_FUNC void func_08003504_6E26A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003508: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800350C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003514: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x08003518: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x0800351C: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x08003520: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003524: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x08003528: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x0800352C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x08003530: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08003534: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08003538: nop

    // 0x0800353C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08003540: beql        $a1, $zero, L_08003590
    if (ctx->r5 == 0) {
        // 0x08003544: mfc1        $a1, $f6
        ctx->r5 = (int32_t)ctx->f6.u32l;
            goto L_08003590;
    }
    goto skip_0;
    // 0x08003544: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x08003548: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800354C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003550: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08003554: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08003558: nop

    // 0x0800355C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x08003560: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08003564: nop

    // 0x08003568: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x0800356C: bne         $a1, $zero, L_08003584
    if (ctx->r5 != 0) {
        // 0x08003570: nop
    
            goto L_08003584;
    }
    // 0x08003570: nop

    // 0x08003574: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08003578: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x0800357C: b           L_0800359C
    // 0x08003580: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_0800359C;
    // 0x08003580: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_08003584:
    // 0x08003584: b           L_0800359C
    // 0x08003588: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_0800359C;
    // 0x08003588: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x0800358C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
L_08003590:
    // 0x08003590: nop

    // 0x08003594: bltz        $a1, L_08003584
    if (SIGNED(ctx->r5) < 0) {
        // 0x08003598: nop
    
            goto L_08003584;
    }
    // 0x08003598: nop

L_0800359C:
    // 0x0800359C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x080035A0: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x080035A4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x080035A8: jalr        $t9
    // 0x080035AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080035AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080035B0: beq         $v0, $zero, L_080035DC
    if (ctx->r2 == 0) {
        // 0x080035B4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080035DC;
    }
    // 0x080035B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080035B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080035BC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080035C0: jalr        $t9
    // 0x080035C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080035C4: nop

    after_1:
    // 0x080035C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080035CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080035D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X30EC) << 16);
    // 0x080035D4: jalr        $t9
    // 0x080035D8: addiu       $a0, $a0, 0x30EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X30EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080035D8: addiu       $a0, $a0, 0x30EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X30EC));
    after_2:
L_080035DC:
    // 0x080035DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080035E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080035E4: jr          $ra
    // 0x080035E8: nop

    TRACE_RETURN()
    return;
    // 0x080035E8: nop

;}
RECOMP_FUNC void func_08000B60_6DFD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000B68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000B6C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000B70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B74: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000B78: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000B7C: bne         $v0, $zero, L_08000BA4
    if (ctx->r2 != 0) {
        // 0x08000B80: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000BA4;
    }
    // 0x08000B80: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000B84: jalr        $t9
    // 0x08000B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000B8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B90: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000B94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000B9C: jalr        $t9
    // 0x08000BA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08000BA4:
    // 0x08000BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000BAC: jr          $ra
    // 0x08000BB0: nop

    TRACE_RETURN()
    return;
    // 0x08000BB0: nop

;}
RECOMP_FUNC void func_08000BB4_6DFD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000BB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000BC0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000BC4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BC8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000BCC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000BD0: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000BD4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000BD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000BDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BE0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000BE4: jalr        $t9
    // 0x08000BE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BE8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000BEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000BF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08000BF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BF8: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08000BFC: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08000C00: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08000C04: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08000C08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08000C0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000C10: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08000C14: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08000C18: jalr        $t9
    // 0x08000C1C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C1C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x08000C20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0XC44) << 16);
    // 0x08000C2C: jalr        $t9
    // 0x08000C30: addiu       $a0, $a0, 0xC44
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XC44));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C30: addiu       $a0, $a0, 0xC44
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0XC44));
    after_2:
    // 0x08000C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000C3C: jr          $ra
    // 0x08000C40: nop

    TRACE_RETURN()
    return;
    // 0x08000C40: nop

;}
RECOMP_FUNC void func_080017D0_6E0970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080017D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080017D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080017DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080017E0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080017E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080017E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080017EC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080017F0: jalr        $t9
    // 0x080017F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080017F8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080017FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001800: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08001804: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001808: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X1828) << 16);
    // 0x0800180C: addiu       $a0, $a0, 0x1828
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X1828));
    // 0x08001810: jalr        $t9
    // 0x08001814: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001814: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x08001818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800181C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001820: jr          $ra
    // 0x08001824: nop

    TRACE_RETURN()
    return;
    // 0x08001824: nop

;}
RECOMP_FUNC void func_08003014_6E21B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800301C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003020: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003024: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x08003028: lui         $t6, 0x2AE
    ctx->r14 = S32(0X2AE << 16);
    // 0x0800302C: ori         $t6, $t6, 0xFE1
    ctx->r14 = ctx->r14 | 0XFE1;
    // 0x08003030: sw          $t9, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r25;
    // 0x08003034: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003038: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x0800303C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x08003040: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003048: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800304C: sb          $t7, 0x8E($a0)
    MEM_B(0X8E, ctx->r4) = ctx->r15;
    // 0x08003050: jalr        $t9
    // 0x08003054: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003054: sb          $t8, 0x8F($a0)
    MEM_B(0X8F, ctx->r4) = ctx->r24;
    after_0:
    // 0x08003058: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800305C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003060: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08003064: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08003068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800306C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003070: jalr        $t9
    // 0x08003074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08003078: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800307C: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x08003080: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08003084: sh          $t0, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r8;
    // 0x08003088: jalr        $t9
    // 0x0800308C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800308C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003090: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003094: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800309C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x080030A0: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x080030A4: jalr        $t9
    // 0x080030A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080030A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080030AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030B0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080030B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080030B8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080030BC: jalr        $t9
    // 0x080030C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080030C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x080030C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(28, 0X30EC) << 16);
    // 0x080030D0: jalr        $t9
    // 0x080030D4: addiu       $a0, $a0, 0x30EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X30EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080030D4: addiu       $a0, $a0, 0x30EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(28, 0X30EC));
    after_5:
    // 0x080030D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080030DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080030E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080030E4: jr          $ra
    // 0x080030E8: nop

    TRACE_RETURN()
    return;
    // 0x080030E8: nop

;}
