#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022075C_5DBC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022075C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80220760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80220764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80220768: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8022076C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80220770: jal         0x80221B7C
    // 0x80220774: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_80221B7C_5DD04C(rdram, ctx);
        goto after_0;
    // 0x80220774: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80220778: bne         $v0, $zero, L_80220788
    if (ctx->r2 != 0) {
        // 0x8022077C: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_80220788;
    }
    // 0x8022077C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80220780: b           L_80220818
    // 0x80220784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80220818;
    // 0x80220784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80220788:
    // 0x80220788: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8022078C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80220790: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80220794: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80220798: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8022079C: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x802207A0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x802207A4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802207A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802207AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802207B0: swc1        $f6, 0x198($v1)
    MEM_W(0X198, ctx->r3) = ctx->f6.u32l;
    // 0x802207B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802207B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802207BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802207C0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802207C4: swc1        $f10, 0x19C($v1)
    MEM_W(0X19C, ctx->r3) = ctx->f10.u32l;
    // 0x802207C8: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x802207CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802207D0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802207D4: sb          $t8, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r24;
    // 0x802207D8: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x802207DC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802207E0: sw          $t0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r8;
    // 0x802207E4: lhu         $t1, 0x16($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X16);
    // 0x802207E8: sh          $t1, 0x14E($v1)
    MEM_H(0X14E, ctx->r3) = ctx->r9;
    // 0x802207EC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x802207F0: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802207F4: jal         0x80221C0C
    // 0x802207F8: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_1;
    // 0x802207F8: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x802207FC: lui         $t2, 0x8022
    ctx->r10 = S32(0X8022 << 16);
    // 0x80220800: addiu       $t2, $t2, 0x1028
    ctx->r10 = ADD32(ctx->r10, 0X1028);
    // 0x80220804: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80220808: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8022080C: jal         0x8003521C
    // 0x80220810: sw          $t2, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80220810: sw          $t2, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r10;
    after_2:
    // 0x80220814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80220818:
    // 0x80220818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022081C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80220820: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80220824: jr          $ra
    // 0x80220828: nop

    TRACE_RETURN()
    return;
    // 0x80220828: nop

;}
RECOMP_FUNC void func_80212088_5CD558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021208C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80212090: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80212094: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80212098: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x8021209C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802120A0: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x802120A4: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x802120A8: beq         $t6, $zero, L_802120DC
    if (ctx->r14 == 0) {
        // 0x802120AC: andi        $t0, $v0, 0x2000
        ctx->r8 = ctx->r2 & 0X2000;
            goto L_802120DC;
    }
    // 0x802120AC: andi        $t0, $v0, 0x2000
    ctx->r8 = ctx->r2 & 0X2000;
    // 0x802120B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802120B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802120B8: jal         0x8021A26C
    // 0x802120BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x802120BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x802120C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802120C4: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x802120C8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802120CC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802120D0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802120D4: b           L_80212140
    // 0x802120D8: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
        goto L_80212140;
    // 0x802120D8: sw          $t8, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->r24;
L_802120DC:
    // 0x802120DC: beq         $t0, $zero, L_80212118
    if (ctx->r8 == 0) {
        // 0x802120E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80212118;
    }
    // 0x802120E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802120E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802120E8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x802120EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802120F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802120F4: jal         0x8021A26C
    // 0x802120F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_1;
    // 0x802120F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x802120FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80212100: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x80212104: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80212108: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021210C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80212110: b           L_80212140
    // 0x80212114: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
        goto L_80212140;
    // 0x80212114: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
L_80212118:
    // 0x80212118: addiu       $t4, $zero, 0xFA
    ctx->r12 = ADD32(0, 0XFA);
    // 0x8021211C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80212120: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80212124: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x80212128: jal         0x8021A26C
    // 0x8021212C: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    func_8021A26C_5D573C(rdram, ctx);
        goto after_2;
    // 0x8021212C: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_2:
    // 0x80212130: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80212134: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80212138: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x8021213C: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
L_80212140:
    // 0x80212140: lw          $t8, 0x64($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X64);
    // 0x80212144: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x80212148: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021214C: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80212150: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x80212154: sw          $t9, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r25;
    // 0x80212158: jal         0x8003521C
    // 0x8021215C: addiu       $a0, $a0, 0x2174
    ctx->r4 = ADD32(ctx->r4, 0X2174);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x8021215C: addiu       $a0, $a0, 0x2174
    ctx->r4 = ADD32(ctx->r4, 0X2174);
    after_3:
    // 0x80212160: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80212164: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80212168: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021216C: jr          $ra
    // 0x80212170: nop

    TRACE_RETURN()
    return;
    // 0x80212170: nop

;}
RECOMP_FUNC void func_8020E5D8_5C9AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E5E0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E5E4: jal         0x80013AC4
    // 0x8020E5E8: addiu       $a0, $a0, -0x3900
    ctx->r4 = ADD32(ctx->r4, -0X3900);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E5E8: addiu       $a0, $a0, -0x3900
    ctx->r4 = ADD32(ctx->r4, -0X3900);
    after_0:
    // 0x8020E5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E5F4: jr          $ra
    // 0x8020E5F8: nop

    TRACE_RETURN()
    return;
    // 0x8020E5F8: nop

;}
RECOMP_FUNC void func_8021060C_5CBADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021060C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210614: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210618: jal         0x80013AC4
    // 0x8021061C: addiu       $a0, $a0, -0x1E20
    ctx->r4 = ADD32(ctx->r4, -0X1E20);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021061C: addiu       $a0, $a0, -0x1E20
    ctx->r4 = ADD32(ctx->r4, -0X1E20);
    after_0:
    // 0x80210620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210628: jr          $ra
    // 0x8021062C: nop

    TRACE_RETURN()
    return;
    // 0x8021062C: nop

;}
RECOMP_FUNC void func_802243B4_5DF884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802243B4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x802243B8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x802243BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802243C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802243C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802243C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802243CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802243D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802243D4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802243D8: sb          $t6, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r14;
    // 0x802243DC: jal         0x8022421C
    // 0x802243E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8022421C_5DF6EC(rdram, ctx);
        goto after_0;
    // 0x802243E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x802243E4: beql        $v0, $zero, L_80224428
    if (ctx->r2 == 0) {
        // 0x802243E8: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_80224428;
    }
    goto skip_0;
    // 0x802243E8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x802243EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802243F0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802243F4: lhu         $t8, 0xEE($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XEE);
    // 0x802243F8: beq         $t8, $zero, L_80224410
    if (ctx->r24 == 0) {
        // 0x802243FC: nop
    
            goto L_80224410;
    }
    // 0x802243FC: nop

    // 0x80224400: jal         0x8003521C
    // 0x80224404: addiu       $a0, $a0, 0x5A4C
    ctx->r4 = ADD32(ctx->r4, 0X5A4C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80224404: addiu       $a0, $a0, 0x5A4C
    ctx->r4 = ADD32(ctx->r4, 0X5A4C);
    after_1:
    // 0x80224408: b           L_80224434
    // 0x8022440C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80224434;
    // 0x8022440C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80224410:
    // 0x80224410: jal         0x80224440
    // 0x80224414: lhu         $a0, 0x9C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X9C);
    func_80224440_5DF910(rdram, ctx);
        goto after_2;
    // 0x80224414: lhu         $a0, 0x9C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X9C);
    after_2:
    // 0x80224418: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022441C: jal         0x8003521C
    // 0x80224420: addiu       $a0, $a0, 0x4324
    ctx->r4 = ADD32(ctx->r4, 0X4324);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80224420: addiu       $a0, $a0, 0x4324
    ctx->r4 = ADD32(ctx->r4, 0X4324);
    after_3:
    // 0x80224424: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_80224428:
    // 0x80224428: jal         0x80224440
    // 0x8022442C: lhu         $a0, 0x9C($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X9C);
    func_80224440_5DF910(rdram, ctx);
        goto after_4;
    // 0x8022442C: lhu         $a0, 0x9C($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X9C);
    after_4:
    // 0x80224430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80224434:
    // 0x80224434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80224438: jr          $ra
    // 0x8022443C: nop

    TRACE_RETURN()
    return;
    // 0x8022443C: nop

;}
RECOMP_FUNC void func_802104C8_5CB998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802104C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802104CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802104D0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802104D4: jal         0x80013AC4
    // 0x802104D8: addiu       $a0, $a0, -0x1F60
    ctx->r4 = ADD32(ctx->r4, -0X1F60);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802104D8: addiu       $a0, $a0, -0x1F60
    ctx->r4 = ADD32(ctx->r4, -0X1F60);
    after_0:
    // 0x802104DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802104E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802104E4: jr          $ra
    // 0x802104E8: nop

    TRACE_RETURN()
    return;
    // 0x802104E8: nop

;}
RECOMP_FUNC void func_8020E158_5C9628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E15C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E160: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E164: jal         0x80013AC4
    // 0x8020E168: addiu       $a0, $a0, -0x3B28
    ctx->r4 = ADD32(ctx->r4, -0X3B28);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E168: addiu       $a0, $a0, -0x3B28
    ctx->r4 = ADD32(ctx->r4, -0X3B28);
    after_0:
    // 0x8020E16C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E174: jr          $ra
    // 0x8020E178: nop

    TRACE_RETURN()
    return;
    // 0x8020E178: nop

;}
RECOMP_FUNC void func_8020FB14_5CAFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FB14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FB18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FB1C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FB20: jal         0x80013AC4
    // 0x8020FB24: addiu       $a0, $a0, -0x29E4
    ctx->r4 = ADD32(ctx->r4, -0X29E4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FB24: addiu       $a0, $a0, -0x29E4
    ctx->r4 = ADD32(ctx->r4, -0X29E4);
    after_0:
    // 0x8020FB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FB30: jr          $ra
    // 0x8020FB34: nop

    TRACE_RETURN()
    return;
    // 0x8020FB34: nop

;}
RECOMP_FUNC void func_80216E54_5D2324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80216E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80216E5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80216E60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80216E64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80216E68: jal         0x80035EEC
    // 0x80216E6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x80216E6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80216E70: beq         $v0, $zero, L_80216EBC
    if (ctx->r2 == 0) {
        // 0x80216E74: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80216EBC;
    }
    // 0x80216E74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80216E78: beq         $v0, $zero, L_80216EBC
    if (ctx->r2 == 0) {
        // 0x80216E7C: lui         $at, 0x8024
        ctx->r1 = S32(0X8024 << 16);
            goto L_80216EBC;
    }
    // 0x80216E7C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80216E80: lwc1        $f0, -0x5AEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AEC);
    // 0x80216E84: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80216E88: addiu       $t6, $t6, -0x26E0
    ctx->r14 = ADD32(ctx->r14, -0X26E0);
    // 0x80216E8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80216E90: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80216E94: sw          $t7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r15;
    // 0x80216E98: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80216E9C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80216EA0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x80216EA4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80216EA8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80216EAC: jal         0x80216CE0
    // 0x80216EB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80216CE0_5D21B0(rdram, ctx);
        goto after_1;
    // 0x80216EB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80216EB4: b           L_80216EC0
    // 0x80216EB8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_80216EC0;
    // 0x80216EB8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80216EBC:
    // 0x80216EBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80216EC0:
    // 0x80216EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80216EC8: jr          $ra
    // 0x80216ECC: nop

    TRACE_RETURN()
    return;
    // 0x80216ECC: nop

