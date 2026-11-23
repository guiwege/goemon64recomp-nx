#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801DF6D0_59B5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF6D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF6D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF6D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF6DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF6E0: jal         0x801E7F50
    // 0x801DF6E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801DF6E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF6E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF6EC: jal         0x801DD720
    // 0x801DF6F0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_801DD720_599630(rdram, ctx);
        goto after_1;
    // 0x801DF6F0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x801DF6F4: jal         0x801E31DC
    // 0x801DF6F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E31DC_59F0EC(rdram, ctx);
        goto after_2;
    // 0x801DF6F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DF6FC: jal         0x801DF858
    // 0x801DF700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF858_59B768(rdram, ctx);
        goto after_3;
    // 0x801DF700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DF704: bnel        $v0, $zero, L_801DF738
    if (ctx->r2 != 0) {
        // 0x801DF708: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF738;
    }
    goto skip_0;
    // 0x801DF708: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DF70C: jal         0x801DF8B8
    // 0x801DF710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF8B8_59B7C8(rdram, ctx);
        goto after_4;
    // 0x801DF710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DF714: bnel        $v0, $zero, L_801DF738
    if (ctx->r2 != 0) {
        // 0x801DF718: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF738;
    }
    goto skip_1;
    // 0x801DF718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801DF71C: jal         0x801E1E70
    // 0x801DF720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1E70_59DD80(rdram, ctx);
        goto after_5;
    // 0x801DF720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DF724: bne         $v0, $zero, L_801DF734
    if (ctx->r2 != 0) {
        // 0x801DF728: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DF734;
    }
    // 0x801DF728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF72C: jal         0x801DAD08
    // 0x801DF730: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    func_801DAD08_596C18(rdram, ctx);
        goto after_6;
    // 0x801DF730: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    after_6:
L_801DF734:
    // 0x801DF734: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF738:
    // 0x801DF738: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF73C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF740: jr          $ra
    // 0x801DF744: nop

    TRACE_RETURN()
    return;
    // 0x801DF744: nop

;}
RECOMP_FUNC void func_801EE7CC_5AA6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE7CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EE7D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EE7D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EE7D8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EE7DC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EE7E0: jal         0x801EE824
    // 0x801EE7E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801EE824_5AA734(rdram, ctx);
        goto after_0;
    // 0x801EE7E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801EE7E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EE7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EE7F0: jr          $ra
    // 0x801EE7F4: nop

    TRACE_RETURN()
    return;
    // 0x801EE7F4: nop

;}
RECOMP_FUNC void func_801CB5D0_5874E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB5D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CB5D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CB5D8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB5DC: lwc1        $f0, -0x5924($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5924);
    // 0x801CB5E0: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB5E4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CB5E8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CB5EC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801CB5F0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801CB5F4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801CB5F8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CB5FC: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801CB600: lh          $t6, 0x2FE4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2FE4);
    // 0x801CB604: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CB608: addiu       $a1, $a1, -0x482C
    ctx->r5 = ADD32(ctx->r5, -0X482C);
    // 0x801CB60C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CB610: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB614: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801CB618: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CB61C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801CB620: lh          $t7, 0x2FE6($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2FE6);
    // 0x801CB624: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801CB628: nop

    // 0x801CB62C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CB630: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801CB634: lh          $t8, 0x2FE8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2FE8);
    // 0x801CB638: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CB63C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x801CB640: nop

    // 0x801CB644: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801CB648: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801CB64C: lhu         $t9, 0x2FEA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2FEA);
    // 0x801CB650: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801CB654: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CB658: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801CB65C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801CB660: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CB664: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CB668: jal         0x800358E8
    // 0x801CB66C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801CB66C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_0:
    // 0x801CB670: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x801CB674: addiu       $s0, $s0, -0x39FC
    ctx->r16 = ADD32(ctx->r16, -0X39FC);
    // 0x801CB678: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CB67C: addiu       $v1, $v1, -0x37A0
    ctx->r3 = ADD32(ctx->r3, -0X37A0);
    // 0x801CB680: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x801CB684: sw          $v1, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r3;
    // 0x801CB688: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x801CB68C: addiu       $v1, $zero, 0x31
    ctx->r3 = ADD32(0, 0X31);
    // 0x801CB690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CB694: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_801CB698:
    // 0x801CB698: bnel        $v0, $v1, L_801CB698
    if (ctx->r2 != ctx->r3) {
        // 0x801CB69C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_801CB698;
    }
    goto skip_0;
    // 0x801CB69C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x801CB6A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB6A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801CB6A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CB6AC: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    // 0x801CB6B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CB6B4: jal         0x80035EEC
    // 0x801CB6B8: sw          $t1, -0x39F4($at)
    MEM_W(-0X39F4, ctx->r1) = ctx->r9;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x801CB6B8: sw          $t1, -0x39F4($at)
    MEM_W(-0X39F4, ctx->r1) = ctx->r9;
    after_1:
    // 0x801CB6BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801CB6C0: sw          $v0, -0x39EC($at)
    MEM_W(-0X39EC, ctx->r1) = ctx->r2;
    // 0x801CB6C4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801CB6C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CB6CC: jal         0x80035EEC
    // 0x801CB6D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x801CB6D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801CB6D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801CB6D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CB6DC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801CB6E0: sw          $v0, -0x39E4($at)
    MEM_W(-0X39E4, ctx->r1) = ctx->r2;
    // 0x801CB6E4: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    // 0x801CB6E8: jal         0x8001C9BC
    // 0x801CB6EC: lw          $a0, -0x39EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39EC);
    func_8001C9BC_1D5BC(rdram, ctx);
        goto after_3;
    // 0x801CB6EC: lw          $a0, -0x39EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39EC);
    after_3:
    // 0x801CB6F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CB6F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801CB6F8: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    // 0x801CB6FC: jal         0x8001C9BC
    // 0x801CB700: lw          $a0, -0x39E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39E4);
    func_8001C9BC_1D5BC(rdram, ctx);
        goto after_4;
    // 0x801CB700: lw          $a0, -0x39E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39E4);
    after_4:
    // 0x801CB704: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801CB708: lw          $t2, -0x3A24($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A24);
    // 0x801CB70C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x801CB710: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801CB714: sb          $t2, 0x60($t3)
    MEM_B(0X60, ctx->r11) = ctx->r10;
    // 0x801CB718: jal         0x801D9B78
    // 0x801CB71C: lw          $a0, -0x39E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39E4);
    func_801D9B78_595A88(rdram, ctx);
        goto after_5;
    // 0x801CB71C: lw          $a0, -0x39E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39E4);
    after_5:
    // 0x801CB720: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801CB724: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801CB728: addiu       $t4, $t4, -0x39C0
    ctx->r12 = ADD32(ctx->r12, -0X39C0);
    // 0x801CB72C: jal         0x801CBC40
    // 0x801CB730: sw          $t4, 0x54($t5)
    MEM_W(0X54, ctx->r13) = ctx->r12;
    func_801CBC40_587B50(rdram, ctx);
        goto after_6;
    // 0x801CB730: sw          $t4, 0x54($t5)
    MEM_W(0X54, ctx->r13) = ctx->r12;
    after_6:
    // 0x801CB734: jal         0x801D23D4
    // 0x801CB738: nop

    func_801D23D4_58E2E4(rdram, ctx);
        goto after_7;
    // 0x801CB738: nop

    after_7:
    // 0x801CB73C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801CB740: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x801CB744: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801CB748: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801CB74C: addiu       $a1, $a1, -0x713C
    ctx->r5 = ADD32(ctx->r5, -0X713C);
    // 0x801CB750: sw          $t6, 0x64($t7)
    MEM_W(0X64, ctx->r15) = ctx->r14;
    // 0x801CB754: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801CB758: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CB75C: sb          $zero, 0x90($t8)
    MEM_B(0X90, ctx->r24) = 0;
    // 0x801CB760: jal         0x80034E08
    // 0x801CB764: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_80034E08_35A08(rdram, ctx);
        goto after_8;
    // 0x801CB764: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_8:
    // 0x801CB768: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801CB76C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801CB770: addiu       $v1, $v1, -0x39C8
    ctx->r3 = ADD32(ctx->r3, -0X39C8);
    // 0x801CB774: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x801CB778: sw          $v0, 0xDC($t0)
    MEM_W(0XDC, ctx->r8) = ctx->r2;
    // 0x801CB77C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801CB780: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801CB784: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB788: addiu       $a0, $a0, -0x4800
    ctx->r4 = ADD32(ctx->r4, -0X4800);
    // 0x801CB78C: jal         0x8003521C
    // 0x801CB790: sw          $t1, 0x5C($t2)
    MEM_W(0X5C, ctx->r10) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801CB790: sw          $t1, 0x5C($t2)
    MEM_W(0X5C, ctx->r10) = ctx->r9;
    after_9:
    // 0x801CB794: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801CB798: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801CB79C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801CB7A0: jr          $ra
    // 0x801CB7A4: nop

    TRACE_RETURN()
    return;
    // 0x801CB7A4: nop

;}
RECOMP_FUNC void func_801CB518_587428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB520: jal         0x80034734
    // 0x801CB524: nop

    func_80034734_35334(rdram, ctx);
        goto after_0;
    // 0x801CB524: nop

    after_0:
    // 0x801CB528: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB52C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB530: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CB534: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CB538: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x801CB53C: lhu         $t6, 0x30F4($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X30F4);
    // 0x801CB540: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x801CB544: beql        $t7, $zero, L_801CB56C
    if (ctx->r15 == 0) {
        // 0x801CB548: lhu         $t8, 0x2DD2($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X2DD2);
            goto L_801CB56C;
    }
    goto skip_0;
    // 0x801CB548: lhu         $t8, 0x2DD2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2DD2);
    skip_0:
    // 0x801CB54C: jal         0x80003478
    // 0x801CB550: nop

    func_80003478_4078(rdram, ctx);
        goto after_1;
    // 0x801CB550: nop

    after_1:
    // 0x801CB554: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB558: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB55C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CB560: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CB564: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x801CB568: lhu         $t8, 0x2DD2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2DD2);
L_801CB56C:
    // 0x801CB56C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB570: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801CB574: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CB578: sh          $t9, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = ctx->r25;
    // 0x801CB57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB584: jr          $ra
    // 0x801CB588: nop

    TRACE_RETURN()
    return;
    // 0x801CB588: nop

;}
RECOMP_FUNC void func_801E8178_5A4088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8178: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E817C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x801E8180: lw          $t6, 0xD4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XD4);
    // 0x801E8184: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x801E8188: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x801E818C: jr          $ra
    // 0x801E8190: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801E8190: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_801DD890_5997A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DD894: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DD898: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DD89C: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x801DD8A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801DD8A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DD8A8: bnel        $v1, $zero, L_801DD8D0
    if (ctx->r3 != 0) {
        // 0x801DD8AC: lw          $v0, 0x18($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X18);
            goto L_801DD8D0;
    }
    goto skip_0;
    // 0x801DD8AC: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    skip_0:
    // 0x801DD8B0: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x801DD8B4: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x801DD8B8: sb          $zero, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = 0;
    // 0x801DD8BC: jal         0x801DACDC
    // 0x801DD8C0: sb          $zero, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801DD8C0: sb          $zero, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = 0;
    after_0:
    // 0x801DD8C4: b           L_801DD97C
    // 0x801DD8C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DD97C;
    // 0x801DD8C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD8CC: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
L_801DD8D0:
    // 0x801DD8D0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x801DD8D4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801DD8D8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801DD8DC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x801DD8E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x801DD8E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801DD8E8: jal         0x801DB3A0
    // 0x801DD8EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_801DB3A0_5972B0(rdram, ctx);
        goto after_1;
    // 0x801DD8EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x801DD8F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801DD8F4: beq         $v0, $zero, L_801DD978
    if (ctx->r2 == 0) {
        // 0x801DD8F8: lw          $t0, 0x24($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X24);
            goto L_801DD978;
    }
    // 0x801DD8F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801DD8FC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x801DD900: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x801DD904: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x801DD908: sb          $t7, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = ctx->r15;
    // 0x801DD90C: lbu         $t8, 0x98($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X98);
    // 0x801DD910: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801DD914: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801DD918: bgez        $t8, L_801DD92C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801DD91C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801DD92C;
    }
    // 0x801DD91C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DD920: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD924: nop

    // 0x801DD928: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_801DD92C:
    // 0x801DD92C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801DD930: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DD934: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801DD938: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801DD93C: nop

    // 0x801DD940: bc1fl       L_801DD954
    if (!c1cs) {
        // 0x801DD944: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_801DD954;
    }
    goto skip_1;
    // 0x801DD944: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_1:
    // 0x801DD948: b           L_801DD970
    // 0x801DD94C: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
        goto L_801DD970;
    // 0x801DD94C: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    // 0x801DD950: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_801DD954:
    // 0x801DD954: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    // 0x801DD958: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801DD95C: nop

    // 0x801DD960: bc1f        L_801DD970
    if (!c1cs) {
        // 0x801DD964: nop
    
            goto L_801DD970;
    }
    // 0x801DD964: nop

    // 0x801DD968: b           L_801DD970
    // 0x801DD96C: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
        goto L_801DD970;
    // 0x801DD96C: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
