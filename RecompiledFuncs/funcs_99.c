#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801CB8E0_69D050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB8E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801CB8E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CB8E8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB8EC: addiu       $a1, $a1, -0x47E4
    ctx->r5 = ADD32(ctx->r5, -0X47E4);
    // 0x801CB8F0: jal         0x80034E08
    // 0x801CB8F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801CB8F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801CB8F8: bne         $v0, $zero, L_801CB908
    if (ctx->r2 != 0) {
        // 0x801CB8FC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801CB908;
    }
    // 0x801CB8FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB900: b           L_801CB9B0
    // 0x801CB904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CB9B0;
    // 0x801CB904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CB908:
    // 0x801CB908: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB90C: lwc1        $f2, -0x42A8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X42A8);
    // 0x801CB910: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CB914: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801CB918: addiu       $a1, $a1, 0xA28
    ctx->r5 = ADD32(ctx->r5, 0XA28);
    // 0x801CB91C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801CB920: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CB924: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x801CB928: addiu       $t6, $zero, 0x50B
    ctx->r14 = ADD32(0, 0X50B);
    // 0x801CB92C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CB930: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801CB934: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x801CB938: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801CB93C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CB940: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB944: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CB948: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CB94C: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x801CB950: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CB954: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CB958: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CB95C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CB960: jal         0x8000DBF0
    // 0x801CB964: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801CB964: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801CB968: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x801CB96C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB970: lwc1        $f2, -0x42A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X42A4);
    // 0x801CB974: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801CB978: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CB97C: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x801CB980: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x801CB984: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CB988: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x801CB98C: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x801CB990: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x801CB994: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x801CB998: swc1        $f4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f4.u32l;
    // 0x801CB99C: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x801CB9A0: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x801CB9A4: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x801CB9A8: sw          $a1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r5;
    // 0x801CB9AC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_801CB9B0:
    // 0x801CB9B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801CB9B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801CB9B8: jr          $ra
    // 0x801CB9BC: nop

    TRACE_RETURN()
    return;
    // 0x801CB9BC: nop

    // 0x801CB9C0: jr          $ra
    // 0x801CB9C4: nop

    TRACE_RETURN()
    return;
    // 0x801CB9C4: nop

    // 0x801CB9C8: jr          $ra
    // 0x801CB9CC: nop

    TRACE_RETURN()
    return;
    // 0x801CB9CC: nop

;}
RECOMP_FUNC void func_801CB460_69CBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB468: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801CB46C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801CB470: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB474: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x801CB478: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801CB47C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x801CB480: beq         $at, $zero, L_801CB69C
    if (ctx->r1 == 0) {
        // 0x801CB484: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801CB69C;
    }
    // 0x801CB484: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CB488: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB48C: addu        $at, $at, $t6
    gpr jr_addend_801CB494 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CB490: lw          $t6, -0x42D4($at)
    ctx->r14 = ADD32(ctx->r1, -0X42D4);
    // 0x801CB494: jr          $t6
    // 0x801CB498: nop

    switch (jr_addend_801CB494 >> 2) {
        case 0: goto L_801CB49C; break;
        case 1: goto L_801CB538; break;
        case 2: goto L_801CB5C4; break;
        case 3: goto L_801CB61C; break;
        case 4: goto L_801CB66C; break;
        case 5: goto L_801CB698; break;
        default: switch_error(__func__, 0x801CB494, 0x801CBD2C);
    }
    // 0x801CB498: nop

L_801CB49C:
    // 0x801CB49C: jal         0x801CB8E0
    // 0x801CB4A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CB8E0_69D050(rdram, ctx);
        goto after_0;
    // 0x801CB4A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x801CB4A4: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801CB4A8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x801CB4AC: jal         0x80038B98
    // 0x801CB4B0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801CB4B0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_1:
    // 0x801CB4B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CB4B8: lui         $a3, 0x4314
    ctx->r7 = S32(0X4314 << 16);
    // 0x801CB4BC: ori         $a3, $a3, 0x4CCD
    ctx->r7 = ctx->r7 | 0X4CCD;
    // 0x801CB4C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801CB4C4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801CB4C8: jal         0x800127B8
    // 0x801CB4CC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    func_800127B8_133B8(rdram, ctx);
        goto after_2;
    // 0x801CB4CC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_2:
    // 0x801CB4D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CB4D4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801CB4D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801CB4DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801CB4E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CB4E4: jal         0x80012818
    // 0x801CB4E8: nop

    func_80012818_13418(rdram, ctx);
        goto after_3;
    // 0x801CB4E8: nop

    after_3:
    // 0x801CB4EC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801CB4F0: jal         0x800124A0
    // 0x801CB4F4: lui         $a1, 0x42C0
    ctx->r5 = S32(0X42C0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_4;
    // 0x801CB4F4: lui         $a1, 0x42C0
    ctx->r5 = S32(0X42C0 << 16);
    after_4:
    // 0x801CB4F8: lui         $a3, 0x41BE
    ctx->r7 = S32(0X41BE << 16);
    // 0x801CB4FC: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x801CB500: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801CB504: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    // 0x801CB508: jal         0x80012518
    // 0x801CB50C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80012518_13118(rdram, ctx);
        goto after_5;
    // 0x801CB50C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_5:
    // 0x801CB510: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801CB514: lui         $a1, 0x41B0
    ctx->r5 = S32(0X41B0 << 16);
    // 0x801CB518: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801CB51C: jal         0x80012628
    // 0x801CB520: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80012628_13228(rdram, ctx);
        goto after_6;
    // 0x801CB520: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_6:
    // 0x801CB524: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x801CB528: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x801CB52C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801CB530: b           L_801CB69C
    // 0x801CB534: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
        goto L_801CB69C;
    // 0x801CB534: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
L_801CB538:
    // 0x801CB538: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801CB53C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801CB540: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB544: ldc1        $f8, -0x42B8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X42B8);
    // 0x801CB548: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801CB54C: nop

    // 0x801CB550: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CB554: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801CB558: nop

    // 0x801CB55C: bc1tl       L_801CB6A0
    if (c1cs) {
        // 0x801CB560: addiu       $s0, $s1, 0x5C
        ctx->r16 = ADD32(ctx->r17, 0X5C);
            goto L_801CB6A0;
    }
    goto skip_0;
    // 0x801CB560: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    skip_0:
    // 0x801CB564: jal         0x801CB9D0
    // 0x801CB568: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_801CB9D0_69D140(rdram, ctx);
        goto after_7;
    // 0x801CB568: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_7:
    // 0x801CB56C: bnel        $v0, $zero, L_801CB6A0
    if (ctx->r2 != 0) {
        // 0x801CB570: addiu       $s0, $s1, 0x5C
        ctx->r16 = ADD32(ctx->r17, 0X5C);
            goto L_801CB6A0;
    }
    goto skip_1;
    // 0x801CB570: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    skip_1:
    // 0x801CB574: jal         0x801CBA30
    // 0x801CB578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CBA30_69D1A0(rdram, ctx);
        goto after_8;
    // 0x801CB578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x801CB57C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801CB580: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x801CB584: addiu       $a1, $a1, 0x3CD0
    ctx->r5 = ADD32(ctx->r5, 0X3CD0);
    // 0x801CB588: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB58C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x801CB590: jal         0x801CBB84
    // 0x801CB594: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    func_801CBB84_69D2F4(rdram, ctx);
        goto after_9;
    // 0x801CB594: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_9:
    // 0x801CB598: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x801CB59C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CB5A0: jal         0x801CBC10
    // 0x801CB5A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_801CBC10_69D380(rdram, ctx);
        goto after_10;
    // 0x801CB5A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_10:
    // 0x801CB5A8: jal         0x80038B98
    // 0x801CB5AC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    func_80038B98_39798(rdram, ctx);
        goto after_11;
    // 0x801CB5AC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_11:
    // 0x801CB5B0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x801CB5B4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x801CB5B8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801CB5BC: b           L_801CB69C
    // 0x801CB5C0: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
        goto L_801CB69C;
    // 0x801CB5C0: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
L_801CB5C4:
    // 0x801CB5C4: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801CB5C8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x801CB5CC: slti        $at, $t2, 0x1E
    ctx->r1 = SIGNED(ctx->r10) < 0X1E ? 1 : 0;
    // 0x801CB5D0: bnel        $at, $zero, L_801CB6A0
    if (ctx->r1 != 0) {
        // 0x801CB5D4: addiu       $s0, $s1, 0x5C
        ctx->r16 = ADD32(ctx->r17, 0X5C);
            goto L_801CB6A0;
    }
    goto skip_2;
    // 0x801CB5D4: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    skip_2:
    // 0x801CB5D8: jal         0x801CBA30
    // 0x801CB5DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801CBA30_69D1A0(rdram, ctx);
        goto after_12;
    // 0x801CB5DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x801CB5E0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CB5E4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x801CB5E8: addiu       $a1, $a1, 0x68D0
    ctx->r5 = ADD32(ctx->r5, 0X68D0);
    // 0x801CB5EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB5F0: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x801CB5F4: jal         0x801CBB84
    // 0x801CB5F8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CBB84_69D2F4(rdram, ctx);
        goto after_13;
    // 0x801CB5F8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_13:
    // 0x801CB5FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x801CB600: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x801CB604: jal         0x801CBC80
    // 0x801CB608: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    func_801CBC80_69D3F0(rdram, ctx);
        goto after_14;
    // 0x801CB608: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    after_14:
    // 0x801CB60C: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x801CB610: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801CB614: b           L_801CB69C
    // 0x801CB618: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
        goto L_801CB69C;
    // 0x801CB618: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
L_801CB61C:
    // 0x801CB61C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801CB620: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x801CB624: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CB628: addiu       $a2, $t5, 0x4
    ctx->r6 = ADD32(ctx->r13, 0X4);
    // 0x801CB62C: slti        $at, $a2, 0x100
    ctx->r1 = SIGNED(ctx->r6) < 0X100 ? 1 : 0;
    // 0x801CB630: bne         $at, $zero, L_801CB65C
    if (ctx->r1 != 0) {
        // 0x801CB634: sw          $a2, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r6;
            goto L_801CB65C;
    }
    // 0x801CB634: sw          $a2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r6;
    // 0x801CB638: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x801CB63C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801CB640: jal         0x801CBC10
    // 0x801CB644: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_801CBC10_69D380(rdram, ctx);
        goto after_15;
    // 0x801CB644: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_15:
    // 0x801CB648: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x801CB64C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x801CB650: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801CB654: b           L_801CB69C
    // 0x801CB658: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
        goto L_801CB69C;
    // 0x801CB658: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
L_801CB65C:
    // 0x801CB65C: jal         0x801CBC10
    // 0x801CB660: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    func_801CBC10_69D380(rdram, ctx);
        goto after_16;
    // 0x801CB660: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    after_16:
    // 0x801CB664: b           L_801CB6A0
    // 0x801CB668: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
        goto L_801CB6A0;
    // 0x801CB668: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
L_801CB66C:
    // 0x801CB66C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
    // 0x801CB670: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801CB674: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801CB678: slti        $at, $t9, 0x69
    ctx->r1 = SIGNED(ctx->r25) < 0X69 ? 1 : 0;
    // 0x801CB67C: bne         $at, $zero, L_801CB69C
    if (ctx->r1 != 0) {
        // 0x801CB680: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_801CB69C;
    }
    // 0x801CB680: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801CB684: sb          $t0, 0x7A95($at)
    MEM_B(0X7A95, ctx->r1) = ctx->r8;
    // 0x801CB688: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x801CB68C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801CB690: b           L_801CB69C
    // 0x801CB694: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
        goto L_801CB69C;
    // 0x801CB694: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
L_801CB698:
    // 0x801CB698: sw          $zero, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = 0;
L_801CB69C:
    // 0x801CB69C: addiu       $s0, $s1, 0x5C
    ctx->r16 = ADD32(ctx->r17, 0X5C);
L_801CB6A0:
    // 0x801CB6A0: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x801CB6A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801CB6A8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x801CB6AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB6B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801CB6B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801CB6B8: jr          $ra
    // 0x801CB6BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801CB6BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CBCA4_69D414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBCA4: jr          $ra
    // 0x801CBCA8: nop

    TRACE_RETURN()
    return;
    // 0x801CBCA8: nop

;}
RECOMP_FUNC void func_801CB6C0_69CE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB6C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB6C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB6C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801CB6CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801CB6D0: jal         0x800141C4
    // 0x801CB6D4: addiu       $a0, $zero, 0x50B
    ctx->r4 = ADD32(0, 0X50B);
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801CB6D4: addiu       $a0, $zero, 0x50B
    ctx->r4 = ADD32(0, 0X50B);
    after_0:
    // 0x801CB6D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CB6DC: bne         $v0, $at, L_801CB6EC
    if (ctx->r2 != ctx->r1) {
        // 0x801CB6E0: nop
    
            goto L_801CB6EC;
    }
    // 0x801CB6E0: nop

    // 0x801CB6E4: jal         0x80013B14
    // 0x801CB6E8: addiu       $a0, $zero, 0x50B
    ctx->r4 = ADD32(0, 0X50B);
    func_80013B14_14714(rdram, ctx);
        goto after_1;
    // 0x801CB6E8: addiu       $a0, $zero, 0x50B
    ctx->r4 = ADD32(0, 0X50B);
    after_1:
L_801CB6EC:
    // 0x801CB6EC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB6F0: jal         0x8003488C
    // 0x801CB6F4: addiu       $a0, $a0, -0x4BA0
    ctx->r4 = ADD32(ctx->r4, -0X4BA0);
    func_8003488C_3548C(rdram, ctx);
        goto after_2;
    // 0x801CB6F4: addiu       $a0, $a0, -0x4BA0
    ctx->r4 = ADD32(ctx->r4, -0X4BA0);
    after_2:
    // 0x801CB6F8: lui         $s0, 0x8007
    ctx->r16 = S32(0X8007 << 16);
    // 0x801CB6FC: lw          $s0, -0x2CD8($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X2CD8);
    // 0x801CB700: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CB704: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB708: bne         $s0, $zero, L_801CB718
    if (ctx->r16 != 0) {
        // 0x801CB70C: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_801CB718;
    }
    // 0x801CB70C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB710: b           L_801CB7DC
    // 0x801CB714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CB7DC;
    // 0x801CB714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CB718:
    // 0x801CB718: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CB71C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CB720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CB724: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CB728: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    // 0x801CB72C: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x801CB730: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x801CB734: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801CB738: jal         0x80012940
    // 0x801CB73C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80012940_13540(rdram, ctx);
        goto after_3;
    // 0x801CB73C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801CB740: addiu       $s1, $s0, 0x5C
    ctx->r17 = ADD32(ctx->r16, 0X5C);
    // 0x801CB744: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x801CB748: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB74C: jal         0x80012500
    // 0x801CB750: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    func_80012500_13100(rdram, ctx);
        goto after_4;
    // 0x801CB750: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    after_4:
    // 0x801CB754: jal         0x80012938
    // 0x801CB758: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    func_80012938_13538(rdram, ctx);
        goto after_5;
    // 0x801CB758: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    after_5:
    // 0x801CB75C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CB760: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CB764: addiu       $t9, $zero, 0x140
    ctx->r25 = ADD32(0, 0X140);
    // 0x801CB768: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x801CB76C: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x801CB770: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x801CB774: sh          $t9, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r25;
    // 0x801CB778: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x801CB77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CB780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CB784: jal         0x8001381C
    // 0x801CB788: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    func_8001381C_1441C(rdram, ctx);
        goto after_6;
    // 0x801CB788: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    after_6:
    // 0x801CB78C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801CB790: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CB794: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x801CB798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CB79C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801CB7A0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801CB7A4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CB7A8: jal         0x800133E0
    // 0x801CB7AC: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_7;
    // 0x801CB7AC: nop

    after_7:
    // 0x801CB7B0: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x801CB7B4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801CB7B8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801CB7BC: jal         0x80013400
    // 0x801CB7C0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013400_14000(rdram, ctx);
        goto after_8;
    // 0x801CB7C0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_8:
    // 0x801CB7C4: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x801CB7C8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801CB7CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801CB7D0: jal         0x80013484
    // 0x801CB7D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80013484_14084(rdram, ctx);
        goto after_9;
    // 0x801CB7D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_9:
    // 0x801CB7D8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801CB7DC:
    // 0x801CB7DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB7E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801CB7E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801CB7E8: jr          $ra
    // 0x801CB7EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801CB7EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CB81C_69CF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB81C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB824: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x801CB828: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB82C: ldc1        $f8, -0x42B0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X42B0);
    // 0x801CB830: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CB834: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801CB838: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801CB83C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801CB840: bc1fl       L_801CB8B0
    if (!c1cs) {
        // 0x801CB844: addiu       $v0, $a2, 0x5C
        ctx->r2 = ADD32(ctx->r6, 0X5C);
            goto L_801CB8B0;
    }
    goto skip_0;
    // 0x801CB844: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x801CB848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CB84C: jal         0x8001B5AC
    // 0x801CB850: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x801CB850: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801CB854: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801CB858: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB85C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CB860: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    // 0x801CB864: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x801CB868: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801CB86C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CB870: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CB874: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801CB878: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x801CB87C: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801CB880: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x801CB884: nop

    // 0x801CB888: bc1fl       L_801CB8B0
    if (!c1cs) {
        // 0x801CB88C: addiu       $v0, $a2, 0x5C
        ctx->r2 = ADD32(ctx->r6, 0X5C);
            goto L_801CB8B0;
    }
    goto skip_1;
    // 0x801CB88C: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    skip_1:
    // 0x801CB890: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x801CB894: beql        $t6, $zero, L_801CB8AC
    if (ctx->r14 == 0) {
        // 0x801CB898: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_801CB8AC;
    }
    goto skip_2;
    // 0x801CB898: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_2:
    // 0x801CB89C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CB8A0: b           L_801CB8AC
    // 0x801CB8A4: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
        goto L_801CB8AC;
    // 0x801CB8A4: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x801CB8A8: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_801CB8AC:
    // 0x801CB8AC: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
L_801CB8B0:
    // 0x801CB8B0: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x801CB8B4: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801CB8B8: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CB8BC: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x801CB8C0: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CB8C4: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x801CB8C8: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CB8CC: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x801CB8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB8D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB8D8: jr          $ra
    // 0x801CB8DC: nop

    TRACE_RETURN()
    return;
    // 0x801CB8DC: nop

;}
RECOMP_FUNC void func_801CBB84_69D2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBB84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBB88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CBB8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBB90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CBB94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801CBB98: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801CBB9C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801CBBA0: jal         0x80014840
    // 0x801CBBA4: addiu       $a1, $zero, 0x50B
    ctx->r5 = ADD32(0, 0X50B);
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x801CBBA4: addiu       $a1, $zero, 0x50B
    ctx->r5 = ADD32(0, 0X50B);
    after_0:
    // 0x801CBBA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801CBBAC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801CBBB0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801CBBB4: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x801CBBB8: lw          $t6, 0x5C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X5C);
    // 0x801CBBBC: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801CBBC0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801CBBC4: sw          $v0, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r2;
    // 0x801CBBC8: lw          $t7, 0x5C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X5C);
    // 0x801CBBCC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CBBD0: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x801CBBD4: sh          $a0, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r4;
    // 0x801CBBD8: lw          $t0, 0x5C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X5C);
    // 0x801CBBDC: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x801CBBE0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x801CBBE4: swc1        $f6, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f6.u32l;
    // 0x801CBBE8: lw          $t1, 0x5C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X5C);
    // 0x801CBBEC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CBBF0: addiu       $v1, $v1, 0x5C
    ctx->r3 = ADD32(ctx->r3, 0X5C);
    // 0x801CBBF4: sh          $a1, 0x12($t1)
    MEM_H(0X12, ctx->r9) = ctx->r5;
    // 0x801CBBF8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x801CBBFC: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
    // 0x801CBC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBC08: jr          $ra
    // 0x801CBC0C: nop

    TRACE_RETURN()
    return;
    // 0x801CBC0C: nop

;}
RECOMP_FUNC void func_801CB814_69CF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB814: jr          $ra
    // 0x801CB818: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    TRACE_RETURN()
    return;
    // 0x801CB818: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
;}
RECOMP_FUNC void func_801CB7F0_69CF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB7F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB7F8: jal         0x80034EF8
    // 0x801CB7FC: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801CB7FC: nop

    after_0:
    // 0x801CB800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB808: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CB80C: jr          $ra
    // 0x801CB810: nop

    TRACE_RETURN()
    return;
    // 0x801CB810: nop

;}
RECOMP_FUNC void func_801CB9D0_69D140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB9D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB9D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB9D8: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801CB9DC: jal         0x8001B5AC
    // 0x801CB9E0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x801CB9E0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CB9E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CB9E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CB9EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB9F4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801CB9F8: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801CB9FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CBA00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CBA04: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x801CBA08: nop

    // 0x801CBA0C: bc1f        L_801CBA1C
    if (!c1cs) {
        // 0x801CBA10: nop
    
            goto L_801CBA1C;
    }
    // 0x801CBA10: nop

    // 0x801CBA14: b           L_801CBA1C
    // 0x801CBA18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_801CBA1C;
    // 0x801CBA18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801CBA1C:
    // 0x801CBA1C: jr          $ra
    // 0x801CBA20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801CBA20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801CBA30_69D1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBA30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CBA34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBA38: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBA3C: addiu       $a1, $a1, -0x45DC
    ctx->r5 = ADD32(ctx->r5, -0X45DC);
    // 0x801CBA40: jal         0x80034E08
    // 0x801CBA44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x801CBA44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801CBA48: bne         $v0, $zero, L_801CBA58
    if (ctx->r2 != 0) {
        // 0x801CBA4C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_801CBA58;
    }
    // 0x801CBA4C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x801CBA50: b           L_801CBB6C
    // 0x801CBA54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CBB6C;
    // 0x801CBA54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBA58:
    // 0x801CBA58: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801CBA5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801CBA60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CBA64: jal         0x80035EEC
    // 0x801CBA68: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801CBA68: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x801CBA6C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x801CBA70: addiu       $v1, $a3, 0x5C
    ctx->r3 = ADD32(ctx->r7, 0X5C);
    // 0x801CBA74: bne         $v0, $zero, L_801CBA84
    if (ctx->r2 != 0) {
        // 0x801CBA78: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_801CBA84;
    }
    // 0x801CBA78: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CBA7C: b           L_801CBB6C
    // 0x801CBA80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801CBB6C;
    // 0x801CBA80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBA84:
    // 0x801CBA84: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801CBA88: addiu       $t6, $zero, 0x601A
    ctx->r14 = ADD32(0, 0X601A);
    // 0x801CBA8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBA90: sh          $t6, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r14;
    // 0x801CBA94: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801CBA98: addiu       $t0, $zero, 0x50B
    ctx->r8 = ADD32(0, 0X50B);
    // 0x801CBA9C: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801CBAA0: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
    // 0x801CBAA4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801CBAA8: addiu       $a0, $a0, 0x3CD0
    ctx->r4 = ADD32(ctx->r4, 0X3CD0);
    // 0x801CBAAC: addiu       $a1, $zero, 0x50B
    ctx->r5 = ADD32(0, 0X50B);
    // 0x801CBAB0: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x801CBAB4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801CBAB8: sh          $t0, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r8;
    // 0x801CBABC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CBAC0: jal         0x80014840
    // 0x801CBAC4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x801CBAC4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x801CBAC8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBACC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x801CBAD0: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x801CBAD4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CBAD8: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x801CBADC: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x801CBAE0: sw          $v0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r2;
    // 0x801CBAE4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801CBAE8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBAEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBAF0: sw          $zero, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = 0;
    // 0x801CBAF4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x801CBAF8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x801CBAFC: sb          $t4, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r12;
    // 0x801CBB00: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB04: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    // 0x801CBB08: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB0C: addiu       $t7, $zero, 0x13F
    ctx->r15 = ADD32(0, 0X13F);
    // 0x801CBB10: sh          $t8, 0x12($t9)
    MEM_H(0X12, ctx->r25) = ctx->r24;
    // 0x801CBB14: lwc1        $f4, -0x42A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X42A0);
    // 0x801CBB18: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB1C: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x801CBB20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CBB24: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
    // 0x801CBB28: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB2C: addiu       $t9, $zero, 0xEF
    ctx->r25 = ADD32(0, 0XEF);
    // 0x801CBB30: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
    // 0x801CBB34: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB38: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x801CBB3C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB40: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x801CBB44: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB48: sb          $zero, 0x2C($t4)
    MEM_B(0X2C, ctx->r12) = 0;
    // 0x801CBB4C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB50: sh          $zero, 0x2E($t5)
    MEM_H(0X2E, ctx->r13) = 0;
    // 0x801CBB54: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB58: sh          $zero, 0x30($t6)
    MEM_H(0X30, ctx->r14) = 0;
    // 0x801CBB5C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB60: sh          $t7, 0x32($t8)
    MEM_H(0X32, ctx->r24) = ctx->r15;
    // 0x801CBB64: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801CBB68: sh          $t9, 0x34($t0)
    MEM_H(0X34, ctx->r8) = ctx->r25;
L_801CBB6C:
    // 0x801CBB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBB70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CBB74: jr          $ra
    // 0x801CBB78: nop

    TRACE_RETURN()
    return;
    // 0x801CBB78: nop

    // 0x801CBB7C: jr          $ra
    // 0x801CBB80: nop

    TRACE_RETURN()
    return;
    // 0x801CBB80: nop

;}
RECOMP_FUNC void func_801CBC80_69D3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBC80: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x801CBC84: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x801CBC88: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CBC8C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CBC90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CBC94: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x801CBC98: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CBC9C: jr          $ra
    // 0x801CBCA0: swc1        $f10, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x801CBCA0: swc1        $f10, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8020D2A0_69D4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D2A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8020D2A4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8020D2A8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8020D2AC: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x8020D2B0: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x8020D2B4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8020D2B8: jal         0x80041770
    // 0x8020D2BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x8020D2BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8020D2C0: jal         0x80004240
    // 0x8020D2C4: nop

    func_80004240_4E40(rdram, ctx);
        goto after_1;
    // 0x8020D2C4: nop

    after_1:
    // 0x8020D2C8: jal         0x80004240
    // 0x8020D2CC: nop

    func_80004240_4E40(rdram, ctx);
        goto after_2;
    // 0x8020D2CC: nop

    after_2:
    // 0x8020D2D0: jal         0x8003FF50
    // 0x8020D2D4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_3;
    // 0x8020D2D4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_3:
    // 0x8020D2D8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8020D2DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020D2E0: jal         0x8001B6A4
    // 0x8020D2E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_4;
    // 0x8020D2E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x8020D2E8: jal         0x80013940
    // 0x8020D2EC: nop

    func_80013940_14540(rdram, ctx);
        goto after_5;
    // 0x8020D2EC: nop

    after_5:
    // 0x8020D2F0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D2F4: jal         0x80013AC4
    // 0x8020D2F8: addiu       $a0, $a0, -0x26D8
    ctx->r4 = ADD32(ctx->r4, -0X26D8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_6;
    // 0x8020D2F8: addiu       $a0, $a0, -0x26D8
    ctx->r4 = ADD32(ctx->r4, -0X26D8);
    after_6:
    // 0x8020D2FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020D300: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8020D304: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020D308: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D30C: addiu       $a1, $a1, -0x27B8
    ctx->r5 = ADD32(ctx->r5, -0X27B8);
    // 0x8020D310: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020D314: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D318: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8020D31C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D320: addiu       $a2, $a2, -0x2610
    ctx->r6 = ADD32(ctx->r6, -0X2610);
    // 0x8020D324: addiu       $a0, $a0, -0x28CC
    ctx->r4 = ADD32(ctx->r4, -0X28CC);
    // 0x8020D328: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020D32C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D330: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020D334: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020D338: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8020D33C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8020D340: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8020D344: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x8020D348: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8020D34C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8020D350: jal         0x80035854
    // 0x8020D354: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_7;
    // 0x8020D354: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_7:
    // 0x8020D358: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D35C: addiu       $a1, $a1, -0x2758
    ctx->r5 = ADD32(ctx->r5, -0X2758);
    // 0x8020D360: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D364: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8020D368: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D36C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020D370: addiu       $a0, $a0, -0x28BC
    ctx->r4 = ADD32(ctx->r4, -0X28BC);
    // 0x8020D374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020D378: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8020D37C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8020D380: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D384: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020D388: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020D38C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8020D390: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x8020D394: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8020D398: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8020D39C: jal         0x80035854
    // 0x8020D3A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_8;
    // 0x8020D3A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_8:
    // 0x8020D3A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D3A8: addiu       $a1, $a1, -0x26F8
    ctx->r5 = ADD32(ctx->r5, -0X26F8);
    // 0x8020D3AC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D3B0: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x8020D3B4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8020D3B8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D3BC: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8020D3C0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020D3C4: addiu       $a0, $a0, -0x289C
    ctx->r4 = ADD32(ctx->r4, -0X289C);
    // 0x8020D3C8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8020D3CC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8020D3D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D3D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020D3D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020D3DC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8020D3E0: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x8020D3E4: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8020D3E8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8020D3EC: jal         0x80035854
    // 0x8020D3F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_9;
    // 0x8020D3F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_9:
    // 0x8020D3F4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D3F8: addiu       $a1, $a1, -0x26F0
    ctx->r5 = ADD32(ctx->r5, -0X26F0);
    // 0x8020D3FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D400: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x8020D404: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8020D408: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8020D40C: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x8020D410: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8020D414: addiu       $a0, $a0, -0x2890
    ctx->r4 = ADD32(ctx->r4, -0X2890);
    // 0x8020D418: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8020D41C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8020D420: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8020D424: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8020D428: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8020D42C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8020D430: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x8020D434: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8020D438: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8020D43C: jal         0x80035854
    // 0x8020D440: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80035854_36454(rdram, ctx);
        goto after_10;
    // 0x8020D440: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_10:
    // 0x8020D444: jal         0x80038BC8
    // 0x8020D448: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_11;
    // 0x8020D448: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x8020D44C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D450: addiu       $a1, $a1, -0x21F0
    ctx->r5 = ADD32(ctx->r5, -0X21F0);
    // 0x8020D454: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8020D458: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8020D45C: jal         0x800042AC
    // 0x8020D460: addiu       $a3, $zero, 0xB0
    ctx->r7 = ADD32(0, 0XB0);
    func_800042AC_4EAC(rdram, ctx);
        goto after_12;
    // 0x8020D460: addiu       $a3, $zero, 0xB0
    ctx->r7 = ADD32(0, 0XB0);
    after_12:
    // 0x8020D464: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8020D468: sb          $zero, 0x7AA2($at)
    MEM_B(0X7AA2, ctx->r1) = 0;
    // 0x8020D46C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8020D470: jal         0x801FAEC0
    // 0x8020D474: addiu       $a1, $zero, 0x133
    ctx->r5 = ADD32(0, 0X133);
    func_801FAEC0_5B6DD0(rdram, ctx);
        goto after_13;
    // 0x8020D474: addiu       $a1, $zero, 0x133
    ctx->r5 = ADD32(0, 0X133);
    after_13:
    // 0x8020D478: jal         0x800369B4
    // 0x8020D47C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800369B4_375B4(rdram, ctx);
        goto after_14;
    // 0x8020D47C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_14:
    // 0x8020D480: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D484: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D488: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D48C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D490: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8020D494: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x8020D498: jal         0x8003521C
    // 0x8020D49C: addiu       $a0, $a0, -0x2B4C
    ctx->r4 = ADD32(ctx->r4, -0X2B4C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_15;
    // 0x8020D49C: addiu       $a0, $a0, -0x2B4C
    ctx->r4 = ADD32(ctx->r4, -0X2B4C);
    after_15:
    // 0x8020D4A0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8020D4A4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x8020D4A8: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x8020D4AC: jr          $ra
    // 0x8020D4B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8020D4B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8020D7E0_69DA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D7E0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8020D7E4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020D7E8: addiu       $t7, $t7, -0x26D0
    ctx->r15 = ADD32(ctx->r15, -0X26D0);
    // 0x8020D7EC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8020D7F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8020D7F4: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8020D7F8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8020D7FC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8020D800: jr          $ra
    // 0x8020D804: nop

    TRACE_RETURN()
    return;
    // 0x8020D804: nop

;}
RECOMP_FUNC void func_8020D4B4_69D6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D4B4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8020D4B8: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8020D4BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D4C0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D4C4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D4C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D4CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020D4D0: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x8020D4D4: lhu         $t6, 0x3094($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X3094);
    // 0x8020D4D8: lhu         $t7, 0x307C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X307C);
    // 0x8020D4DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D4E0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8020D4E4: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8020D4E8: andi        $t9, $t8, 0x4F00
    ctx->r25 = ctx->r24 & 0X4F00;
    // 0x8020D4EC: beq         $t9, $zero, L_8020D4F8
    if (ctx->r25 == 0) {
        // 0x8020D4F0: nop
    
            goto L_8020D4F8;
    }
    // 0x8020D4F0: nop

    // 0x8020D4F4: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
L_8020D4F8:
    // 0x8020D4F8: jal         0x80036840
    // 0x8020D4FC: nop

    func_80036840_37440(rdram, ctx);
        goto after_0;
    // 0x8020D4FC: nop

    after_0:
    // 0x8020D500: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8020D504: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8020D508: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D50C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D510: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x8020D514: lhu         $t0, 0x3094($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X3094);
    // 0x8020D518: lhu         $t1, 0x307C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X307C);
    // 0x8020D51C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8020D520: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x8020D524: andi        $t3, $t2, 0x9000
    ctx->r11 = ctx->r10 & 0X9000;
    // 0x8020D528: beql        $t3, $zero, L_8020D564
    if (ctx->r11 == 0) {
        // 0x8020D52C: lhu         $a0, 0x2DD2($v0)
        ctx->r4 = MEM_HU(ctx->r2, 0X2DD2);
            goto L_8020D564;
    }
    goto skip_0;
    // 0x8020D52C: lhu         $a0, 0x2DD2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2DD2);
    skip_0:
    // 0x8020D530: jal         0x8003521C
    // 0x8020D534: addiu       $a0, $a0, -0x2A50
    ctx->r4 = ADD32(ctx->r4, -0X2A50);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x8020D534: addiu       $a0, $a0, -0x2A50
    ctx->r4 = ADD32(ctx->r4, -0X2A50);
    after_1:
    // 0x8020D538: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8020D53C: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x8020D540: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D544: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8020D548: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8020D54C: sh          $zero, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = 0;
    // 0x8020D550: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8020D554: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D558: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D55C: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x8020D560: lhu         $a0, 0x2DD2($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X2DD2);
L_8020D564:
    // 0x8020D564: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020D568: slti        $at, $a0, 0x101
    ctx->r1 = SIGNED(ctx->r4) < 0X101 ? 1 : 0;
    // 0x8020D56C: bne         $at, $zero, L_8020D590
    if (ctx->r1 != 0) {
        // 0x8020D570: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_8020D590;
    }
    // 0x8020D570: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D574: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8020D578: sb          $t5, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r13;
    // 0x8020D57C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8020D580: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x8020D584: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x8020D588: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8020D58C: lhu         $a0, -0x522E($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X522E);
L_8020D590:
    // 0x8020D590: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020D594: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8020D598: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x8020D59C: sh          $t6, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = ctx->r14;
    // 0x8020D5A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D5A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D5A8: jr          $ra
    // 0x8020D5AC: nop

    TRACE_RETURN()
    return;
    // 0x8020D5AC: nop

;}
RECOMP_FUNC void func_8020D77C_69D9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D77C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D780: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D788: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8020D78C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8020D794: lhu         $t7, -0x522E($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X522E);
    // 0x8020D798: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D79C: addiu       $a1, $a1, -0x21D8
    ctx->r5 = ADD32(ctx->r5, -0X21D8);
    // 0x8020D7A0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8020D7A4: beq         $t8, $zero, L_8020D7BC
    if (ctx->r24 == 0) {
        // 0x8020D7A8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8020D7BC;
    }
    // 0x8020D7A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8020D7AC: jal         0x8000427C
    // 0x8020D7B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8000427C_4E7C(rdram, ctx);
        goto after_0;
    // 0x8020D7B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8020D7B4: b           L_8020D7CC
    // 0x8020D7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8020D7CC;
    // 0x8020D7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020D7BC:
    // 0x8020D7BC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x8020D7C0: jal         0x800042AC
    // 0x8020D7C4: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_800042AC_4EAC(rdram, ctx);
        goto after_1;
    // 0x8020D7C4: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_1:
    // 0x8020D7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020D7CC:
    // 0x8020D7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D7D0: jr          $ra
    // 0x8020D7D4: nop

    TRACE_RETURN()
    return;
    // 0x8020D7D4: nop