;}
RECOMP_FUNC void func_8020F64C_5CAB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F64C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F654: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F658: jal         0x80013AC4
    // 0x8020F65C: addiu       $a0, $a0, -0x2DEC
    ctx->r4 = ADD32(ctx->r4, -0X2DEC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F65C: addiu       $a0, $a0, -0x2DEC
    ctx->r4 = ADD32(ctx->r4, -0X2DEC);
    after_0:
    // 0x8020F660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F668: jr          $ra
    // 0x8020F66C: nop

    TRACE_RETURN()
    return;
    // 0x8020F66C: nop

;}
RECOMP_FUNC void func_80210804_5CBCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021080C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210810: jal         0x80013AC4
    // 0x80210814: addiu       $a0, $a0, -0x1C7C
    ctx->r4 = ADD32(ctx->r4, -0X1C7C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210814: addiu       $a0, $a0, -0x1C7C
    ctx->r4 = ADD32(ctx->r4, -0X1C7C);
    after_0:
    // 0x80210818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021081C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210820: jr          $ra
    // 0x80210824: nop

    TRACE_RETURN()
    return;
    // 0x80210824: nop

;}
RECOMP_FUNC void func_8020E548_5C9A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E550: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E554: jal         0x80013AC4
    // 0x8020E558: addiu       $a0, $a0, -0x397C
    ctx->r4 = ADD32(ctx->r4, -0X397C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E558: addiu       $a0, $a0, -0x397C
    ctx->r4 = ADD32(ctx->r4, -0X397C);
    after_0:
    // 0x8020E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E564: jr          $ra
    // 0x8020E568: nop

    TRACE_RETURN()
    return;
    // 0x8020E568: nop

;}
RECOMP_FUNC void func_8022350C_5DE9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022350C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80223510: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80223514: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80223518: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x8022351C: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80223520: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80223524: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80223528: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8022352C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80223530: nop

    // 0x80223534: bc1fl       L_80223548
    if (!c1cs) {
        // 0x80223538: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80223548;
    }
    goto skip_0;
    // 0x80223538: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_0:
    // 0x8022353C: jr          $ra
    // 0x80223540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x80223540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223544: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_80223548:
    // 0x80223548: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8022354C: nop

    // 0x80223550: bc1fl       L_80223564
    if (!c1cs) {
        // 0x80223554: lwc1        $f8, 0x8($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80223564;
    }
    goto skip_1;
    // 0x80223554: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    skip_1:
    // 0x80223558: jr          $ra
    // 0x8022355C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8022355C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80223560: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
L_80223564:
    // 0x80223564: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80223568: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8022356C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80223570: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80223574: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80223578: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022357C: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80223580: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80223584: nop

    // 0x80223588: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8022358C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80223590: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80223594: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x80223598: nop

    // 0x8022359C: bc1f        L_802235AC
    if (!c1cs) {
        // 0x802235A0: nop
    
            goto L_802235AC;
    }
    // 0x802235A0: nop

    // 0x802235A4: jr          $ra
    // 0x802235A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x802235A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802235AC:
    // 0x802235AC: jr          $ra
    // 0x802235B0: nop

    TRACE_RETURN()
    return;
    // 0x802235B0: nop

;}
RECOMP_FUNC void func_8020F2C8_5CA798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F2C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F2D0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F2D4: jal         0x80013AC4
    // 0x8020F2D8: addiu       $a0, $a0, -0x2FCC
    ctx->r4 = ADD32(ctx->r4, -0X2FCC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F2D8: addiu       $a0, $a0, -0x2FCC
    ctx->r4 = ADD32(ctx->r4, -0X2FCC);
    after_0:
    // 0x8020F2DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F2E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F2E4: jr          $ra
    // 0x8020F2E8: nop

    TRACE_RETURN()
    return;
    // 0x8020F2E8: nop

;}
RECOMP_FUNC void func_802239B0_5DEE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802239B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802239B4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x802239B8: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x802239BC: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x802239C0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802239C4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802239C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802239CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802239D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802239D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802239D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802239DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802239E0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x802239E4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x802239E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802239EC: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x802239F0: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x802239F4: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x802239F8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802239FC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80223A00: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    // 0x80223A04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80223A08: lhu         $a0, 0x46($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X46);
    // 0x80223A0C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x80223A10: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80223A14: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80223A18: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80223A1C: jal         0x80033898
    // 0x80223A20: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x80223A20: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80223A24: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80223A28: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80223A2C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80223A30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80223A34: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80223A38: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80223A3C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80223A40: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x80223A44: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80223A48: nop

    // 0x80223A4C: sh          $t0, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r8;
    // 0x80223A50: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80223A54: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80223A58: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x80223A5C: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x80223A60: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80223A64: nop

    // 0x80223A68: sh          $t2, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r10;
    // 0x80223A6C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80223A70: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80223A74: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x80223A78: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x80223A7C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80223A80: nop

    // 0x80223A84: sh          $t4, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r12;
    // 0x80223A88: lbu         $t5, 0x53($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X53);
    // 0x80223A8C: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80223A90: ori         $t7, $t6, 0xF
    ctx->r15 = ctx->r14 | 0XF;
    // 0x80223A94: sh          $t7, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r15;
    // 0x80223A98: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80223A9C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80223AA0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80223AA4: nop

    // 0x80223AA8: sh          $t9, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r25;
    // 0x80223AAC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80223AB0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80223AB4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80223AB8: nop

    // 0x80223ABC: sh          $t1, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r9;
    // 0x80223AC0: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80223AC4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80223AC8: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x80223ACC: nop

    // 0x80223AD0: sh          $t3, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r11;
    // 0x80223AD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80223AD8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80223ADC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80223AE0: jr          $ra
    // 0x80223AE4: nop

    TRACE_RETURN()
    return;
    // 0x80223AE4: nop

;}
RECOMP_FUNC void func_80218FE8_5D44B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218FE8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80218FEC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80218FF0: lw          $t6, 0xC4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC4);
    // 0x80218FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80218FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80218FFC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80219000: sw          $t7, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r15;
    // 0x80219004: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x80219008: lui         $v1, 0xFF7F
    ctx->r3 = S32(0XFF7F << 16);
    // 0x8021900C: beql        $t8, $zero, L_802190D8
    if (ctx->r24 == 0) {
        // 0x80219010: lw          $t1, 0x60($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X60);
            goto L_802190D8;
    }
    goto skip_0;
    // 0x80219010: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    skip_0:
    // 0x80219014: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80219018: lw          $t1, 0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X10);
    // 0x8021901C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80219020: and         $t0, $t9, $v1
    ctx->r8 = ctx->r25 & ctx->r3;
    // 0x80219024: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x80219028: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x8021902C: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
    // 0x80219030: jal         0x8021A910
    // 0x80219034: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8021A910_5D5DE0(rdram, ctx);
        goto after_0;
    // 0x80219034: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80219038: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8021903C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80219040: lw          $t3, 0xD4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XD4);
    // 0x80219044: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80219048: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8021904C: beql        $t4, $zero, L_80219098
    if (ctx->r12 == 0) {
        // 0x80219050: lw          $t3, 0x68($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X68);
            goto L_80219098;
    }
    goto skip_1;
    // 0x80219050: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
    skip_1:
    // 0x80219054: lw          $t5, 0x64($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X64);
    // 0x80219058: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x8021905C: bnel        $t6, $zero, L_80219098
    if (ctx->r14 != 0) {
        // 0x80219060: lw          $t3, 0x68($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X68);
            goto L_80219098;
    }
    goto skip_2;
    // 0x80219060: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
    skip_2:
    // 0x80219064: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x80219068: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8021906C: bnel        $t8, $zero, L_80219098
    if (ctx->r24 != 0) {
        // 0x80219070: lw          $t3, 0x68($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X68);
            goto L_80219098;
    }
    goto skip_3;
    // 0x80219070: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
    skip_3:
    // 0x80219074: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80219078: lw          $t1, 0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X10);
    // 0x8021907C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80219080: or          $t0, $t9, $v0
    ctx->r8 = ctx->r25 | ctx->r2;
    // 0x80219084: or          $t2, $t1, $v0
    ctx->r10 = ctx->r9 | ctx->r2;
    // 0x80219088: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x8021908C: b           L_8021924C
    // 0x80219090: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
        goto L_8021924C;
    // 0x80219090: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
    // 0x80219094: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
L_80219098:
    // 0x80219098: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x8021909C: bnel        $t4, $zero, L_802190B8
    if (ctx->r12 != 0) {
        // 0x802190A0: lw          $t7, 0xC($a0)
        ctx->r15 = MEM_W(ctx->r4, 0XC);
            goto L_802190B8;
    }
    goto skip_4;
    // 0x802190A0: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    skip_4:
    // 0x802190A4: lw          $t5, 0x60($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X60);
    // 0x802190A8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x802190AC: bgezl       $t6, L_802190D8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802190B0: lw          $t1, 0x60($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X60);
            goto L_802190D8;
    }
    goto skip_5;
    // 0x802190B0: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    skip_5:
    // 0x802190B4: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
L_802190B8:
    // 0x802190B8: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x802190BC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802190C0: or          $t8, $t7, $v0
    ctx->r24 = ctx->r15 | ctx->r2;
    // 0x802190C4: or          $t0, $t9, $v0
    ctx->r8 = ctx->r25 | ctx->r2;
    // 0x802190C8: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    // 0x802190CC: b           L_8021924C
    // 0x802190D0: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
        goto L_8021924C;
    // 0x802190D0: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x802190D4: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
L_802190D8:
    // 0x802190D8: sll         $t2, $t1, 10
    ctx->r10 = S32(ctx->r9 << 10);
    // 0x802190DC: bgezl       $t2, L_802190F8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802190E0: lbu         $t5, 0x30($a0)
        ctx->r13 = MEM_BU(ctx->r4, 0X30);
            goto L_802190F8;
    }
    goto skip_6;
    // 0x802190E0: lbu         $t5, 0x30($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X30);
    skip_6:
    // 0x802190E4: lbu         $t3, 0x30($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X30);
    // 0x802190E8: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x802190EC: b           L_80219100
    // 0x802190F0: sb          $t4, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r12;
        goto L_80219100;
    // 0x802190F0: sb          $t4, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r12;
    // 0x802190F4: lbu         $t5, 0x30($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X30);
L_802190F8:
    // 0x802190F8: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x802190FC: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
L_80219100:
    // 0x80219100: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x80219104: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x80219108: beql        $t8, $zero, L_80219124
    if (ctx->r24 == 0) {
        // 0x8021910C: lbu         $t1, 0x30($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X30);
            goto L_80219124;
    }
    goto skip_7;
    // 0x8021910C: lbu         $t1, 0x30($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X30);
    skip_7:
    // 0x80219110: lbu         $t9, 0x30($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X30);
    // 0x80219114: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x80219118: b           L_8021912C
    // 0x8021911C: sb          $t0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r8;
        goto L_8021912C;
    // 0x8021911C: sb          $t0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r8;
    // 0x80219120: lbu         $t1, 0x30($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X30);
L_80219124:
    // 0x80219124: andi        $t2, $t1, 0xFFFD
    ctx->r10 = ctx->r9 & 0XFFFD;
    // 0x80219128: sb          $t2, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r10;