L_801DD970:
    // 0x801DD970: jal         0x801DACDC
    // 0x801DD974: nop

    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DD974: nop

    after_2:
L_801DD978:
    // 0x801DD978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DD97C:
    // 0x801DD97C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DD980: jr          $ra
    // 0x801DD984: nop

    TRACE_RETURN()
    return;
    // 0x801DD984: nop

;}
RECOMP_FUNC void func_801EE688_5AA598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE688: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EE68C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801EE690: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801EE694: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801EE698: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801EE69C: lhu         $v0, 0x2A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2A);
    // 0x801EE6A0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EE6A4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801EE6A8: beq         $v0, $zero, L_801EE6B8
    if (ctx->r2 == 0) {
        // 0x801EE6AC: nop
    
            goto L_801EE6B8;
    }
    // 0x801EE6AC: nop

    // 0x801EE6B0: b           L_801EE6C8
    // 0x801EE6B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801EE6C8;
    // 0x801EE6B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801EE6B8:
    // 0x801EE6B8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801EE6BC: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x801EE6C0: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x801EE6C4: lhu         $v1, 0x2D90($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2D90);
L_801EE6C8:
    // 0x801EE6C8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EE6CC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801EE6D0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x801EE6D4: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801EE6D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EE6DC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EE6E0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801EE6E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EE6E8: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x801EE6EC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801EE6F0: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x801EE6F4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801EE6F8: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EE6FC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801EE700: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x801EE704: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801EE708: lhu         $t8, 0x22($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X22);
    // 0x801EE70C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x801EE710: lhu         $t9, 0x24($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X24);
    // 0x801EE714: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x801EE718: lhu         $t0, 0x26($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X26);
    // 0x801EE71C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801EE720: lhu         $t1, 0x28($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X28);
    // 0x801EE724: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x801EE728: jal         0x80034680
    // 0x801EE72C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801EE72C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    after_0:
    // 0x801EE730: lbu         $t2, 0x2C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2C);
    // 0x801EE734: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x801EE738: sb          $t2, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r10;
    // 0x801EE73C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801EE740: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801EE744: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801EE748: jr          $ra
    // 0x801EE74C: nop

    TRACE_RETURN()
    return;
    // 0x801EE74C: nop

;}
RECOMP_FUNC void func_801DE24C_59A15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE24C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE254: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE258: jal         0x801E4260
    // 0x801DE25C: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    func_801E4260_5A0170(rdram, ctx);
        goto after_0;
    // 0x801DE25C: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    after_0:
    // 0x801DE260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE268: jr          $ra
    // 0x801DE26C: nop

    TRACE_RETURN()
    return;
    // 0x801DE26C: nop

;}
RECOMP_FUNC void func_801D26FC_58E60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D26FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D2700: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D2704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D2708: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D270C: jal         0x801D25EC
    // 0x801D2710: addiu       $a0, $a0, -0x3410
    ctx->r4 = ADD32(ctx->r4, -0X3410);
    func_801D25EC_58E4FC(rdram, ctx);
        goto after_0;
    // 0x801D2710: addiu       $a0, $a0, -0x3410
    ctx->r4 = ADD32(ctx->r4, -0X3410);
    after_0:
    // 0x801D2714: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D2718: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    // 0x801D271C: jal         0x801D27A4
    // 0x801D2720: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    func_801D27A4_58E6B4(rdram, ctx);
        goto after_1;
    // 0x801D2720: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    after_1:
    // 0x801D2724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D272C: jr          $ra
    // 0x801D2730: nop

    TRACE_RETURN()
    return;
    // 0x801D2730: nop

;}
RECOMP_FUNC void func_801DF028_59AF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF02C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DF030: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801DF034: jal         0x801E7DE8
    // 0x801DF038: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DF038: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DF03C: beq         $v0, $zero, L_801DF054
    if (ctx->r2 == 0) {
        // 0x801DF040: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801DF054;
    }
    // 0x801DF040: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801DF044: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DF048: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DF04C: b           L_801DF060
    // 0x801DF050: nop

        goto L_801DF060;
    // 0x801DF050: nop

L_801DF054:
    // 0x801DF054: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801DF058: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DF05C: nop

L_801DF060:
    // 0x801DF060: jal         0x801E7DE8
    // 0x801DF064: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_1;
    // 0x801DF064: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801DF068: beq         $v0, $zero, L_801DF080
    if (ctx->r2 == 0) {
        // 0x801DF06C: lwc1        $f2, 0x1C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_801DF080;
    }
    // 0x801DF06C: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801DF070: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DF074: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF078: b           L_801DF090
    // 0x801DF07C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
        goto L_801DF090;
    // 0x801DF07C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_801DF080:
    // 0x801DF080: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DF084: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DF088: nop

    // 0x801DF08C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_801DF090:
    // 0x801DF090: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801DF094: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801DF098: jal         0x801E8194
    // 0x801DF09C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801E8194_5A40A4(rdram, ctx);
        goto after_2;
    // 0x801DF09C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801DF0A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DF0A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF0A8: jr          $ra
    // 0x801DF0AC: nop

    TRACE_RETURN()
    return;
    // 0x801DF0AC: nop

;}
RECOMP_FUNC void func_801E54E0_5A13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E54E0: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x801E54E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E54E8: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x801E54EC: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801E54F0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x801E54F4: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x801E54F8: addiu       $t9, $t0, 0x90
    ctx->r25 = ADD32(ctx->r8, 0X90);
L_801E54FC:
    // 0x801E54FC: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801E5500: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801E5504: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801E5508: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801E550C: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x801E5510: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801E5514: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x801E5518: bne         $t0, $t9, L_801E54FC
    if (ctx->r8 != ctx->r25) {
        // 0x801E551C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801E54FC;
    }
    // 0x801E551C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801E5520: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x801E5524: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801E5528: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x801E552C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x801E5530: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5534: lw          $t2, 0xC4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC4);
    // 0x801E5538: lw          $v1, 0x8C($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X8C);
    // 0x801E553C: beql        $v1, $zero, L_801E5564
    if (ctx->r3 == 0) {
        // 0x801E5540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E5564;
    }
    goto skip_0;
    // 0x801E5540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E5544: beql        $t2, $zero, L_801E5564
    if (ctx->r10 == 0) {
        // 0x801E5548: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E5564;
    }
    goto skip_1;
    // 0x801E5548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E554C: beq         $a3, $zero, L_801E5560
    if (ctx->r7 == 0) {
        // 0x801E5550: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_801E5560;
    }
    // 0x801E5550: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x801E5554: lw          $a1, 0x18($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X18);
    // 0x801E5558: jal         0x801E5570
    // 0x801E555C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_801E5570_5A1480(rdram, ctx);
        goto after_0;
    // 0x801E555C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
L_801E5560:
    // 0x801E5560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5564:
    // 0x801E5564: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x801E5568: jr          $ra
    // 0x801E556C: nop

    TRACE_RETURN()
    return;
    // 0x801E556C: nop

;}
RECOMP_FUNC void func_801E63AC_5A22BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E63AC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801E63B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E63B4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801E63B8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801E63BC: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E63C0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801E63C4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E63C8: lw          $v1, 0x7C($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X7C);
    // 0x801E63CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E63D0: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x801E63D4: beq         $v1, $zero, L_801E63E4
    if (ctx->r3 == 0) {
        // 0x801E63D8: nop
    
            goto L_801E63E4;
    }
    // 0x801E63D8: nop

    // 0x801E63DC: b           L_801E63E4
    // 0x801E63E0: lhu         $a0, 0x5C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X5C);
        goto L_801E63E4;
    // 0x801E63E0: lhu         $a0, 0x5C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X5C);
L_801E63E4:
    // 0x801E63E4: beq         $a1, $a0, L_801E63F4
    if (ctx->r5 == ctx->r4) {
        // 0x801E63E8: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801E63F4;
    }
    // 0x801E63E8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E63EC: b           L_801E673C
    // 0x801E63F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E63F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E63F4:
    // 0x801E63F4: lw          $t1, 0x18($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X18);
    // 0x801E63F8: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x801E63FC: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
    // 0x801E6400: lwc1        $f2, 0xC($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801E6404: lwc1        $f0, 0xC($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E6408: addiu       $at, $zero, 0x322
    ctx->r1 = ADD32(0, 0X322);
    // 0x801E640C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801E6410: nop

    // 0x801E6414: bc1f        L_801E6424
    if (!c1cs) {
        // 0x801E6418: nop
    
            goto L_801E6424;
    }
    // 0x801E6418: nop

    // 0x801E641C: b           L_801E673C
    // 0x801E6420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E6420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E6424:
    // 0x801E6424: bne         $v0, $at, L_801E6438
    if (ctx->r2 != ctx->r1) {
        // 0x801E6428: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_801E6438;
    }
    // 0x801E6428: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801E642C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E6430: b           L_801E6468
    // 0x801E6434: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
        goto L_801E6468;
    // 0x801E6434: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_801E6438:
    // 0x801E6438: addiu       $at, $zero, 0x33B
    ctx->r1 = ADD32(0, 0X33B);
    // 0x801E643C: bne         $v0, $at, L_801E6450
    if (ctx->r2 != ctx->r1) {
        // 0x801E6440: lui         $at, 0x42F0
        ctx->r1 = S32(0X42F0 << 16);
            goto L_801E6450;
    }
    // 0x801E6440: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801E6444: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E6448: b           L_801E6468
    // 0x801E644C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
        goto L_801E6468;
    // 0x801E644C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
L_801E6450:
    // 0x801E6450: addiu       $at, $zero, 0x33C
    ctx->r1 = ADD32(0, 0X33C);
    // 0x801E6454: bne         $v0, $at, L_801E6468
    if (ctx->r2 != ctx->r1) {
        // 0x801E6458: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_801E6468;
    }
    // 0x801E6458: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801E645C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E6460: nop

    // 0x801E6464: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
L_801E6468:
    // 0x801E6468: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E646C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E6470: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E6474: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801E6478: add.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x801E647C: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x801E6480: nop

    // 0x801E6484: bc1fl       L_801E6498
    if (!c1cs) {
        // 0x801E6488: lwc1        $f8, 0x8($t0)
        ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
            goto L_801E6498;
    }
    goto skip_0;
    // 0x801E6488: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    skip_0:
    // 0x801E648C: b           L_801E673C
    // 0x801E6490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E6490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E6494: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
L_801E6498:
    // 0x801E6498: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801E649C: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x801E64A0: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x801E64A4: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801E64A8: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801E64AC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x801E64B0: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801E64B4: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E64B8: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801E64BC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801E64C0: lwc1        $f4, 0x10($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801E64C4: lwc1        $f10, 0x10($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801E64C8: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801E64CC: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801E64D0: lhu         $a2, 0x18($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X18);
    // 0x801E64D4: lhu         $a1, 0x16($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X16);
    // 0x801E64D8: lhu         $a0, 0x14($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X14);
    // 0x801E64DC: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x801E64E0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x801E64E4: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x801E64E8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E64EC: jal         0x80033A3C
    // 0x801E64F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80033A3C_3463C(rdram, ctx);
        goto after_0;
    // 0x801E64F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x801E64F4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E64F8: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E64FC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x801E6500: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801E6504: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x801E6508: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E650C: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E6510: bc1fl       L_801E6524
    if (!c1cs) {
        // 0x801E6514: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801E6524;
    }
    goto skip_1;
    // 0x801E6514: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_1:
    // 0x801E6518: b           L_801E6524
    // 0x801E651C: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801E6524;
    // 0x801E651C: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801E6520: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801E6524:
    // 0x801E6524: ldc1        $f14, -0x4A78($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X4A78);
    // 0x801E6528: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801E652C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6530: c.lt.d      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.d < ctx->f14.d;
    // 0x801E6534: nop

    // 0x801E6538: bc1fl       L_801E6580
    if (!c1cs) {
        // 0x801E653C: c.lt.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
            goto L_801E6580;
    }
    goto skip_2;
    // 0x801E653C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    skip_2:
    // 0x801E6540: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801E6544: nop

    // 0x801E6548: bc1fl       L_801E655C
    if (!c1cs) {
        // 0x801E654C: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801E655C;
    }
    goto skip_3;
    // 0x801E654C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x801E6550: b           L_801E655C
    // 0x801E6554: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801E655C;
    // 0x801E6554: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801E6558: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E655C:
    // 0x801E655C: ldc1        $f10, -0x4A70($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X4A70);
    // 0x801E6560: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x801E6564: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x801E6568: nop

    // 0x801E656C: bc1fl       L_801E6580
    if (!c1cs) {
        // 0x801E6570: c.lt.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
            goto L_801E6580;
    }
    goto skip_4;
    // 0x801E6570: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    skip_4:
    // 0x801E6574: b           L_801E673C
    // 0x801E6578: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E6578: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E657C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