;}
RECOMP_FUNC void func_8020D764_69D9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D764: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8020D768: jr          $ra
    // 0x8020D76C: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
    TRACE_RETURN()
    return;
    // 0x8020D76C: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
;}
RECOMP_FUNC void func_8020D770_69D9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D770: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8020D774: jr          $ra
    // 0x8020D778: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
    TRACE_RETURN()
    return;
    // 0x8020D778: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
;}
RECOMP_FUNC void func_8020D5B0_69D7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D5B0: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8020D5B4: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x8020D5B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D5BC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D5C0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D5C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020D5CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020D5D0: addu        $v1, $a2, $at
    ctx->r3 = ADD32(ctx->r6, ctx->r1);
    // 0x8020D5D4: lhu         $a0, 0x2DD2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2DD2);
    // 0x8020D5D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8020D5DC: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x8020D5E0: beq         $t6, $zero, L_8020D624
    if (ctx->r14 == 0) {
        // 0x8020D5E4: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8020D624;
    }
    // 0x8020D5E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8020D5E8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x8020D5EC: lbu         $a0, 0x7AA2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7AA2);
    // 0x8020D5F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8020D5F4: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x8020D5F8: jal         0x8000427C
    // 0x8020D5FC: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    func_8000427C_4E7C(rdram, ctx);
        goto after_0;
    // 0x8020D5FC: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    after_0:
    // 0x8020D600: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8020D604: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x8020D608: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D60C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D610: addu        $v1, $a2, $at
    ctx->r3 = ADD32(ctx->r6, ctx->r1);
    // 0x8020D614: lhu         $a0, 0x2DD2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2DD2);
    // 0x8020D618: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020D61C: b           L_8020D6B4
    // 0x8020D620: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
        goto L_8020D6B4;
    // 0x8020D620: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_8020D624:
    // 0x8020D624: lbu         $v0, 0x7AA2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7AA2);
    // 0x8020D628: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020D62C: addiu       $a3, $zero, 0xB0
    ctx->r7 = ADD32(0, 0XB0);
    // 0x8020D630: beq         $v0, $zero, L_8020D648
    if (ctx->r2 == 0) {
        // 0x8020D634: nop
    
            goto L_8020D648;
    }
    // 0x8020D634: nop

    // 0x8020D638: beq         $v0, $t0, L_8020D680
    if (ctx->r2 == ctx->r8) {
        // 0x8020D63C: addiu       $a3, $zero, 0xC0
        ctx->r7 = ADD32(0, 0XC0);
            goto L_8020D680;
    }
    // 0x8020D63C: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x8020D640: b           L_8020D6B8
    // 0x8020D644: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
        goto L_8020D6B8;
    // 0x8020D644: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_8020D648:
    // 0x8020D648: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D64C: addiu       $a1, $a1, -0x21E8
    ctx->r5 = ADD32(ctx->r5, -0X21E8);
    // 0x8020D650: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8020D654: jal         0x800042AC
    // 0x8020D658: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_800042AC_4EAC(rdram, ctx);
        goto after_1;
    // 0x8020D658: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_1:
    // 0x8020D65C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8020D660: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x8020D664: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D668: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D66C: addu        $v1, $a2, $at
    ctx->r3 = ADD32(ctx->r6, ctx->r1);
    // 0x8020D670: lhu         $a0, 0x2DD2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2DD2);
    // 0x8020D674: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020D678: b           L_8020D6B4
    // 0x8020D67C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
        goto L_8020D6B4;
    // 0x8020D67C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_8020D680:
    // 0x8020D680: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020D684: addiu       $a1, $a1, -0x21E0
    ctx->r5 = ADD32(ctx->r5, -0X21E0);
    // 0x8020D688: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8020D68C: jal         0x800042AC
    // 0x8020D690: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_800042AC_4EAC(rdram, ctx);
        goto after_2;
    // 0x8020D690: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_2:
    // 0x8020D694: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x8020D698: lw          $a2, -0x3A38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A38);
    // 0x8020D69C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8020D6A0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8020D6A4: addu        $v1, $a2, $at
    ctx->r3 = ADD32(ctx->r6, ctx->r1);
    // 0x8020D6A8: lhu         $a0, 0x2DD2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2DD2);
    // 0x8020D6AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8020D6B0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_8020D6B4:
    // 0x8020D6B4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_8020D6B8:
    // 0x8020D6B8: bne         $a1, $at, L_8020D714
    if (ctx->r5 != ctx->r1) {
        // 0x8020D6BC: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_8020D714;
    }
    // 0x8020D6BC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x8020D6C0: addiu       $a1, $a1, -0x3340
    ctx->r5 = ADD32(ctx->r5, -0X3340);
    // 0x8020D6C4: addiu       $v0, $a1, 0x7FFF
    ctx->r2 = ADD32(ctx->r5, 0X7FFF);
    // 0x8020D6C8: lbu         $v0, 0x2DE3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DE3);
    // 0x8020D6CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D6D0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8020D6D4: beq         $v0, $zero, L_8020D6EC
    if (ctx->r2 == 0) {
        // 0x8020D6D8: nop
    
            goto L_8020D6EC;
    }
    // 0x8020D6D8: nop

    // 0x8020D6DC: beq         $v0, $t0, L_8020D700
    if (ctx->r2 == ctx->r8) {
        // 0x8020D6E0: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_8020D700;
    }
    // 0x8020D6E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020D6E4: b           L_8020D718
    // 0x8020D6E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
        goto L_8020D718;
    // 0x8020D6E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_8020D6EC:
    // 0x8020D6EC: sw          $t0, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r8;
    // 0x8020D6F0: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8020D6F4: sb          $t9, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = ctx->r25;
    // 0x8020D6F8: b           L_8020D714
    // 0x8020D6FC: lhu         $a0, 0x2DD2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2DD2);
        goto L_8020D714;
    // 0x8020D6FC: lhu         $a0, 0x2DD2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2DD2);
L_8020D700:
    // 0x8020D700: sw          $t0, -0x3A28($at)
    MEM_W(-0X3A28, ctx->r1) = ctx->r8;
    // 0x8020D704: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8020D708: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8020D70C: sb          $t1, 0x2DD6($at)
    MEM_B(0X2DD6, ctx->r1) = ctx->r9;
    // 0x8020D710: lhu         $a0, 0x2DD2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2DD2);
L_8020D714:
    // 0x8020D714: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_8020D718:
    // 0x8020D718: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x8020D71C: addiu       $t2, $a0, 0x1
    ctx->r10 = ADD32(ctx->r4, 0X1);
    // 0x8020D720: sh          $t2, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = ctx->r10;
    // 0x8020D724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D72C: jr          $ra
    // 0x8020D730: nop

    TRACE_RETURN()
    return;
    // 0x8020D730: nop

;}
RECOMP_FUNC void func_8020D744_69D984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D744: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8020D748: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020D74C: jr          $ra
    // 0x8020D750: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8020D750: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_8020D754_69D994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D754: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8020D758: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8020D75C: jr          $ra
    // 0x8020D760: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8020D760: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_8020D734_69D974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D734: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8020D738: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8020D73C: jr          $ra
    // 0x8020D740: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8020D740: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_801CB460_69E080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB464: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CB468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB46C: addiu       $t6, $t6, 0x6C30
    ctx->r14 = ADD32(ctx->r14, 0X6C30);
    // 0x801CB470: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CB474: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x801CB478: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801CB47C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x801CB480: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x801CB484: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801CB488: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CB48C: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801CB490: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801CB494: lbu         $t1, -0x522A($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X522A);
    // 0x801CB498: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801CB49C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x801CB4A0: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x801CB4A4: jalr        $t9
    // 0x801CB4A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CB4A8: nop

    after_0:
    // 0x801CB4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB4B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB4B4: jr          $ra
    // 0x801CB4B8: nop

    TRACE_RETURN()
    return;
    // 0x801CB4B8: nop

;}
RECOMP_FUNC void func_801CB610_69E230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB610: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CB614: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB618: sw          $zero, 0x7010($at)
    MEM_W(0X7010, ctx->r1) = 0;
    // 0x801CB61C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB620: swc1        $f4, 0x7014($at)
    MEM_W(0X7014, ctx->r1) = ctx->f4.u32l;
    // 0x801CB624: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB628: sw          $zero, 0x7018($at)
    MEM_W(0X7018, ctx->r1) = 0;
    // 0x801CB62C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB630: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CB634: sw          $t6, 0x6D00($at)
    MEM_W(0X6D00, ctx->r1) = ctx->r14;
    // 0x801CB638: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB63C: sw          $zero, 0x7028($at)
    MEM_W(0X7028, ctx->r1) = 0;
    // 0x801CB640: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB644: sw          $zero, 0x7020($at)
    MEM_W(0X7020, ctx->r1) = 0;
    // 0x801CB648: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB64C: sw          $zero, 0x7024($at)
    MEM_W(0X7024, ctx->r1) = 0;
    // 0x801CB650: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB654: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x801CB658: sw          $t7, 0x702C($at)
    MEM_W(0X702C, ctx->r1) = ctx->r15;
    // 0x801CB65C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB660: jr          $ra
    // 0x801CB664: sw          $zero, 0x7008($at)
    MEM_W(0X7008, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x801CB664: sw          $zero, 0x7008($at)
    MEM_W(0X7008, ctx->r1) = 0;
;}
RECOMP_FUNC void func_801CBF5C_69EB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBF5C: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CBF60: addiu       $t6, $t6, 0x7030
    ctx->r14 = ADD32(ctx->r14, 0X7030);
    // 0x801CBF64: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x801CBF68: addiu       $t9, $a0, 0x24
    ctx->r25 = ADD32(ctx->r4, 0X24);
L_801CBF6C:
    // 0x801CBF6C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801CBF70: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801CBF74: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801CBF78: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801CBF7C: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x801CBF80: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801CBF84: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x801CBF88: bne         $t0, $t9, L_801CBF6C
    if (ctx->r8 != ctx->r25) {
        // 0x801CBF8C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801CBF6C;
    }
    // 0x801CBF8C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801CBF90: jr          $ra
    // 0x801CBF94: nop

    TRACE_RETURN()
    return;
    // 0x801CBF94: nop

;}
RECOMP_FUNC void func_801CB668_69E288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB668: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CB66C: lw          $t6, 0x6D00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6D00);
    // 0x801CB670: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB674: sw          $a0, 0x700C($at)
    MEM_W(0X700C, ctx->r1) = ctx->r4;
    // 0x801CB678: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB67C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB684: bne         $t6, $zero, L_801CB698
    if (ctx->r14 != 0) {
        // 0x801CB688: sw          $a1, 0x701C($at)
        MEM_W(0X701C, ctx->r1) = ctx->r5;
            goto L_801CB698;
    }
    // 0x801CB688: sw          $a1, 0x701C($at)
    MEM_W(0X701C, ctx->r1) = ctx->r5;
    // 0x801CB68C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB690: b           L_801CB94C
    // 0x801CB694: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
        goto L_801CB94C;
    // 0x801CB694: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
L_801CB698:
    // 0x801CB698: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB69C: addiu       $a2, $a2, 0x7008
    ctx->r6 = ADD32(ctx->r6, 0X7008);
    // 0x801CB6A0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x801CB6A4: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x801CB6A8: beq         $at, $zero, L_801CB94C
    if (ctx->r1 == 0) {
        // 0x801CB6AC: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_801CB94C;
    }
    // 0x801CB6AC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x801CB6B0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB6B4: addu        $at, $at, $t7
    gpr jr_addend_801CB6BC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CB6B8: lw          $t7, 0x6CE0($at)
    ctx->r15 = ADD32(ctx->r1, 0X6CE0);
    // 0x801CB6BC: jr          $t7
    // 0x801CB6C0: nop

    switch (jr_addend_801CB6BC >> 2) {
        case 0: goto L_801CB6C4; break;
        case 1: goto L_801CB718; break;
        case 2: goto L_801CB7D0; break;
        case 3: goto L_801CB86C; break;
        case 4: goto L_801CB8CC; break;
        case 5: goto L_801CB92C; break;
        default: switch_error(__func__, 0x801CB6BC, 0x801D6CE0);
    }
    // 0x801CB6C0: nop

L_801CB6C4:
    // 0x801CB6C4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB6C8: addiu       $v0, $v0, 0x702C
    ctx->r2 = ADD32(ctx->r2, 0X702C);
    // 0x801CB6CC: lbu         $a0, 0x3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3);
    // 0x801CB6D0: addiu       $t8, $a1, 0x1
    ctx->r24 = ADD32(ctx->r5, 0X1);
    // 0x801CB6D4: bne         $a0, $zero, L_801CB6E0
    if (ctx->r4 != 0) {
        // 0x801CB6D8: nop
    
            goto L_801CB6E0;
    }
    // 0x801CB6D8: nop

    // 0x801CB6DC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_801CB6E0:
    // 0x801CB6E0: jal         0x801CBF98
    // 0x801CB6E4: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_801CBF98_69EBB8(rdram, ctx);
        goto after_0;
    // 0x801CB6E4: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CB6E8: jal         0x801CB95C
    // 0x801CB6EC: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    func_801CB95C_69E57C(rdram, ctx);
        goto after_1;
    // 0x801CB6EC: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    after_1:
    // 0x801CB6F0: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB6F4: addiu       $v0, $v0, 0x702C
    ctx->r2 = ADD32(ctx->r2, 0X702C);
    // 0x801CB6F8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801CB6FC: addiu       $t0, $t9, -0x10
    ctx->r8 = ADD32(ctx->r25, -0X10);
    // 0x801CB700: bgez        $t0, L_801CB70C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801CB704: sw          $t0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r8;
            goto L_801CB70C;
    }
    // 0x801CB704: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x801CB708: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_801CB70C:
    // 0x801CB70C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB710: b           L_801CB94C
    // 0x801CB714: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
        goto L_801CB94C;
    // 0x801CB714: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
L_801CB718:
    // 0x801CB718: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB71C: addiu       $v1, $v1, 0x7014
    ctx->r3 = ADD32(ctx->r3, 0X7014);
    // 0x801CB720: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CB724: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801CB728: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CB72C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CB730: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CB734: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB738: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801CB73C: addiu       $a0, $a0, 0x7010
    ctx->r4 = ADD32(ctx->r4, 0X7010);
    // 0x801CB740: addiu       $t5, $zero, 0x17
    ctx->r13 = ADD32(0, 0X17);
    // 0x801CB744: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CB748: bc1f        L_801CB764
    if (!c1cs) {
        // 0x801CB74C: addiu       $t7, $a1, 0x1
        ctx->r15 = ADD32(ctx->r5, 0X1);
            goto L_801CB764;
    }
    // 0x801CB74C: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x801CB750: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x801CB754: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CB758: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801CB75C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x801CB760: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_801CB764:
    // 0x801CB764: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB768: addiu       $a0, $a0, 0x7010
    ctx->r4 = ADD32(ctx->r4, 0X7010);
    // 0x801CB76C: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x801CB770: slti        $at, $t4, 0x17
    ctx->r1 = SIGNED(ctx->r12) < 0X17 ? 1 : 0;
    // 0x801CB774: bne         $at, $zero, L_801CB78C
    if (ctx->r1 != 0) {
        // 0x801CB778: nop
    
            goto L_801CB78C;
    }
    // 0x801CB778: nop

    // 0x801CB77C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801CB780: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB784: sw          $t6, 0x7018($at)
    MEM_W(0X7018, ctx->r1) = ctx->r14;
    // 0x801CB788: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_801CB78C:
    // 0x801CB78C: jal         0x801CBF98
    // 0x801CB790: nop

    func_801CBF98_69EBB8(rdram, ctx);
        goto after_2;
    // 0x801CB790: nop

    after_2:
    // 0x801CB794: jal         0x801CB9CC
    // 0x801CB798: nop

    func_801CB9CC_69E5EC(rdram, ctx);
        goto after_3;
    // 0x801CB798: nop

    after_3:
    // 0x801CB79C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB7A0: addiu       $v1, $v1, 0x7014
    ctx->r3 = ADD32(ctx->r3, 0X7014);
    // 0x801CB7A4: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801CB7A8: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x801CB7AC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CB7B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CB7B4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801CB7B8: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB7BC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x801CB7C0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801CB7C4: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x801CB7C8: b           L_801CB94C
    // 0x801CB7CC: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
        goto L_801CB94C;
    // 0x801CB7CC: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
L_801CB7D0:
    // 0x801CB7D0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB7D4: addiu       $a0, $a0, 0x7010
    ctx->r4 = ADD32(ctx->r4, 0X7010);
    // 0x801CB7D8: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x801CB7DC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB7E0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CB7E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CB7E8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB7EC: addiu       $v1, $v1, 0x7028
    ctx->r3 = ADD32(ctx->r3, 0X7028);
    // 0x801CB7F0: sw          $t9, 0x7018($at)
    MEM_W(0X7018, ctx->r1) = ctx->r25;
    // 0x801CB7F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CB7F8: bnel        $v0, $zero, L_801CB818
    if (ctx->r2 != 0) {
        // 0x801CB7FC: addiu       $t0, $v0, 0x1
        ctx->r8 = ADD32(ctx->r2, 0X1);
            goto L_801CB818;
    }
    goto skip_0;
    // 0x801CB7FC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x801CB800: jal         0x80038BC8
    // 0x801CB804: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801CB804: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_4:
    // 0x801CB808: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB80C: addiu       $v1, $v1, 0x7028
    ctx->r3 = ADD32(ctx->r3, 0X7028);
    // 0x801CB810: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CB814: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
L_801CB818:
    // 0x801CB818: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x801CB81C: bne         $at, $zero, L_801CB850
    if (ctx->r1 != 0) {
        // 0x801CB820: sw          $t0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r8;
            goto L_801CB850;
    }
    // 0x801CB820: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x801CB824: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB828: jal         0x801CBF5C
    // 0x801CB82C: addiu       $a0, $a0, 0x5348
    ctx->r4 = ADD32(ctx->r4, 0X5348);
    func_801CBF5C_69EB7C(rdram, ctx);
        goto after_5;
    // 0x801CB82C: addiu       $a0, $a0, 0x5348
    ctx->r4 = ADD32(ctx->r4, 0X5348);
    after_5:
    // 0x801CB830: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CB834: addiu       $a2, $a2, 0x7008
    ctx->r6 = ADD32(ctx->r6, 0X7008);
    // 0x801CB838: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x801CB83C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB840: addiu       $v1, $v1, 0x7028
    ctx->r3 = ADD32(ctx->r3, 0X7028);
    // 0x801CB844: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801CB848: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x801CB84C: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
L_801CB850:
    // 0x801CB850: jal         0x801CBF98
    // 0x801CB854: nop

    func_801CBF98_69EBB8(rdram, ctx);
        goto after_6;
    // 0x801CB854: nop

    after_6:
    // 0x801CB858: jal         0x801CB9CC
    // 0x801CB85C: nop

    func_801CB9CC_69E5EC(rdram, ctx);
        goto after_7;
    // 0x801CB85C: nop

    after_7:
    // 0x801CB860: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB864: b           L_801CB94C
    // 0x801CB868: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
        goto L_801CB94C;
    // 0x801CB868: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
L_801CB86C:
    // 0x801CB86C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB870: addiu       $v1, $v1, 0x7028
    ctx->r3 = ADD32(ctx->r3, 0X7028);
    // 0x801CB874: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x801CB878: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB87C: addiu       $v0, $v0, 0x702C
    ctx->r2 = ADD32(ctx->r2, 0X702C);
    // 0x801CB880: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801CB884: slti        $at, $t5, 0x101
    ctx->r1 = SIGNED(ctx->r13) < 0X101 ? 1 : 0;
    // 0x801CB888: bne         $at, $zero, L_801CB89C
    if (ctx->r1 != 0) {
        // 0x801CB88C: sw          $t5, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r13;
            goto L_801CB89C;
    }
    // 0x801CB88C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x801CB890: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x801CB894: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x801CB898: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_801CB89C:
    // 0x801CB89C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CB8A0: addiu       $v1, $v1, 0x7020
    ctx->r3 = ADD32(ctx->r3, 0X7020);
    // 0x801CB8A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CB8A8: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x801CB8AC: beq         $v0, $at, L_801CB8B8
    if (ctx->r2 == ctx->r1) {
        // 0x801CB8B0: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_801CB8B8;
    }
    // 0x801CB8B0: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x801CB8B4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_801CB8B8:
    // 0x801CB8B8: jal         0x801CBF98
    // 0x801CB8BC: nop

    func_801CBF98_69EBB8(rdram, ctx);
        goto after_8;
    // 0x801CB8BC: nop

    after_8:
    // 0x801CB8C0: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB8C4: b           L_801CB94C
    // 0x801CB8C8: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
        goto L_801CB94C;
    // 0x801CB8C8: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
L_801CB8CC:
    // 0x801CB8CC: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB8D0: addiu       $v0, $v0, 0x702C
    ctx->r2 = ADD32(ctx->r2, 0X702C);
    // 0x801CB8D4: lbu         $a0, 0x3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3);
    // 0x801CB8D8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801CB8DC: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x801CB8E0: bne         $a0, $at, L_801CB8EC
    if (ctx->r4 != ctx->r1) {
        // 0x801CB8E4: nop
    
            goto L_801CB8EC;
    }
    // 0x801CB8E4: nop

    // 0x801CB8E8: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_801CB8EC:
    // 0x801CB8EC: jal         0x801CBF98
    // 0x801CB8F0: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_801CBF98_69EBB8(rdram, ctx);
        goto after_9;
    // 0x801CB8F0: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_9:
    // 0x801CB8F4: jal         0x801CB95C
    // 0x801CB8F8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    func_801CB95C_69E57C(rdram, ctx);
        goto after_10;
    // 0x801CB8F8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    after_10:
    // 0x801CB8FC: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB900: addiu       $v0, $v0, 0x702C
    ctx->r2 = ADD32(ctx->r2, 0X702C);
    // 0x801CB904: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x801CB908: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CB90C: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x801CB910: slti        $at, $t1, 0x100
    ctx->r1 = SIGNED(ctx->r9) < 0X100 ? 1 : 0;
    // 0x801CB914: bne         $at, $zero, L_801CB920
    if (ctx->r1 != 0) {
        // 0x801CB918: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_801CB920;
    }
    // 0x801CB918: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x801CB91C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_801CB920:
    // 0x801CB920: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB924: b           L_801CB94C
    // 0x801CB928: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
        goto L_801CB94C;
    // 0x801CB928: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
L_801CB92C:
    // 0x801CB92C: jal         0x80038BC8
    // 0x801CB930: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_11;
    // 0x801CB930: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x801CB934: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB938: sw          $zero, 0x6D00($at)
    MEM_W(0X6D00, ctx->r1) = 0;
    // 0x801CB93C: jal         0x80003728
    // 0x801CB940: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80003728_4328(rdram, ctx);
        goto after_12;
    // 0x801CB940: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_12:
    // 0x801CB944: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CB948: lw          $v0, 0x701C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X701C);
L_801CB94C:
    // 0x801CB94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB954: jr          $ra
    // 0x801CB958: nop

    TRACE_RETURN()
    return;
    // 0x801CB958: nop

;}
RECOMP_FUNC void func_801CB53C_69E15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB53C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CB540: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801CB544: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801CB548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB54C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801CB550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CB558: lhu         $t7, -0x4F84($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X4F84);
    // 0x801CB55C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB560: addiu       $a1, $a1, 0x7008
    ctx->r5 = ADD32(ctx->r5, 0X7008);
    // 0x801CB564: andi        $t8, $t7, 0x9000
    ctx->r24 = ctx->r15 & 0X9000;
    // 0x801CB568: beq         $t8, $zero, L_801CB5D4
    if (ctx->r24 == 0) {
        // 0x801CB56C: nop
    
            goto L_801CB5D4;
    }
    // 0x801CB56C: nop

    // 0x801CB570: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801CB574: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CB578: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801CB57C: bnel        $v0, $at, L_801CB590
    if (ctx->r2 != ctx->r1) {
        // 0x801CB580: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_801CB590;
    }
    goto skip_0;
    // 0x801CB580: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    skip_0:
    // 0x801CB584: b           L_801CB5D4
    // 0x801CB588: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
        goto L_801CB5D4;
    // 0x801CB588: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x801CB58C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_801CB590:
    // 0x801CB590: bne         $at, $zero, L_801CB5D4
    if (ctx->r1 != 0) {
        // 0x801CB594: nop
    
            goto L_801CB5D4;
    }
    // 0x801CB594: nop

    // 0x801CB598: jal         0x80038BC8
    // 0x801CB59C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801CB59C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x801CB5A0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CB5A4: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801CB5A8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801CB5AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB5B0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x801CB5B4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801CB5B8: sb          $t0, -0x522C($at)
    MEM_B(-0X522C, ctx->r1) = ctx->r8;
    // 0x801CB5BC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CB5C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB5C4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801CB5C8: sb          $zero, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = 0;
    // 0x801CB5CC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB5D0: sw          $zero, 0x6D00($at)
    MEM_W(0X6D00, ctx->r1) = 0;
L_801CB5D4:
    // 0x801CB5D4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB5D8: addiu       $a1, $a1, 0x7008
    ctx->r5 = ADD32(ctx->r5, 0X7008);
    // 0x801CB5DC: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x801CB5E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CB5E4: bnel        $t3, $at, L_801CB604
    if (ctx->r11 != ctx->r1) {
        // 0x801CB5E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CB604;
    }
    goto skip_1;
    // 0x801CB5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801CB5EC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x801CB5F0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB5F4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CB5F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801CB5FC: sb          $t4, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r12;
    // 0x801CB600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB604:
    // 0x801CB604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB608: jr          $ra
    // 0x801CB60C: nop

    TRACE_RETURN()
    return;
    // 0x801CB60C: nop

