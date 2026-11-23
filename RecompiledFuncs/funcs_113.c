#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08004130_6D3210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800413C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004140: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004144: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x08004148: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800414C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08004150: bne         $v0, $zero, L_08004174
    if (ctx->r2 != 0) {
        // 0x08004154: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08004174;
    }
    // 0x08004154: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08004158: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800415C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08004160: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004164: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x08004168: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X4184) << 16);
    // 0x0800416C: jalr        $t9
    // 0x08004170: addiu       $a0, $a0, 0x4184
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X4184));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004170: addiu       $a0, $a0, 0x4184
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X4184));
    after_0:
L_08004174:
    // 0x08004174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800417C: jr          $ra
    // 0x08004180: nop

    TRACE_RETURN()
    return;
    // 0x08004180: nop

;}
RECOMP_FUNC void func_08000B60_6CFC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000B64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000B6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000B70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B74: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B7C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000B80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000B84: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000B88: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000B8C: jalr        $t9
    // 0x08000B90: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B90: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08000B94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B98: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B9C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0XBB8) << 16);
    // 0x08000BA0: jalr        $t9
    // 0x08000BA4: addiu       $a0, $a0, 0xBB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XBB8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BA4: addiu       $a0, $a0, 0xBB8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0XBB8));
    after_1:
    // 0x08000BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000BB0: jr          $ra
    // 0x08000BB4: nop

    TRACE_RETURN()
    return;
    // 0x08000BB4: nop

;}
RECOMP_FUNC void func_08003810_6D28F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003818: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x0800381C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003820: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08003824: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003828: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x0800382C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x08003830: nop

    // 0x08003834: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08003838: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800383C: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x08003840: addiu       $t9, $t9, -0x3D5C
    ctx->r25 = ADD32(ctx->r25, -0X3D5C);
    // 0x08003844: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003848: jalr        $t9
    // 0x0800384C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800384C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_0:
    // 0x08003850: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003854: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3794) << 16);
    // 0x08003858: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x0800385C: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x08003860: addiu       $a0, $a0, 0x3794
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3794));
    // 0x08003864: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003868: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x0800386C: bne         $v0, $zero, L_08003880
    if (ctx->r2 != 0) {
        // 0x08003870: sh          $t1, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r9;
            goto L_08003880;
    }
    // 0x08003870: sh          $t1, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r9;
    // 0x08003874: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003878: jalr        $t9
    // 0x0800387C: sh          $t2, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800387C: sh          $t2, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r10;
    after_1:
L_08003880:
    // 0x08003880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003888: jr          $ra
    // 0x0800388C: nop

    TRACE_RETURN()
    return;
    // 0x0800388C: nop

;}
RECOMP_FUNC void func_08001A40_6D0B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001A4C: jal         0x080016A8
    // 0x08001A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x08001A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001A54: bne         $v0, $zero, L_08001A94
    if (ctx->r2 != 0) {
        // 0x08001A58: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08001A94;
    }
    // 0x08001A58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001A5C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001A60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A64: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001A68: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001A6C: bne         $v0, $zero, L_08001A94
    if (ctx->r2 != 0) {
        // 0x08001A70: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001A94;
    }
    // 0x08001A70: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001A74: jalr        $t9
    // 0x08001A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08001A7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A80: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001A84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001A8C: jalr        $t9
    // 0x08001A90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_08001A94:
    // 0x08001A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A9C: jr          $ra
    // 0x08001AA0: nop

    TRACE_RETURN()
    return;
    // 0x08001AA0: nop

;}
RECOMP_FUNC void func_080040D8_6D31B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080040D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080040DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080040E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080040E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080040E8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080040EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080040F0: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x080040F4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080040F8: bne         $v0, $zero, L_08004120
    if (ctx->r2 != 0) {
        // 0x080040FC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08004120;
    }
    // 0x080040FC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08004100: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004104: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08004108: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800410C: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x08004110: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X4130) << 16);
    // 0x08004114: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004118: jalr        $t9
    // 0x0800411C: addiu       $a0, $a0, 0x4130
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X4130));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800411C: addiu       $a0, $a0, 0x4130
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X4130));
    after_0:
L_08004120:
    // 0x08004120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004128: jr          $ra
    // 0x0800412C: nop

    TRACE_RETURN()
    return;
    // 0x0800412C: nop

;}
RECOMP_FUNC void func_08002650_6D1730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002658: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800265C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002660: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08002664: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08002668: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800266C: bne         $v1, $zero, L_0800269C
    if (ctx->r3 != 0) {
        // 0x08002670: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800269C;
    }
    // 0x08002670: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002674: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08002678: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800267C: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x08002680: jalr        $t9
    // 0x08002684: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002684: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002688: bne         $v0, $zero, L_0800269C
    if (ctx->r2 != 0) {
        // 0x0800268C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_0800269C;
    }
    // 0x0800268C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002690: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08002694: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x08002698: beq         $t8, $zero, L_08002724
    if (ctx->r24 == 0) {
        // 0x0800269C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08002724;
    }
L_0800269C:
    // 0x0800269C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080026A0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080026A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080026A8: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x080026AC: jalr        $t9
    // 0x080026B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080026B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x080026B4: beq         $v0, $zero, L_08002714
    if (ctx->r2 == 0) {
        // 0x080026B8: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08002714;
    }
    // 0x080026B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080026BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080026C0: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080026C4: jalr        $t9
    // 0x080026C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080026C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x080026CC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x080026D0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080026D4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080026D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080026DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080026E0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080026E4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080026E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080026EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080026F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080026F4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080026F8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080026FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08002700: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08002704: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002708: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x0800270C: jalr        $t9
    // 0x08002710: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002710: nop

    after_3:
L_08002714:
    // 0x08002714: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002718: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800271C: jalr        $t9
    // 0x08002720: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002720: nop

    after_4:
L_08002724:
    // 0x08002724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800272C: jr          $ra
    // 0x08002730: nop

    TRACE_RETURN()
    return;
    // 0x08002730: nop

;}
RECOMP_FUNC void func_08003D54_6D2E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003D54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003D58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003D5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003D60: lh          $t8, 0xA2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA2);
    // 0x08003D64: lh          $t7, 0xE0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE0);
    // 0x08003D68: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08003D6C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x08003D70: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08003D74: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08003D78: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x08003D7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003D80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08003D84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003D88: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08003D8C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08003D90: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08003D94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003D98: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08003D9C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003DA0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08003DA4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08003DA8: jalr        $t9
    // 0x08003DAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003DAC: nop

    after_0:
    // 0x08003DB0: bne         $v0, $zero, L_08003DCC
    if (ctx->r2 != 0) {
        // 0x08003DB4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08003DCC;
    }
    // 0x08003DB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003DB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003DBC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003DC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003DC4: jalr        $t9
    // 0x08003DC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003DC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08003DCC:
    // 0x08003DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003DD4: jr          $ra
    // 0x08003DD8: nop

    TRACE_RETURN()
    return;
    // 0x08003DD8: nop

;}
RECOMP_FUNC void func_08002344_6D1424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800234C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002350: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002354: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002358: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800235C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002360: bne         $v0, $zero, L_08002388
    if (ctx->r2 != 0) {
        // 0x08002364: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002388;
    }
    // 0x08002364: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002368: jalr        $t9
    // 0x0800236C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800236C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002370: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002374: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08002378: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800237C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002380: jalr        $t9
    // 0x08002384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
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
RECOMP_FUNC void func_08000BB8_6CFC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000BBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000BC8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000BD0: jalr        $t9
    // 0x08000BD4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BD4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08000BD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BDC: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000BE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BE8: jalr        $t9
    // 0x08000BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08000BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000BF8: jr          $ra
    // 0x08000BFC: nop

    TRACE_RETURN()
    return;
    // 0x08000BFC: nop