L_801E6580:
    // 0x801E6580: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E6584: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6588: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x801E658C: bc1fl       L_801E65A0
    if (!c1cs) {
        // 0x801E6590: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801E65A0;
    }
    goto skip_5;
    // 0x801E6590: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_5:
    // 0x801E6594: b           L_801E65A0
    // 0x801E6598: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801E65A0;
    // 0x801E6598: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801E659C: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801E65A0:
    // 0x801E65A0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E65A4: c.le.d      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.d <= ctx->f4.d;
    // 0x801E65A8: nop

    // 0x801E65AC: bc1f        L_801E65F0
    if (!c1cs) {
        // 0x801E65B0: nop
    
            goto L_801E65F0;
    }
    // 0x801E65B0: nop

    // 0x801E65B4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801E65B8: nop

    // 0x801E65BC: bc1fl       L_801E65D0
    if (!c1cs) {
        // 0x801E65C0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801E65D0;
    }
    goto skip_6;
    // 0x801E65C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_6:
    // 0x801E65C4: b           L_801E65D0
    // 0x801E65C8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801E65D0;
    // 0x801E65C8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801E65CC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E65D0:
    // 0x801E65D0: ldc1        $f6, -0x4A68($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4A68);
    // 0x801E65D4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801E65D8: c.le.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d <= ctx->f18.d;
    // 0x801E65DC: nop

    // 0x801E65E0: bc1f        L_801E65F0
    if (!c1cs) {
        // 0x801E65E4: nop
    
            goto L_801E65F0;
    }
    // 0x801E65E4: nop

    // 0x801E65E8: b           L_801E673C
    // 0x801E65EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E65EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E65F0:
    // 0x801E65F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E65F4: lwc1        $f12, -0x4A60($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4A60);
    // 0x801E65F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E65FC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801E6600: lwc1        $f14, -0x4A5C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X4A5C);
    // 0x801E6604: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E6608: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x801E660C: jal         0x801E5A20
    // 0x801E6610: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801E5A20_5A1930(rdram, ctx);
        goto after_1;
    // 0x801E6610: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_1:
    // 0x801E6614: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x801E6618: beq         $v0, $zero, L_801E663C
    if (ctx->r2 == 0) {
        // 0x801E661C: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801E663C;
    }
    // 0x801E661C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801E6620: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E6624: beq         $v0, $at, L_801E6634
    if (ctx->r2 == ctx->r1) {
        // 0x801E6628: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E6634;
    }
    // 0x801E6628: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E662C: beql        $v0, $at, L_801E66C4
    if (ctx->r2 == ctx->r1) {
        // 0x801E6630: lwc1        $f12, 0x8($t0)
        ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
            goto L_801E66C4;
    }
    goto skip_7;
    // 0x801E6630: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    skip_7:
L_801E6634:
    // 0x801E6634: b           L_801E673C
    // 0x801E6638: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E6638: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E663C:
    // 0x801E663C: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801E6640: lwc1        $f14, 0xC($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E6644: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x801E6648: jal         0x801E8560
    // 0x801E664C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801E8560_5A4470(rdram, ctx);
        goto after_2;
    // 0x801E664C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_2:
    // 0x801E6650: bne         $v0, $zero, L_801E6660
    if (ctx->r2 != 0) {
        // 0x801E6654: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801E6660;
    }
    // 0x801E6654: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801E6658: b           L_801E673C
    // 0x801E665C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E665C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E6660:
    // 0x801E6660: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x801E6664: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    // 0x801E6668: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x801E666C: lhu         $a1, 0x94($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X94);
    // 0x801E6670: jal         0x801E3C34
    // 0x801E6674: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801E3C34_59FB44(rdram, ctx);
        goto after_3;
    // 0x801E6674: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_3:
    // 0x801E6678: bne         $v0, $zero, L_801E6688
    if (ctx->r2 != 0) {
        // 0x801E667C: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801E6688;
    }
    // 0x801E667C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801E6680: b           L_801E673C
    // 0x801E6684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E6684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E6688:
    // 0x801E6688: lhu         $t6, 0x16($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0X16);
    // 0x801E668C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x801E6690: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801E6694: addiu       $t7, $t6, 0x200
    ctx->r15 = ADD32(ctx->r14, 0X200);
    // 0x801E6698: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x801E669C: sh          $t8, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r24;
    // 0x801E66A0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801E66A4: jal         0x801E6BC8
    // 0x801E66A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_801E6BC8_5A2AD8(rdram, ctx);
        goto after_4;
    // 0x801E66A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_4:
    // 0x801E66AC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x801E66B0: jal         0x801DACDC
    // 0x801E66B4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801E66B4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_5:
    // 0x801E66B8: b           L_801E673C
    // 0x801E66BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E673C;
    // 0x801E66BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E66C0: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
L_801E66C4:
    // 0x801E66C4: lwc1        $f14, 0xC($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E66C8: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x801E66CC: jal         0x801E8560
    // 0x801E66D0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801E8560_5A4470(rdram, ctx);
        goto after_6;
    // 0x801E66D0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_6:
    // 0x801E66D4: bne         $v0, $zero, L_801E66E4
    if (ctx->r2 != 0) {
        // 0x801E66D8: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801E66E4;
    }
    // 0x801E66D8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801E66DC: b           L_801E673C
    // 0x801E66E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E66E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E66E4:
    // 0x801E66E4: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x801E66E8: lhu         $a0, 0x16($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X16);
    // 0x801E66EC: ori         $a2, $zero, 0x8100
    ctx->r6 = 0 | 0X8100;
    // 0x801E66F0: lhu         $a1, 0x94($t3)
    ctx->r5 = MEM_HU(ctx->r11, 0X94);
    // 0x801E66F4: jal         0x801E3C34
    // 0x801E66F8: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_801E3C34_59FB44(rdram, ctx);
        goto after_7;
    // 0x801E66F8: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_7:
    // 0x801E66FC: bne         $v0, $zero, L_801E670C
    if (ctx->r2 != 0) {
        // 0x801E6700: lw          $t1, 0x54($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X54);
            goto L_801E670C;
    }
    // 0x801E6700: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x801E6704: b           L_801E673C
    // 0x801E6708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E673C;
    // 0x801E6708: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E670C:
    // 0x801E670C: lhu         $t4, 0x16($t1)
    ctx->r12 = MEM_HU(ctx->r9, 0X16);
    // 0x801E6710: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x801E6714: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    // 0x801E6718: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x801E671C: sh          $t5, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r13;
    // 0x801E6720: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801E6724: jal         0x801E6BC8
    // 0x801E6728: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_801E6BC8_5A2AD8(rdram, ctx);
        goto after_8;
    // 0x801E6728: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_8:
    // 0x801E672C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x801E6730: jal         0x801DACDC
    // 0x801E6734: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_9;
    // 0x801E6734: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_9:
    // 0x801E6738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E673C:
    // 0x801E673C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6740: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801E6744: jr          $ra
    // 0x801E6748: nop

    TRACE_RETURN()
    return;
    // 0x801E6748: nop

;}
RECOMP_FUNC void func_801F985C_5B576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F985C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F9860: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801F9864: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801F9868: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F986C: lui         $s0, 0xD
    ctx->r16 = S32(0XD << 16);
    // 0x801F9870: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F9874: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801F9878: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801F987C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F9880: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x801F9884: lw          $s0, -0x720($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X720);
    // 0x801F9888: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x801F988C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F9890: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x801F9894: jalr        $t9
    // 0x801F9898: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F9898: nop

    after_0:
    // 0x801F989C: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x801F98A0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801F98A4: beq         $s0, $zero, L_801F98F8
    if (ctx->r16 == 0) {
        // 0x801F98A8: nop
    
            goto L_801F98F8;
    }
    // 0x801F98A8: nop

    // 0x801F98AC: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x801F98B0: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x801F98B4: addiu       $s2, $s2, -0x27B8
    ctx->r18 = ADD32(ctx->r18, -0X27B8);
    // 0x801F98B8: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801F98BC: beq         $at, $zero, L_801F98F8
    if (ctx->r1 == 0) {
        // 0x801F98C0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801F98F8;
    }
    // 0x801F98C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801F98C4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_801F98C8:
    // 0x801F98C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F98CC: bnel        $s2, $v0, L_801F98E0
    if (ctx->r18 != ctx->r2) {
        // 0x801F98D0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801F98E0;
    }
    goto skip_0;
    // 0x801F98D0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x801F98D4: jalr        $v0
    // 0x801F98D8: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x801F98D8: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x801F98DC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801F98E0:
    // 0x801F98E0: beq         $s0, $zero, L_801F98F8
    if (ctx->r16 == 0) {
        // 0x801F98E4: nop
    
            goto L_801F98F8;
    }
    // 0x801F98E4: nop

    // 0x801F98E8: lhu         $t8, 0x20($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X20);
    // 0x801F98EC: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801F98F0: bnel        $at, $zero, L_801F98C8
    if (ctx->r1 != 0) {
        // 0x801F98F4: lw          $v0, 0xC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC);
            goto L_801F98C8;
    }
    goto skip_1;
    // 0x801F98F4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    skip_1:
L_801F98F8:
    // 0x801F98F8: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801F98FC: lw          $s0, -0x3330($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3330);
    // 0x801F9900: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x801F9904: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801F9908: beql        $s0, $zero, L_801F9970
    if (ctx->r16 == 0) {
        // 0x801F990C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F9970;
    }
    goto skip_2;
    // 0x801F990C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x801F9910: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x801F9914: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x801F9918: addiu       $s2, $s2, 0x5A74
    ctx->r18 = ADD32(ctx->r18, 0X5A74);
    // 0x801F991C: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801F9920: beq         $at, $zero, L_801F996C
    if (ctx->r1 == 0) {
        // 0x801F9924: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801F996C;
    }
    // 0x801F9924: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801F9928: lui         $s3, 0x8021
    ctx->r19 = S32(0X8021 << 16);
    // 0x801F992C: addiu       $s3, $s3, 0x5B8C
    ctx->r19 = ADD32(ctx->r19, 0X5B8C);
    // 0x801F9930: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_801F9934:
    // 0x801F9934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F9938: beq         $s2, $v0, L_801F9948
    if (ctx->r18 == ctx->r2) {
        // 0x801F993C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801F9948;
    }
    // 0x801F993C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801F9940: bnel        $s3, $v1, L_801F9954
    if (ctx->r19 != ctx->r3) {
        // 0x801F9944: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801F9954;
    }
    goto skip_3;
    // 0x801F9944: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_3:
L_801F9948:
    // 0x801F9948: jalr        $v0
    // 0x801F994C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x801F994C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    after_2:
    // 0x801F9950: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801F9954:
    // 0x801F9954: beql        $s0, $zero, L_801F9970
    if (ctx->r16 == 0) {
        // 0x801F9958: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F9970;
    }
    goto skip_4;
    // 0x801F9958: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x801F995C: lhu         $t1, 0x20($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X20);
    // 0x801F9960: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x801F9964: bnel        $at, $zero, L_801F9934
    if (ctx->r1 != 0) {
        // 0x801F9968: lw          $v0, 0xC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC);
            goto L_801F9934;
    }
    goto skip_5;
    // 0x801F9968: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    skip_5:
L_801F996C:
    // 0x801F996C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F9970:
    // 0x801F9970: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F9974: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F9978: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801F997C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801F9980: jr          $ra
    // 0x801F9984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801F9984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801DD3C4_5992D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD3C4: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DD3C8: bltz        $v0, L_801DD3D4
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DD3CC: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_801DD3D4;
    }
    // 0x801DD3CC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x801DD3D0: bne         $at, $zero, L_801DD3E0
    if (ctx->r1 != 0) {
        // 0x801DD3D4: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_801DD3E0;
    }
L_801DD3D4:
    // 0x801DD3D4: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x801DD3D8: bnel        $v0, $at, L_801DD450
    if (ctx->r2 != ctx->r1) {
        // 0x801DD3DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD450;
    }
    goto skip_0;
    // 0x801DD3DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_801DD3E0:
    // 0x801DD3E0: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x801DD3E4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801DD3E8: beq         $v0, $zero, L_801DD408
    if (ctx->r2 == 0) {
        // 0x801DD3EC: nop
    
            goto L_801DD408;
    }
    // 0x801DD3EC: nop

    // 0x801DD3F0: beql        $v0, $zero, L_801DD450
    if (ctx->r2 == 0) {
        // 0x801DD3F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD450;
    }
    goto skip_1;
    // 0x801DD3F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801DD3F8: lbu         $t6, 0x4C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4C);
    // 0x801DD3FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DD400: bnel        $t6, $at, L_801DD450
    if (ctx->r14 != ctx->r1) {
        // 0x801DD404: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD450;
    }
    goto skip_2;
    // 0x801DD404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