L_8021912C:
    // 0x8021912C: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x80219130: beql        $v0, $zero, L_80219238
    if (ctx->r2 == 0) {
        // 0x80219134: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_8;
    // 0x80219134: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_8:
    // 0x80219138: lbu         $t3, 0x4C($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X4C);
    // 0x8021913C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80219140: beql        $t3, $at, L_80219238
    if (ctx->r11 == ctx->r1) {
        // 0x80219144: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_9;
    // 0x80219144: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_9:
    // 0x80219148: lw          $t4, 0x68($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X68);
    // 0x8021914C: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80219150: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x80219154: sll         $t7, $t6, 11
    ctx->r15 = S32(ctx->r14 << 11);
    // 0x80219158: bgez        $t7, L_802191BC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8021915C: sw          $t5, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r13;
            goto L_802191BC;
    }
    // 0x8021915C: sw          $t5, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r13;
    // 0x80219160: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x80219164: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80219168: bgezl       $t9, L_80219238
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021916C: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_10;
    // 0x8021916C: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_10:
    // 0x80219170: lbu         $t0, 0x4C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X4C);
    // 0x80219174: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x80219178: bnel        $t0, $at, L_80219238
    if (ctx->r8 != ctx->r1) {
        // 0x8021917C: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_11;
    // 0x8021917C: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_11:
    // 0x80219180: jal         0x80218234
    // 0x80219184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80218234_5D3704(rdram, ctx);
        goto after_1;
    // 0x80219184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80219188: beq         $v0, $zero, L_80219234
    if (ctx->r2 == 0) {
        // 0x8021918C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80219234;
    }
    // 0x8021918C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80219190: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    // 0x80219194: lw          $t3, 0xC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC);
    // 0x80219198: lw          $t5, 0x10($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X10);
    // 0x8021919C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802191A0: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x802191A4: or          $t4, $t3, $v0
    ctx->r12 = ctx->r11 | ctx->r2;
    // 0x802191A8: or          $t6, $t5, $v0
    ctx->r14 = ctx->r13 | ctx->r2;
    // 0x802191AC: sw          $t2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r10;
    // 0x802191B0: sw          $t4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r12;
    // 0x802191B4: b           L_8021924C
    // 0x802191B8: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
        goto L_8021924C;
    // 0x802191B8: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
L_802191BC:
    // 0x802191BC: lw          $v1, 0x60($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X60);
    // 0x802191C0: sll         $t7, $v1, 12
    ctx->r15 = S32(ctx->r3 << 12);
    // 0x802191C4: bgezl       $t7, L_80219238
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802191C8: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_12;
    // 0x802191C8: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_12:
    // 0x802191CC: lbu         $t8, 0x4C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4C);
    // 0x802191D0: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x802191D4: sll         $t9, $v1, 9
    ctx->r25 = S32(ctx->r3 << 9);
    // 0x802191D8: bnel        $t8, $at, L_80219238
    if (ctx->r24 != ctx->r1) {
        // 0x802191DC: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_13;
    // 0x802191DC: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_13:
    // 0x802191E0: bltzl       $t9, L_80219238
    if (SIGNED(ctx->r25) < 0) {
        // 0x802191E4: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_14;
    // 0x802191E4: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_14:
    // 0x802191E8: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x802191EC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x802191F0: bnel        $t1, $zero, L_80219238
    if (ctx->r9 != 0) {
        // 0x802191F4: lw          $t8, 0x34($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X34);
            goto L_80219238;
    }
    goto skip_15;
    // 0x802191F4: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
    skip_15:
    // 0x802191F8: jal         0x80218234
    // 0x802191FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80218234_5D3704(rdram, ctx);
        goto after_2;
    // 0x802191FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80219200: beq         $v0, $zero, L_80219234
    if (ctx->r2 == 0) {
        // 0x80219204: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80219234;
    }
    // 0x80219204: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80219208: lw          $t2, 0x68($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X68);
    // 0x8021920C: lw          $t4, 0xC($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC);
    // 0x80219210: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x80219214: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80219218: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x8021921C: or          $t5, $t4, $v0
    ctx->r13 = ctx->r12 | ctx->r2;
    // 0x80219220: or          $t7, $t6, $v0
    ctx->r15 = ctx->r14 | ctx->r2;
    // 0x80219224: sw          $t3, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r11;
    // 0x80219228: sw          $t5, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r13;
    // 0x8021922C: b           L_8021924C
    // 0x80219230: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
        goto L_8021924C;
    // 0x80219230: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
L_80219234:
    // 0x80219234: lw          $t8, 0x34($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X34);
L_80219238:
    // 0x80219238: beql        $t8, $zero, L_80219250
    if (ctx->r24 == 0) {
        // 0x8021923C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80219250;
    }
    goto skip_16;
    // 0x8021923C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_16:
    // 0x80219240: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x80219244: ori         $t0, $t9, 0x200
    ctx->r8 = ctx->r25 | 0X200;
    // 0x80219248: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
L_8021924C:
    // 0x8021924C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80219250:
    // 0x80219250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80219254: jr          $ra
    // 0x80219258: nop

    TRACE_RETURN()
    return;
    // 0x80219258: nop

;}
RECOMP_FUNC void func_802150E4_5D05B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802150E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802150E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802150EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802150F0: jal         0x80221B48
    // 0x802150F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80221B48_5DD018(rdram, ctx);
        goto after_0;
    // 0x802150F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802150F8: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x802150FC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x80215100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80215104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80215108: jal         0x80221C0C
    // 0x8021510C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_1;
    // 0x8021510C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80215110: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80215114: lwc1        $f0, -0x5EDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5EDC);
    // 0x80215118: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021511C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80215120: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x80215124: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x80215128: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8021512C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80215130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80215134: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80215138: jalr        $t9
    // 0x8021513C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8021513C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80215140: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80215144: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80215148: addiu       $a0, $a0, 0x50A0
    ctx->r4 = ADD32(ctx->r4, 0X50A0);
    // 0x8021514C: jal         0x8003521C
    // 0x80215150: sw          $zero, 0xB4($t6)
    MEM_W(0XB4, ctx->r14) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80215150: sw          $zero, 0xB4($t6)
    MEM_W(0XB4, ctx->r14) = 0;
    after_3:
    // 0x80215154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021515C: jr          $ra
    // 0x80215160: nop

    TRACE_RETURN()
    return;
    // 0x80215160: nop

;}
RECOMP_FUNC void func_80210654_5CBB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021065C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210660: jal         0x80013AC4
    // 0x80210664: addiu       $a0, $a0, -0x1DF0
    ctx->r4 = ADD32(ctx->r4, -0X1DF0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210664: addiu       $a0, $a0, -0x1DF0
    ctx->r4 = ADD32(ctx->r4, -0X1DF0);
    after_0:
    // 0x80210668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021066C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210670: jr          $ra
    // 0x80210674: nop

    TRACE_RETURN()
    return;
    // 0x80210674: nop

;}
RECOMP_FUNC void func_8020EE6C_5CA33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EE6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EE70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EE74: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EE78: jal         0x80013AC4
    // 0x8020EE7C: addiu       $a0, $a0, -0x3274
    ctx->r4 = ADD32(ctx->r4, -0X3274);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EE7C: addiu       $a0, $a0, -0x3274
    ctx->r4 = ADD32(ctx->r4, -0X3274);
    after_0:
    // 0x8020EE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EE88: jr          $ra
    // 0x8020EE8C: nop

    TRACE_RETURN()
    return;
    // 0x8020EE8C: nop

;}
RECOMP_FUNC void func_80223D40_5DF210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223D40: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80223D44: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80223D48: lui         $s0, 0x8007
    ctx->r16 = S32(0X8007 << 16);
    // 0x80223D4C: lw          $s0, 0x7860($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7860);
    // 0x80223D50: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80223D54: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80223D58: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80223D5C: bne         $s0, $zero, L_80223D6C
    if (ctx->r16 != 0) {
        // 0x80223D60: sw          $a2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r6;
            goto L_80223D6C;
    }
    // 0x80223D60: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80223D64: b           L_80223E88
    // 0x80223D68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223E88;
    // 0x80223D68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223D6C:
    // 0x80223D6C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80223D70: lwc1        $f2, -0x5478($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5478);
    // 0x80223D74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80223D78: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80223D7C: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x80223D80: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x80223D84: addiu       $a1, $a1, 0x4324
    ctx->r5 = ADD32(ctx->r5, 0X4324);
    // 0x80223D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223D8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80223D90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80223D94: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80223D98: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80223D9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80223DA0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80223DA4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80223DA8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80223DAC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x80223DB0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x80223DB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80223DB8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80223DBC: jal         0x80035690
    // 0x80223DC0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80035690_36290(rdram, ctx);
        goto after_0;
    // 0x80223DC0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80223DC4: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80223DC8: bne         $v0, $zero, L_80223DD8
    if (ctx->r2 != 0) {
        // 0x80223DCC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80223DD8;
    }
    // 0x80223DCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80223DD0: b           L_80223E88
    // 0x80223DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80223E88;
    // 0x80223DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80223DD8:
    // 0x80223DD8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80223DDC: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80223DE0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80223DE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80223DE8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80223DEC: sb          $a0, -0x51DD($at)
    MEM_B(-0X51DD, ctx->r1) = ctx->r4;
    // 0x80223DF0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80223DF4: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x80223DF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80223DFC: lwc1        $f4, -0x5474($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5474);
    // 0x80223E00: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80223E04: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80223E08: swc1        $f4, 0xE4($t7)
    MEM_W(0XE4, ctx->r15) = ctx->f4.u32l;
    // 0x80223E0C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80223E10: lwc1        $f6, -0x5470($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5470);
    // 0x80223E14: swc1        $f6, 0xE8($t8)
    MEM_W(0XE8, ctx->r24) = ctx->f6.u32l;
    // 0x80223E18: lw          $t9, 0x5C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X5C);
    // 0x80223E1C: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x80223E20: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80223E24: sw          $t0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r8;
    // 0x80223E28: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80223E2C: bnel        $a2, $t1, L_80223E40
    if (ctx->r6 != ctx->r9) {
        // 0x80223E30: sh          $a0, 0x9C($v0)
        MEM_H(0X9C, ctx->r2) = ctx->r4;
            goto L_80223E40;
    }
    goto skip_0;
    // 0x80223E30: sh          $a0, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r4;
    skip_0:
    // 0x80223E34: b           L_80223E40
    // 0x80223E38: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
        goto L_80223E40;
    // 0x80223E38: sh          $zero, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = 0;
    // 0x80223E3C: sh          $a0, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r4;
L_80223E40:
    // 0x80223E40: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x80223E44: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80223E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223E4C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80223E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80223E54: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x80223E58: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80223E5C: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x80223E60: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80223E64: jal         0x80035214
    // 0x80223E68: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    func_80035214_35E14(rdram, ctx);
        goto after_1;
    // 0x80223E68: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    after_1:
    // 0x80223E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223E70: jal         0x80035244
    // 0x80223E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_2;
    // 0x80223E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80223E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223E7C: jal         0x80225D10
    // 0x80223E80: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_80225D10_5E11E0(rdram, ctx);
        goto after_3;
    // 0x80223E80: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_3:
    // 0x80223E84: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80223E88:
    // 0x80223E88: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80223E8C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80223E90: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80223E94: jr          $ra
    // 0x80223E98: nop

    TRACE_RETURN()
    return;
    // 0x80223E98: nop

;}
RECOMP_FUNC void func_8021500C_5D04DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021500C: jr          $ra
    // 0x80215010: nop

    TRACE_RETURN()
    return;
    // 0x80215010: nop

;}
RECOMP_FUNC void func_8020EE48_5CA318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EE48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EE50: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EE54: jal         0x80013AC4
    // 0x8020EE58: addiu       $a0, $a0, -0x327C
    ctx->r4 = ADD32(ctx->r4, -0X327C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EE58: addiu       $a0, $a0, -0x327C
    ctx->r4 = ADD32(ctx->r4, -0X327C);
    after_0:
    // 0x8020EE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EE60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EE64: jr          $ra
    // 0x8020EE68: nop

    TRACE_RETURN()
    return;
    // 0x8020EE68: nop

;}
RECOMP_FUNC void func_8020FF4C_5CB41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FF4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FF50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FF54: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FF58: jal         0x80013AC4
    // 0x8020FF5C: addiu       $a0, $a0, -0x2524
    ctx->r4 = ADD32(ctx->r4, -0X2524);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FF5C: addiu       $a0, $a0, -0x2524
    ctx->r4 = ADD32(ctx->r4, -0X2524);
    after_0:
    // 0x8020FF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FF68: jr          $ra
    // 0x8020FF6C: nop

    TRACE_RETURN()
    return;
    // 0x8020FF6C: nop

;}
RECOMP_FUNC void func_802176C4_5D2B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802176C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802176C8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x802176CC: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x802176D0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x802176D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802176D8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x802176DC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802176E0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802176E4: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x802176E8: beq         $at, $zero, L_80217EF8
    if (ctx->r1 == 0) {
        // 0x802176EC: sdc1        $f20, 0x10($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
            goto L_80217EF8;
    }
    // 0x802176EC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x802176F0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x802176F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802176F8: addu        $at, $at, $t6
    gpr jr_addend_80217700 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802176FC: lw          $t6, -0x5AD0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5AD0);
    // 0x80217700: jr          $t6
    // 0x80217704: nop

    switch (jr_addend_80217700 >> 2) {
        case 0: goto L_80217708; break;
        case 1: goto L_80217788; break;
        case 2: goto L_8021783C; break;
        case 3: goto L_8021798C; break;
        case 4: goto L_80217A74; break;
        case 5: goto L_80217C00; break;
        default: switch_error(__func__, 0x80217700, 0x8023A530);
    }
    // 0x80217704: nop