;}
RECOMP_FUNC void func_08002398_6D1478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002398: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800239C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080023A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080023A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080023A8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080023AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080023B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080023B4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080023B8: jalr        $t9
    // 0x080023BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080023BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080023C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080023C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x080023C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080023CC: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x080023D0: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x080023D4: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x080023D8: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x080023DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x080023E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080023E4: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x080023E8: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x080023EC: jalr        $t9
    // 0x080023F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023F0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x080023F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2418) << 16);
    // 0x08002400: jalr        $t9
    // 0x08002404: addiu       $a0, $a0, 0x2418
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2418));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002404: addiu       $a0, $a0, 0x2418
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2418));
    after_2:
    // 0x08002408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800240C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002410: jr          $ra
    // 0x08002414: nop

    TRACE_RETURN()
    return;
    // 0x08002414: nop

;}
RECOMP_FUNC void func_08004184_6D3264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004184: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08004188: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800418C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08004190: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08004194: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08004198: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800419C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080041A0: jalr        $t9
    // 0x080041A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080041A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x080041A8: bnel        $v0, $zero, L_0800424C
    if (ctx->r2 != 0) {
        // 0x080041AC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_0800424C;
    }
    goto skip_0;
    // 0x080041AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x080041B0: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x080041B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X425C) << 16);
    // 0x080041B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080041BC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080041C0: bne         $v0, $zero, L_08004248
    if (ctx->r2 != 0) {
        // 0x080041C4: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08004248;
    }
    // 0x080041C4: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080041C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080041CC: jalr        $t9
    // 0x080041D0: addiu       $a0, $a0, 0x425C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X425C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080041D0: addiu       $a0, $a0, 0x425C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X425C));
    after_1:
    // 0x080041D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080041D8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080041DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080041E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080041E4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080041E8: jalr        $t9
    // 0x080041EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080041EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080041F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080041F4: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x080041F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080041FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004200: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08004204: jalr        $t9
    // 0x08004208: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004208: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x0800420C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004210: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004214: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x08004218: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800421C: addiu       $t9, $t9, -0x6650
    ctx->r25 = ADD32(ctx->r25, -0X6650);
    // 0x08004220: addiu       $t8, $t8, 0x3C5C
    ctx->r24 = ADD32(ctx->r24, 0X3C5C);
    // 0x08004224: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x08004228: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x0800422C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08004230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004234: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x08004238: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x0800423C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08004240: jalr        $t9
    // 0x08004244: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004244: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_4:
L_08004248:
    // 0x08004248: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_0800424C:
    // 0x0800424C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08004250: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08004254: jr          $ra
    // 0x08004258: nop

    TRACE_RETURN()
    return;
    // 0x08004258: nop

;}
RECOMP_FUNC void func_08001EA4_6D0F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001EA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001EA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001EAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001EB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001EB4: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08001EB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001EBC: jalr        $t9
    // 0x08001EC0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001EC0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001EC4: lw          $t7, 0xD4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD4);
    // 0x08001EC8: addiu       $t6, $zero, 0xFB
    ctx->r14 = ADD32(0, 0XFB);
    // 0x08001ECC: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08001ED0: beq         $t7, $zero, L_08001EE8
    if (ctx->r15 == 0) {
        // 0x08001ED4: lui         $t0, 0x2AE
        ctx->r8 = S32(0X2AE << 16);
            goto L_08001EE8;
    }
    // 0x08001ED4: lui         $t0, 0x2AE
    ctx->r8 = S32(0X2AE << 16);
    // 0x08001ED8: lui         $t8, 0x2E
    ctx->r24 = S32(0X2E << 16);
    // 0x08001EDC: ori         $t8, $t8, 0x8261
    ctx->r24 = ctx->r24 | 0X8261;
    // 0x08001EE0: b           L_08001F00
    // 0x08001EE4: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
        goto L_08001F00;
    // 0x08001EE4: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
L_08001EE8:
    // 0x08001EE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001EEC: ori         $t0, $t0, 0x87E1
    ctx->r8 = ctx->r8 | 0X87E1;
    // 0x08001EF0: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08001EF4: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08001EF8: jalr        $t9
    // 0x08001EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_08001F00:
    // 0x08001F00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08001F08: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x08001F0C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x08001F10: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x08001F14: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08001F18: sb          $v0, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r2;
    // 0x08001F1C: sh          $t1, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r9;
    // 0x08001F20: sb          $t2, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r10;
    // 0x08001F24: sb          $t3, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r11;
    // 0x08001F28: sb          $v0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r2;
    // 0x08001F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F30: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08001F34: jalr        $t9
    // 0x08001F38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001F38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08001F3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F40: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F48: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08001F4C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x08001F50: jalr        $t9
    // 0x08001F54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001F54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001F58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F5C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08001F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F64: jalr        $t9
    // 0x08001F68: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001F68: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_4:
    // 0x08001F6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001F70: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001F74: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001F78: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001F80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001F84: jalr        $t9
    // 0x08001F88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001F88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x08001F8C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08001F90: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08001F94: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08001F98: addiu       $a1, $a1, 0x3B10
    ctx->r5 = ADD32(ctx->r5, 0X3B10);
    // 0x08001F9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001FA0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08001FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001FA8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08001FAC: jalr        $v0
    // 0x08001FB0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08001FB0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x08001FB4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08001FB8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08001FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001FC0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08001FC4: jalr        $v0
    // 0x08001FC8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x08001FC8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x08001FCC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FD0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1FF4) << 16);
    // 0x08001FD8: jalr        $t9
    // 0x08001FDC: addiu       $a0, $a0, 0x1FF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1FF4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001FDC: addiu       $a0, $a0, 0x1FF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1FF4));
    after_8:
    // 0x08001FE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001FE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001FE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001FEC: jr          $ra
    // 0x08001FF0: nop

    TRACE_RETURN()
    return;
    // 0x08001FF0: nop

;}
RECOMP_FUNC void func_0800191C_6D09FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800191C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001928: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800192C: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x08001930: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001934: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001938: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800193C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1958) << 16);
    // 0x08001940: jalr        $t9
    // 0x08001944: addiu       $a0, $a0, 0x1958
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1958));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001944: addiu       $a0, $a0, 0x1958
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1958));
    after_0:
    // 0x08001948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800194C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001950: jr          $ra
    // 0x08001954: nop

    TRACE_RETURN()
    return;
    // 0x08001954: nop

;}
RECOMP_FUNC void func_08001FF4_6D10D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001FF8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002000: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08002004: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002008: jalr        $t9
    // 0x0800200C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800200C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002010: beq         $v0, $zero, L_08002024
    if (ctx->r2 == 0) {
        // 0x08002014: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002024;
    }
    // 0x08002014: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002018: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x0800201C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08002020: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
L_08002024:
    // 0x08002024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800202C: jr          $ra
    // 0x08002030: nop

    TRACE_RETURN()
    return;
    // 0x08002030: nop

;}
RECOMP_FUNC void func_08002DF4_6D1ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002DFC: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08002E00: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002E04: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x08002E08: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08002E0C: bne         $t7, $zero, L_08002E94
    if (ctx->r15 != 0) {
        // 0x08002E10: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002E94;
    }
    // 0x08002E10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E14: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08002E18: jalr        $t9
    // 0x08002E1C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E1C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08002E20: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08002E24: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08002E28: lbu         $v0, 0x13A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X13A);
    // 0x08002E2C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08002E30: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002E34: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x08002E38: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x08002E3C: beq         $v1, $zero, L_08002E68
    if (ctx->r3 == 0) {
        // 0x08002E40: sb          $t8, 0x13A($a0)
        MEM_B(0X13A, ctx->r4) = ctx->r24;
            goto L_08002E68;
    }
    // 0x08002E40: sb          $t8, 0x13A($a0)
    MEM_B(0X13A, ctx->r4) = ctx->r24;
    // 0x08002E44: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002E48: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002E4C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002E50: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002E54: addiu       $a0, $zero, 0x257
    ctx->r4 = ADD32(0, 0X257);
    // 0x08002E58: jalr        $t9
    // 0x08002E5C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002E5C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08002E60: b           L_08002E80
    // 0x08002E64: nop

        goto L_08002E80;
    // 0x08002E64: nop