L_801DD408:
    // 0x801DD408: lw          $t7, -0x39DC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39DC);
    // 0x801DD40C: lbu         $t8, 0xD2($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XD2);
    // 0x801DD410: bnel        $t8, $zero, L_801DD450
    if (ctx->r24 != 0) {
        // 0x801DD414: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DD450;
    }
    goto skip_3;
    // 0x801DD414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x801DD418: lbu         $t9, 0x60($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X60);
    // 0x801DD41C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DD420: bne         $t9, $at, L_801DD444
    if (ctx->r25 != ctx->r1) {
        // 0x801DD424: nop
    
            goto L_801DD444;
    }
    // 0x801DD424: nop

    // 0x801DD428: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD42C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801DD430: lhu         $t1, 0x86($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X86);
    // 0x801DD434: bne         $t1, $at, L_801DD444
    if (ctx->r9 != ctx->r1) {
        // 0x801DD438: nop
    
            goto L_801DD444;
    }
    // 0x801DD438: nop

    // 0x801DD43C: jr          $ra
    // 0x801DD440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801DD440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD444:
    // 0x801DD444: jr          $ra
    // 0x801DD448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DD448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DD44C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DD450:
    // 0x801DD450: jr          $ra
    // 0x801DD454: nop

    TRACE_RETURN()
    return;
    // 0x801DD454: nop

;}
RECOMP_FUNC void func_801E8890_5A47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8890: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E8894: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801E8898: beq         $a2, $zero, L_801E895C
    if (ctx->r6 == 0) {
        // 0x801E889C: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_801E895C;
    }
    // 0x801E889C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E88A0: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x801E88A4: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x801E88A8: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x801E88AC: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x801E88B0: lbu         $v1, 0x4($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X4);
    // 0x801E88B4: beq         $v1, $zero, L_801E895C
    if (ctx->r3 == 0) {
        // 0x801E88B8: nop
    
            goto L_801E895C;
    }
    // 0x801E88B8: nop

    // 0x801E88BC: lh          $t0, 0x0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X0);
    // 0x801E88C0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801E88C4: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x801E88C8: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x801E88CC: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801E88D0: bnel        $at, $zero, L_801E88EC
    if (ctx->r1 != 0) {
        // 0x801E88D4: lbu         $t5, 0x0($a3)
        ctx->r13 = MEM_BU(ctx->r7, 0X0);
            goto L_801E88EC;
    }
    goto skip_0;
    // 0x801E88D4: lbu         $t5, 0x0($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X0);
    skip_0:
    // 0x801E88D8: lbu         $t3, 0x0($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X0);
    // 0x801E88DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801E88E0: sb          $t4, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r12;
    // 0x801E88E4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x801E88E8: lbu         $t5, 0x0($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X0);
L_801E88EC:
    // 0x801E88EC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801E88F0: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x801E88F4: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x801E88F8: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x801E88FC: beq         $v1, $zero, L_801E895C
    if (ctx->r3 == 0) {
        // 0x801E8900: nop
    
            goto L_801E895C;
    }
    // 0x801E8900: nop

    // 0x801E8904: bnel        $v1, $at, L_801E8928
    if (ctx->r3 != ctx->r1) {
        // 0x801E8908: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_801E8928;
    }
    goto skip_1;
    // 0x801E8908: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    skip_1:
    // 0x801E890C: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x801E8910: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x801E8914: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
    // 0x801E8918: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x801E891C: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x801E8920: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x801E8924: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_801E8928:
    // 0x801E8928: bne         $a1, $at, L_801E8948
    if (ctx->r5 != ctx->r1) {
        // 0x801E892C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801E8948;
    }
    // 0x801E892C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E8930: lw          $t1, 0x48($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X48);
    // 0x801E8934: sll         $t3, $a1, 24
    ctx->r11 = S32(ctx->r5 << 24);
    // 0x801E8938: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x801E893C: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x801E8940: jr          $ra
    // 0x801E8944: sw          $t4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x801E8944: sw          $t4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r12;
L_801E8948:
    // 0x801E8948: lw          $t5, 0x40($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X40);
    // 0x801E894C: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x801E8950: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x801E8954: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x801E8958: sw          $t8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r24;
L_801E895C:
    // 0x801E895C: jr          $ra
    // 0x801E8960: nop

    TRACE_RETURN()
    return;
    // 0x801E8960: nop

;}
RECOMP_FUNC void func_801FA378_5B6288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA378: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801FA37C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801FA380: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801FA384: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA388: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FA38C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801FA390: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801FA394: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801FA398: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FA39C: sh          $a0, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r4;
    // 0x801FA3A0: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801FA3A4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA3A8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA3AC: sh          $a1, -0x501E($at)
    MEM_H(-0X501E, ctx->r1) = ctx->r5;
    // 0x801FA3B0: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801FA3B4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA3B8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FA3BC: sh          $a2, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r6;
    // 0x801FA3C0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801FA3C4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA3C8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FA3CC: sh          $a3, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r7;
    // 0x801FA3D0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801FA3D4: lh          $t6, 0x12($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X12);
    // 0x801FA3D8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA3DC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FA3E0: sh          $t6, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r14;
    // 0x801FA3E4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801FA3E8: lhu         $t8, 0x16($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X16);
    // 0x801FA3EC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA3F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FA3F4: jr          $ra
    // 0x801FA3F8: sh          $t8, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801FA3F8: sh          $t8, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_801CF51C_58B42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF51C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CF520: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801CF524: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801CF528: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CF52C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801CF530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CF534: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CF538: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x801CF53C: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801CF540: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801CF544: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801CF548: addiu       $a1, $t6, 0x84
    ctx->r5 = ADD32(ctx->r14, 0X84);
    // 0x801CF54C: jal         0x8001D14C
    // 0x801CF550: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_0;
    // 0x801CF550: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801CF554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CF558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CF55C: jr          $ra
    // 0x801CF560: nop

    TRACE_RETURN()
    return;
    // 0x801CF560: nop

;}
RECOMP_FUNC void func_801F0914_5AC824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F091C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F0920: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F0924: jal         0x801EFBDC
    // 0x801F0928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801EFBDC_5ABAEC(rdram, ctx);
        goto after_0;
    // 0x801F0928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801F092C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0934: jr          $ra
    // 0x801F0938: nop

    TRACE_RETURN()
    return;
    // 0x801F0938: nop

;}
RECOMP_FUNC void func_801FB240_5B7150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB240: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801FB244: lw          $v0, -0x3A00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A00);
    // 0x801FB248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB24C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB250: lhu         $t6, 0x22($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X22);
    // 0x801FB254: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x801FB258: jal         0x801FB270
    // 0x801FB25C: sh          $t7, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r15;
    func_801FB270_5B7180(rdram, ctx);
        goto after_0;
    // 0x801FB25C: sh          $t7, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r15;
    after_0:
    // 0x801FB260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB268: jr          $ra
    // 0x801FB26C: nop

    TRACE_RETURN()
    return;
    // 0x801FB26C: nop

;}
RECOMP_FUNC void func_801F5050_5B0F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5058: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F505C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x801F5060: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801F5064: jal         0x801F50A4
    // 0x801F5068: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F5068: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    after_0:
    // 0x801F506C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5074: jr          $ra
    // 0x801F5078: nop

    TRACE_RETURN()
    return;
    // 0x801F5078: nop

;}
RECOMP_FUNC void func_801E5154_5A1064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E5158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E515C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801E5160: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E5164: jal         0x801E5090
    // 0x801E5168: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801E5090_5A0FA0(rdram, ctx);
        goto after_0;
    // 0x801E5168: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801E516C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801E5170: lw          $t7, -0x39E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39E4);
    // 0x801E5174: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5178: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E517C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E5180: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x801E5184: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E5188: lwc1        $f6, -0x4C3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4C3C);
    // 0x801E518C: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801E5190: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E5194: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E5198: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x801E519C: lwc1        $f10, -0x4C38($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4C38);
    // 0x801E51A0: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801E51A4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x801E51A8: nop

    // 0x801E51AC: bc1fl       L_801E51FC
    if (!c1cs) {
        // 0x801E51B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E51FC;
    }
    goto skip_0;
    // 0x801E51B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E51B4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801E51B8: jal         0x801E7DE8
    // 0x801E51BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_1;
    // 0x801E51BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x801E51C0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E51C4: beq         $v0, $zero, L_801E51D8
    if (ctx->r2 == 0) {
        // 0x801E51C8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_801E51D8;
    }
    // 0x801E51C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E51CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E51D0: b           L_801E51E0
    // 0x801E51D4: lwc1        $f0, -0x4C34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4C34);
        goto L_801E51E0;
    // 0x801E51D4: lwc1        $f0, -0x4C34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4C34);
L_801E51D8:
    // 0x801E51D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E51DC: lwc1        $f0, -0x4C30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4C30);
L_801E51E0:
    // 0x801E51E0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x801E51E4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x801E51E8: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E51EC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x801E51F0: jal         0x801DAD08
    // 0x801E51F4: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    func_801DAD08_596C18(rdram, ctx);
        goto after_2;
    // 0x801E51F4: sh          $zero, 0x30($t8)
    MEM_H(0X30, ctx->r24) = 0;
    after_2:
    // 0x801E51F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E51FC:
    // 0x801E51FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E5200: jr          $ra
    // 0x801E5204: nop

    TRACE_RETURN()
    return;
    // 0x801E5204: nop

;}
RECOMP_FUNC void func_801CB7F4_587704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB7F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CB7F8: jr          $ra
    // 0x801CB7FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CB7FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E2CAC_59EBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2CAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2CB4: jal         0x801E2CEC
    // 0x801E2CB8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_801E2CEC_59EBFC(rdram, ctx);
        goto after_0;
    // 0x801E2CB8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x801E2CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2CC4: jr          $ra
    // 0x801E2CC8: nop

    TRACE_RETURN()
    return;
    // 0x801E2CC8: nop

;}
RECOMP_FUNC void func_801F6068_5B1F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F606C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6070: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6074: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x801F6078: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    // 0x801F607C: jal         0x801F50A4
    // 0x801F6080: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    func_801F50A4_5B0FB4(rdram, ctx);
        goto after_0;
    // 0x801F6080: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    after_0:
    // 0x801F6084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F608C: jr          $ra
    // 0x801F6090: nop

    TRACE_RETURN()
    return;
    // 0x801F6090: nop

;}
RECOMP_FUNC void func_801EE160_5AA070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE160: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801EE164: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801EE168: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801EE16C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EE170: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EE174: beq         $a1, $zero, L_801EE214
    if (ctx->r5 == 0) {
        // 0x801EE178: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801EE214;
    }
    // 0x801EE178: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EE17C: beq         $a0, $zero, L_801EE214
    if (ctx->r4 == 0) {
        // 0x801EE180: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_801EE214;
    }
    // 0x801EE180: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801EE184: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801EE188: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801EE18C: jal         0x8002A718
    // 0x801EE190: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    func_8002A718_2B318(rdram, ctx);
        goto after_0;
    // 0x801EE190: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    after_0:
    // 0x801EE194: lh          $t6, 0x68($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X68);
    // 0x801EE198: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EE19C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EE1A0: beql        $t6, $zero, L_801EE214
    if (ctx->r14 == 0) {
        // 0x801EE1A4: sb          $t7, 0x64($s0)
        MEM_B(0X64, ctx->r16) = ctx->r15;
            goto L_801EE214;
    }
    goto skip_0;
    // 0x801EE1A4: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    skip_0:
    // 0x801EE1A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801EE1AC: nop

    // 0x801EE1B0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801EE1B4: nop

    // 0x801EE1B8: bc1fl       L_801EE214
    if (!c1cs) {
        // 0x801EE1BC: sb          $t7, 0x64($s0)
        MEM_B(0X64, ctx->r16) = ctx->r15;
            goto L_801EE214;
    }
    goto skip_1;
    // 0x801EE1BC: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    skip_1:
    // 0x801EE1C0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x801EE1C4: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EE1C8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801EE1CC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801EE1D0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801EE1D4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801EE1D8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801EE1DC: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EE1E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801EE1E4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x801EE1E8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EE1EC: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801EE1F0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EE1F4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801EE1F8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801EE1FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EE200: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x801EE204: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EE208: b           L_801EE214
    // 0x801EE20C: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
        goto L_801EE214;
    // 0x801EE20C: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x801EE210: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
L_801EE214:
    // 0x801EE214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EE218: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801EE21C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801EE220: jr          $ra
    // 0x801EE224: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801EE224: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801F5518_5B1428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F551C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5520: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5524: jal         0x801E4260
    // 0x801F5528: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    func_801E4260_5A0170(rdram, ctx);
        goto after_0;
    // 0x801F5528: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    after_0:
    // 0x801F552C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5534: jr          $ra
    // 0x801F5538: nop

    TRACE_RETURN()
    return;
    // 0x801F5538: nop