L_80217708:
    // 0x80217708: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021770C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x80217710: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217714: jal         0x802171A8
    // 0x80217718: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x80217718: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8021771C: beq         $v0, $zero, L_80217780
    if (ctx->r2 == 0) {
        // 0x80217720: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217780;
    }
    // 0x80217720: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80217724: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x80217728: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8021772C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80217730: jal         0x802192B4
    // 0x80217734: sw          $t8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r24;
    func_802192B4_5D4784(rdram, ctx);
        goto after_1;
    // 0x80217734: sw          $t8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r24;
    after_1:
    // 0x80217738: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8021773C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80217740: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80217744: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80217748: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021774C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80217750: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80217754: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80217758: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021775C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80217760: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x80217764: add.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = ctx->f10.d + ctx->f22.d;
    // 0x80217768: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8021776C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80217770: jal         0x80219E08
    // 0x80217774: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_2;
    // 0x80217774: nop

    after_2:
    // 0x80217778: b           L_80217EF8
    // 0x8021777C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_80217EF8;
    // 0x8021777C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80217780:
    // 0x80217780: b           L_80217EF8
    // 0x80217784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217EF8;
    // 0x80217784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217788:
    // 0x80217788: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021778C: addiu       $a1, $a1, 0x22A0
    ctx->r5 = ADD32(ctx->r5, 0X22A0);
    // 0x80217790: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217794: jal         0x802171A8
    // 0x80217798: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_3;
    // 0x80217798: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8021779C: beq         $v0, $zero, L_80217834
    if (ctx->r2 == 0) {
        // 0x802177A0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217834;
    }
    // 0x802177A0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802177A4: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x802177A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802177AC: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x802177B0: jal         0x802192B4
    // 0x802177B4: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
    func_802192B4_5D4784(rdram, ctx);
        goto after_4;
    // 0x802177B4: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
    after_4:
    // 0x802177B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802177BC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802177C0: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x802177C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802177C8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802177CC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802177D0: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x802177D4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802177D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802177DC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802177E0: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x802177E4: add.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = ctx->f10.d + ctx->f22.d;
    // 0x802177E8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802177EC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802177F0: jal         0x80219E08
    // 0x802177F4: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_5;
    // 0x802177F4: nop

    after_5:
    // 0x802177F8: jal         0x802196E4
    // 0x802177FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802196E4_5D4BB4(rdram, ctx);
        goto after_6;
    // 0x802177FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80217800: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217804: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_80217808:
    // 0x80217808: jal         0x80218090
    // 0x8021780C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80218090_5D3560(rdram, ctx);
        goto after_7;
    // 0x8021780C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x80217810: beq         $v0, $zero, L_80217824
    if (ctx->r2 == 0) {
        // 0x80217814: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80217824;
    }
    // 0x80217814: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217818: lw          $t1, 0x64($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X64);
    // 0x8021781C: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x80217820: sw          $t2, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r10;
L_80217824:
    // 0x80217824: bne         $s0, $s2, L_80217808
    if (ctx->r16 != ctx->r18) {
        // 0x80217828: nop
    
            goto L_80217808;
    }
    // 0x80217828: nop

    // 0x8021782C: b           L_80217EF8
    // 0x80217830: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_80217EF8;
    // 0x80217830: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80217834:
    // 0x80217834: b           L_80217EF8
    // 0x80217838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217EF8;
    // 0x80217838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021783C:
    // 0x8021783C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217840: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x80217844: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217848: jal         0x802171A8
    // 0x8021784C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_8;
    // 0x8021784C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80217850: beq         $v0, $zero, L_80217984
    if (ctx->r2 == 0) {
        // 0x80217854: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217984;
    }
    // 0x80217854: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217858: lw          $t3, 0x64($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X64);
    // 0x8021785C: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    // 0x80217860: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x80217864: sw          $t4, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r12;
    // 0x80217868: jal         0x80219E08
    // 0x8021786C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_9;
    // 0x8021786C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_9:
    // 0x80217870: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80217874: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80217878: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8021787C: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80217880: addiu       $t5, $t5, 0x2088
    ctx->r13 = ADD32(ctx->r13, 0X2088);
    // 0x80217884: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80217888: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8021788C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80217890: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x80217894: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217898: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_8021789C:
    // 0x8021789C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x802178A0: jal         0x802171A8
    // 0x802178A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_10;
    // 0x802178A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x802178A8: beq         $v0, $zero, L_80217940
    if (ctx->r2 == 0) {
        // 0x802178AC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217940;
    }
    // 0x802178AC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802178B0: sll         $s2, $s0, 2
    ctx->r18 = S32(ctx->r16 << 2);
    // 0x802178B4: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x802178B8: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x802178BC: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x802178C0: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x802178C4: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x802178C8: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x802178CC: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x802178D0: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    // 0x802178D4: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x802178D8: jal         0x802192B4
    // 0x802178DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_802192B4_5D4784(rdram, ctx);
        goto after_11;
    // 0x802178DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_11:
    // 0x802178E0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802178E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802178E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802178EC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802178F0: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x802178F4: add.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = ctx->f10.d + ctx->f22.d;
    // 0x802178F8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802178FC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80217900: jal         0x80219E08
    // 0x80217904: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_12;
    // 0x80217904: nop

    after_12:
    // 0x80217908: jal         0x802192B4
    // 0x8021790C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802192B4_5D4784(rdram, ctx);
        goto after_13;
    // 0x8021790C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x80217910: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80217914: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80217918: addiu       $a2, $zero, 0x3F0
    ctx->r6 = ADD32(0, 0X3F0);
    // 0x8021791C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80217920: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    // 0x80217924: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80217928: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x8021792C: add.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = ctx->f10.d + ctx->f22.d;
    // 0x80217930: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80217934: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80217938: jal         0x8021F154
    // 0x8021793C: nop

    func_8021F154_5DA624(rdram, ctx);
        goto after_14;
    // 0x8021793C: nop

    after_14:
L_80217940:
    // 0x80217940: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217944: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80217948: bnel        $at, $zero, L_8021789C
    if (ctx->r1 != 0) {
        // 0x8021794C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8021789C;
    }
    goto skip_0;
    // 0x8021794C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x80217950: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217954: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80217958:
    // 0x80217958: jal         0x80218090
    // 0x8021795C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80218090_5D3560(rdram, ctx);
        goto after_15;
    // 0x8021795C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_15:
    // 0x80217960: beq         $v0, $zero, L_80217974
    if (ctx->r2 == 0) {
        // 0x80217964: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80217974;
    }
    // 0x80217964: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217968: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x8021796C: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80217970: sw          $t9, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r25;
L_80217974:
    // 0x80217974: bne         $s0, $s1, L_80217958
    if (ctx->r16 != ctx->r17) {
        // 0x80217978: nop
    
            goto L_80217958;
    }
    // 0x80217978: nop

    // 0x8021797C: b           L_80217EF8
    // 0x80217980: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
        goto L_80217EF8;
    // 0x80217980: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_80217984:
    // 0x80217984: b           L_80217EF8
    // 0x80217988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217EF8;
    // 0x80217988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021798C:
    // 0x8021798C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217990: addiu       $a1, $a1, 0x159C
    ctx->r5 = ADD32(ctx->r5, 0X159C);
    // 0x80217994: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217998: jal         0x802171A8
    // 0x8021799C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_16;
    // 0x8021799C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x802179A0: beq         $v0, $zero, L_80217A6C
    if (ctx->r2 == 0) {
        // 0x802179A4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217A6C;
    }
    // 0x802179A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802179A8: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x802179AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802179B0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802179B4: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x802179B8: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
    // 0x802179BC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802179C0: jal         0x80219E08
    // 0x802179C4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_17;
    // 0x802179C4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_17:
    // 0x802179C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802179CC: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x802179D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x802179D4: jal         0x802171A8
    // 0x802179D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_18;
    // 0x802179D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x802179DC: beq         $v0, $zero, L_80217A38
    if (ctx->r2 == 0) {
        // 0x802179E0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217A38;
    }
    // 0x802179E0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x802179E4: jal         0x802192B4
    // 0x802179E8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_802192B4_5D4784(rdram, ctx);
        goto after_19;
    // 0x802179E8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_19:
    // 0x802179EC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802179F0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x802179F4: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x802179F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802179FC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80217A00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80217A04: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80217A08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80217A0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80217A10: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80217A14: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x80217A18: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80217A1C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80217A20: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80217A24: jal         0x80219E08
    // 0x80217A28: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_20;
    // 0x80217A28: nop

    after_20:
    // 0x80217A2C: lw          $t2, 0x64($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X64);
    // 0x80217A30: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x80217A34: sw          $t3, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r11;
L_80217A38:
    // 0x80217A38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217A3C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_80217A40:
    // 0x80217A40: jal         0x80218090
    // 0x80217A44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80218090_5D3560(rdram, ctx);
        goto after_21;
    // 0x80217A44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_21:
    // 0x80217A48: beq         $v0, $zero, L_80217A5C
    if (ctx->r2 == 0) {
        // 0x80217A4C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80217A5C;
    }
    // 0x80217A4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217A50: lw          $t4, 0x64($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X64);
    // 0x80217A54: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x80217A58: sw          $t5, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r13;
L_80217A5C:
    // 0x80217A5C: bne         $s0, $s1, L_80217A40
    if (ctx->r16 != ctx->r17) {
        // 0x80217A60: nop
    
            goto L_80217A40;
    }
    // 0x80217A60: nop

    // 0x80217A64: b           L_80217EF8
    // 0x80217A68: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
        goto L_80217EF8;
    // 0x80217A68: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_80217A6C:
    // 0x80217A6C: b           L_80217EF8
    // 0x80217A70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217EF8;
    // 0x80217A70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217A74:
    // 0x80217A74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217A78: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x80217A7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217A80: jal         0x802171A8
    // 0x80217A84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_22;
    // 0x80217A84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_22:
    // 0x80217A88: beq         $v0, $zero, L_80217BF8
    if (ctx->r2 == 0) {
        // 0x80217A8C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217BF8;
    }
    // 0x80217A8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217A90: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x80217A94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80217A98: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80217A9C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80217AA0: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    // 0x80217AA4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80217AA8: jal         0x80219E08
    // 0x80217AAC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_23;
    // 0x80217AAC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_23:
    // 0x80217AB0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217AB4: addiu       $a1, $a1, 0x1D3C
    ctx->r5 = ADD32(ctx->r5, 0X1D3C);
    // 0x80217AB8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217ABC: jal         0x802171A8
    // 0x80217AC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_24;
    // 0x80217AC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_24:
    // 0x80217AC4: beql        $v0, $zero, L_80217AE8
    if (ctx->r2 == 0) {
        // 0x80217AC8: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_80217AE8;
    }
    goto skip_1;
    // 0x80217AC8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    skip_1:
    // 0x80217ACC: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x80217AD0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80217AD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217AD8: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80217ADC: jal         0x80219E08
    // 0x80217AE0: sw          $t9, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r25;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_25;
    // 0x80217AE0: sw          $t9, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r25;
    after_25:
    // 0x80217AE4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
L_80217AE8:
    // 0x80217AE8: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80217AEC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80217AF0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217AF4: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x80217AF8: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80217AFC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80217B00: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80217B04: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80217B08: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217B0C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
L_80217B10:
    // 0x80217B10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217B14: jal         0x802171A8
    // 0x80217B18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_26;
    // 0x80217B18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_26:
    // 0x80217B1C: beq         $v0, $zero, L_80217BB4
    if (ctx->r2 == 0) {
        // 0x80217B20: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217BB4;
    }
    // 0x80217B20: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80217B24: sll         $s2, $s0, 2
    ctx->r18 = S32(ctx->r16 << 2);
    // 0x80217B28: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x80217B2C: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x80217B30: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x80217B34: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x80217B38: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x80217B3C: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
    // 0x80217B40: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80217B44: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
    // 0x80217B48: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x80217B4C: jal         0x802192B4
    // 0x80217B50: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_802192B4_5D4784(rdram, ctx);
        goto after_27;
    // 0x80217B50: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_27:
    // 0x80217B54: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80217B58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80217B5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80217B60: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80217B64: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x80217B68: add.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f16.d + ctx->f22.d;
    // 0x80217B6C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80217B70: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80217B74: jal         0x80219E08
    // 0x80217B78: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_28;
    // 0x80217B78: nop

    after_28:
    // 0x80217B7C: jal         0x802192B4
    // 0x80217B80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802192B4_5D4784(rdram, ctx);
        goto after_29;
    // 0x80217B80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_29:
    // 0x80217B84: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80217B88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80217B8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80217B90: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80217B94: andi        $a3, $s2, 0xFFFF
    ctx->r7 = ctx->r18 & 0XFFFF;
    // 0x80217B98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80217B9C: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x80217BA0: add.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f16.d + ctx->f22.d;
    // 0x80217BA4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80217BA8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80217BAC: jal         0x8021F154
    // 0x80217BB0: nop

    func_8021F154_5DA624(rdram, ctx);
        goto after_30;
    // 0x80217BB0: nop

    after_30:
L_80217BB4:
    // 0x80217BB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217BB8: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x80217BBC: bnel        $at, $zero, L_80217B10
    if (ctx->r1 != 0) {
        // 0x80217BC0: lw          $a1, 0x38($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X38);
            goto L_80217B10;
    }
    goto skip_2;
    // 0x80217BC0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    skip_2:
    // 0x80217BC4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217BC8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80217BCC:
    // 0x80217BCC: jal         0x80218090
    // 0x80217BD0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80218090_5D3560(rdram, ctx);
        goto after_31;
    // 0x80217BD0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_31:
    // 0x80217BD4: beq         $v0, $zero, L_80217BE8
    if (ctx->r2 == 0) {
        // 0x80217BD8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80217BE8;
    }
    // 0x80217BD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217BDC: lw          $t2, 0x64($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X64);
    // 0x80217BE0: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x80217BE4: sw          $t3, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r11;
