#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000DC4_713D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000DC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000DCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000DD0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000DD4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000DD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000DDC: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x08000DE0: sltiu       $t6, $v1, 0x1
    ctx->r14 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x08000DE4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x08000DE8: beq         $t6, $zero, L_08000DFC
    if (ctx->r14 == 0) {
        // 0x08000DEC: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000DFC;
    }
    // 0x08000DEC: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000DF0: lhu         $a1, 0xD8($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD8);
    // 0x08000DF4: jal         0x08000F40
    // 0x08000DF8: lw          $a2, 0xD0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD0);
    func_08000F40_713EB0(rdram, ctx);
        goto after_0;
    // 0x08000DF8: lw          $a2, 0xD0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD0);
    after_0:
L_08000DFC:
    // 0x08000DFC: lhu         $t8, 0xD4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XD4);
    // 0x08000E00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E08: bne         $t8, $at, L_08000E60
    if (ctx->r24 != ctx->r1) {
        // 0x08000E0C: nop
    
            goto L_08000E60;
    }
    // 0x08000E0C: nop

    // 0x08000E10: jal         0x08001294
    // 0x08000E14: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    func_08001294_714204(rdram, ctx);
        goto after_1;
    // 0x08000E14: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    after_1:
    // 0x08000E18: bne         $v0, $zero, L_08000E60
    if (ctx->r2 != 0) {
        // 0x08000E1C: nop
    
            goto L_08000E60;
    }
    // 0x08000E1C: nop

    // 0x08000E20: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x08000E24: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x08000E28: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x08000E2C: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x08000E30: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x08000E34: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000E38: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000E3C: jalr        $t9
    // 0x08000E40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E40: nop

    after_2:
    // 0x08000E44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E48: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E4C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XEB4) << 16);
    // 0x08000E50: jalr        $t9
    // 0x08000E54: addiu       $a0, $a0, 0xEB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XEB4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E54: addiu       $a0, $a0, 0xEB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XEB4));
    after_3:
    // 0x08000E58: b           L_08000EA4
    // 0x08000E5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000EA4;
    // 0x08000E5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000E60:
    // 0x08000E60: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000E64: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000E68: jalr        $t9
    // 0x08000E6C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000E6C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_4:
    // 0x08000E70: beq         $v0, $zero, L_08000EA0
    if (ctx->r2 == 0) {
        // 0x08000E74: addiu       $t0, $zero, 0x96
        ctx->r8 = ADD32(0, 0X96);
            goto L_08000EA0;
    }
    // 0x08000E74: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x08000E78: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000E7C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000E80: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08000E84: jalr        $t9
    // 0x08000E88: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000E88: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_5:
    // 0x08000E8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E90: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E94: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XF00) << 16);
    // 0x08000E98: jalr        $t9
    // 0x08000E9C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XF00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000E9C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XF00));
    after_6:
L_08000EA0:
    // 0x08000EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000EA4:
    // 0x08000EA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000EAC: jr          $ra
    // 0x08000EB0: nop

    TRACE_RETURN()
    return;
    // 0x08000EB0: nop

;}
RECOMP_FUNC void func_080036C4_716634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080036C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080036C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080036CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080036D0: lw          $t7, 0xD8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD8);
    // 0x080036D4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x080036D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080036DC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080036E0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080036E4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080036E8: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080036EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x080036F0: jalr        $t9
    // 0x080036F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080036F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080036F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x080036FC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08003700: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003704: sb          $t8, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r24;
    // 0x08003708: addiu       $t9, $t9, -0x213C
    ctx->r25 = ADD32(ctx->r25, -0X213C);
    // 0x0800370C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08003710: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08003714: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003718: jalr        $t9
    // 0x0800371C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800371C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08003720: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08003724: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08003728: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800372C: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08003730: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08003734: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003738: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x0800373C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003740: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X3770) << 16);
    // 0x08003744: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x08003748: addiu       $a0, $a0, 0x3770
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X3770));
    // 0x0800374C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08003750: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08003754: jalr        $t9
    // 0x08003758: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003758: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x0800375C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003760: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003764: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003768: jr          $ra
    // 0x0800376C: nop

    TRACE_RETURN()
    return;
    // 0x0800376C: nop

;}
RECOMP_FUNC void func_08001B58_714AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001B64: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001B68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B6C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001B70: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001B74: bgtz        $v0, L_08001B8C
    if (SIGNED(ctx->r2) > 0) {
        // 0x08001B78: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001B8C;
    }
    // 0x08001B78: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001B7C: jalr        $t9
    // 0x08001B80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B80: nop

    after_0:
    // 0x08001B84: b           L_08001BE0
    // 0x08001B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001BE0;
    // 0x08001B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001B8C:
    // 0x08001B8C: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08001B90: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B94: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08001B98: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x08001B9C: bnel        $t8, $zero, L_08001BE0
    if (ctx->r24 != 0) {
        // 0x08001BA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001BE0;
    }
    goto skip_0;
    // 0x08001BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001BA4: jalr        $t9
    // 0x08001BA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001BA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x08001BAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001BB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001BB4: addiu       $t9, $t9, -0x4FB4
    ctx->r25 = ADD32(ctx->r25, -0X4FB4);
    // 0x08001BB8: lw          $t0, 0x60($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X60);
    // 0x08001BBC: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x08001BC0: jalr        $t9
    // 0x08001BC4: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001BC4: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
    after_2:
    // 0x08001BC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001BCC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001BD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0X1BEC) << 16);
    // 0x08001BD4: jalr        $t9
    // 0x08001BD8: addiu       $a0, $a0, 0x1BEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1BEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001BD8: addiu       $a0, $a0, 0x1BEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0X1BEC));
    after_3:
    // 0x08001BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001BE0:
    // 0x08001BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001BE4: jr          $ra
    // 0x08001BE8: nop

    TRACE_RETURN()
    return;
    // 0x08001BE8: nop

;}
RECOMP_FUNC void func_08002324_715294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002324: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08002328: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x0800232C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x08002330: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x08002334: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x08002338: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x0800233C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x08002340: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x08002344: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x08002348: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(47, 0X3ED8) << 16);
    // 0x0800234C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x08002350: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x08002354: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x08002358: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800235C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x08002360: lwc1        $f22, 0x3ED8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(47, 0X3ED8));
    // 0x08002364: addiu       $s4, $s4, 0x6E54
    ctx->r20 = ADD32(ctx->r20, 0X6E54);
    // 0x08002368: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x0800236C: ori         $s2, $zero, 0x8000
    ctx->r18 = 0 | 0X8000;
    // 0x08002370: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x08002374: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_08002378:
    // 0x08002378: jalr        $s4
    // 0x0800237C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x0800237C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08002380: beq         $v0, $zero, L_080023D8
    if (ctx->r2 == 0) {
        // 0x08002384: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080023D8;
    }
    // 0x08002384: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002388: mtc1        $s5, $f4
    ctx->f4.u32l = ctx->r21;
    // 0x0800238C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002390: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002394: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002398: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x0800239C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x080023A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x080023A4: mul.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x080023A8: jal         0x08002414
    // 0x080023AC: nop

    func_08002414_715384(rdram, ctx);
        goto after_1;
    // 0x080023AC: nop

    after_1:
    // 0x080023B0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080023B4: swc1        $f22, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f22.u32l;
    // 0x080023B8: swc1        $f22, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f22.u32l;
    // 0x080023BC: sub.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x080023C0: swc1        $f22, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f22.u32l;
    // 0x080023C4: sh          $s2, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r18;
    // 0x080023C8: sh          $s2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r18;
    // 0x080023CC: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x080023D0: sh          $s2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r18;
    // 0x080023D4: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
L_080023D8:
    // 0x080023D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x080023DC: bnel        $s1, $s6, L_08002378
    if (ctx->r17 != ctx->r22) {
        // 0x080023E0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_08002378;
    }
    goto skip_0;
    // 0x080023E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x080023E4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x080023E8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x080023EC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x080023F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x080023F4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x080023F8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x080023FC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x08002400: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x08002404: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x08002408: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x0800240C: jr          $ra
    // 0x08002410: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08002410: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08000D60_713CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000D68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000D6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000D70: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000D74: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000D78: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000D7C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000D80: bne         $v0, $zero, L_08000DB4
    if (ctx->r2 != 0) {
        // 0x08000D84: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000DB4;
    }
    // 0x08000D84: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000D88: lhu         $a0, 0xD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD8);
    // 0x08000D8C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000D90: jalr        $t9
    // 0x08000D94: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D94: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000D98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000D9C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000DA0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000DA4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(47, 0XDC4) << 16);
    // 0x08000DA8: addiu       $a0, $a0, 0xDC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(47, 0XDC4));
    // 0x08000DAC: jalr        $t9
    // 0x08000DB0: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000DB0: sh          $zero, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = 0;
    after_1:
L_08000DB4:
    // 0x08000DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000DBC: jr          $ra
    // 0x08000DC0: nop

    TRACE_RETURN()
    return;
    // 0x08000DC0: nop

;}
RECOMP_FUNC void func_08000AC4_717964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000AC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ACC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000AD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000AD4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000AD8: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000ADC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000AE0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08000AE4: jalr        $t9
    // 0x08000AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000AEC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000AF0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000AF4: jalr        $t9
    // 0x08000AF8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000AF8: nop

    after_1:
    // 0x08000AFC: bne         $v0, $zero, L_08000BA4
    if (ctx->r2 != 0) {
        // 0x08000B00: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_08000BA4;
    }
    // 0x08000B00: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08000B04: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000B08: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08000B0C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000B10: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000B14: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08000B18: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x08000B1C: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x08000B20: sw          $t0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r8;
    // 0x08000B24: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000B28: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08000B2C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000B30: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x08000B34: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000B38: sw          $zero, -0x764($at)
    MEM_W(-0X764, ctx->r1) = 0;
    // 0x08000B3C: lhu         $t2, 0x14E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X14E);
    // 0x08000B40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000B44: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000B48: sw          $t2, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r10;
    // 0x08000B4C: lw          $t3, 0x150($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X150);
    // 0x08000B50: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000B54: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    // 0x08000B58: sw          $t3, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r11;
    // 0x08000B5C: lhu         $t4, 0x154($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X154);
    // 0x08000B60: sh          $t4, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r12;
    // 0x08000B64: lhu         $t5, 0x156($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X156);
    // 0x08000B68: swc1        $f4, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f4.u32l;
    // 0x08000B6C: jalr        $t9
    // 0x08000B70: sb          $t5, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B70: sb          $t5, 0x7C($a2)
    MEM_B(0X7C, ctx->r6) = ctx->r13;
    after_2:
    // 0x08000B74: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08000B78: lw          $t7, -0x39DC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39DC);
    // 0x08000B7C: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08000B80: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(48, 0XBB8) << 16);
    // 0x08000B84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B8C: addiu       $t8, $t8, 0xBB8
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(48, 0XBB8));
    // 0x08000B90: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x08000B94: sb          $t6, 0xD0($t7)
    MEM_B(0XD0, ctx->r15) = ctx->r14;
    // 0x08000B98: sw          $t8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r24;
    // 0x08000B9C: jalr        $t9
    // 0x08000BA0: addiu       $a0, $a0, 0x1F34
    ctx->r4 = ADD32(ctx->r4, 0X1F34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000BA0: addiu       $a0, $a0, 0x1F34
    ctx->r4 = ADD32(ctx->r4, 0X1F34);
    after_3:
L_08000BA4:
    // 0x08000BA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000BAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000BB0: jr          $ra
    // 0x08000BB4: nop

    TRACE_RETURN()
    return;
    // 0x08000BB4: nop

;}
RECOMP_FUNC void func_080004E8_717388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080004F4: jal         0x08002404
    // 0x080004F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08002404_7192A4(rdram, ctx);
        goto after_0;
    // 0x080004F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080004FC: jal         0x08002604
    // 0x08000500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_08002604_7194A4(rdram, ctx);
        goto after_1;
    // 0x08000500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000504: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000508: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x0800050C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000510: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x08000514: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000518: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1DC) << 16);
    // 0x0800051C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000520: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    // 0x08000524: jalr        $t9
    // 0x08000528: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000528: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
    after_2:
    // 0x0800052C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000534: jr          $ra
    // 0x08000538: nop

    TRACE_RETURN()
    return;
    // 0x08000538: nop

;}
RECOMP_FUNC void func_08000C8C_717B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000C90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000C98: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000C9C: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x08000CA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000CA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000CA8: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x08000CAC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08000CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000CB4: bne         $t6, $at, L_08000D28
    if (ctx->r14 != ctx->r1) {
        // 0x08000CB8: lui         $a2, 0x3F00
        ctx->r6 = S32(0X3F00 << 16);
            goto L_08000D28;
    }
    // 0x08000CB8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08000CBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CC0: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x08000CC4: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000CC8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000CCC: jalr        $t9
    // 0x08000CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000CD4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000CD8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08000CDC: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08000CE0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000CE4: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000CE8: bne         $v0, $t8, L_08000CF8
    if (ctx->r2 != ctx->r24) {
        // 0x08000CEC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08000CF8;
    }
    // 0x08000CEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000CF0: b           L_08000CF8
    // 0x08000CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_08000CF8;
    // 0x08000CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_08000CF8:
    // 0x08000CF8: jalr        $t9
    // 0x08000CFC: lhu         $a0, 0xA4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CFC: lhu         $a0, 0xA4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA4);
    after_1:
    // 0x08000D00: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x08000D04: lui         $at, 0xEFFF
    ctx->r1 = S32(0XEFFF << 16);
    // 0x08000D08: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000D0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0XD3C) << 16);
    // 0x08000D18: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08000D1C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08000D20: jalr        $t9
    // 0x08000D24: addiu       $a0, $a0, 0xD3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XD3C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D24: addiu       $a0, $a0, 0xD3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XD3C));
    after_2:
L_08000D28:
    // 0x08000D28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000D30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000D34: jr          $ra
    // 0x08000D38: nop

    TRACE_RETURN()
    return;
    // 0x08000D38: nop

;}
RECOMP_FUNC void func_080016B4_718554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080016B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080016BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080016C0: jal         0x08001B44
    // 0x080016C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_08001B44_7189E4(rdram, ctx);
        goto after_0;
    // 0x080016C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x080016C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080016CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080016D0: jr          $ra
    // 0x080016D4: nop

    TRACE_RETURN()
    return;
    // 0x080016D4: nop

;}
RECOMP_FUNC void func_08001980_718820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001984: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001988: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800198C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001990: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08001994: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08001998: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x0800199C: jalr        $t9
    // 0x080019A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080019A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080019A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080019A8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080019AC: jalr        $t9
    // 0x080019B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080019B0: nop

    after_1:
    // 0x080019B4: bne         $v0, $zero, L_08001AD0
    if (ctx->r2 != 0) {
        // 0x080019B8: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001AD0;
    }
    // 0x080019B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080019BC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080019C0: jalr        $t9
    // 0x080019C4: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080019C4: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    after_2:
    // 0x080019C8: beq         $v0, $zero, L_080019FC
    if (ctx->r2 == 0) {
        // 0x080019CC: lui         $at, 0xC200
        ctx->r1 = S32(0XC200 << 16);
            goto L_080019FC;
    }
    // 0x080019CC: lui         $at, 0xC200
    ctx->r1 = S32(0XC200 << 16);
    // 0x080019D0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080019D4: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080019D8: jalr        $t9
    // 0x080019DC: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080019DC: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    after_3:
    // 0x080019E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019E4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080019E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1AE4) << 16);
    // 0x080019EC: jalr        $t9
    // 0x080019F0: addiu       $a0, $a0, 0x1AE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1AE4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080019F0: addiu       $a0, $a0, 0x1AE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1AE4));
    after_4:
    // 0x080019F4: b           L_08001AD4
    // 0x080019F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001AD4;
    // 0x080019F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080019FC:
    // 0x080019FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001A00: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x08001A04: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x08001A08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001A0C: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x08001A10: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x08001A14: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001A18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001A1C: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x08001A20: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x08001A24: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08001A28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001A2C: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x08001A30: lw          $t0, 0x10($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X10);
    // 0x08001A34: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x08001A38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001A3C: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
    // 0x08001A40: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x08001A44: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001A48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001A4C: swc1        $f16, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f16.u32l;
    // 0x08001A50: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x08001A54: addiu       $t3, $zero, 0x1840
    ctx->r11 = ADD32(0, 0X1840);
    // 0x08001A58: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001A5C: swc1        $f18, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f18.u32l;
    // 0x08001A60: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x08001A64: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x08001A68: sh          $t3, 0x1A($t4)
    MEM_H(0X1A, ctx->r12) = ctx->r11;
    // 0x08001A6C: lw          $t9, -0x39DC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39DC);
    // 0x08001A70: sb          $t5, 0xD0($t9)
    MEM_B(0XD0, ctx->r25) = ctx->r13;
    // 0x08001A74: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A78: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08001A7C: jalr        $t9
    // 0x08001A80: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001A80: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_5:
    // 0x08001A84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001A88: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001A8C: jalr        $t9
    // 0x08001A90: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001A90: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_6:
    // 0x08001A94: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001A98: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08001A9C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001AA0: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08001AA4: jalr        $t9
    // 0x08001AA8: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001AA8: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    after_7:
    // 0x08001AAC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AB0: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08001AB4: jalr        $t9
    // 0x08001AB8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001AB8: nop

    after_8:
    // 0x08001ABC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AC4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X16B4) << 16);
    // 0x08001AC8: jalr        $t9
    // 0x08001ACC: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001ACC: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    after_9:
L_08001AD0:
    // 0x08001AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001AD4:
    // 0x08001AD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001AD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001ADC: jr          $ra
    // 0x08001AE0: nop

    TRACE_RETURN()
    return;
    // 0x08001AE0: nop

;}
RECOMP_FUNC void func_08002E88_719D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E88: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08002E8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002E90: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002E94: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002E98: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x08002E9C: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x08002EA0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002EA4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x08002EA8: sw          $t9, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r25;
    // 0x08002EAC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002EB0: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08002EB4: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x08002EB8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002EBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002EC0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08002EC4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002EC8: jalr        $t9
    // 0x08002ECC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002ECC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x08002ED0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08002ED4: addiu       $v0, $v0, -0x6D4C
    ctx->r2 = ADD32(ctx->r2, -0X6D4C);
    // 0x08002ED8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08002EDC: jalr        $v0
    // 0x08002EE0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08002EE0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x08002EE4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08002EE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002EEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002EF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002EF4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002EF8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002EFC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3658) << 16);
    // 0x08002F00: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F04: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08002F08: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08002F0C: ldc1        $f6, 0x3658($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(48, 0X3658));
    // 0x08002F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002F14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002F18: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x08002F1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002F20: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08002F24: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x08002F28: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002F2C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08002F30: jalr        $t9
    // 0x08002F34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002F34: nop

    after_2:
    // 0x08002F38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F3C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002F44: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x08002F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002F4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002F50: jalr        $t9
    // 0x08002F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08002F58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002F5C: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08002F60: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002F64: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08002F68: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
    // 0x08002F6C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08002F70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x08002F74: jalr        $t9
    // 0x08002F78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002F78: nop

    after_4:
    // 0x08002F7C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x08002F80: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x08002F84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002F88: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08002F8C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3660) << 16);
    // 0x08002F90: ldc1        $f10, 0x3660($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(48, 0X3660));
    // 0x08002F94: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x08002F98: sh          $t2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r10;
    // 0x08002F9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002FA0: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x08002FA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002FA8: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08002FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002FB0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08002FB4: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08002FB8: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x08002FBC: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08002FC0: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08002FC4: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08002FC8: lw          $t3, 0xD0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD0);
    // 0x08002FCC: bne         $t3, $at, L_0800305C
    if (ctx->r11 != ctx->r1) {
        // 0x08002FD0: nop
    
            goto L_0800305C;
    }
    // 0x08002FD0: nop

    // 0x08002FD4: jalr        $t9
    // 0x08002FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08002FDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08002FE0: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08002FE4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002FE8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x08002FEC: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08002FF0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08002FF4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08002FF8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08002FFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08003000: jalr        $t9
    // 0x08003004: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003004: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_6:
    // 0x08003008: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x0800300C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003010: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08003014: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08003018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800301C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08003020: jalr        $t9
    // 0x08003024: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08003024: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_7:
    // 0x08003028: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800302C: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08003030: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x08003034: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x08003038: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x0800303C: jalr        $t9
    // 0x08003040: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08003040: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_8:
    // 0x08003044: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08003048: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x0800304C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x08003050: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08003054: jalr        $t9
    // 0x08003058: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003058: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_9:
L_0800305C:
    // 0x0800305C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003060: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003064: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X3088) << 16);
    // 0x08003068: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x0800306C: jalr        $t9
    // 0x08003070: addiu       $a0, $a0, 0x3088
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X3088));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003070: addiu       $a0, $a0, 0x3088
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X3088));
    after_10:
    // 0x08003074: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08003078: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x0800307C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08003080: jr          $ra
    // 0x08003084: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x08003084: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08002D6C_719C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002D70: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08002D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002D78: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08002D7C: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08002D80: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002D84: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08002D88: jalr        $v1
    // 0x08002D8C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08002D8C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x08002D90: beq         $v0, $zero, L_08002DBC
    if (ctx->r2 == 0) {
        // 0x08002D94: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_08002DBC;
    }
    // 0x08002D94: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08002D98: jalr        $v1
    // 0x08002D9C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08002D9C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x08002DA0: bne         $v0, $zero, L_08002DBC
    if (ctx->r2 != 0) {
        // 0x08002DA4: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08002DBC;
    }
    // 0x08002DA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DA8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08002DAC: jalr        $t9
    // 0x08002DB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002DB0: nop

    after_2:
    // 0x08002DB4: b           L_08002E14
    // 0x08002DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08002E14;
    // 0x08002DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002DBC:
    // 0x08002DBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08002DC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DC4: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x08002DC8: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08002DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002DD0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08002DD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002DD8: jalr        $t9
    // 0x08002DDC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002DDC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_3:
    // 0x08002DE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002DE4: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x08002DE8: jalr        $t9
    // 0x08002DEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002DEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x08002DF0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x08002DF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002DF8: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x08002DFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002E00: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X2E20) << 16);
    // 0x08002E04: addiu       $a0, $a0, 0x2E20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X2E20));
    // 0x08002E08: jalr        $t9
    // 0x08002E0C: sb          $t7, 0x99($t8)
    MEM_B(0X99, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002E0C: sb          $t7, 0x99($t8)
    MEM_B(0X99, ctx->r24) = ctx->r15;
    after_5:
    // 0x08002E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002E14:
    // 0x08002E14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002E18: jr          $ra
    // 0x08002E1C: nop

    TRACE_RETURN()
    return;
    // 0x08002E1C: nop

;}
RECOMP_FUNC void func_080003D0_717270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080003D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080003DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080003E0: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080003E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003EC: ori         $t7, $t6, 0x4400
    ctx->r15 = ctx->r14 | 0X4400;
    // 0x080003F0: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x080003F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X410) << 16);
    // 0x080003F8: jalr        $t9
    // 0x080003FC: addiu       $a0, $a0, 0x410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X410));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003FC: addiu       $a0, $a0, 0x410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X410));
    after_0:
    // 0x08000400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000408: jr          $ra
    // 0x0800040C: nop

    TRACE_RETURN()
    return;
    // 0x0800040C: nop

;}
RECOMP_FUNC void func_08002C78_719B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002C7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002C80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002C84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002C88: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08002C8C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002C90: addiu       $t8, $zero, 0x1C3
    ctx->r24 = ADD32(0, 0X1C3);
    // 0x08002C94: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002C98: lui         $a2, 0x3DAA
    ctx->r6 = S32(0X3DAA << 16);
    // 0x08002C9C: ori         $t7, $t6, 0x201
    ctx->r15 = ctx->r14 | 0X201;
    // 0x08002CA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002CA4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002CA8: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08002CAC: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002CB4: jalr        $t9
    // 0x08002CB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002CB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002CBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002CC0: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002CC8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08002CCC: jalr        $t9
    // 0x08002CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08002CD4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3650) << 16);
    // 0x08002CD8: lwc1        $f0, 0x3650($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X3650));
    // 0x08002CDC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002CE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CE4: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08002CE8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002CEC: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08002CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002CF4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08002CF8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08002CFC: jalr        $t9
    // 0x08002D00: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D00: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_2:
    // 0x08002D04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D08: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08002D0C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002D10: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002D14: jalr        $t9
    // 0x08002D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08002D1C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002D20: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002D24: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002D28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D30: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08002D34: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08002D38: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X2D60) << 16);
    // 0x08002D3C: addiu       $a0, $a0, 0x2D60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X2D60));
    // 0x08002D40: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08002D44: jalr        $t9
    // 0x08002D48: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002D48: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    after_4:
    // 0x08002D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002D50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002D54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002D58: jr          $ra
    // 0x08002D5C: nop

    TRACE_RETURN()
    return;
    // 0x08002D5C: nop

;}
RECOMP_FUNC void func_08001B44_7189E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B44: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08001B48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001B4C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x08001B50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x08001B58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001B5C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x08001B60: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001B64: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x08001B68: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08001B6C: jalr        $t9
    // 0x08001B70: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B70: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    after_0:
    // 0x08001B74: lw          $v1, 0x84($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X84);
    // 0x08001B78: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08001B7C: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08001B80: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001B84: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001B88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B8C: sub.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x08001B90: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001B94: jalr        $t9
    // 0x08001B98: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B98: sub.s       $f14, $f8, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f16.fl;
    after_1:
    // 0x08001B9C: slti        $at, $v0, 0x296
    ctx->r1 = SIGNED(ctx->r2) < 0X296 ? 1 : 0;
    // 0x08001BA0: bne         $at, $zero, L_08001BC4
    if (ctx->r1 != 0) {
        // 0x08001BA4: sh          $v0, 0x3A($sp)
        MEM_H(0X3A, ctx->r29) = ctx->r2;
            goto L_08001BC4;
    }
    // 0x08001BA4: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x08001BA8: slti        $at, $v0, 0x36C
    ctx->r1 = SIGNED(ctx->r2) < 0X36C ? 1 : 0;
    // 0x08001BAC: beql        $at, $zero, L_08001BC8
    if (ctx->r1 == 0) {
        // 0x08001BB0: lw          $t8, 0x68($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X68);
            goto L_08001BC8;
    }
    goto skip_0;
    // 0x08001BB0: lw          $t8, 0x68($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X68);
    skip_0:
    // 0x08001BB4: lw          $t6, 0x68($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X68);
    // 0x08001BB8: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x08001BBC: b           L_08001BD4
    // 0x08001BC0: sw          $t7, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->r15;
        goto L_08001BD4;
    // 0x08001BC0: sw          $t7, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->r15;
L_08001BC4:
    // 0x08001BC4: lw          $t8, 0x68($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X68);
L_08001BC8:
    // 0x08001BC8: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08001BCC: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08001BD0: sw          $t0, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->r8;
L_08001BD4:
    // 0x08001BD4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x08001BD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001BDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001BE0: bne         $t1, $at, L_08001C18
    if (ctx->r9 != ctx->r1) {
        // 0x08001BE4: addiu       $t9, $t9, 0x1B7C
        ctx->r25 = ADD32(ctx->r25, 0X1B7C);
            goto L_08001C18;
    }
    // 0x08001BE4: addiu       $t9, $t9, 0x1B7C
    ctx->r25 = ADD32(ctx->r25, 0X1B7C);
    // 0x08001BE8: lw          $t2, 0x84($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X84);
    // 0x08001BEC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001BF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001BF4: lwc1        $f18, 0xC($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0XC);
    // 0x08001BF8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x08001BFC: nop

    // 0x08001C00: bc1f        L_08001C18
    if (!c1cs) {
        // 0x08001C04: nop
    
            goto L_08001C18;
    }
    // 0x08001C04: nop

    // 0x08001C08: lw          $t3, 0x68($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X68);
    // 0x08001C0C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08001C10: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08001C14: sw          $t4, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->r12;
L_08001C18:
    // 0x08001C18: jalr        $t9
    // 0x08001C1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x08001C20: bne         $v0, $zero, L_08001C30
    if (ctx->r2 != 0) {
        // 0x08001C24: lw          $t5, 0x5C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X5C);
            goto L_08001C30;
    }
    // 0x08001C24: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x08001C28: b           L_080023EC
    // 0x08001C2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_080023EC;
    // 0x08001C2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08001C30:
    // 0x08001C30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001C34: bne         $t5, $at, L_08001C54
    if (ctx->r13 != ctx->r1) {
        // 0x08001C38: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001C54;
    }
    // 0x08001C38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C3C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08001C40: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08001C44: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001C48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08001C4C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08001C50: sb          $t6, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r14;
L_08001C54:
    // 0x08001C54: addiu       $t9, $t9, 0xFF0
    ctx->r25 = ADD32(ctx->r25, 0XFF0);
    // 0x08001C58: jalr        $t9
    // 0x08001C5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001C5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x08001C60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001C64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001C68: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08001C6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001C74: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001C78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001C7C: swc1        $f0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
    // 0x08001C80: swc1        $f0, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->f0.u32l;
    // 0x08001C84: jalr        $t9
    // 0x08001C88: swc1        $f0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001C88: swc1        $f0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f0.u32l;
    after_4:
    // 0x08001C8C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001C90: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x08001C94: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08001C98: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x08001C9C: lw          $t0, 0x2C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X2C);
    // 0x08001CA0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08001CA4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001CA8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08001CAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001CB0: bne         $v0, $at, L_08001EF4
    if (ctx->r2 != ctx->r1) {
        // 0x08001CB4: sw          $t1, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r9;
            goto L_08001EF4;
    }
    // 0x08001CB4: sw          $t1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r9;
    // 0x08001CB8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CBC: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08001CC0: jalr        $t9
    // 0x08001CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08001CC8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CCC: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08001CD0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08001CD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001CD8: jalr        $t9
    // 0x08001CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x08001CE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CE4: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08001CE8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08001CEC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001CF0: jalr        $t9
    // 0x08001CF4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001CF4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_7:
    // 0x08001CF8: lw          $t2, 0x84($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X84);
    // 0x08001CFC: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08001D00: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001D04: lwc1        $f4, 0x10($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08001D08: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08001D0C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08001D10: nop

    // 0x08001D14: bc1fl       L_08001D30
    if (!c1cs) {
        // 0x08001D18: lhu         $a0, 0x3A($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X3A);
            goto L_08001D30;
    }
    goto skip_1;
    // 0x08001D18: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    skip_1:
    // 0x08001D1C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08001D20: addiu       $t3, $a0, -0x60
    ctx->r11 = ADD32(ctx->r4, -0X60);
    // 0x08001D24: b           L_08001D38
    // 0x08001D28: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
        goto L_08001D38;
    // 0x08001D28: andi        $a0, $t3, 0x3FF
    ctx->r4 = ctx->r11 & 0X3FF;
    // 0x08001D2C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
L_08001D30:
    // 0x08001D30: addiu       $t5, $a0, 0x60
    ctx->r13 = ADD32(ctx->r4, 0X60);
    // 0x08001D34: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
L_08001D38:
    // 0x08001D38: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001D3C: jalr        $v0
    // 0x08001D40: sh          $a0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x08001D40: sh          $a0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r4;
    after_8:
    // 0x08001D44: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x08001D48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001D4C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001D50: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08001D54: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08001D58: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    // 0x08001D5C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001D60: jalr        $v0
    // 0x08001D64: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x08001D64: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x08001D68: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x08001D6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001D70: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001D74: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08001D78: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08001D7C: jalr        $t9
    // 0x08001D80: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001D80: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x08001D84: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001D88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001D8C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001D90: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08001D94: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08001D98: jalr        $t9
    // 0x08001D9C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001D9C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x08001DA0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001DA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001DA8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001DAC: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x08001DB0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08001DB4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001DB8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x08001DBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001DC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001DC4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001DC8: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x08001DCC: sb          $t7, 0x64($t8)
    MEM_B(0X64, ctx->r24) = ctx->r15;
    // 0x08001DD0: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08001DD4: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08001DD8: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08001DDC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001DE0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08001DE4: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08001DE8: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08001DEC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08001DF0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x08001DF4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08001DF8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08001DFC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08001E00: jalr        $t9
    // 0x08001E04: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08001E04: nop

    after_12:
    // 0x08001E08: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08001E0C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08001E10: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08001E14: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08001E18: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08001E1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E20: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001E24: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08001E28: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08001E2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001E30: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x08001E34: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08001E38: jalr        $t9
    // 0x08001E3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08001E3C: nop

    after_13:
    // 0x08001E40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E44: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08001E48: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001E4C: jalr        $t9
    // 0x08001E50: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08001E50: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    after_14:
    // 0x08001E54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E58: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001E5C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001E60: jalr        $t9
    // 0x08001E64: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001E64: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_15:
    // 0x08001E68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E6C: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08001E70: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001E74: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x08001E78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08001E7C: jalr        $t9
    // 0x08001E80: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001E80: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_16:
    // 0x08001E84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001E88: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08001E8C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001E90: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x08001E94: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    // 0x08001E98: jalr        $t9
    // 0x08001E9C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001E9C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_17:
    // 0x08001EA0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001EA4: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08001EA8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001EB4: jalr        $t9
    // 0x08001EB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08001EB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x08001EBC: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001EC0: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08001EC4: jalr        $t9
    // 0x08001EC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08001EC8: nop

    after_19:
    // 0x08001ECC: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(48, 0XC8C) << 16);
    // 0x08001ED0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001ED4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001ED8: addiu       $t0, $t0, 0xC8C
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(48, 0XC8C));
    // 0x08001EDC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x08001EE0: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x08001EE4: jalr        $t9
    // 0x08001EE8: sw          $t0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08001EE8: sw          $t0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r8;
    after_20:
    // 0x08001EEC: b           L_080023EC
    // 0x08001EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_080023EC;
    // 0x08001EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08001EF4:
    // 0x08001EF4: bne         $v0, $zero, L_0800214C
    if (ctx->r2 != 0) {
        // 0x08001EF8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_0800214C;
    }
    // 0x08001EF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001EFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F00: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08001F04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001F08: jalr        $t9
    // 0x08001F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08001F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x08001F10: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F14: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x08001F18: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08001F1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08001F20: jalr        $t9
    // 0x08001F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x08001F28: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001F2C: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08001F30: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08001F34: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001F38: jalr        $t9
    // 0x08001F3C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001F3C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_23:
    // 0x08001F40: lw          $t1, 0x84($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X84);
    // 0x08001F44: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08001F48: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001F4C: lwc1        $f6, 0x10($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X10);
    // 0x08001F50: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08001F54: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x08001F58: nop

    // 0x08001F5C: bc1fl       L_08001F78
    if (!c1cs) {
        // 0x08001F60: lhu         $a0, 0x3A($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X3A);
            goto L_08001F78;
    }
    goto skip_2;
    // 0x08001F60: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    skip_2:
    // 0x08001F64: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08001F68: addiu       $t2, $a0, -0x80
    ctx->r10 = ADD32(ctx->r4, -0X80);
    // 0x08001F6C: b           L_08001F80
    // 0x08001F70: andi        $a0, $t2, 0x3FF
    ctx->r4 = ctx->r10 & 0X3FF;
        goto L_08001F80;
    // 0x08001F70: andi        $a0, $t2, 0x3FF
    ctx->r4 = ctx->r10 & 0X3FF;
    // 0x08001F74: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