;}
RECOMP_FUNC void func_801CBAF8_69E718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBAF8: sll         $t6, $a3, 3
    ctx->r14 = S32(ctx->r7 << 3);
    // 0x801CBAFC: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CBB00: lw          $t7, 0x7018($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7018);
    // 0x801CBB04: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CBB08: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x801CBB0C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801CBB10: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CBB14: addu        $s0, $a2, $t6
    ctx->r16 = ADD32(ctx->r6, ctx->r14);
    // 0x801CBB18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBB1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CBB20: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801CBB24: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801CBB28: bne         $t7, $at, L_801CBB34
    if (ctx->r15 != ctx->r1) {
        // 0x801CBB2C: addiu       $v0, $s0, 0x1C
        ctx->r2 = ADD32(ctx->r16, 0X1C);
            goto L_801CBB34;
    }
    // 0x801CBB2C: addiu       $v0, $s0, 0x1C
    ctx->r2 = ADD32(ctx->r16, 0X1C);
    // 0x801CBB30: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801CBB34:
    // 0x801CBB34: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CBB38: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CBB3C: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801CBB40: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBB44: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801CBB48: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CBB4C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CBB50: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801CBB54: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x801CBB58: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CBB5C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801CBB60: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x801CBB64: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CBB68: add.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x801CBB6C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801CBB70: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CBB74: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    // 0x801CBB78: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801CBB7C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CBB80: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x801CBB84: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x801CBB88: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801CBB8C: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801CBB90: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x801CBB94: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CBB98: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801CBB9C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x801CBBA0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801CBBA4: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801CBBA8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801CBBAC: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801CBBB0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CBBB4: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801CBBB8: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x801CBBBC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CBBC0: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801CBBC4: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x801CBBC8: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
    // 0x801CBBCC: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x801CBBD0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x801CBBD4: sub.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x801CBBD8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801CBBDC: ldc1        $f10, 0x6CF8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X6CF8);
    // 0x801CBBE0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801CBBE4: add.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x801CBBE8: add.s       $f0, $f14, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x801CBBEC: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CBBF0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x801CBBF4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801CBBF8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CBBFC: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801CBC00: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CBC04: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CBC08: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801CBC0C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801CBC10: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x801CBC14: jal         0x80046AF0
    // 0x801CBC18: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    guPosition(rdram, ctx);
        goto after_0;
    // 0x801CBC18: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801CBC1C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CBC20: addiu       $v1, $v1, 0x701C
    ctx->r3 = ADD32(ctx->r3, 0X701C);
    // 0x801CBC24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBC28: lui         $t9, 0x104
    ctx->r25 = S32(0X104 << 16);
    // 0x801CBC2C: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x801CBC30: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CBC34: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CBC38: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CBC3C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x801CBC40: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x801CBC44: lui         $t5, 0xBD00
    ctx->r13 = S32(0XBD00 << 16);
    // 0x801CBC48: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x801CBC4C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBC50: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x801CBC54: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x801CBC58: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x801CBC5C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x801CBC60: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x801CBC64: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBC68: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x801CBC6C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801CBC70: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CBC74: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x801CBC78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CBC7C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801CBC80: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CBC84: jr          $ra
    // 0x801CBC88: nop

    TRACE_RETURN()
    return;
    // 0x801CBC88: nop

;}
RECOMP_FUNC void func_801CB95C_69E57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB95C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801CB960: beq         $t6, $zero, L_801CB9C4
    if (ctx->r14 == 0) {
        // 0x801CB964: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_801CB9C4;
    }
    // 0x801CB964: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CB968: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CB96C: addiu       $a3, $a3, 0x701C
    ctx->r7 = ADD32(ctx->r7, 0X701C);
    // 0x801CB970: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x801CB974: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x801CB978: lui         $t0, 0xFA00
    ctx->r8 = S32(0XFA00 << 16);
    // 0x801CB97C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x801CB980: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x801CB984: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CB988: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CB98C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x801CB990: andi        $t1, $t6, 0xFF
    ctx->r9 = ctx->r14 & 0XFF;
    // 0x801CB994: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CB998: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x801CB99C: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x801CB9A0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x801CB9A4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x801CB9A8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x801CB9AC: addiu       $t4, $t4, 0x5430
    ctx->r12 = ADD32(ctx->r12, 0X5430);
    // 0x801CB9B0: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x801CB9B4: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x801CB9B8: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x801CB9BC: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x801CB9C0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_801CB9C4:
    // 0x801CB9C4: jr          $ra
    // 0x801CB9C8: nop

    TRACE_RETURN()
    return;
    // 0x801CB9C8: nop

;}
RECOMP_FUNC void func_801CBF98_69EBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBF98: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBF9C: addiu       $a0, $a0, 0x7030
    ctx->r4 = ADD32(ctx->r4, 0X7030);
    // 0x801CBFA0: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x801CBFA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBFA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBFAC: beq         $t6, $zero, L_801CC0B4
    if (ctx->r14 == 0) {
        // 0x801CBFB0: lui         $v1, 0x801D
        ctx->r3 = S32(0X801D << 16);
            goto L_801CC0B4;
    }
    // 0x801CBFB0: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CBFB4: addiu       $v1, $v1, 0x701C
    ctx->r3 = ADD32(ctx->r3, 0X701C);
    // 0x801CBFB8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBFBC: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CBFC0: addiu       $t9, $t9, 0x6C48
    ctx->r25 = ADD32(ctx->r25, 0X6C48);
    // 0x801CBFC4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CBFC8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CBFCC: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x801CBFD0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CBFD4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CBFD8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CBFDC: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CBFE0: lw          $t7, 0x7020($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X7020);
    // 0x801CBFE4: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CBFE8: lw          $t5, 0x7044($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7044);
    // 0x801CBFEC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CBFF0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CBFF4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x801CBFF8: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x801CBFFC: addu        $t4, $t5, $t8
    ctx->r12 = ADD32(ctx->r13, ctx->r24);
    // 0x801CC000: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801CC004: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CC008: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC00C: lui         $t5, 0xE800
    ctx->r13 = S32(0XE800 << 16);
    // 0x801CC010: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x801CC014: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC018: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC01C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC020: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x801CC024: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC028: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x801CC02C: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x801CC030: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CC034: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CC038: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CC03C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC040: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC044: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x801CC048: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x801CC04C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC050: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC054: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC058: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x801CC05C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC060: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x801CC064: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x801CC068: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CC06C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CC070: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CC074: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC078: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC07C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x801CC080: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC084: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC088: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC08C: jal         0x801CC0C4
    // 0x801CC090: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    func_801CC0C4_69ECE4(rdram, ctx);
        goto after_0;
    // 0x801CC090: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    after_0:
    // 0x801CC094: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC098: addiu       $v1, $v1, 0x701C
    ctx->r3 = ADD32(ctx->r3, 0X701C);
    // 0x801CC09C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC0A0: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x801CC0A4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CC0A8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CC0AC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC0B0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_801CC0B4:
    // 0x801CC0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC0B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC0BC: jr          $ra
    // 0x801CC0C0: nop

    TRACE_RETURN()
    return;
    // 0x801CC0C0: nop

;}
RECOMP_FUNC void func_801CB4BC_69E0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB4BC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB4C0: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CB4C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB4C8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB4CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB4D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CB4D4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CB4D8: sb          $t6, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r14;
    // 0x801CB4DC: jal         0x8003FF50
    // 0x801CB4E0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB4E0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
    // 0x801CB4E4: jal         0x80041770
    // 0x801CB4E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_1;
    // 0x801CB4E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x801CB4EC: jal         0x80038BC8
    // 0x801CB4F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801CB4F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x801CB4F4: jal         0x801CB610
    // 0x801CB4F8: nop

    func_801CB610_69E230(rdram, ctx);
        goto after_3;
    // 0x801CB4F8: nop

    after_3:
    // 0x801CB4FC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB500: jal         0x801CBF5C
    // 0x801CB504: addiu       $a0, $a0, 0x536C
    ctx->r4 = ADD32(ctx->r4, 0X536C);
    func_801CBF5C_69EB7C(rdram, ctx);
        goto after_4;
    // 0x801CB504: addiu       $a0, $a0, 0x536C
    ctx->r4 = ADD32(ctx->r4, 0X536C);
    after_4:
    // 0x801CB508: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB50C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB510: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CB514: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB518: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x801CB51C: lbu         $t8, -0x522A($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X522A);
    // 0x801CB520: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801CB524: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CB528: sb          $t9, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r25;
    // 0x801CB52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB534: jr          $ra
    // 0x801CB538: nop

    TRACE_RETURN()
    return;
    // 0x801CB538: nop

;}
RECOMP_FUNC void func_801CC0C4_69ECE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC0C4: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x801CC0C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CC0CC: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x801CC0D0: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x801CC0D4: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x801CC0D8: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x801CC0DC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x801CC0E0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x801CC0E4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x801CC0E8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x801CC0EC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x801CC0F0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x801CC0F4: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x801CC0F8: lui         $fp, 0x705
    ctx->r30 = S32(0X705 << 16);
    // 0x801CC0FC: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x801CC100: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x801CC104: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CC108: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CC10C: sw          $t8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r24;
    // 0x801CC110: addiu       $v1, $v1, 0x701C
    ctx->r3 = ADD32(ctx->r3, 0X701C);
    // 0x801CC114: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
    // 0x801CC118: ori         $fp, $fp, 0x4150
    ctx->r30 = ctx->r30 | 0X4150;
    // 0x801CC11C: lui         $ra, 0xE600
    ctx->r31 = S32(0XE600 << 16);
    // 0x801CC120: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x801CC124: sw          $t7, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r15;
L_801CC128:
    // 0x801CC128: lw          $t9, 0x138($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X138);
    // 0x801CC12C: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x801CC130: bltz        $t9, L_801CC790
    if (SIGNED(ctx->r25) < 0) {
        // 0x801CC134: slt         $at, $a1, $t6
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
            goto L_801CC790;
    }
    // 0x801CC134: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801CC138: bne         $at, $zero, L_801CC790
    if (ctx->r1 != 0) {
        // 0x801CC13C: lw          $t7, 0x138($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X138);
            goto L_801CC790;
    }
    // 0x801CC13C: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x801CC140: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x801CC144: addiu       $a0, $t8, 0x1F
    ctx->r4 = ADD32(ctx->r24, 0X1F);
    // 0x801CC148: slti        $at, $t8, 0xF0
    ctx->r1 = SIGNED(ctx->r24) < 0XF0 ? 1 : 0;
    // 0x801CC14C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801CC150: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
    // 0x801CC154: sw          $a0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r4;
    // 0x801CC158: beq         $at, $zero, L_801CC790
    if (ctx->r1 == 0) {
        // 0x801CC15C: sw          $zero, 0xE8($sp)
        MEM_W(0XE8, ctx->r29) = 0;
            goto L_801CC790;
    }
    // 0x801CC15C: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
    // 0x801CC160: bltz        $a0, L_801CC790
    if (SIGNED(ctx->r4) < 0) {
        // 0x801CC164: slti        $at, $a0, 0xF0
        ctx->r1 = SIGNED(ctx->r4) < 0XF0 ? 1 : 0;
            goto L_801CC790;
    }
    // 0x801CC164: slti        $at, $a0, 0xF0
    ctx->r1 = SIGNED(ctx->r4) < 0XF0 ? 1 : 0;
    // 0x801CC168: bgez        $t8, L_801CC178
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801CC16C: negu        $t9, $t8
        ctx->r25 = SUB32(0, ctx->r24);
            goto L_801CC178;
    }
    // 0x801CC16C: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x801CC170: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
    // 0x801CC174: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
L_801CC178:
    // 0x801CC178: bne         $at, $zero, L_801CC184
    if (ctx->r1 != 0) {
        // 0x801CC17C: addiu       $t6, $zero, 0xEF
        ctx->r14 = ADD32(0, 0XEF);
            goto L_801CC184;
    }
    // 0x801CC17C: addiu       $t6, $zero, 0xEF
    ctx->r14 = ADD32(0, 0XEF);
    // 0x801CC180: sw          $t6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r14;
L_801CC184:
    // 0x801CC184: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
    // 0x801CC188: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x801CC18C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801CC190: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801CC194: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x801CC198: sw          $t8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r24;
    // 0x801CC19C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x801CC1A0: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x801CC1A4: sw          $t6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r14;
    // 0x801CC1A8: sw          $t8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r24;
L_801CC1AC:
    // 0x801CC1AC: bltz        $s4, L_801CC780
    if (SIGNED(ctx->r20) < 0) {
        // 0x801CC1B0: slt         $at, $a1, $s4
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_801CC780;
    }
    // 0x801CC1B0: slt         $at, $a1, $s4
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x801CC1B4: bne         $at, $zero, L_801CC780
    if (ctx->r1 != 0) {
        // 0x801CC1B8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_801CC780;
    }
    // 0x801CC1B8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x801CC1BC: sll         $a1, $s4, 5
    ctx->r5 = S32(ctx->r20 << 5);
    // 0x801CC1C0: addiu       $a0, $a1, 0x1F
    ctx->r4 = ADD32(ctx->r5, 0X1F);
    // 0x801CC1C4: slti        $at, $a1, 0x140
    ctx->r1 = SIGNED(ctx->r5) < 0X140 ? 1 : 0;
    // 0x801CC1C8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801CC1CC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801CC1D0: bne         $at, $zero, L_801CC1E0
    if (ctx->r1 != 0) {
        // 0x801CC1D4: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_801CC1E0;
    }
    // 0x801CC1D4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801CC1D8: b           L_801CC780
    // 0x801CC1DC: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
        goto L_801CC780;
    // 0x801CC1DC: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
L_801CC1E0:
    // 0x801CC1E0: bgez        $a0, L_801CC1F0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801CC1E4: lw          $s5, 0xF0($sp)
        ctx->r21 = MEM_W(ctx->r29, 0XF0);
            goto L_801CC1F0;
    }
    // 0x801CC1E4: lw          $s5, 0xF0($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XF0);
    // 0x801CC1E8: b           L_801CC780
    // 0x801CC1EC: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
        goto L_801CC780;
    // 0x801CC1EC: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
L_801CC1F0:
    // 0x801CC1F0: lw          $s6, 0xF8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XF8);
    // 0x801CC1F4: lw          $s7, 0xE8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XE8);
    // 0x801CC1F8: andi        $t9, $s5, 0xFFF
    ctx->r25 = ctx->r21 & 0XFFF;
    // 0x801CC1FC: andi        $t6, $s6, 0xFFF
    ctx->r14 = ctx->r22 & 0XFFF;
    // 0x801CC200: andi        $t7, $s7, 0xFFFF
    ctx->r15 = ctx->r23 & 0XFFFF;
    // 0x801CC204: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
    // 0x801CC208: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x801CC20C: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x801CC210: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x801CC214: bgez        $v0, L_801CC224
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801CC218: lw          $t1, 0x34($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X34);
            goto L_801CC224;
    }
    // 0x801CC218: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801CC21C: negu        $s3, $v0
    ctx->r19 = SUB32(0, ctx->r2);
    // 0x801CC220: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_801CC224:
    // 0x801CC224: slti        $at, $a0, 0x140
    ctx->r1 = SIGNED(ctx->r4) < 0X140 ? 1 : 0;
    // 0x801CC228: bne         $at, $zero, L_801CC234
    if (ctx->r1 != 0) {
        // 0x801CC22C: sll         $t8, $s1, 2
        ctx->r24 = S32(ctx->r17 << 2);
            goto L_801CC234;
    }
    // 0x801CC22C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x801CC230: addiu       $s2, $zero, 0x13F
    ctx->r18 = ADD32(0, 0X13F);
L_801CC234:
    // 0x801CC234: lh          $a2, 0x20($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X20);
    // 0x801CC238: lh          $a1, 0x1C($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1C);
    // 0x801CC23C: lh          $a3, 0x22($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X22);
    // 0x801CC240: div         $zero, $t0, $a2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r6)));
    // 0x801CC244: mflo        $v0
    ctx->r2 = lo;
    // 0x801CC248: lh          $t7, 0x1E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E);
    // 0x801CC24C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x801CC250: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x801CC254: sll         $t6, $s3, 5
    ctx->r14 = S32(ctx->r19 << 5);
    // 0x801CC258: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x801CC25C: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x801CC260: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x801CC264: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x801CC268: bne         $a2, $zero, L_801CC274
    if (ctx->r6 != 0) {
        // 0x801CC26C: nop
    
            goto L_801CC274;
    }
    // 0x801CC26C: nop

    // 0x801CC270: break       7
    do_break(2149368432);
L_801CC274:
    // 0x801CC274: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC278: bne         $a2, $at, L_801CC28C
    if (ctx->r6 != ctx->r1) {
        // 0x801CC27C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC28C;
    }
    // 0x801CC27C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC280: bne         $t0, $at, L_801CC28C
    if (ctx->r8 != ctx->r1) {
        // 0x801CC284: nop
    
            goto L_801CC28C;
    }
    // 0x801CC284: nop

    // 0x801CC288: break       6
    do_break(2149368456);
L_801CC28C:
    // 0x801CC28C: bne         $a1, $zero, L_801CC298
    if (ctx->r5 != 0) {
        // 0x801CC290: nop
    
            goto L_801CC298;
    }
    // 0x801CC290: nop

    // 0x801CC294: break       7
    do_break(2149368468);
L_801CC298:
    // 0x801CC298: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC29C: bne         $a1, $at, L_801CC2B0
    if (ctx->r5 != ctx->r1) {
        // 0x801CC2A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC2B0;
    }
    // 0x801CC2A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC2A4: bne         $v0, $at, L_801CC2B0
    if (ctx->r2 != ctx->r1) {
        // 0x801CC2A8: nop
    
            goto L_801CC2B0;
    }
    // 0x801CC2A8: nop

    // 0x801CC2AC: break       6
    do_break(2149368492);
L_801CC2B0:
    // 0x801CC2B0: mfhi        $v0
    ctx->r2 = hi;
    // 0x801CC2B4: nop

    // 0x801CC2B8: nop

    // 0x801CC2BC: div         $zero, $t1, $a3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r7)));
    // 0x801CC2C0: mflo        $a0
    ctx->r4 = lo;
    // 0x801CC2C4: bne         $a3, $zero, L_801CC2D0
    if (ctx->r7 != 0) {
        // 0x801CC2C8: nop
    
            goto L_801CC2D0;
    }
    // 0x801CC2C8: nop

    // 0x801CC2CC: break       7
    do_break(2149368524);
L_801CC2D0:
    // 0x801CC2D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC2D4: bne         $a3, $at, L_801CC2E8
    if (ctx->r7 != ctx->r1) {
        // 0x801CC2D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC2E8;
    }
    // 0x801CC2D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC2DC: bne         $t1, $at, L_801CC2E8
    if (ctx->r9 != ctx->r1) {
        // 0x801CC2E0: nop
    
            goto L_801CC2E8;
    }
    // 0x801CC2E0: nop

    // 0x801CC2E4: break       6
    do_break(2149368548);
L_801CC2E8:
    // 0x801CC2E8: div         $zero, $a0, $t7
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r15)));
    // 0x801CC2EC: bne         $t7, $zero, L_801CC2F8
    if (ctx->r15 != 0) {
        // 0x801CC2F0: nop
    
            goto L_801CC2F8;
    }
    // 0x801CC2F0: nop

    // 0x801CC2F4: break       7
    do_break(2149368564);
L_801CC2F8:
    // 0x801CC2F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC2FC: bne         $t7, $at, L_801CC310
    if (ctx->r15 != ctx->r1) {
        // 0x801CC300: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC310;
    }
    // 0x801CC300: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC304: bne         $a0, $at, L_801CC310
    if (ctx->r4 != ctx->r1) {
        // 0x801CC308: nop
    
            goto L_801CC310;
    }
    // 0x801CC308: nop

    // 0x801CC30C: break       6
    do_break(2149368588);
L_801CC310:
    // 0x801CC310: mfhi        $a0
    ctx->r4 = hi;
    // 0x801CC314: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801CC318: nop

    // 0x801CC31C: div         $zero, $t0, $a2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r6)));
    // 0x801CC320: mfhi        $t2
    ctx->r10 = hi;
    // 0x801CC324: bne         $a2, $zero, L_801CC330
    if (ctx->r6 != 0) {
        // 0x801CC328: nop
    
            goto L_801CC330;
    }
    // 0x801CC328: nop

    // 0x801CC32C: break       7
    do_break(2149368620);
L_801CC330:
    // 0x801CC330: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC334: bne         $a2, $at, L_801CC348
    if (ctx->r6 != ctx->r1) {
        // 0x801CC338: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC348;
    }
    // 0x801CC338: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC33C: bne         $t0, $at, L_801CC348
    if (ctx->r8 != ctx->r1) {
        // 0x801CC340: nop
    
            goto L_801CC348;
    }
    // 0x801CC340: nop

    // 0x801CC344: break       6
    do_break(2149368644);
L_801CC348:
    // 0x801CC348: div         $zero, $t1, $a3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r7)));
    // 0x801CC34C: mfhi        $t3
    ctx->r11 = hi;
    // 0x801CC350: bgez        $t2, L_801CC360
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801CC354: sra         $t8, $t2, 5
        ctx->r24 = S32(SIGNED(ctx->r10) >> 5);
            goto L_801CC360;
    }
    // 0x801CC354: sra         $t8, $t2, 5
    ctx->r24 = S32(SIGNED(ctx->r10) >> 5);
    // 0x801CC358: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x801CC35C: sra         $t8, $at, 5
    ctx->r24 = S32(SIGNED(ctx->r1) >> 5);
L_801CC360:
    // 0x801CC360: multu       $a1, $a0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC364: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x801CC368: bne         $a3, $zero, L_801CC374
    if (ctx->r7 != 0) {
        // 0x801CC36C: nop
    
            goto L_801CC374;
    }
    // 0x801CC36C: nop

    // 0x801CC370: break       7
    do_break(2149368688);
L_801CC374:
    // 0x801CC374: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC378: bne         $a3, $at, L_801CC38C
    if (ctx->r7 != ctx->r1) {
        // 0x801CC37C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC38C;
    }
    // 0x801CC37C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC380: bne         $t1, $at, L_801CC38C
    if (ctx->r9 != ctx->r1) {
        // 0x801CC384: nop
    
            goto L_801CC38C;
    }
    // 0x801CC384: nop

    // 0x801CC388: break       6
    do_break(2149368712);
L_801CC38C:
    // 0x801CC38C: mflo        $t8
    ctx->r24 = lo;
    // 0x801CC390: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x801CC394: bgez        $t3, L_801CC3A4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801CC398: sra         $t9, $t3, 5
        ctx->r25 = S32(SIGNED(ctx->r11) >> 5);
            goto L_801CC3A4;
    }
    // 0x801CC398: sra         $t9, $t3, 5
    ctx->r25 = S32(SIGNED(ctx->r11) >> 5);
    // 0x801CC39C: addiu       $at, $t3, 0x1F
    ctx->r1 = ADD32(ctx->r11, 0X1F);
    // 0x801CC3A0: sra         $t9, $at, 5
    ctx->r25 = S32(SIGNED(ctx->r1) >> 5);
L_801CC3A4:
    // 0x801CC3A4: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x801CC3A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801CC3AC: lbu         $t5, 0x0($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X0);
    // 0x801CC3B0: bgez        $a2, L_801CC3C0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801CC3B4: sra         $v0, $a2, 5
        ctx->r2 = S32(SIGNED(ctx->r6) >> 5);
            goto L_801CC3C0;
    }
    // 0x801CC3B4: sra         $v0, $a2, 5
    ctx->r2 = S32(SIGNED(ctx->r6) >> 5);
    // 0x801CC3B8: addiu       $at, $a2, 0x1F
    ctx->r1 = ADD32(ctx->r6, 0X1F);
    // 0x801CC3BC: sra         $v0, $at, 5
    ctx->r2 = S32(SIGNED(ctx->r1) >> 5);
L_801CC3C0:
    // 0x801CC3C0: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC3C4: mflo        $t6
    ctx->r14 = lo;
    // 0x801CC3C8: bgez        $a3, L_801CC3D8
    if (SIGNED(ctx->r7) >= 0) {
        // 0x801CC3CC: sra         $t7, $a3, 5
        ctx->r15 = S32(SIGNED(ctx->r7) >> 5);
            goto L_801CC3D8;
    }
    // 0x801CC3CC: sra         $t7, $a3, 5
    ctx->r15 = S32(SIGNED(ctx->r7) >> 5);
    // 0x801CC3D0: addiu       $at, $a3, 0x1F
    ctx->r1 = ADD32(ctx->r7, 0X1F);
    // 0x801CC3D4: sra         $t7, $at, 5
    ctx->r15 = S32(SIGNED(ctx->r1) >> 5);
L_801CC3D8:
    // 0x801CC3D8: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC3DC: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x801CC3E0: mflo        $t8
    ctx->r24 = lo;
    // 0x801CC3E4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x801CC3E8: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x801CC3EC: multu       $v0, $t3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC3F0: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x801CC3F4: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x801CC3F8: mflo        $t9
    ctx->r25 = lo;
    // 0x801CC3FC: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x801CC400: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801CC404: lhu         $t4, 0x0($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X0);
    // 0x801CC408: lw          $t9, 0x100($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X100);
    // 0x801CC40C: beql        $t4, $t9, L_801CC710
    if (ctx->r12 == ctx->r25) {
        // 0x801CC410: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_801CC710;
    }
    goto skip_0;
    // 0x801CC410: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x801CC414: sw          $t4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r12;
    // 0x801CC418: lbu         $v0, 0x1A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1A);
    // 0x801CC41C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CC420: beql        $v0, $zero, L_801CC444
    if (ctx->r2 == 0) {
        // 0x801CC424: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_801CC444;
    }
    goto skip_1;
    // 0x801CC424: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x801CC428: beq         $v0, $at, L_801CC528
    if (ctx->r2 == ctx->r1) {
        // 0x801CC42C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801CC528;
    }
    // 0x801CC42C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CC430: beql        $v0, $at, L_801CC620
    if (ctx->r2 == ctx->r1) {
        // 0x801CC434: lw          $t8, 0xC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0XC);
            goto L_801CC620;
    }
    goto skip_2;
    // 0x801CC434: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    skip_2:
    // 0x801CC438: b           L_801CC710
    // 0x801CC43C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
        goto L_801CC710;
    // 0x801CC43C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC440: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_801CC444:
    // 0x801CC444: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x801CC448: sll         $t9, $t4, 10
    ctx->r25 = S32(ctx->r12 << 10);
    // 0x801CC44C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CC450: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC454: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CC458: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x801CC45C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801CC460: bgez        $t9, L_801CC470
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CC464: sra         $t6, $t9, 2
        ctx->r14 = S32(SIGNED(ctx->r25) >> 2);
            goto L_801CC470;
    }
    // 0x801CC464: sra         $t6, $t9, 2
    ctx->r14 = S32(SIGNED(ctx->r25) >> 2);
    // 0x801CC468: addiu       $at, $t9, 0x3
    ctx->r1 = ADD32(ctx->r25, 0X3);
    // 0x801CC46C: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_801CC470:
    // 0x801CC470: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x801CC474: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x801CC478: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x801CC47C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC480: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x801CC484: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CC488: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC48C: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x801CC490: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CC494: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC498: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x801CC49C: ori         $t8, $t8, 0xF100
    ctx->r24 = ctx->r24 | 0XF100;
    // 0x801CC4A0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC4A4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC4A8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC4AC: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x801CC4B0: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x801CC4B4: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x801CC4B8: addiu       $t9, $a3, 0x8
    ctx->r25 = ADD32(ctx->r7, 0X8);
    // 0x801CC4BC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CC4C0: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x801CC4C4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x801CC4C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC4CC: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x801CC4D0: lui         $t8, 0xF510
    ctx->r24 = S32(0XF510 << 16);
    // 0x801CC4D4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC4D8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC4DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC4E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC4E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC4E8: lui         $t7, 0x5
    ctx->r15 = S32(0X5 << 16);
    // 0x801CC4EC: ori         $t7, $t7, 0x4150
    ctx->r15 = ctx->r15 | 0X4150;
    // 0x801CC4F0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CC4F4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC4F8: ori         $t8, $t8, 0x1000
    ctx->r24 = ctx->r24 | 0X1000;
    // 0x801CC4FC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CC500: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CC504: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CC508: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x801CC50C: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x801CC510: addiu       $t9, $t2, 0x8
    ctx->r25 = ADD32(ctx->r10, 0X8);
    // 0x801CC514: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CC518: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x801CC51C: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x801CC520: b           L_801CC70C
    // 0x801CC524: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
        goto L_801CC70C;
    // 0x801CC524: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
L_801CC528:
    // 0x801CC528: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x801CC52C: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x801CC530: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC534: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x801CC538: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x801CC53C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x801CC540: sll         $t7, $t8, 7
    ctx->r15 = S32(ctx->r24 << 7);
    // 0x801CC544: andi        $t9, $a0, 0xF00
    ctx->r25 = ctx->r4 & 0XF00;
    // 0x801CC548: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x801CC54C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CC550: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CC554: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x801CC558: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x801CC55C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC560: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x801CC564: sll         $t8, $t5, 3
    ctx->r24 = S32(ctx->r13 << 3);
    // 0x801CC568: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801CC56C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CC570: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC574: lui         $t7, 0xF550
    ctx->r15 = S32(0XF550 << 16);
    // 0x801CC578: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CC57C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC580: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x801CC584: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CC588: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x801CC58C: lui         $t7, 0x71F
    ctx->r15 = S32(0X71F << 16);
    // 0x801CC590: ori         $t7, $t7, 0xF200
    ctx->r15 = ctx->r15 | 0XF200;
    // 0x801CC594: addiu       $t8, $a3, 0x8
    ctx->r24 = ADD32(ctx->r7, 0X8);
    // 0x801CC598: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CC59C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x801CC5A0: sw          $ra, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r31;
    // 0x801CC5A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC5A8: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x801CC5AC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CC5B0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CC5B4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CC5B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CC5BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC5C0: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x801CC5C4: lui         $t7, 0xF548
    ctx->r15 = S32(0XF548 << 16);
    // 0x801CC5C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CC5CC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x801CC5D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC5D4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC5D8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CC5DC: lui         $t8, 0x5
    ctx->r24 = S32(0X5 << 16);
    // 0x801CC5E0: ori         $t8, $t8, 0x4150
    ctx->r24 = ctx->r24 | 0X4150;
    // 0x801CC5E4: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x801CC5E8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC5EC: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x801CC5F0: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x801CC5F4: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x801CC5F8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801CC5FC: lui         $t7, 0x7
    ctx->r15 = S32(0X7 << 16);
    // 0x801CC600: ori         $t7, $t7, 0xC07C
    ctx->r15 = ctx->r15 | 0XC07C;
    // 0x801CC604: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x801CC608: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CC60C: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x801CC610: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x801CC614: b           L_801CC70C
    // 0x801CC618: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
        goto L_801CC70C;
    // 0x801CC618: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x801CC61C: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
L_801CC620:
    // 0x801CC620: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x801CC624: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC628: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x801CC62C: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x801CC630: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x801CC634: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x801CC638: andi        $t9, $a0, 0xF00
    ctx->r25 = ctx->r4 & 0XF00;
    // 0x801CC63C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x801CC640: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC644: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC648: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x801CC64C: addu        $t5, $t8, $t6
    ctx->r13 = ADD32(ctx->r24, ctx->r14);
    // 0x801CC650: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC654: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x801CC658: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x801CC65C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x801CC660: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CC664: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC668: lui         $t8, 0xF550
    ctx->r24 = S32(0XF550 << 16);
    // 0x801CC66C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CC670: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC674: sw          $fp, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r30;
    // 0x801CC678: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CC67C: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x801CC680: lui         $t8, 0x70F
    ctx->r24 = S32(0X70F << 16);
    // 0x801CC684: ori         $t8, $t8, 0xF400
    ctx->r24 = ctx->r24 | 0XF400;
    // 0x801CC688: addiu       $t7, $a3, 0x8
    ctx->r15 = ADD32(ctx->r7, 0X8);
    // 0x801CC68C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC690: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x801CC694: sw          $ra, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r31;
    // 0x801CC698: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC69C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x801CC6A0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CC6A4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CC6A8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CC6AC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CC6B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC6B4: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x801CC6B8: lui         $t8, 0xF540
    ctx->r24 = S32(0XF540 << 16);
    // 0x801CC6BC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC6C0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC6C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CC6C8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC6CC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CC6D0: lui         $t7, 0x5
    ctx->r15 = S32(0X5 << 16);
    // 0x801CC6D4: ori         $t7, $t7, 0x4150
    ctx->r15 = ctx->r15 | 0X4150;
    // 0x801CC6D8: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x801CC6DC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801CC6E0: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x801CC6E4: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x801CC6E8: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x801CC6EC: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801CC6F0: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x801CC6F4: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x801CC6F8: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x801CC6FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CC700: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x801CC704: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x801CC708: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