L_80217BE8:
    // 0x80217BE8: bne         $s0, $s1, L_80217BCC
    if (ctx->r16 != ctx->r17) {
        // 0x80217BEC: nop
    
            goto L_80217BCC;
    }
    // 0x80217BEC: nop

    // 0x80217BF0: b           L_80217EF8
    // 0x80217BF4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
        goto L_80217EF8;
    // 0x80217BF4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_80217BF8:
    // 0x80217BF8: b           L_80217EF8
    // 0x80217BFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217EF8;
    // 0x80217BFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217C00:
    // 0x80217C00: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217C04: addiu       $a1, $a1, 0x1ADC
    ctx->r5 = ADD32(ctx->r5, 0X1ADC);
    // 0x80217C08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217C0C: jal         0x802171A8
    // 0x80217C10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_32;
    // 0x80217C10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_32:
    // 0x80217C14: beq         $v0, $zero, L_80217EF4
    if (ctx->r2 == 0) {
        // 0x80217C18: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217EF4;
    }
    // 0x80217C18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217C1C: lw          $t4, 0x64($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X64);
    // 0x80217C20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80217C24: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80217C28: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x80217C2C: sw          $t5, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r13;
    // 0x80217C30: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80217C34: jal         0x80219E08
    // 0x80217C38: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_33;
    // 0x80217C38: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_33:
    // 0x80217C3C: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80217C40: addiu       $s0, $s0, 0x1D3C
    ctx->r16 = ADD32(ctx->r16, 0X1D3C);
    // 0x80217C44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80217C48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217C4C: jal         0x802171A8
    // 0x80217C50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_34;
    // 0x80217C50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_34:
    // 0x80217C54: beq         $v0, $zero, L_80217CB4
    if (ctx->r2 == 0) {
        // 0x80217C58: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217CB4;
    }
    // 0x80217C58: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80217C5C: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x80217C60: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80217C64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217C68: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80217C6C: jal         0x80219E08
    // 0x80217C70: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_35;
    // 0x80217C70: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    after_35:
    // 0x80217C74: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80217C78: sb          $t8, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r24;
    // 0x80217C7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217C80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80217C84: jal         0x802171A8
    // 0x80217C88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_36;
    // 0x80217C88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_36:
    // 0x80217C8C: beq         $v0, $zero, L_80217CB4
    if (ctx->r2 == 0) {
        // 0x80217C90: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217CB4;
    }
    // 0x80217C90: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80217C94: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x80217C98: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80217C9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217CA0: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x80217CA4: jal         0x80219E08
    // 0x80217CA8: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
    func_80219E08_5D52D8(rdram, ctx);
        goto after_37;
    // 0x80217CA8: sw          $t0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r8;
    after_37:
    // 0x80217CAC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80217CB0: sb          $t1, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r9;
L_80217CB4:
    // 0x80217CB4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80217CB8: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80217CBC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80217CC0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217CC4: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x80217CC8: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80217CCC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80217CD0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80217CD4: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x80217CD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217CDC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
L_80217CE0:
    // 0x80217CE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80217CE4: jal         0x802171A8
    // 0x80217CE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_38;
    // 0x80217CE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_38:
    // 0x80217CEC: beq         $v0, $zero, L_80217EB0
    if (ctx->r2 == 0) {
        // 0x80217CF0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80217EB0;
    }
    // 0x80217CF0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80217CF4: lw          $t3, 0x64($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X64);
    // 0x80217CF8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80217CFC: sh          $t2, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r10;
    // 0x80217D00: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x80217D04: sw          $t4, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r12;
    // 0x80217D08: jal         0x802192B4
    // 0x80217D0C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_802192B4_5D4784(rdram, ctx);
        goto after_39;
    // 0x80217D0C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_39:
    // 0x80217D10: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80217D14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80217D18: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80217D1C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80217D20: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x80217D24: add.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f16.d + ctx->f22.d;
    // 0x80217D28: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80217D2C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80217D30: jal         0x80219E08
    // 0x80217D34: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_40;
    // 0x80217D34: nop

    after_40:
    // 0x80217D38: jal         0x802192B4
    // 0x80217D3C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802192B4_5D4784(rdram, ctx);
        goto after_41;
    // 0x80217D3C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_41:
    // 0x80217D40: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80217D44: jal         0x802192B4
    // 0x80217D48: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    func_802192B4_5D4784(rdram, ctx);
        goto after_42;
    // 0x80217D48: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_42:
    // 0x80217D4C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80217D50: jal         0x802192B4
    // 0x80217D54: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    func_802192B4_5D4784(rdram, ctx);
        goto after_43;
    // 0x80217D54: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    after_43:
    // 0x80217D58: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x80217D5C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80217D60: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x80217D64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80217D68: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80217D6C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80217D70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80217D74: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80217D78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80217D7C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80217D80: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80217D84: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x80217D88: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80217D8C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80217D90: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80217D94: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80217D98: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80217D9C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80217DA0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80217DA4: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80217DA8: nop

    // 0x80217DAC: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80217DB0: beql        $a2, $zero, L_80217E00
    if (ctx->r6 == 0) {
        // 0x80217DB4: mfc1        $a2, $f16
        ctx->r6 = (int32_t)ctx->f16.u32l;
            goto L_80217E00;
    }
    goto skip_3;
    // 0x80217DB4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    skip_3:
    // 0x80217DB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80217DBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80217DC0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80217DC4: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80217DC8: nop

    // 0x80217DCC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80217DD0: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80217DD4: nop

    // 0x80217DD8: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80217DDC: bne         $a2, $zero, L_80217DF4
    if (ctx->r6 != 0) {
        // 0x80217DE0: nop
    
            goto L_80217DF4;
    }
    // 0x80217DE0: nop

    // 0x80217DE4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80217DE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80217DEC: b           L_80217E0C
    // 0x80217DF0: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_80217E0C;
    // 0x80217DF0: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_80217DF4:
    // 0x80217DF4: b           L_80217E0C
    // 0x80217DF8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_80217E0C;
    // 0x80217DF8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80217DFC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
L_80217E00:
    // 0x80217E00: nop

    // 0x80217E04: bltz        $a2, L_80217DF4
    if (SIGNED(ctx->r6) < 0) {
        // 0x80217E08: nop
    
            goto L_80217DF4;
    }
    // 0x80217E08: nop

L_80217E0C:
    // 0x80217E0C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80217E10: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80217E14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80217E18: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80217E1C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80217E20: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80217E24: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80217E28: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80217E2C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80217E30: nop

    // 0x80217E34: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80217E38: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80217E3C: nop

    // 0x80217E40: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80217E44: beql        $a3, $zero, L_80217E94
    if (ctx->r7 == 0) {
        // 0x80217E48: mfc1        $a3, $f6
        ctx->r7 = (int32_t)ctx->f6.u32l;
            goto L_80217E94;
    }
    goto skip_4;
    // 0x80217E48: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    skip_4:
    // 0x80217E4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80217E50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80217E54: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80217E58: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80217E5C: nop

    // 0x80217E60: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80217E64: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80217E68: nop

    // 0x80217E6C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80217E70: bne         $a3, $zero, L_80217E88
    if (ctx->r7 != 0) {
        // 0x80217E74: nop
    
            goto L_80217E88;
    }
    // 0x80217E74: nop

    // 0x80217E78: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80217E7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80217E80: b           L_80217EA0
    // 0x80217E84: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_80217EA0;
    // 0x80217E84: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_80217E88:
    // 0x80217E88: b           L_80217EA0
    // 0x80217E8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80217EA0;
    // 0x80217E8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80217E90: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
L_80217E94:
    // 0x80217E94: nop

    // 0x80217E98: bltz        $a3, L_80217E88
    if (SIGNED(ctx->r7) < 0) {
        // 0x80217E9C: nop
    
            goto L_80217E88;
    }
    // 0x80217E9C: nop

L_80217EA0:
    // 0x80217EA0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80217EA4: andi        $t9, $a3, 0xFFFF
    ctx->r25 = ctx->r7 & 0XFFFF;
    // 0x80217EA8: jal         0x8021F154
    // 0x80217EAC: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    func_8021F154_5DA624(rdram, ctx);
        goto after_44;
    // 0x80217EAC: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    after_44:
L_80217EB0:
    // 0x80217EB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217EB4: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x80217EB8: bnel        $at, $zero, L_80217CE0
    if (ctx->r1 != 0) {
        // 0x80217EBC: lw          $a1, 0x38($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X38);
            goto L_80217CE0;
    }
    goto skip_5;
    // 0x80217EBC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    skip_5:
    // 0x80217EC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217EC4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_80217EC8:
    // 0x80217EC8: jal         0x80218090
    // 0x80217ECC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80218090_5D3560(rdram, ctx);
        goto after_45;
    // 0x80217ECC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_45:
    // 0x80217ED0: beq         $v0, $zero, L_80217EE4
    if (ctx->r2 == 0) {
        // 0x80217ED4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80217EE4;
    }
    // 0x80217ED4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80217ED8: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x80217EDC: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80217EE0: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
L_80217EE4:
    // 0x80217EE4: bne         $s0, $s1, L_80217EC8
    if (ctx->r16 != ctx->r17) {
        // 0x80217EE8: nop
    
            goto L_80217EC8;
    }
    // 0x80217EE8: nop

    // 0x80217EEC: b           L_80217EF8
    // 0x80217EF0: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
        goto L_80217EF8;
    // 0x80217EF0: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_80217EF4:
    // 0x80217EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217EF8:
    // 0x80217EF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80217EFC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80217F00: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80217F04: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80217F08: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80217F0C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80217F10: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80217F14: jr          $ra
    // 0x80217F18: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80217F18: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80210BAC_5CC07C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210BB4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210BB8: jal         0x80013AC4
    // 0x80210BBC: addiu       $a0, $a0, -0x1A20
    ctx->r4 = ADD32(ctx->r4, -0X1A20);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210BBC: addiu       $a0, $a0, -0x1A20
    ctx->r4 = ADD32(ctx->r4, -0X1A20);
    after_0:
    // 0x80210BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210BC8: jr          $ra
    // 0x80210BCC: nop

    TRACE_RETURN()
    return;
    // 0x80210BCC: nop

;}
RECOMP_FUNC void func_8021C518_5D79E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021C51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021C520: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8021C524: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x8021C528: beql        $t7, $zero, L_8021C61C
    if (ctx->r15 == 0) {
        // 0x8021C52C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021C61C;
    }
    goto skip_0;
    // 0x8021C52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021C530: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x8021C534: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x8021C538: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x8021C53C: beq         $t8, $zero, L_8021C550
    if (ctx->r24 == 0) {
        // 0x8021C540: and         $t0, $v0, $at
        ctx->r8 = ctx->r2 & ctx->r1;
            goto L_8021C550;
    }
    // 0x8021C540: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x8021C544: ori         $t9, $v0, 0x40
    ctx->r25 = ctx->r2 | 0X40;
    // 0x8021C548: b           L_8021C554
    // 0x8021C54C: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
        goto L_8021C554;
    // 0x8021C54C: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
L_8021C550:
    // 0x8021C550: sw          $t0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r8;