L_08001F78:
    // 0x08001F78: addiu       $t4, $a0, 0x80
    ctx->r12 = ADD32(ctx->r4, 0X80);
    // 0x08001F7C: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
L_08001F80:
    // 0x08001F80: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08001F84: jalr        $v0
    // 0x08001F88: sh          $a0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_24;
    // 0x08001F88: sh          $a0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r4;
    after_24:
    // 0x08001F8C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x08001F90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001F94: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08001F98: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08001F9C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08001FA0: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    // 0x08001FA4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08001FA8: jalr        $v0
    // 0x08001FAC: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_25;
    // 0x08001FAC: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    after_25:
    // 0x08001FB0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x08001FB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001FB8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08001FBC: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08001FC0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08001FC4: jalr        $t9
    // 0x08001FC8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08001FC8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    after_26:
    // 0x08001FCC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001FD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001FD4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001FD8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08001FDC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08001FE0: jalr        $t9
    // 0x08001FE4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08001FE4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_27:
    // 0x08001FE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001FEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001FF0: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08001FF4: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x08001FF8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08001FFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002000: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08002004: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002008: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800200C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08002010: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x08002014: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x08002018: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x0800201C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08002020: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08002024: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08002028: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800202C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08002030: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08002034: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002038: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x0800203C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002040: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08002044: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08002048: jalr        $t9
    // 0x0800204C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x0800204C: nop

    after_28:
    // 0x08002050: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08002054: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08002058: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x0800205C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002060: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002064: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08002068: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x0800206C: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08002070: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08002074: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002078: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800207C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08002080: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08002084: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08002088: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800208C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08002090: jalr        $t9
    // 0x08002094: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08002094: nop

    after_29:
    // 0x08002098: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800209C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080020A0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080020A4: jalr        $t9
    // 0x080020A8: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x080020A8: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    after_30:
    // 0x080020AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080020B0: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080020B4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080020B8: jalr        $t9
    // 0x080020BC: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080020BC: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_31:
    // 0x080020C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080020C4: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x080020C8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080020CC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080020D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x080020D4: jalr        $t9
    // 0x080020D8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x080020D8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_32:
    // 0x080020DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080020E0: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x080020E4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080020E8: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x080020EC: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    // 0x080020F0: jalr        $t9
    // 0x080020F4: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x080020F4: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_33:
    // 0x080020F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080020FC: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08002100: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800210C: jalr        $t9
    // 0x08002110: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08002110: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_34:
    // 0x08002114: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002118: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x0800211C: jalr        $t9
    // 0x08002120: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08002120: nop

    after_35:
    // 0x08002124: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(48, 0X53C) << 16);
    // 0x08002128: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800212C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002130: addiu       $t8, $t8, 0x53C
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(48, 0X53C));
    // 0x08002134: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x08002138: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x0800213C: jalr        $t9
    // 0x08002140: sw          $t8, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08002140: sw          $t8, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r24;
    after_36:
    // 0x08002144: b           L_080023EC
    // 0x08002148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_080023EC;
    // 0x08002148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_0800214C:
    // 0x0800214C: bne         $v0, $at, L_08002178
    if (ctx->r2 != ctx->r1) {
        // 0x08002150: lui         $t0, 0x800
        ctx->r8 = S32(RELOC_HI16(48, 0X280) << 16);
            goto L_08002178;
    }
    // 0x08002150: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(48, 0X280) << 16);
    // 0x08002154: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002158: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800215C: addiu       $t0, $t0, 0x280
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(48, 0X280));
    // 0x08002160: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x08002164: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x08002168: jalr        $t9
    // 0x0800216C: sw          $t0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x0800216C: sw          $t0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r8;
    after_37:
    // 0x08002170: b           L_080023EC
    // 0x08002174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_080023EC;
    // 0x08002174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08002178:
    // 0x08002178: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x0800217C: bne         $v0, $at, L_080023E8
    if (ctx->r2 != ctx->r1) {
        // 0x08002180: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_080023E8;
    }
    // 0x08002180: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x08002184: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002188: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x0800218C: jalr        $t9
    // 0x08002190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08002190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_38:
    // 0x08002194: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002198: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x0800219C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x080021A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x080021A4: jalr        $t9
    // 0x080021A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x080021A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_39:
    // 0x080021AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080021B0: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x080021B4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x080021B8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080021BC: jalr        $t9
    // 0x080021C0: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x080021C0: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_40:
    // 0x080021C4: lw          $t1, 0x84($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X84);
    // 0x080021C8: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080021CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080021D0: lwc1        $f18, 0x10($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X10);
    // 0x080021D4: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080021D8: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x080021DC: nop

    // 0x080021E0: bc1fl       L_080021FC
    if (!c1cs) {
        // 0x080021E4: lhu         $a0, 0x3A($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X3A);
            goto L_080021FC;
    }
    goto skip_3;
    // 0x080021E4: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    skip_3:
    // 0x080021E8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x080021EC: addiu       $t2, $a0, -0x1C0
    ctx->r10 = ADD32(ctx->r4, -0X1C0);
    // 0x080021F0: b           L_08002204
    // 0x080021F4: andi        $a0, $t2, 0x3FF
    ctx->r4 = ctx->r10 & 0X3FF;
        goto L_08002204;
    // 0x080021F4: andi        $a0, $t2, 0x3FF
    ctx->r4 = ctx->r10 & 0X3FF;
    // 0x080021F8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
L_080021FC:
    // 0x080021FC: addiu       $t4, $a0, 0x1C0
    ctx->r12 = ADD32(ctx->r4, 0X1C0);
    // 0x08002200: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
L_08002204:
    // 0x08002204: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08002208: jalr        $v0
    // 0x0800220C: sh          $a0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_41;
    // 0x0800220C: sh          $a0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r4;
    after_41:
    // 0x08002210: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08002214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002218: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800221C: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08002220: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08002224: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    // 0x08002228: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800222C: jalr        $v0
    // 0x08002230: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_42;
    // 0x08002230: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_42:
    // 0x08002234: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08002238: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800223C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08002240: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08002244: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x08002248: jalr        $t9
    // 0x0800224C: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x0800224C: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    after_43:
    // 0x08002250: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08002254: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002258: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800225C: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x08002260: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x08002264: jalr        $t9
    // 0x08002268: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08002268: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    after_44:
    // 0x0800226C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08002270: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08002274: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002278: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x0800227C: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08002280: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x08002284: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002288: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800228C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x08002290: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x08002294: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08002298: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x0800229C: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080022A0: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x080022A4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080022A8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x080022AC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080022B0: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x080022B4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x080022B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080022BC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x080022C0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x080022C4: jalr        $t9
    // 0x080022C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x080022C8: nop

    after_45:
    // 0x080022CC: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x080022D0: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x080022D4: lw          $t8, 0x84($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X84);
    // 0x080022D8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080022DC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080022E0: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x080022E4: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x080022E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080022EC: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x080022F0: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080022F4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080022F8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022FC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08002300: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08002304: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08002308: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800230C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x08002310: jalr        $t9
    // 0x08002314: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08002314: nop

    after_46:
    // 0x08002318: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800231C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08002320: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08002324: jalr        $t9
    // 0x08002328: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08002328: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    after_47:
    // 0x0800232C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002330: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002334: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08002338: jalr        $t9
    // 0x0800233C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x0800233C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_48:
    // 0x08002340: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08002344: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08002348: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800234C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x08002350: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x08002354: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08002358: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x0800235C: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08002360: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002364: jalr        $t9
    // 0x08002368: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08002368: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_49:
    // 0x0800236C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002370: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08002374: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002378: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x0800237C: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    // 0x08002380: jalr        $t9
    // 0x08002384: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08002384: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_50:
    // 0x08002388: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800238C: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08002390: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08002394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800239C: jalr        $t9
    // 0x080023A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x080023A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_51:
    // 0x080023A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080023A8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080023AC: jalr        $t9
    // 0x080023B0: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x080023B0: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_52:
    // 0x080023B4: beq         $v0, $zero, L_080023C8
    if (ctx->r2 == 0) {
        // 0x080023B8: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080023C8;
    }
    // 0x080023B8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080023BC: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080023C0: jalr        $t9
    // 0x080023C4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x080023C4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_53:
L_080023C8:
    // 0x080023C8: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(48, 0X16D8) << 16);
    // 0x080023CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023D4: addiu       $t0, $t0, 0x16D8
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(48, 0X16D8));
    // 0x080023D8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x080023DC: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x080023E0: jalr        $t9
    // 0x080023E4: sw          $t0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x080023E4: sw          $t0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r8;
    after_54:
L_080023E8:
    // 0x080023E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_080023EC:
    // 0x080023EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080023F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080023F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x080023F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x080023FC: jr          $ra
    // 0x08002400: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x08002400: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_080028B4_719754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080028B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x080028B8: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080028BC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x080028C0: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x080028C4: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x080028C8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x080028CC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x080028D0: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x080028D4: jalr        $v0
    // 0x080028D8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080028D8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_0:
    // 0x080028DC: beq         $v0, $zero, L_0800299C
    if (ctx->r2 == 0) {
        // 0x080028E0: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(48, 0X3648) << 16);
            goto L_0800299C;
    }
    // 0x080028E0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3648) << 16);
    // 0x080028E4: lwc1        $f20, 0x3648($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X3648));
    // 0x080028E8: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x080028EC: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x080028F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080028F4: or          $t6, $a3, $at
    ctx->r14 = ctx->r7 | ctx->r1;
    // 0x080028F8: lui         $at, 0x42DE
    ctx->r1 = S32(0X42DE << 16);
    // 0x080028FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002900: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08002904: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002908: lui         $at, 0xC310
    ctx->r1 = S32(0XC310 << 16);
    // 0x0800290C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002910: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002914: addiu       $t9, $t9, 0x58E8
    ctx->r25 = ADD32(ctx->r25, 0X58E8);
    // 0x08002918: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x0800291C: addiu       $t7, $zero, 0x120
    ctx->r15 = ADD32(0, 0X120);
    // 0x08002920: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x08002924: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x08002928: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x0800292C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x08002930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002934: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08002938: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0800293C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x08002940: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08002944: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x08002948: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x0800294C: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x08002950: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002954: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x08002958: jalr        $t9
    // 0x0800295C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800295C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x08002960: beq         $v0, $zero, L_0800299C
    if (ctx->r2 == 0) {
        // 0x08002964: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_0800299C;
    }
    // 0x08002964: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002968: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800296C: addiu       $t8, $zero, 0x44
    ctx->r24 = ADD32(0, 0X44);
    // 0x08002970: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002974: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08002978: jalr        $t9
    // 0x0800297C: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800297C: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_2:
    // 0x08002980: addiu       $t0, $zero, 0x1BD
    ctx->r8 = ADD32(0, 0X1BD);
    // 0x08002984: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x08002988: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0800298C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002990: sw          $t0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r8;
    // 0x08002994: sw          $t1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r9;
    // 0x08002998: sw          $t2, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r10;
L_0800299C:
    // 0x0800299C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x080029A0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X364C) << 16);
    // 0x080029A4: lwc1        $f20, 0x364C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X364C));
    // 0x080029A8: jalr        $t9
    // 0x080029AC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080029AC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_3:
    // 0x080029B0: beq         $v0, $zero, L_08002B10
    if (ctx->r2 == 0) {
        // 0x080029B4: lw          $a0, 0x70($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X70);
            goto L_08002B10;
    }
    // 0x080029B4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x080029B8: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x080029BC: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x080029C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080029C4: or          $t3, $a3, $at
    ctx->r11 = ctx->r7 | ctx->r1;
    // 0x080029C8: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x080029CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080029D0: lui         $at, 0xC198
    ctx->r1 = S32(0XC198 << 16);
    // 0x080029D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080029D8: lui         $at, 0xC30F
    ctx->r1 = S32(0XC30F << 16);
    // 0x080029DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080029E0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080029E4: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x080029E8: addiu       $v0, $v0, 0x58E8
    ctx->r2 = ADD32(ctx->r2, 0X58E8);
    // 0x080029EC: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x080029F0: addiu       $t4, $zero, 0x2F8
    ctx->r12 = ADD32(0, 0X2F8);
    // 0x080029F4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x080029F8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x080029FC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x08002A00: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x08002A04: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x08002A08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002A0C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08002A10: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08002A14: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x08002A18: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x08002A1C: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x08002A20: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x08002A24: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08002A28: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08002A2C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x08002A30: jalr        $v0
    // 0x08002A34: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08002A34: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x08002A38: beq         $v0, $zero, L_08002A74
    if (ctx->r2 == 0) {
        // 0x08002A3C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002A74;
    }
    // 0x08002A3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002A40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002A44: addiu       $t5, $zero, 0x44
    ctx->r13 = ADD32(0, 0X44);
    // 0x08002A48: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002A4C: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08002A50: jalr        $t9
    // 0x08002A54: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002A54: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_5:
    // 0x08002A58: addiu       $t6, $zero, 0x1BE
    ctx->r14 = ADD32(0, 0X1BE);
    // 0x08002A5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002A60: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08002A64: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002A68: sw          $t6, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r14;
    // 0x08002A6C: sw          $t7, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r15;
    // 0x08002A70: sw          $t8, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r24;
L_08002A74:
    // 0x08002A74: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x08002A78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002A7C: lui         $at, 0xC198
    ctx->r1 = S32(0XC198 << 16);
    // 0x08002A80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002A84: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x08002A88: lui         $at, 0xC30F
    ctx->r1 = S32(0XC30F << 16);
    // 0x08002A8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002A90: addiu       $t0, $zero, 0x230
    ctx->r8 = ADD32(0, 0X230);
    // 0x08002A94: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x08002A98: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x08002A9C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x08002AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002AA4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x08002AA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08002AAC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08002AB0: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x08002AB4: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x08002AB8: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x08002ABC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x08002AC0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08002AC4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002AC8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x08002ACC: jalr        $t9
    // 0x08002AD0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002AD0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x08002AD4: beq         $v0, $zero, L_08002B10
    if (ctx->r2 == 0) {
        // 0x08002AD8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002B10;
    }
    // 0x08002AD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002ADC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002AE0: addiu       $t1, $zero, 0x44
    ctx->r9 = ADD32(0, 0X44);
    // 0x08002AE4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002AE8: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08002AEC: jalr        $t9
    // 0x08002AF0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002AF0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_7:
    // 0x08002AF4: addiu       $t2, $zero, 0x1BF
    ctx->r10 = ADD32(0, 0X1BF);
    // 0x08002AF8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08002AFC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08002B00: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002B04: sw          $t2, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r10;
    // 0x08002B08: sw          $t3, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r11;
    // 0x08002B0C: sw          $t4, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r12;
L_08002B10:
    // 0x08002B10: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x08002B14: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    // 0x08002B18: jalr        $t9
    // 0x08002B1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002B1C: nop

    after_8:
    // 0x08002B20: beq         $v0, $zero, L_08002BD4
    if (ctx->r2 == 0) {
        // 0x08002B24: lw          $a0, 0x70($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X70);
            goto L_08002BD4;
    }
    // 0x08002B24: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x08002B28: lui         $a3, 0x8007
    ctx->r7 = S32(0X8007 << 16);
    // 0x08002B2C: addiu       $a3, $a3, -0x26E0
    ctx->r7 = ADD32(ctx->r7, -0X26E0);
    // 0x08002B30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002B34: or          $t5, $a3, $at
    ctx->r13 = ctx->r7 | ctx->r1;
    // 0x08002B38: lui         $at, 0x42A4
    ctx->r1 = S32(0X42A4 << 16);
    // 0x08002B3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002B40: lui         $at, 0xC198
    ctx->r1 = S32(0XC198 << 16);
    // 0x08002B44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002B48: lui         $at, 0xC228
    ctx->r1 = S32(0XC228 << 16);
    // 0x08002B4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002B50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B54: addiu       $t9, $t9, 0x58E8
    ctx->r25 = ADD32(ctx->r25, 0X58E8);
    // 0x08002B58: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08002B5C: addiu       $t6, $zero, 0xC5
    ctx->r14 = ADD32(0, 0XC5);
    // 0x08002B60: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x08002B64: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x08002B68: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x08002B6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002B70: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08002B74: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08002B78: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x08002B7C: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x08002B80: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x08002B84: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x08002B88: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08002B8C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08002B90: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x08002B94: jalr        $t9
    // 0x08002B98: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002B98: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x08002B9C: beq         $v0, $zero, L_08002BD4
    if (ctx->r2 == 0) {
        // 0x08002BA0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002BD4;
    }
    // 0x08002BA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002BA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002BA8: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x08002BAC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002BB0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08002BB4: jalr        $t9
    // 0x08002BB8: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08002BB8: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_10:
    // 0x08002BBC: addiu       $t8, $zero, 0x1C0
    ctx->r24 = ADD32(0, 0X1C0);
    // 0x08002BC0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08002BC4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002BC8: sw          $t8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r24;
    // 0x08002BCC: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x08002BD0: sw          $t0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r8;