L_801CC70C:
    // 0x801CC70C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_801CC710:
    // 0x801CC710: andi        $t9, $s2, 0xFFF
    ctx->r25 = ctx->r18 & 0XFFF;
    // 0x801CC714: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x801CC718: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801CC71C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x801CC720: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC724: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC728: andi        $t9, $s1, 0xFFF
    ctx->r25 = ctx->r17 & 0XFFF;
    // 0x801CC72C: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x801CC730: or          $t7, $t8, $s5
    ctx->r15 = ctx->r24 | ctx->r21;
    // 0x801CC734: or          $t8, $t6, $s6
    ctx->r24 = ctx->r14 | ctx->r22;
    // 0x801CC738: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CC73C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CC740: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC744: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x801CC748: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x801CC74C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC750: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801CC754: or          $t7, $t8, $s7
    ctx->r15 = ctx->r24 | ctx->r23;
    // 0x801CC758: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CC75C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CC760: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CC764: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x801CC768: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x801CC76C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CC770: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CC774: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x801CC778: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CC77C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_801CC780:
    // 0x801CC780: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x801CC784: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x801CC788: bne         $s4, $at, L_801CC1AC
    if (ctx->r20 != ctx->r1) {
        // 0x801CC78C: nop
    
            goto L_801CC1AC;
    }
    // 0x801CC78C: nop

L_801CC790:
    // 0x801CC790: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x801CC794: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x801CC798: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x801CC79C: bne         $t9, $at, L_801CC128
    if (ctx->r25 != ctx->r1) {
        // 0x801CC7A0: sw          $t9, 0x138($sp)
        MEM_W(0X138, ctx->r29) = ctx->r25;
            goto L_801CC128;
    }
    // 0x801CC7A0: sw          $t9, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r25;
    // 0x801CC7A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CC7A8: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x801CC7AC: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x801CC7B0: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x801CC7B4: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x801CC7B8: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x801CC7BC: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC7C0: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x801CC7C4: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x801CC7C8: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x801CC7CC: jr          $ra
    // 0x801CC7D0: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    TRACE_RETURN()
    return;
    // 0x801CC7D0: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_801CB9CC_69E5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB9CC: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CB9D0: lw          $t6, 0x700C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X700C);
    // 0x801CB9D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CB9D8: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CB9DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801CB9E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801CB9E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CB9E8: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x801CB9EC: addiu       $t8, $t8, 0x6D08
    ctx->r24 = ADD32(ctx->r24, 0X6D08);
    // 0x801CB9F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CB9F4: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x801CB9F8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB9FC: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBA00: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CBA04: lw          $a3, 0x7014($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7014);
    // 0x801CBA08: lw          $a2, 0x7010($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7010);
    // 0x801CBA0C: addiu       $a1, $a1, -0x3040
    ctx->r5 = ADD32(ctx->r5, -0X3040);
    // 0x801CBA10: jal         0x801CBC8C
    // 0x801CBA14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CBC8C_69E8AC(rdram, ctx);
        goto after_0;
    // 0x801CBA14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801CBA18: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x801CBA1C: addiu       $t0, $t0, 0x701C
    ctx->r8 = ADD32(ctx->r8, 0X701C);
    // 0x801CBA20: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x801CBA24: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x801CBA28: addiu       $t2, $t2, 0x5390
    ctx->r10 = ADD32(ctx->r10, 0X5390);
    // 0x801CBA2C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x801CBA30: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x801CBA34: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x801CBA38: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA3C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x801CBA40: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x801CBA44: lwc1        $f4, 0x7014($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7014);
    // 0x801CBA48: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBA4C: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBA50: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CBA54: lw          $a3, 0x7010($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7010);
    // 0x801CBA58: addiu       $a2, $a2, -0x3580
    ctx->r6 = ADD32(ctx->r6, -0X3580);
    // 0x801CBA5C: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x801CBA60: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x801CBA64: jal         0x801CBAF8
    // 0x801CBA68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801CBAF8_69E718(rdram, ctx);
        goto after_1;
    // 0x801CBA68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801CBA6C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA70: lwc1        $f6, 0x7014($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7014);
    // 0x801CBA74: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBA78: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBA7C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CBA80: lw          $a3, 0x7010($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7010);
    // 0x801CBA84: addiu       $a2, $a2, -0x3820
    ctx->r6 = ADD32(ctx->r6, -0X3820);
    // 0x801CBA88: addiu       $a0, $a0, 0x5E48
    ctx->r4 = ADD32(ctx->r4, 0X5E48);
    // 0x801CBA8C: addiu       $a1, $s0, 0x100
    ctx->r5 = ADD32(ctx->r16, 0X100);
    // 0x801CBA90: jal         0x801CBAF8
    // 0x801CBA94: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801CBAF8_69E718(rdram, ctx);
        goto after_2;
    // 0x801CBA94: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801CBA98: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA9C: lwc1        $f8, 0x7014($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7014);
    // 0x801CBAA0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBAA4: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBAA8: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CBAAC: lw          $a3, 0x7010($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7010);
    // 0x801CBAB0: addiu       $a2, $a2, -0x32E0
    ctx->r6 = ADD32(ctx->r6, -0X32E0);
    // 0x801CBAB4: addiu       $a0, $a0, 0x67D8
    ctx->r4 = ADD32(ctx->r4, 0X67D8);
    // 0x801CBAB8: addiu       $a1, $s0, 0x140
    ctx->r5 = ADD32(ctx->r16, 0X140);
    // 0x801CBABC: jal         0x801CBAF8
    // 0x801CBAC0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801CBAF8_69E718(rdram, ctx);
        goto after_3;
    // 0x801CBAC0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x801CBAC4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBAC8: addiu       $a0, $a0, 0x701C
    ctx->r4 = ADD32(ctx->r4, 0X701C);
    // 0x801CBACC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801CBAD0: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x801CBAD4: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x801CBAD8: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x801CBADC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801CBAE0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x801CBAE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CBAE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CBAEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CBAF0: jr          $ra
    // 0x801CBAF4: nop

    TRACE_RETURN()
    return;
    // 0x801CBAF4: nop

;}
RECOMP_FUNC void func_801CBC8C_69E8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBC8C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801CBC90: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x801CBC94: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CBC98: lw          $t7, 0x7018($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7018);
    // 0x801CBC9C: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x801CBCA0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801CBCA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CBCA8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801CBCAC: addu        $s2, $a1, $t6
    ctx->r18 = ADD32(ctx->r5, ctx->r14);
    // 0x801CBCB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBCB4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CBCB8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801CBCBC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801CBCC0: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x801CBCC4: bne         $t7, $at, L_801CBCD0
    if (ctx->r15 != ctx->r1) {
        // 0x801CBCC8: addiu       $v0, $s2, 0x1C
        ctx->r2 = ADD32(ctx->r18, 0X1C);
            goto L_801CBCD0;
    }
    // 0x801CBCC8: addiu       $v0, $s2, 0x1C
    ctx->r2 = ADD32(ctx->r18, 0X1C);
    // 0x801CBCCC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_801CBCD0:
    // 0x801CBCD0: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x801CBCD4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801CBCD8: lui         $s1, 0x801D
    ctx->r17 = S32(0X801D << 16);
    // 0x801CBCDC: addiu       $s1, $s1, 0x701C
    ctx->r17 = ADD32(ctx->r17, 0X701C);
    // 0x801CBCE0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801CBCE4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBCE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CBCEC: lui         $t9, 0x380
    ctx->r25 = S32(0X380 << 16);
    // 0x801CBCF0: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CBCF4: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801CBCF8: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CBCFC: addiu       $t3, $t3, 0x6C38
    ctx->r11 = ADD32(ctx->r11, 0X6C38);
    // 0x801CBD00: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x801CBD04: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x801CBD08: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x801CBD0C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801CBD10: addiu       $a1, $sp, 0x92
    ctx->r5 = ADD32(ctx->r29, 0X92);
    // 0x801CBD14: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x801CBD18: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801CBD1C: lwc1        $f2, 0x4($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4);
    // 0x801CBD20: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x801CBD24: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CBD28: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x801CBD2C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x801CBD30: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CBD34: lwc1        $f14, 0x8($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801CBD38: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801CBD3C: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CBD40: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x801CBD44: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x801CBD48: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CBD4C: lwc1        $f16, 0xC($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801CBD50: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x801CBD54: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CBD58: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801CBD5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CBD60: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CBD64: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x801CBD68: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CBD6C: lwc1        $f18, 0x10($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801CBD70: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801CBD74: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CBD78: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801CBD7C: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x801CBD80: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CBD84: lwc1        $f0, 0x14($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X14);
    // 0x801CBD88: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801CBD8C: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CBD90: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801CBD94: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x801CBD98: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x801CBD9C: lwc1        $f2, 0x18($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X18);
    // 0x801CBDA0: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x801CBDA4: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x801CBDA8: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x801CBDAC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CBDB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CBDB4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x801CBDB8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801CBDBC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801CBDC0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CBDC4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801CBDC8: add.s       $f14, $f2, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x801CBDCC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801CBDD0: jal         0x80043250
    // 0x801CBDD4: nop

    guPerspective(rdram, ctx);
        goto after_0;
    // 0x801CBDD4: nop

    after_0:
    // 0x801CBDD8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBDDC: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x801CBDE0: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x801CBDE4: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x801CBDE8: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x801CBDEC: ori         $t5, $t5, 0xE
    ctx->r13 = ctx->r13 | 0XE;
    // 0x801CBDF0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x801CBDF4: lhu         $t6, 0x92($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X92);
    // 0x801CBDF8: lui         $t8, 0x103
    ctx->r24 = S32(0X103 << 16);
    // 0x801CBDFC: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x801CBE00: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x801CBE04: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBE08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBE0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CBE10: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x801CBE14: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x801CBE18: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x801CBE1C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x801CBE20: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801CBE24: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801CBE28: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801CBE2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CBE30: addiu       $s2, $t0, 0x40
    ctx->r18 = ADD32(ctx->r8, 0X40);
    // 0x801CBE34: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CBE38: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x801CBE3C: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x801CBE40: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801CBE44: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801CBE48: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801CBE4C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801CBE50: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CBE54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CBE58: jal         0x80046E18
    // 0x801CBE5C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    guLookAt(rdram, ctx);
        goto after_1;
    // 0x801CBE5C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801CBE60: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBE64: lui         $t3, 0x101
    ctx->r11 = S32(0X101 << 16);
    // 0x801CBE68: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x801CBE6C: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x801CBE70: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x801CBE74: sw          $s2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r18;
    // 0x801CBE78: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x801CBE7C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBE80: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x801CBE84: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x801CBE88: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x801CBE8C: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x801CBE90: ori         $t5, $t5, 0x404
    ctx->r13 = ctx->r13 | 0X404;
    // 0x801CBE94: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x801CBE98: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x801CBE9C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBEA0: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x801CBEA4: ori         $t7, $t7, 0xC04
    ctx->r15 = ctx->r15 | 0XC04;
    // 0x801CBEA8: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x801CBEAC: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x801CBEB0: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x801CBEB4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CBEB8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBEBC: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x801CBEC0: ori         $t2, $zero, 0xFFFD
    ctx->r10 = 0 | 0XFFFD;
    // 0x801CBEC4: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801CBEC8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x801CBECC: ori         $t9, $t9, 0x1404
    ctx->r25 = ctx->r25 | 0X1404;
    // 0x801CBED0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CBED4: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x801CBED8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBEDC: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x801CBEE0: ori         $t4, $t4, 0x1C04
    ctx->r12 = ctx->r12 | 0X1C04;
    // 0x801CBEE4: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x801CBEE8: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x801CBEEC: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x801CBEF0: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x801CBEF4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBEF8: lui         $t7, 0x4F
    ctx->r15 = S32(0X4F << 16);
    // 0x801CBEFC: ori         $t7, $t7, 0xC3BC
    ctx->r15 = ctx->r15 | 0XC3BC;
    // 0x801CBF00: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x801CBF04: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x801CBF08: lui         $t6, 0xED00
    ctx->r14 = S32(0XED00 << 16);
    // 0x801CBF0C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x801CBF10: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x801CBF14: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x801CBF18: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x801CBF1C: jal         0x80043C28
    // 0x801CBF20: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    guMtxIdent(rdram, ctx);
        goto after_2;
    // 0x801CBF20: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_2:
    // 0x801CBF24: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801CBF28: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801CBF2C: lui         $t9, 0x102
    ctx->r25 = S32(0X102 << 16);
    // 0x801CBF30: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801CBF34: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x801CBF38: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x801CBF3C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CBF40: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x801CBF44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801CBF48: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801CBF4C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801CBF50: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CBF54: jr          $ra
    // 0x801CBF58: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x801CBF58: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_801CB610_6A9AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB614: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CB618: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x801CB61C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB624: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CB628: lbu         $t7, 0x7390($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7390);
    // 0x801CB62C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801CB630: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB634: bne         $t7, $zero, L_801CB678
    if (ctx->r15 != 0) {
        // 0x801CB638: subu        $t8, $t8, $t6
        ctx->r24 = SUB32(ctx->r24, ctx->r14);
            goto L_801CB678;
    }
    // 0x801CB638: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x801CB63C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x801CB640: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801CB644: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801CB648: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CB64C: addiu       $t9, $t9, 0x71F0
    ctx->r25 = ADD32(ctx->r25, 0X71F0);
    // 0x801CB650: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801CB654: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x801CB658: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x801CB65C: lhu         $a1, 0x8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X8);
    // 0x801CB660: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CB664: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x801CB668: jal         0x80045B80
    // 0x801CB66C: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB66C: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    after_0:
    // 0x801CB670: b           L_801CB684
    // 0x801CB674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CB684;
    // 0x801CB674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB678:
    // 0x801CB678: jal         0x801CB978
    // 0x801CB67C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB67C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x801CB680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB684:
    // 0x801CB684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB688: jr          $ra
    // 0x801CB68C: nop

    TRACE_RETURN()
    return;
    // 0x801CB68C: nop

;}
RECOMP_FUNC void func_801CB8F4_6A9DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB8F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB8F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CB8FC: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x801CB900: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB904: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB908: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CB90C: lbu         $t7, 0x7390($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7390);
    // 0x801CB910: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CB914: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CB918: bne         $t7, $zero, L_801CB960
    if (ctx->r15 != 0) {
        // 0x801CB91C: sll         $t8, $t6, 2
        ctx->r24 = S32(ctx->r14 << 2);
            goto L_801CB960;
    }
    // 0x801CB91C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801CB920: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x801CB924: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801CB928: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801CB92C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801CB930: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801CB934: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CB938: addiu       $t9, $t9, 0x71F0
    ctx->r25 = ADD32(ctx->r25, 0X71F0);
    // 0x801CB93C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801CB940: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x801CB944: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CB948: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x801CB94C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CB950: jal         0x8004525C
    // 0x801CB954: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB954: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x801CB958: b           L_801CB96C
    // 0x801CB95C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CB96C;
    // 0x801CB95C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB960:
    // 0x801CB960: jal         0x801CB978
    // 0x801CB964: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB964: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x801CB968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB96C:
    // 0x801CB96C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB970: jr          $ra
    // 0x801CB974: nop

    TRACE_RETURN()
    return;
    // 0x801CB974: nop

;}
RECOMP_FUNC void func_801CDB98_6AC058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDB98: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x801CDB9C: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x801CDBA0: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x801CDBA4: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x801CDBA8: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x801CDBAC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x801CDBB0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CDBB4: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x801CDBB8: srl         $t0, $t9, 5
    ctx->r8 = S32(U32(ctx->r25) >> 5);
    // 0x801CDBBC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801CDBC0: srl         $t5, $t4, 5
    ctx->r13 = S32(U32(ctx->r12) >> 5);
    // 0x801CDBC4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801CDBC8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x801CDBCC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x801CDBD0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801CDBD4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801CDBD8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801CDBDC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801CDBE0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801CDBE4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801CDBE8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801CDBEC: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x801CDBF0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x801CDBF4: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x801CDBF8: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x801CDBFC: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x801CDC00: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x801CDC04: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x801CDC08: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x801CDC0C: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    // 0x801CDC10: beq         $t0, $zero, L_801CDCAC
    if (ctx->r8 == 0) {
        // 0x801CDC14: sw          $t4, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r12;
            goto L_801CDCAC;
    }
    // 0x801CDC14: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x801CDC18: beql        $t5, $zero, L_801CDCB0
    if (ctx->r13 == 0) {
        // 0x801CDC1C: lw          $t2, 0x6C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X6C);
            goto L_801CDCB0;
    }
    goto skip_0;
    // 0x801CDC1C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x801CDC20: beq         $t5, $zero, L_801CDCAC
    if (ctx->r13 == 0) {
        // 0x801CDC24: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_801CDCAC;
    }
    // 0x801CDC24: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x801CDC28: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x801CDC2C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_801CDC30:
    // 0x801CDC30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801CDC34: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x801CDC38: beq         $t6, $zero, L_801CDC9C
    if (ctx->r14 == 0) {
        // 0x801CDC3C: sll         $v0, $s7, 5
        ctx->r2 = S32(ctx->r23 << 5);
            goto L_801CDC9C;
    }
    // 0x801CDC3C: sll         $v0, $s7, 5
    ctx->r2 = S32(ctx->r23 << 5);
    // 0x801CDC40: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x801CDC44: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x801CDC48: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x801CDC4C: addu        $s4, $v0, $t8
    ctx->r20 = ADD32(ctx->r2, ctx->r24);
    // 0x801CDC50: addiu       $s6, $s4, 0x1F
    ctx->r22 = ADD32(ctx->r20, 0X1F);
    // 0x801CDC54: addu        $s5, $v0, $t7
    ctx->r21 = ADD32(ctx->r2, ctx->r15);
    // 0x801CDC58: addiu       $s3, $s0, 0x1F
    ctx->r19 = ADD32(ctx->r16, 0X1F);
L_801CDC5C:
    // 0x801CDC5C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801CDC60: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801CDC64: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x801CDC68: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x801CDC6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801CDC70: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801CDC74: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x801CDC78: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x801CDC7C: jal         0x801CD910
    // 0x801CDC80: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_0;
    // 0x801CDC80: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    after_0:
    // 0x801CDC84: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x801CDC88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801CDC8C: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x801CDC90: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x801CDC94: bne         $s1, $t9, L_801CDC5C
    if (ctx->r17 != ctx->r25) {
        // 0x801CDC98: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_801CDC5C;
    }
    // 0x801CDC98: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
L_801CDC9C:
    // 0x801CDC9C: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x801CDCA0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x801CDCA4: bnel        $s7, $t1, L_801CDC30
    if (ctx->r23 != ctx->r9) {
        // 0x801CDCA8: lw          $t6, 0x68($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X68);
            goto L_801CDC30;
    }
    goto skip_1;
    // 0x801CDCA8: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    skip_1:
L_801CDCAC:
    // 0x801CDCAC: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
L_801CDCB0:
    // 0x801CDCB0: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x801CDCB4: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x801CDCB8: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x801CDCBC: beq         $t3, $zero, L_801CDD40
    if (ctx->r11 == 0) {
        // 0x801CDCC0: sw          $t3, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r11;
            goto L_801CDD40;
    }
    // 0x801CDCC0: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x801CDCC4: beql        $t4, $zero, L_801CDD44
    if (ctx->r12 == 0) {
        // 0x801CDCC8: lw          $s7, 0x64($sp)
        ctx->r23 = MEM_W(ctx->r29, 0X64);
            goto L_801CDD44;
    }
    goto skip_2;
    // 0x801CDCC8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    skip_2:
    // 0x801CDCCC: beq         $t4, $zero, L_801CDD40
    if (ctx->r12 == 0) {
        // 0x801CDCD0: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_801CDD40;
    }
    // 0x801CDCD0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x801CDCD4: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x801CDCD8: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x801CDCDC: lw          $s4, 0x9C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X9C);
    // 0x801CDCE0: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x801CDCE4: sll         $t0, $v0, 5
    ctx->r8 = S32(ctx->r2 << 5);
    // 0x801CDCE8: addu        $s0, $t0, $t6
    ctx->r16 = ADD32(ctx->r8, ctx->r14);
    // 0x801CDCEC: addu        $s2, $s0, $t3
    ctx->r18 = ADD32(ctx->r16, ctx->r11);
    // 0x801CDCF0: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x801CDCF4: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x801CDCF8: addiu       $s6, $s4, 0x1F
    ctx->r22 = ADD32(ctx->r20, 0X1F);
    // 0x801CDCFC: addu        $s1, $t0, $t5
    ctx->r17 = ADD32(ctx->r8, ctx->r13);
L_801CDD00:
    // 0x801CDD00: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801CDD04: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801CDD08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801CDD0C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x801CDD10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801CDD14: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801CDD18: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x801CDD1C: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x801CDD20: jal         0x801CD910
    // 0x801CDD24: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_1;
    // 0x801CDD24: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    after_1:
    // 0x801CDD28: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x801CDD2C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x801CDD30: addiu       $s5, $s5, 0x20
    ctx->r21 = ADD32(ctx->r21, 0X20);
    // 0x801CDD34: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x801CDD38: bne         $s7, $t7, L_801CDD00
    if (ctx->r23 != ctx->r15) {
        // 0x801CDD3C: addiu       $s6, $s6, 0x20
        ctx->r22 = ADD32(ctx->r22, 0X20);
            goto L_801CDD00;
    }
    // 0x801CDD3C: addiu       $s6, $s6, 0x20
    ctx->r22 = ADD32(ctx->r22, 0X20);
L_801CDD40:
    // 0x801CDD40: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
L_801CDD44:
    // 0x801CDD44: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x801CDD48: andi        $t8, $s7, 0x1F
    ctx->r24 = ctx->r23 & 0X1F;
    // 0x801CDD4C: beq         $t8, $zero, L_801CDDD0
    if (ctx->r24 == 0) {
        // 0x801CDD50: or          $s7, $t8, $zero
        ctx->r23 = ctx->r24 | 0;
            goto L_801CDDD0;
    }
    // 0x801CDD50: or          $s7, $t8, $zero
    ctx->r23 = ctx->r24 | 0;
    // 0x801CDD54: beql        $t9, $zero, L_801CDDD4
    if (ctx->r25 == 0) {
        // 0x801CDD58: lw          $t5, 0x58($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X58);
            goto L_801CDDD4;
    }
    goto skip_3;
    // 0x801CDD58: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    skip_3:
    // 0x801CDD5C: beq         $t9, $zero, L_801CDDD0
    if (ctx->r25 == 0) {
        // 0x801CDD60: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_801CDDD0;
    }
    // 0x801CDD60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801CDD64: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x801CDD68: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x801CDD6C: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x801CDD70: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x801CDD74: sll         $t1, $v1, 5
    ctx->r9 = S32(ctx->r3 << 5);
    // 0x801CDD78: addu        $s4, $t1, $t4
    ctx->r20 = ADD32(ctx->r9, ctx->r12);
    // 0x801CDD7C: addu        $s6, $s4, $t8
    ctx->r22 = ADD32(ctx->r20, ctx->r24);
    // 0x801CDD80: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x801CDD84: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x801CDD88: addiu       $s3, $s0, 0x1F
    ctx->r19 = ADD32(ctx->r16, 0X1F);
    // 0x801CDD8C: addu        $s5, $t1, $t2
    ctx->r21 = ADD32(ctx->r9, ctx->r10);
L_801CDD90:
    // 0x801CDD90: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801CDD94: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801CDD98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x801CDD9C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x801CDDA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801CDDA4: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801CDDA8: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x801CDDAC: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x801CDDB0: jal         0x801CD910
    // 0x801CDDB4: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_2;
    // 0x801CDDB4: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    after_2:
    // 0x801CDDB8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x801CDDBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801CDDC0: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x801CDDC4: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x801CDDC8: bne         $s1, $t0, L_801CDD90
    if (ctx->r17 != ctx->r8) {
        // 0x801CDDCC: addiu       $s3, $s3, 0x20
        ctx->r19 = ADD32(ctx->r19, 0X20);
            goto L_801CDD90;
    }
    // 0x801CDDCC: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
L_801CDDD0:
    // 0x801CDDD0: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
L_801CDDD4:
    // 0x801CDDD4: beql        $t5, $zero, L_801CDE4C
    if (ctx->r13 == 0) {
        // 0x801CDDD8: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_801CDE4C;
    }
    goto skip_4;
    // 0x801CDDD8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_4:
    // 0x801CDDDC: beq         $s7, $zero, L_801CDE48
    if (ctx->r23 == 0) {
        // 0x801CDDE0: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_801CDE48;
    }
    // 0x801CDDE0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801CDDE4: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x801CDDE8: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x801CDDEC: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x801CDDF0: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x801CDDF4: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x801CDDF8: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x801CDDFC: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x801CDE00: addu        $s0, $t6, $t9
    ctx->r16 = ADD32(ctx->r14, ctx->r25);
    // 0x801CDE04: addu        $s4, $t7, $t1
    ctx->r20 = ADD32(ctx->r15, ctx->r9);
    // 0x801CDE08: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x801CDE0C: addu        $t0, $s4, $s7
    ctx->r8 = ADD32(ctx->r20, ctx->r23);
    // 0x801CDE10: addu        $t2, $s0, $t5
    ctx->r10 = ADD32(ctx->r16, ctx->r13);
    // 0x801CDE14: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801CDE18: addu        $a2, $t6, $t3
    ctx->r6 = ADD32(ctx->r14, ctx->r11);
    // 0x801CDE1C: addiu       $t6, $t0, -0x1
    ctx->r14 = ADD32(ctx->r8, -0X1);
    // 0x801CDE20: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x801CDE24: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801CDE28: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801CDE2C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801CDE30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x801CDE34: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x801CDE38: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x801CDE3C: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x801CDE40: jal         0x801CD910
    // 0x801CDE44: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_3;
    // 0x801CDE44: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    after_3:
L_801CDE48:
    // 0x801CDE48: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_801CDE4C:
    // 0x801CDE4C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CDE50: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801CDE54: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801CDE58: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801CDE5C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801CDE60: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x801CDE64: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x801CDE68: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x801CDE6C: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x801CDE70: jr          $ra
    // 0x801CDE74: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x801CDE74: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_801CB7E4_6A9CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB7E4: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x801CB7E8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB7EC: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x801CB7F0: lbu         $t6, 0x7390($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7390);
    // 0x801CB7F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB7FC: bne         $t6, $zero, L_801CB830
    if (ctx->r14 != 0) {
        // 0x801CB800: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801CB830;
    }
    // 0x801CB800: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB804: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x801CB808: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x801CB80C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CB810: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x801CB814: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CB818: addiu       $t8, $t8, 0x71F0
    ctx->r24 = ADD32(ctx->r24, 0X71F0);
    // 0x801CB81C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801CB820: jal         0x80045680
    // 0x801CB824: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB824: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x801CB828: b           L_801CB83C
    // 0x801CB82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CB83C;
    // 0x801CB82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB830:
    // 0x801CB830: jal         0x801CB978
    // 0x801CB834: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB834: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_1:
    // 0x801CB838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB83C:
    // 0x801CB83C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB840: jr          $ra
    // 0x801CB844: nop

    TRACE_RETURN()
    return;
    // 0x801CB844: nop