L_8021C554:
    // 0x8021C554: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    // 0x8021C558: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x8021C55C: lhu         $t7, 0x96($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X96);
    // 0x8021C560: ori         $t2, $t1, 0x20
    ctx->r10 = ctx->r9 | 0X20;
    // 0x8021C564: and         $t4, $t2, $at
    ctx->r12 = ctx->r10 & ctx->r1;
    // 0x8021C568: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x8021C56C: sw          $t2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r10;
    // 0x8021C570: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x8021C574: sw          $t4, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r12;
    // 0x8021C578: sw          $t6, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r14;
    // 0x8021C57C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021C580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021C584: jal         0x8021C744
    // 0x8021C588: sh          $t7, -0x329A($at)
    MEM_H(-0X329A, ctx->r1) = ctx->r15;
    func_8021C744_5D7C14(rdram, ctx);
        goto after_0;
    // 0x8021C588: sh          $t7, -0x329A($at)
    MEM_H(-0X329A, ctx->r1) = ctx->r15;
    after_0:
    // 0x8021C58C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8021C590: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021C594: lhu         $t8, -0x329C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X329C);
    // 0x8021C598: andi        $t9, $v0, 0x21F
    ctx->r25 = ctx->r2 & 0X21F;
    // 0x8021C59C: beq         $v0, $zero, L_8021C618
    if (ctx->r2 == 0) {
        // 0x8021C5A0: sh          $t8, 0x94($a0)
        MEM_H(0X94, ctx->r4) = ctx->r24;
            goto L_8021C618;
    }
    // 0x8021C5A0: sh          $t8, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r24;
    // 0x8021C5A4: beq         $t9, $zero, L_8021C5CC
    if (ctx->r25 == 0) {
        // 0x8021C5A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8021C5CC;
    }
    // 0x8021C5A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021C5AC: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x8021C5B0: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8021C5B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021C5B8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8021C5BC: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    // 0x8021C5C0: ori         $t3, $t1, 0x1000
    ctx->r11 = ctx->r9 | 0X1000;
    // 0x8021C5C4: sw          $t3, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r11;
    // 0x8021C5C8: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
L_8021C5CC:
    // 0x8021C5CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021C5D0: andi        $t4, $v1, 0x1E0
    ctx->r12 = ctx->r3 & 0X1E0;
    // 0x8021C5D4: beq         $t4, $zero, L_8021C5E8
    if (ctx->r12 == 0) {
        // 0x8021C5D8: andi        $t7, $v1, 0x400
        ctx->r15 = ctx->r3 & 0X400;
            goto L_8021C5E8;
    }
    // 0x8021C5D8: andi        $t7, $v1, 0x400
    ctx->r15 = ctx->r3 & 0X400;
    // 0x8021C5DC: lw          $t5, 0x68($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X68);
    // 0x8021C5E0: ori         $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 | 0X2000;
    // 0x8021C5E4: sw          $t6, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r14;
L_8021C5E8:
    // 0x8021C5E8: beq         $t7, $zero, L_8021C618
    if (ctx->r15 == 0) {
        // 0x8021C5EC: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_8021C618;
    }
    // 0x8021C5EC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8021C5F0: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x8021C5F4: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8021C5F8: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x8021C5FC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8021C600: ori         $t1, $t9, 0x1000
    ctx->r9 = ctx->r25 | 0X1000;
    // 0x8021C604: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
    // 0x8021C608: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
    // 0x8021C60C: ori         $t3, $t1, 0x2000
    ctx->r11 = ctx->r9 | 0X2000;
    // 0x8021C610: sw          $t3, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r11;
    // 0x8021C614: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
L_8021C618:
    // 0x8021C618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021C61C:
    // 0x8021C61C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021C620: jr          $ra
    // 0x8021C624: nop

    TRACE_RETURN()
    return;
    // 0x8021C624: nop

;}
RECOMP_FUNC void func_8020FD54_5CB224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FD54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FD58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FD5C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FD60: jal         0x80013AC4
    // 0x8020FD64: addiu       $a0, $a0, -0x277C
    ctx->r4 = ADD32(ctx->r4, -0X277C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FD64: addiu       $a0, $a0, -0x277C
    ctx->r4 = ADD32(ctx->r4, -0X277C);
    after_0:
    // 0x8020FD68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FD6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FD70: jr          $ra
    // 0x8020FD74: nop

    TRACE_RETURN()
    return;
    // 0x8020FD74: nop

;}
RECOMP_FUNC void func_80210774_5CBC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021077C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210780: jal         0x80013AC4
    // 0x80210784: addiu       $a0, $a0, -0x1CEC
    ctx->r4 = ADD32(ctx->r4, -0X1CEC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210784: addiu       $a0, $a0, -0x1CEC
    ctx->r4 = ADD32(ctx->r4, -0X1CEC);
    after_0:
    // 0x80210788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021078C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210790: jr          $ra
    // 0x80210794: nop

    TRACE_RETURN()
    return;
    // 0x80210794: nop

;}
RECOMP_FUNC void func_8020EC2C_5CA0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EC2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EC30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EC34: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EC38: jal         0x80013AC4
    // 0x8020EC3C: addiu       $a0, $a0, -0x34AC
    ctx->r4 = ADD32(ctx->r4, -0X34AC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EC3C: addiu       $a0, $a0, -0x34AC
    ctx->r4 = ADD32(ctx->r4, -0X34AC);
    after_0:
    // 0x8020EC40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EC44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EC48: jr          $ra
    // 0x8020EC4C: nop

    TRACE_RETURN()
    return;
    // 0x8020EC4C: nop

;}
RECOMP_FUNC void func_8020F508_5CA9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F50C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F510: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F514: jal         0x80013AC4
    // 0x8020F518: addiu       $a0, $a0, -0x2E7C
    ctx->r4 = ADD32(ctx->r4, -0X2E7C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F518: addiu       $a0, $a0, -0x2E7C
    ctx->r4 = ADD32(ctx->r4, -0X2E7C);
    after_0:
    // 0x8020F51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F524: jr          $ra
    // 0x8020F528: nop

    TRACE_RETURN()
    return;
    // 0x8020F528: nop

;}
RECOMP_FUNC void func_80212A48_5CDF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212A48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80212A4C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80212A50: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80212A54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80212A58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80212A5C: lw          $s2, 0xBC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XBC);
    // 0x80212A60: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80212A64: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80212A68: bne         $s2, $zero, L_80212A80
    if (ctx->r18 != 0) {
        // 0x80212A6C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80212A80;
    }
    // 0x80212A6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212A70: jal         0x80034ED4
    // 0x80212A74: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80212A74: nop

    after_0:
    // 0x80212A78: b           L_80212C48
    // 0x80212A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80212C48;
    // 0x80212A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80212A80:
    // 0x80212A80: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80212A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80212A88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80212A8C: jal         0x8021A26C
    // 0x80212A90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_1;
    // 0x80212A90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80212A94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80212A98: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80212A9C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80212AA0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80212AA4: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x80212AA8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80212AAC: ori         $t8, $t8, 0x8220
    ctx->r24 = ctx->r24 | 0X8220;
    // 0x80212AB0: sw          $t8, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r24;
    // 0x80212AB4: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x80212AB8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80212ABC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80212AC0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80212AC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212AC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80212ACC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80212AD0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80212AD4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80212AD8: jal         0x80218D7C
    // 0x80212ADC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_80218D7C_5D424C(rdram, ctx);
        goto after_2;
    // 0x80212ADC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_2:
    // 0x80212AE0: lbu         $t0, 0x99($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X99);
    // 0x80212AE4: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80212AE8: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80212AEC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80212AF0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80212AF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80212AF8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80212AFC: bgez        $t0, L_80212B18
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80212B00: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80212B18;
    }
    // 0x80212B00: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80212B04: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80212B08: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80212B0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80212B10: nop

    // 0x80212B14: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80212B18:
    // 0x80212B18: div.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80212B1C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80212B20: mul.d       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x80212B24: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80212B28: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x80212B2C: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x80212B30: lbu         $t1, 0x98($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X98);
    // 0x80212B34: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80212B38: bgez        $t1, L_80212B50
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80212B3C: cvt.d.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.d = CVT_D_W(ctx->f8.u32l);
            goto L_80212B50;
    }
    // 0x80212B3C: cvt.d.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.d = CVT_D_W(ctx->f8.u32l);
    // 0x80212B40: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80212B44: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80212B48: nop

    // 0x80212B4C: add.d       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f6.d + ctx->f18.d;
L_80212B50:
    // 0x80212B50: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80212B54: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80212B58: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80212B5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80212B60: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x80212B64: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80212B68: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80212B6C: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80212B70: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80212B74: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x80212B78: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x80212B7C: lbu         $t2, 0x9A($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X9A);
    // 0x80212B80: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80212B84: bgez        $t2, L_80212B9C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80212B88: cvt.d.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
            goto L_80212B9C;
    }
    // 0x80212B88: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80212B8C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80212B90: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80212B94: nop

    // 0x80212B98: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_80212B9C:
    // 0x80212B9C: div.d       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80212BA0: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80212BA4: addiu       $t4, $zero, 0xFA
    ctx->r12 = ADD32(0, 0XFA);
    // 0x80212BA8: addiu       $t5, $zero, 0x7E
    ctx->r13 = ADD32(0, 0X7E);
    // 0x80212BAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80212BB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80212BB4: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80212BB8: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80212BBC: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x80212BC0: lb          $t3, 0x9B($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X9B);
    // 0x80212BC4: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80212BC8: nop

    // 0x80212BCC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80212BD0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80212BD4: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80212BD8: sh          $t4, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r12;
    // 0x80212BDC: jal         0x80216DF8
    // 0x80212BE0: sh          $t5, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r13;
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_3;
    // 0x80212BE0: sh          $t5, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r13;
    after_3:
    // 0x80212BE4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x80212BE8: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x80212BEC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80212BF0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x80212BF4: addiu       $a0, $zero, 0x2A7
    ctx->r4 = ADD32(0, 0X2A7);
    // 0x80212BF8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80212BFC: jalr        $t9
    // 0x80212C00: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80212C00: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_4:
    // 0x80212C04: lw          $t6, 0x64($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X64);
    // 0x80212C08: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x80212C0C: ori         $t8, $t8, 0x8220
    ctx->r24 = ctx->r24 | 0X8220;
    // 0x80212C10: sll         $t7, $t6, 11
    ctx->r15 = S32(ctx->r14 << 11);
    // 0x80212C14: bgez        $t7, L_80212C30
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80212C18: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_80212C30;
    }
    // 0x80212C18: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80212C1C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212C20: jal         0x8003521C
    // 0x80212C24: addiu       $a0, $a0, 0x2C5C
    ctx->r4 = ADD32(ctx->r4, 0X2C5C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80212C24: addiu       $a0, $a0, 0x2C5C
    ctx->r4 = ADD32(ctx->r4, 0X2C5C);
    after_5:
    // 0x80212C28: b           L_80212C48
    // 0x80212C2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80212C48;
    // 0x80212C2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80212C30:
    // 0x80212C30: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80212C34: sw          $t8, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r24;
    // 0x80212C38: sh          $t0, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r8;
    // 0x80212C3C: jal         0x8003521C
    // 0x80212C40: addiu       $a0, $a0, 0x2EA8
    ctx->r4 = ADD32(ctx->r4, 0X2EA8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x80212C40: addiu       $a0, $a0, 0x2EA8
    ctx->r4 = ADD32(ctx->r4, 0X2EA8);
    after_6:
    // 0x80212C44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80212C48:
    // 0x80212C48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80212C4C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80212C50: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80212C54: jr          $ra
    // 0x80212C58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80212C58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80214FEC_5D04BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214FF0: jr          $ra
    // 0x80214FF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214FF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8020F064_5CA534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F06C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F070: jal         0x80013AC4
    // 0x8020F074: addiu       $a0, $a0, -0x3200
    ctx->r4 = ADD32(ctx->r4, -0X3200);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F074: addiu       $a0, $a0, -0x3200
    ctx->r4 = ADD32(ctx->r4, -0X3200);
    after_0:
    // 0x8020F078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F080: jr          $ra
    // 0x8020F084: nop

    TRACE_RETURN()
    return;
    // 0x8020F084: nop

;}
RECOMP_FUNC void func_802261A4_5E1674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802261A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802261AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802261B0: lw          $v1, 0xC0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC0);
    // 0x802261B4: lh          $t6, 0xC8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC8);
    // 0x802261B8: lh          $t9, 0xCC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XCC);
    // 0x802261BC: lhu         $t2, 0x6($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X6);
    // 0x802261C0: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x802261C4: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    // 0x802261C8: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x802261CC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x802261D0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x802261D4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802261D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802261DC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x802261E0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802261E4: lui         $at, 0x4069
    ctx->r1 = S32(0X4069 << 16);
    // 0x802261E8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802261EC: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802261F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802261F4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802261F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802261FC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80226200: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80226204: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80226208: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8022620C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x80226210: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x80226214: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80226218: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8022621C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80226220: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80226224: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x80226228: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8022622C: jal         0x8021F26C
    // 0x80226230: nop

    func_8021F26C_5DA73C(rdram, ctx);
        goto after_0;
    // 0x80226230: nop

    after_0:
    // 0x80226234: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80226238: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8022623C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80226240: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80226244: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80226248: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8022624C: sub.s       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x80226250: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80226254: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80226258: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8022625C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80226260: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80226264: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80226268: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8022626C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x80226270: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80226274: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x80226278: nop

    // 0x8022627C: bc1fl       L_80226290
    if (!c1cs) {
        // 0x80226280: lhu         $v0, 0x6($v1)
        ctx->r2 = MEM_HU(ctx->r3, 0X6);
            goto L_80226290;
    }
    goto skip_0;
    // 0x80226280: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    skip_0:
    // 0x80226284: b           L_80226338
    // 0x80226288: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80226338;
    // 0x80226288: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022628C: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