L_08002E68:
    // 0x08002E68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002E6C: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002E70: addiu       $a0, $zero, 0x258
    ctx->r4 = ADD32(0, 0X258);
    // 0x08002E74: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002E78: jalr        $t9
    // 0x08002E7C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002E7C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
L_08002E80:
    // 0x08002E80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002E84: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2EA4) << 16);
    // 0x08002E8C: jalr        $t9
    // 0x08002E90: addiu       $a0, $a0, 0x2EA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2EA4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002E90: addiu       $a0, $a0, 0x2EA4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2EA4));
    after_3:
L_08002E94:
    // 0x08002E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002E9C: jr          $ra
    // 0x08002EA0: nop

    TRACE_RETURN()
    return;
    // 0x08002EA0: nop

;}
RECOMP_FUNC void func_08000310_6CF3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000310: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000318: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800031C: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x08000320: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(23, 0X4988) << 16);
    // 0x08000324: ldc1        $f2, 0x4988($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(23, 0X4988));
    // 0x08000328: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x0800032C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000330: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x08000334: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000338: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x0800033C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000340: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000344: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000348: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x0800034C: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08000350: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08000354: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x08000358: nop

    // 0x0800035C: bc1fl       L_08000374
    if (!c1cs) {
        // 0x08000360: swc1        $f0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
            goto L_08000374;
    }
    goto skip_0;
    // 0x08000360: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    skip_0:
    // 0x08000364: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x08000368: b           L_08000374
    // 0x0800036C: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
        goto L_08000374;
    // 0x0800036C: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x08000370: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
L_08000374:
    // 0x08000374: lwc1        $f16, 0x80($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X80);
    // 0x08000378: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x0800037C: addiu       $v0, $v0, -0x4F64
    ctx->r2 = ADD32(ctx->r2, -0X4F64);
    // 0x08000380: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000388: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x0800038C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000390: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000394: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x08000398: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800039C: jalr        $v0
    // 0x080003A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080003A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x080003A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080003A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003AC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080003B0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080003B4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080003B8: bne         $v0, $zero, L_080003DC
    if (ctx->r2 != 0) {
        // 0x080003BC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080003DC;
    }
    // 0x080003BC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080003C0: jalr        $t9
    // 0x080003C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x080003C8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x080003CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080003D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080003D4: jalr        $t9
    // 0x080003D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_080003DC:
    // 0x080003DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080003E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080003E4: jr          $ra
    // 0x080003E8: nop

    TRACE_RETURN()
    return;
    // 0x080003E8: nop

;}
RECOMP_FUNC void func_08002FEC_6D20CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002FF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002FF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002FFC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003000: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003004: jalr        $t9
    // 0x08003008: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003008: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x0800300C: bne         $v0, $zero, L_08003038
    if (ctx->r2 != 0) {
        // 0x08003010: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08003038;
    }
    // 0x08003010: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003014: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003018: jalr        $t9
    // 0x0800301C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800301C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08003020: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003024: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800302C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003030: jalr        $t9
    // 0x08003034: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003034: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_08003038:
    // 0x08003038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800303C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003040: jr          $ra
    // 0x08003044: nop

    TRACE_RETURN()
    return;
    // 0x08003044: nop

;}
RECOMP_FUNC void func_08002A8C_6D1B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A94: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002A98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A9C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08002AA0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002AA4: beq         $t7, $zero, L_08002ABC
    if (ctx->r15 == 0) {
        // 0x08002AA8: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08002ABC;
    }
    // 0x08002AA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002AAC: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08002AB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2ACC) << 16);
    // 0x08002AB4: jalr        $t9
    // 0x08002AB8: addiu       $a0, $a0, 0x2ACC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2ACC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002AB8: addiu       $a0, $a0, 0x2ACC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2ACC));
    after_0:
L_08002ABC:
    // 0x08002ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002AC4: jr          $ra
    // 0x08002AC8: nop

    TRACE_RETURN()
    return;
    // 0x08002AC8: nop

;}
RECOMP_FUNC void func_08001AFC_6D0BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001B0C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08001B10: jalr        $t9
    // 0x08001B14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08001B18: bne         $v0, $zero, L_08001B30
    if (ctx->r2 != 0) {
        // 0x08001B1C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X1B40) << 16);
            goto L_08001B30;
    }
    // 0x08001B1C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1B40) << 16);
    // 0x08001B20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B28: jalr        $t9
    // 0x08001B2C: addiu       $a0, $a0, 0x1B40
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1B40));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B2C: addiu       $a0, $a0, 0x1B40
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1B40));
    after_1:
L_08001B30:
    // 0x08001B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001B38: jr          $ra
    // 0x08001B3C: nop

    TRACE_RETURN()
    return;
    // 0x08001B3C: nop

;}
RECOMP_FUNC void func_08004338_6D3418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800433C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004340: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004344: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08004348: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800434C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004350: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08004354: beq         $t7, $zero, L_0800438C
    if (ctx->r15 == 0) {
        // 0x08004358: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X439C) << 16);
            goto L_0800438C;
    }
    // 0x08004358: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X439C) << 16);
    // 0x0800435C: jalr        $t9
    // 0x08004360: addiu       $a0, $a0, 0x439C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X439C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004360: addiu       $a0, $a0, 0x439C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X439C));
    after_0:
    // 0x08004364: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004368: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800436C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004374: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08004378: jalr        $t9
    // 0x0800437C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800437C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08004380: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x08004384: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x08004388: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
L_0800438C:
    // 0x0800438C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004394: jr          $ra
    // 0x08004398: nop

    TRACE_RETURN()
    return;
    // 0x08004398: nop

;}
RECOMP_FUNC void func_08001B40_6D0C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001B48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001B4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001B50: jal         0x080016A8
    // 0x08001B54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x08001B54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001B58: bne         $v0, $zero, L_08001BB4
    if (ctx->r2 != 0) {
        // 0x08001B5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001BB4;
    }
    // 0x08001B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B64: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x08001B68: jalr        $t9
    // 0x08001B6C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B6C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x08001B70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B74: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001B78: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08001B7C: jalr        $t9
    // 0x08001B80: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001B80: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08001B84: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08001B88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B8C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B94: jalr        $t9
    // 0x08001B98: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001B98: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_3:
    // 0x08001B9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001BA0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001BA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001BAC: jalr        $t9
    // 0x08001BB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001BB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_08001BB4:
    // 0x08001BB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001BB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001BBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001BC0: jr          $ra
    // 0x08001BC4: nop

    TRACE_RETURN()
    return;
    // 0x08001BC4: nop

;}
RECOMP_FUNC void func_08000FEC_6D00CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000FF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000FF4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000FF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FFC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001000: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08001004: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001008: bne         $v1, $zero, L_08001038
    if (ctx->r3 != 0) {
        // 0x0800100C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001038;
    }
    // 0x0800100C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001010: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08001014: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001018: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x0800101C: jalr        $t9
    // 0x08001020: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001020: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001024: bne         $v0, $zero, L_08001038
    if (ctx->r2 != 0) {
        // 0x08001028: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001038;
    }
    // 0x08001028: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800102C: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08001030: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x08001034: beq         $t8, $zero, L_080010C0
    if (ctx->r24 == 0) {
        // 0x08001038: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080010C0;
    }