;}
RECOMP_FUNC void func_801CD68C_6ABB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD68C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD690: lui         $t7, 0xFD48
    ctx->r15 = S32(0XFD48 << 16);
    // 0x801CD694: subu        $v1, $a2, $a2
    ctx->r3 = SUB32(ctx->r6, ctx->r6);
    // 0x801CD698: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CD69C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CD6A0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x801CD6A4: ori         $t7, $t7, 0x3F
    ctx->r15 = ctx->r15 | 0X3F;
    // 0x801CD6A8: srl         $t9, $v1, 1
    ctx->r25 = S32(U32(ctx->r3) >> 1);
    // 0x801CD6AC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CD6B0: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x801CD6B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD6B8: addiu       $v1, $t9, 0x7
    ctx->r3 = ADD32(ctx->r25, 0X7);
    // 0x801CD6BC: srl         $t6, $v1, 3
    ctx->r14 = S32(U32(ctx->r3) >> 3);
    // 0x801CD6C0: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x801CD6C4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CD6C8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CD6CC: sll         $v1, $t7, 9
    ctx->r3 = S32(ctx->r15 << 9);
    // 0x801CD6D0: lui         $t6, 0x701
    ctx->r14 = S32(0X701 << 16);
    // 0x801CD6D4: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x801CD6D8: or          $t9, $v1, $at
    ctx->r25 = ctx->r3 | ctx->r1;
    // 0x801CD6DC: ori         $t6, $t6, 0x40
    ctx->r14 = ctx->r14 | 0X40;
    // 0x801CD6E0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CD6E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CD6E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD6EC: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x801CD6F0: sll         $a1, $a3, 2
    ctx->r5 = S32(ctx->r7 << 2);
    // 0x801CD6F4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD6F8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801CD6FC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CD700: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD704: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD708: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x801CD70C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801CD710: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD714: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801CD718: andi        $t6, $a1, 0xFFF
    ctx->r14 = ctx->r5 & 0XFFF;
    // 0x801CD71C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801CD720: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CD724: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x801CD728: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CD72C: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x801CD730: addiu       $t1, $a2, 0xF
    ctx->r9 = ADD32(ctx->r6, 0XF);
    // 0x801CD734: addiu       $t2, $a3, 0xF
    ctx->r10 = ADD32(ctx->r7, 0XF);
    // 0x801CD738: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x801CD73C: sll         $t6, $t1, 1
    ctx->r14 = S32(ctx->r9 << 1);
    // 0x801CD740: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CD744: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801CD748: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x801CD74C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CD750: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801CD754: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801CD758: or          $t6, $t9, $t2
    ctx->r14 = ctx->r25 | ctx->r10;
    // 0x801CD75C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CD760: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD764: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x801CD768: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x801CD76C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD770: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801CD774: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CD778: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD77C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD780: or          $t6, $v1, $at
    ctx->r14 = ctx->r3 | ctx->r1;
    // 0x801CD784: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801CD788: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD78C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801CD790: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CD794: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801CD798: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x801CD79C: sll         $t9, $t8, 20
    ctx->r25 = S32(ctx->r24 << 20);
    // 0x801CD7A0: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CD7A4: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x801CD7A8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CD7AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD7B0: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x801CD7B4: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x801CD7B8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CD7BC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CD7C0: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x801CD7C4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x801CD7C8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801CD7CC: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x801CD7D0: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x801CD7D4: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801CD7D8: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CD7DC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CD7E0: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x801CD7E4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CD7E8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801CD7EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD7F0: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801CD7F4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801CD7F8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CD7FC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801CD800: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CD808: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x801CD80C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801CD810: blez        $t9, L_801CD820
    if (SIGNED(ctx->r25) <= 0) {
        // 0x801CD814: sll         $t7, $t6, 18
        ctx->r15 = S32(ctx->r14 << 18);
            goto L_801CD820;
    }
    // 0x801CD814: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x801CD818: b           L_801CD820
    // 0x801CD81C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_801CD820;
    // 0x801CD81C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_801CD820:
    // 0x801CD820: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801CD824: blez        $t8, L_801CD834
    if (SIGNED(ctx->r24) <= 0) {
        // 0x801CD828: andi        $t7, $a1, 0xFFF
        ctx->r15 = ctx->r5 & 0XFFF;
            goto L_801CD834;
    }
    // 0x801CD828: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x801CD82C: b           L_801CD834
    // 0x801CD830: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_801CD834;
    // 0x801CD830: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_801CD834:
    // 0x801CD834: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x801CD838: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CD83C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CD840: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x801CD844: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CD848: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x801CD84C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x801CD850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CD854: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x801CD858: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CD85C: blez        $t8, L_801CD86C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x801CD860: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_801CD86C;
    }
    // 0x801CD860: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x801CD864: b           L_801CD86C
    // 0x801CD868: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_801CD86C;
    // 0x801CD868: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_801CD86C:
    // 0x801CD86C: sll         $t1, $t9, 18
    ctx->r9 = S32(ctx->r25 << 18);
    // 0x801CD870: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x801CD874: blez        $t7, L_801CD884
    if (SIGNED(ctx->r15) <= 0) {
        // 0x801CD878: andi        $t8, $a1, 0xFFF
        ctx->r24 = ctx->r5 & 0XFFF;
            goto L_801CD884;
    }
    // 0x801CD878: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x801CD87C: b           L_801CD888
    // 0x801CD880: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
        goto L_801CD888;
    // 0x801CD880: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_801CD884:
    // 0x801CD884: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_801CD888:
    // 0x801CD888: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x801CD88C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CD890: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x801CD894: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x801CD898: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x801CD89C: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x801CD8A0: negu        $t7, $zero
    ctx->r15 = SUB32(0, 0);
    // 0x801CD8A4: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x801CD8A8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CD8AC: bgez        $a3, L_801CD8D4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x801CD8B0: sw          $t6, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r14;
            goto L_801CD8D4;
    }
    // 0x801CD8B0: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x801CD8B4: sll         $v0, $a3, 12
    ctx->r2 = S32(ctx->r7 << 12);
    // 0x801CD8B8: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x801CD8BC: bgez        $t9, L_801CD8CC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CD8C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_801CD8CC;
    }
    // 0x801CD8C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CD8C4: b           L_801CD8D8
    // 0x801CD8C8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_801CD8D8;
    // 0x801CD8C8: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_801CD8CC:
    // 0x801CD8CC: b           L_801CD8D8
    // 0x801CD8D0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_801CD8D8;
    // 0x801CD8D0: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_801CD8D4:
    // 0x801CD8D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_801CD8D8:
    // 0x801CD8D8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801CD8DC: negu        $t9, $a3
    ctx->r25 = SUB32(0, ctx->r7);
    // 0x801CD8E0: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x801CD8E4: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x801CD8E8: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x801CD8EC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD8F0: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x801CD8F4: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x801CD8F8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD8FC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801CD900: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x801CD904: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD908: jr          $ra
    // 0x801CD90C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801CD90C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_801CBB70_6AA030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBB70: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x801CBB74: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CBB78: lbu         $t7, -0x1BB4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1BB4);
    // 0x801CBB7C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801CBB80: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801CBB84: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBB88: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801CBB8C: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x801CBB90: sb          $t8, -0x1BB4($at)
    MEM_B(-0X1BB4, ctx->r1) = ctx->r24;
    // 0x801CBB94: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801CBB98: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801CBB9C: lui         $s2, 0x3
    ctx->r18 = S32(0X3 << 16);
    // 0x801CBBA0: ori         $s2, $s2, 0x8000
    ctx->r18 = ctx->r18 | 0X8000;
    // 0x801CBBA4: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x801CBBA8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801CBBAC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801CBBB0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801CBBB4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801CBBB8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801CBBBC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801CBBC0: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x801CBBC4: sb          $t6, 0xCF($sp)
    MEM_B(0XCF, ctx->r29) = ctx->r14;
    // 0x801CBBC8: addu        $t3, $t9, $s2
    ctx->r11 = ADD32(ctx->r25, ctx->r18);
    // 0x801CBBCC: lhu         $t4, 0x307C($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X307C);
    // 0x801CBBD0: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x801CBBD4: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801CBBD8: bne         $t4, $at, L_801CBCF4
    if (ctx->r12 != ctx->r1) {
        // 0x801CBBDC: lui         $t5, 0x801D
        ctx->r13 = S32(0X801D << 16);
            goto L_801CBCF4;
    }
    // 0x801CBBDC: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CBBE0: lbu         $t5, -0x1BB3($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1BB3);
    // 0x801CBBE4: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CBBE8: bne         $t5, $zero, L_801CBCF4
    if (ctx->r13 != 0) {
        // 0x801CBBEC: nop
    
            goto L_801CBCF4;
    }
    // 0x801CBBEC: nop

    // 0x801CBBF0: lbu         $t6, -0x1BAE($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1BAE);
    // 0x801CBBF4: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x801CBBF8: beq         $at, $zero, L_801CBCF4
    if (ctx->r1 == 0) {
        // 0x801CBBFC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801CBCF4;
    }
    // 0x801CBBFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801CBC00: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBC04: addu        $at, $at, $t6
    gpr jr_addend_801CBC0C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CBC08: lw          $t6, -0x1FA0($at)
    ctx->r14 = ADD32(ctx->r1, -0X1FA0);
    // 0x801CBC0C: jr          $t6
    // 0x801CBC10: nop

    switch (jr_addend_801CBC0C >> 2) {
        case 0: goto L_801CBC14; break;
        case 1: goto L_801CBC50; break;
        case 2: goto L_801CBCEC; break;
        case 3: goto L_801CBC14; break;
        case 4: goto L_801CBCEC; break;
        default: switch_error(__func__, 0x801CBC0C, 0x801CE060);
    }
    // 0x801CBC10: nop

L_801CBC14:
    // 0x801CBC14: lui         $s6, 0x801D
    ctx->r22 = S32(0X801D << 16);
    // 0x801CBC18: addiu       $s6, $s6, -0x1BBF
    ctx->r22 = ADD32(ctx->r22, -0X1BBF);
    // 0x801CBC1C: lb          $t7, 0x0($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X0);
    // 0x801CBC20: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x801CBC24: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x801CBC28: bne         $t7, $at, L_801CBC3C
    if (ctx->r15 != ctx->r1) {
        // 0x801CBC2C: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_801CBC3C;
    }
    // 0x801CBC2C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CBC30: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBC34: b           L_801CBCF4
    // 0x801CBC38: sb          $t8, -0x1BB3($at)
    MEM_B(-0X1BB3, ctx->r1) = ctx->r24;
        goto L_801CBCF4;
    // 0x801CBC38: sb          $t8, -0x1BB3($at)
    MEM_B(-0X1BB3, ctx->r1) = ctx->r24;
L_801CBC3C:
    // 0x801CBC3C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBC40: sb          $s1, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = ctx->r17;
    // 0x801CBC44: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBC48: b           L_801CBCF4
    // 0x801CBC4C: sb          $s1, -0x1BAC($at)
    MEM_B(-0X1BAC, ctx->r1) = ctx->r17;
        goto L_801CBCF4;
    // 0x801CBC4C: sb          $s1, -0x1BAC($at)
    MEM_B(-0X1BAC, ctx->r1) = ctx->r17;
L_801CBC50:
    // 0x801CBC50: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CBC54: lbu         $t9, -0x1BAC($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1BAC);
    // 0x801CBC58: bne         $t9, $zero, L_801CBCE0
    if (ctx->r25 != 0) {
        // 0x801CBC5C: lui         $t3, 0x801D
        ctx->r11 = S32(0X801D << 16);
            goto L_801CBCE0;
    }
    // 0x801CBC5C: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CBC60: lb          $t3, -0x1BC0($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1BC0);
    // 0x801CBC64: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
    // 0x801CBC68: lui         $s6, 0x801D
    ctx->r22 = S32(0X801D << 16);
    // 0x801CBC6C: multu       $t3, $s4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CBC70: addiu       $s6, $s6, -0x1BBF
    ctx->r22 = ADD32(ctx->r22, -0X1BBF);
    // 0x801CBC74: lb          $t5, 0x0($s6)
    ctx->r13 = MEM_B(ctx->r22, 0X0);
    // 0x801CBC78: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CBC7C: addiu       $t7, $t7, -0x1F60
    ctx->r15 = ADD32(ctx->r15, -0X1F60);
    // 0x801CBC80: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x801CBC84: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801CBC88: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x801CBC8C: addiu       $s3, $s3, -0x1D60
    ctx->r19 = ADD32(ctx->r19, -0X1D60);
    // 0x801CBC90: addiu       $t8, $v0, 0xA
    ctx->r24 = ADD32(ctx->r2, 0XA);
    // 0x801CBC94: mflo        $t4
    ctx->r12 = lo;
    // 0x801CBC98: addu        $a0, $s3, $t4
    ctx->r4 = ADD32(ctx->r19, ctx->r12);
    // 0x801CBC9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CBCA0: lhu         $a1, 0x8($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X8);
    // 0x801CBCA4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x801CBCA8: jal         0x80045B80
    // 0x801CBCAC: addiu       $a3, $v0, 0xE
    ctx->r7 = ADD32(ctx->r2, 0XE);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x801CBCAC: addiu       $a3, $v0, 0xE
    ctx->r7 = ADD32(ctx->r2, 0XE);
    after_0:
    // 0x801CBCB0: beq         $v0, $zero, L_801CBCC4
    if (ctx->r2 == 0) {
        // 0x801CBCB4: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_801CBCC4;
    }
    // 0x801CBCB4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x801CBCB8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x801CBCBC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBCC0: sb          $t9, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = ctx->r25;
L_801CBCC4:
    // 0x801CBCC4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x801CBCC8: sb          $t3, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r11;
    // 0x801CBCCC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBCD0: sb          $s1, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = ctx->r17;
    // 0x801CBCD4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBCD8: b           L_801CBCF4
    // 0x801CBCDC: sb          $zero, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = 0;
        goto L_801CBCF4;
    // 0x801CBCDC: sb          $zero, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = 0;
L_801CBCE0:
    // 0x801CBCE0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBCE4: b           L_801CBCF4
    // 0x801CBCE8: sb          $zero, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = 0;
        goto L_801CBCF4;
    // 0x801CBCE8: sb          $zero, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = 0;
L_801CBCEC:
    // 0x801CBCEC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBCF0: sb          $zero, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = 0;
L_801CBCF4:
    // 0x801CBCF4: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CBCF8: lbu         $t4, -0x1BB3($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1BB3);
    // 0x801CBCFC: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x801CBD00: lui         $s6, 0x801D
    ctx->r22 = S32(0X801D << 16);
    // 0x801CBD04: addiu       $s6, $s6, -0x1BBF
    ctx->r22 = ADD32(ctx->r22, -0X1BBF);
    // 0x801CBD08: addiu       $s3, $s3, -0x1D60
    ctx->r19 = ADD32(ctx->r19, -0X1D60);
    // 0x801CBD0C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x801CBD10: bne         $t4, $zero, L_801CBE1C
    if (ctx->r12 != 0) {
        // 0x801CBD14: addiu       $s4, $zero, 0x68
        ctx->r20 = ADD32(0, 0X68);
            goto L_801CBE1C;
    }
    // 0x801CBD14: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
    // 0x801CBD18: jal         0x801CDE78
    // 0x801CBD1C: nop

    func_801CDE78_6AC338(rdram, ctx);
        goto after_1;
    // 0x801CBD1C: nop

    after_1:
    // 0x801CBD20: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBD24: addiu       $a2, $a2, -0x1BAE
    ctx->r6 = ADD32(ctx->r6, -0X1BAE);
    // 0x801CBD28: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x801CBD2C: sltiu       $at, $t5, 0x5
    ctx->r1 = ctx->r13 < 0X5 ? 1 : 0;
    // 0x801CBD30: beq         $at, $zero, L_801CBE1C
    if (ctx->r1 == 0) {
        // 0x801CBD34: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_801CBE1C;
    }
    // 0x801CBD34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x801CBD38: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBD3C: addu        $at, $at, $t5
    gpr jr_addend_801CBD44 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801CBD40: lw          $t5, -0x1F8C($at)
    ctx->r13 = ADD32(ctx->r1, -0X1F8C);
    // 0x801CBD44: jr          $t5
    // 0x801CBD48: nop

    switch (jr_addend_801CBD44 >> 2) {
        case 0: goto L_801CBD4C; break;
        case 1: goto L_801CBDE8; break;
        case 2: goto L_801CBE1C; break;
        case 3: goto L_801CBD4C; break;
        case 4: goto L_801CBE1C; break;
        default: switch_error(__func__, 0x801CBD44, 0x801CE074);
    }
    // 0x801CBD48: nop

L_801CBD4C:
    // 0x801CBD4C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801CBD50: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBD54: lhu         $a0, -0x1BBC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X1BBC);
    // 0x801CBD58: addu        $v1, $t6, $s2
    ctx->r3 = ADD32(ctx->r14, ctx->r18);
    // 0x801CBD5C: lhu         $t7, 0x307C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X307C);
    // 0x801CBD60: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBD64: addiu       $a1, $a1, -0x1BC0
    ctx->r5 = ADD32(ctx->r5, -0X1BC0);
    // 0x801CBD68: or          $v0, $t7, $a0
    ctx->r2 = ctx->r15 | ctx->r4;
    // 0x801CBD6C: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x801CBD70: beq         $t8, $zero, L_801CBDA8
    if (ctx->r24 == 0) {
        // 0x801CBD74: lui         $s2, 0x801D
        ctx->r18 = S32(0X801D << 16);
            goto L_801CBDA8;
    }
    // 0x801CBD74: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CBD78: lb          $t9, 0x0($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X0);
    // 0x801CBD7C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBD80: addiu       $s2, $s2, -0x1BAD
    ctx->r18 = ADD32(ctx->r18, -0X1BAD);
    // 0x801CBD84: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x801CBD88: sb          $t3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r11;
    // 0x801CBD8C: sb          $s1, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = ctx->r17;
    // 0x801CBD90: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBD94: sb          $zero, -0x1BAF($at)
    MEM_B(-0X1BAF, ctx->r1) = 0;
    // 0x801CBD98: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x801CBD9C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x801CBDA0: lhu         $t4, 0x307C($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X307C);
    // 0x801CBDA4: or          $v0, $t4, $a0
    ctx->r2 = ctx->r12 | ctx->r4;
L_801CBDA8:
    // 0x801CBDA8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBDAC: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CBDB0: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x801CBDB4: addiu       $s2, $s2, -0x1BAD
    ctx->r18 = ADD32(ctx->r18, -0X1BAD);
    // 0x801CBDB8: beq         $t5, $zero, L_801CBE1C
    if (ctx->r13 == 0) {
        // 0x801CBDBC: addiu       $a1, $a1, -0x1BC0
        ctx->r5 = ADD32(ctx->r5, -0X1BC0);
            goto L_801CBE1C;
    }
    // 0x801CBDBC: addiu       $a1, $a1, -0x1BC0
    ctx->r5 = ADD32(ctx->r5, -0X1BC0);
    // 0x801CBDC0: lb          $t6, 0x0($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X0);
    // 0x801CBDC4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBDC8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801CBDCC: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x801CBDD0: sb          $s1, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = ctx->r17;
    // 0x801CBDD4: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBDD8: sb          $zero, -0x1BAF($at)
    MEM_B(-0X1BAF, ctx->r1) = 0;
    // 0x801CBDDC: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x801CBDE0: b           L_801CBE1C
    // 0x801CBDE4: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
        goto L_801CBE1C;
    // 0x801CBDE4: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
L_801CBDE8:
    // 0x801CBDE8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801CBDEC: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CBDF0: lhu         $t4, -0x1BBC($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1BBC);
    // 0x801CBDF4: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x801CBDF8: lhu         $t3, 0x307C($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X307C);
    // 0x801CBDFC: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x801CBE00: andi        $t6, $t5, 0x300
    ctx->r14 = ctx->r13 & 0X300;
    // 0x801CBE04: beq         $t6, $zero, L_801CBE1C
    if (ctx->r14 == 0) {
        // 0x801CBE08: lui         $t7, 0x801D
        ctx->r15 = S32(0X801D << 16);
            goto L_801CBE1C;
    }
    // 0x801CBE08: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CBE0C: lbu         $t7, -0x1BAC($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1BAC);
    // 0x801CBE10: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBE14: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x801CBE18: sb          $t8, -0x1BAC($at)
    MEM_B(-0X1BAC, ctx->r1) = ctx->r24;
L_801CBE1C:
    // 0x801CBE1C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBE20: addiu       $a1, $a1, -0x1BC0
    ctx->r5 = ADD32(ctx->r5, -0X1BC0);
    // 0x801CBE24: lb          $v0, 0x0($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X0);
    // 0x801CBE28: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CBE2C: addiu       $s2, $s2, -0x1BAD
    ctx->r18 = ADD32(ctx->r18, -0X1BAD);
    // 0x801CBE30: bgez        $v0, L_801CBE44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801CBE34: lui         $a0, 0x801D
        ctx->r4 = S32(0X801D << 16);
            goto L_801CBE44;
    }
    // 0x801CBE34: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBE38: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801CBE3C: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x801CBE40: lb          $v0, 0x0($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X0);
L_801CBE44:
    // 0x801CBE44: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801CBE48: bne         $at, $zero, L_801CBE54
    if (ctx->r1 != 0) {
        // 0x801CBE4C: nop
    
            goto L_801CBE54;
    }
    // 0x801CBE4C: nop

    // 0x801CBE50: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_801CBE54:
    // 0x801CBE54: jal         0x801CB460
    // 0x801CBE58: addiu       $a0, $a0, -0x1F70
    ctx->r4 = ADD32(ctx->r4, -0X1F70);
    func_801CB460_6A9920(rdram, ctx);
        goto after_2;
    // 0x801CBE58: addiu       $a0, $a0, -0x1F70
    ctx->r4 = ADD32(ctx->r4, -0X1F70);
    after_2:
    // 0x801CBE5C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x801CBE60: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x801CBE64: addiu       $v1, $v1, -0x1B9C
    ctx->r3 = ADD32(ctx->r3, -0X1B9C);
    // 0x801CBE68: addiu       $a3, $a3, -0x1F70
    ctx->r7 = ADD32(ctx->r7, -0X1F70);
    // 0x801CBE6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801CBE70:
    // 0x801CBE70: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x801CBE74: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x801CBE78: lbu         $t5, 0x2($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2);
    // 0x801CBE7C: addu        $t7, $v1, $s0
    ctx->r15 = ADD32(ctx->r3, ctx->r16);
    // 0x801CBE80: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x801CBE84: beql        $t6, $zero, L_801CBE94
    if (ctx->r14 == 0) {
        // 0x801CBE88: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_801CBE94;
    }
    goto skip_0;
    // 0x801CBE88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x801CBE8C: sb          $s1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r17;
    // 0x801CBE90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_801CBE94:
    // 0x801CBE94: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x801CBE98: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x801CBE9C: bne         $at, $zero, L_801CBE70
    if (ctx->r1 != 0) {
        // 0x801CBEA0: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_801CBE70;
    }
    // 0x801CBEA0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x801CBEA4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CBEA8: lb          $v0, -0x1BC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1BC0);
    // 0x801CBEAC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801CBEB0: addu        $t3, $a3, $t9
    ctx->r11 = ADD32(ctx->r7, ctx->r25);
    // 0x801CBEB4: lbu         $t4, 0x2($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X2);
    // 0x801CBEB8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x801CBEBC: beq         $t5, $zero, L_801CBF98
    if (ctx->r13 == 0) {
        // 0x801CBEC0: nop
    
            goto L_801CBF98;
    }
    // 0x801CBEC0: nop

    // 0x801CBEC4: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CBEC8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBECC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CBED0: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CBED4: sb          $zero, -0x1BAF($at)
    MEM_B(-0X1BAF, ctx->r1) = 0;
    // 0x801CBED8: addiu       $a2, $a2, -0x1BA0
    ctx->r6 = ADD32(ctx->r6, -0X1BA0);
    // 0x801CBEDC: addiu       $a1, $a1, -0x1BA4
    ctx->r5 = ADD32(ctx->r5, -0X1BA4);
    // 0x801CBEE0: mflo        $t6
    ctx->r14 = lo;
    // 0x801CBEE4: addu        $a0, $s3, $t6
    ctx->r4 = ADD32(ctx->r19, ctx->r14);
    // 0x801CBEE8: jal         0x800457D0
    // 0x801CBEEC: nop

    osPfsNumFiles_recomp(rdram, ctx);
        goto after_3;
    // 0x801CBEEC: nop

    after_3:
    // 0x801CBEF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CBEF4: beq         $v0, $at, L_801CBF08
    if (ctx->r2 == ctx->r1) {
        // 0x801CBEF8: lui         $t3, 0x801D
        ctx->r11 = S32(0X801D << 16);
            goto L_801CBF08;
    }
    // 0x801CBEF8: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CBEFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CBF00: bnel        $v0, $at, L_801CBF3C
    if (ctx->r2 != ctx->r1) {
        // 0x801CBF04: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801CBF3C;
    }
    goto skip_1;
    // 0x801CBF04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
L_801CBF08:
    // 0x801CBF08: lbu         $t7, 0x0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X0);
    // 0x801CBF0C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x801CBF10: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF14: bne         $t7, $zero, L_801CBF38
    if (ctx->r15 != 0) {
        // 0x801CBF18: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_801CBF38;
    }
    // 0x801CBF18: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801CBF1C: sb          $s1, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = ctx->r17;
    // 0x801CBF20: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
    // 0x801CBF24: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF28: sb          $t8, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = ctx->r24;
    // 0x801CBF2C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF30: sb          $s1, -0x1BAF($at)
    MEM_B(-0X1BAF, ctx->r1) = ctx->r17;
    // 0x801CBF34: sb          $s1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r17;
L_801CBF38:
    // 0x801CBF38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_801CBF3C:
    // 0x801CBF3C: bne         $v0, $at, L_801CBF58
    if (ctx->r2 != ctx->r1) {
        // 0x801CBF40: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_801CBF58;
    }
    // 0x801CBF40: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x801CBF44: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CBF48: lb          $t9, -0x1BC0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1BC0);
    // 0x801CBF4C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF50: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801CBF54: sb          $s1, -0x1B9C($at)
    MEM_B(-0X1B9C, ctx->r1) = ctx->r17;
L_801CBF58:
    // 0x801CBF58: lb          $t3, -0x1BC0($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1BC0);
    // 0x801CBF5C: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CBF60: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801CBF68: lbu         $t4, -0x1B9C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1B9C);
    // 0x801CBF6C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801CBF70: beq         $t4, $zero, L_801CBF90
    if (ctx->r12 == 0) {
        // 0x801CBF74: nop
    
            goto L_801CBF90;
    }
    // 0x801CBF74: nop

    // 0x801CBF78: sb          $s1, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = ctx->r17;
    // 0x801CBF7C: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
    // 0x801CBF80: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF84: sb          $t5, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = ctx->r13;
    // 0x801CBF88: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF8C: sb          $s1, -0x1BAF($at)
    MEM_B(-0X1BAF, ctx->r1) = ctx->r17;
L_801CBF90:
    // 0x801CBF90: b           L_801CBFB8
    // 0x801CBF94: nop

        goto L_801CBFB8;
    // 0x801CBF94: nop

L_801CBF98:
    // 0x801CBF98: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBF9C: sb          $s1, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = ctx->r17;
    // 0x801CBFA0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x801CBFA4: sb          $t6, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r14;
    // 0x801CBFA8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBFAC: sb          $zero, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = 0;
    // 0x801CBFB0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBFB4: sb          $s1, -0x1BAF($at)
    MEM_B(-0X1BAF, ctx->r1) = ctx->r17;
L_801CBFB8:
    // 0x801CBFB8: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CBFBC: lbu         $t7, -0x1BAF($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1BAF);
    // 0x801CBFC0: bne         $t7, $zero, L_801CC194
    if (ctx->r15 != 0) {
        // 0x801CBFC4: lui         $t8, 0x801D
        ctx->r24 = S32(0X801D << 16);
            goto L_801CC194;
    }
    // 0x801CBFC4: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CBFC8: lbu         $t8, -0x1BB0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1BB0);
    // 0x801CBFCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CBFD0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801CBFD4: beq         $t8, $zero, L_801CC08C
    if (ctx->r24 == 0) {
        // 0x801CBFD8: lui         $s2, 0x801D
        ctx->r18 = S32(0X801D << 16);
            goto L_801CC08C;
    }
    // 0x801CBFD8: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x801CBFDC: addiu       $s2, $s2, -0x1B98
    ctx->r18 = ADD32(ctx->r18, -0X1B98);
L_801CBFE0:
    // 0x801CBFE0: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CBFE4: lb          $t9, -0x1BC0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1BC0);
    // 0x801CBFE8: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CBFEC: addiu       $t5, $t5, -0x1F60
    ctx->r13 = ADD32(ctx->r13, -0X1F60);
    // 0x801CBFF0: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CBFF4: sll         $t4, $s0, 5
    ctx->r12 = S32(ctx->r16 << 5);
    // 0x801CBFF8: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x801CBFFC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CC000: mflo        $t3
    ctx->r11 = lo;
    // 0x801CC004: addu        $a0, $s3, $t3
    ctx->r4 = ADD32(ctx->r19, ctx->r11);
    // 0x801CC008: jal         0x80044E70
    // 0x801CC00C: nop

    osPfsFileState_recomp(rdram, ctx);
        goto after_4;
    // 0x801CC00C: nop

    after_4:
    // 0x801CC010: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x801CC014: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801CC018: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x801CC01C: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x801CC020: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x801CC024: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x801CC028: bne         $at, $zero, L_801CBFE0
    if (ctx->r1 != 0) {
        // 0x801CC02C: sw          $v0, 0x0($t7)
        MEM_W(0X0, ctx->r15) = ctx->r2;
            goto L_801CBFE0;
    }
    // 0x801CC02C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x801CC030: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CC034: lb          $t9, -0x1BC0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1BC0);
    // 0x801CC038: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CC03C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CC040: multu       $t9, $s4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC044: sb          $zero, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = 0;
    // 0x801CC048: addiu       $a1, $a1, -0x1BA8
    ctx->r5 = ADD32(ctx->r5, -0X1BA8);
    // 0x801CC04C: mflo        $t3
    ctx->r11 = lo;
    // 0x801CC050: addu        $a0, $s3, $t3
    ctx->r4 = ADD32(ctx->r19, ctx->r11);
    // 0x801CC054: jal         0x80045680
    // 0x801CC058: nop

    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_5;
    // 0x801CC058: nop

    after_5:
    // 0x801CC05C: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x801CC060: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CC064: addiu       $a1, $a1, -0x1B98
    ctx->r5 = ADD32(ctx->r5, -0X1B98);
    // 0x801CC068: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x801CC06C: beq         $at, $zero, L_801CC08C
    if (ctx->r1 == 0) {
        // 0x801CC070: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_801CC08C;
    }
    // 0x801CC070: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x801CC074: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x801CC078: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x801CC07C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x801CC080: beq         $t6, $zero, L_801CC08C
    if (ctx->r14 == 0) {
        // 0x801CC084: nop
    
            goto L_801CC08C;
    }
    // 0x801CC084: nop

    // 0x801CC088: sb          $t7, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r15;
L_801CC08C:
    // 0x801CC08C: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CC090: lbu         $t8, -0x1BB3($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1BB3);
    // 0x801CC094: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CC098: addiu       $a1, $a1, -0x1B98
    ctx->r5 = ADD32(ctx->r5, -0X1B98);
    // 0x801CC09C: bne         $t8, $zero, L_801CC194
    if (ctx->r24 != 0) {
        // 0x801CC0A0: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_801CC194;
    }
    // 0x801CC0A0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x801CC0A4: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CC0A8: lbu         $t9, -0x1BAE($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1BAE);
    // 0x801CC0AC: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CC0B0: bnel        $t9, $zero, L_801CC198
    if (ctx->r25 != 0) {
        // 0x801CC0B4: lw          $s0, 0x0($s5)
        ctx->r16 = MEM_W(ctx->r21, 0X0);
            goto L_801CC198;
    }
    goto skip_2;
    // 0x801CC0B4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    skip_2:
    // 0x801CC0B8: lhu         $v0, -0x1BB8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1BB8);
    // 0x801CC0BC: andi        $t3, $v0, 0x800
    ctx->r11 = ctx->r2 & 0X800;
    // 0x801CC0C0: beql        $t3, $zero, L_801CC124
    if (ctx->r11 == 0) {
        // 0x801CC0C4: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_801CC124;
    }
    goto skip_3;
    // 0x801CC0C4: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    skip_3:
    // 0x801CC0C8: lb          $t4, 0x0($s6)
    ctx->r12 = MEM_B(ctx->r22, 0X0);
    // 0x801CC0CC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801CC0D0: sb          $t5, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r13;
    // 0x801CC0D4: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x801CC0D8: bgez        $v1, L_801CC0E8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CC0DC: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_801CC0E8;
    }
    // 0x801CC0DC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x801CC0E0: b           L_801CC120
    // 0x801CC0E4: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
        goto L_801CC120;
    // 0x801CC0E4: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
L_801CC0E8:
    // 0x801CC0E8: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x801CC0EC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x801CC0F0: beq         $t8, $zero, L_801CC120
    if (ctx->r24 == 0) {
        // 0x801CC0F4: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_801CC120;
    }
    // 0x801CC0F4: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
L_801CC0F8:
    // 0x801CC0F8: sb          $t9, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r25;
    // 0x801CC0FC: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x801CC100: bgez        $v1, L_801CC110
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CC104: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_801CC110;
    }
    // 0x801CC104: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x801CC108: b           L_801CC120
    // 0x801CC10C: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
        goto L_801CC120;
    // 0x801CC10C: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
L_801CC110:
    // 0x801CC110: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x801CC114: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x801CC118: bnel        $t5, $zero, L_801CC0F8
    if (ctx->r13 != 0) {
        // 0x801CC11C: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_801CC0F8;
    }
    goto skip_4;
    // 0x801CC11C: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    skip_4:
L_801CC120:
    // 0x801CC120: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_801CC124:
    // 0x801CC124: beql        $t6, $zero, L_801CC198
    if (ctx->r14 == 0) {
        // 0x801CC128: lw          $s0, 0x0($s5)
        ctx->r16 = MEM_W(ctx->r21, 0X0);
            goto L_801CC198;
    }
    goto skip_5;
    // 0x801CC128: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    skip_5:
    // 0x801CC12C: lb          $t7, 0x0($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X0);
    // 0x801CC130: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801CC134: sb          $t8, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r24;
    // 0x801CC138: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x801CC13C: slti        $at, $v1, 0x11
    ctx->r1 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x801CC140: bne         $at, $zero, L_801CC150
    if (ctx->r1 != 0) {
        // 0x801CC144: nop
    
            goto L_801CC150;
    }
    // 0x801CC144: nop

    // 0x801CC148: sb          $zero, 0x0($s6)
    MEM_B(0X0, ctx->r22) = 0;
    // 0x801CC14C: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
L_801CC150:
    // 0x801CC150: beq         $a0, $v1, L_801CC194
    if (ctx->r4 == ctx->r3) {
        // 0x801CC154: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_801CC194;
    }
    // 0x801CC154: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x801CC158: addu        $t3, $a1, $t9
    ctx->r11 = ADD32(ctx->r5, ctx->r25);
    // 0x801CC15C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x801CC160: beq         $t4, $zero, L_801CC194
    if (ctx->r12 == 0) {
        // 0x801CC164: addiu       $t5, $v1, 0x1
        ctx->r13 = ADD32(ctx->r3, 0X1);
            goto L_801CC194;
    }
    // 0x801CC164: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
L_801CC168:
    // 0x801CC168: sb          $t5, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r13;
    // 0x801CC16C: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x801CC170: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x801CC174: bne         $at, $zero, L_801CC184
    if (ctx->r1 != 0) {
        // 0x801CC178: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_801CC184;
    }
    // 0x801CC178: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x801CC17C: b           L_801CC194
    // 0x801CC180: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
        goto L_801CC194;
    // 0x801CC180: sb          $a0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r4;
L_801CC184:
    // 0x801CC184: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x801CC188: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x801CC18C: bnel        $t8, $zero, L_801CC168
    if (ctx->r24 != 0) {
        // 0x801CC190: addiu       $t5, $v1, 0x1
        ctx->r13 = ADD32(ctx->r3, 0X1);
            goto L_801CC168;
    }
    goto skip_6;
    // 0x801CC190: addiu       $t5, $v1, 0x1
    ctx->r13 = ADD32(ctx->r3, 0X1);
    skip_6:
L_801CC194:
    // 0x801CC194: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
L_801CC198:
    // 0x801CC198: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CC19C: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x801CC1A0: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x801CC1A4: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
    // 0x801CC1A8: addiu       $t3, $t3, -0x2060
    ctx->r11 = ADD32(ctx->r11, -0X2060);
    // 0x801CC1AC: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x801CC1B0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x801CC1B4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC1B8: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x801CC1BC: addiu       $t2, $t2, -0x1FF8
    ctx->r10 = ADD32(ctx->r10, -0X1FF8);
    // 0x801CC1C0: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x801CC1C4: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x801CC1C8: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x801CC1CC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x801CC1D0: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC1D4: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x801CC1D8: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x801CC1DC: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x801CC1E0: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x801CC1E4: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x801CC1E8: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC1EC: lui         $t4, 0xF500
    ctx->r12 = S32(0XF500 << 16);
    // 0x801CC1F0: ori         $t4, $t4, 0x100
    ctx->r12 = ctx->r12 | 0X100;
    // 0x801CC1F4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x801CC1F8: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC1FC: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x801CC200: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x801CC204: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801CC208: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x801CC20C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x801CC210: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CC214: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC218: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x801CC21C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC220: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x801CC224: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x801CC228: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x801CC22C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x801CC230: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC234: lui         $t3, 0x73F
    ctx->r11 = S32(0X73F << 16);
    // 0x801CC238: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x801CC23C: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x801CC240: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    // 0x801CC244: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x801CC248: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CC24C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC250: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x801CC254: addiu       $t7, $zero, 0xEF
    ctx->r15 = ADD32(0, 0XEF);
    // 0x801CC258: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801CC25C: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x801CC260: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x801CC264: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CC268: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC26C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x801CC270: addiu       $t6, $zero, 0x13F
    ctx->r14 = ADD32(0, 0X13F);
    // 0x801CC274: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x801CC278: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x801CC27C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x801CC280: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x801CC284: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC288: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x801CC28C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801CC290: addiu       $a1, $a1, 0x6600
    ctx->r5 = ADD32(ctx->r5, 0X6600);
    // 0x801CC294: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801CC298: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801CC29C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801CC2A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CC2A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CC2A8: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x801CC2AC: jal         0x801CD910
    // 0x801CC2B0: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_6;
    // 0x801CC2B0: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_6:
    // 0x801CC2B4: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC2B8: addiu       $t9, $zero, 0x16
    ctx->r25 = ADD32(0, 0X16);
    // 0x801CC2BC: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x801CC2C0: addiu       $t4, $zero, 0x35
    ctx->r12 = ADD32(0, 0X35);
    // 0x801CC2C4: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x801CC2C8: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801CC2CC: addiu       $a1, $a1, 0x4600
    ctx->r5 = ADD32(ctx->r5, 0X4600);
    // 0x801CC2D0: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x801CC2D4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CC2D8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CC2DC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801CC2E0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801CC2E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CC2E8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC2EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CC2F0: jal         0x801CD910
    // 0x801CC2F4: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_7;
    // 0x801CC2F4: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_7:
    // 0x801CC2F8: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC2FC: ori         $at, $zero, 0x8600
    ctx->r1 = 0 | 0X8600;
    // 0x801CC300: addiu       $t7, $zero, 0x66
    ctx->r15 = ADD32(0, 0X66);
    // 0x801CC304: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x801CC308: addiu       $t9, $zero, 0x9D
    ctx->r25 = ADD32(0, 0X9D);
    // 0x801CC30C: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
    // 0x801CC310: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801CC314: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CC318: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CC31C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801CC320: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801CC324: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CC328: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CC32C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CC330: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC334: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x801CC338: jal         0x801CDB98
    // 0x801CC33C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_8;
    // 0x801CC33C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x801CC340: addiu       $t5, $zero, 0xA7
    ctx->r13 = ADD32(0, 0XA7);
    // 0x801CC344: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x801CC348: addiu       $t7, $zero, 0xEE
    ctx->r15 = ADD32(0, 0XEE);
    // 0x801CC34C: addiu       $t8, $zero, 0x33
    ctx->r24 = ADD32(0, 0X33);
    // 0x801CC350: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801CC354: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801CC358: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CC35C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CC360: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CC364: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CC368: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC36C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801CC370: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CC374: jal         0x801CDB98
    // 0x801CC378: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CDB98_6AC058(rdram, ctx);
        goto after_9;
    // 0x801CC378: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_9:
    // 0x801CC37C: addiu       $t3, $zero, 0xC6
    ctx->r11 = ADD32(0, 0XC6);
    // 0x801CC380: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x801CC384: addiu       $t5, $zero, 0xE5
    ctx->r13 = ADD32(0, 0XE5);
    // 0x801CC388: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x801CC38C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CC390: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801CC394: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801CC398: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801CC39C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801CC3A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CC3A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC3A8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC3AC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CC3B0: jal         0x801CD910
    // 0x801CC3B4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_10;
    // 0x801CC3B4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_10:
    // 0x801CC3B8: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x801CC3BC: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x801CC3C0: addiu       $t3, $zero, 0x7B
    ctx->r11 = ADD32(0, 0X7B);
    // 0x801CC3C4: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x801CC3C8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801CC3CC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801CC3D0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CC3D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CC3D8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC3DC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC3E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x801CC3E4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CC3E8: jal         0x801CDB98
    // 0x801CC3EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_11;
    // 0x801CC3EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_11:
    // 0x801CC3F0: addiu       $t5, $zero, 0xFC
    ctx->r13 = ADD32(0, 0XFC);
    // 0x801CC3F4: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x801CC3F8: addiu       $t7, $zero, 0x13B
    ctx->r15 = ADD32(0, 0X13B);
    // 0x801CC3FC: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x801CC400: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CC404: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CC408: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CC40C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CC410: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC414: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC418: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x801CC41C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x801CC420: jal         0x801CDB98
    // 0x801CC424: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_12;
    // 0x801CC424: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_12:
    // 0x801CC428: addiu       $t9, $zero, 0xE2
    ctx->r25 = ADD32(0, 0XE2);
    // 0x801CC42C: addiu       $t3, $zero, 0xDA
    ctx->r11 = ADD32(0, 0XDA);
    // 0x801CC430: addiu       $t4, $zero, 0x101
    ctx->r12 = ADD32(0, 0X101);
    // 0x801CC434: addiu       $t5, $zero, 0xE9
    ctx->r13 = ADD32(0, 0XE9);
    // 0x801CC438: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CC43C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801CC440: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801CC444: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CC448: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC44C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CC454: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CC458: jal         0x801CD910
    // 0x801CC45C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_13;
    // 0x801CC45C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_13:
    // 0x801CC460: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CC464: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_801CC468:
    // 0x801CC468: lb          $t6, 0x0($s6)
    ctx->r14 = MEM_B(ctx->r22, 0X0);
    // 0x801CC46C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC470: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC474: bne         $s1, $t6, L_801CC484
    if (ctx->r17 != ctx->r14) {
        // 0x801CC478: sll         $a2, $s1, 4
        ctx->r6 = S32(ctx->r17 << 4);
            goto L_801CC484;
    }
    // 0x801CC478: sll         $a2, $s1, 4
    ctx->r6 = S32(ctx->r17 << 4);
    // 0x801CC47C: b           L_801CC488
    // 0x801CC480: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
        goto L_801CC488;
    // 0x801CC480: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_801CC484:
    // 0x801CC484: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_801CC488:
    // 0x801CC488: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x801CC48C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x801CC490: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x801CC494: andi        $a3, $s1, 0x8
    ctx->r7 = ctx->r17 & 0X8;
    // 0x801CC498: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x801CC49C: addiu       $t3, $v0, 0x3A
    ctx->r11 = ADD32(ctx->r2, 0X3A);
    // 0x801CC4A0: addiu       $t5, $v0, 0x43
    ctx->r13 = ADD32(ctx->r2, 0X43);
    // 0x801CC4A4: andi        $t7, $a2, 0x7F
    ctx->r15 = ctx->r6 & 0X7F;
    // 0x801CC4A8: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x801CC4AC: addiu       $t4, $zero, 0x2E
    ctx->r12 = ADD32(0, 0X2E);
    // 0x801CC4B0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801CC4B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CC4B8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801CC4BC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CC4C0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801CC4C4: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x801CC4C8: jal         0x801CD68C
    // 0x801CC4CC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_14;
    // 0x801CC4CC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_14:
    // 0x801CC4D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801CC4D4: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x801CC4D8: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x801CC4DC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x801CC4E0: bne         $at, $zero, L_801CC468
    if (ctx->r1 != 0) {
        // 0x801CC4E4: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_801CC468;
    }
    // 0x801CC4E4: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801CC4E8: lb          $t7, 0x0($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X0);
    // 0x801CC4EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC4F0: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC4F4: bne         $t6, $t7, L_801CC504
    if (ctx->r14 != ctx->r15) {
        // 0x801CC4F8: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_801CC504;
    }
    // 0x801CC4F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CC4FC: b           L_801CC508
    // 0x801CC500: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
        goto L_801CC508;
    // 0x801CC500: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_801CC504:
    // 0x801CC504: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_801CC508:
    // 0x801CC508: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x801CC50C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x801CC510: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x801CC514: addiu       $t9, $v0, 0x3A
    ctx->r25 = ADD32(ctx->r2, 0X3A);
    // 0x801CC518: addiu       $t4, $v0, 0x49
    ctx->r12 = ADD32(ctx->r2, 0X49);
    // 0x801CC51C: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x801CC520: addiu       $t3, $zero, 0x3E
    ctx->r11 = ADD32(0, 0X3E);
    // 0x801CC524: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801CC528: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CC52C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801CC530: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CC534: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x801CC538: jal         0x801CD910
    // 0x801CC53C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    func_801CD910_6ABDD0(rdram, ctx);
        goto after_15;
    // 0x801CC53C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    after_15:
    // 0x801CC540: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x801CC544: lbu         $t5, -0x1BAF($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1BAF);
    // 0x801CC548: bne         $t5, $zero, L_801CC69C
    if (ctx->r13 != 0) {
        // 0x801CC54C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801CC69C;
    }
    // 0x801CC54C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801CC550:
    // 0x801CC550: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x801CC554: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CC558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CC55C: lw          $t7, -0x1B98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1B98);
    // 0x801CC560: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC564: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC568: bne         $t7, $zero, L_801CC65C
    if (ctx->r15 != 0) {
        // 0x801CC56C: sll         $t9, $s0, 5
        ctx->r25 = S32(ctx->r16 << 5);
            goto L_801CC65C;
    }
    // 0x801CC56C: sll         $t9, $s0, 5
    ctx->r25 = S32(ctx->r16 << 5);
    // 0x801CC570: lb          $t8, 0x0($s6)
    ctx->r24 = MEM_B(ctx->r22, 0X0);
    // 0x801CC574: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CC578: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x801CC57C: bne         $s0, $t8, L_801CC58C
    if (ctx->r16 != ctx->r24) {
        // 0x801CC580: addiu       $t3, $t3, -0x1F60
        ctx->r11 = ADD32(ctx->r11, -0X1F60);
            goto L_801CC58C;
    }
    // 0x801CC580: addiu       $t3, $t3, -0x1F60
    ctx->r11 = ADD32(ctx->r11, -0X1F60);
    // 0x801CC584: b           L_801CC590
    // 0x801CC588: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
        goto L_801CC590;
    // 0x801CC588: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_801CC58C:
    // 0x801CC58C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_801CC590:
    // 0x801CC590: sll         $s4, $s1, 2
    ctx->r20 = S32(ctx->r17 << 2);
    // 0x801CC594: addu        $s4, $s4, $s1
    ctx->r20 = ADD32(ctx->r20, ctx->r17);
    // 0x801CC598: sll         $s4, $s4, 1
    ctx->r20 = S32(ctx->r20 << 1);
    // 0x801CC59C: addiu       $s4, $s4, 0x3A
    ctx->r20 = ADD32(ctx->r20, 0X3A);
    // 0x801CC5A0: addu        $s2, $t9, $t3
    ctx->r18 = ADD32(ctx->r25, ctx->r11);
    // 0x801CC5A4: addiu       $t4, $zero, 0x2C
    ctx->r12 = ADD32(0, 0X2C);
    // 0x801CC5A8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CC5AC: addiu       $a2, $s2, 0xE
    ctx->r6 = ADD32(ctx->r18, 0XE);
    // 0x801CC5B0: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801CC5B4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801CC5B8: jal         0x801CCEF8
    // 0x801CC5BC: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_801CCEF8_6AB3B8(rdram, ctx);
        goto after_16;
    // 0x801CC5BC: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_16:
    // 0x801CC5C0: lbu         $t5, 0xA($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0XA);
    // 0x801CC5C4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC5C8: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC5CC: bne         $t5, $zero, L_801CC5F4
    if (ctx->r13 != 0) {
        // 0x801CC5D0: addiu       $a2, $sp, 0xCF
        ctx->r6 = ADD32(ctx->r29, 0XCF);
            goto L_801CC5F4;
    }
    // 0x801CC5D0: addiu       $a2, $sp, 0xCF
    ctx->r6 = ADD32(ctx->r29, 0XCF);
    // 0x801CC5D4: lbu         $t6, 0xB($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0XB);
    // 0x801CC5D8: bnel        $t6, $zero, L_801CC5F8
    if (ctx->r14 != 0) {
        // 0x801CC5DC: addiu       $t9, $zero, 0xCC
        ctx->r25 = ADD32(0, 0XCC);
            goto L_801CC5F8;
    }
    goto skip_7;
    // 0x801CC5DC: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    skip_7:
    // 0x801CC5E0: lbu         $t7, 0xC($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XC);
    // 0x801CC5E4: bnel        $t7, $zero, L_801CC5F8
    if (ctx->r15 != 0) {
        // 0x801CC5E8: addiu       $t9, $zero, 0xCC
        ctx->r25 = ADD32(0, 0XCC);
            goto L_801CC5F8;
    }
    goto skip_8;
    // 0x801CC5E8: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
    skip_8:
    // 0x801CC5EC: lbu         $t8, 0xD($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0XD);
    // 0x801CC5F0: beq         $t8, $zero, L_801CC60C
    if (ctx->r24 == 0) {
        // 0x801CC5F4: addiu       $t9, $zero, 0xCC
        ctx->r25 = ADD32(0, 0XCC);
            goto L_801CC60C;
    }
L_801CC5F4:
    // 0x801CC5F4: addiu       $t9, $zero, 0xCC
    ctx->r25 = ADD32(0, 0XCC);
L_801CC5F8:
    // 0x801CC5F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CC5FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801CC600: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801CC604: jal         0x801CCEF8
    // 0x801CC608: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_801CCEF8_6AB3B8(rdram, ctx);
        goto after_17;
    // 0x801CC608: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_17:
L_801CC60C:
    // 0x801CC60C: addiu       $t3, $zero, 0xD6
    ctx->r11 = ADD32(0, 0XD6);
    // 0x801CC610: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CC614: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC618: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC61C: addiu       $a2, $s2, 0xA
    ctx->r6 = ADD32(ctx->r18, 0XA);
    // 0x801CC620: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801CC624: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801CC628: jal         0x801CCEF8
    // 0x801CC62C: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    func_801CCEF8_6AB3B8(rdram, ctx);
        goto after_18;
    // 0x801CC62C: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    after_18:
    // 0x801CC630: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x801CC634: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC638: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC63C: addiu       $a2, $a2, 0xFF
    ctx->r6 = ADD32(ctx->r6, 0XFF);
    // 0x801CC640: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x801CC644: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x801CC648: andi        $a2, $t5, 0xFFFF
    ctx->r6 = ctx->r13 & 0XFFFF;
    // 0x801CC64C: addiu       $a3, $zero, 0x108
    ctx->r7 = ADD32(0, 0X108);
    // 0x801CC650: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x801CC654: jal         0x801CD25C
    // 0x801CC658: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    func_801CD25C_6AB71C(rdram, ctx);
        goto after_19;
    // 0x801CC658: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    after_19:
L_801CC65C:
    // 0x801CC65C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801CC660: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801CC664: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x801CC668: bne         $at, $zero, L_801CC550
    if (ctx->r1 != 0) {
        // 0x801CC66C: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_801CC550;
    }
    // 0x801CC66C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x801CC670: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CC674: lhu         $a2, -0x1BA6($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X1BA6);
    // 0x801CC678: addiu       $t3, $zero, 0xDA
    ctx->r11 = ADD32(0, 0XDA);
    // 0x801CC67C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CC680: sra         $t8, $a2, 8
    ctx->r24 = S32(SIGNED(ctx->r6) >> 8);
    // 0x801CC684: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801CC688: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC68C: lw          $a1, 0xD4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD4);
    // 0x801CC690: addiu       $a3, $zero, 0x104
    ctx->r7 = ADD32(0, 0X104);
    // 0x801CC694: jal         0x801CD25C
    // 0x801CC698: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_801CD25C_6AB71C(rdram, ctx);
        goto after_20;
    // 0x801CC698: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_20:
L_801CC69C:
    // 0x801CC69C: lb          $v0, 0x0($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X0);
    // 0x801CC6A0: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x801CC6A4: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x801CC6A8: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x801CC6AC: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x801CC6B0: sll         $v0, $t5, 1
    ctx->r2 = S32(ctx->r13 << 1);
    // 0x801CC6B4: addiu       $t6, $v0, 0x3C
    ctx->r14 = ADD32(ctx->r2, 0X3C);
    // 0x801CC6B8: addiu       $t8, $v0, 0x45
    ctx->r24 = ADD32(ctx->r2, 0X45);
    // 0x801CC6BC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CC6C0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801CC6C4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CC6C8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CC6CC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CC6D0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CC6D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC6D8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC6DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801CC6E0: jal         0x801CD68C
    // 0x801CC6E4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_21;
    // 0x801CC6E4: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_21:
    // 0x801CC6E8: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CC6EC: lb          $v0, -0x1BC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1BC0);
    // 0x801CC6F0: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CC6F4: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x801CC6F8: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x801CC6FC: lbu         $t3, -0x1B9C($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1B9C);
    // 0x801CC700: beql        $t3, $zero, L_801CC718
    if (ctx->r11 == 0) {
        // 0x801CC704: sll         $s0, $v0, 2
        ctx->r16 = S32(ctx->r2 << 2);
            goto L_801CC718;
    }
    goto skip_9;
    // 0x801CC704: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    skip_9:
    // 0x801CC708: lbu         $t4, -0x1BB4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1BB4);
    // 0x801CC70C: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x801CC710: beq         $t5, $zero, L_801CC780
    if (ctx->r13 == 0) {
        // 0x801CC714: sll         $s0, $v0, 2
        ctx->r16 = S32(ctx->r2 << 2);
            goto L_801CC780;
    }
    // 0x801CC714: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
L_801CC718:
    // 0x801CC718: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x801CC71C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x801CC720: addiu       $s0, $s0, 0x71
    ctx->r16 = ADD32(ctx->r16, 0X71);
    // 0x801CC724: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x801CC728: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x801CC72C: bne         $at, $zero, L_801CC740
    if (ctx->r1 != 0) {
        // 0x801CC730: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_801CC740;
    }
    // 0x801CC730: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x801CC734: addiu       $s0, $t6, 0x8
    ctx->r16 = ADD32(ctx->r14, 0X8);
    // 0x801CC738: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801CC73C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_801CC740:
    // 0x801CC740: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x801CC744: addiu       $t9, $s0, 0xF
    ctx->r25 = ADD32(ctx->r16, 0XF);
    // 0x801CC748: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x801CC74C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CC750: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801CC754: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801CC758: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CC75C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CC760: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC764: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CC76C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x801CC770: jal         0x801CD68C
    // 0x801CC774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_22;
    // 0x801CC774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_22:
    // 0x801CC778: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CC77C: lb          $v0, -0x1BC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1BC0);
L_801CC780:
    // 0x801CC780: addiu       $t5, $zero, 0xB4
    ctx->r13 = ADD32(0, 0XB4);
    // 0x801CC784: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x801CC788: addiu       $t7, $zero, 0xC3
    ctx->r15 = ADD32(0, 0XC3);
    // 0x801CC78C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x801CC790: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CC794: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801CC798: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CC79C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CC7A0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CC7A4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CC7A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC7AC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC7B0: sll         $a2, $v0, 4
    ctx->r6 = S32(ctx->r2 << 4);
    // 0x801CC7B4: jal         0x801CD68C
    // 0x801CC7B8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_23;
    // 0x801CC7B8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_23:
    // 0x801CC7BC: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x801CC7C0: lb          $a2, -0x1BC0($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X1BC0);
    // 0x801CC7C4: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x801CC7C8: addiu       $t5, $zero, 0x21
    ctx->r13 = ADD32(0, 0X21);
    // 0x801CC7CC: addiu       $t6, $zero, 0xC3
    ctx->r14 = ADD32(0, 0XC3);
    // 0x801CC7D0: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x801CC7D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CC7D8: sll         $t3, $a2, 4
    ctx->r11 = S32(ctx->r6 << 4);
    // 0x801CC7DC: addiu       $a2, $t3, 0x40
    ctx->r6 = ADD32(ctx->r11, 0X40);
    // 0x801CC7E0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801CC7E4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801CC7E8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801CC7EC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801CC7F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CC7F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC7F8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC7FC: jal         0x801CD68C
    // 0x801CC800: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_24;
    // 0x801CC800: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_24:
    // 0x801CC804: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CC808: lb          $v0, -0x1BC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1BC0);
    // 0x801CC80C: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801CC810: addiu       $t3, $t3, -0x1F70
    ctx->r11 = ADD32(ctx->r11, -0X1F70);
    // 0x801CC814: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801CC818: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
    // 0x801CC81C: lbu         $t4, 0x3($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X3);
    // 0x801CC820: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC824: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC828: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x801CC82C: beq         $t5, $zero, L_801CC86C
    if (ctx->r13 == 0) {
        // 0x801CC830: addiu       $a2, $zero, 0x70
        ctx->r6 = ADD32(0, 0X70);
            goto L_801CC86C;
    }
    // 0x801CC830: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x801CC834: addiu       $t6, $zero, 0xCA
    ctx->r14 = ADD32(0, 0XCA);
    // 0x801CC838: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x801CC83C: addiu       $t8, $zero, 0xD9
    ctx->r24 = ADD32(0, 0XD9);
    // 0x801CC840: addiu       $t9, $zero, 0x24
    ctx->r25 = ADD32(0, 0X24);
    // 0x801CC844: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CC848: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801CC84C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801CC850: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801CC854: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CC858: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CC85C: jal         0x801CD68C
    // 0x801CC860: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_25;
    // 0x801CC860: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_25:
    // 0x801CC864: b           L_801CC8C4
    // 0x801CC868: nop

        goto L_801CC8C4;
    // 0x801CC868: nop

L_801CC86C:
    // 0x801CC86C: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x801CC870: lui         $t6, 0x801D
    ctx->r14 = S32(0X801D << 16);
    // 0x801CC874: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x801CC878: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x801CC87C: beq         $t5, $zero, L_801CC88C
    if (ctx->r13 == 0) {
        // 0x801CC880: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_801CC88C;
    }
    // 0x801CC880: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC884: lbu         $t6, -0x1B9C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1B9C);
    // 0x801CC888: beq         $t6, $zero, L_801CC8C4
    if (ctx->r14 == 0) {
        // 0x801CC88C: addiu       $t7, $zero, 0xCB
        ctx->r15 = ADD32(0, 0XCB);
            goto L_801CC8C4;
    }
L_801CC88C:
    // 0x801CC88C: addiu       $t7, $zero, 0xCB
    ctx->r15 = ADD32(0, 0XCB);
    // 0x801CC890: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x801CC894: addiu       $t9, $zero, 0xDA
    ctx->r25 = ADD32(0, 0XDA);
    // 0x801CC898: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x801CC89C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CC8A0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801CC8A4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801CC8A8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CC8AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CC8B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CC8B4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CC8B8: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x801CC8BC: jal         0x801CD68C
    // 0x801CC8C0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_26;
    // 0x801CC8C0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_26:
L_801CC8C4:
    // 0x801CC8C4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CC8C8: lbu         $v0, -0x1BAE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1BAE);
    // 0x801CC8CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CC8D0: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x801CC8D4: bne         $v0, $at, L_801CCA98
    if (ctx->r2 != ctx->r1) {
        // 0x801CC8D8: addiu       $s3, $s3, -0x3A34
        ctx->r19 = ADD32(ctx->r19, -0X3A34);
            goto L_801CCA98;
    }
    // 0x801CC8D8: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
    // 0x801CC8DC: lb          $v1, 0x0($s6)
    ctx->r3 = MEM_B(ctx->r22, 0X0);
    // 0x801CC8E0: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CC8E4: addiu       $s4, $s4, -0x1FD0
    ctx->r20 = ADD32(ctx->r20, -0X1FD0);
    // 0x801CC8E8: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x801CC8EC: bne         $at, $zero, L_801CC900
    if (ctx->r1 != 0) {
        // 0x801CC8F0: lui         $s6, 0xFA00
        ctx->r22 = S32(0XFA00 << 16);
            goto L_801CC900;
    }
    // 0x801CC8F0: lui         $s6, 0xFA00
    ctx->r22 = S32(0XFA00 << 16);
    // 0x801CC8F4: slti        $at, $v1, 0xD
    ctx->r1 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x801CC8F8: bnel        $at, $zero, L_801CC90C
    if (ctx->r1 != 0) {
        // 0x801CC8FC: slti        $at, $v1, 0x9
        ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
            goto L_801CC90C;
    }
    goto skip_10;
    // 0x801CC8FC: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    skip_10:
L_801CC900:
    // 0x801CC900: b           L_801CC91C
    // 0x801CC904: addiu       $s1, $zero, 0x6A
    ctx->r17 = ADD32(0, 0X6A);
        goto L_801CC91C;
    // 0x801CC904: addiu       $s1, $zero, 0x6A
    ctx->r17 = ADD32(0, 0X6A);
    // 0x801CC908: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
L_801CC90C:
    // 0x801CC90C: bne         $at, $zero, L_801CC91C
    if (ctx->r1 != 0) {
        // 0x801CC910: addiu       $s1, $zero, 0x90
        ctx->r17 = ADD32(0, 0X90);
            goto L_801CC91C;
    }
    // 0x801CC910: addiu       $s1, $zero, 0x90
    ctx->r17 = ADD32(0, 0X90);
    // 0x801CC914: b           L_801CC91C
    // 0x801CC918: addiu       $s1, $zero, 0x44
    ctx->r17 = ADD32(0, 0X44);
        goto L_801CC91C;
    // 0x801CC918: addiu       $s1, $zero, 0x44
    ctx->r17 = ADD32(0, 0X44);
L_801CC91C:
    // 0x801CC91C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC920: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801CC924: addiu       $t8, $zero, -0x20
    ctx->r24 = ADD32(0, -0X20);
    // 0x801CC928: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x801CC92C: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x801CC930: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x801CC934: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x801CC938: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x801CC93C: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x801CC940: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CC944: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CC948: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x801CC94C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CC950: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x801CC954: addiu       $s2, $s1, 0x3F
    ctx->r18 = ADD32(ctx->r17, 0X3F);
    // 0x801CC958: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CC95C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801CC960: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801CC964: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801CC968: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x801CC96C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CC970: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801CC974: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC978: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x801CC97C: jal         0x801CD68C
    // 0x801CC980: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_27;
    // 0x801CC980: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_27:
    // 0x801CC984: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CC988: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801CC98C: addiu       $t8, $zero, 0x88
    ctx->r24 = ADD32(0, 0X88);
    // 0x801CC990: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x801CC994: sw          $t5, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r13;
    // 0x801CC998: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x801CC99C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x801CC9A0: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x801CC9A4: addiu       $t9, $s1, 0x8
    ctx->r25 = ADD32(ctx->r17, 0X8);
    // 0x801CC9A8: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x801CC9AC: addiu       $t3, $zero, 0xB7
    ctx->r11 = ADD32(0, 0XB7);
    // 0x801CC9B0: addiu       $t4, $s1, 0x17
    ctx->r12 = ADD32(ctx->r17, 0X17);
    // 0x801CC9B4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801CC9B8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801CC9BC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801CC9C0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CC9C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CC9C8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801CC9CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC9D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CC9D4: jal         0x801CDB98
    // 0x801CC9D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_28;
    // 0x801CC9D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x801CC9DC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x801CC9E0: addiu       $t7, $zero, 0xBF
    ctx->r15 = ADD32(0, 0XBF);
    // 0x801CC9E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CC9E8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801CC9EC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CC9F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CC9F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CC9F8: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801CC9FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCA00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801CCA04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x801CCA08: jal         0x801CDB98
    // 0x801CCA0C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_29;
    // 0x801CCA0C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_29:
    // 0x801CCA10: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x801CCA14: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CCA18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CCA1C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801CCA20: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801CCA24: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CCA28: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCA2C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801CCA30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCA34: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801CCA38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x801CCA3C: jal         0x801CDB98
    // 0x801CCA40: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_30;
    // 0x801CCA40: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_30:
    // 0x801CCA44: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CCA48: lbu         $v0, -0x1BAC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1BAC);
    // 0x801CCA4C: addiu       $t7, $s1, 0x28
    ctx->r15 = ADD32(ctx->r17, 0X28);
    // 0x801CCA50: addiu       $t9, $s1, 0x37
    ctx->r25 = ADD32(ctx->r17, 0X37);
    // 0x801CCA54: sll         $t5, $v0, 6
    ctx->r13 = S32(ctx->r2 << 6);
    // 0x801CCA58: addiu       $t6, $t5, 0x60
    ctx->r14 = ADD32(ctx->r13, 0X60);
    // 0x801CCA5C: addiu       $t8, $t5, 0x6F
    ctx->r24 = ADD32(ctx->r13, 0X6F);
    // 0x801CCA60: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CCA64: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801CCA68: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801CCA6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CCA70: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x801CCA74: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801CCA78: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CCA7C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCA80: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CCA84: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801CCA88: jal         0x801CD68C
    // 0x801CCA8C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_31;
    // 0x801CCA8C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_31:
    // 0x801CCA90: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CCA94: lbu         $v0, -0x1BAE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1BAE);