L_80226290:
    // 0x80226290: andi        $t4, $v0, 0x8000
    ctx->r12 = ctx->r2 & 0X8000;
    // 0x80226294: beq         $t4, $zero, L_802262A4
    if (ctx->r12 == 0) {
        // 0x80226298: andi        $t5, $v0, 0x4000
        ctx->r13 = ctx->r2 & 0X4000;
            goto L_802262A4;
    }
    // 0x80226298: andi        $t5, $v0, 0x4000
    ctx->r13 = ctx->r2 & 0X4000;
    // 0x8022629C: b           L_80226338
    // 0x802262A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80226338;
    // 0x802262A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802262A4:
    // 0x802262A4: beq         $t5, $zero, L_80226330
    if (ctx->r13 == 0) {
        // 0x802262A8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80226330;
    }
    // 0x802262A8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x802262AC: lhu         $t6, 0xEC($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XEC);
    // 0x802262B0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802262B4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x802262B8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x802262BC: lhu         $a0, -0x6660($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X6660);
    // 0x802262C0: jal         0x800141C4
    // 0x802262C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x802262C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x802262C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802262CC: beq         $v0, $at, L_80226328
    if (ctx->r2 == ctx->r1) {
        // 0x802262D0: nop
    
            goto L_80226328;
    }
    // 0x802262D0: nop

    // 0x802262D4: lhu         $t8, 0xEC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XEC);
    // 0x802262D8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802262DC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802262E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802262E4: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x802262E8: jal         0x80225E20
    // 0x802262EC: lw          $a0, -0x69D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X69D0);
    func_80225E20_5E12F0(rdram, ctx);
        goto after_2;
    // 0x802262EC: lw          $a0, -0x69D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X69D0);
    after_2:
    // 0x802262F0: lhu         $t0, 0xEC($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XEC);
    // 0x802262F4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802262F8: sw          $v0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r2;
    // 0x802262FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80226300: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80226304: lw          $a0, -0x6818($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6818);
    // 0x80226308: jal         0x80225E20
    // 0x8022630C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80225E20_5E12F0(rdram, ctx);
        goto after_3;
    // 0x8022630C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x80226310: lw          $v1, 0xC0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC0);
    // 0x80226314: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    // 0x80226318: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022631C: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    // 0x80226320: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x80226324: sh          $t2, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r10;
L_80226328:
    // 0x80226328: b           L_80226338
    // 0x8022632C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226338;
    // 0x8022632C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226330:
    // 0x80226330: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    // 0x80226334: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226338:
    // 0x80226338: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022633C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80226340: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80226344: jr          $ra
    // 0x80226348: nop

    TRACE_RETURN()
    return;
    // 0x80226348: nop

;}
RECOMP_FUNC void func_8020E590_5C9A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E598: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E59C: jal         0x80013AC4
    // 0x8020E5A0: addiu       $a0, $a0, -0x394C
    ctx->r4 = ADD32(ctx->r4, -0X394C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E5A0: addiu       $a0, $a0, -0x394C
    ctx->r4 = ADD32(ctx->r4, -0X394C);
    after_0:
    // 0x8020E5A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E5A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E5AC: jr          $ra
    // 0x8020E5B0: nop

    TRACE_RETURN()
    return;
    // 0x8020E5B0: nop

;}
RECOMP_FUNC void func_8020F988_5CAE58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F98C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F990: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F994: jal         0x80013AC4
    // 0x8020F998: addiu       $a0, $a0, -0x2ABC
    ctx->r4 = ADD32(ctx->r4, -0X2ABC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F998: addiu       $a0, $a0, -0x2ABC
    ctx->r4 = ADD32(ctx->r4, -0X2ABC);
    after_0:
    // 0x8020F99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F9A4: jr          $ra
    // 0x8020F9A8: nop

    TRACE_RETURN()
    return;
    // 0x8020F9A8: nop

;}
RECOMP_FUNC void func_8020FDC0_5CB290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FDC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FDC8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FDCC: jal         0x80013AC4
    // 0x8020FDD0: addiu       $a0, $a0, -0x2704
    ctx->r4 = ADD32(ctx->r4, -0X2704);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FDD0: addiu       $a0, $a0, -0x2704
    ctx->r4 = ADD32(ctx->r4, -0X2704);
    after_0:
    // 0x8020FDD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FDD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FDDC: jr          $ra
    // 0x8020FDE0: nop

    TRACE_RETURN()
    return;
    // 0x8020FDE0: nop

;}
RECOMP_FUNC void func_8020D670_5C8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D670: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8020D674: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8020D678: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D67C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D680: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8020D684: lhu         $t6, 0x2DF2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2DF2);
    // 0x8020D688: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8020D68C: lw          $t9, 0x303C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X303C);
    // 0x8020D690: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8020D694: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8020D698: lw          $v0, 0x1300($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1300);
    // 0x8020D69C: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x8020D6A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020D6A4: beq         $t8, $t9, L_8020D6B4
    if (ctx->r24 == ctx->r25) {
        // 0x8020D6A8: nop
    
            goto L_8020D6B4;
    }
    // 0x8020D6A8: nop

    // 0x8020D6AC: jr          $ra
    // 0x8020D6B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8020D6B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8020D6B4:
    // 0x8020D6B4: jr          $ra
    // 0x8020D6B8: nop

    TRACE_RETURN()
    return;
    // 0x8020D6B8: nop

;}
RECOMP_FUNC void func_8020DFF0_5C94C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DFF8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DFFC: jal         0x80013AC4
    // 0x8020E000: addiu       $a0, $a0, -0x3C50
    ctx->r4 = ADD32(ctx->r4, -0X3C50);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E000: addiu       $a0, $a0, -0x3C50
    ctx->r4 = ADD32(ctx->r4, -0X3C50);
    after_0:
    // 0x8020E004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E00C: jr          $ra
    // 0x8020E010: nop

    TRACE_RETURN()
    return;
    // 0x8020E010: nop

;}
RECOMP_FUNC void func_8020FBEC_5CB0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FBEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FBF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FBF4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FBF8: jal         0x80013AC4
    // 0x8020FBFC: addiu       $a0, $a0, -0x2904
    ctx->r4 = ADD32(ctx->r4, -0X2904);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FBFC: addiu       $a0, $a0, -0x2904
    ctx->r4 = ADD32(ctx->r4, -0X2904);
    after_0:
    // 0x8020FC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FC08: jr          $ra
    // 0x8020FC0C: nop

    TRACE_RETURN()
    return;
    // 0x8020FC0C: nop

;}
RECOMP_FUNC void func_8022218C_5DD65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022218C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222194: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80222198: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8022219C: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    // 0x802221A0: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x802221A4: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x802221A8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x802221AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802221B0: jal         0x80218DA8
    // 0x802221B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80218DA8_5D4278(rdram, ctx);
        goto after_0;
    // 0x802221B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802221B8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802221BC: jal         0x8003521C
    // 0x802221C0: addiu       $a0, $a0, 0x21D4
    ctx->r4 = ADD32(ctx->r4, 0X21D4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802221C0: addiu       $a0, $a0, 0x21D4
    ctx->r4 = ADD32(ctx->r4, 0X21D4);
    after_1:
    // 0x802221C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802221C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802221CC: jr          $ra
    // 0x802221D0: nop

    TRACE_RETURN()
    return;
    // 0x802221D0: nop

;}
RECOMP_FUNC void func_8020E4DC_5C99AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E4DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E4E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E4E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E4E8: jal         0x80013AC4
    // 0x8020E4EC: addiu       $a0, $a0, -0x39E8
    ctx->r4 = ADD32(ctx->r4, -0X39E8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E4EC: addiu       $a0, $a0, -0x39E8
    ctx->r4 = ADD32(ctx->r4, -0X39E8);
    after_0:
    // 0x8020E4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E4F8: jr          $ra
    // 0x8020E4FC: nop

    TRACE_RETURN()
    return;
    // 0x8020E4FC: nop

;}
RECOMP_FUNC void func_8021B09C_5D656C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B09C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021B0A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B0A4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8021B0A8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021B0AC: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021B0B0: lw          $a3, 0x9C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X9C);
    // 0x8021B0B4: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021B0B8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B0BC: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x8021B0C0: nop

    // 0x8021B0C4: bc1fl       L_8021B100
    if (!c1cs) {
        // 0x8021B0C8: lbu         $a2, 0xA9($a0)
        ctx->r6 = MEM_BU(ctx->r4, 0XA9);
            goto L_8021B100;
    }
    goto skip_0;
    // 0x8021B0C8: lbu         $a2, 0xA9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XA9);
    skip_0:
    // 0x8021B0CC: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021B0D0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B0D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021B0D8: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8021B0DC: nop

    // 0x8021B0E0: bc1fl       L_8021B100
    if (!c1cs) {
        // 0x8021B0E4: lbu         $a2, 0xA9($a0)
        ctx->r6 = MEM_BU(ctx->r4, 0XA9);
            goto L_8021B100;
    }
    goto skip_1;
    // 0x8021B0E4: lbu         $a2, 0xA9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XA9);
    skip_1:
    // 0x8021B0E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021B0EC: nop

    // 0x8021B0F0: add.s       $f18, $f14, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x8021B0F4: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x8021B0F8: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021B0FC: lbu         $a2, 0xA9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XA9);
L_8021B100:
    // 0x8021B100: bne         $a1, $zero, L_8021B134
    if (ctx->r5 != 0) {
        // 0x8021B104: lwc1        $f16, 0x10($v1)
        ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
            goto L_8021B134;
    }
    // 0x8021B104: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021B108: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021B10C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B110: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B114: sub.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8021B118: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8021B11C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021B120: nop

    // 0x8021B124: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021B128: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021B12C: b           L_8021B178
    // 0x8021B130: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
        goto L_8021B178;
    // 0x8021B130: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_8021B134:
    // 0x8021B134: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021B138: bnel        $a1, $at, L_8021B17C
    if (ctx->r5 != ctx->r1) {
        // 0x8021B13C: lh          $t6, 0xA2($a0)
        ctx->r14 = MEM_H(ctx->r4, 0XA2);
            goto L_8021B17C;
    }
    goto skip_2;
    // 0x8021B13C: lh          $t6, 0xA2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA2);
    skip_2:
    // 0x8021B140: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021B144: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021B148: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021B14C: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021B150: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B154: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8021B158: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021B15C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021B160: sub.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8021B164: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8021B168: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8021B16C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021B170: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021B174: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8021B178:
    // 0x8021B178: lh          $t6, 0xA2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA2);