;}
RECOMP_FUNC void func_801FA6E4_5B65F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA6E4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801FA6E8: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801FA6EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801FA6F0: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x801FA6F4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x801FA6F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FA6FC: addu        $t7, $v0, $a1
    ctx->r15 = ADD32(ctx->r2, ctx->r5);
    // 0x801FA700: lhu         $t8, 0x2DFC($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DFC);
    // 0x801FA704: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA708: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FA70C: sh          $t8, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r24;
    // 0x801FA710: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801FA714: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA718: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801FA71C: addu        $t9, $v0, $a1
    ctx->r25 = ADD32(ctx->r2, ctx->r5);
    // 0x801FA720: lh          $t0, 0x2FF8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2FF8);
    // 0x801FA724: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FA728: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801FA72C: sh          $t0, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r8;
    // 0x801FA730: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801FA734: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA738: addu        $t1, $v0, $a1
    ctx->r9 = ADD32(ctx->r2, ctx->r5);
    // 0x801FA73C: lh          $t2, 0x2FFA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2FFA);
    // 0x801FA740: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FA744: sh          $t2, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r10;
    // 0x801FA748: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801FA74C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA750: addu        $t3, $v0, $a1
    ctx->r11 = ADD32(ctx->r2, ctx->r5);
    // 0x801FA754: lh          $t4, 0x2FFC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2FFC);
    // 0x801FA758: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FA75C: sh          $t4, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r12;
    // 0x801FA760: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801FA764: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA768: addu        $t5, $v0, $a1
    ctx->r13 = ADD32(ctx->r2, ctx->r5);
    // 0x801FA76C: lh          $t6, 0x2FFE($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2FFE);
    // 0x801FA770: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FA774: beq         $a0, $zero, L_801FA794
    if (ctx->r4 == 0) {
        // 0x801FA778: sh          $t6, -0x5016($at)
        MEM_H(-0X5016, ctx->r1) = ctx->r14;
            goto L_801FA794;
    }
    // 0x801FA778: sh          $t6, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r14;
    // 0x801FA77C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801FA780: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA784: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801FA788: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FA78C: jr          $ra
    // 0x801FA790: sb          $t7, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801FA790: sb          $t7, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r15;
L_801FA794:
    // 0x801FA794: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x801FA798: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA79C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801FA7A0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FA7A4: sb          $t9, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r25;
    // 0x801FA7A8: jr          $ra
    // 0x801FA7AC: nop

    TRACE_RETURN()
    return;
    // 0x801FA7AC: nop

;}
RECOMP_FUNC void func_801E14AC_59D3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14B0: jr          $ra
    // 0x801E14B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E8160_5A4070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8160: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E8164: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x801E8168: lw          $t6, 0xD4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XD4);
    // 0x801E816C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x801E8170: jr          $ra
    // 0x801E8174: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801E8174: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_801E8678_5A4588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E867C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8680: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x801E8684: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801E8688: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801E868C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E8690: jal         0x801E8560
    // 0x801E8694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E8560_5A4470(rdram, ctx);
        goto after_0;
    // 0x801E8694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E8698: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E869C: bne         $v0, $zero, L_801E86AC
    if (ctx->r2 != 0) {
        // 0x801E86A0: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_801E86AC;
    }
    // 0x801E86A0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801E86A4: b           L_801E8714
    // 0x801E86A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E8714;
    // 0x801E86A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E86AC:
    // 0x801E86AC: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x801E86B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E86B4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801E86B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E86BC: lwc1        $f16, -0x4A1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4A1C);
    // 0x801E86C0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801E86C4: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801E86C8: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801E86CC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E86D0: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801E86D4: nop

    // 0x801E86D8: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801E86DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E86E0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E86E4: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801E86E8: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801E86EC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801E86F0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E86F4: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801E86F8: sub.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801E86FC: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801E8700: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801E8704: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E8708: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E870C: jal         0x801E8560
    // 0x801E8710: nop

    func_801E8560_5A4470(rdram, ctx);
        goto after_1;
    // 0x801E8710: nop

    after_1:
L_801E8714:
    // 0x801E8714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E8718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E871C: jr          $ra
    // 0x801E8720: nop

    TRACE_RETURN()
    return;
    // 0x801E8720: nop

;}
RECOMP_FUNC void func_801DBA80_597990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBA80: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x801DBA84: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801DBA88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801DBA8C: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x801DBA90: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DBA94: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x801DBA98: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801DBA9C: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x801DBAA0: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x801DBAA4: lhu         $v0, 0x11A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X11A);
    // 0x801DBAA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DBAAC: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x801DBAB0: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x801DBAB4: addiu       $t9, $sp, 0xE8
    ctx->r25 = ADD32(ctx->r29, 0XE8);
    // 0x801DBAB8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801DBABC: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    // 0x801DBAC0: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x801DBAC4: beq         $t6, $zero, L_801DBB9C
    if (ctx->r14 == 0) {
        // 0x801DBAC8: swc1        $f6, 0x114($sp)
        MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
            goto L_801DBB9C;
    }
    // 0x801DBAC8: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x801DBACC: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801DBAD0: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x801DBAD4: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x801DBAD8: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DBADC: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801DBAE0: addiu       $a3, $sp, 0xE4
    ctx->r7 = ADD32(ctx->r29, 0XE4);
    // 0x801DBAE4: addiu       $t0, $sp, 0xEC
    ctx->r8 = ADD32(ctx->r29, 0XEC);
    // 0x801DBAE8: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x801DBAEC: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801DBAF0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DBAF4: beq         $v1, $zero, L_801DBB28
    if (ctx->r3 == 0) {
        // 0x801DBAF8: swc1        $f16, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
            goto L_801DBB28;
    }
    // 0x801DBAF8: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    // 0x801DBAFC: beq         $t7, $zero, L_801DBB28
    if (ctx->r15 == 0) {
        // 0x801DBB00: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_801DBB28;
    }
    // 0x801DBB00: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x801DBB04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DBB08: beql        $t8, $zero, L_801DBB20
    if (ctx->r24 == 0) {
        // 0x801DBB0C: swc1        $f12, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f12.u32l;
            goto L_801DBB20;
    }
    goto skip_0;
    // 0x801DBB0C: swc1        $f12, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f12.u32l;
    skip_0:
    // 0x801DBB10: neg.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = -ctx->f12.fl;
    // 0x801DBB14: b           L_801DBB20
    // 0x801DBB18: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
        goto L_801DBB20;
    // 0x801DBB18: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
    // 0x801DBB1C: swc1        $f12, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f12.u32l;
L_801DBB20:
    // 0x801DBB20: b           L_801DBB44
    // 0x801DBB24: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
        goto L_801DBB44;
    // 0x801DBB24: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
L_801DBB28:
    // 0x801DBB28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DBB2C: beq         $v1, $zero, L_801DBB40
    if (ctx->r3 == 0) {
        // 0x801DBB30: swc1        $f6, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
            goto L_801DBB40;
    }
    // 0x801DBB30: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x801DBB34: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x801DBB38: b           L_801DBB44
    // 0x801DBB3C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
        goto L_801DBB44;
    // 0x801DBB3C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
L_801DBB40:
    // 0x801DBB40: swc1        $f12, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f12.u32l;
L_801DBB44:
    // 0x801DBB44: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DBB48: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DBB4C: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801DBB50: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801DBB54: swc1        $f14, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f14.u32l;
    // 0x801DBB58: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DBB5C: jal         0x80033898
    // 0x801DBB60: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DBB60: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x801DBB64: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DBB68: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801DBB6C: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DBB70: lwc1        $f14, 0x110($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X110);
    // 0x801DBB74: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DBB78: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DBB7C: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x801DBB80: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801DBB84: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DBB88: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DBB8C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DBB90: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DBB94: b           L_801DBC64
    // 0x801DBB98: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
        goto L_801DBC64;
    // 0x801DBB98: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
L_801DBB9C:
    // 0x801DBB9C: bne         $v1, $zero, L_801DBBAC
    if (ctx->r3 != 0) {
        // 0x801DBBA0: andi        $t1, $v0, 0x4
        ctx->r9 = ctx->r2 & 0X4;
            goto L_801DBBAC;
    }
    // 0x801DBBA0: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x801DBBA4: beq         $t1, $zero, L_801DBBCC
    if (ctx->r9 == 0) {
        // 0x801DBBA8: andi        $t2, $v0, 0x8
        ctx->r10 = ctx->r2 & 0X8;
            goto L_801DBBCC;
    }
    // 0x801DBBA8: andi        $t2, $v0, 0x8
    ctx->r10 = ctx->r2 & 0X8;
L_801DBBAC:
    // 0x801DBBAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DBBB0: beq         $v1, $zero, L_801DBBC0
    if (ctx->r3 == 0) {
        // 0x801DBBB4: swc1        $f6, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
            goto L_801DBBC0;
    }
    // 0x801DBBB4: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x801DBBB8: b           L_801DBBEC
    // 0x801DBBBC: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
        goto L_801DBBEC;
    // 0x801DBBBC: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
L_801DBBC0:
    // 0x801DBBC0: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x801DBBC4: b           L_801DBBEC
    // 0x801DBBC8: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
        goto L_801DBBEC;
    // 0x801DBBC8: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
L_801DBBCC:
    // 0x801DBBCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801DBBD0: beql        $t2, $zero, L_801DBBE4
    if (ctx->r10 == 0) {
        // 0x801DBBD4: neg.s       $f10, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
            goto L_801DBBE4;
    }
    goto skip_1;
    // 0x801DBBD4: neg.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
    skip_1:
    // 0x801DBBD8: b           L_801DBBE8
    // 0x801DBBDC: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
        goto L_801DBBE8;
    // 0x801DBBDC: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
    // 0x801DBBE0: neg.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
L_801DBBE4:
    // 0x801DBBE4: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
L_801DBBE8:
    // 0x801DBBE8: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
L_801DBBEC:
    // 0x801DBBEC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801DBBF0: addiu       $t3, $sp, 0xF4
    ctx->r11 = ADD32(ctx->r29, 0XF4);
    // 0x801DBBF4: addiu       $t4, $sp, 0xF8
    ctx->r12 = ADD32(ctx->r29, 0XF8);
    // 0x801DBBF8: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x801DBBFC: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DBC00: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801DBC04: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801DBC08: swc1        $f14, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f14.u32l;
    // 0x801DBC0C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DBC10: jal         0x80033898
    // 0x801DBC14: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DBC14: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x801DBC18: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DBC1C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801DBC20: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DBC24: lwc1        $f14, 0x110($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X110);
    // 0x801DBC28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DBC2C: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DBC30: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DBC34: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801DBC38: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DBC3C: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x801DBC40: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DBC44: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DBC48: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x801DBC4C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801DBC50: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x801DBC54: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801DBC58: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DBC5C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801DBC60: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
L_801DBC64:
    // 0x801DBC64: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x801DBC68: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x801DBC6C: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x801DBC70: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DBC74: addiu       $a0, $sp, 0xF0
    ctx->r4 = ADD32(ctx->r29, 0XF0);
    // 0x801DBC78: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x801DBC7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DBC80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DBC84: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801DBC88: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801DBC8C: jal         0x801DBD1C
    // 0x801DBC90: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_801DBD1C_597C2C(rdram, ctx);
        goto after_2;
    // 0x801DBC90: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_2:
    // 0x801DBC94: bne         $v0, $zero, L_801DBCA4
    if (ctx->r2 != 0) {
        // 0x801DBC98: lh          $t7, 0x7C($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X7C);
            goto L_801DBCA4;
    }
    // 0x801DBC98: lh          $t7, 0x7C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X7C);
    // 0x801DBC9C: b           L_801DBD08
    // 0x801DBCA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DBD08;
    // 0x801DBCA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DBCA4:
    // 0x801DBCA4: beq         $t7, $zero, L_801DBCE8
    if (ctx->r15 == 0) {
        // 0x801DBCA8: lwc1        $f2, 0x6C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_801DBCE8;
    }
    // 0x801DBCA8: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DBCAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DBCB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DBCB4: lw          $v1, 0x120($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X120);
    // 0x801DBCB8: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x801DBCBC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DBCC0: bc1fl       L_801DBCD4
    if (!c1cs) {
        // 0x801DBCC4: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801DBCD4;
    }
    goto skip_2;
    // 0x801DBCC4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_2:
    // 0x801DBCC8: b           L_801DBCD4
    // 0x801DBCCC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_801DBCD4;
    // 0x801DBCCC: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801DBCD0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801DBCD4:
    // 0x801DBCD4: lwc1        $f8, -0x50B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X50B0);
    // 0x801DBCD8: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801DBCDC: nop

    // 0x801DBCE0: bc1fl       L_801DBCF4
    if (!c1cs) {
        // 0x801DBCE4: swc1        $f10, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
            goto L_801DBCF4;
    }
    goto skip_3;
    // 0x801DBCE4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    skip_3:
L_801DBCE8:
    // 0x801DBCE8: b           L_801DBD08
    // 0x801DBCEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DBD08;
    // 0x801DBCEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DBCF0: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_801DBCF4:
    // 0x801DBCF4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DBCF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DBCFC: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x801DBD00: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801DBD04: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_801DBD08:
    // 0x801DBD08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801DBD0C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801DBD10: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    // 0x801DBD14: jr          $ra
    // 0x801DBD18: nop

    TRACE_RETURN()
    return;
    // 0x801DBD18: nop