L_801CCA98:
    // 0x801CCA98: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x801CCA9C: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x801CCAA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CCAA4: addiu       $s4, $s4, -0x1FD0
    ctx->r20 = ADD32(ctx->r20, -0X1FD0);
    // 0x801CCAA8: addiu       $s3, $s3, -0x3A34
    ctx->r19 = ADD32(ctx->r19, -0X3A34);
    // 0x801CCAAC: bne         $v0, $at, L_801CCBC8
    if (ctx->r2 != ctx->r1) {
        // 0x801CCAB0: lui         $s6, 0xFA00
        ctx->r22 = S32(0XFA00 << 16);
            goto L_801CCBC8;
    }
    // 0x801CCAB0: lui         $s6, 0xFA00
    ctx->r22 = S32(0XFA00 << 16);
    // 0x801CCAB4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CCAB8: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x801CCABC: addiu       $t7, $zero, -0x20
    ctx->r15 = ADD32(0, -0X20);
    // 0x801CCAC0: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x801CCAC4: sw          $t4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r12;
    // 0x801CCAC8: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x801CCACC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x801CCAD0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x801CCAD4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CCAD8: addiu       $t4, $zero, 0x97
    ctx->r12 = ADD32(0, 0X97);
    // 0x801CCADC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CCAE0: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x801CCAE4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CCAE8: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x801CCAEC: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x801CCAF0: addiu       $t9, $zero, 0x70
    ctx->r25 = ADD32(0, 0X70);
    // 0x801CCAF4: addiu       $t3, $zero, 0x10F
    ctx->r11 = ADD32(0, 0X10F);
    // 0x801CCAF8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801CCAFC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801CCB00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801CCB04: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801CCB08: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801CCB0C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801CCB10: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCB14: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x801CCB18: jal         0x801CD68C
    // 0x801CCB1C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_32;
    // 0x801CCB1C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_32:
    // 0x801CCB20: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CCB24: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x801CCB28: ori         $at, $zero, 0x9800
    ctx->r1 = 0 | 0X9800;
    // 0x801CCB2C: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x801CCB30: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    // 0x801CCB34: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CCB38: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x801CCB3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CCB40: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x801CCB44: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x801CCB48: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x801CCB4C: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x801CCB50: addiu       $t4, $zero, 0xAF
    ctx->r12 = ADD32(0, 0XAF);
    // 0x801CCB54: addiu       $t5, $zero, 0x97
    ctx->r13 = ADD32(0, 0X97);
    // 0x801CCB58: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
    // 0x801CCB5C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CCB60: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CCB64: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801CCB68: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801CCB6C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CCB70: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801CCB74: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCB78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCB7C: jal         0x801CDB98
    // 0x801CCB80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_33;
    // 0x801CCB80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_33:
    // 0x801CCB84: addiu       $t7, $zero, 0xB0
    ctx->r15 = ADD32(0, 0XB0);
    // 0x801CCB88: addiu       $t8, $zero, 0x70
    ctx->r24 = ADD32(0, 0X70);
    // 0x801CCB8C: addiu       $t9, $zero, 0x10F
    ctx->r25 = ADD32(0, 0X10F);
    // 0x801CCB90: addiu       $t3, $zero, 0x97
    ctx->r11 = ADD32(0, 0X97);
    // 0x801CCB94: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CCB98: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801CCB9C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801CCBA0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CCBA4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801CCBA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801CCBAC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCBB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CCBB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCBB8: jal         0x801CDB98
    // 0x801CCBBC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_801CDB98_6AC058(rdram, ctx);
        goto after_34;
    // 0x801CCBBC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_34:
    // 0x801CCBC0: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CCBC4: lbu         $v0, -0x1BAE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1BAE);
L_801CCBC8:
    // 0x801CCBC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801CCBCC: bne         $v0, $at, L_801CCC5C
    if (ctx->r2 != ctx->r1) {
        // 0x801CCBD0: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_801CCC5C;
    }
    // 0x801CCBD0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCBD4: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x801CCBD8: ori         $at, $zero, 0xB200
    ctx->r1 = 0 | 0XB200;
    // 0x801CCBDC: addiu       $t5, $zero, 0x38
    ctx->r13 = ADD32(0, 0X38);
    // 0x801CCBE0: addiu       $t6, $zero, 0x70
    ctx->r14 = ADD32(0, 0X70);
    // 0x801CCBE4: addiu       $t7, $zero, 0xB7
    ctx->r15 = ADD32(0, 0XB7);
    // 0x801CCBE8: addiu       $t8, $zero, 0x97
    ctx->r24 = ADD32(0, 0X97);
    // 0x801CCBEC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CCBF0: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
    // 0x801CCBF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CCBF8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801CCBFC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CCC00: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CCC04: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CCC08: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CCC0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCC10: jal         0x801CDB98
    // 0x801CCC14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_35;
    // 0x801CCC14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_35:
    // 0x801CCC18: addiu       $t3, $zero, 0xB8
    ctx->r11 = ADD32(0, 0XB8);
    // 0x801CCC1C: addiu       $t4, $zero, 0x70
    ctx->r12 = ADD32(0, 0X70);
    // 0x801CCC20: addiu       $t5, $zero, 0x107
    ctx->r13 = ADD32(0, 0X107);
    // 0x801CCC24: addiu       $t6, $zero, 0x97
    ctx->r14 = ADD32(0, 0X97);
    // 0x801CCC28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CCC2C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801CCC30: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801CCC34: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801CCC38: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801CCC3C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CCC40: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCC44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CCC48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCC4C: jal         0x801CDB98
    // 0x801CCC50: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_801CDB98_6AC058(rdram, ctx);
        goto after_36;
    // 0x801CCC50: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_36:
    // 0x801CCC54: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x801CCC58: lbu         $v0, -0x1BAE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1BAE);
L_801CCC5C:
    // 0x801CCC5C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CCC60: bne         $v0, $at, L_801CCD70
    if (ctx->r2 != ctx->r1) {
        // 0x801CCC64: lui         $t9, 0x600
        ctx->r25 = S32(0X600 << 16);
            goto L_801CCD70;
    }
    // 0x801CCC64: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x801CCC68: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CCC6C: addiu       $t4, $zero, -0x20
    ctx->r12 = ADD32(0, -0X20);
    // 0x801CCC70: addiu       $t5, $zero, 0x34
    ctx->r13 = ADD32(0, 0X34);
    // 0x801CCC74: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801CCC78: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x801CCC7C: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x801CCC80: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CCC84: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x801CCC88: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CCC8C: addiu       $t8, $zero, 0x97
    ctx->r24 = ADD32(0, 0X97);
    // 0x801CCC90: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x801CCC94: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x801CCC98: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801CCC9C: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x801CCCA0: addiu       $t6, $zero, 0x70
    ctx->r14 = ADD32(0, 0X70);
    // 0x801CCCA4: addiu       $t7, $zero, 0x10B
    ctx->r15 = ADD32(0, 0X10B);
    // 0x801CCCA8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CCCAC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801CCCB0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801CCCB4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CCCB8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801CCCBC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801CCCC0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCCC4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x801CCCC8: jal         0x801CD68C
    // 0x801CCCCC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_37;
    // 0x801CCCCC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_37:
    // 0x801CCCD0: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CCCD4: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x801CCCD8: ori         $at, $zero, 0xCC00
    ctx->r1 = 0 | 0XCC00;
    // 0x801CCCDC: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x801CCCE0: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x801CCCE4: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x801CCCE8: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x801CCCEC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CCCF0: addiu       $t6, $zero, 0x34
    ctx->r14 = ADD32(0, 0X34);
    // 0x801CCCF4: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x801CCCF8: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x801CCCFC: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x801CCD00: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x801CCD04: addiu       $t9, $zero, 0x97
    ctx->r25 = ADD32(0, 0X97);
    // 0x801CCD08: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
    // 0x801CCD0C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CCD10: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801CCD14: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801CCD18: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CCD1C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801CCD20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CCD24: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCD28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCD2C: jal         0x801CDB98
    // 0x801CCD30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CDB98_6AC058(rdram, ctx);
        goto after_38;
    // 0x801CCD30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_38:
    // 0x801CCD34: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x801CCD38: addiu       $t5, $zero, 0x70
    ctx->r13 = ADD32(0, 0X70);
    // 0x801CCD3C: addiu       $t6, $zero, 0x10B
    ctx->r14 = ADD32(0, 0X10B);
    // 0x801CCD40: addiu       $t7, $zero, 0x97
    ctx->r15 = ADD32(0, 0X97);
    // 0x801CCD44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CCD48: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801CCD4C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801CCD50: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801CCD54: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801CCD58: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CCD5C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCD60: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801CCD64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CCD68: jal         0x801CDB98
    // 0x801CCD6C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_801CDB98_6AC058(rdram, ctx);
        goto after_39;
    // 0x801CCD6C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_39:
L_801CCD70:
    // 0x801CCD70: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x801CCD74: lbu         $t9, -0x1BB3($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1BB3);
    // 0x801CCD78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CCD7C: lui         $s1, 0x801D
    ctx->r17 = S32(0X801D << 16);
    // 0x801CCD80: bne         $t9, $at, L_801CCE18
    if (ctx->r25 != ctx->r1) {
        // 0x801CCD84: addiu       $s1, $s1, -0x1BB2
        ctx->r17 = ADD32(ctx->r17, -0X1BB2);
            goto L_801CCE18;
    }
    // 0x801CCD84: addiu       $s1, $s1, -0x1BB2
    ctx->r17 = ADD32(ctx->r17, -0X1BB2);
    // 0x801CCD88: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CCD8C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x801CCD90: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x801CCD94: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x801CCD98: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x801CCD9C: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x801CCDA0: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x801CCDA4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x801CCDA8: addiu       $t3, $zero, 0xEF
    ctx->r11 = ADD32(0, 0XEF);
    // 0x801CCDAC: addiu       $t9, $zero, 0x13F
    ctx->r25 = ADD32(0, 0X13F);
    // 0x801CCDB0: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x801CCDB4: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
    // 0x801CCDB8: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x801CCDBC: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    // 0x801CCDC0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCDC4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x801CCDC8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801CCDCC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801CCDD0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CCDD4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CCDD8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801CCDDC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801CCDE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CCDE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CCDE8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CCDEC: jal         0x801CD68C
    // 0x801CCDF0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_40;
    // 0x801CCDF0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_40:
    // 0x801CCDF4: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x801CCDF8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CCDFC: addiu       $t5, $t4, -0x8
    ctx->r13 = ADD32(ctx->r12, -0X8);
    // 0x801CCE00: sh          $t5, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r13;
    // 0x801CCE04: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    // 0x801CCE08: bgtz        $t6, L_801CCE18
    if (SIGNED(ctx->r14) > 0) {
        // 0x801CCE0C: nop
    
            goto L_801CCE18;
    }
    // 0x801CCE0C: nop

    // 0x801CCE10: sb          $zero, -0x1BB3($at)
    MEM_B(-0X1BB3, ctx->r1) = 0;
    // 0x801CCE14: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_801CCE18:
    // 0x801CCE18: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801CCE1C: lbu         $t7, -0x1BB3($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1BB3);
    // 0x801CCE20: lui         $s1, 0x801D
    ctx->r17 = S32(0X801D << 16);
    // 0x801CCE24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CCE28: bne         $t7, $at, L_801CCECC
    if (ctx->r15 != ctx->r1) {
        // 0x801CCE2C: addiu       $s1, $s1, -0x1BB2
        ctx->r17 = ADD32(ctx->r17, -0X1BB2);
            goto L_801CCECC;
    }
    // 0x801CCE2C: addiu       $s1, $s1, -0x1BB2
    ctx->r17 = ADD32(ctx->r17, -0X1BB2);
    // 0x801CCE30: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x801CCE34: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x801CCE38: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x801CCE3C: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x801CCE40: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
    // 0x801CCE44: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x801CCE48: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CCE4C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x801CCE50: addiu       $t8, $zero, 0xEF
    ctx->r24 = ADD32(0, 0XEF);
    // 0x801CCE54: addiu       $t7, $zero, 0x13F
    ctx->r15 = ADD32(0, 0X13F);
    // 0x801CCE58: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x801CCE5C: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x801CCE60: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x801CCE64: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x801CCE68: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CCE6C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x801CCE70: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x801CCE74: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x801CCE78: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CCE7C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CCE80: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801CCE84: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801CCE88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801CCE8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CCE90: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x801CCE94: jal         0x801CD68C
    // 0x801CCE98: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_801CD68C_6ABB4C(rdram, ctx);
        goto after_41;
    // 0x801CCE98: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_41:
    // 0x801CCE9C: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x801CCEA0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x801CCEA4: bne         $v1, $v0, L_801CCEB4
    if (ctx->r3 != ctx->r2) {
        // 0x801CCEA8: addiu       $t9, $v0, 0x8
        ctx->r25 = ADD32(ctx->r2, 0X8);
            goto L_801CCEB4;
    }
    // 0x801CCEA8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CCEAC: b           L_801CCED0
    // 0x801CCEB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801CCED0;
    // 0x801CCEB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801CCEB4:
    // 0x801CCEB4: sh          $t9, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r25;
    // 0x801CCEB8: lh          $t3, 0x0($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X0);
    // 0x801CCEBC: slti        $at, $t3, 0xFF
    ctx->r1 = SIGNED(ctx->r11) < 0XFF ? 1 : 0;
    // 0x801CCEC0: bnel        $at, $zero, L_801CCED0
    if (ctx->r1 != 0) {
        // 0x801CCEC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801CCED0;
    }
    goto skip_11;
    // 0x801CCEC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_11:
    // 0x801CCEC8: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_801CCECC:
    // 0x801CCECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CCED0:
    // 0x801CCED0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801CCED4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801CCED8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801CCEDC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801CCEE0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801CCEE4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801CCEE8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x801CCEEC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x801CCEF0: jr          $ra
    // 0x801CCEF4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x801CCEF4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_801CD25C_6AB71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD25C: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x801CD260: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CD264: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x801CD268: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x801CD26C: mflo        $v0
    ctx->r2 = lo;
    // 0x801CD270: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801CD274: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x801CD278: div         $zero, $t6, $t1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r9)));
    // 0x801CD27C: mflo        $t8
    ctx->r24 = lo;
    // 0x801CD280: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x801CD284: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x801CD288: div         $zero, $t8, $t1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r9)));
    // 0x801CD28C: mfhi        $t9
    ctx->r25 = hi;
    // 0x801CD290: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801CD294: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801CD298: div         $zero, $v1, $t1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r9)));
    // 0x801CD29C: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x801CD2A0: mfhi        $t6
    ctx->r14 = hi;
    // 0x801CD2A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CD2A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CD2AC: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x801CD2B0: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x801CD2B4: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x801CD2B8: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x801CD2BC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x801CD2C0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x801CD2C4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x801CD2C8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x801CD2CC: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x801CD2D0: bne         $t1, $zero, L_801CD2DC
    if (ctx->r9 != 0) {
        // 0x801CD2D4: nop
    
            goto L_801CD2DC;
    }
    // 0x801CD2D4: nop

    // 0x801CD2D8: break       7
    do_break(2149372632);
L_801CD2DC:
    // 0x801CD2DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CD2E0: bne         $t1, $at, L_801CD2F4
    if (ctx->r9 != ctx->r1) {
        // 0x801CD2E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CD2F4;
    }
    // 0x801CD2E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD2E8: bne         $v1, $at, L_801CD2F4
    if (ctx->r3 != ctx->r1) {
        // 0x801CD2EC: nop
    
            goto L_801CD2F4;
    }
    // 0x801CD2EC: nop

    // 0x801CD2F0: break       6
    do_break(2149372656);
L_801CD2F4:
    // 0x801CD2F4: sh          $t9, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r25;
    // 0x801CD2F8: bne         $t1, $zero, L_801CD304
    if (ctx->r9 != 0) {
        // 0x801CD2FC: nop
    
            goto L_801CD304;
    }
    // 0x801CD2FC: nop

    // 0x801CD300: break       7
    do_break(2149372672);
L_801CD304:
    // 0x801CD304: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CD308: bne         $t1, $at, L_801CD31C
    if (ctx->r9 != ctx->r1) {
        // 0x801CD30C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CD31C;
    }
    // 0x801CD30C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD310: bne         $t8, $at, L_801CD31C
    if (ctx->r24 != ctx->r1) {
        // 0x801CD314: nop
    
            goto L_801CD31C;
    }
    // 0x801CD314: nop

    // 0x801CD318: break       6
    do_break(2149372696);
L_801CD31C:
    // 0x801CD31C: sh          $t6, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r14;
    // 0x801CD320: bne         $t1, $zero, L_801CD32C
    if (ctx->r9 != 0) {
        // 0x801CD324: nop
    
            goto L_801CD32C;
    }
    // 0x801CD324: nop

    // 0x801CD328: break       7
    do_break(2149372712);
L_801CD32C:
    // 0x801CD32C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CD330: bne         $t1, $at, L_801CD344
    if (ctx->r9 != ctx->r1) {
        // 0x801CD334: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CD344;
    }
    // 0x801CD334: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD338: bne         $v1, $at, L_801CD344
    if (ctx->r3 != ctx->r1) {
        // 0x801CD33C: nop
    
            goto L_801CD344;
    }
    // 0x801CD33C: nop

    // 0x801CD340: break       6
    do_break(2149372736);
L_801CD344:
    // 0x801CD344: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x801CD348: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x801CD34C: bne         $v0, $zero, L_801CD358
    if (ctx->r2 != 0) {
        // 0x801CD350: sh          $v0, 0xA0($sp)
        MEM_H(0XA0, ctx->r29) = ctx->r2;
            goto L_801CD358;
    }
    // 0x801CD350: sh          $v0, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r2;
    // 0x801CD354: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_801CD358:
    // 0x801CD358: bne         $t0, $zero, L_801CD36C
    if (ctx->r8 != 0) {
        // 0x801CD35C: lhu         $t7, 0xA2($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0XA2);
            goto L_801CD36C;
    }
    // 0x801CD35C: lhu         $t7, 0xA2($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XA2);
    // 0x801CD360: bnel        $t7, $zero, L_801CD370
    if (ctx->r15 != 0) {
        // 0x801CD364: slti        $at, $t5, 0x3
        ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
            goto L_801CD370;
    }
    goto skip_0;
    // 0x801CD364: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    skip_0:
    // 0x801CD368: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
L_801CD36C:
    // 0x801CD36C: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
L_801CD370:
    // 0x801CD370: beq         $at, $zero, L_801CD65C
    if (ctx->r1 == 0) {
        // 0x801CD374: or          $t4, $t5, $zero
        ctx->r12 = ctx->r13 | 0;
            goto L_801CD65C;
    }
    // 0x801CD374: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x801CD378: lw          $s5, 0xBC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XBC);
    // 0x801CD37C: lw          $s3, 0xB8($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XB8);
    // 0x801CD380: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801CD384: andi        $t8, $s5, 0xF
    ctx->r24 = ctx->r21 & 0XF;
    // 0x801CD388: sll         $t9, $t8, 20
    ctx->r25 = S32(ctx->r24 << 20);
    // 0x801CD38C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CD390: addiu       $t8, $s3, 0x9
    ctx->r24 = ADD32(ctx->r19, 0X9);
    // 0x801CD394: sll         $s1, $s3, 18
    ctx->r17 = S32(ctx->r19 << 18);
    // 0x801CD398: sra         $t7, $s1, 16
    ctx->r15 = S32(SIGNED(ctx->r17) >> 16);
    // 0x801CD39C: sll         $t9, $t8, 18
    ctx->r25 = S32(ctx->r24 << 18);
    // 0x801CD3A0: lui         $ra, 0x701
    ctx->r31 = S32(0X701 << 16);
    // 0x801CD3A4: lui         $s7, 0xFD48
    ctx->r23 = S32(0XFD48 << 16);
    // 0x801CD3A8: ori         $s7, $s7, 0x3F
    ctx->r23 = ctx->r23 | 0X3F;
    // 0x801CD3AC: ori         $ra, $ra, 0x40
    ctx->r31 = ctx->r31 | 0X40;
    // 0x801CD3B0: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801CD3B4: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x801CD3B8: ori         $s5, $t6, 0x40
    ctx->r21 = ctx->r14 | 0X40;
    // 0x801CD3BC: addiu       $s4, $a1, 0x200
    ctx->r20 = ADD32(ctx->r5, 0X200);
    // 0x801CD3C0: lui         $fp, 0xF548
    ctx->r30 = S32(0XF548 << 16);
    // 0x801CD3C4: addiu       $s6, $sp, 0xA0
    ctx->r22 = ADD32(ctx->r29, 0XA0);
L_801CD3C8:
    // 0x801CD3C8: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x801CD3CC: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x801CD3D0: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    // 0x801CD3D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD3D8: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x801CD3DC: andi        $v1, $a0, 0x7
    ctx->r3 = ctx->r4 & 0X7;
    // 0x801CD3E0: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x801CD3E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CD3E8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801CD3EC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x801CD3F0: subu        $t1, $v1, $v1
    ctx->r9 = SUB32(ctx->r3, ctx->r3);
    // 0x801CD3F4: bgez        $a0, L_801CD404
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801CD3F8: sra         $t0, $a0, 3
        ctx->r8 = S32(SIGNED(ctx->r4) >> 3);
            goto L_801CD404;
    }
    // 0x801CD3F8: sra         $t0, $a0, 3
    ctx->r8 = S32(SIGNED(ctx->r4) >> 3);
    // 0x801CD3FC: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x801CD400: sra         $t0, $at, 3
    ctx->r8 = S32(SIGNED(ctx->r1) >> 3);
L_801CD404:
    // 0x801CD404: addiu       $t1, $t1, 0xA
    ctx->r9 = ADD32(ctx->r9, 0XA);
    // 0x801CD408: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x801CD40C: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x801CD410: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD414: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x801CD418: srl         $t6, $t1, 1
    ctx->r14 = S32(U32(ctx->r9) >> 1);
    // 0x801CD41C: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x801CD420: addiu       $t1, $t6, 0x7
    ctx->r9 = ADD32(ctx->r14, 0X7);
    // 0x801CD424: srl         $t7, $t1, 3
    ctx->r15 = S32(U32(ctx->r9) >> 3);
    // 0x801CD428: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x801CD42C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD430: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CD434: sll         $t1, $t8, 9
    ctx->r9 = S32(ctx->r24 << 9);
    // 0x801CD438: or          $t6, $t1, $fp
    ctx->r14 = ctx->r9 | ctx->r30;
    // 0x801CD43C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CD440: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x801CD444: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD448: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x801CD44C: sll         $a2, $t0, 2
    ctx->r6 = S32(ctx->r8 << 2);
    // 0x801CD450: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD454: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CD458: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CD45C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD460: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD464: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x801CD468: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801CD46C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD470: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CD474: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x801CD478: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801CD47C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CD480: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x801CD484: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CD488: or          $t7, $t6, $a2
    ctx->r15 = ctx->r14 | ctx->r6;
    // 0x801CD48C: addiu       $t2, $t0, 0x9
    ctx->r10 = ADD32(ctx->r8, 0X9);
    // 0x801CD490: addiu       $a3, $v1, 0x9
    ctx->r7 = ADD32(ctx->r3, 0X9);
    // 0x801CD494: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x801CD498: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x801CD49C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CD4A0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801CD4A4: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x801CD4A8: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CD4AC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801CD4B0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801CD4B4: or          $t6, $t9, $t2
    ctx->r14 = ctx->r25 | ctx->r10;
    // 0x801CD4B8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CD4BC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD4C0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x801CD4C4: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x801CD4C8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD4CC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CD4D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CD4D4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD4D8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD4DC: or          $t6, $t1, $at
    ctx->r14 = ctx->r9 | ctx->r1;
    // 0x801CD4E0: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x801CD4E4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD4E8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CD4EC: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x801CD4F0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CD4F4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD4F8: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x801CD4FC: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x801CD500: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD504: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CD508: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x801CD50C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801CD510: or          $t8, $t7, $a2
    ctx->r24 = ctx->r15 | ctx->r6;
    // 0x801CD514: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x801CD518: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x801CD51C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x801CD520: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD524: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x801CD528: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CD52C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801CD530: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x801CD534: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x801CD538: addiu       $t9, $t1, 0x8
    ctx->r25 = ADD32(ctx->r9, 0X8);
    // 0x801CD53C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CD540: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x801CD544: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x801CD548: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801CD54C: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x801CD550: addiu       $t8, $t0, 0x9
    ctx->r24 = ADD32(ctx->r8, 0X9);
    // 0x801CD554: sll         $t9, $t8, 18
    ctx->r25 = S32(ctx->r24 << 18);
    // 0x801CD558: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801CD55C: blez        $t6, L_801CD56C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801CD560: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_801CD56C;
    }
    // 0x801CD560: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x801CD564: b           L_801CD570
    // 0x801CD568: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
        goto L_801CD570;
    // 0x801CD568: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_801CD56C:
    // 0x801CD56C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801CD570:
    // 0x801CD570: blez        $s2, L_801CD580
    if (SIGNED(ctx->r18) <= 0) {
        // 0x801CD574: andi        $t9, $a0, 0xFFF
        ctx->r25 = ctx->r4 & 0XFFF;
            goto L_801CD580;
    }
    // 0x801CD574: andi        $t9, $a0, 0xFFF
    ctx->r25 = ctx->r4 & 0XFFF;
    // 0x801CD578: b           L_801CD584
    // 0x801CD57C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
        goto L_801CD584;
    // 0x801CD57C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_801CD580:
    // 0x801CD580: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CD584:
    // 0x801CD584: andi        $t7, $v1, 0xFFF
    ctx->r15 = ctx->r3 & 0XFFF;
    // 0x801CD588: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x801CD58C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801CD590: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x801CD594: sll         $t9, $a1, 18
    ctx->r25 = S32(ctx->r5 << 18);
    // 0x801CD598: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801CD59C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801CD5A0: blez        $t8, L_801CD5B0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x801CD5A4: sw          $t7, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r15;
            goto L_801CD5B0;
    }
    // 0x801CD5A4: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x801CD5A8: b           L_801CD5B4
    // 0x801CD5AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_801CD5B4;
    // 0x801CD5AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_801CD5B0:
    // 0x801CD5B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801CD5B4:
    // 0x801CD5B4: blez        $s1, L_801CD5C4
    if (SIGNED(ctx->r17) <= 0) {
        // 0x801CD5B8: andi        $t7, $a0, 0xFFF
        ctx->r15 = ctx->r4 & 0XFFF;
            goto L_801CD5C4;
    }
    // 0x801CD5B8: andi        $t7, $a0, 0xFFF
    ctx->r15 = ctx->r4 & 0XFFF;
    // 0x801CD5BC: b           L_801CD5C8
    // 0x801CD5C0: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
        goto L_801CD5C8;
    // 0x801CD5C0: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_801CD5C4:
    // 0x801CD5C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CD5C8:
    // 0x801CD5C8: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x801CD5CC: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x801CD5D0: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x801CD5D4: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x801CD5D8: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x801CD5DC: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x801CD5E0: negu        $t8, $zero
    ctx->r24 = SUB32(0, 0);
    // 0x801CD5E4: addiu       $t7, $a2, 0x8
    ctx->r15 = ADD32(ctx->r6, 0X8);
    // 0x801CD5E8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CD5EC: bgez        $a1, L_801CD614
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801CD5F0: sw          $t6, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r14;
            goto L_801CD614;
    }
    // 0x801CD5F0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x801CD5F4: sll         $v0, $a1, 12
    ctx->r2 = S32(ctx->r5 << 12);
    // 0x801CD5F8: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x801CD5FC: bgez        $t9, L_801CD60C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CD600: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_801CD60C;
    }
    // 0x801CD600: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CD604: b           L_801CD618
    // 0x801CD608: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_801CD618;
    // 0x801CD608: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_801CD60C:
    // 0x801CD60C: b           L_801CD618
    // 0x801CD610: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_801CD618;
    // 0x801CD610: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_801CD614:
    // 0x801CD614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801CD618:
    // 0x801CD618: andi        $t7, $t8, 0xFFFF
    ctx->r15 = ctx->r24 & 0XFFFF;
    // 0x801CD61C: negu        $t9, $a1
    ctx->r25 = SUB32(0, ctx->r5);
    // 0x801CD620: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x801CD624: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x801CD628: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x801CD62C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD630: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x801CD634: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x801CD638: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD63C: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x801CD640: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CD644: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x801CD648: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x801CD64C: or          $t5, $t4, $zero
    ctx->r13 = ctx->r12 | 0;
    // 0x801CD650: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CD654: bne         $at, $zero, L_801CD3C8
    if (ctx->r1 != 0) {
        // 0x801CD658: sw          $t8, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r24;
            goto L_801CD3C8;
    }
    // 0x801CD658: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_801CD65C:
    // 0x801CD65C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CD660: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x801CD664: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x801CD668: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x801CD66C: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x801CD670: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x801CD674: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD678: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x801CD67C: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x801CD680: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x801CD684: jr          $ra
    // 0x801CD688: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x801CD688: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_801CB9C8_6A9E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB9C8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9CC: sh          $zero, -0x1BBE($at)
    MEM_H(-0X1BBE, ctx->r1) = 0;
    // 0x801CB9D0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9D4: sh          $zero, -0x1BBC($at)
    MEM_H(-0X1BBC, ctx->r1) = 0;
    // 0x801CB9D8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9DC: sb          $zero, -0x1BC0($at)
    MEM_B(-0X1BC0, ctx->r1) = 0;
    // 0x801CB9E0: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9E4: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x801CB9E8: sb          $t6, -0x1BBF($at)
    MEM_B(-0X1BBF, ctx->r1) = ctx->r14;
    // 0x801CB9EC: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9F0: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x801CB9F4: sb          $t7, -0x1BBA($at)
    MEM_B(-0X1BBA, ctx->r1) = ctx->r15;
    // 0x801CB9F8: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CB9FC: sh          $zero, -0x1BB8($at)
    MEM_H(-0X1BB8, ctx->r1) = 0;
    // 0x801CBA00: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA04: sh          $zero, -0x1BB6($at)
    MEM_H(-0X1BB6, ctx->r1) = 0;
    // 0x801CBA08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CBA0C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA10: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x801CBA14: sb          $zero, -0x1BB4($at)
    MEM_B(-0X1BB4, ctx->r1) = 0;
    // 0x801CBA18: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x801CBA1C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA20: sb          $s6, -0x1BB3($at)
    MEM_B(-0X1BB3, ctx->r1) = ctx->r22;
    // 0x801CBA24: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA28: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801CBA2C: sh          $t8, -0x1BB2($at)
    MEM_H(-0X1BB2, ctx->r1) = ctx->r24;
    // 0x801CBA30: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA34: sb          $s6, -0x1BB0($at)
    MEM_B(-0X1BB0, ctx->r1) = ctx->r22;
    // 0x801CBA38: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA3C: sb          $zero, -0x1BAF($at)
    MEM_B(-0X1BAF, ctx->r1) = 0;
    // 0x801CBA40: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA44: sb          $zero, -0x1BAE($at)
    MEM_B(-0X1BAE, ctx->r1) = 0;
    // 0x801CBA48: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801CBA4C: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x801CBA50: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x801CBA54: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801CBA58: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801CBA5C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801CBA60: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CBA64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CBA68: jal         0x801CDE78
    // 0x801CBA6C: sb          $zero, -0x1BAD($at)
    MEM_B(-0X1BAD, ctx->r1) = 0;
    func_801CDE78_6AC338(rdram, ctx);
        goto after_0;
    // 0x801CBA6C: sb          $zero, -0x1BAD($at)
    MEM_B(-0X1BAD, ctx->r1) = 0;
    after_0:
    // 0x801CBA70: jal         0x80038BC8
    // 0x801CBA74: andi        $a0, $s6, 0xFFFF
    ctx->r4 = ctx->r22 & 0XFFFF;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801CBA74: andi        $a0, $s6, 0xFFFF
    ctx->r4 = ctx->r22 & 0XFFFF;
    after_1:
    // 0x801CBA78: jal         0x80013B14
    // 0x801CBA7C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x801CBA7C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x801CBA80: lui         $s5, 0x801D
    ctx->r21 = S32(0X801D << 16);
    // 0x801CBA84: addiu       $s5, $s5, -0x1F70
    ctx->r21 = ADD32(ctx->r21, -0X1F70);
    // 0x801CBA88: jal         0x801CB460
    // 0x801CBA8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_801CB460_6A9920(rdram, ctx);
        goto after_3;
    // 0x801CBA8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x801CBA90: lui         $s3, 0x801D
    ctx->r19 = S32(0X801D << 16);
    // 0x801CBA94: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x801CBA98: lui         $s1, 0x801D
    ctx->r17 = S32(0X801D << 16);
    // 0x801CBA9C: addiu       $s1, $s1, -0x1B9C
    ctx->r17 = ADD32(ctx->r17, -0X1B9C);
    // 0x801CBAA0: addiu       $s2, $s2, 0x7170
    ctx->r18 = ADD32(ctx->r18, 0X7170);
    // 0x801CBAA4: addiu       $s3, $s3, -0x1D60
    ctx->r19 = ADD32(ctx->r19, -0X1D60);
    // 0x801CBAA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CBAAC: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