L_8021B17C:
    // 0x8021B17C: lh          $t7, 0xA0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA0);
    // 0x8021B180: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x8021B184: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8021B188: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8021B18C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8021B190: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021B194: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8021B198: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021B19C: sub.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8021B1A0: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8021B1A4: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021B1A8: nop

    // 0x8021B1AC: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021B1B0: bgez        $t9, L_8021B25C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8021B1B4: add.s       $f12, $f10, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
            goto L_8021B25C;
    }
    // 0x8021B1B4: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8021B1B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x8021B1BC: addiu       $t9, $t9, -0x535C
    ctx->r25 = ADD32(ctx->r25, -0X535C);
    // 0x8021B1C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8021B1C4: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    // 0x8021B1C8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8021B1CC: jalr        $t9
    // 0x8021B1D0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021B1D0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8021B1D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021B1D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8021B1DC: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x8021B1E0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8021B1E4: bne         $v0, $at, L_8021B25C
    if (ctx->r2 != ctx->r1) {
        // 0x8021B1E8: lwc1        $f12, 0x20($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
            goto L_8021B25C;
    }
    // 0x8021B1E8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021B1EC: lhu         $t0, 0x1C($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X1C);
    // 0x8021B1F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021B1F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B1F8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8021B1FC: bgez        $t0, L_8021B210
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8021B200: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021B210;
    }
    // 0x8021B200: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021B204: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021B208: nop

    // 0x8021B20C: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_8021B210:
    // 0x8021B210: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8021B214: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021B218: bc1fl       L_8021B234
    if (!c1cs) {
        // 0x8021B21C: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_8021B234;
    }
    goto skip_3;
    // 0x8021B21C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_3:
    // 0x8021B220: jal         0x8003521C
    // 0x8021B224: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x8021B224: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    after_1:
    // 0x8021B228: b           L_8021B414
    // 0x8021B22C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8021B414;
    // 0x8021B22C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8021B230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_8021B234:
    // 0x8021B234: nop

    // 0x8021B238: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x8021B23C: nop

    // 0x8021B240: bc1fl       L_8021B260
    if (!c1cs) {
        // 0x8021B244: lhu         $t1, 0x14($a3)
        ctx->r9 = MEM_HU(ctx->r7, 0X14);
            goto L_8021B260;
    }
    goto skip_4;
    // 0x8021B244: lhu         $t1, 0x14($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X14);
    skip_4:
    // 0x8021B248: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8021B24C: jal         0x8003521C
    // 0x8021B250: addiu       $a0, $a0, -0x19F4
    ctx->r4 = ADD32(ctx->r4, -0X19F4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x8021B250: addiu       $a0, $a0, -0x19F4
    ctx->r4 = ADD32(ctx->r4, -0X19F4);
    after_2:
    // 0x8021B254: b           L_8021B414
    // 0x8021B258: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8021B414;
    // 0x8021B258: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8021B25C:
    // 0x8021B25C: lhu         $t1, 0x14($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X14);
L_8021B260:
    // 0x8021B260: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B264: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8021B268: bgez        $t1, L_8021B27C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8021B26C: cvt.s.w     $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8021B27C;
    }
    // 0x8021B26C: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021B270: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021B274: nop

    // 0x8021B278: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8021B27C:
    // 0x8021B27C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021B280: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8021B284: nop

    // 0x8021B288: bc1fl       L_8021B308
    if (!c1cs) {
        // 0x8021B28C: lhu         $t3, 0x4($a3)
        ctx->r11 = MEM_HU(ctx->r7, 0X4);
            goto L_8021B308;
    }
    goto skip_5;
    // 0x8021B28C: lhu         $t3, 0x4($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X4);
    skip_5:
    // 0x8021B290: lhu         $t2, 0x1C($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X1C);
    // 0x8021B294: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021B298: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B29C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8021B2A0: bgez        $t2, L_8021B2B4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021B2A4: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8021B2B4;
    }
    // 0x8021B2A4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021B2A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021B2AC: nop

    // 0x8021B2B0: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_8021B2B4:
    // 0x8021B2B4: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x8021B2B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021B2BC: bc1fl       L_8021B2D8
    if (!c1cs) {
        // 0x8021B2C0: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_8021B2D8;
    }
    goto skip_6;
    // 0x8021B2C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_6:
    // 0x8021B2C4: jal         0x8003521C
    // 0x8021B2C8: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x8021B2C8: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    after_3:
    // 0x8021B2CC: b           L_8021B414
    // 0x8021B2D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8021B414;
    // 0x8021B2D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8021B2D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_8021B2D8:
    // 0x8021B2D8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8021B2DC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x8021B2E0: nop

    // 0x8021B2E4: bc1f        L_8021B2FC
    if (!c1cs) {
        // 0x8021B2E8: nop
    
            goto L_8021B2FC;
    }
    // 0x8021B2E8: nop

    // 0x8021B2EC: jal         0x8003521C
    // 0x8021B2F0: addiu       $a0, $a0, -0x19F4
    ctx->r4 = ADD32(ctx->r4, -0X19F4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x8021B2F0: addiu       $a0, $a0, -0x19F4
    ctx->r4 = ADD32(ctx->r4, -0X19F4);
    after_4:
    // 0x8021B2F4: b           L_8021B414
    // 0x8021B2F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8021B414;
    // 0x8021B2F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8021B2FC:
    // 0x8021B2FC: b           L_8021B414
    // 0x8021B300: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8021B414;
    // 0x8021B300: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8021B304: lhu         $t3, 0x4($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X4);
L_8021B308:
    // 0x8021B308: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B30C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8021B310: bgez        $t3, L_8021B324
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8021B314: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8021B324;
    }
    // 0x8021B314: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021B318: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B31C: nop

    // 0x8021B320: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8021B324:
    // 0x8021B324: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021B328: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021B32C: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8021B330: nop

    // 0x8021B334: bc1fl       L_8021B374
    if (!c1cs) {
        // 0x8021B338: lhu         $t6, 0xC($a3)
        ctx->r14 = MEM_HU(ctx->r7, 0XC);
            goto L_8021B374;
    }
    goto skip_7;
    // 0x8021B338: lhu         $t6, 0xC($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0XC);
    skip_7:
    // 0x8021B33C: sb          $zero, 0xA9($a0)
    MEM_B(0XA9, ctx->r4) = 0;
    // 0x8021B340: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8021B344: andi        $t5, $zero, 0xFF
    ctx->r13 = 0 & 0XFF;
    // 0x8021B348: bne         $t4, $zero, L_8021B360
    if (ctx->r12 != 0) {
        // 0x8021B34C: nop
    
            goto L_8021B360;
    }
    // 0x8021B34C: nop

    // 0x8021B350: bne         $a2, $t5, L_8021B360
    if (ctx->r6 != ctx->r13) {
        // 0x8021B354: nop
    
            goto L_8021B360;
    }
    // 0x8021B354: nop

    // 0x8021B358: b           L_8021B414
    // 0x8021B35C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021B414;
    // 0x8021B35C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021B360:
    // 0x8021B360: jal         0x8003521C
    // 0x8021B364: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x8021B364: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    after_5:
    // 0x8021B368: b           L_8021B414
    // 0x8021B36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021B414;
    // 0x8021B36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021B370: lhu         $t6, 0xC($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0XC);
L_8021B374:
    // 0x8021B374: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B378: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021B37C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021B380: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8021B384: bgez        $t6, L_8021B398
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021B388: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021B398;
    }
    // 0x8021B388: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021B38C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021B390: nop

    // 0x8021B394: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_8021B398:
    // 0x8021B398: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021B39C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021B3A0: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8021B3A4: nop

    // 0x8021B3A8: bc1fl       L_8021B3E8
    if (!c1cs) {
        // 0x8021B3AC: sb          $t0, 0xA9($a0)
        MEM_B(0XA9, ctx->r4) = ctx->r8;
            goto L_8021B3E8;
    }
    goto skip_8;
    // 0x8021B3AC: sb          $t0, 0xA9($a0)
    MEM_B(0XA9, ctx->r4) = ctx->r8;
    skip_8:
    // 0x8021B3B0: sb          $t7, 0xA9($a0)
    MEM_B(0XA9, ctx->r4) = ctx->r15;
    // 0x8021B3B4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8021B3B8: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8021B3BC: bne         $t8, $zero, L_8021B3D4
    if (ctx->r24 != 0) {
        // 0x8021B3C0: nop
    
            goto L_8021B3D4;
    }
    // 0x8021B3C0: nop

    // 0x8021B3C4: bne         $a2, $t9, L_8021B3D4
    if (ctx->r6 != ctx->r25) {
        // 0x8021B3C8: nop
    
            goto L_8021B3D4;
    }
    // 0x8021B3C8: nop

    // 0x8021B3CC: b           L_8021B414
    // 0x8021B3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021B414;
    // 0x8021B3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021B3D4:
    // 0x8021B3D4: jal         0x8003521C
    // 0x8021B3D8: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x8021B3D8: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    after_6:
    // 0x8021B3DC: b           L_8021B414
    // 0x8021B3E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021B414;
    // 0x8021B3E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021B3E4: sb          $t0, 0xA9($a0)
    MEM_B(0XA9, ctx->r4) = ctx->r8;
L_8021B3E8:
    // 0x8021B3E8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8021B3EC: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x8021B3F0: bne         $t1, $zero, L_8021B408
    if (ctx->r9 != 0) {
        // 0x8021B3F4: nop
    
            goto L_8021B408;
    }
    // 0x8021B3F4: nop

    // 0x8021B3F8: bne         $a2, $t2, L_8021B408
    if (ctx->r6 != ctx->r10) {
        // 0x8021B3FC: nop
    
            goto L_8021B408;
    }
    // 0x8021B3FC: nop

    // 0x8021B400: b           L_8021B414
    // 0x8021B404: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021B414;
    // 0x8021B404: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021B408:
    // 0x8021B408: jal         0x8003521C
    // 0x8021B40C: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x8021B40C: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    after_7:
    // 0x8021B410: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021B414:
    // 0x8021B414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021B41C: jr          $ra
    // 0x8021B420: nop

    TRACE_RETURN()
    return;
    // 0x8021B420: nop

;}
RECOMP_FUNC void func_80210288_5CB758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021028C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210290: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210294: jal         0x80013AC4
    // 0x80210298: addiu       $a0, $a0, -0x21A0
    ctx->r4 = ADD32(ctx->r4, -0X21A0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210298: addiu       $a0, $a0, -0x21A0
    ctx->r4 = ADD32(ctx->r4, -0X21A0);
    after_0:
    // 0x8021029C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802102A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802102A4: jr          $ra
    // 0x802102A8: nop

    TRACE_RETURN()
    return;
    // 0x802102A8: nop

;}
RECOMP_FUNC void func_80210360_5CB830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210368: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021036C: jal         0x80013AC4
    // 0x80210370: addiu       $a0, $a0, -0x20D0
    ctx->r4 = ADD32(ctx->r4, -0X20D0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210370: addiu       $a0, $a0, -0x20D0
    ctx->r4 = ADD32(ctx->r4, -0X20D0);
    after_0:
    // 0x80210374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021037C: jr          $ra
    // 0x80210380: nop

    TRACE_RETURN()
    return;
    // 0x80210380: nop

;}
RECOMP_FUNC void func_8020EB30_5CA000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EB34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EB38: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EB3C: jal         0x80013AC4
    // 0x8020EB40: addiu       $a0, $a0, -0x35A4
    ctx->r4 = ADD32(ctx->r4, -0X35A4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EB40: addiu       $a0, $a0, -0x35A4
    ctx->r4 = ADD32(ctx->r4, -0X35A4);
    after_0:
    // 0x8020EB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EB48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EB4C: jr          $ra
    // 0x8020EB50: nop

    TRACE_RETURN()
    return;
    // 0x8020EB50: nop

;}
RECOMP_FUNC void func_8020F25C_5CA72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F264: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F268: jal         0x80013AC4
    // 0x8020F26C: addiu       $a0, $a0, -0x3040
    ctx->r4 = ADD32(ctx->r4, -0X3040);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F26C: addiu       $a0, $a0, -0x3040
    ctx->r4 = ADD32(ctx->r4, -0X3040);
    after_0:
    // 0x8020F270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F278: jr          $ra
    // 0x8020F27C: nop

    TRACE_RETURN()
    return;
    // 0x8020F27C: nop

;}
RECOMP_FUNC void func_8020E7F4_5C9CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E7F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E7FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E800: jal         0x80013AC4
    // 0x8020E804: addiu       $a0, $a0, -0x3758
    ctx->r4 = ADD32(ctx->r4, -0X3758);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E804: addiu       $a0, $a0, -0x3758
    ctx->r4 = ADD32(ctx->r4, -0X3758);
    after_0:
    // 0x8020E808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E80C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E810: jr          $ra
    // 0x8020E814: nop

    TRACE_RETURN()
    return;
    // 0x8020E814: nop

;}
RECOMP_FUNC void func_80210F30_5CC400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210F38: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210F3C: jal         0x80013AC4
    // 0x80210F40: addiu       $a0, $a0, -0x17EC
    ctx->r4 = ADD32(ctx->r4, -0X17EC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210F40: addiu       $a0, $a0, -0x17EC
    ctx->r4 = ADD32(ctx->r4, -0X17EC);
    after_0:
    // 0x80210F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210F4C: jr          $ra
    // 0x80210F50: nop

    TRACE_RETURN()
    return;
    // 0x80210F50: nop

;}
RECOMP_FUNC void func_80210F0C_5CC3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210F10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210F14: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210F18: jal         0x80013AC4
    // 0x80210F1C: addiu       $a0, $a0, -0x1804
    ctx->r4 = ADD32(ctx->r4, -0X1804);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210F1C: addiu       $a0, $a0, -0x1804
    ctx->r4 = ADD32(ctx->r4, -0X1804);
    after_0:
    // 0x80210F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210F28: jr          $ra
    // 0x80210F2C: nop

    TRACE_RETURN()
    return;
    // 0x80210F2C: nop

;}