;}
RECOMP_FUNC void func_801E1ED0_59DDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1ED8: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x801E1EDC: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801E1EE0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801E1EE4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801E1EE8: jal         0x801E1F5C
    // 0x801E1EEC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    func_801E1F5C_59DE6C(rdram, ctx);
        goto after_0;
    // 0x801E1EEC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_0:
    // 0x801E1EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1EF8: jr          $ra
    // 0x801E1EFC: nop

    TRACE_RETURN()
    return;
    // 0x801E1EFC: nop

;}
RECOMP_FUNC void func_801DB3A0_5972B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB3A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DB3A4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801DB3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB3B0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801DB3B4: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801DB3B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DB3BC: jal         0x801CF51C
    // 0x801DB3C0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_801CF51C_58B42C(rdram, ctx);
        goto after_0;
    // 0x801DB3C0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801DB3C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DB3C8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801DB3CC: jal         0x801DB418
    // 0x801DB3D0: lhu         $a2, 0x2A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X2A);
    func_801DB418_597328(rdram, ctx);
        goto after_1;
    // 0x801DB3D0: lhu         $a2, 0x2A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X2A);
    after_1:
    // 0x801DB3D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB3D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB3DC: jr          $ra
    // 0x801DB3E0: nop

    TRACE_RETURN()
    return;
    // 0x801DB3E0: nop

;}
RECOMP_FUNC void func_801F559C_5B14AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F559C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F55A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F55A4: jal         0x801E43B0
    // 0x801F55A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E43B0_5A02C0(rdram, ctx);
        goto after_0;
    // 0x801F55A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F55AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F55B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F55B4: jr          $ra
    // 0x801F55B8: nop

    TRACE_RETURN()
    return;
    // 0x801F55B8: nop

;}
RECOMP_FUNC void func_801E2CEC_59EBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2CF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E2CF8: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801E2CFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2D00: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E2D04: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801E2D08: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E2D0C: sb          $t8, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r24;
    // 0x801E2D10: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2D14: jal         0x801E8964
    // 0x801E2D18: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    func_801E8964_5A4874(rdram, ctx);
        goto after_0;
    // 0x801E2D18: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x801E2D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2D24: jr          $ra
    // 0x801E2D28: nop

    TRACE_RETURN()
    return;
    // 0x801E2D28: nop

;}
RECOMP_FUNC void func_801F4E38_5B0D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4E38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F4E3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F4E40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F4E44: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F4E48: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F4E4C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F4E50: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x801F4E54: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F4E58: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F4E5C: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801F4E60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4E64: sltiu       $a2, $v1, 0x1
    ctx->r6 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801F4E68: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x801F4E6C: beq         $a2, $zero, L_801F4E8C
    if (ctx->r6 == 0) {
        // 0x801F4E70: sh          $t8, 0x30($v0)
        MEM_H(0X30, ctx->r2) = ctx->r24;
            goto L_801F4E8C;
    }
    // 0x801F4E70: sh          $t8, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r24;
    // 0x801F4E74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F4E78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F4E7C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801F4E80: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
    // 0x801F4E84: lwc1        $f6, -0x3D4C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3D4C);
    // 0x801F4E88: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
L_801F4E8C:
    // 0x801F4E8C: lhu         $t0, 0x98($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X98);
    // 0x801F4E90: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F4E94: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F4E98: bne         $t0, $zero, L_801F4F20
    if (ctx->r8 != 0) {
        // 0x801F4E9C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_801F4F20;
    }
    // 0x801F4E9C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F4EA0: jalr        $t9
    // 0x801F4EA4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F4EA4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801F4EA8: lwc1        $f2, 0xD0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x801F4EAC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801F4EB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F4EB4: div.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801F4EB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4EBC: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801F4EC0: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x801F4EC4: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801F4EC8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801F4ECC: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x801F4ED0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801F4ED4: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x801F4ED8: nop

    // 0x801F4EDC: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801F4EE0: bne         $at, $zero, L_801F4F20
    if (ctx->r1 != 0) {
        // 0x801F4EE4: nop
    
            goto L_801F4F20;
    }
    // 0x801F4EE4: nop

    // 0x801F4EE8: lbu         $t5, 0x30($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X30);
    // 0x801F4EEC: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4EF4: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x801F4EF8: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x801F4EFC: jal         0x801E3324
    // 0x801F4F00: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_1;
    // 0x801F4F00: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    after_1:
    // 0x801F4F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4F08: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F4F0C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801F4F10: jal         0x801DAC7C
    // 0x801F4F14: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_2;
    // 0x801F4F14: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_2:
    // 0x801F4F18: b           L_801F4F94
    // 0x801F4F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F4F94;
    // 0x801F4F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4F20:
    // 0x801F4F20: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F4F24: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F4F28: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801F4F2C: jalr        $t9
    // 0x801F4F30: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801F4F30: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_3:
    // 0x801F4F34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F4F38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F4F3C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801F4F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4F44: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x801F4F48: lwc1        $f10, 0x28($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X28);
    // 0x801F4F4C: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x801F4F50: nop

    // 0x801F4F54: bc1fl       L_801F4F94
    if (!c1cs) {
        // 0x801F4F58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F4F94;
    }
    goto skip_0;
    // 0x801F4F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F4F5C: lbu         $t8, 0x30($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X30);
    // 0x801F4F60: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4F64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F4F68: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x801F4F6C: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    // 0x801F4F70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F4F74: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x801F4F78: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4F7C: swc1        $f4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f4.u32l;
    // 0x801F4F80: swc1        $f6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f6.u32l;
    // 0x801F4F84: sb          $zero, 0x2F($t3)
    MEM_B(0X2F, ctx->r11) = 0;
    // 0x801F4F88: jal         0x801DACDC
    // 0x801F4F8C: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801F4F8C: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_4:
    // 0x801F4F90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4F94:
    // 0x801F4F94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F4F98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F4F9C: jr          $ra
    // 0x801F4FA0: nop

    TRACE_RETURN()
    return;
    // 0x801F4FA0: nop

;}
RECOMP_FUNC void func_801E08B0_59C7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E08B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E08B4: jr          $ra
    // 0x801E08B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E08B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801EBF14_5A7E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBF14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EBF18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EBF1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EBF20: lui         $a2, 0x42FA
    ctx->r6 = S32(0X42FA << 16);
    // 0x801EBF24: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    // 0x801EBF28: ori         $a3, $a3, 0x428F
    ctx->r7 = ctx->r7 | 0X428F;
    // 0x801EBF2C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801EBF30: jal         0x801EBF48
    // 0x801EBF34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801EBF48_5A7E58(rdram, ctx);
        goto after_0;
    // 0x801EBF34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x801EBF38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EBF40: jr          $ra
    // 0x801EBF44: nop

    TRACE_RETURN()
    return;
    // 0x801EBF44: nop

;}
RECOMP_FUNC void func_801E2740_59E650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2748: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E274C: addiu       $a2, $zero, 0x180
    ctx->r6 = ADD32(0, 0X180);
    // 0x801E2750: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x801E2754: jal         0x801E3C34
    // 0x801E2758: lhu         $a1, 0x2($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X2);
    func_801E3C34_59FB44(rdram, ctx);
        goto after_0;
    // 0x801E2758: lhu         $a1, 0x2($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X2);
    after_0:
    // 0x801E275C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2764: jr          $ra
    // 0x801E2768: nop

    TRACE_RETURN()
    return;
    // 0x801E2768: nop

;}
RECOMP_FUNC void func_801D03DC_58C2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D03DC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D03E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D03E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D03E8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801D03EC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801D03F0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801D03F4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801D03F8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x801D03FC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D0400: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x801D0404: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x801D0408: addiu       $a2, $a2, -0x34C0
    ctx->r6 = ADD32(ctx->r6, -0X34C0);
    // 0x801D040C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801D0410: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x801D0414: swc1        $f6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f6.u32l;
    // 0x801D0418: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x801D041C: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x801D0420: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    // 0x801D0424: jal         0x8001D898
    // 0x801D0428: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_8001D898_1E498(rdram, ctx);
        goto after_0;
    // 0x801D0428: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_0:
    // 0x801D042C: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D0430: lwc1        $f14, 0x0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D0434: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D0438: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D043C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0440: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x801D0444: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D0448: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801D044C: add.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801D0450: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x801D0454: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D0458: nop

    // 0x801D045C: bc1fl       L_801D0470
    if (!c1cs) {
        // 0x801D0460: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801D0470;
    }
    goto skip_0;
    // 0x801D0460: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801D0464: b           L_801D0470
    // 0x801D0468: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801D0470;
    // 0x801D0468: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801D046C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801D0470:
    // 0x801D0470: ldc1        $f8, -0x5548($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5548);
    // 0x801D0474: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801D0478: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D047C: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801D0480: nop

    // 0x801D0484: bc1fl       L_801D04BC
    if (!c1cs) {
        // 0x801D0488: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_801D04BC;
    }
    goto skip_1;
    // 0x801D0488: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_1:
    // 0x801D048C: jal         0x80003F30
    // 0x801D0490: lhu         $a0, 0x94($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X94);
    func_80003F30_4B30(rdram, ctx);
        goto after_1;
    // 0x801D0490: lhu         $a0, 0x94($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X94);
    after_1:
    // 0x801D0494: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D0498: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D049C: nop

    // 0x801D04A0: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801D04A4: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x801D04A8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D04AC: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x801D04B0: b           L_801D04D8
    // 0x801D04B4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
        goto L_801D04D8;
    // 0x801D04B4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x801D04B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_801D04BC:
    // 0x801D04BC: nop

    // 0x801D04C0: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801D04C4: mul.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x801D04C8: nop

    // 0x801D04CC: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x801D04D0: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x801D04D4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_801D04D8:
    // 0x801D04D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D04DC: nop

    // 0x801D04E0: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x801D04E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D04E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D04EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D04F0: jr          $ra
    // 0x801D04F4: nop

    TRACE_RETURN()
    return;
    // 0x801D04F4: nop