L_08001038:
    // 0x08001038: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800103C: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001040: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001044: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08001048: jalr        $t9
    // 0x0800104C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800104C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08001050: beq         $v0, $zero, L_080010B0
    if (ctx->r2 == 0) {
        // 0x08001054: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_080010B0;
    }
    // 0x08001054: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08001058: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800105C: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001060: jalr        $t9
    // 0x08001064: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001064: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x08001068: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x0800106C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001070: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001074: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001078: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800107C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08001080: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001084: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001088: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800108C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001090: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001094: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08001098: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x0800109C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080010A0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080010A4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080010A8: jalr        $t9
    // 0x080010AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080010AC: nop

    after_3:
L_080010B0:
    // 0x080010B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010B4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080010B8: jalr        $t9
    // 0x080010BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080010BC: nop

    after_4:
L_080010C0:
    // 0x080010C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080010C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080010C8: jr          $ra
    // 0x080010CC: nop

    TRACE_RETURN()
    return;
    // 0x080010CC: nop

;}
RECOMP_FUNC void func_080018D0_6D09B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080018D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080018D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080018DC: jal         0x080016A8
    // 0x080018E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x080018E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080018E4: bne         $v0, $zero, L_0800190C
    if (ctx->r2 != 0) {
        // 0x080018E8: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_0800190C;
    }
    // 0x080018E8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080018EC: lw          $t7, 0x68($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X68);
    // 0x080018F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018F8: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x080018FC: bne         $t8, $zero, L_0800190C
    if (ctx->r24 != 0) {
        // 0x08001900: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X191C) << 16);
            goto L_0800190C;
    }
    // 0x08001900: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X191C) << 16);
    // 0x08001904: jalr        $t9
    // 0x08001908: addiu       $a0, $a0, 0x191C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X191C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001908: addiu       $a0, $a0, 0x191C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X191C));
    after_1:
L_0800190C:
    // 0x0800190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001914: jr          $ra
    // 0x08001918: nop

    TRACE_RETURN()
    return;
    // 0x08001918: nop

;}
RECOMP_FUNC void func_080039D4_6D2AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080039D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080039D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080039DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080039E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080039E4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080039E8: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080039EC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080039F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080039F4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080039F8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080039FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08003A00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08003A04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A08: addiu       $t9, $t9, -0x4010
    ctx->r25 = ADD32(ctx->r25, -0X4010);
    // 0x08003A0C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08003A10: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08003A14: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08003A18: jalr        $t9
    // 0x08003A1C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003A1C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x08003A20: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003A24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003A28: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08003A2C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08003A30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A34: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x08003A38: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08003A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003A40: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08003A44: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x08003A48: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08003A4C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x08003A50: nop

    // 0x08003A54: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08003A58: jalr        $t9
    // 0x08003A5C: sh          $t1, 0x18($t2)
    MEM_H(0X18, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003A5C: sh          $t1, 0x18($t2)
    MEM_H(0X18, ctx->r10) = ctx->r9;
    after_1:
    // 0x08003A60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A64: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003A68: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003A6C: jalr        $t9
    // 0x08003A70: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003A70: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08003A74: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x08003A78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003A7C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003A84: jalr        $t9
    // 0x08003A88: sh          $v0, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003A88: sh          $v0, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r2;
    after_3:
    // 0x08003A8C: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x08003A90: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x08003A94: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3938) << 16);
    // 0x08003A98: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    // 0x08003A9C: bne         $v1, $zero, L_08003AB8
    if (ctx->r3 != 0) {
        // 0x08003AA0: sh          $t4, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r12;
            goto L_08003AB8;
    }
    // 0x08003AA0: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08003AA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003AA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003AAC: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
    // 0x08003AB0: jalr        $t9
    // 0x08003AB4: addiu       $a0, $a0, 0x3938
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3938));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003AB4: addiu       $a0, $a0, 0x3938
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3938));
    after_4:
L_08003AB8:
    // 0x08003AB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003ABC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003AC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003AC4: jr          $ra
    // 0x08003AC8: nop

    TRACE_RETURN()
    return;
    // 0x08003AC8: nop

;}
RECOMP_FUNC void func_08001958_6D0A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800195C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001960: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001964: jal         0x080016A8
    // 0x08001968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x08001968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800196C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08001970: bne         $v0, $zero, L_080019C0
    if (ctx->r2 != 0) {
        // 0x08001974: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_080019C0;
    }
    // 0x08001974: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001978: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800197C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x08001980: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x08001984: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    // 0x08001988: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x0800198C: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x08001990: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08001994: sh          $t8, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r24;
    // 0x08001998: lhu         $v0, 0x8A($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X8A);
    // 0x0800199C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X19D0) << 16);
    // 0x080019A0: addiu       $a0, $a0, 0x19D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X19D0));
    // 0x080019A4: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x080019A8: bne         $v0, $zero, L_080019C0
    if (ctx->r2 != 0) {
        // 0x080019AC: sh          $t9, 0x8A($a2)
        MEM_H(0X8A, ctx->r6) = ctx->r25;
            goto L_080019C0;
    }
    // 0x080019AC: sh          $t9, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r25;
    // 0x080019B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080019B8: jalr        $t9
    // 0x080019BC: sh          $t0, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080019BC: sh          $t0, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r8;
    after_1:
L_080019C0:
    // 0x080019C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080019C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080019C8: jr          $ra
    // 0x080019CC: nop

    TRACE_RETURN()
    return;
    // 0x080019CC: nop

;}
RECOMP_FUNC void func_08002734_6D1814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002734: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002738: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800273C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002740: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002744: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08002748: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800274C: jalr        $t9
    // 0x08002750: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002750: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002754: lui         $t7, 0x2AE
    ctx->r15 = S32(0X2AE << 16);
    // 0x08002758: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800275C: addiu       $t6, $zero, 0xFD
    ctx->r14 = ADD32(0, 0XFD);
    // 0x08002760: ori         $t7, $t7, 0x87E1
    ctx->r15 = ctx->r15 | 0X87E1;
    // 0x08002764: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x08002768: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x0800276C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x08002770: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08002774: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002778: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x0800277C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08002780: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x08002784: sb          $t0, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r8;
    // 0x08002788: sb          $t1, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r9;
    // 0x0800278C: sb          $t2, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r10;
    // 0x08002790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002794: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08002798: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x0800279C: jalr        $t9
    // 0x080027A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080027A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080027A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027A8: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080027AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080027B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080027B4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x080027B8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x080027BC: jalr        $t9
    // 0x080027C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080027C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x080027C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027C8: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080027CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080027D0: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x080027D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080027D8: jalr        $t9
    // 0x080027DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080027DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x080027E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027E4: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080027E8: jalr        $t9
    // 0x080027EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080027EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080027F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027F4: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080027F8: jalr        $t9
    // 0x080027FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080027FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x08002800: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002804: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800280C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08002810: jalr        $t9
    // 0x08002814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x08002818: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800281C: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08002820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002824: jalr        $t9
    // 0x08002828: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002828: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_7:
    // 0x0800282C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002830: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002834: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08002838: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800283C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002840: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002844: jalr        $t9
    // 0x08002848: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002848: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x0800284C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08002850: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002854: addiu       $v0, $v0, -0x589C
    ctx->r2 = ADD32(ctx->r2, -0X589C);
    // 0x08002858: addiu       $a1, $a1, 0x5520
    ctx->r5 = ADD32(ctx->r5, 0X5520);
    // 0x0800285C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002860: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08002864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002868: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x0800286C: jalr        $v0
    // 0x08002870: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x08002870: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x08002874: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08002878: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x0800287C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002880: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x08002884: jalr        $v0
    // 0x08002888: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x08002888: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x0800288C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002890: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002894: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X28B4) << 16);
    // 0x08002898: jalr        $t9
    // 0x0800289C: addiu       $a0, $a0, 0x28B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X28B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800289C: addiu       $a0, $a0, 0x28B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X28B4));
    after_11:
    // 0x080028A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080028A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080028A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080028AC: jr          $ra
    // 0x080028B0: nop

    TRACE_RETURN()
    return;
    // 0x080028B0: nop