L_08002BD4:
    // 0x08002BD4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x08002BD8: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x08002BDC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x08002BE0: jr          $ra
    // 0x08002BE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x08002BE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_08002BE8_719A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002BEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002BF0: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08002BF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002BF8: addiu       $s0, $s0, 0x4038
    ctx->r16 = ADD32(ctx->r16, 0X4038);
    // 0x08002BFC: jalr        $s0
    // 0x08002C00: addiu       $a0, $zero, 0x1BD
    ctx->r4 = ADD32(0, 0X1BD);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x08002C00: addiu       $a0, $zero, 0x1BD
    ctx->r4 = ADD32(0, 0X1BD);
    after_0:
    // 0x08002C04: jalr        $s0
    // 0x08002C08: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08002C08: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    after_1:
    // 0x08002C0C: jalr        $s0
    // 0x08002C10: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08002C10: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x08002C14: jalr        $s0
    // 0x08002C18: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08002C18: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    after_3:
    // 0x08002C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002C24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002C28: jr          $ra
    // 0x08002C2C: nop

    TRACE_RETURN()
    return;
    // 0x08002C2C: nop

;}
RECOMP_FUNC void func_08000F58_717DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000F5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000F60: addiu       $v0, $v0, -0x39FC
    ctx->r2 = ADD32(ctx->r2, -0X39FC);
    // 0x08000F64: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08000F68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000F6C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x08000F70: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x08000F74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000F78: lw          $t7, 0x5C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5C);
    // 0x08000F7C: lw          $s2, 0xD0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XD0);
    // 0x08000F80: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000F84: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x08000F88: lw          $t8, 0x84($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X84);
    // 0x08000F8C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000F90: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x08000F94: sh          $zero, 0x14($t8)
    MEM_H(0X14, ctx->r24) = 0;
    // 0x08000F98: lw          $t9, 0x84($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X84);
    // 0x08000F9C: sh          $zero, 0x18($t9)
    MEM_H(0X18, ctx->r25) = 0;
    // 0x08000FA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FA4: addiu       $t9, $t9, -0x6904
    ctx->r25 = ADD32(ctx->r25, -0X6904);
    // 0x08000FA8: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x08000FAC: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x08000FB0: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x08000FB4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08000FB8: jalr        $t9
    // 0x08000FBC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FBC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x08000FC0: lw          $t1, 0x84($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X84);
    // 0x08000FC4: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08000FC8: lw          $t3, -0x39FC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39FC);
    // 0x08000FCC: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x08000FD0: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08000FD4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000FD8: sh          $t2, 0x94($t3)
    MEM_H(0X94, ctx->r11) = ctx->r10;
    // 0x08000FDC: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x08000FE0: lw          $t5, -0x39EC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39EC);
    // 0x08000FE4: lhu         $v1, 0x16($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0X16);
    // 0x08000FE8: sh          $v1, 0x16($t5)
    MEM_H(0X16, ctx->r13) = ctx->r3;
    // 0x08000FEC: lw          $t6, -0x39E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39E4);
    // 0x08000FF0: sh          $v1, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r3;
    // 0x08000FF4: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000FF8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x08000FFC: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x08001000: sh          $t8, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r24;
    // 0x08001004: bgez        $t0, L_08001018
    if (SIGNED(ctx->r8) >= 0) {
        // 0x08001008: andi        $t9, $t0, 0x3
        ctx->r25 = ctx->r8 & 0X3;
            goto L_08001018;
    }
    // 0x08001008: andi        $t9, $t0, 0x3
    ctx->r25 = ctx->r8 & 0X3;
    // 0x0800100C: beq         $t9, $zero, L_08001018
    if (ctx->r25 == 0) {
        // 0x08001010: nop
    
            goto L_08001018;
    }
    // 0x08001010: nop

    // 0x08001014: addiu       $t9, $t9, -0x4
    ctx->r25 = ADD32(ctx->r25, -0X4);
L_08001018:
    // 0x08001018: bne         $t9, $zero, L_0800105C
    if (ctx->r25 != 0) {
        // 0x0800101C: nop
    
            goto L_0800105C;
    }
    // 0x0800101C: nop

    // 0x08001020: lw          $t1, 0x68($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X68);
    // 0x08001024: addiu       $a0, $zero, 0x25B
    ctx->r4 = ADD32(0, 0X25B);
    // 0x08001028: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x0800102C: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x08001030: bne         $t2, $zero, L_0800105C
    if (ctx->r10 != 0) {
        // 0x08001034: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_0800105C;
    }
    // 0x08001034: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001038: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800103C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001040: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x08001044: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x08001048: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x0800104C: addiu       $t9, $t9, -0x918
    ctx->r25 = ADD32(ctx->r25, -0X918);
    // 0x08001050: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08001054: jalr        $t9
    // 0x08001058: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001058: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
L_0800105C:
    // 0x0800105C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001060: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001064: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x08001068: jalr        $t9
    // 0x0800106C: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800106C: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    after_2:
    // 0x08001070: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001074: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001078: jalr        $t9
    // 0x0800107C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800107C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x08001080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001084: bne         $v0, $at, L_080010B4
    if (ctx->r2 != ctx->r1) {
        // 0x08001088: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080010B4;
    }
    // 0x08001088: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800108C: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001090: jalr        $t9
    // 0x08001094: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001094: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    after_4:
    // 0x08001098: bne         $v0, $zero, L_080010B4
    if (ctx->r2 != 0) {
        // 0x0800109C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(48, 0X10CC) << 16);
            goto L_080010B4;
    }
    // 0x0800109C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X10CC) << 16);
    // 0x080010A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080010A8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080010AC: jalr        $t9
    // 0x080010B0: addiu       $a0, $a0, 0x10CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X10CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080010B0: addiu       $a0, $a0, 0x10CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X10CC));
    after_5:
L_080010B4:
    // 0x080010B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080010B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080010BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x080010C0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x080010C4: jr          $ra
    // 0x080010C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x080010C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_080018B4_718754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080018B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080018B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080018BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080018C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080018C4: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080018C8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080018CC: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080018D0: ori         $t7, $t6, 0x4400
    ctx->r15 = ctx->r14 | 0X4400;
    // 0x080018D4: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x080018D8: lw          $t9, -0x39DC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39DC);
    // 0x080018DC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x080018E0: sb          $t8, 0xD0($t9)
    MEM_B(0XD0, ctx->r25) = ctx->r24;
    // 0x080018E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080018E8: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x080018EC: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x080018F0: jalr        $t9
    // 0x080018F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080018F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x080018F8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080018FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001900: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001904: jalr        $t9
    // 0x08001908: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001908: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    after_1:
    // 0x0800190C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001910: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x08001914: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001918: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800191C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X193C) << 16);
    // 0x08001920: addiu       $a0, $a0, 0x193C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X193C));
    // 0x08001924: jalr        $t9
    // 0x08001928: sb          $zero, 0x64($t0)
    MEM_B(0X64, ctx->r8) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001928: sb          $zero, 0x64($t0)
    MEM_B(0X64, ctx->r8) = 0;
    after_2:
    // 0x0800192C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001934: jr          $ra
    // 0x08001938: nop

    TRACE_RETURN()
    return;
    // 0x08001938: nop

;}
RECOMP_FUNC void func_08000A74_717914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A7C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A84: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000A88: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000A8C: beq         $t7, $zero, L_08000AB4
    if (ctx->r15 == 0) {
        // 0x08000A90: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000AB4;
    }
    // 0x08000A90: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A94: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A98: jalr        $t9
    // 0x08000A9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000AA0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000AA4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000AA8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0XAC4) << 16);
    // 0x08000AAC: jalr        $t9
    // 0x08000AB0: addiu       $a0, $a0, 0xAC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XAC4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000AB0: addiu       $a0, $a0, 0xAC4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XAC4));
    after_1:
L_08000AB4:
    // 0x08000AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000ABC: jr          $ra
    // 0x08000AC0: nop

    TRACE_RETURN()
    return;
    // 0x08000AC0: nop

;}
RECOMP_FUNC void func_08001754_7185F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001754: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08001758: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800175C: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08001760: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001768: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x0800176C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08001770: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001774: jalr        $v0
    // 0x08001778: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08001778: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x0800177C: bne         $v0, $zero, L_08001794
    if (ctx->r2 != 0) {
        // 0x08001780: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001794;
    }
    // 0x08001780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001784: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001788: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x0800178C: jalr        $t9
    // 0x08001790: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001790: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_08001794:
    // 0x08001794: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001798: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800179C: jalr        $t9
    // 0x080017A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080017A0: nop

    after_2:
    // 0x080017A4: bne         $v0, $zero, L_080018A0
    if (ctx->r2 != 0) {
        // 0x080017A8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_080018A0;
    }
    // 0x080017A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x080017AC: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080017B0: addiu       $v0, $v0, 0x4088
    ctx->r2 = ADD32(ctx->r2, 0X4088);
    // 0x080017B4: jalr        $v0
    // 0x080017B8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x080017B8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x080017BC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080017C0: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    // 0x080017C4: jalr        $t9
    // 0x080017C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080017C8: nop

    after_4:
    // 0x080017CC: beq         $v0, $zero, L_0800181C
    if (ctx->r2 == 0) {
        // 0x080017D0: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_0800181C;
    }
    // 0x080017D0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x080017D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080017D8: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    // 0x080017DC: jalr        $t9
    // 0x080017E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080017E0: nop

    after_5:
    // 0x080017E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080017E8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080017EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080017F4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080017F8: jalr        $t9
    // 0x080017FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080017FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x08001800: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001804: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001808: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1AE4) << 16);
    // 0x0800180C: jalr        $t9
    // 0x08001810: addiu       $a0, $a0, 0x1AE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1AE4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001810: addiu       $a0, $a0, 0x1AE4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1AE4));
    after_7:
    // 0x08001814: b           L_080018A4
    // 0x08001818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018A4;
    // 0x08001818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800181C:
    // 0x0800181C: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08001820: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08001824: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08001828: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x0800182C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08001830: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x08001834: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x08001838: sw          $t0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r8;
    // 0x0800183C: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08001840: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08001844: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001848: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0800184C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001850: sw          $zero, -0x764($at)
    MEM_W(-0X764, ctx->r1) = 0;
    // 0x08001854: lhu         $t2, 0x14E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X14E);
    // 0x08001858: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800185C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(48, 0X18B4) << 16);
    // 0x08001860: sw          $t2, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r10;
    // 0x08001864: lw          $t3, 0x150($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X150);
    // 0x08001868: addiu       $t9, $t9, 0x18B4
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(48, 0X18B4));
    // 0x0800186C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x08001870: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
    // 0x08001874: lhu         $t4, 0x154($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X154);
    // 0x08001878: addiu       $a0, $a0, 0x1F34
    ctx->r4 = ADD32(ctx->r4, 0X1F34);
    // 0x0800187C: sh          $t4, 0x7E($v1)
    MEM_H(0X7E, ctx->r3) = ctx->r12;
    // 0x08001880: lhu         $t5, 0x156($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X156);
    // 0x08001884: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x08001888: sb          $t5, 0x7C($v1)
    MEM_B(0X7C, ctx->r3) = ctx->r13;
    // 0x0800188C: sw          $t9, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r25;
    // 0x08001890: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001894: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001898: jalr        $t9
    // 0x0800189C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800189C: nop

    after_8:
L_080018A0:
    // 0x080018A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080018A4:
    // 0x080018A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080018A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080018AC: jr          $ra
    // 0x080018B0: nop

    TRACE_RETURN()
    return;
    // 0x080018B0: nop

;}
RECOMP_FUNC void func_08000000_716EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000008: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x0800000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000010: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000014: addiu       $s0, $s0, 0x40DC
    ctx->r16 = ADD32(ctx->r16, 0X40DC);
    // 0x08000018: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800001C: jalr        $s0
    // 0x08000020: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x08000020: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x08000024: beq         $v0, $zero, L_08000050
    if (ctx->r2 == 0) {
        // 0x08000028: nop
    
            goto L_08000050;
    }
    // 0x08000028: nop

    // 0x0800002C: jalr        $s0
    // 0x08000030: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08000030: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x08000034: bne         $v0, $zero, L_08000050
    if (ctx->r2 != 0) {
        // 0x08000038: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000050;
    }
    // 0x08000038: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800003C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000040: jalr        $t9
    // 0x08000044: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000044: nop

    after_2:
    // 0x08000048: b           L_080001CC
    // 0x0800004C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080001CC;
    // 0x0800004C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000050:
    // 0x08000050: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000054: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000058: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x0800005C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000060: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000064: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000068: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x0800006C: jalr        $t9
    // 0x08000070: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000070: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x08000074: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08000078: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800007C: bne         $v0, $zero, L_08000098
    if (ctx->r2 != 0) {
        // 0x08000080: sw          $v0, 0xD0($t6)
        MEM_W(0XD0, ctx->r14) = ctx->r2;
            goto L_08000098;
    }
    // 0x08000080: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x08000084: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000088: jalr        $t9
    // 0x0800008C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800008C: nop

    after_4:
    // 0x08000090: b           L_080001CC
    // 0x08000094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080001CC;
    // 0x08000094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000098:
    // 0x08000098: jalr        $s0
    // 0x0800009C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x0800009C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x080000A0: bne         $v0, $zero, L_080000B8
    if (ctx->r2 != 0) {
        // 0x080000A4: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_080000B8;
    }
    // 0x080000A4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080000A8: jalr        $s0
    // 0x080000AC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x080000AC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_6:
    // 0x080000B0: beq         $v0, $zero, L_080000F0
    if (ctx->r2 == 0) {
        // 0x080000B4: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_080000F0;
    }
    // 0x080000B4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_080000B8:
    // 0x080000B8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3634) << 16);
    // 0x080000BC: lwc1        $f0, 0x3634($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X3634));
    // 0x080000C0: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x080000C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080000C8: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x080000CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080000D0: lui         $at, 0xC2D6
    ctx->r1 = S32(0XC2D6 << 16);
    // 0x080000D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080000D8: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080000DC: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080000E0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080000E4: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x080000E8: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x080000EC: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
L_080000F0:
    // 0x080000F0: jalr        $s0
    // 0x080000F4: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x080000F4: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_7:
    // 0x080000F8: bne         $v0, $zero, L_08000120
    if (ctx->r2 != 0) {
        // 0x080000FC: nop
    
            goto L_08000120;
    }
    // 0x080000FC: nop

    // 0x08000100: jalr        $s0
    // 0x08000104: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x08000104: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_8:
    // 0x08000108: bne         $v0, $zero, L_08000120
    if (ctx->r2 != 0) {
        // 0x0800010C: nop
    
            goto L_08000120;
    }
    // 0x0800010C: nop

    // 0x08000110: jalr        $s0
    // 0x08000114: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_9;
    // 0x08000114: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_9:
    // 0x08000118: beq         $v0, $zero, L_08000128
    if (ctx->r2 == 0) {
        // 0x0800011C: nop
    
            goto L_08000128;
    }
    // 0x0800011C: nop

L_08000120:
    // 0x08000120: jal         0x08002604
    // 0x08000124: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_08002604_7194A4(rdram, ctx);
        goto after_10;
    // 0x08000124: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
L_08000128:
    // 0x08000128: jal         0x080028B4
    // 0x0800012C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_080028B4_719754(rdram, ctx);
        goto after_11;
    // 0x0800012C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_11:
    // 0x08000130: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000134: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000138: addiu       $t7, $zero, 0x28F
    ctx->r15 = ADD32(0, 0X28F);
    // 0x0800013C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000144: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000148: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x0800014C: jalr        $t9
    // 0x08000150: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000150: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    after_12:
    // 0x08000154: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000158: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x0800015C: jalr        $t9
    // 0x08000160: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000160: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_13:
    // 0x08000164: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x08000168: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x0800016C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000170: jalr        $s0
    // 0x08000174: sb          $t8, 0x99($t0)
    MEM_B(0X99, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_14;
    // 0x08000174: sb          $t8, 0x99($t0)
    MEM_B(0X99, ctx->r8) = ctx->r24;
    after_14:
    // 0x08000178: bne         $v0, $zero, L_0800018C
    if (ctx->r2 != 0) {
        // 0x0800017C: nop
    
            goto L_0800018C;
    }
    // 0x0800017C: nop

    // 0x08000180: jalr        $s0
    // 0x08000184: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_15;
    // 0x08000184: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_15:
    // 0x08000188: beq         $v0, $zero, L_080001B4
    if (ctx->r2 == 0) {
        // 0x0800018C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080001B4;
    }
L_0800018C:
    // 0x0800018C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000190: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000194: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000198: addiu       $a1, $zero, 0x1388
    ctx->r5 = ADD32(0, 0X1388);
    // 0x0800019C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x080001A0: jalr        $t9
    // 0x080001A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080001A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x080001A8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x080001AC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x080001B0: sb          $t1, 0x6E($t2)
    MEM_B(0X6E, ctx->r10) = ctx->r9;
L_080001B4:
    // 0x080001B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080001BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1DC) << 16);
    // 0x080001C0: jalr        $t9
    // 0x080001C4: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080001C4: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    after_17:
    // 0x080001C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080001CC:
    // 0x080001CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080001D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080001D4: jr          $ra
    // 0x080001D8: nop

    TRACE_RETURN()
    return;
    // 0x080001D8: nop

;}
RECOMP_FUNC void func_080007B4_717654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080007B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080007BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080007C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080007C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007C8: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080007CC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080007D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x080007D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080007D8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080007DC: jalr        $t9
    // 0x080007E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080007E4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080007E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080007EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007F0: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080007F4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(48, 0X2C78) << 16);
    // 0x080007F8: addiu       $a1, $a1, 0x2C78
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(48, 0X2C78));
    // 0x080007FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000800: lui         $a2, 0xC1D8
    ctx->r6 = S32(0XC1D8 << 16);
    // 0x08000804: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x08000808: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x0800080C: jalr        $t9
    // 0x08000810: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000810: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x08000814: beq         $v0, $zero, L_0800084C
    if (ctx->r2 == 0) {
        // 0x08000818: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_0800084C;
    }
    // 0x08000818: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0800081C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000820: addiu       $t6, $zero, 0x39
    ctx->r14 = ADD32(0, 0X39);
    // 0x08000824: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000828: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x0800082C: jalr        $t9
    // 0x08000830: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000830: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    after_2:
    // 0x08000834: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x08000838: sw          $v0, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r2;
    // 0x0800083C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08000840: lw          $t0, 0x64($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X64);
    // 0x08000844: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x08000848: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