;}
RECOMP_FUNC void func_801E5A20_5A1930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5A24: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x801E5A28: lwc1        $f20, 0x28($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E5A2C: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x801E5A30: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x801E5A34: c.lt.s      $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f12.fl < ctx->f20.fl;
    // 0x801E5A38: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801E5A3C: bc1fl       L_801E5A84
    if (!c1cs) {
        // 0x801E5A40: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801E5A84;
    }
    goto skip_0;
    // 0x801E5A40: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x801E5A44: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E5A48: nop

    // 0x801E5A4C: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x801E5A50: nop

    // 0x801E5A54: bc1fl       L_801E5A68
    if (!c1cs) {
        // 0x801E5A58: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_801E5A68;
    }
    goto skip_1;
    // 0x801E5A58: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    skip_1:
    // 0x801E5A5C: b           L_801E5A68
    // 0x801E5A60: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
        goto L_801E5A68;
    // 0x801E5A60: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
    // 0x801E5A64: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_801E5A68:
    // 0x801E5A68: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801E5A6C: nop

    // 0x801E5A70: bc1fl       L_801E5A84
    if (!c1cs) {
        // 0x801E5A74: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801E5A84;
    }
    goto skip_2;
    // 0x801E5A74: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_2:
    // 0x801E5A78: b           L_801E5B5C
    // 0x801E5A7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5B5C;
    // 0x801E5A7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E5A80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_801E5A84:
    // 0x801E5A84: nop

    // 0x801E5A88: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x801E5A8C: nop

    // 0x801E5A90: bc1fl       L_801E5AA4
    if (!c1cs) {
        // 0x801E5A94: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_801E5AA4;
    }
    goto skip_3;
    // 0x801E5A94: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_3:
    // 0x801E5A98: b           L_801E5AA4
    // 0x801E5A9C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
        goto L_801E5AA4;
    // 0x801E5A9C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x801E5AA0: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_801E5AA4:
    // 0x801E5AA4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801E5AA8: nop

    // 0x801E5AAC: bc1fl       L_801E5AD0
    if (!c1cs) {
        // 0x801E5AB0: neg.s       $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
            goto L_801E5AD0;
    }
    goto skip_4;
    // 0x801E5AB0: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    skip_4:
    // 0x801E5AB4: c.lt.s      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.fl < ctx->f22.fl;
    // 0x801E5AB8: nop

    // 0x801E5ABC: bc1fl       L_801E5AD0
    if (!c1cs) {
        // 0x801E5AC0: neg.s       $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
            goto L_801E5AD0;
    }
    goto skip_5;
    // 0x801E5AC0: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    skip_5:
    // 0x801E5AC4: b           L_801E5B5C
    // 0x801E5AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E5B5C;
    // 0x801E5AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E5ACC: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
L_801E5AD0:
    // 0x801E5AD0: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x801E5AD4: nop

    // 0x801E5AD8: bc1fl       L_801E5B18
    if (!c1cs) {
        // 0x801E5ADC: c.lt.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
            goto L_801E5B18;
    }
    goto skip_6;
    // 0x801E5ADC: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    skip_6:
    // 0x801E5AE0: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x801E5AE4: nop

    // 0x801E5AE8: bc1fl       L_801E5AFC
    if (!c1cs) {
        // 0x801E5AEC: mov.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
            goto L_801E5AFC;
    }
    goto skip_7;
    // 0x801E5AEC: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    skip_7:
    // 0x801E5AF0: b           L_801E5AFC
    // 0x801E5AF4: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
        goto L_801E5AFC;
    // 0x801E5AF4: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
    // 0x801E5AF8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_801E5AFC:
    // 0x801E5AFC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801E5B00: nop

    // 0x801E5B04: bc1fl       L_801E5B18
    if (!c1cs) {
        // 0x801E5B08: c.lt.s      $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
            goto L_801E5B18;
    }
    goto skip_8;
    // 0x801E5B08: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    skip_8:
    // 0x801E5B0C: b           L_801E5B5C
    // 0x801E5B10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801E5B5C;
    // 0x801E5B10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801E5B14: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
L_801E5B18:
    // 0x801E5B18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801E5B1C: bc1fl       L_801E5B30
    if (!c1cs) {
        // 0x801E5B20: mov.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
            goto L_801E5B30;
    }
    goto skip_9;
    // 0x801E5B20: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    skip_9:
    // 0x801E5B24: b           L_801E5B30
    // 0x801E5B28: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
        goto L_801E5B30;
    // 0x801E5B28: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    // 0x801E5B2C: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_801E5B30:
    // 0x801E5B30: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801E5B34: nop

    // 0x801E5B38: bc1f        L_801E5B5C
    if (!c1cs) {
        // 0x801E5B3C: nop
    
            goto L_801E5B5C;
    }
    // 0x801E5B3C: nop

    // 0x801E5B40: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x801E5B44: c.lt.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl < ctx->f6.fl;
    // 0x801E5B48: nop

    // 0x801E5B4C: bc1f        L_801E5B5C
    if (!c1cs) {
        // 0x801E5B50: nop
    
            goto L_801E5B5C;
    }
    // 0x801E5B50: nop

    // 0x801E5B54: b           L_801E5B5C
    // 0x801E5B58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801E5B5C;
    // 0x801E5B58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801E5B5C:
    // 0x801E5B5C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x801E5B60: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x801E5B64: jr          $ra
    // 0x801E5B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801E5B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801F692C_5B283C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F692C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6934: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801F6938: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F693C: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801F6940: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801F6944: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F6948: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F694C: nop

    // 0x801F6950: bc1fl       L_801F6964
    if (!c1cs) {
        // 0x801F6954: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6964;
    }
    goto skip_0;
    // 0x801F6954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6958: jal         0x801DAD08
    // 0x801F695C: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    func_801DAD08_596C18(rdram, ctx);
        goto after_0;
    // 0x801F695C: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    after_0:
    // 0x801F6960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6964:
    // 0x801F6964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6968: jr          $ra
    // 0x801F696C: nop

    TRACE_RETURN()
    return;
    // 0x801F696C: nop

;}
RECOMP_FUNC void func_801EE05C_5A9F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE05C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EE060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EE064: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801EE068: addiu       $t6, $t6, 0x4AD0
    ctx->r14 = ADD32(ctx->r14, 0X4AD0);
    // 0x801EE06C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801EE070: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x801EE074: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x801EE078: jal         0x801EE090
    // 0x801EE07C: sh          $t7, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r15;
    func_801EE090_5A9FA0(rdram, ctx);
        goto after_0;
    // 0x801EE07C: sh          $t7, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r15;
    after_0:
    // 0x801EE080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EE084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EE088: jr          $ra
    // 0x801EE08C: nop

    TRACE_RETURN()
    return;
    // 0x801EE08C: nop

;}
RECOMP_FUNC void func_801DD720_599630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD720: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DD724: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801DD728: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x801DD72C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x801DD730: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x801DD734: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x801DD738: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801DD73C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801DD740: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801DD744: lw          $t7, 0x58($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X58);
    // 0x801DD748: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801DD74C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DD750: beq         $t7, $zero, L_801DD80C
    if (ctx->r15 == 0) {
        // 0x801DD754: sll         $t8, $t6, 2
        ctx->r24 = S32(ctx->r14 << 2);
            goto L_801DD80C;
    }
    // 0x801DD754: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x801DD758: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x801DD75C: addu        $s5, $s5, $t8
    ctx->r21 = ADD32(ctx->r21, ctx->r24);
    // 0x801DD760: lw          $s5, 0x42A8($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X42A8);
    // 0x801DD764: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x801DD768: addiu       $s2, $s2, -0x2DB0
    ctx->r18 = ADD32(ctx->r18, -0X2DB0);
    // 0x801DD76C: beq         $s5, $zero, L_801DD80C
    if (ctx->r21 == 0) {
        // 0x801DD770: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801DD80C;
    }
    // 0x801DD770: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_801DD774:
    // 0x801DD774: lbu         $t9, 0x90($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X90);
    // 0x801DD778: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801DD77C: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x801DD780: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x801DD784: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801DD788: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x801DD78C: bne         $at, $zero, L_801DD774
    if (ctx->r1 != 0) {
        // 0x801DD790: sb          $zero, 0x0($t2)
        MEM_B(0X0, ctx->r10) = 0;
            goto L_801DD774;
    }
    // 0x801DD790: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x801DD794: lbu         $t3, 0x90($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X90);
    // 0x801DD798: lw          $t5, 0x5C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X5C);
    // 0x801DD79C: lbu         $t6, 0xDB($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XDB);
    // 0x801DD7A0: lw          $a2, 0xD0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XD0);
    // 0x801DD7A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801DD7A8: lw          $a3, 0x1C($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X1C);
    // 0x801DD7AC: addu        $a1, $s2, $t4
    ctx->r5 = ADD32(ctx->r18, ctx->r12);
    // 0x801DD7B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DD7B4: jal         0x80032B20
    // 0x801DD7B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80032B20_33720(rdram, ctx);
        goto after_0;
    // 0x801DD7B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DD7BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801DD7C0: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x801DD7C4: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x801DD7C8: lbu         $t7, 0x90($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X90);
L_801DD7CC:
    // 0x801DD7CC: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x801DD7D0: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x801DD7D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DD7D8: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x801DD7DC: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x801DD7E0: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x801DD7E4: beql        $t1, $zero, L_801DD804
    if (ctx->r9 == 0) {
        // 0x801DD7E8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_801DD804;
    }
    goto skip_0;
    // 0x801DD7E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x801DD7EC: lhu         $a1, 0x0($t3)
    ctx->r5 = MEM_HU(ctx->r11, 0X0);
    // 0x801DD7F0: beql        $s3, $a1, L_801DD804
    if (ctx->r19 == ctx->r5) {
        // 0x801DD7F4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_801DD804;
    }
    goto skip_1;
    // 0x801DD7F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x801DD7F8: jal         0x801DD6E0
    // 0x801DD7FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_1;
    // 0x801DD7FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801DD800: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_801DD804:
    // 0x801DD804: bnel        $s0, $s4, L_801DD7CC
    if (ctx->r16 != ctx->r20) {
        // 0x801DD808: lbu         $t7, 0x90($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X90);
            goto L_801DD7CC;
    }
    goto skip_2;
    // 0x801DD808: lbu         $t7, 0x90($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X90);
    skip_2:
L_801DD80C:
    // 0x801DD80C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801DD810: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801DD814: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801DD818: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x801DD81C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x801DD820: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x801DD824: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x801DD828: jr          $ra
    // 0x801DD82C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801DD82C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801ED528_5A9438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED52C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED530: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801ED534: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801ED538: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801ED53C: jal         0x801ED580
    // 0x801ED540: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801ED580_5A9490(rdram, ctx);
        goto after_0;
    // 0x801ED540: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801ED544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ED548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED54C: jr          $ra
    // 0x801ED550: nop

    TRACE_RETURN()
    return;
    // 0x801ED550: nop

;}
RECOMP_FUNC void func_801F8494_5B43A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8494: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F8498: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F849C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F84A0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F84A4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F84A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F84AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801F84B0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F84B4: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F84B8: lbu         $a1, 0x2DF6($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F84BC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F84C0: lhu         $a2, 0x2DF8($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F84C4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801F84C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801F84CC: lw          $t7, -0x6694($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6694);
    // 0x801F84D0: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x801F84D4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801F84D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801F84DC: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x801F84E0: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801F84E4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F84E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801F84EC: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x801F84F0: sll         $a3, $t0, 2
    ctx->r7 = S32(ctx->r8 << 2);
    // 0x801F84F4: addu        $t1, $t1, $a3
    ctx->r9 = ADD32(ctx->r9, ctx->r7);
    // 0x801F84F8: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x801F84FC: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x801F8500: lw          $t1, -0x6744($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6744);
    // 0x801F8504: lw          $t2, -0x6734($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X6734);
    // 0x801F8508: lw          $t3, -0x66F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X66F4);
    // 0x801F850C: sll         $t4, $a2, 3
    ctx->r12 = S32(ctx->r6 << 3);
    // 0x801F8510: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801F8514: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801F8518: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x801F851C: jal         0x800141C4
    // 0x801F8520: lhu         $a0, 0x6($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X6);
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801F8520: lhu         $a0, 0x6($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X6);
    after_0:
    // 0x801F8524: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x801F8528: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x801F852C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F8530: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801F8534: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F8538: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801F853C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F8540: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F8544: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801F8548: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F854C: lbu         $t9, 0x2DF6($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F8550: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801F8554: lhu         $t2, 0x2DF8($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F8558: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801F855C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801F8560: lw          $t1, -0x66F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X66F4);
    // 0x801F8564: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x801F8568: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x801F856C: jal         0x800141C4
    // 0x801F8570: lhu         $a0, 0x6($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X6);
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x801F8570: lhu         $a0, 0x6($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X6);
    after_1:
    // 0x801F8574: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x801F8578: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x801F857C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801F8580: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x801F8584: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801F8588: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801F858C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801F8590: jal         0x80035DFC
    // 0x801F8594: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035DFC_369FC(rdram, ctx);
        goto after_2;
    // 0x801F8594: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801F8598: bne         $v0, $zero, L_801F85B0
    if (ctx->r2 != 0) {
        // 0x801F859C: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_801F85B0;
    }
    // 0x801F859C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801F85A0: jal         0x80035044
    // 0x801F85A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80035044_35C44(rdram, ctx);
        goto after_3;
    // 0x801F85A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x801F85A8: b           L_801F8638
    // 0x801F85AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F8638;
    // 0x801F85AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F85B0:
    // 0x801F85B0: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x801F85B4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801F85B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F85BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F85C0: sw          $t9, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r25;
    // 0x801F85C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801F85C8: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x801F85CC: addiu       $t1, $zero, 0x13F
    ctx->r9 = ADD32(0, 0X13F);
    // 0x801F85D0: sw          $t0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r8;
    // 0x801F85D4: lwc1        $f4, -0x3978($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3978);
    // 0x801F85D8: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x801F85DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F85E0: addiu       $t3, $zero, 0xE0
    ctx->r11 = ADD32(0, 0XE0);
    // 0x801F85E4: addiu       $t4, $zero, 0x280
    ctx->r12 = ADD32(0, 0X280);
    // 0x801F85E8: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x801F85EC: addiu       $t6, $zero, 0x2009
    ctx->r14 = ADD32(0, 0X2009);
    // 0x801F85F0: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801F85F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F85F8: addiu       $a0, $a0, -0x79BC
    ctx->r4 = ADD32(ctx->r4, -0X79BC);
    // 0x801F85FC: sh          $zero, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = 0;
    // 0x801F8600: sh          $t2, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r10;
    // 0x801F8604: sh          $t1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r9;
    // 0x801F8608: sh          $t3, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r11;
    // 0x801F860C: sh          $t4, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r12;
    // 0x801F8610: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x801F8614: sh          $t6, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r14;
    // 0x801F8618: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x801F861C: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    // 0x801F8620: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x801F8624: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x801F8628: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x801F862C: jal         0x8003521C
    // 0x801F8630: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F8630: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    after_4:
    // 0x801F8634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F8638:
    // 0x801F8638: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F863C: jr          $ra
    // 0x801F8640: nop

    TRACE_RETURN()
    return;
    // 0x801F8640: nop

;}
RECOMP_FUNC void func_801E79F4_5A3904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E79F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E79F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E79FC: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801E7A00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E7A04: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x801E7A08: bne         $t6, $at, L_801E7A6C
    if (ctx->r14 != ctx->r1) {
        // 0x801E7A0C: addiu       $t0, $t0, -0x3340
        ctx->r8 = ADD32(ctx->r8, -0X3340);
            goto L_801E7A6C;
    }
    // 0x801E7A0C: addiu       $t0, $t0, -0x3340
    ctx->r8 = ADD32(ctx->r8, -0X3340);
    // 0x801E7A10: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    // 0x801E7A14: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801E7A18: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801E7A1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801E7A20: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E7A24: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801E7A28: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801E7A2C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x801E7A30: lhu         $t1, 0x30F2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X30F2);
    // 0x801E7A34: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x801E7A38: beql        $t2, $zero, L_801E7A70
    if (ctx->r10 == 0) {
        // 0x801E7A3C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E7A70;
    }
    goto skip_0;
    // 0x801E7A3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E7A40: lhu         $t3, 0x30F4($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X30F4);
    // 0x801E7A44: andi        $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 & 0X2000;
    // 0x801E7A48: beql        $t4, $zero, L_801E7A70
    if (ctx->r12 == 0) {
        // 0x801E7A4C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E7A70;
    }
    goto skip_1;
    // 0x801E7A4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801E7A50: jal         0x801E2F64
    // 0x801E7A54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E2F64_59EE74(rdram, ctx);
        goto after_0;
    // 0x801E7A54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E7A58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E7A5C: jal         0x801DACDC
    // 0x801E7A60: addiu       $a1, $zero, 0x9A
    ctx->r5 = ADD32(0, 0X9A);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E7A60: addiu       $a1, $zero, 0x9A
    ctx->r5 = ADD32(0, 0X9A);
    after_1:
    // 0x801E7A64: b           L_801E7A70
    // 0x801E7A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E7A70;
    // 0x801E7A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E7A6C:
    // 0x801E7A6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E7A70:
    // 0x801E7A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E7A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7A78: jr          $ra
    // 0x801E7A7C: nop

    TRACE_RETURN()
    return;
    // 0x801E7A7C: nop

;}
RECOMP_FUNC void func_801E794C_5A385C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E794C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801E7950: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801E7954: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801E7958: beq         $t6, $zero, L_801E79EC
    if (ctx->r14 == 0) {
        // 0x801E795C: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_801E79EC;
    }
    // 0x801E795C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E7960: beq         $a0, $zero, L_801E79EC
    if (ctx->r4 == 0) {
        // 0x801E7964: nop
    
            goto L_801E79EC;
    }
    // 0x801E7964: nop

    // 0x801E7968: lbu         $t7, 0x90($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X90);
    // 0x801E796C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x801E7970: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801E7974: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801E7978: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801E797C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801E7980: lhu         $t9, 0x7DB4($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7DB4);
    // 0x801E7984: and         $t0, $t9, $t6
    ctx->r8 = ctx->r25 & ctx->r14;
    // 0x801E7988: beql        $t0, $zero, L_801E79C4
    if (ctx->r8 == 0) {
        // 0x801E798C: lw          $v0, 0x5C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X5C);
            goto L_801E79C4;
    }
    goto skip_0;
    // 0x801E798C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    skip_0:
    // 0x801E7990: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E7994: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x801E7998: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E799C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E79A0: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801E79A4: nop

    // 0x801E79A8: bc1f        L_801E79B8
    if (!c1cs) {
        // 0x801E79AC: nop
    
            goto L_801E79B8;
    }
    // 0x801E79AC: nop

    // 0x801E79B0: jr          $ra
    // 0x801E79B4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E79B4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_801E79B8:
    // 0x801E79B8: jr          $ra
    // 0x801E79BC: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x801E79BC: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x801E79C0: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