L_801CBAB0:
    // 0x801CBAB0: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x801CBAB4: addu        $t0, $s5, $t9
    ctx->r8 = ADD32(ctx->r21, ctx->r25);
    // 0x801CBAB8: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x801CBABC: addu        $t5, $s1, $s0
    ctx->r13 = ADD32(ctx->r17, ctx->r16);
    // 0x801CBAC0: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x801CBAC4: beql        $t2, $zero, L_801CBAFC
    if (ctx->r10 == 0) {
        // 0x801CBAC8: sb          $s6, 0x0($t5)
        MEM_B(0X0, ctx->r13) = ctx->r22;
            goto L_801CBAFC;
    }
    goto skip_0;
    // 0x801CBAC8: sb          $s6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r22;
    skip_0:
    // 0x801CBACC: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CBAD0: addu        $t3, $s1, $s0
    ctx->r11 = ADD32(ctx->r17, ctx->r16);
    // 0x801CBAD4: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x801CBAD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801CBADC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801CBAE0: mflo        $t4
    ctx->r12 = lo;
    // 0x801CBAE4: addu        $a1, $s3, $t4
    ctx->r5 = ADD32(ctx->r19, ctx->r12);
    // 0x801CBAE8: jal         0x800473D0
    // 0x801CBAEC: nop

    osPfsInit_recomp(rdram, ctx);
        goto after_4;
    // 0x801CBAEC: nop

    after_4:
    // 0x801CBAF0: b           L_801CBB00
    // 0x801CBAF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_801CBB00;
    // 0x801CBAF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801CBAF8: sb          $s6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r22;
L_801CBAFC:
    // 0x801CBAFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_801CBB00:
    // 0x801CBB00: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x801CBB04: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x801CBB08: bne         $at, $zero, L_801CBAB0
    if (ctx->r1 != 0) {
        // 0x801CBB0C: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_801CBAB0;
    }
    // 0x801CBB0C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x801CBB10: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x801CBB14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CBB18: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801CBB1C: beq         $t7, $zero, L_801CBB50
    if (ctx->r15 == 0) {
        // 0x801CBB20: lw          $s3, 0x24($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X24);
            goto L_801CBB50;
    }
    // 0x801CBB20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801CBB24: lbu         $t8, 0x1($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1);
    // 0x801CBB28: beql        $t8, $zero, L_801CBB54
    if (ctx->r24 == 0) {
        // 0x801CBB2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801CBB54;
    }
    goto skip_1;
    // 0x801CBB2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801CBB30: lbu         $t9, 0x2($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X2);
    // 0x801CBB34: beql        $t9, $zero, L_801CBB54
    if (ctx->r25 == 0) {
        // 0x801CBB38: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801CBB54;
    }
    goto skip_2;
    // 0x801CBB38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801CBB3C: lbu         $t0, 0x3($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X3);
    // 0x801CBB40: beql        $t0, $zero, L_801CBB54
    if (ctx->r8 == 0) {
        // 0x801CBB44: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801CBB54;
    }
    goto skip_3;
    // 0x801CBB44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x801CBB48: b           L_801CBB54
    // 0x801CBB4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801CBB54;
    // 0x801CBB4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801CBB50:
    // 0x801CBB50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CBB54:
    // 0x801CBB54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801CBB58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801CBB5C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801CBB60: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x801CBB64: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x801CBB68: jr          $ra
    // 0x801CBB6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801CBB6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801CB780_6A9C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB780: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x801CB784: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB788: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x801CB78C: lbu         $t6, 0x7390($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7390);
    // 0x801CB790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB798: bne         $t6, $zero, L_801CB7CC
    if (ctx->r14 != 0) {
        // 0x801CB79C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801CB7CC;
    }
    // 0x801CB79C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB7A0: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x801CB7A4: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x801CB7A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CB7AC: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x801CB7B0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CB7B4: addiu       $t8, $t8, 0x71F0
    ctx->r24 = ADD32(ctx->r24, 0X71F0);
    // 0x801CB7B8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801CB7BC: jal         0x800457D0
    // 0x801CB7C0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsNumFiles_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB7C0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x801CB7C4: b           L_801CB7D8
    // 0x801CB7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CB7D8;
    // 0x801CB7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB7CC:
    // 0x801CB7CC: jal         0x801CB978
    // 0x801CB7D0: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB7D0: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x801CB7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB7D8:
    // 0x801CB7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB7DC: jr          $ra
    // 0x801CB7E0: nop

    TRACE_RETURN()
    return;
    // 0x801CB7E0: nop

;}
RECOMP_FUNC void func_801CB71C_6A9BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB71C: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x801CB720: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CB724: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x801CB728: lbu         $t6, 0x7390($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7390);
    // 0x801CB72C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB734: bne         $t6, $zero, L_801CB768
    if (ctx->r14 != 0) {
        // 0x801CB738: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801CB768;
    }
    // 0x801CB738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB73C: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x801CB740: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x801CB744: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CB748: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x801CB74C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CB750: addiu       $t8, $t8, 0x71F0
    ctx->r24 = ADD32(ctx->r24, 0X71F0);
    // 0x801CB754: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801CB758: jal         0x80044E70
    // 0x801CB75C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB75C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x801CB760: b           L_801CB774
    // 0x801CB764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CB774;
    // 0x801CB764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB768:
    // 0x801CB768: jal         0x801CB978
    // 0x801CB76C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB76C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x801CB770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB774:
    // 0x801CB774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB778: jr          $ra
    // 0x801CB77C: nop

    TRACE_RETURN()
    return;
    // 0x801CB77C: nop

;}
RECOMP_FUNC void func_801CB870_6A9D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB870: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB874: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CB878: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x801CB87C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB880: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CB888: lbu         $t7, 0x7390($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7390);
    // 0x801CB88C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CB890: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CB894: bne         $t7, $zero, L_801CB8DC
    if (ctx->r15 != 0) {
        // 0x801CB898: sll         $t8, $t6, 2
        ctx->r24 = S32(ctx->r14 << 2);
            goto L_801CB8DC;
    }
    // 0x801CB898: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801CB89C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x801CB8A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801CB8A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801CB8A8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801CB8AC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801CB8B0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CB8B4: addiu       $t9, $t9, 0x71F0
    ctx->r25 = ADD32(ctx->r25, 0X71F0);
    // 0x801CB8B8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801CB8BC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x801CB8C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB8C4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x801CB8C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801CB8CC: jal         0x8004525C
    // 0x801CB8D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB8D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x801CB8D4: b           L_801CB8E8
    // 0x801CB8D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CB8E8;
    // 0x801CB8D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB8DC:
    // 0x801CB8DC: jal         0x801CB978
    // 0x801CB8E0: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB8E0: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x801CB8E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB8E8:
    // 0x801CB8E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB8EC: jr          $ra
    // 0x801CB8F0: nop

    TRACE_RETURN()
    return;
    // 0x801CB8F0: nop

;}
RECOMP_FUNC void func_801CB4A4_6A9964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB4A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CB4A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801CB4AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801CB4B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801CB4B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801CB4B8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x801CB4BC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x801CB4C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CB4C4: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x801CB4C8: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x801CB4CC: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x801CB4D0: lui         $s4, 0x8016
    ctx->r20 = S32(0X8016 << 16);
    // 0x801CB4D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801CB4D8: addiu       $s4, $s4, 0x71F0
    ctx->r20 = ADD32(ctx->r20, 0X71F0);
    // 0x801CB4DC: addiu       $s3, $s3, 0x7170
    ctx->r19 = ADD32(ctx->r19, 0X7170);
    // 0x801CB4E0: addiu       $s2, $s2, 0x7190
    ctx->r18 = ADD32(ctx->r18, 0X7190);
    // 0x801CB4E4: addiu       $s1, $s1, 0x7390
    ctx->r17 = ADD32(ctx->r17, 0X7390);
    // 0x801CB4E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CB4EC: addiu       $s5, $zero, 0x68
    ctx->r21 = ADD32(0, 0X68);
    // 0x801CB4F0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_801CB4F4:
    // 0x801CB4F4: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x801CB4F8: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x801CB4FC: lbu         $t8, 0x2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2);
    // 0x801CB500: addu        $t2, $s1, $s0
    ctx->r10 = ADD32(ctx->r17, ctx->r16);
    // 0x801CB504: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x801CB508: beql        $t9, $zero, L_801CB53C
    if (ctx->r25 == 0) {
        // 0x801CB50C: sb          $s6, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r22;
            goto L_801CB53C;
    }
    goto skip_0;
    // 0x801CB50C: sb          $s6, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r22;
    skip_0:
    // 0x801CB510: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CB514: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CB518: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801CB51C: mflo        $t0
    ctx->r8 = lo;
    // 0x801CB520: addu        $a1, $s4, $t0
    ctx->r5 = ADD32(ctx->r20, ctx->r8);
    // 0x801CB524: jal         0x80043F20
    // 0x801CB528: nop

    osPfsInitPak_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB528: nop

    after_0:
    // 0x801CB52C: addu        $t1, $s1, $s0
    ctx->r9 = ADD32(ctx->r17, ctx->r16);
    // 0x801CB530: b           L_801CB53C
    // 0x801CB534: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
        goto L_801CB53C;
    // 0x801CB534: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x801CB538: sb          $s6, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r22;
L_801CB53C:
    // 0x801CB53C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801CB540: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x801CB544: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x801CB548: bne         $at, $zero, L_801CB4F4
    if (ctx->r1 != 0) {
        // 0x801CB54C: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_801CB4F4;
    }
    // 0x801CB54C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x801CB550: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801CB554: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CB558: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801CB55C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801CB560: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801CB564: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801CB568: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x801CB56C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x801CB570: jr          $ra
    // 0x801CB574: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801CB574: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801CCEF8_6AB3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCEF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CCEFC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801CCF00: andi        $ra, $a3, 0xFF
    ctx->r31 = ctx->r7 & 0XFF;
    // 0x801CCF04: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x801CCF08: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x801CCF0C: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x801CCF10: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x801CCF14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CCF18: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x801CCF1C: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x801CCF20: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x801CCF24: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x801CCF28: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x801CCF2C: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x801CCF30: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801CCF34: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801CCF38: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x801CCF3C: blez        $ra, L_801CD22C
    if (SIGNED(ctx->r31) <= 0) {
        // 0x801CCF40: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_801CD22C;
    }
    // 0x801CCF40: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x801CCF44: lw          $fp, 0x44($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X44);
L_801CCF48:
    // 0x801CCF48: lbu         $t0, 0x0($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X0);
    // 0x801CCF4C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x801CCF50: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x801CCF54: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x801CCF58: bne         $at, $zero, L_801CD218
    if (ctx->r1 != 0) {
        // 0x801CCF5C: addiu       $a0, $t0, -0x10
        ctx->r4 = ADD32(ctx->r8, -0X10);
            goto L_801CD218;
    }
    // 0x801CCF5C: addiu       $a0, $t0, -0x10
    ctx->r4 = ADD32(ctx->r8, -0X10);
    // 0x801CCF60: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CCF64: andi        $v1, $a0, 0x7
    ctx->r3 = ctx->r4 & 0X7;
    // 0x801CCF68: lui         $t6, 0xFD48
    ctx->r14 = S32(0XFD48 << 16);
    // 0x801CCF6C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CCF70: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x801CCF74: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CCF78: ori         $t6, $t6, 0x3F
    ctx->r14 = ctx->r14 | 0X3F;
    // 0x801CCF7C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x801CCF80: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CCF84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801CCF88: bgez        $a0, L_801CCF98
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801CCF8C: sra         $t1, $a0, 3
        ctx->r9 = S32(SIGNED(ctx->r4) >> 3);
            goto L_801CCF98;
    }
    // 0x801CCF8C: sra         $t1, $a0, 3
    ctx->r9 = S32(SIGNED(ctx->r4) >> 3);
    // 0x801CCF90: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x801CCF94: sra         $t1, $at, 3
    ctx->r9 = S32(SIGNED(ctx->r1) >> 3);
L_801CCF98:
    // 0x801CCF98: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x801CCF9C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x801CCFA0: subu        $t2, $v1, $v1
    ctx->r10 = SUB32(ctx->r3, ctx->r3);
    // 0x801CCFA4: addiu       $t8, $t7, 0x200
    ctx->r24 = ADD32(ctx->r15, 0X200);
    // 0x801CCFA8: addiu       $t2, $t2, 0xA
    ctx->r10 = ADD32(ctx->r10, 0XA);
    // 0x801CCFAC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CCFB0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CCFB4: srl         $t6, $t2, 1
    ctx->r14 = S32(U32(ctx->r10) >> 1);
    // 0x801CCFB8: addiu       $t2, $t6, 0x7
    ctx->r10 = ADD32(ctx->r14, 0X7);
    // 0x801CCFBC: srl         $t7, $t2, 3
    ctx->r15 = S32(U32(ctx->r10) >> 3);
    // 0x801CCFC0: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x801CCFC4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CCFC8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CCFCC: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x801CCFD0: lui         $t7, 0x701
    ctx->r15 = S32(0X701 << 16);
    // 0x801CCFD4: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x801CCFD8: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CCFDC: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x801CCFE0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CCFE4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CCFE8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CCFEC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x801CCFF0: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x801CCFF4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CCFF8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x801CCFFC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CD000: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CD004: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x801CD008: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801CD00C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD010: andi        $t6, $t4, 0xF
    ctx->r14 = ctx->r12 & 0XF;
    // 0x801CD014: sll         $t7, $t6, 20
    ctx->r15 = S32(ctx->r14 << 20);
    // 0x801CD018: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x801CD01C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801CD020: ori         $t4, $t8, 0x40
    ctx->r12 = ctx->r24 | 0X40;
    // 0x801CD024: addiu       $t7, $fp, 0x9
    ctx->r15 = ADD32(ctx->r30, 0X9);
    // 0x801CD028: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x801CD02C: sll         $s3, $fp, 18
    ctx->r19 = S32(ctx->r30 << 18);
    // 0x801CD030: addu        $t5, $t6, $s5
    ctx->r13 = ADD32(ctx->r14, ctx->r21);
    // 0x801CD034: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x801CD038: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x801CD03C: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801CD040: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x801CD044: sll         $a2, $t1, 2
    ctx->r6 = S32(ctx->r9 << 2);
    // 0x801CD048: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD04C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CD050: andi        $t8, $a2, 0xFFF
    ctx->r24 = ctx->r6 & 0XFFF;
    // 0x801CD054: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x801CD058: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x801CD05C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x801CD060: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x801CD064: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801CD068: or          $t9, $t8, $a2
    ctx->r25 = ctx->r24 | ctx->r6;
    // 0x801CD06C: addiu       $t0, $t1, 0x9
    ctx->r8 = ADD32(ctx->r9, 0X9);
    // 0x801CD070: addiu       $a3, $v1, 0x9
    ctx->r7 = ADD32(ctx->r3, 0X9);
    // 0x801CD074: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x801CD078: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x801CD07C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CD080: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x801CD084: andi        $t0, $t6, 0xFFF
    ctx->r8 = ctx->r14 & 0XFFF;
    // 0x801CD088: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x801CD08C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801CD090: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801CD094: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x801CD098: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801CD09C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801CD0A0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x801CD0A4: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x801CD0A8: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x801CD0AC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CD0B0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x801CD0B4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801CD0B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD0BC: or          $t8, $t2, $at
    ctx->r24 = ctx->r10 | ctx->r1;
    // 0x801CD0C0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x801CD0C4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD0C8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CD0CC: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x801CD0D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD0D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD0D8: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801CD0DC: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CD0E0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD0E4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x801CD0E8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x801CD0EC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801CD0F0: or          $t6, $t9, $a2
    ctx->r14 = ctx->r25 | ctx->r6;
    // 0x801CD0F4: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x801CD0F8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801CD0FC: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CD100: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CD104: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x801CD108: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CD10C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801CD110: addiu       $s1, $t5, 0x9
    ctx->r17 = ADD32(ctx->r13, 0X9);
    // 0x801CD114: sll         $t8, $s1, 18
    ctx->r24 = S32(ctx->r17 << 18);
    // 0x801CD118: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801CD11C: addiu       $t7, $t1, 0x8
    ctx->r15 = ADD32(ctx->r9, 0X8);
    // 0x801CD120: blez        $t9, L_801CD130
    if (SIGNED(ctx->r25) <= 0) {
        // 0x801CD124: sw          $t7, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r15;
            goto L_801CD130;
    }
    // 0x801CD124: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x801CD128: b           L_801CD134
    // 0x801CD12C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
        goto L_801CD134;
    // 0x801CD12C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_801CD130:
    // 0x801CD130: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801CD134:
    // 0x801CD134: blez        $s2, L_801CD144
    if (SIGNED(ctx->r18) <= 0) {
        // 0x801CD138: lui         $at, 0xE400
        ctx->r1 = S32(0XE400 << 16);
            goto L_801CD144;
    }
    // 0x801CD138: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801CD13C: b           L_801CD148
    // 0x801CD140: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
        goto L_801CD148;
    // 0x801CD140: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_801CD144:
    // 0x801CD144: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CD148:
    // 0x801CD148: andi        $t8, $a0, 0xFFF
    ctx->r24 = ctx->r4 & 0XFFF;
    // 0x801CD14C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CD150: andi        $t6, $v1, 0xFFF
    ctx->r14 = ctx->r3 & 0XFFF;
    // 0x801CD154: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801CD158: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x801CD15C: sll         $t8, $a1, 18
    ctx->r24 = S32(ctx->r5 << 18);
    // 0x801CD160: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x801CD164: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801CD168: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801CD16C: blez        $t7, L_801CD17C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x801CD170: sw          $t6, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r14;
            goto L_801CD17C;
    }
    // 0x801CD170: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x801CD174: b           L_801CD180
    // 0x801CD178: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_801CD180;
    // 0x801CD178: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_801CD17C:
    // 0x801CD17C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801CD180:
    // 0x801CD180: blez        $s3, L_801CD190
    if (SIGNED(ctx->r19) <= 0) {
        // 0x801CD184: andi        $t6, $a0, 0xFFF
        ctx->r14 = ctx->r4 & 0XFFF;
            goto L_801CD190;
    }
    // 0x801CD184: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x801CD188: b           L_801CD194
    // 0x801CD18C: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
        goto L_801CD194;
    // 0x801CD18C: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
L_801CD190:
    // 0x801CD190: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801CD194:
    // 0x801CD194: andi        $t9, $v1, 0xFFF
    ctx->r25 = ctx->r3 & 0XFFF;
    // 0x801CD198: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x801CD19C: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x801CD1A0: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x801CD1A4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x801CD1A8: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x801CD1AC: negu        $t7, $zero
    ctx->r15 = SUB32(0, 0);
    // 0x801CD1B0: addiu       $t6, $a2, 0x8
    ctx->r14 = ADD32(ctx->r6, 0X8);
    // 0x801CD1B4: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x801CD1B8: bgez        $a1, L_801CD1E0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801CD1BC: sw          $t9, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r25;
            goto L_801CD1E0;
    }
    // 0x801CD1BC: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x801CD1C0: sll         $v0, $a1, 12
    ctx->r2 = S32(ctx->r5 << 12);
    // 0x801CD1C4: sra         $t8, $v0, 7
    ctx->r24 = S32(SIGNED(ctx->r2) >> 7);
    // 0x801CD1C8: bgez        $t8, L_801CD1D8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801CD1CC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_801CD1D8;
    }
    // 0x801CD1CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CD1D0: b           L_801CD1E4
    // 0x801CD1D4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_801CD1E4;
    // 0x801CD1D4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_801CD1D8:
    // 0x801CD1D8: b           L_801CD1E4
    // 0x801CD1DC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
        goto L_801CD1E4;
    // 0x801CD1DC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_801CD1E0:
    // 0x801CD1E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801CD1E4:
    // 0x801CD1E4: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x801CD1E8: negu        $t8, $a1
    ctx->r24 = SUB32(0, ctx->r5);
    // 0x801CD1EC: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x801CD1F0: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x801CD1F4: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x801CD1F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801CD1FC: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x801CD200: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x801CD204: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CD208: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x801CD20C: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x801CD210: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CD214: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_801CD218:
    // 0x801CD218: andi        $t9, $s6, 0xFF
    ctx->r25 = ctx->r22 & 0XFF;
    // 0x801CD21C: slt         $at, $t9, $ra
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r31) ? 1 : 0;
    // 0x801CD220: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    // 0x801CD224: bne         $at, $zero, L_801CCF48
    if (ctx->r1 != 0) {
        // 0x801CD228: addiu       $s5, $s5, 0xA
        ctx->r21 = ADD32(ctx->r21, 0XA);
            goto L_801CCF48;
    }
    // 0x801CD228: addiu       $s5, $s5, 0xA
    ctx->r21 = ADD32(ctx->r21, 0XA);
L_801CD22C:
    // 0x801CD22C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801CD230: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x801CD234: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x801CD238: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x801CD23C: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x801CD240: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x801CD244: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD248: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x801CD24C: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x801CD250: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x801CD254: jr          $ra
    // 0x801CD258: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801CD258: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801CB978_6A9E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB97C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB984: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB988: jal         0x801CB460
    // 0x801CB98C: addiu       $a0, $a0, -0x1F70
    ctx->r4 = ADD32(ctx->r4, -0X1F70);
    func_801CB460_6A9920(rdram, ctx);
        goto after_0;
    // 0x801CB98C: addiu       $a0, $a0, -0x1F70
    ctx->r4 = ADD32(ctx->r4, -0X1F70);
    after_0:
    // 0x801CB990: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x801CB994: lui         $t8, 0x801D
    ctx->r24 = S32(0X801D << 16);
    // 0x801CB998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB99C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801CB9A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CB9A4: lbu         $t8, -0x1F6E($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F6E);
    // 0x801CB9A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CB9AC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x801CB9B0: beq         $t9, $zero, L_801CB9C0
    if (ctx->r25 == 0) {
        // 0x801CB9B4: nop
    
            goto L_801CB9C0;
    }
    // 0x801CB9B4: nop

    // 0x801CB9B8: b           L_801CB9C0
    // 0x801CB9BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801CB9C0;
    // 0x801CB9BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801CB9C0:
    // 0x801CB9C0: jr          $ra
    // 0x801CB9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801CB9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801CB690_6A9B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB690: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB694: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CB698: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x801CB69C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB6A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CB6A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CB6A8: lbu         $t7, 0x7390($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7390);
    // 0x801CB6AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB6B0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CB6B4: bne         $t7, $zero, L_801CB704
    if (ctx->r15 != 0) {
        // 0x801CB6B8: sll         $t8, $t6, 2
        ctx->r24 = S32(ctx->r14 << 2);
            goto L_801CB704;
    }
    // 0x801CB6B8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801CB6BC: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x801CB6C0: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x801CB6C4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801CB6C8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x801CB6CC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x801CB6D0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CB6D4: addiu       $t9, $t9, 0x71F0
    ctx->r25 = ADD32(ctx->r25, 0X71F0);
    // 0x801CB6D8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801CB6DC: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x801CB6E0: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x801CB6E4: lhu         $a1, 0x8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X8);
    // 0x801CB6E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801CB6EC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x801CB6F0: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    // 0x801CB6F4: jal         0x80044CB0
    // 0x801CB6F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    osPfsFindFile_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB6F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x801CB6FC: b           L_801CB710
    // 0x801CB700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CB710;
    // 0x801CB700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB704:
    // 0x801CB704: jal         0x801CB978
    // 0x801CB708: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    func_801CB978_6A9E38(rdram, ctx);
        goto after_1;
    // 0x801CB708: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    after_1:
    // 0x801CB70C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CB710:
    // 0x801CB710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB714: jr          $ra
    // 0x801CB718: nop

    TRACE_RETURN()
    return;
    // 0x801CB718: nop

;}
RECOMP_FUNC void func_801CD910_6ABDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD910: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD914: lui         $t7, 0xFD48
    ctx->r15 = S32(0XFD48 << 16);
    // 0x801CD918: subu        $v1, $a2, $a2
    ctx->r3 = SUB32(ctx->r6, ctx->r6);
    // 0x801CD91C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x801CD920: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CD924: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x801CD928: ori         $t7, $t7, 0x3F
    ctx->r15 = ctx->r15 | 0X3F;
    // 0x801CD92C: srl         $t9, $v1, 1
    ctx->r25 = S32(U32(ctx->r3) >> 1);
    // 0x801CD930: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CD934: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x801CD938: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD93C: addiu       $v1, $t9, 0x7
    ctx->r3 = ADD32(ctx->r25, 0X7);
    // 0x801CD940: srl         $t6, $v1, 3
    ctx->r14 = S32(U32(ctx->r3) >> 3);
    // 0x801CD944: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x801CD948: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CD94C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CD950: sll         $v1, $t7, 9
    ctx->r3 = S32(ctx->r15 << 9);
    // 0x801CD954: lui         $t6, 0x701
    ctx->r14 = S32(0X701 << 16);
    // 0x801CD958: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x801CD95C: or          $t9, $v1, $at
    ctx->r25 = ctx->r3 | ctx->r1;
    // 0x801CD960: ori         $t6, $t6, 0x4050
    ctx->r14 = ctx->r14 | 0X4050;
    // 0x801CD964: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CD968: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CD96C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD970: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x801CD974: sll         $a1, $a3, 2
    ctx->r5 = S32(ctx->r7 << 2);
    // 0x801CD978: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD97C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801CD980: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CD984: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CD988: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD98C: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x801CD990: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801CD994: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CD998: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801CD99C: andi        $t6, $a1, 0xFFF
    ctx->r14 = ctx->r5 & 0XFFF;
    // 0x801CD9A0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801CD9A4: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CD9A8: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x801CD9AC: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CD9B0: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x801CD9B4: addiu       $t1, $a2, 0x1F
    ctx->r9 = ADD32(ctx->r6, 0X1F);
    // 0x801CD9B8: addiu       $t2, $a3, 0x1F
    ctx->r10 = ADD32(ctx->r7, 0X1F);
    // 0x801CD9BC: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x801CD9C0: sll         $t6, $t1, 1
    ctx->r14 = S32(ctx->r9 << 1);
    // 0x801CD9C4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x801CD9C8: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801CD9CC: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x801CD9D0: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CD9D4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x801CD9D8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801CD9DC: or          $t6, $t9, $t2
    ctx->r14 = ctx->r25 | ctx->r10;
    // 0x801CD9E0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x801CD9E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CD9E8: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x801CD9EC: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x801CD9F0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x801CD9F4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801CD9F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801CD9FC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CDA00: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CDA04: or          $t6, $v1, $at
    ctx->r14 = ctx->r3 | ctx->r1;
    // 0x801CDA08: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801CDA0C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CDA10: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801CDA14: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801CDA18: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801CDA1C: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x801CDA20: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x801CDA24: sll         $t9, $t8, 20
    ctx->r25 = S32(ctx->r24 << 20);
    // 0x801CDA28: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CDA2C: ori         $t7, $t6, 0x50
    ctx->r15 = ctx->r14 | 0X50;
    // 0x801CDA30: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801CDA34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CDA38: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x801CDA3C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x801CDA40: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x801CDA44: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CDA48: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x801CDA4C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x801CDA50: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801CDA54: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x801CDA58: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x801CDA5C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x801CDA60: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CDA64: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x801CDA68: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x801CDA6C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x801CDA70: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801CDA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CDA78: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x801CDA7C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x801CDA80: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801CDA84: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x801CDA88: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801CDA8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDA90: sll         $t8, $t7, 18
    ctx->r24 = S32(ctx->r15 << 18);
    // 0x801CDA94: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801CDA98: blez        $t9, L_801CDAA8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x801CDA9C: sll         $t7, $t6, 18
        ctx->r15 = S32(ctx->r14 << 18);
            goto L_801CDAA8;
    }
    // 0x801CDA9C: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x801CDAA0: b           L_801CDAA8
    // 0x801CDAA4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_801CDAA8;
    // 0x801CDAA4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_801CDAA8:
    // 0x801CDAA8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801CDAAC: blez        $t8, L_801CDABC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x801CDAB0: andi        $t7, $a1, 0xFFF
        ctx->r15 = ctx->r5 & 0XFFF;
            goto L_801CDABC;
    }
    // 0x801CDAB0: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x801CDAB4: b           L_801CDABC
    // 0x801CDAB8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_801CDABC;
    // 0x801CDAB8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_801CDABC:
    // 0x801CDABC: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x801CDAC0: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x801CDAC4: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801CDAC8: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x801CDACC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x801CDAD0: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x801CDAD4: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x801CDAD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CDADC: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x801CDAE0: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CDAE4: blez        $t8, L_801CDAF4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x801CDAE8: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_801CDAF4;
    }
    // 0x801CDAE8: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x801CDAEC: b           L_801CDAF4
    // 0x801CDAF0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_801CDAF4;
    // 0x801CDAF0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_801CDAF4:
    // 0x801CDAF4: sll         $t1, $t9, 18
    ctx->r9 = S32(ctx->r25 << 18);
    // 0x801CDAF8: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x801CDAFC: blez        $t7, L_801CDB0C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x801CDB00: andi        $t8, $a1, 0xFFF
        ctx->r24 = ctx->r5 & 0XFFF;
            goto L_801CDB0C;
    }
    // 0x801CDB00: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x801CDB04: b           L_801CDB10
    // 0x801CDB08: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
        goto L_801CDB10;
    // 0x801CDB08: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_801CDB0C:
    // 0x801CDB0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_801CDB10:
    // 0x801CDB10: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x801CDB14: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x801CDB18: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x801CDB1C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x801CDB20: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x801CDB24: lui         $t6, 0xB400
    ctx->r14 = S32(0XB400 << 16);
    // 0x801CDB28: negu        $t7, $zero
    ctx->r15 = SUB32(0, 0);
    // 0x801CDB2C: addiu       $t8, $t2, 0x8
    ctx->r24 = ADD32(ctx->r10, 0X8);
    // 0x801CDB30: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x801CDB34: bgez        $a3, L_801CDB5C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x801CDB38: sw          $t6, 0x0($t2)
        MEM_W(0X0, ctx->r10) = ctx->r14;
            goto L_801CDB5C;
    }
    // 0x801CDB38: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x801CDB3C: sll         $v0, $a3, 12
    ctx->r2 = S32(ctx->r7 << 12);
    // 0x801CDB40: sra         $t9, $v0, 7
    ctx->r25 = S32(SIGNED(ctx->r2) >> 7);
    // 0x801CDB44: bgez        $t9, L_801CDB54
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801CDB48: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_801CDB54;
    }
    // 0x801CDB48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801CDB4C: b           L_801CDB60
    // 0x801CDB50: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_801CDB60;
    // 0x801CDB50: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_801CDB54:
    // 0x801CDB54: b           L_801CDB60
    // 0x801CDB58: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_801CDB60;
    // 0x801CDB58: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_801CDB5C:
    // 0x801CDB5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_801CDB60:
    // 0x801CDB60: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x801CDB64: negu        $t9, $a3
    ctx->r25 = SUB32(0, ctx->r7);
    // 0x801CDB68: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x801CDB6C: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x801CDB70: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x801CDB74: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CDB78: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x801CDB7C: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x801CDB80: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x801CDB84: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x801CDB88: lui         $t8, 0xB300
    ctx->r24 = S32(0XB300 << 16);
    // 0x801CDB8C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x801CDB90: jr          $ra
    // 0x801CDB94: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801CDB94: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_801CB848_6A9D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB84C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801CB850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB854: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801CB858: jal         0x800441C0
    // 0x801CB85C: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    osPfsIsPlug_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB85C: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    after_0:
    // 0x801CB860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB868: jr          $ra
    // 0x801CB86C: nop

    TRACE_RETURN()
    return;
    // 0x801CB86C: nop

;}