L_0800084C:
    // 0x0800084C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x08000850: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000854: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000858: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X87C) << 16);
    // 0x0800085C: addiu       $a0, $a0, 0x87C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X87C));
    // 0x08000860: jalr        $t9
    // 0x08000864: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000864: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    after_3:
    // 0x08000868: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800086C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000870: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000874: jr          $ra
    // 0x08000878: nop

    TRACE_RETURN()
    return;
    // 0x08000878: nop

;}
RECOMP_FUNC void func_08002604_7194A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002604: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x08002608: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x0800260C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x08002610: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3644) << 16);
    // 0x08002614: lwc1        $f20, 0x3644($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X3644));
    // 0x08002618: lui         $s2, 0x8007
    ctx->r18 = S32(0X8007 << 16);
    // 0x0800261C: addiu       $s2, $s2, -0x26E0
    ctx->r18 = ADD32(ctx->r18, -0X26E0);
    // 0x08002620: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002624: or          $a3, $s2, $at
    ctx->r7 = ctx->r18 | ctx->r1;
    // 0x08002628: lui         $at, 0xC30A
    ctx->r1 = S32(0XC30A << 16);
    // 0x0800262C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002630: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x08002634: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002638: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x0800263C: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x08002640: lui         $at, 0x4284
    ctx->r1 = S32(0X4284 << 16);
    // 0x08002644: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002648: lui         $s1, 0x800
    ctx->r17 = S32(0X800 << 16);
    // 0x0800264C: lui         $s3, 0x8003
    ctx->r19 = S32(0X8003 << 16);
    // 0x08002650: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x08002654: addiu       $s3, $s3, 0x58E8
    ctx->r19 = ADD32(ctx->r19, 0X58E8);
    // 0x08002658: addiu       $s1, $s1, 0x0
    ctx->r17 = ADD32(ctx->r17, 0X0);
    // 0x0800265C: addiu       $t7, $zero, 0x310
    ctx->r15 = ADD32(0, 0X310);
    // 0x08002660: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x08002664: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x08002668: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x0800266C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08002670: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x08002674: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08002678: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0800267C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x08002680: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08002684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002688: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x0800268C: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x08002690: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x08002694: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08002698: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x0800269C: jalr        $s3
    // 0x080026A0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x080026A0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x080026A4: beq         $v0, $zero, L_080026DC
    if (ctx->r2 == 0) {
        // 0x080026A8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080026DC;
    }
    // 0x080026A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080026AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080026B0: addiu       $t8, $zero, 0x44
    ctx->r24 = ADD32(0, 0X44);
    // 0x080026B4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080026B8: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x080026BC: jalr        $t9
    // 0x080026C0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080026C0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_1:
    // 0x080026C4: addiu       $t0, $zero, 0xB4
    ctx->r8 = ADD32(0, 0XB4);
    // 0x080026C8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080026CC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080026D0: sw          $t0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r8;
    // 0x080026D4: sw          $t1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r9;
    // 0x080026D8: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_080026DC:
    // 0x080026DC: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x080026E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080026E4: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x080026E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080026EC: lui         $at, 0x429E
    ctx->r1 = S32(0X429E << 16);
    // 0x080026F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080026F4: addiu       $t2, $zero, 0x120
    ctx->r10 = ADD32(0, 0X120);
    // 0x080026F8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x080026FC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x08002700: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08002704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002708: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x0800270C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08002710: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x08002714: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x08002718: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x0800271C: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x08002720: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x08002724: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08002728: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x0800272C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x08002730: jalr        $s3
    // 0x08002734: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_2;
    // 0x08002734: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x08002738: beq         $v0, $zero, L_08002770
    if (ctx->r2 == 0) {
        // 0x0800273C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002770;
    }
    // 0x0800273C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002740: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002744: addiu       $t3, $zero, 0x44
    ctx->r11 = ADD32(0, 0X44);
    // 0x08002748: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800274C: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08002750: jalr        $t9
    // 0x08002754: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002754: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_3:
    // 0x08002758: addiu       $t4, $zero, 0xB5
    ctx->r12 = ADD32(0, 0XB5);
    // 0x0800275C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08002760: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002764: sw          $t4, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r12;
    // 0x08002768: sw          $t5, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r13;
    // 0x0800276C: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_08002770:
    // 0x08002770: lui         $at, 0x433B
    ctx->r1 = S32(0X433B << 16);
    // 0x08002774: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002778: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x0800277C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002780: lui         $at, 0x4353
    ctx->r1 = S32(0X4353 << 16);
    // 0x08002784: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002788: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x0800278C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x08002790: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x08002794: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08002798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800279C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x080027A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x080027A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x080027A8: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x080027AC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x080027B0: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x080027B4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x080027B8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x080027BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x080027C0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x080027C4: jalr        $s3
    // 0x080027C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_4;
    // 0x080027C8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x080027CC: beq         $v0, $zero, L_08002804
    if (ctx->r2 == 0) {
        // 0x080027D0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002804;
    }
    // 0x080027D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080027D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080027D8: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x080027DC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080027E0: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080027E4: jalr        $t9
    // 0x080027E8: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080027E8: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_5:
    // 0x080027EC: addiu       $t8, $zero, 0xB6
    ctx->r24 = ADD32(0, 0XB6);
    // 0x080027F0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x080027F4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080027F8: sw          $t8, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r24;
    // 0x080027FC: sw          $t0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r8;
    // 0x08002800: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_08002804:
    // 0x08002804: lui         $at, 0xC321
    ctx->r1 = S32(0XC321 << 16);
    // 0x08002808: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800280C: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x08002810: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002814: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
    // 0x08002818: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800281C: addiu       $t1, $zero, 0x210
    ctx->r9 = ADD32(0, 0X210);
    // 0x08002820: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x08002824: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x08002828: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x0800282C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002830: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x08002834: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x08002838: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x0800283C: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x08002840: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x08002844: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x08002848: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x0800284C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x08002850: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x08002854: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x08002858: jalr        $s3
    // 0x0800285C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_6;
    // 0x0800285C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x08002860: beq         $v0, $zero, L_08002894
    if (ctx->r2 == 0) {
        // 0x08002864: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002894;
    }
    // 0x08002864: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002868: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800286C: addiu       $t2, $zero, 0x44
    ctx->r10 = ADD32(0, 0X44);
    // 0x08002870: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002874: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08002878: jalr        $t9
    // 0x0800287C: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800287C: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_7:
    // 0x08002880: addiu       $t3, $zero, 0xB7
    ctx->r11 = ADD32(0, 0XB7);
    // 0x08002884: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002888: sw          $t3, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r11;
    // 0x0800288C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x08002890: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_08002894:
    // 0x08002894: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x08002898: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x0800289C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x080028A0: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x080028A4: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x080028A8: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x080028AC: jr          $ra
    // 0x080028B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x080028B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_08000BB8_717A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000BC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000BC8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000BCC: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000BD0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000BD4: ori         $t7, $t6, 0x4400
    ctx->r15 = ctx->r14 | 0X4400;
    // 0x08000BD8: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08000BDC: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08000BE0: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x08000BE4: jalr        $t9
    // 0x08000BE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x08000BEC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BF4: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000BF8: jalr        $t9
    // 0x08000BFC: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BFC: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    after_1:
    // 0x08000C00: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000C04: lw          $t8, -0x39D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39D8);
    // 0x08000C08: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000C0C: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08000C10: jalr        $t9
    // 0x08000C14: sb          $zero, 0x64($t8)
    MEM_B(0X64, ctx->r24) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C14: sb          $zero, 0x64($t8)
    MEM_B(0X64, ctx->r24) = 0;
    after_2:
    // 0x08000C18: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C1C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C20: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0XC3C) << 16);
    // 0x08000C24: jalr        $t9
    // 0x08000C28: addiu       $a0, $a0, 0xC3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XC3C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C28: addiu       $a0, $a0, 0xC3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XC3C));
    after_3:
    // 0x08000C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000C34: jr          $ra
    // 0x08000C38: nop

    TRACE_RETURN()
    return;
    // 0x08000C38: nop

;}
RECOMP_FUNC void func_080001DC_71707C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080001E0: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080001E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080001EC: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x080001F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080001F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x080001F8: jalr        $v0
    // 0x080001FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080001FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x08000200: beq         $v0, $zero, L_08000228
    if (ctx->r2 == 0) {
        // 0x08000204: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_08000228;
    }
    // 0x08000204: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x08000208: jalr        $t9
    // 0x0800020C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800020C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x08000210: bne         $v0, $zero, L_08000228
    if (ctx->r2 != 0) {
        // 0x08000214: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000228;
    }
    // 0x08000214: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000218: jal         0x08001B44
    // 0x0800021C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_08001B44_7189E4(rdram, ctx);
        goto after_2;
    // 0x0800021C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08000220: b           L_08000274
    // 0x08000224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000274;
    // 0x08000224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000228:
    // 0x08000228: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x0800022C: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x08000230: jalr        $t9
    // 0x08000234: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000234: nop

    after_3:
    // 0x08000238: beq         $v0, $zero, L_08000264
    if (ctx->r2 == 0) {
        // 0x0800023C: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_08000264;
    }
    // 0x0800023C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08000240: lw          $t6, -0x38E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X38E8);
    // 0x08000244: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000248: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x0800024C: bnel        $at, $zero, L_08000268
    if (ctx->r1 != 0) {
        // 0x08000250: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000268;
    }
    goto skip_0;
    // 0x08000250: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x08000254: jal         0x08001B44
    // 0x08000258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_08001B44_7189E4(rdram, ctx);
        goto after_4;
    // 0x08000258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x0800025C: b           L_08000274
    // 0x08000260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000274;
    // 0x08000260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000264:
    // 0x08000264: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_08000268:
    // 0x08000268: jal         0x08001B44
    // 0x0800026C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_08001B44_7189E4(rdram, ctx);
        goto after_5;
    // 0x0800026C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x08000270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000274:
    // 0x08000274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000278: jr          $ra
    // 0x0800027C: nop

    TRACE_RETURN()
    return;
    // 0x0800027C: nop

;}
RECOMP_FUNC void func_08003088_719F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800308C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003090: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003094: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08003098: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x0800309C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080030A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080030A4: bnel        $t6, $at, L_08003180
    if (ctx->r14 != ctx->r1) {
        // 0x080030A8: lhu         $t0, 0x8A($s0)
        ctx->r8 = MEM_HU(ctx->r16, 0X8A);
            goto L_08003180;
    }
    goto skip_0;
    // 0x080030A8: lhu         $t0, 0x8A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8A);
    skip_0:
    // 0x080030AC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080030B0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080030B4: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x080030B8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080030BC: mfhi        $t7
    ctx->r15 = hi;
    // 0x080030C0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x080030C4: bne         $t7, $zero, L_080030F8
    if (ctx->r15 != 0) {
        // 0x080030C8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_080030F8;
    }
    // 0x080030C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080030CC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080030D0: mfhi        $t8
    ctx->r24 = hi;
    // 0x080030D4: bnel        $t8, $zero, L_080030FC
    if (ctx->r24 != 0) {
        // 0x080030D8: addiu       $v0, $s0, 0xD0
        ctx->r2 = ADD32(ctx->r16, 0XD0);
            goto L_080030FC;
    }
    goto skip_1;
    // 0x080030D8: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    skip_1:
    // 0x080030DC: bgez        $v0, L_080030F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x080030E0: andi        $t9, $v0, 0xF
        ctx->r25 = ctx->r2 & 0XF;
            goto L_080030F0;
    }
    // 0x080030E0: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x080030E4: beq         $t9, $zero, L_080030F0
    if (ctx->r25 == 0) {
        // 0x080030E8: nop
    
            goto L_080030F0;
    }
    // 0x080030E8: nop

    // 0x080030EC: addiu       $t9, $t9, -0x10
    ctx->r25 = ADD32(ctx->r25, -0X10);
L_080030F0:
    // 0x080030F0: beq         $t9, $zero, L_0800313C
    if (ctx->r25 == 0) {
        // 0x080030F4: addiu       $v0, $s0, 0xD0
        ctx->r2 = ADD32(ctx->r16, 0XD0);
            goto L_0800313C;
    }
    // 0x080030F4: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
L_080030F8:
    // 0x080030F8: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
L_080030FC:
    // 0x080030FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003100: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08003104: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08003108: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0800310C: jalr        $t9
    // 0x08003110: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003110: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003114: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08003118: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800311C: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08003120: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x08003124: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x08003128: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x0800312C: jalr        $t9
    // 0x08003130: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003130: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x08003134: b           L_08003180
    // 0x08003138: lhu         $t0, 0x8A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8A);
        goto L_08003180;
    // 0x08003138: lhu         $t0, 0x8A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8A);
L_0800313C:
    // 0x0800313C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003140: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08003144: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08003148: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0800314C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08003150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003154: jalr        $t9
    // 0x08003158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x0800315C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08003160: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003164: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08003168: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x0800316C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x08003170: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x08003174: jalr        $t9
    // 0x08003178: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003178: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_3:
    // 0x0800317C: lhu         $t0, 0x8A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X8A);
L_08003180:
    // 0x08003180: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08003184: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08003188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800318C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003190: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003194: jr          $ra
    // 0x08003198: nop

    TRACE_RETURN()
    return;
    // 0x08003198: nop

;}
RECOMP_FUNC void func_080005E4_717484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080005E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080005EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080005F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080005F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005F8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080005FC: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x08000600: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000604: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x08000608: jalr        $t9
    // 0x0800060C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800060C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000610: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000614: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000618: jalr        $t9
    // 0x0800061C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800061C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x08000620: beq         $v0, $zero, L_080007A0
    if (ctx->r2 == 0) {
        // 0x08000624: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080007A0;
    }
    // 0x08000624: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000628: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x0800062C: jalr        $t9
    // 0x08000630: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000630: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x08000634: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x08000638: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800063C: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x08000640: addiu       $t6, $a0, 0x40
    ctx->r14 = ADD32(ctx->r4, 0X40);
    // 0x08000644: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    // 0x08000648: sh          $a0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r4;
    // 0x0800064C: jalr        $v0
    // 0x08000650: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000650: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x08000654: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000658: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800065C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x08000660: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x08000664: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x08000668: lhu         $a0, 0x2E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2E);
    // 0x0800066C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08000670: jalr        $v0
    // 0x08000674: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08000674: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x08000678: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800067C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000680: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000684: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08000688: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x0800068C: jalr        $t9
    // 0x08000690: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000690: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_5:
    // 0x08000694: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x08000698: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800069C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080006A0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x080006A4: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x080006A8: jalr        $t9
    // 0x080006AC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080006AC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_6:
    // 0x080006B0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x080006B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080006B8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x080006BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080006C0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080006C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080006C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080006CC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x080006D0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x080006D4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x080006D8: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080006DC: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x080006E0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080006E4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x080006E8: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x080006EC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x080006F0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x080006F4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080006F8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080006FC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x08000700: jalr        $t9
    // 0x08000704: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000704: nop

    after_7:
    // 0x08000708: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x0800070C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000710: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000714: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000718: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800071C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000720: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000724: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x08000728: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x0800072C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x08000730: jalr        $t9
    // 0x08000734: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000734: nop

    after_8:
    // 0x08000738: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800073C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000740: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000744: jalr        $t9
    // 0x08000748: addiu       $a1, $zero, 0x1100
    ctx->r5 = ADD32(0, 0X1100);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000748: addiu       $a1, $zero, 0x1100
    ctx->r5 = ADD32(0, 0X1100);
    after_9:
    // 0x0800074C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000750: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000754: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000758: jalr        $t9
    // 0x0800075C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800075C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    after_10:
    // 0x08000760: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000764: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08000768: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x0800076C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000770: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08000774: lw          $t8, 0x84($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X84);
    // 0x08000778: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800077C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X7B4) << 16);
    // 0x08000780: swc1        $f16, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f16.u32l;
    // 0x08000784: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x08000788: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x0800078C: lw          $t0, 0x84($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X84);
    // 0x08000790: addiu       $a0, $a0, 0x7B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X7B4));
    // 0x08000794: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000798: jalr        $t9
    // 0x0800079C: swc1        $f6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800079C: swc1        $f6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f6.u32l;
    after_11:
L_080007A0:
    // 0x080007A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080007A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080007A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x080007AC: jr          $ra
    // 0x080007B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x080007B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_080009C0_717860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080009C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080009C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080009CC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080009D0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x080009D4: lw          $a2, 0xD0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XD0);
    // 0x080009D8: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x080009DC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080009E0: bne         $v1, $zero, L_08000A64
    if (ctx->r3 != 0) {
        // 0x080009E4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000A64;
    }
    // 0x080009E4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080009E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009EC: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080009F0: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x080009F4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x080009F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x080009FC: jalr        $t9
    // 0x08000A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000A04: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x08000A08: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000A0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A10: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08000A14: sw          $t8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r24;
    // 0x08000A18: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000A1C: jalr        $t9
    // 0x08000A20: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A20: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    after_1:
    // 0x08000A24: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A28: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000A2C: jalr        $t9
    // 0x08000A30: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A30: addiu       $a0, $zero, 0x26C
    ctx->r4 = ADD32(0, 0X26C);
    after_2:
    // 0x08000A34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000A38: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000A3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000A40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000A44: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000A48: jalr        $t9
    // 0x08000A4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000A50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0XA74) << 16);
    // 0x08000A5C: jalr        $t9
    // 0x08000A60: addiu       $a0, $a0, 0xA74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XA74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000A60: addiu       $a0, $a0, 0xA74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XA74));
    after_4:
L_08000A64:
    // 0x08000A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A6C: jr          $ra
    // 0x08000A70: nop

    TRACE_RETURN()
    return;
    // 0x08000A70: nop

;}
RECOMP_FUNC void func_08000C3C_717ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000C48: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08000C4C: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x08000C50: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000C54: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08000C58: jal         0x08002C30
    // 0x08000C5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_08002C30_719AD0(rdram, ctx);
        goto after_0;
    // 0x08000C5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000C60: jal         0x080028B4
    // 0x08000C64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_080028B4_719754(rdram, ctx);
        goto after_1;
    // 0x08000C64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000C68: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C6C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000C70: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1DC) << 16);
    // 0x08000C74: jalr        $t9
    // 0x08000C78: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C78: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    after_2:
    // 0x08000C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C84: jr          $ra
    // 0x08000C88: nop

    TRACE_RETURN()
    return;
    // 0x08000C88: nop

;}
RECOMP_FUNC void func_08002504_7193A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002504: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002508: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800250C: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08002510: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002514: addiu       $s0, $s0, 0x4038
    ctx->r16 = ADD32(ctx->r16, 0X4038);
    // 0x08002518: jalr        $s0
    // 0x0800251C: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800251C: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    after_0:
    // 0x08002520: jalr        $s0
    // 0x08002524: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08002524: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    after_1:
    // 0x08002528: jalr        $s0
    // 0x0800252C: addiu       $a0, $zero, 0xA9
    ctx->r4 = ADD32(0, 0XA9);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x0800252C: addiu       $a0, $zero, 0xA9
    ctx->r4 = ADD32(0, 0XA9);
    after_2:
    // 0x08002530: jalr        $s0
    // 0x08002534: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08002534: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    after_3:
    // 0x08002538: jalr        $s0
    // 0x0800253C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x0800253C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    after_4:
    // 0x08002540: jalr        $s0
    // 0x08002544: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08002544: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    after_5:
    // 0x08002548: jalr        $s0
    // 0x0800254C: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x0800254C: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    after_6:
    // 0x08002550: jalr        $s0
    // 0x08002554: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x08002554: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    after_7:
    // 0x08002558: jalr        $s0
    // 0x0800255C: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x0800255C: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    after_8:
    // 0x08002560: jalr        $s0
    // 0x08002564: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_9;
    // 0x08002564: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    after_9:
    // 0x08002568: jalr        $s0
    // 0x0800256C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_10;
    // 0x0800256C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    after_10:
    // 0x08002570: jalr        $s0
    // 0x08002574: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_11;
    // 0x08002574: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    after_11:
    // 0x08002578: jalr        $s0
    // 0x0800257C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_12;
    // 0x0800257C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    after_12:
    // 0x08002580: jalr        $s0
    // 0x08002584: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_13;
    // 0x08002584: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_13:
    // 0x08002588: jalr        $s0
    // 0x0800258C: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_14;
    // 0x0800258C: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    after_14:
    // 0x08002590: jalr        $s0
    // 0x08002594: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_15;
    // 0x08002594: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    after_15:
    // 0x08002598: jalr        $s0
    // 0x0800259C: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_16;
    // 0x0800259C: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    after_16:
    // 0x080025A0: jalr        $s0
    // 0x080025A4: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_17;
    // 0x080025A4: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    after_17:
    // 0x080025A8: jalr        $s0
    // 0x080025AC: addiu       $a0, $zero, 0xB9
    ctx->r4 = ADD32(0, 0XB9);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_18;
    // 0x080025AC: addiu       $a0, $zero, 0xB9
    ctx->r4 = ADD32(0, 0XB9);
    after_18:
    // 0x080025B0: jalr        $s0
    // 0x080025B4: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_19;
    // 0x080025B4: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    after_19:
    // 0x080025B8: jalr        $s0
    // 0x080025BC: addiu       $a0, $zero, 0xBB
    ctx->r4 = ADD32(0, 0XBB);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_20;
    // 0x080025BC: addiu       $a0, $zero, 0xBB
    ctx->r4 = ADD32(0, 0XBB);
    after_20:
    // 0x080025C0: jalr        $s0
    // 0x080025C4: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_21;
    // 0x080025C4: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    after_21:
    // 0x080025C8: jalr        $s0
    // 0x080025CC: addiu       $a0, $zero, 0xBD
    ctx->r4 = ADD32(0, 0XBD);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_22;
    // 0x080025CC: addiu       $a0, $zero, 0xBD
    ctx->r4 = ADD32(0, 0XBD);
    after_22:
    // 0x080025D0: jalr        $s0
    // 0x080025D4: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_23;
    // 0x080025D4: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    after_23:
    // 0x080025D8: jalr        $s0
    // 0x080025DC: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_24;
    // 0x080025DC: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    after_24:
    // 0x080025E0: jalr        $s0
    // 0x080025E4: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_25;
    // 0x080025E4: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    after_25:
    // 0x080025E8: jalr        $s0
    // 0x080025EC: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_26;
    // 0x080025EC: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    after_26:
    // 0x080025F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080025F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080025F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080025FC: jr          $ra
    // 0x08002600: nop

    TRACE_RETURN()
    return;
    // 0x08002600: nop

;}
RECOMP_FUNC void func_08001254_7180F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001254: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08001258: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800125C: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08001260: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001268: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x0800126C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001270: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08001274: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08001278: jalr        $v0
    // 0x0800127C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0800127C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x08001280: beq         $v0, $zero, L_08001298
    if (ctx->r2 == 0) {
        // 0x08001284: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_08001298;
    }
    // 0x08001284: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001288: jalr        $t9
    // 0x0800128C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800128C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x08001290: beq         $v0, $zero, L_080012B0
    if (ctx->r2 == 0) {
        // 0x08001294: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_080012B0;
    }
    // 0x08001294: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
L_08001298:
    // 0x08001298: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800129C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080012A0: jalr        $t9
    // 0x080012A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080012A4: nop

    after_2:
    // 0x080012A8: b           L_080016A4
    // 0x080012AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080016A4;
    // 0x080012AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080012B0:
    // 0x080012B0: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080012B4: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080012B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080012BC: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080012C0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080012C4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x080012C8: jalr        $t9
    // 0x080012CC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080012CC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x080012D0: bne         $v0, $zero, L_080012F0
    if (ctx->r2 != 0) {
        // 0x080012D4: sw          $v0, 0xD0($s1)
        MEM_W(0XD0, ctx->r17) = ctx->r2;
            goto L_080012F0;
    }
    // 0x080012D4: sw          $v0, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r2;
    // 0x080012D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012DC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080012E0: jalr        $t9
    // 0x080012E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080012E4: nop

    after_4:
    // 0x080012E8: b           L_080016A4
    // 0x080012EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080016A4;
    // 0x080012EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080012F0:
    // 0x080012F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012F4: addiu       $t6, $zero, 0x28F
    ctx->r14 = ADD32(0, 0X28F);
    // 0x080012F8: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080012FC: lw          $s0, 0xD0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XD0);
    // 0x08001300: sh          $t6, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r14;
    // 0x08001304: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800130C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x08001310: jalr        $t9
    // 0x08001314: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001314: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x08001318: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800131C: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x08001320: jalr        $t9
    // 0x08001324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001324: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x08001328: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3640) << 16);
    // 0x0800132C: lwc1        $f0, 0x3640($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(48, 0X3640));
    // 0x08001330: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x08001334: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x08001338: sb          $t7, 0x99($s1)
    MEM_B(0X99, ctx->r17) = ctx->r15;
    // 0x0800133C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001340: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08001344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001348: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    // 0x0800134C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08001350: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001354: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08001358: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x0800135C: jalr        $t9
    // 0x08001360: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001360: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_7:
    // 0x08001364: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08001368: sb          $t8, 0x6E($s1)
    MEM_B(0X6E, ctx->r17) = ctx->r24;
    // 0x0800136C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001370: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x08001374: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08001378: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800137C: lw          $t1, 0x2C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2C);
    // 0x08001380: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x08001384: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x08001388: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
    // 0x0800138C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001390: jalr        $t9
    // 0x08001394: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001394: nop

    after_8:
    // 0x08001398: beq         $v0, $zero, L_080013CC
    if (ctx->r2 == 0) {
        // 0x0800139C: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_080013CC;
    }
    // 0x0800139C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080013A0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080013A4: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080013A8: jalr        $t9
    // 0x080013AC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080013AC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_9:
    // 0x080013B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080013B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080013B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X16B4) << 16);
    // 0x080013BC: jalr        $t9
    // 0x080013C0: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080013C0: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    after_10:
    // 0x080013C4: b           L_080016A4
    // 0x080013C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080016A4;
    // 0x080013C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080013CC:
    // 0x080013CC: jalr        $t9
    // 0x080013D0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080013D0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_11:
    // 0x080013D4: bne         $v0, $zero, L_080013EC
    if (ctx->r2 != 0) {
        // 0x080013D8: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_080013EC;
    }
    // 0x080013D8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x080013DC: jalr        $t9
    // 0x080013E0: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080013E0: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_12:
    // 0x080013E4: beq         $v0, $zero, L_08001690
    if (ctx->r2 == 0) {
        // 0x080013E8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(48, 0X16B4) << 16);
            goto L_08001690;
    }
    // 0x080013E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X16B4) << 16);
L_080013EC:
    // 0x080013EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013F0: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080013F4: jalr        $t9
    // 0x080013F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080013F8: nop

    after_13:
    // 0x080013FC: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001400: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08001404: jalr        $t9
    // 0x08001408: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08001408: nop

    after_14:
    // 0x0800140C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001410: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08001414: addiu       $a0, $zero, 0x160
    ctx->r4 = ADD32(0, 0X160);
    // 0x08001418: jalr        $t9
    // 0x0800141C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800141C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x08001420: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001424: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08001428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800142C: jalr        $t9
    // 0x08001430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x08001434: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001438: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x0800143C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08001440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001444: jalr        $t9
    // 0x08001448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x0800144C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001450: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08001454: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x08001458: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800145C: jalr        $t9
    // 0x08001460: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08001460: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_18:
    // 0x08001464: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x08001468: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x0800146C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001470: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08001474: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001478: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800147C: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08001480: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08001484: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08001488: jalr        $t9
    // 0x0800148C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800148C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_19:
    // 0x08001490: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x08001494: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x08001498: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x0800149C: lwc1        $f16, 0x10($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X10);
    // 0x080014A0: lwc1        $f18, 0x10($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X10);
    // 0x080014A4: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x080014A8: nop

    // 0x080014AC: bc1f        L_080014BC
    if (!c1cs) {
        // 0x080014B0: addiu       $t5, $v0, -0x1C0
        ctx->r13 = ADD32(ctx->r2, -0X1C0);
            goto L_080014BC;
    }
    // 0x080014B0: addiu       $t5, $v0, -0x1C0
    ctx->r13 = ADD32(ctx->r2, -0X1C0);
    // 0x080014B4: b           L_080014C4
    // 0x080014B8: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
        goto L_080014C4;
    // 0x080014B8: andi        $a0, $t5, 0x3FF
    ctx->r4 = ctx->r13 & 0X3FF;
L_080014BC:
    // 0x080014BC: addiu       $t7, $v0, 0x1C0
    ctx->r15 = ADD32(ctx->r2, 0X1C0);
    // 0x080014C0: andi        $a0, $t7, 0x3FF
    ctx->r4 = ctx->r15 & 0X3FF;
L_080014C4:
    // 0x080014C4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080014C8: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x080014CC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080014D0: jalr        $v0
    // 0x080014D4: sh          $a0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_20;
    // 0x080014D4: sh          $a0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r4;
    after_20:
    // 0x080014D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080014DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080014E0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080014E4: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x080014E8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080014EC: lhu         $a0, 0x40($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X40);
    // 0x080014F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x080014F4: jalr        $v0
    // 0x080014F8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_21;
    // 0x080014F8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x080014FC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08001500: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001504: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08001508: lhu         $a0, 0x42($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X42);
    // 0x0800150C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x08001510: jalr        $t9
    // 0x08001514: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001514: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    after_22:
    // 0x08001518: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x0800151C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001520: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08001524: lhu         $a0, 0x42($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X42);
    // 0x08001528: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x0800152C: jalr        $t9
    // 0x08001530: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001530: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_23:
    // 0x08001534: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08001538: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x0800153C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08001540: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x08001544: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08001548: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x0800154C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001550: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001554: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001558: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x0800155C: sb          $t0, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r8;
    // 0x08001560: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08001564: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001568: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800156C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001570: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x08001574: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08001578: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800157C: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x08001580: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08001584: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08001588: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800158C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08001590: jalr        $t9
    // 0x08001594: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001594: nop

    after_24:
    // 0x08001598: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x0800159C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x080015A0: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x080015A4: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x080015A8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x080015AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080015B0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080015B4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x080015B8: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x080015BC: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x080015C0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080015C4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080015C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015CC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080015D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080015D4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x080015D8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080015DC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080015E0: jalr        $t9
    // 0x080015E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080015E4: nop

    after_25:
    // 0x080015E8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080015EC: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x080015F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080015F4: jalr        $t9
    // 0x080015F8: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080015F8: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    after_26:
    // 0x080015FC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001600: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08001604: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001608: jalr        $t9
    // 0x0800160C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x0800160C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_27:
    // 0x08001610: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08001614: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x08001618: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800161C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x08001620: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x08001624: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08001628: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x0800162C: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x08001630: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001634: jalr        $t9
    // 0x08001638: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001638: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_28:
    // 0x0800163C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001640: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x08001644: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001648: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x0800164C: addiu       $a2, $zero, 0xA1
    ctx->r6 = ADD32(0, 0XA1);
    // 0x08001650: jalr        $t9
    // 0x08001654: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001654: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_29:
    // 0x08001658: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800165C: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x08001660: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08001664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800166C: jalr        $t9
    // 0x08001670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_30:
    // 0x08001674: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001678: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800167C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1980) << 16);
    // 0x08001680: jalr        $t9
    // 0x08001684: addiu       $a0, $a0, 0x1980
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1980));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001684: addiu       $a0, $a0, 0x1980
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1980));
    after_31:
    // 0x08001688: b           L_080016A4
    // 0x0800168C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080016A4;
    // 0x0800168C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001690:
    // 0x08001690: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001694: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001698: jalr        $t9
    // 0x0800169C: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x0800169C: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    after_32:
    // 0x080016A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080016A4:
    // 0x080016A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080016A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x080016AC: jr          $ra
    // 0x080016B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x080016B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_080016D8_718578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080016DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080016E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080016E4: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x080016E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080016EC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x080016F0: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x080016F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080016F8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080016FC: bne         $t6, $at, L_08001744
    if (ctx->r14 != ctx->r1) {
        // 0x08001700: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_08001744;
    }
    // 0x08001700: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001704: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001708: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x0800170C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08001710: jalr        $t9
    // 0x08001714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001718: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x0800171C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001720: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08001724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001728: jalr        $t9
    // 0x0800172C: lhu         $a0, 0xA4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800172C: lhu         $a0, 0xA4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0XA4);
    after_1:
    // 0x08001730: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001734: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001738: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1754) << 16);
    // 0x0800173C: jalr        $t9
    // 0x08001740: addiu       $a0, $a0, 0x1754
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1754));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001740: addiu       $a0, $a0, 0x1754
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1754));
    after_2:
L_08001744:
    // 0x08001744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800174C: jr          $ra
    // 0x08001750: nop

    TRACE_RETURN()
    return;
    // 0x08001750: nop