L_801E79C4:
    // 0x801E79C4: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x801E79C8: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E79CC: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801E79D0: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801E79D4: nop

    // 0x801E79D8: bc1fl       L_801E79EC
    if (!c1cs) {
        // 0x801E79DC: swc1        $f14, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f14.u32l;
            goto L_801E79EC;
    }
    goto skip_1;
    // 0x801E79DC: swc1        $f14, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f14.u32l;
    skip_1:
    // 0x801E79E0: jr          $ra
    // 0x801E79E4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E79E4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x801E79E8: swc1        $f14, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f14.u32l;
L_801E79EC:
    // 0x801E79EC: jr          $ra
    // 0x801E79F0: nop

    TRACE_RETURN()
    return;
    // 0x801E79F0: nop

;}
RECOMP_FUNC void func_801D5A78_591988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5A78: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801D5A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D5A80: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D5A84: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801D5A88: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D5A8C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D5A90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5A94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D5A98: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D5A9C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x801D5AA0: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801D5AA4: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801D5AA8: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D5AAC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D5AB0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801D5AB4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x801D5AB8: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D5ABC: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801D5AC0: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x801D5AC4: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x801D5AC8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D5ACC: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801D5AD0: sb          $v1, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r3;
    // 0x801D5AD4: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x801D5AD8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D5ADC: jal         0x80003DC0
    // 0x801D5AE0: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    func_80003DC0_49C0(rdram, ctx);
        goto after_0;
    // 0x801D5AE0: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801D5AE4: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D5AE8: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D5AEC: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D5AF0: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D5AF4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x801D5AF8: lb          $v1, 0x37($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X37);
    // 0x801D5AFC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D5B00: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x801D5B04: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x801D5B08: mul.s       $f14, $f8, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x801D5B0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5B10: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D5B14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D5B18: nop

    // 0x801D5B1C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x801D5B20: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x801D5B24: sqrt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = sqrtf(ctx->f6.fl);
    // 0x801D5B28: bc1fl       L_801D5B3C
    if (!c1cs) {
        // 0x801D5B2C: mov.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
            goto L_801D5B3C;
    }
    goto skip_0;
    // 0x801D5B2C: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    skip_0:
    // 0x801D5B30: b           L_801D5B3C
    // 0x801D5B34: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
        goto L_801D5B3C;
    // 0x801D5B34: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
    // 0x801D5B38: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_801D5B3C:
    // 0x801D5B3C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D5B40: nop

    // 0x801D5B44: bc1fl       L_801D5D4C
    if (!c1cs) {
        // 0x801D5B48: lwc1        $f10, 0x0($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
            goto L_801D5D4C;
    }
    goto skip_1;
    // 0x801D5B48: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    skip_1:
    // 0x801D5B4C: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D5B50: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801D5B54: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801D5B58: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801D5B5C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801D5B60: nop

    // 0x801D5B64: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D5B68: nop

    // 0x801D5B6C: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D5B70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5B74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5B78: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801D5B7C: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D5B80: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x801D5B84: nop

    // 0x801D5B88: bc1f        L_801D5B98
    if (!c1cs) {
        // 0x801D5B8C: nop
    
            goto L_801D5B98;
    }
    // 0x801D5B8C: nop

    // 0x801D5B90: b           L_801D5B9C
    // 0x801D5B94: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
        goto L_801D5B9C;
    // 0x801D5B94: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
L_801D5B98:
    // 0x801D5B98: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_801D5B9C:
    // 0x801D5B9C: ldc1        $f8, -0x5370($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5370);
    // 0x801D5BA0: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x801D5BA4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D5BA8: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x801D5BAC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801D5BB0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x801D5BB4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D5BB8: bc1f        L_801D5BC8
    if (!c1cs) {
        // 0x801D5BBC: lwc1        $f4, 0x54($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
            goto L_801D5BC8;
    }
    // 0x801D5BBC: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D5BC0: b           L_801D5DB0
    // 0x801D5BC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D5DB0;
    // 0x801D5BC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D5BC8:
    // 0x801D5BC8: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D5BCC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D5BD0: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D5BD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D5BD8: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801D5BDC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D5BE0: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D5BE4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D5BE8: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801D5BEC: nop

    // 0x801D5BF0: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x801D5BF4: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D5BF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5BFC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D5C00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D5C04: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D5C08: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D5C0C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801D5C10: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801D5C14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D5C18: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5C1C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801D5C20: sub.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x801D5C24: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D5C28: nop

    // 0x801D5C2C: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D5C30: nop

    // 0x801D5C34: mul.s       $f2, $f16, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D5C38: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D5C3C: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x801D5C40: nop

    // 0x801D5C44: bc1f        L_801D5CD8
    if (!c1cs) {
        // 0x801D5C48: nop
    
            goto L_801D5CD8;
    }
    // 0x801D5C48: nop

    // 0x801D5C4C: sub.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x801D5C50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5C54: nop

    // 0x801D5C58: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x801D5C5C: nop

    // 0x801D5C60: bc1fl       L_801D5C74
    if (!c1cs) {
        // 0x801D5C64: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_801D5C74;
    }
    goto skip_2;
    // 0x801D5C64: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_2:
    // 0x801D5C68: b           L_801D5C74
    // 0x801D5C6C: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_801D5C74;
    // 0x801D5C6C: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x801D5C70: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_801D5C74:
    // 0x801D5C74: ldc1        $f4, -0x5368($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5368);
    // 0x801D5C78: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x801D5C7C: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x801D5C80: nop

    // 0x801D5C84: bc1tl       L_801D5CDC
    if (c1cs) {
        // 0x801D5C88: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801D5CDC;
    }
    goto skip_3;
    // 0x801D5C88: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_3:
    // 0x801D5C8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D5C90: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    // 0x801D5C94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D5C98: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x801D5C9C: nop

    // 0x801D5CA0: bc1fl       L_801D5CC8
    if (!c1cs) {
        // 0x801D5CA4: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_801D5CC8;
    }
    goto skip_4;
    // 0x801D5CA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_4:
    // 0x801D5CA8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D5CAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D5CB0: neg.s       $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = -ctx->f16.fl;
    // 0x801D5CB4: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D5CB8: div.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801D5CBC: b           L_801D5CD8
    // 0x801D5CC0: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
        goto L_801D5CD8;
    // 0x801D5CC0: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D5CC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_801D5CC8:
    // 0x801D5CC8: nop

    // 0x801D5CCC: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D5CD0: div.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801D5CD4: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
L_801D5CD8:
    // 0x801D5CD8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_801D5CDC:
    // 0x801D5CDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5CE0: nop

    // 0x801D5CE4: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x801D5CE8: nop

    // 0x801D5CEC: bc1f        L_801D5D40
    if (!c1cs) {
        // 0x801D5CF0: nop
    
            goto L_801D5D40;
    }
    // 0x801D5CF0: nop

    // 0x801D5CF4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D5CF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D5CFC: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x801D5D00: nop

    // 0x801D5D04: bc1f        L_801D5D40
    if (!c1cs) {
        // 0x801D5D08: nop
    
            goto L_801D5D40;
    }
    // 0x801D5D08: nop

    // 0x801D5D0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D5D10: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D5D14: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x801D5D18: add.s       $f0, $f4, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D5D1C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D5D20: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x801D5D24: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D5D28: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801D5D2C: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x801D5D30: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D5D34: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D5D38: b           L_801D5D48
    // 0x801D5D3C: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
        goto L_801D5D48;
    // 0x801D5D3C: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
L_801D5D40:
    // 0x801D5D40: b           L_801D5DB0
    // 0x801D5D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D5DB0;
    // 0x801D5D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D5D48:
    // 0x801D5D48: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
L_801D5D4C:
    // 0x801D5D4C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801D5D50: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801D5D54: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5D58: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D5D5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D5D60: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D5D64: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x801D5D68: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801D5D6C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801D5D70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5D74: lwc1        $f4, 0x14($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
    // 0x801D5D78: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D5D7C: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801D5D80: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x801D5D84: ldc1        $f6, -0x5360($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5360);
    // 0x801D5D88: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x801D5D8C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D5D90: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D5D94: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D5D98: c.le.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d <= ctx->f6.d;
    // 0x801D5D9C: nop

    // 0x801D5DA0: bc1f        L_801D5DB0
    if (!c1cs) {
        // 0x801D5DA4: nop
    
            goto L_801D5DB0;
    }
    // 0x801D5DA4: nop

    // 0x801D5DA8: b           L_801D5DB0
    // 0x801D5DAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D5DB0;
    // 0x801D5DAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D5DB0:
    // 0x801D5DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D5DB4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801D5DB8: jr          $ra
    // 0x801D5DBC: nop

    TRACE_RETURN()
    return;
    // 0x801D5DBC: nop

;}
RECOMP_FUNC void func_801DE7D4_59A6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE7D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE7D8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DE7DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE7E0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DE7E4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DE7E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE7EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801DE7F0: jalr        $t9
    // 0x801DE7F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DE7F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801DE7F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE7FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE800: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801DE804: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801DE808: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DE80C: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801DE810: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DE814: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DE818: nop

    // 0x801DE81C: bc1fl       L_801DE84C
    if (!c1cs) {
        // 0x801DE820: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DE84C;
    }
    goto skip_0;
    // 0x801DE820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DE824: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x801DE828: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x801DE82C: lwc1        $f16, -0x4E6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4E6C);
    // 0x801DE830: lwc1        $f10, 0x48($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X48);
    // 0x801DE834: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801DE838: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x801DE83C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801DE840: jal         0x801DACDC
    // 0x801DE844: swc1        $f18, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f18.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DE844: swc1        $f18, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x801DE848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE84C:
    // 0x801DE84C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE850: jr          $ra
    // 0x801DE854: nop

    TRACE_RETURN()
    return;
    // 0x801DE854: nop

;}