;}
RECOMP_FUNC void func_08003ACC_6D2BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003ACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003AD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003AD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003AD8: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003ADC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003AE0: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08003AE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003AE8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x08003AEC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003AF0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003AF4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x08003AF8: nop

    // 0x08003AFC: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08003B00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B04: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x08003B08: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08003B0C: jalr        $t9
    // 0x08003B10: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003B10: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08003B14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B18: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08003B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003B20: jalr        $t9
    // 0x08003B24: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003B24: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x08003B28: bne         $v0, $zero, L_08003B58
    if (ctx->r2 != 0) {
        // 0x08003B2C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08003B58;
    }
    // 0x08003B2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B30: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003B34: jalr        $t9
    // 0x08003B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003B3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003B40: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x08003B44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003B48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X39D4) << 16);
    // 0x08003B4C: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08003B50: jalr        $t9
    // 0x08003B54: addiu       $a0, $a0, 0x39D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X39D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003B54: addiu       $a0, $a0, 0x39D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X39D4));
    after_3:
L_08003B58:
    // 0x08003B58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003B5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003B64: jr          $ra
    // 0x08003B68: nop

    TRACE_RETURN()
    return;
    // 0x08003B68: nop

;}
RECOMP_FUNC void func_080028B4_6D1994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080028B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080028B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080028BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080028C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080028C4: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x080028C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080028CC: jalr        $t9
    // 0x080028D0: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080028D0: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_0:
    // 0x080028D4: beq         $v0, $zero, L_08002924
    if (ctx->r2 == 0) {
        // 0x080028D8: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_08002924;
    }
    // 0x080028D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080028DC: lw          $t6, 0x68($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X68);
    // 0x080028E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2944) << 16);
    // 0x080028E4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x080028E8: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x080028EC: beq         $t7, $zero, L_08002924
    if (ctx->r15 == 0) {
        // 0x080028F0: addiu       $a0, $a0, 0x2944
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2944));
            goto L_08002924;
    }
    // 0x080028F0: addiu       $a0, $a0, 0x2944
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2944));
    // 0x080028F4: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x080028F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080028FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08002900: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08002904: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002908: bgez        $t0, L_0800291C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0800290C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_0800291C;
    }
    // 0x0800290C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002914: nop

    // 0x08002918: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_0800291C:
    // 0x0800291C: jalr        $t9
    // 0x08002920: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002920: swc1        $f6, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->f6.u32l;
    after_1:
L_08002924:
    // 0x08002924: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002928: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x0800292C: jalr        $t9
    // 0x08002930: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002930: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08002934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800293C: jr          $ra
    // 0x08002940: nop

    TRACE_RETURN()
    return;
    // 0x08002940: nop

;}
RECOMP_FUNC void func_0800309C_6D217C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800309C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080030A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080030A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080030AC: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080030B0: jalr        $t9
    // 0x080030B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080030B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x080030B8: bne         $v0, $zero, L_080030D0
    if (ctx->r2 != 0) {
        // 0x080030BC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X30E0) << 16);
            goto L_080030D0;
    }
    // 0x080030BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X30E0) << 16);
    // 0x080030C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030C8: jalr        $t9
    // 0x080030CC: addiu       $a0, $a0, 0x30E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X30E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080030CC: addiu       $a0, $a0, 0x30E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X30E0));
    after_1:
L_080030D0:
    // 0x080030D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080030D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080030D8: jr          $ra
    // 0x080030DC: nop

    TRACE_RETURN()
    return;
    // 0x080030DC: nop

;}
RECOMP_FUNC void func_08000434_6CF514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000438: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800043C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000440: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000444: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08000448: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800044C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08000450: jalr        $t9
    // 0x08000454: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000454: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_0:
    // 0x08000458: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800045C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000460: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000464: jalr        $t9
    // 0x08000468: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000468: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x0800046C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000470: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000474: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000478: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800047C: jalr        $t9
    // 0x08000480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x08000484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800048C: jr          $ra
    // 0x08000490: nop

    TRACE_RETURN()
    return;
    // 0x08000490: nop

;}
RECOMP_FUNC void func_08002D88_6D1E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002D8C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002D98: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002D9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002DA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002DA4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002DA8: jalr        $t9
    // 0x08002DAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002DAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002DB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DB4: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x08002DB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002DBC: jalr        $t9
    // 0x08002DC0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002DC0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x08002DC4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08002DC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DCC: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x08002DD0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002DD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2DF4) << 16);
    // 0x08002DD8: addiu       $a0, $a0, 0x2DF4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2DF4));
    // 0x08002DDC: jalr        $t9
    // 0x08002DE0: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002DE0: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_2:
    // 0x08002DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002DEC: jr          $ra
    // 0x08002DF0: nop

    TRACE_RETURN()
    return;
    // 0x08002DF0: nop

;}
RECOMP_FUNC void func_08001884_6D0964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001888: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800188C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001890: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001894: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001898: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x0800189C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x080018A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080018A4: jalr        $t9
    // 0x080018A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x080018AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X18D0) << 16);
    // 0x080018B8: jalr        $t9
    // 0x080018BC: addiu       $a0, $a0, 0x18D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X18D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080018BC: addiu       $a0, $a0, 0x18D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X18D0));
    after_1:
    // 0x080018C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080018C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080018C8: jr          $ra
    // 0x080018CC: nop

    TRACE_RETURN()
    return;
    // 0x080018CC: nop

;}
RECOMP_FUNC void func_08003604_6D26E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003608: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800360C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003610: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003614: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08003618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800361C: jalr        $t9
    // 0x08003620: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003620: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003624: lui         $t6, 0x62A
    ctx->r14 = S32(0X62A << 16);
    // 0x08003628: ori         $t6, $t6, 0x17E1
    ctx->r14 = ctx->r14 | 0X17E1;
    // 0x0800362C: addiu       $t7, $zero, 0x3F
    ctx->r15 = ADD32(0, 0X3F);
    // 0x08003630: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x08003634: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08003638: sh          $t7, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r15;
    // 0x0800363C: sw          $t8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r24;
    // 0x08003640: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08003644: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003648: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800364C: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x08003650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003654: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08003658: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x0800365C: jalr        $t9
    // 0x08003660: sh          $t2, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003660: sh          $t2, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r10;
    after_1:
    // 0x08003664: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003668: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x0800366C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003670: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08003674: jalr        $t9
    // 0x08003678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x0800367C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003680: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08003684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003688: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x0800368C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08003690: jalr        $t9
    // 0x08003694: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003694: addiu       $a3, $zero, -0x28
    ctx->r7 = ADD32(0, -0X28);
    after_3:
    // 0x08003698: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800369C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080036A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036A4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080036A8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080036AC: jalr        $t9
    // 0x080036B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080036B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080036B4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080036B8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080036BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080036C4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080036C8: jalr        $t9
    // 0x080036CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080036CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x080036D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080036D4: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080036D8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X47C0) << 16);
    // 0x080036DC: addiu       $a1, $a1, 0x47C0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X47C0));
    // 0x080036E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036E4: jalr        $t9
    // 0x080036E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080036E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x080036EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080036F0: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080036F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080036F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080036FC: jalr        $t9
    // 0x08003700: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003700: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x08003704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003708: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800370C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003710: jr          $ra
    // 0x08003714: nop

    TRACE_RETURN()
    return;
    // 0x08003714: nop