;}
RECOMP_FUNC void func_08000410_7172B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000414: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800041C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000420: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000424: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000428: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x0800042C: jalr        $v1
    // 0x08000430: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08000430: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x08000434: beq         $v0, $zero, L_08000470
    if (ctx->r2 == 0) {
        // 0x08000438: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_08000470;
    }
    // 0x08000438: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x0800043C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000440: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08000444: jalr        $t9
    // 0x08000448: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000448: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x0800044C: jal         0x08002504
    // 0x08000450: nop

    func_08002504_7193A4(rdram, ctx);
        goto after_2;
    // 0x08000450: nop

    after_2:
    // 0x08000454: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000458: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800045C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X4E8) << 16);
    // 0x08000460: jalr        $t9
    // 0x08000464: addiu       $a0, $a0, 0x4E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X4E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000464: addiu       $a0, $a0, 0x4E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X4E8));
    after_3:
    // 0x08000468: b           L_080004DC
    // 0x0800046C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080004DC;
    // 0x0800046C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000470:
    // 0x08000470: jalr        $v1
    // 0x08000474: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08000474: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_4:
    // 0x08000478: beq         $v0, $zero, L_080004B4
    if (ctx->r2 == 0) {
        // 0x0800047C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(48, 0X1DC) << 16);
            goto L_080004B4;
    }
    // 0x0800047C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1DC) << 16);
    // 0x08000480: jal         0x08002504
    // 0x08000484: nop

    func_08002504_7193A4(rdram, ctx);
        goto after_5;
    // 0x08000484: nop

    after_5:
    // 0x08000488: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800048C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000490: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X1DC) << 16);
    // 0x08000494: jalr        $t9
    // 0x08000498: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000498: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    after_6:
    // 0x0800049C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080004A0: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x080004A4: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x080004A8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080004AC: b           L_080004D8
    // 0x080004B0: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
        goto L_080004D8;
    // 0x080004B0: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
L_080004B4:
    // 0x080004B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004BC: jalr        $t9
    // 0x080004C0: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080004C0: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X1DC));
    after_7:
    // 0x080004C4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080004C8: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x080004CC: lw          $t8, 0x68($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X68);
    // 0x080004D0: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x080004D4: sw          $t0, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r8;
L_080004D8:
    // 0x080004D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080004DC:
    // 0x080004DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080004E0: jr          $ra
    // 0x080004E4: nop

    TRACE_RETURN()
    return;
    // 0x080004E4: nop

;}
RECOMP_FUNC void func_08001AE4_718984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001AE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001AE8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001AEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001AF0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08001AF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001AF8: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08001AFC: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x08001B00: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08001B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001B08: addiu       $a0, $zero, 0x1E1
    ctx->r4 = ADD32(0, 0X1E1);
    // 0x08001B0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001B10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001B14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001B18: jalr        $t9
    // 0x08001B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001B20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B28: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x08001B2C: jalr        $t9
    // 0x08001B30: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B30: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_1:
    // 0x08001B34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001B38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001B3C: jr          $ra
    // 0x08001B40: nop

    TRACE_RETURN()
    return;
    // 0x08001B40: nop

;}
RECOMP_FUNC void func_08002E20_719CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002E24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002E2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002E30: addiu       $t9, $t9, 0x6AC
    ctx->r25 = ADD32(ctx->r25, 0X6AC);
    // 0x08002E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002E38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002E3C: jalr        $t9
    // 0x08002E40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08002E44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08002E48: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x08002E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002E50: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x08002E54: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002E58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002E5C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x08002E60: beq         $t6, $zero, L_08002E78
    if (ctx->r14 == 0) {
        // 0x08002E64: and         $t7, $v0, $at
        ctx->r15 = ctx->r2 & ctx->r1;
            goto L_08002E78;
    }
    // 0x08002E64: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x08002E68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E6C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002E70: jalr        $t9
    // 0x08002E74: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002E74: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    after_1:
L_08002E78:
    // 0x08002E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002E80: jr          $ra
    // 0x08002E84: nop

    TRACE_RETURN()
    return;
    // 0x08002E84: nop

;}
RECOMP_FUNC void func_0800087C_71771C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800087C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x08000880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000884: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000888: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800088C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000890: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000894: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
    // 0x08000898: bgez        $v0, L_080008B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800089C: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_080008B4;
    }
    // 0x0800089C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080008A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080008A4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080008A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080008AC: nop

    // 0x080008B0: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_080008B4:
    // 0x080008B4: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x080008B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080008BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x080008C0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x080008C4: c.le.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d <= ctx->f6.d;
    // 0x080008C8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x080008CC: bc1f        L_080008D8
    if (!c1cs) {
        // 0x080008D0: nop
    
            goto L_080008D8;
    }
    // 0x080008D0: nop

    // 0x080008D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_080008D8:
    // 0x080008D8: beq         $v1, $zero, L_08000988
    if (ctx->r3 == 0) {
        // 0x080008DC: sh          $t6, 0x8A($a3)
        MEM_H(0X8A, ctx->r7) = ctx->r14;
            goto L_08000988;
    }
    // 0x080008DC: sh          $t6, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r14;
    // 0x080008E0: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x080008E4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080008E8: addiu       $t9, $t9, -0x46E8
    ctx->r25 = ADD32(ctx->r25, -0X46E8);
    // 0x080008EC: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x080008F0: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x080008F4: addiu       $a2, $a2, 0x34B8
    ctx->r6 = ADD32(ctx->r6, 0X34B8);
    // 0x080008F8: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x080008FC: sw          $t8, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r24;
    // 0x08000900: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    // 0x08000904: sw          $a3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r7;
    // 0x08000908: jalr        $t9
    // 0x0800090C: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800090C: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000910: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x08000914: lw          $a1, 0xC4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC4);
    // 0x08000918: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(48, 0X3638) << 16);
    // 0x0800091C: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x08000920: lhu         $t2, 0x16($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X16);
    // 0x08000924: ldc1        $f0, 0x3638($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(48, 0X3638));
    // 0x08000928: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x0800092C: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x08000930: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000934: sh          $t2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r10;
    // 0x08000938: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x0800093C: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x08000940: add.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f6.d + ctx->f0.d;
    // 0x08000944: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x08000948: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0800094C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000950: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x08000954: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08000958: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0800095C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000960: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x08000964: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x08000968: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x0800096C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000970: add.d       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f4.d + ctx->f0.d;
    // 0x08000974: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x08000978: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x0800097C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000980: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x08000984: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
L_08000988:
    // 0x08000988: lbu         $t3, 0x7C($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X7C);
    // 0x0800098C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X9C0) << 16);
    // 0x08000990: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x08000994: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x08000998: beq         $t4, $zero, L_080009B0
    if (ctx->r12 == 0) {
        // 0x0800099C: addiu       $a0, $a0, 0x9C0
        ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X9C0));
            goto L_080009B0;
    }
    // 0x0800099C: addiu       $a0, $a0, 0x9C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X9C0));
    // 0x080009A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009A8: jalr        $t9
    // 0x080009AC: sh          $t5, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009AC: sh          $t5, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r13;
    after_1:
L_080009B0:
    // 0x080009B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080009B4: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x080009B8: jr          $ra
    // 0x080009BC: nop

    TRACE_RETURN()
    return;
    // 0x080009BC: nop

;}
RECOMP_FUNC void func_0800124C_7180EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800124C: jr          $ra
    // 0x08001250: nop

    TRACE_RETURN()
    return;
    // 0x08001250: nop

;}
RECOMP_FUNC void func_08002C30_719AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002C34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002C38: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08002C3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002C40: addiu       $s0, $s0, 0x4088
    ctx->r16 = ADD32(ctx->r16, 0X4088);
    // 0x08002C44: jalr        $s0
    // 0x08002C48: addiu       $a0, $zero, 0x1BD
    ctx->r4 = ADD32(0, 0X1BD);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x08002C48: addiu       $a0, $zero, 0x1BD
    ctx->r4 = ADD32(0, 0X1BD);
    after_0:
    // 0x08002C4C: jalr        $s0
    // 0x08002C50: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08002C50: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    after_1:
    // 0x08002C54: jalr        $s0
    // 0x08002C58: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x08002C58: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x08002C5C: jalr        $s0
    // 0x08002C60: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08002C60: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    after_3:
    // 0x08002C64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002C68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002C6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002C70: jr          $ra
    // 0x08002C74: nop

    TRACE_RETURN()
    return;
    // 0x08002C74: nop

;}
RECOMP_FUNC void func_08000280_717120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000288: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800028C: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x08000290: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000294: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x08000298: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x0800029C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080002A0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x080002A4: bne         $t6, $at, L_080002EC
    if (ctx->r14 != ctx->r1) {
        // 0x080002A8: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_080002EC;
    }
    // 0x080002A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080002AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002B0: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x080002B4: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080002B8: jalr        $t9
    // 0x080002BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080002C0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x080002C4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002C8: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x080002CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080002D0: jalr        $t9
    // 0x080002D4: lhu         $a0, 0xA4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002D4: lhu         $a0, 0xA4($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0XA4);
    after_1:
    // 0x080002D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X2FC) << 16);
    // 0x080002E4: jalr        $t9
    // 0x080002E8: addiu       $a0, $a0, 0x2FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X2FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002E8: addiu       $a0, $a0, 0x2FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X2FC));
    after_2:
L_080002EC:
    // 0x080002EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002F4: jr          $ra
    // 0x080002F8: nop

    TRACE_RETURN()
    return;
    // 0x080002F8: nop

;}
RECOMP_FUNC void func_0800053C_7173DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800053C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000544: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000548: jal         0x08002504
    // 0x0800054C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_08002504_7193A4(rdram, ctx);
        goto after_0;
    // 0x0800054C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000550: jal         0x08002BE8
    // 0x08000554: nop

    func_08002BE8_719A88(rdram, ctx);
        goto after_1;
    // 0x08000554: nop

    after_1:
    // 0x08000558: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x0800055C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000560: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000564: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x08000568: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x0800056C: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000570: lbu         $t6, 0xCD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XCD);
    // 0x08000574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000578: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x0800057C: bne         $t6, $at, L_080005D4
    if (ctx->r14 != ctx->r1) {
        // 0x08000580: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_080005D4;
    }
    // 0x08000580: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08000584: sb          $t7, 0xCD($v0)
    MEM_B(0XCD, ctx->r2) = ctx->r15;
    // 0x08000588: jalr        $t9
    // 0x0800058C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800058C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x08000590: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08000594: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000598: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x0800059C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080005A0: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x080005A4: bne         $v0, $t8, L_080005B4
    if (ctx->r2 != ctx->r24) {
        // 0x080005A8: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_080005B4;
    }
    // 0x080005A8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x080005AC: b           L_080005B8
    // 0x080005B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_080005B8;
    // 0x080005B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_080005B4:
    // 0x080005B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_080005B8:
    // 0x080005B8: jalr        $t9
    // 0x080005BC: lhu         $a0, 0xA4($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080005BC: lhu         $a0, 0xA4($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA4);
    after_3:
    // 0x080005C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X5E4) << 16);
    // 0x080005CC: jalr        $t9
    // 0x080005D0: addiu       $a0, $a0, 0x5E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X5E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080005D0: addiu       $a0, $a0, 0x5E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X5E4));
    after_4:
L_080005D4:
    // 0x080005D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080005DC: jr          $ra
    // 0x080005E0: nop

    TRACE_RETURN()
    return;
    // 0x080005E0: nop

;}
RECOMP_FUNC void func_080010CC_717F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080010D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080010D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080010D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080010DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080010E0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080010E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080010E8: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x080010EC: bne         $v0, $zero, L_08001154
    if (ctx->r2 != 0) {
        // 0x080010F0: lui         $a1, 0x4270
        ctx->r5 = S32(0X4270 << 16);
            goto L_08001154;
    }
    // 0x080010F0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x080010F4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080010F8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080010FC: jalr        $t9
    // 0x08001100: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001100: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_0:
    // 0x08001104: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001108: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x0800110C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001110: jalr        $t9
    // 0x08001114: lui         $a1, 0x45C2
    ctx->r5 = S32(0X45C2 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001114: lui         $a1, 0x45C2
    ctx->r5 = S32(0X45C2 << 16);
    after_1:
    // 0x08001118: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800111C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001120: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001124: lui         $a1, 0xC1D8
    ctx->r5 = S32(0XC1D8 << 16);
    // 0x08001128: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    // 0x0800112C: jalr        $t9
    // 0x08001130: lui         $a3, 0xC30F
    ctx->r7 = S32(0XC30F << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001130: lui         $a3, 0xC30F
    ctx->r7 = S32(0XC30F << 16);
    after_2:
    // 0x08001134: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001138: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800113C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001140: lui         $a1, 0xC1C8
    ctx->r5 = S32(0XC1C8 << 16);
    // 0x08001144: lui         $a2, 0x41D8
    ctx->r6 = S32(0X41D8 << 16);
    // 0x08001148: jalr        $t9
    // 0x0800114C: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800114C: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    after_3:
    // 0x08001150: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_08001154:
    // 0x08001154: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08001158: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x0800115C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x08001160: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001164: bgez        $v0, L_08001180
    if (SIGNED(ctx->r2) >= 0) {
        // 0x08001168: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_08001180;
    }
    // 0x08001168: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x0800116C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08001170: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001174: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001178: nop

    // 0x0800117C: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_08001180:
    // 0x08001180: c.eq.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d == ctx->f8.d;
    // 0x08001184: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001188: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x0800118C: bc1fl       L_08001234
    if (!c1cs) {
        // 0x08001190: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_08001234;
    }
    goto skip_0;
    // 0x08001190: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x08001194: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08001198: jalr        $t9
    // 0x0800119C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800119C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    after_4:
    // 0x080011A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011A4: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x080011A8: jalr        $t9
    // 0x080011AC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080011AC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_5:
    // 0x080011B0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080011B4: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080011B8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x080011BC: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080011C0: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    // 0x080011C4: lw          $t8, -0x39DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39DC);
    // 0x080011C8: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x080011CC: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x080011D0: jalr        $t9
    // 0x080011D4: sb          $t7, 0xD0($t8)
    MEM_B(0XD0, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080011D4: sb          $t7, 0xD0($t8)
    MEM_B(0XD0, ctx->r24) = ctx->r15;
    after_6:
    // 0x080011D8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x080011DC: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x080011E0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x080011E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011E8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080011EC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x080011F0: jalr        $t9
    // 0x080011F4: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080011F4: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    after_7:
    // 0x080011F8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080011FC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08001200: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08001204: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001208: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x0800120C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08001210: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x08001214: jalr        $t9
    // 0x08001218: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001218: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_8:
    // 0x0800121C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001220: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001224: jalr        $t9
    // 0x08001228: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001228: nop

    after_9:
    // 0x0800122C: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001230: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
L_08001234:
    // 0x08001234: sh          $t1, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r9;
    // 0x08001238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800123C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08001240: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08001244: jr          $ra
    // 0x08001248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08001248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0800193C_7187DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800193C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001948: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800194C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001950: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x08001954: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001958: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x0800195C: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08001960: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0X16B4) << 16);
    // 0x08001964: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001968: jalr        $t9
    // 0x0800196C: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800196C: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0X16B4));
    after_0:
    // 0x08001970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001978: jr          $ra
    // 0x0800197C: nop

    TRACE_RETURN()
    return;
    // 0x0800197C: nop

;}
RECOMP_FUNC void func_080002FC_71719C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000300: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000308: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x0800030C: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000310: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08000314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000318: jalr        $t9
    // 0x0800031C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800031C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000320: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000324: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000328: jalr        $t9
    // 0x0800032C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800032C: nop

    after_1:
    // 0x08000330: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000334: bne         $v0, $zero, L_080003C0
    if (ctx->r2 != 0) {
        // 0x08000338: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_080003C0;
    }
    // 0x08000338: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x0800033C: lw          $t6, 0x68($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X68);
    // 0x08000340: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08000344: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000348: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x0800034C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08000350: sw          $t7, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r15;
    // 0x08000354: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x08000358: sw          $t0, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r8;
    // 0x0800035C: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000360: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08000364: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000368: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0800036C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000370: sw          $zero, -0x764($at)
    MEM_W(-0X764, ctx->r1) = 0;
    // 0x08000374: lhu         $t2, 0x14E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X14E);
    // 0x08000378: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x0800037C: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(48, 0X3D0) << 16);
    // 0x08000380: sw          $t2, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r10;
    // 0x08000384: lw          $t3, 0x150($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X150);
    // 0x08000388: addiu       $t9, $t9, 0x3D0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(48, 0X3D0));
    // 0x0800038C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x08000390: sw          $t3, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r11;
    // 0x08000394: lhu         $t4, 0x154($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X154);
    // 0x08000398: addiu       $a0, $a0, 0x1F34
    ctx->r4 = ADD32(ctx->r4, 0X1F34);
    // 0x0800039C: sh          $t4, 0x7E($a3)
    MEM_H(0X7E, ctx->r7) = ctx->r12;
    // 0x080003A0: lhu         $t5, 0x156($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X156);
    // 0x080003A4: swc1        $f4, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f4.u32l;
    // 0x080003A8: sb          $t5, 0x7C($a3)
    MEM_B(0X7C, ctx->r7) = ctx->r13;
    // 0x080003AC: sw          $t9, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r25;
    // 0x080003B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003B8: jalr        $t9
    // 0x080003BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080003BC: nop

    after_2:
L_080003C0:
    // 0x080003C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080003C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003C8: jr          $ra
    // 0x080003CC: nop

    TRACE_RETURN()
    return;
    // 0x080003CC: nop

;}
RECOMP_FUNC void func_08000D3C_717BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000D40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000D48: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08000D4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000D50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000D54: addiu       $t9, $t9, 0x4FC
    ctx->r25 = ADD32(ctx->r25, 0X4FC);
    // 0x08000D58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000D5C: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x08000D60: jalr        $t9
    // 0x08000D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000D68: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000D6C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000D70: jalr        $t9
    // 0x08000D74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D74: nop

    after_1:
    // 0x08000D78: bne         $v0, $zero, L_08000F44
    if (ctx->r2 != 0) {
        // 0x08000D7C: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08000F44;
    }
    // 0x08000D7C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000D80: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000D84: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x08000D88: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000D8C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000D90: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08000D94: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x08000D98: and         $t0, $t7, $at
    ctx->r8 = ctx->r15 & ctx->r1;
    // 0x08000D9C: sw          $t0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r8;
    // 0x08000DA0: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000DA4: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08000DA8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000DAC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x08000DB0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000DB4: sw          $zero, -0x764($at)
    MEM_W(-0X764, ctx->r1) = 0;
    // 0x08000DB8: lhu         $t2, 0x14E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X14E);
    // 0x08000DBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000DC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DC4: sw          $t2, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r10;
    // 0x08000DC8: lw          $t3, 0x150($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X150);
    // 0x08000DCC: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000DD0: lui         $a1, 0xC1B8
    ctx->r5 = S32(0XC1B8 << 16);
    // 0x08000DD4: sw          $t3, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r11;
    // 0x08000DD8: lhu         $t4, 0x154($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X154);
    // 0x08000DDC: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    // 0x08000DE0: lui         $a3, 0xC33C
    ctx->r7 = S32(0XC33C << 16);
    // 0x08000DE4: sh          $t4, 0x7E($v1)
    MEM_H(0X7E, ctx->r3) = ctx->r12;
    // 0x08000DE8: lhu         $t5, 0x156($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X156);
    // 0x08000DEC: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x08000DF0: sb          $t5, 0x7C($v1)
    MEM_B(0X7C, ctx->r3) = ctx->r13;
    // 0x08000DF4: jalr        $t9
    // 0x08000DF8: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000DF8: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    after_2:
    // 0x08000DFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E00: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000E04: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000E08: lui         $a1, 0xC170
    ctx->r5 = S32(0XC170 << 16);
    // 0x08000E0C: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    // 0x08000E10: jalr        $t9
    // 0x08000E14: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E14: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_3:
    // 0x08000E18: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E1C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000E20: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000E24: jalr        $t9
    // 0x08000E28: addiu       $a1, $zero, 0xC00
    ctx->r5 = ADD32(0, 0XC00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000E28: addiu       $a1, $zero, 0xC00
    ctx->r5 = ADD32(0, 0XC00);
    after_4:
    // 0x08000E2C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E30: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000E34: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000E38: jalr        $t9
    // 0x08000E3C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000E3C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    after_5:
    // 0x08000E40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E44: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08000E48: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000E4C: jalr        $t9
    // 0x08000E50: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000E50: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_6:
    // 0x08000E54: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E58: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000E5C: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x08000E60: lui         $a1, 0xC1B8
    ctx->r5 = S32(0XC1B8 << 16);
    // 0x08000E64: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    // 0x08000E68: jalr        $t9
    // 0x08000E6C: lui         $a3, 0xC33C
    ctx->r7 = S32(0XC33C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000E6C: lui         $a3, 0xC33C
    ctx->r7 = S32(0XC33C << 16);
    after_7:
    // 0x08000E70: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E74: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08000E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E7C: jalr        $t9
    // 0x08000E80: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000E80: addiu       $a1, $zero, 0x76
    ctx->r5 = ADD32(0, 0X76);
    after_8:
    // 0x08000E84: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08000E88: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08000E8C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08000E90: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08000E94: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x08000E98: sb          $t6, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r14;
    // 0x08000E9C: lui         $at, 0xC1D8
    ctx->r1 = S32(0XC1D8 << 16);
    // 0x08000EA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000EA4: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x08000EA8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000EAC: addiu       $v1, $v1, -0x39EC
    ctx->r3 = ADD32(ctx->r3, -0X39EC);
    // 0x08000EB0: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
    // 0x08000EB4: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x08000EB8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x08000EBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x08000EC0: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x08000EC4: addiu       $a1, $a1, -0x39E4
    ctx->r5 = ADD32(ctx->r5, -0X39E4);
    // 0x08000EC8: swc1        $f0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f0.u32l;
    // 0x08000ECC: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x08000ED0: swc1        $f0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f0.u32l;
    // 0x08000ED4: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x08000ED8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08000EDC: lwc1        $f0, 0xC($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0XC);
    // 0x08000EE0: swc1        $f0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f0.u32l;
    // 0x08000EE4: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x08000EE8: swc1        $f0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f0.u32l;
    // 0x08000EEC: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x08000EF0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x08000EF4: lwc1        $f0, 0x10($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X10);
    // 0x08000EF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EFC: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000F00: swc1        $f0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f0.u32l;
    // 0x08000F04: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x08000F08: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
    // 0x08000F0C: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x08000F10: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x08000F14: lhu         $v0, 0x16($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X16);
    // 0x08000F18: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x08000F1C: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x08000F20: sh          $v0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r2;
    // 0x08000F24: jalr        $t9
    // 0x08000F28: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000F28: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    after_9:
    // 0x08000F2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(48, 0XF58) << 16);
    // 0x08000F38: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x08000F3C: jalr        $t9
    // 0x08000F40: addiu       $a0, $a0, 0xF58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XF58));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000F40: addiu       $a0, $a0, 0xF58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(48, 0XF58));
    after_10:
L_08000F44:
    // 0x08000F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000F48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000F4C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000F50: jr          $ra
    // 0x08000F54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08000F54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08002404_7192A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002404: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002408: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800240C: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x08002410: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002414: addiu       $s0, $s0, 0x4088
    ctx->r16 = ADD32(ctx->r16, 0X4088);
    // 0x08002418: jalr        $s0
    // 0x0800241C: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x0800241C: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    after_0:
    // 0x08002420: jalr        $s0
    // 0x08002424: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x08002424: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    after_1:
    // 0x08002428: jalr        $s0
    // 0x0800242C: addiu       $a0, $zero, 0xA9
    ctx->r4 = ADD32(0, 0XA9);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x0800242C: addiu       $a0, $zero, 0xA9
    ctx->r4 = ADD32(0, 0XA9);
    after_2:
    // 0x08002430: jalr        $s0
    // 0x08002434: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_3;
    // 0x08002434: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    after_3:
    // 0x08002438: jalr        $s0
    // 0x0800243C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_4;
    // 0x0800243C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    after_4:
    // 0x08002440: jalr        $s0
    // 0x08002444: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_5;
    // 0x08002444: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    after_5:
    // 0x08002448: jalr        $s0
    // 0x0800244C: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x0800244C: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    after_6:
    // 0x08002450: jalr        $s0
    // 0x08002454: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x08002454: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    after_7:
    // 0x08002458: jalr        $s0
    // 0x0800245C: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_8;
    // 0x0800245C: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    after_8:
    // 0x08002460: jalr        $s0
    // 0x08002464: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_9;
    // 0x08002464: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    after_9:
    // 0x08002468: jalr        $s0
    // 0x0800246C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_10;
    // 0x0800246C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    after_10:
    // 0x08002470: jalr        $s0
    // 0x08002474: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_11;
    // 0x08002474: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    after_11:
    // 0x08002478: jalr        $s0
    // 0x0800247C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_12;
    // 0x0800247C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    after_12:
    // 0x08002480: jalr        $s0
    // 0x08002484: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_13;
    // 0x08002484: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_13:
    // 0x08002488: jalr        $s0
    // 0x0800248C: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_14;
    // 0x0800248C: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    after_14:
    // 0x08002490: jalr        $s0
    // 0x08002494: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_15;
    // 0x08002494: addiu       $a0, $zero, 0xB6
    ctx->r4 = ADD32(0, 0XB6);
    after_15:
    // 0x08002498: jalr        $s0
    // 0x0800249C: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_16;
    // 0x0800249C: addiu       $a0, $zero, 0xB7
    ctx->r4 = ADD32(0, 0XB7);
    after_16:
    // 0x080024A0: jalr        $s0
    // 0x080024A4: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_17;
    // 0x080024A4: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    after_17:
    // 0x080024A8: jalr        $s0
    // 0x080024AC: addiu       $a0, $zero, 0xB9
    ctx->r4 = ADD32(0, 0XB9);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_18;
    // 0x080024AC: addiu       $a0, $zero, 0xB9
    ctx->r4 = ADD32(0, 0XB9);
    after_18:
    // 0x080024B0: jalr        $s0
    // 0x080024B4: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_19;
    // 0x080024B4: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    after_19:
    // 0x080024B8: jalr        $s0
    // 0x080024BC: addiu       $a0, $zero, 0xBB
    ctx->r4 = ADD32(0, 0XBB);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_20;
    // 0x080024BC: addiu       $a0, $zero, 0xBB
    ctx->r4 = ADD32(0, 0XBB);
    after_20:
    // 0x080024C0: jalr        $s0
    // 0x080024C4: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_21;
    // 0x080024C4: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    after_21:
    // 0x080024C8: jalr        $s0
    // 0x080024CC: addiu       $a0, $zero, 0xBD
    ctx->r4 = ADD32(0, 0XBD);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_22;
    // 0x080024CC: addiu       $a0, $zero, 0xBD
    ctx->r4 = ADD32(0, 0XBD);
    after_22:
    // 0x080024D0: jalr        $s0
    // 0x080024D4: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_23;
    // 0x080024D4: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    after_23:
    // 0x080024D8: jalr        $s0
    // 0x080024DC: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_24;
    // 0x080024DC: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    after_24:
    // 0x080024E0: jalr        $s0
    // 0x080024E4: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_25;
    // 0x080024E4: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    after_25:
    // 0x080024E8: jalr        $s0
    // 0x080024EC: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_26;
    // 0x080024EC: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    after_26:
    // 0x080024F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080024F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080024F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080024FC: jr          $ra
    // 0x08002500: nop

    TRACE_RETURN()
    return;
    // 0x08002500: nop

;}
RECOMP_FUNC void func_08002D60_719C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002D60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002D64: jr          $ra
    // 0x08002D68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002D68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080004B4_71A9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004B8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080004BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080004C4: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080004C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080004CC: jalr        $t9
    // 0x080004D0: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004D0: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_0:
    // 0x080004D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(49, 0X4F8) << 16);
    // 0x080004E0: jalr        $t9
    // 0x080004E4: addiu       $a0, $a0, 0x4F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X4F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004E4: addiu       $a0, $a0, 0x4F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X4F8));
    after_1:
    // 0x080004E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004F0: jr          $ra
    // 0x080004F4: nop

    TRACE_RETURN()
    return;
    // 0x080004F4: nop

;}
RECOMP_FUNC void func_0800042C_71A93C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800042C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08000430: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08000434: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800043C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000440: lhu         $t7, 0x98($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X98);
    // 0x08000444: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000448: bne         $t7, $zero, L_08000474
    if (ctx->r15 != 0) {
        // 0x0800044C: nop
    
            goto L_08000474;
    }
    // 0x0800044C: nop

    // 0x08000450: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000454: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000458: lwc1        $f4, 0x194($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X194);
    // 0x0800045C: lw          $t8, 0x84($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X84);
    // 0x08000460: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x08000464: lw          $t9, 0x84($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X84);
    // 0x08000468: lwc1        $f6, 0x198($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X198);
    // 0x0800046C: b           L_080004A4
    // 0x08000470: swc1        $f6, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f6.u32l;
        goto L_080004A4;
    // 0x08000470: swc1        $f6, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f6.u32l;
L_08000474:
    // 0x08000474: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000478: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800047C: jalr        $t9
    // 0x08000480: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000480: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x08000484: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000488: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800048C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08000490: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000494: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(49, 0X4B4) << 16);
    // 0x08000498: addiu       $a0, $a0, 0x4B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X4B4));
    // 0x0800049C: jalr        $t9
    // 0x080004A0: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004A0: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    after_1:
L_080004A4:
    // 0x080004A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080004AC: jr          $ra
    // 0x080004B0: nop

    TRACE_RETURN()
    return;
    // 0x080004B0: nop

;}
RECOMP_FUNC void func_08000240_71A750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000240: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000248: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800024C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08000250: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08000254: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08000258: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800025C: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x08000260: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08000264: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000268: jalr        $v0
    // 0x0800026C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x0800026C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x08000270: bne         $v0, $zero, L_08000294
    if (ctx->r2 != 0) {
        // 0x08000274: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_08000294;
    }
    // 0x08000274: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08000278: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800027C: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x08000280: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08000284: jalr        $t9
    // 0x08000288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x0800028C: b           L_0800029C
    // 0x08000290: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
        goto L_0800029C;
    // 0x08000290: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_08000294:
    // 0x08000294: lw          $t7, -0x322C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X322C);
    // 0x08000298: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
L_0800029C:
    // 0x0800029C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x080002A0: lw          $t0, -0x39D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D8);
    // 0x080002A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080002A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080002AC: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x080002B0: sb          $t8, 0x64($t0)
    MEM_B(0X64, ctx->r8) = ctx->r24;
    // 0x080002B4: jalr        $t9
    // 0x080002B8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080002B8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_2:
    // 0x080002BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080002C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080002C4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002C8: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080002CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080002D0: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    // 0x080002D4: jalr        $t9
    // 0x080002D8: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080002D8: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    after_3:
    // 0x080002DC: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080002E0: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x080002E4: jalr        $t9
    // 0x080002E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080002E8: nop

    after_4:
    // 0x080002EC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x080002F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002F4: addiu       $t9, $t9, 0x3FB8
    ctx->r25 = ADD32(ctx->r25, 0X3FB8);
    // 0x080002F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x080002FC: jalr        $t9
    // 0x08000300: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000300: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    after_5:
    // 0x08000304: bne         $v0, $zero, L_0800039C
    if (ctx->r2 != 0) {
        // 0x08000308: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_0800039C;
    }
    // 0x08000308: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x0800030C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000310: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000314: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000318: jalr        $t9
    // 0x0800031C: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800031C: addiu       $a1, $zero, 0xB00
    ctx->r5 = ADD32(0, 0XB00);
    after_6:
    // 0x08000320: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000324: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000328: lui         $a1, 0x4392
    ctx->r5 = S32(0X4392 << 16);
    // 0x0800032C: lui         $a3, 0x44C4
    ctx->r7 = S32(0X44C4 << 16);
    // 0x08000330: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x08000334: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000338: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x0800033C: jalr        $t9
    // 0x08000340: lui         $a2, 0x441A
    ctx->r6 = S32(0X441A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000340: lui         $a2, 0x441A
    ctx->r6 = S32(0X441A << 16);
    after_7:
    // 0x08000344: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000348: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800034C: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x08000350: lui         $a1, 0x41A8
    ctx->r5 = S32(0X41A8 << 16);
    // 0x08000354: lui         $a2, 0x4329
    ctx->r6 = S32(0X4329 << 16);
    // 0x08000358: jalr        $t9
    // 0x0800035C: lui         $a3, 0x4497
    ctx->r7 = S32(0X4497 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800035C: lui         $a3, 0x4497
    ctx->r7 = S32(0X4497 << 16);
    after_8:
    // 0x08000360: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000364: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x08000368: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x0800036C: addiu       $t4, $zero, 0x138
    ctx->r12 = ADD32(0, 0X138);
    // 0x08000370: addiu       $t5, $zero, 0xCA
    ctx->r13 = ADD32(0, 0XCA);
    // 0x08000374: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000378: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(49, 0X4F8) << 16);
    // 0x0800037C: sh          $t2, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r10;
    // 0x08000380: sh          $t3, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = ctx->r11;
    // 0x08000384: sh          $t4, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r12;
    // 0x08000388: sh          $t5, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r13;
    // 0x0800038C: jalr        $t9
    // 0x08000390: addiu       $a0, $a0, 0x4F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X4F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000390: addiu       $a0, $a0, 0x4F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0X4F8));
    after_9:
    // 0x08000394: b           L_0800041C
    // 0x08000398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800041C;
    // 0x08000398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800039C:
    // 0x0800039C: jalr        $t9
    // 0x080003A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080003A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x080003A4: beq         $v0, $zero, L_080003E8
    if (ctx->r2 == 0) {
        // 0x080003A8: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_080003E8;
    }
    // 0x080003A8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080003AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003B0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x080003B4: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x080003B8: addiu       $t8, $zero, 0x138
    ctx->r24 = ADD32(0, 0X138);
    // 0x080003BC: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x080003C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(49, 0XB8C) << 16);
    // 0x080003C8: sh          $t6, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r14;
    // 0x080003CC: sh          $t7, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = ctx->r15;
    // 0x080003D0: sh          $t8, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r24;
    // 0x080003D4: sh          $t0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r8;
    // 0x080003D8: jalr        $t9
    // 0x080003DC: addiu       $a0, $a0, 0xB8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0XB8C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080003DC: addiu       $a0, $a0, 0xB8C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(49, 0XB8C));
    after_11:
    // 0x080003E0: b           L_0800041C
    // 0x080003E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800041C;
    // 0x080003E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080003E8:
    // 0x080003E8: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080003EC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080003F0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080003F4: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x080003F8: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080003FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x08000400: jalr        $t9
    // 0x08000404: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000404: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_12:
    // 0x08000408: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800040C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000410: jalr        $t9
    // 0x08000414: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000414: nop

    after_13:
    // 0x08000418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800041C:
    // 0x0800041C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08000420: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08000424: jr          $ra
    // 0x08000428: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08000428: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