;}
RECOMP_FUNC void func_08003BF8_6D2CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003BFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003C04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003C08: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x08003C0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003C10: jalr        $t9
    // 0x08003C14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C14: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003C18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C1C: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08003C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C24: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x08003C28: jalr        $t9
    // 0x08003C2C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003C2C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_1:
    // 0x08003C30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C34: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08003C38: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003C3C: jalr        $t9
    // 0x08003C40: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003C40: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08003C44: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08003C48: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003C4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003C50: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x08003C54: lwc1        $f4, 0x7C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x08003C58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C5C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003C60: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C68: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003C6C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x08003C70: nop

    // 0x08003C74: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08003C78: jalr        $t9
    // 0x08003C7C: sh          $t1, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003C7C: sh          $t1, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r9;
    after_3:
    // 0x08003C80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003C84: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003C8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003C90: jalr        $t9
    // 0x08003C94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003C94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08003C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003C9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003CA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003CA4: jr          $ra
    // 0x08003CA8: nop

    TRACE_RETURN()
    return;
    // 0x08003CA8: nop

;}
RECOMP_FUNC void func_08002240_6D1320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002240: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002244: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002248: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x0800224C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002250: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002254: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002258: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x0800225C: bne         $v0, $zero, L_080022F4
    if (ctx->r2 != 0) {
        // 0x08002260: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_080022F4;
    }
    // 0x08002260: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08002264: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002268: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800226C: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08002270: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002274: jalr        $t9
    // 0x08002278: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002278: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x0800227C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08002280: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002284: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800228C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002290: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08002294: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X2494) << 16);
    // 0x08002298: addiu       $a1, $a1, 0x2494
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X2494));
    // 0x0800229C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080022A0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080022A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080022A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080022AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080022B0: jalr        $t9
    // 0x080022B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080022B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x080022B8: beq         $v0, $zero, L_080022E0
    if (ctx->r2 == 0) {
        // 0x080022BC: addiu       $t8, $zero, 0x20
        ctx->r24 = ADD32(0, 0X20);
            goto L_080022E0;
    }
    // 0x080022BC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x080022C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022C4: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080022C8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080022CC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080022D0: jalr        $t9
    // 0x080022D4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080022D4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x080022D8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080022DC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_080022E0:
    // 0x080022E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080022E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2304) << 16);
    // 0x080022EC: jalr        $t9
    // 0x080022F0: addiu       $a0, $a0, 0x2304
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2304));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080022F0: addiu       $a0, $a0, 0x2304
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2304));
    after_3:
L_080022F4:
    // 0x080022F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080022F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080022FC: jr          $ra
    // 0x08002300: nop

    TRACE_RETURN()
    return;
    // 0x08002300: nop

;}
RECOMP_FUNC void func_08001C4C_6D0D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001C54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001C58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001C5C: jal         0x080016A8
    // 0x08001C60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_080016A8_6D0788(rdram, ctx);
        goto after_0;
    // 0x08001C60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001C64: bne         $v0, $zero, L_08001CBC
    if (ctx->r2 != 0) {
        // 0x08001C68: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001CBC;
    }
    // 0x08001C68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C6C: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x08001C70: jalr        $t9
    // 0x08001C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08001C78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C7C: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001C80: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08001C84: jalr        $t9
    // 0x08001C88: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C88: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08001C8C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08001C90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C94: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001C9C: jalr        $t9
    // 0x08001CA0: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001CA0: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_3:
    // 0x08001CA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001CA8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001CB4: jalr        $t9
    // 0x08001CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_08001CBC:
    // 0x08001CBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001CC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001CC8: jr          $ra
    // 0x08001CCC: nop

    TRACE_RETURN()
    return;
    // 0x08001CCC: nop

;}
RECOMP_FUNC void func_0800357C_6D265C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800357C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003580: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003588: addiu       $t9, $t9, -0x691C
    ctx->r25 = ADD32(ctx->r25, -0X691C);
    // 0x0800358C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003590: jalr        $t9
    // 0x08003594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003598: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0800359C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080035A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080035A4: lhu         $t6, 0x16($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X16);
    // 0x080035A8: lh          $t7, 0xD0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XD0);
    // 0x080035AC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x080035B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080035B4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x080035B8: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x080035BC: lh          $t0, 0xDC($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XDC);
    // 0x080035C0: lh          $t1, 0xD0($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XD0);
    // 0x080035C4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x080035C8: sh          $t2, 0xDC($a0)
    MEM_H(0XDC, ctx->r4) = ctx->r10;
    // 0x080035CC: lh          $v0, 0xDC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XDC);
    // 0x080035D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3378) << 16);
    // 0x080035D4: bgez        $v0, L_080035E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080035D8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080035E4;
    }
    // 0x080035D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x080035DC: b           L_080035E4
    // 0x080035E0: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_080035E4;
    // 0x080035E0: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_080035E4:
    // 0x080035E4: bnel        $v1, $at, L_080035F8
    if (ctx->r3 != ctx->r1) {
        // 0x080035E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080035F8;
    }
    goto skip_0;
    // 0x080035E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080035EC: jalr        $t9
    // 0x080035F0: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3378));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080035F0: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3378));
    after_1:
    // 0x080035F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080035F8:
    // 0x080035F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080035FC: jr          $ra
    // 0x08003600: nop

    TRACE_RETURN()
    return;
    // 0x08003600: nop

;}
RECOMP_FUNC void func_08000A34_6CFB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A44: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000A48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08000A4C: jalr        $t9
    // 0x08000A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000A54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000A58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A5C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000A60: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A68: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000A6C: bne         $v0, $zero, L_08000A7C
    if (ctx->r2 != 0) {
        // 0x08000A70: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000A7C;
    }
    // 0x08000A70: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000A74: jalr        $t9
    // 0x08000A78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08000A7C:
    // 0x08000A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A84: jr          $ra
    // 0x08000A88: nop

    TRACE_RETURN()
    return;
    // 0x08000A88: nop

;}
RECOMP_FUNC void func_0800342C_6D250C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800342C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08003430: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08003434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800343C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08003440: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08003444: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08003448: jalr        $t9
    // 0x0800344C: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800344C: lhu         $a0, 0x16($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X16);
    after_0:
    // 0x08003450: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x08003454: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08003458: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x0800345C: lbu         $t7, 0x9A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X9A);
    // 0x08003460: addiu       $t8, $t7, 0xA
    ctx->r24 = ADD32(ctx->r15, 0XA);
    // 0x08003464: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x08003468: nop

    // 0x0800346C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003470: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08003474: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x08003478: jalr        $t9
    // 0x0800347C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800347C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_1:
    // 0x08003480: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08003484: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003488: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800348C: lbu         $t1, 0x9A($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X9A);
    // 0x08003490: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08003494: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x08003498: addiu       $t2, $t1, 0xA
    ctx->r10 = ADD32(ctx->r9, 0XA);
    // 0x0800349C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x080034A0: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080034A4: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x080034A8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080034AC: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080034B0: addiu       $v0, $v0, -0x61F8
    ctx->r2 = ADD32(ctx->r2, -0X61F8);
    // 0x080034B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x080034B8: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080034BC: mul.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x080034C0: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x080034C4: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x080034C8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x080034CC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x080034D0: jalr        $v0
    // 0x080034D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x080034D4: nop

    after_2:
    // 0x080034D8: bne         $v0, $zero, L_080034F0
    if (ctx->r2 != 0) {
        // 0x080034DC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X357C) << 16);
            goto L_080034F0;
    }
    // 0x080034DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X357C) << 16);
    // 0x080034E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080034E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080034E8: jalr        $t9
    // 0x080034EC: addiu       $a0, $a0, 0x357C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X357C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080034EC: addiu       $a0, $a0, 0x357C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X357C));
    after_3:
L_080034F0:
    // 0x080034F0: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080034F4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x080034F8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080034FC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x08003500: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003504: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08003508: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x0800350C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08003510: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08003514: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08003518: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800351C: jalr        $t9
    // 0x08003520: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003520: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_4:
    // 0x08003524: beq         $v0, $zero, L_0800353C
    if (ctx->r2 == 0) {
        // 0x08003528: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(23, 0X357C) << 16);
            goto L_0800353C;
    }
    // 0x08003528: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X357C) << 16);
    // 0x0800352C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003530: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003534: jalr        $t9
    // 0x08003538: addiu       $a0, $a0, 0x357C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X357C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003538: addiu       $a0, $a0, 0x357C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X357C));
    after_5:
L_0800353C:
    // 0x0800353C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08003540: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003544: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003548: lhu         $v0, 0xDE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XDE);
    // 0x0800354C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08003550: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x08003554: beq         $v1, $zero, L_08003568
    if (ctx->r3 == 0) {
        // 0x08003558: sh          $t3, 0xDE($a0)
        MEM_H(0XDE, ctx->r4) = ctx->r11;
            goto L_08003568;
    }
    // 0x08003558: sh          $t3, 0xDE($a0)
    MEM_H(0XDE, ctx->r4) = ctx->r11;
    // 0x0800355C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X357C) << 16);
    // 0x08003560: jalr        $t9
    // 0x08003564: addiu       $a0, $a0, 0x357C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X357C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003564: addiu       $a0, $a0, 0x357C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X357C));
    after_6:
L_08003568:
    // 0x08003568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800356C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003570: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08003574: jr          $ra
    // 0x08003578: nop

    TRACE_RETURN()
    return;
    // 0x08003578: nop

;}
RECOMP_FUNC void func_080015C0_6D06A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080015C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080015C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080015CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080015D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x080015D4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x080015D8: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x080015DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080015E0: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x080015E4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x080015E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x080015EC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x080015F0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x080015F4: nop

    // 0x080015F8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x080015FC: beql        $a1, $zero, L_0800164C
    if (ctx->r5 == 0) {
        // 0x08001600: mfc1        $a1, $f6
        ctx->r5 = (int32_t)ctx->f6.u32l;
            goto L_0800164C;
    }
    goto skip_0;
    // 0x08001600: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x08001604: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001608: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800160C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001610: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x08001614: nop

    // 0x08001618: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x0800161C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x08001620: nop

    // 0x08001624: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x08001628: bne         $a1, $zero, L_08001640
    if (ctx->r5 != 0) {
        // 0x0800162C: nop
    
            goto L_08001640;
    }
    // 0x0800162C: nop

    // 0x08001630: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08001634: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001638: b           L_08001658
    // 0x0800163C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_08001658;
    // 0x0800163C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_08001640:
    // 0x08001640: b           L_08001658
    // 0x08001644: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_08001658;
    // 0x08001644: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x08001648: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
L_0800164C:
    // 0x0800164C: nop

    // 0x08001650: bltz        $a1, L_08001640
    if (SIGNED(ctx->r5) < 0) {
        // 0x08001654: nop
    
            goto L_08001640;
    }
    // 0x08001654: nop

L_08001658:
    // 0x08001658: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x0800165C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x08001660: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x08001664: jalr        $t9
    // 0x08001668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800166C: beq         $v0, $zero, L_08001698
    if (ctx->r2 == 0) {
        // 0x08001670: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08001698;
    }
    // 0x08001670: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001674: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001678: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800167C: jalr        $t9
    // 0x08001680: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001680: nop

    after_1:
    // 0x08001684: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001688: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800168C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1204) << 16);
    // 0x08001690: jalr        $t9
    // 0x08001694: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1204));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001694: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1204));
    after_2:
L_08001698:
    // 0x08001698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800169C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080016A0: jr          $ra
    // 0x080016A4: nop

    TRACE_RETURN()
    return;
    // 0x080016A4: nop

;}
RECOMP_FUNC void func_08003B6C_6D2C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003B6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003B70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003B74: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x08003B78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003B7C: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08003B80: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x08003B84: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08003B88: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x08003B8C: nop

    // 0x08003B90: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x08003B94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003B98: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x08003B9C: addiu       $t9, $t9, -0x691C
    ctx->r25 = ADD32(ctx->r25, -0X691C);
    // 0x08003BA0: jalr        $t9
    // 0x08003BA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003BA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003BA8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003BAC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003BB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003BB8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003BBC: jalr        $t9
    // 0x08003BC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003BC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08003BC4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BC8: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003BCC: jalr        $t9
    // 0x08003BD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003BD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08003BD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003BD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003BDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3ACC) << 16);
    // 0x08003BE0: jalr        $t9
    // 0x08003BE4: addiu       $a0, $a0, 0x3ACC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3ACC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003BE4: addiu       $a0, $a0, 0x3ACC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3ACC));
    after_3:
    // 0x08003BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003BF0: jr          $ra
    // 0x08003BF4: nop

    TRACE_RETURN()
    return;
    // 0x08003BF4: nop

;}
RECOMP_FUNC void func_08003048_6D2128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800304C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003054: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003058: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800305C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003064: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003068: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0800306C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003070: jalr        $t9
    // 0x08003074: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003074: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08003078: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800307C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003080: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X309C) << 16);
    // 0x08003084: jalr        $t9
    // 0x08003088: addiu       $a0, $a0, 0x309C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X309C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003088: addiu       $a0, $a0, 0x309C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X309C));
    after_1:
    // 0x0800308C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003094: jr          $ra
    // 0x08003098: nop

    TRACE_RETURN()
    return;
    // 0x08003098: nop

;}
RECOMP_FUNC void func_08001AA4_6D0B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001AA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001AB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001AB4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001AB8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001ABC: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001AC0: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001AC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001ACC: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08001AD0: jalr        $t9
    // 0x08001AD4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001AD4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08001AD8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001ADC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AE0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X1AFC) << 16);
    // 0x08001AE4: jalr        $t9
    // 0x08001AE8: addiu       $a0, $a0, 0x1AFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1AFC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001AE8: addiu       $a0, $a0, 0x1AFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X1AFC));
    after_1:
    // 0x08001AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001AF4: jr          $ra
    // 0x08001AF8: nop

    TRACE_RETURN()
    return;
    // 0x08001AF8: nop

;}
RECOMP_FUNC void func_08002ACC_6D1BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002AD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002AD8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002AE0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002AE4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002AE8: bne         $v0, $zero, L_08002B60
    if (ctx->r2 != 0) {
        // 0x08002AEC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002B60;
    }
    // 0x08002AEC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002AF0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002AF4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002AF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002AFC: jalr        $t9
    // 0x08002B00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08002B04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B08: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08002B0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002B10: jalr        $t9
    // 0x08002B14: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002B14: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_1:
    // 0x08002B18: beq         $v0, $zero, L_08002B4C
    if (ctx->r2 == 0) {
        // 0x08002B1C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08002B4C;
    }
    // 0x08002B1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002B20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002B24: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08002B28: jalr        $t9
    // 0x08002B2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002B2C: nop

    after_2:
    // 0x08002B30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002B38: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2944) << 16);
    // 0x08002B3C: jalr        $t9
    // 0x08002B40: addiu       $a0, $a0, 0x2944
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2944));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002B40: addiu       $a0, $a0, 0x2944
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2944));
    after_3:
    // 0x08002B44: b           L_08002B64
    // 0x08002B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08002B64;
    // 0x08002B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002B4C:
    // 0x08002B4C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B50: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002B54: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X2B70) << 16);
    // 0x08002B58: jalr        $t9
    // 0x08002B5C: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2B70));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002B5C: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X2B70));
    after_4:
L_08002B60:
    // 0x08002B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002B64:
    // 0x08002B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002B68: jr          $ra
    // 0x08002B6C: nop

    TRACE_RETURN()
    return;
    // 0x08002B6C: nop

;}
RECOMP_FUNC void func_0800315C_6D223C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800315C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003160: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003168: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800316C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003174: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003178: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800317C: jalr        $t9
    // 0x08003180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08003184: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003188: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x0800318C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003190: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08003194: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08003198: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x0800319C: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x080031A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x080031A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080031A8: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x080031AC: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x080031B0: jalr        $t9
    // 0x080031B4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080031B4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x080031B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080031BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080031C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X31DC) << 16);
    // 0x080031C4: jalr        $t9
    // 0x080031C8: addiu       $a0, $a0, 0x31DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X31DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080031C8: addiu       $a0, $a0, 0x31DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X31DC));
    after_2:
    // 0x080031CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080031D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080031D4: jr          $ra
    // 0x080031D8: nop

    TRACE_RETURN()
    return;
    // 0x080031D8: nop

;}
RECOMP_FUNC void func_080030E0_6D21C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080030E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080030E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080030E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080030EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080030F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080030F4: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x080030F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080030FC: jalr        $t9
    // 0x08003100: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003100: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x08003104: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003108: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x0800310C: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08003110: jalr        $t9
    // 0x08003114: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003114: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_1:
    // 0x08003118: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x0800311C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003120: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08003124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003128: jalr        $t9
    // 0x0800312C: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800312C: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x08003130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003134: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08003138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800313C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003140: jalr        $t9
    // 0x08003144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08003148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800314C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003154: jr          $ra
    // 0x08003158: nop

    TRACE_RETURN()
    return;
    // 0x08003158: nop

;}
RECOMP_FUNC void func_08000734_6CF814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000738: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800073C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000740: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000744: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000748: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800074C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000750: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000754: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000758: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x0800075C: jalr        $t9
    // 0x08000760: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000760: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08000764: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000768: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800076C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X788) << 16);
    // 0x08000770: jalr        $t9
    // 0x08000774: addiu       $a0, $a0, 0x788
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X788));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000774: addiu       $a0, $a0, 0x788
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X788));
    after_1:
    // 0x08000778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800077C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000780: jr          $ra
    // 0x08000784: nop

    TRACE_RETURN()
    return;
    // 0x08000784: nop

;}
RECOMP_FUNC void func_080005B8_6CF698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080005BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080005C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080005C8: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x080005CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080005D0: jalr        $t9
    // 0x080005D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080005D8: lw          $t3, 0xD0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD0);
    // 0x080005DC: lui         $t6, 0x2AF
    ctx->r14 = S32(0X2AF << 16);
    // 0x080005E0: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(23, 0XC00) << 16);
    // 0x080005E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005E8: ori         $t6, $t6, 0x7E3
    ctx->r14 = ctx->r14 | 0X7E3;
    // 0x080005EC: addiu       $t7, $zero, 0xE1
    ctx->r15 = ADD32(0, 0XE1);
    // 0x080005F0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x080005F4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x080005F8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x080005FC: addiu       $t2, $t2, 0xC00
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(23, 0XC00));
    // 0x08000600: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000604: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x08000608: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x0800060C: sh          $t7, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r15;
    // 0x08000610: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x08000614: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x08000618: sb          $t1, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r9;
    // 0x0800061C: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x08000620: sw          $t4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r12;
    // 0x08000624: jalr        $t9
    // 0x08000628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x0800062C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000630: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000638: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x0800063C: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x08000640: jalr        $t9
    // 0x08000644: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000644: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000648: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800064C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000654: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08000658: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x0800065C: jalr        $t9
    // 0x08000660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000664: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000668: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x0800066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000670: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x08000674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x08000678: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x0800067C: jalr        $t9
    // 0x08000680: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000680: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08000684: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000688: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800068C: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000690: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800069C: jalr        $t9
    // 0x080006A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080006A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x080006A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006A8: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x080006AC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080006B0: addiu       $a1, $a1, 0x34A0
    ctx->r5 = ADD32(ctx->r5, 0X34A0);
    // 0x080006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080006BC: jalr        $t9
    // 0x080006C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080006C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_6:
    // 0x080006C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006C8: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x080006CC: jalr        $t9
    // 0x080006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x080006D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006D8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080006E0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080006E4: jalr        $t9
    // 0x080006E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080006E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x080006EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006F0: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080006F4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(23, 0X4740) << 16);
    // 0x080006F8: addiu       $a1, $a1, 0x4740
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(23, 0X4740));
    // 0x080006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000700: jalr        $t9
    // 0x08000704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x08000708: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800070C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000718: jalr        $t9
    // 0x0800071C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800071C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x08000720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000724: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800072C: jr          $ra
    // 0x08000730: nop

    TRACE_RETURN()
    return;
    // 0x08000730: nop

;}
RECOMP_FUNC void func_08003794_6D2874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800379C: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x080037A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080037A4: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x080037A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080037AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080037B0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x080037B4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x080037B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080037BC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x080037C0: nop

    // 0x080037C4: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x080037C8: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x080037CC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080037D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080037D4: swc1        $f16, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f16.u32l;
    // 0x080037D8: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080037DC: bne         $v0, $zero, L_08003800
    if (ctx->r2 != 0) {
        // 0x080037E0: sh          $t1, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r9;
            goto L_08003800;
    }
    // 0x080037E0: sh          $t1, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r9;
    // 0x080037E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080037E8: sh          $t2, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r10;
    // 0x080037EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080037F0: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    // 0x080037F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3718) << 16);
    // 0x080037F8: jalr        $t9
    // 0x080037FC: addiu       $a0, $a0, 0x3718
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3718));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080037FC: addiu       $a0, $a0, 0x3718
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3718));
    after_0:
L_08003800:
    // 0x08003800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003808: jr          $ra
    // 0x0800380C: nop

    TRACE_RETURN()
    return;
    // 0x0800380C: nop

;}
RECOMP_FUNC void func_08003DDC_6D2EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003DDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003DE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003DE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003DE8: lh          $t7, 0xA2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA2);
    // 0x08003DEC: lh          $t6, 0xA0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA0);
    // 0x08003DF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003DF4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08003DF8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x08003DFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003E00: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08003E04: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08003E08: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08003E0C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08003E10: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08003E14: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08003E18: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08003E1C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08003E20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003E24: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08003E28: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08003E2C: jalr        $t9
    // 0x08003E30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003E30: nop

    after_0:
    // 0x08003E34: bne         $v0, $zero, L_08003E68
    if (ctx->r2 != 0) {
        // 0x08003E38: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08003E68;
    }
    // 0x08003E38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003E3C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003E40: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08003E48: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08003E4C: jalr        $t9
    // 0x08003E50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003E50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08003E54: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E58: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(23, 0X3D54) << 16);
    // 0x08003E60: jalr        $t9
    // 0x08003E64: addiu       $a0, $a0, 0x3D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3D54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003E64: addiu       $a0, $a0, 0x3D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(23, 0X3D54));
    after_2:
L_08003E68:
    // 0x08003E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08003E6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003E70: jr          $ra
    // 0x08003E74: nop

    TRACE_RETURN()
    return;
    // 0x08003E74: nop

;}
