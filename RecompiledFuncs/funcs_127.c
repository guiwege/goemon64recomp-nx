#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080038A8_6F6D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080038A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080038AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080038B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080038B4: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080038B8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080038BC: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x080038C0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x080038C4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080038C8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080038CC: bne         $v0, $zero, L_08003918
    if (ctx->r2 != 0) {
        // 0x080038D0: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08003918;
    }
    // 0x080038D0: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x080038D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C50) << 16);
    // 0x080038D8: lwc1        $f0, 0x7C50($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C50));
    // 0x080038DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080038E0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080038E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080038E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080038EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080038F0: jalr        $t9
    // 0x080038F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080038F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x080038F8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C54) << 16);
    // 0x080038FC: lwc1        $f0, 0x7C54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C54));
    // 0x08003900: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003904: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08003908: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0800390C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08003910: b           L_08003964
    // 0x08003914: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08003964;
    // 0x08003914: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08003918:
    // 0x08003918: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800391C: bne         $v0, $at, L_08003964
    if (ctx->r2 != ctx->r1) {
        // 0x08003920: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08003964;
    }
    // 0x08003920: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003924: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C58) << 16);
    // 0x08003928: lwc1        $f0, 0x7C58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C58));
    // 0x0800392C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003930: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003934: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08003938: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800393C: jalr        $t9
    // 0x08003940: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003940: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x08003944: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C5C) << 16);
    // 0x08003948: lwc1        $f0, 0x7C5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C5C));
    // 0x0800394C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003950: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08003954: sb          $t8, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r24;
    // 0x08003958: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0800395C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08003960: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08003964:
    // 0x08003964: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003968: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800396C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X398C) << 16);
    // 0x08003970: jalr        $t9
    // 0x08003974: addiu       $a0, $a0, 0x398C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X398C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003974: addiu       $a0, $a0, 0x398C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X398C));
    after_2:
    // 0x08003978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800397C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08003980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003984: jr          $ra
    // 0x08003988: nop

    TRACE_RETURN()
    return;
    // 0x08003988: nop

;}
RECOMP_FUNC void func_08003F18_6F73F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003F20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003F24: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003F28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003F2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003F30: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003F34: beq         $t7, $zero, L_08003F44
    if (ctx->r15 == 0) {
        // 0x08003F38: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X3F54) << 16);
            goto L_08003F44;
    }
    // 0x08003F38: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3F54) << 16);
    // 0x08003F3C: jalr        $t9
    // 0x08003F40: addiu       $a0, $a0, 0x3F54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3F54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003F40: addiu       $a0, $a0, 0x3F54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3F54));
    after_0:
L_08003F44:
    // 0x08003F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003F4C: jr          $ra
    // 0x08003F50: nop

    TRACE_RETURN()
    return;
    // 0x08003F50: nop

;}
RECOMP_FUNC void func_08001B4C_6F502C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B50: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001B5C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001B60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001B64: jalr        $t9
    // 0x08001B68: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B68: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
    after_0:
    // 0x08001B6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001B70: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001B74: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1B90) << 16);
    // 0x08001B78: jalr        $t9
    // 0x08001B7C: addiu       $a0, $a0, 0x1B90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B90));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001B7C: addiu       $a0, $a0, 0x1B90
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B90));
    after_1:
    // 0x08001B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001B88: jr          $ra
    // 0x08001B8C: nop

    TRACE_RETURN()
    return;
    // 0x08001B8C: nop

;}
RECOMP_FUNC void func_08004C64_6F8144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004C68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004C70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004C74: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x08004C78: jalr        $t9
    // 0x08004C7C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004C7C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x08004C80: bne         $v0, $zero, L_08004CB0
    if (ctx->r2 != 0) {
        // 0x08004C84: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08004CB0;
    }
    // 0x08004C84: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004C88: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08004C8C: jalr        $t9
    // 0x08004C90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004C90: nop

    after_1:
    // 0x08004C94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004C98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08004C9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004CA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4CC0) << 16);
    // 0x08004CA4: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x08004CA8: jalr        $t9
    // 0x08004CAC: addiu       $a0, $a0, 0x4CC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4CC0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004CAC: addiu       $a0, $a0, 0x4CC0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4CC0));
    after_2:
L_08004CB0:
    // 0x08004CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004CB8: jr          $ra
    // 0x08004CBC: nop

    TRACE_RETURN()
    return;
    // 0x08004CBC: nop

;}
RECOMP_FUNC void func_080060A0_6F9580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080060A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080060A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CFC) << 16);
    // 0x080060A8: lwc1        $f0, 0x7CFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CFC));
    // 0x080060AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080060B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080060B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080060B8: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x080060BC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080060C0: addiu       $t6, $zero, 0x23C
    ctx->r14 = ADD32(0, 0X23C);
    // 0x080060C4: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x080060C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080060CC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080060D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080060D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080060D8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080060DC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080060E0: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x080060E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080060E8: jalr        $t9
    // 0x080060EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080060EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080060F0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7D00) << 16);
    // 0x080060F4: lwc1        $f0, 0x7D00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7D00));
    // 0x080060F8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080060FC: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x08006100: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08006104: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08006108: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x0800610C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08006110: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006114: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08006118: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x0800611C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08006120: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08006124: jalr        $t9
    // 0x08006128: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006128: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x0800612C: beq         $v0, $zero, L_08006150
    if (ctx->r2 == 0) {
        // 0x08006130: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X6174) << 16);
            goto L_08006150;
    }
    // 0x08006130: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6174) << 16);
    // 0x08006134: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006138: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800613C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X62A0) << 16);
    // 0x08006140: jalr        $t9
    // 0x08006144: addiu       $a0, $a0, 0x62A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X62A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006144: addiu       $a0, $a0, 0x62A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X62A0));
    after_2:
    // 0x08006148: b           L_08006164
    // 0x0800614C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08006164;
    // 0x0800614C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08006150:
    // 0x08006150: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006154: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006158: jalr        $t9
    // 0x0800615C: addiu       $a0, $a0, 0x6174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6174));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800615C: addiu       $a0, $a0, 0x6174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6174));
    after_3:
    // 0x08006160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08006164:
    // 0x08006164: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08006168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800616C: jr          $ra
    // 0x08006170: nop

    TRACE_RETURN()
    return;
    // 0x08006170: nop

;}
RECOMP_FUNC void func_08004BBC_6F809C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004BC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004BC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004BCC: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x08004BD0: jalr        $t9
    // 0x08004BD4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004BD4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08004BD8: bne         $v0, $zero, L_08004BF0
    if (ctx->r2 != 0) {
        // 0x08004BDC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X4C00) << 16);
            goto L_08004BF0;
    }
    // 0x08004BDC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4C00) << 16);
    // 0x08004BE0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004BE4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004BE8: jalr        $t9
    // 0x08004BEC: addiu       $a0, $a0, 0x4C00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4C00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004BEC: addiu       $a0, $a0, 0x4C00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4C00));
    after_1:
L_08004BF0:
    // 0x08004BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004BF8: jr          $ra
    // 0x08004BFC: nop

    TRACE_RETURN()
    return;
    // 0x08004BFC: nop

;}
RECOMP_FUNC void func_080063B4_6F9894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080063B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080063B8: jr          $ra
    // 0x080063BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080063BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003BEC_6F70CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003BEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003BF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003BF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003BFC: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08003C00: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x08003C04: jalr        $t9
    // 0x08003C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003C0C: beq         $v0, $zero, L_08003C44
    if (ctx->r2 == 0) {
        // 0x08003C10: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08003C44;
    }
    // 0x08003C10: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003C14: lw          $t6, 0x60($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X60);
    // 0x08003C18: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003C1C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003C20: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08003C24: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    // 0x08003C28: jalr        $t9
    // 0x08003C2C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003C2C: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_1:
    // 0x08003C30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C34: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003C38: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3C54) << 16);
    // 0x08003C3C: jalr        $t9
    // 0x08003C40: addiu       $a0, $a0, 0x3C54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3C54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003C40: addiu       $a0, $a0, 0x3C54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3C54));
    after_2:
L_08003C44:
    // 0x08003C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003C4C: jr          $ra
    // 0x08003C50: nop

    TRACE_RETURN()
    return;
    // 0x08003C50: nop

;}
RECOMP_FUNC void func_080007F4_6F3CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x080007F8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x080007FC: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x08000800: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x08000804: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x08000808: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x0800080C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x08000810: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x08000814: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x08000818: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x0800081C: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x08000820: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x08000824: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x08000828: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x0800082C: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08000830: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000834: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x08000838: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x0800083C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08000840: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08000844: lwc1        $f0, 0xD4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD4);
    // 0x08000848: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x0800084C: addiu       $t0, $zero, 0x96
    ctx->r8 = ADD32(0, 0X96);
    // 0x08000850: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08000854: addiu       $s4, $s4, -0x7FB4
    ctx->r20 = ADD32(ctx->r20, -0X7FB4);
    // 0x08000858: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x0800085C: addiu       $s7, $zero, 0x6
    ctx->r23 = ADD32(0, 0X6);
    // 0x08000860: bc1f        L_08000898
    if (!c1cs) {
        // 0x08000864: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_08000898;
    }
    // 0x08000864: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08000868: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B88) << 16);
    // 0x0800086C: ldc1        $f8, 0x7B88($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B88));
    // 0x08000870: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x08000874: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000878: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x0800087C: addiu       $t9, $t9, -0x61C0
    ctx->r25 = ADD32(ctx->r25, -0X61C0);
    // 0x08000880: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000884: swc1        $f16, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f16.u32l;
    // 0x08000888: jalr        $t9
    // 0x0800088C: lw          $a1, 0xD4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800088C: lw          $a1, 0xD4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XD4);
    after_0:
    // 0x08000890: b           L_080009A0
    // 0x08000894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_080009A0;
    // 0x08000894: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_08000898:
    // 0x08000898: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x0800089C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080008A0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x080008A4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x080008A8: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x080008AC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x080008B0: lui         $s5, 0x8022
    ctx->r21 = S32(0X8022 << 16);
    // 0x080008B4: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x080008B8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x080008BC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x080008C0: sb          $t0, 0xD1($s3)
    MEM_B(0XD1, ctx->r19) = ctx->r8;
    // 0x080008C4: addiu       $s5, $s5, -0x61F8
    ctx->r21 = ADD32(ctx->r21, -0X61F8);
    // 0x080008C8: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x080008CC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_080008D0:
    // 0x080008D0: jalr        $s4
    // 0x080008D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_1;
    // 0x080008D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x080008D8: beq         $v0, $zero, L_08000974
    if (ctx->r2 == 0) {
        // 0x080008DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000974;
    }
    // 0x080008DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080008E0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x080008E4: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x080008E8: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x080008EC: jalr        $s5
    // 0x080008F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_2;
    // 0x080008F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x080008F4: jalr        $s1
    // 0x080008F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x080008F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x080008FC: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08000900: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000904: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000908: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800090C: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x08000910: sub.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d - ctx->f22.d;
    // 0x08000914: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000918: jalr        $s1
    // 0x0800091C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x0800091C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    after_4:
    // 0x08000920: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08000924: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000928: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x0800092C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000930: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x08000934: sub.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d - ctx->f22.d;
    // 0x08000938: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800093C: jalr        $s1
    // 0x08000940: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_5;
    // 0x08000940: swc1        $f16, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f16.u32l;
    after_5:
    // 0x08000944: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x08000948: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x0800094C: sw          $s6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r22;
    // 0x08000950: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000954: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000958: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x0800095C: sub.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d - ctx->f22.d;
    // 0x08000960: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000964: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    // 0x08000968: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800096C: sub.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f26.fl;
    // 0x08000970: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
L_08000974:
    // 0x08000974: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x08000978: bnel        $s2, $s7, L_080008D0
    if (ctx->r18 != ctx->r23) {
        // 0x0800097C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_080008D0;
    }
    goto skip_0;
    // 0x0800097C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x08000980: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000984: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000988: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800098C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X9D8) << 16);
    // 0x08000990: sb          $t1, 0xD8($s3)
    MEM_B(0XD8, ctx->r19) = ctx->r9;
    // 0x08000994: jalr        $t9
    // 0x08000998: addiu       $a0, $a0, 0x9D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X9D8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000998: addiu       $a0, $a0, 0x9D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X9D8));
    after_6:
    // 0x0800099C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_080009A0:
    // 0x080009A0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x080009A4: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x080009A8: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x080009AC: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x080009B0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x080009B4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x080009B8: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x080009BC: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x080009C0: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x080009C4: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x080009C8: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x080009CC: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x080009D0: jr          $ra
    // 0x080009D4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x080009D4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000414_6F38F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000414: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000418: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x0800041C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000420: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000424: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000428: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800042C: beql        $t6, $zero, L_08000454
    if (ctx->r14 == 0) {
        // 0x08000430: lbu         $v0, 0xD1($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XD1);
            goto L_08000454;
    }
    goto skip_0;
    // 0x08000430: lbu         $v0, 0xD1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD1);
    skip_0:
    // 0x08000434: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x08000438: beql        $v0, $zero, L_08000454
    if (ctx->r2 == 0) {
        // 0x0800043C: lbu         $v0, 0xD1($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XD1);
            goto L_08000454;
    }
    goto skip_1;
    // 0x0800043C: lbu         $v0, 0xD1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD1);
    skip_1:
    // 0x08000440: lbu         $t7, 0xD8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000444: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000448: bnel        $t7, $at, L_0800057C
    if (ctx->r15 != ctx->r1) {
        // 0x0800044C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_0800057C;
    }
    goto skip_2;
    // 0x0800044C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x08000450: lbu         $v0, 0xD1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD1);
L_08000454:
    // 0x08000454: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08000458: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x0800045C: beq         $v0, $zero, L_08000484
    if (ctx->r2 == 0) {
        // 0x08000460: sw          $t8, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->r24;
            goto L_08000484;
    }
    // 0x08000460: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000464: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000468: beq         $v0, $at, L_080004A0
    if (ctx->r2 == ctx->r1) {
        // 0x0800046C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080004A0;
    }
    // 0x0800046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000470: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000474: beq         $v0, $at, L_080004B8
    if (ctx->r2 == ctx->r1) {
        // 0x08000478: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080004B8;
    }
    // 0x08000478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800047C: b           L_080004F8
    // 0x08000480: nop

        goto L_080004F8;
    // 0x08000480: nop

L_08000484:
    // 0x08000484: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000488: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800048C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000490: jalr        $t9
    // 0x08000494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000498: b           L_080004F8
    // 0x0800049C: nop

        goto L_080004F8;
    // 0x0800049C: nop

L_080004A0:
    // 0x080004A0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004A4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080004A8: jalr        $t9
    // 0x080004AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x080004B0: b           L_080004F8
    // 0x080004B4: nop

        goto L_080004F8;
    // 0x080004B4: nop

L_080004B8:
    // 0x080004B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004BC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080004C0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080004C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080004C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080004CC: jalr        $t9
    // 0x080004D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x080004D4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x080004D8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080004DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004E0: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x080004E4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x080004F0: jalr        $t9
    // 0x080004F4: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080004F4: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    after_3:
L_080004F8:
    // 0x080004F8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B80) << 16);
    // 0x080004FC: lwc1        $f0, 0x7B80($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B80));
    // 0x08000500: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08000504: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000508: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800050C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000510: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08000514: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x08000518: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x0800051C: swc1        $f0, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f0.u32l;
    // 0x08000520: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
    // 0x08000524: jalr        $t9
    // 0x08000528: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000528: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    after_4:
    // 0x0800052C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000530: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000538: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x0800053C: jalr        $t9
    // 0x08000540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x08000544: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000548: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x0800054C: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000550: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x08000554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000558: jalr        $t9
    // 0x0800055C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800055C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x08000560: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000564: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000568: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X58C) << 16);
    // 0x0800056C: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x08000570: jalr        $t9
    // 0x08000574: addiu       $a0, $a0, 0x58C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X58C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000574: addiu       $a0, $a0, 0x58C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X58C));
    after_7:
    // 0x08000578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800057C:
    // 0x0800057C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000580: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000584: jr          $ra
    // 0x08000588: nop

    TRACE_RETURN()
    return;
    // 0x08000588: nop

;}
RECOMP_FUNC void func_080052E4_6F87C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080052E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080052E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080052EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080052F0: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080052F4: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    // 0x080052F8: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x080052FC: beq         $t6, $zero, L_0800532C
    if (ctx->r14 == 0) {
        // 0x08005300: addiu       $a2, $zero, -0x14A
        ctx->r6 = ADD32(0, -0X14A);
            goto L_0800532C;
    }
    // 0x08005300: addiu       $a2, $zero, -0x14A
    ctx->r6 = ADD32(0, -0X14A);
    // 0x08005304: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x08005308: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x0800530C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08005310: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08005314: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x08005318: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x0800531C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x08005320: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08005324: jalr        $t9
    // 0x08005328: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005328: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_0800532C:
    // 0x0800532C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08005330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08005334: jr          $ra
    // 0x08005338: nop

    TRACE_RETURN()
    return;
    // 0x08005338: nop

;}
RECOMP_FUNC void func_08003D30_6F7210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003D38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003D3C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003D40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003D44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003D48: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003D4C: beq         $t7, $zero, L_08003D5C
    if (ctx->r15 == 0) {
        // 0x08003D50: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X3D6C) << 16);
            goto L_08003D5C;
    }
    // 0x08003D50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3D6C) << 16);
    // 0x08003D54: jalr        $t9
    // 0x08003D58: addiu       $a0, $a0, 0x3D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3D6C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003D58: addiu       $a0, $a0, 0x3D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3D6C));
    after_0:
L_08003D5C:
    // 0x08003D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003D64: jr          $ra
    // 0x08003D68: nop

    TRACE_RETURN()
    return;
    // 0x08003D68: nop

;}
RECOMP_FUNC void func_08001540_6F4A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001548: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x0800154C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x08001550: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08001554: lhu         $t6, 0x16($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X16);
    // 0x08001558: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x0800155C: lw          $t7, 0xEC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XEC);
    // 0x08001560: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08001564: sw          $t8, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r24;
    // 0x08001568: lhu         $t9, 0xDA($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XDA);
    // 0x0800156C: ori         $t1, $t8, 0x4
    ctx->r9 = ctx->r24 | 0X4;
    // 0x08001570: beql        $t9, $zero, L_08001584
    if (ctx->r25 == 0) {
        // 0x08001574: lw          $t2, 0xEC($v0)
        ctx->r10 = MEM_W(ctx->r2, 0XEC);
            goto L_08001584;
    }
    goto skip_0;
    // 0x08001574: lw          $t2, 0xEC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XEC);
    skip_0:
    // 0x08001578: sw          $t1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r9;
    // 0x0800157C: sh          $zero, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = 0;
    // 0x08001580: lw          $t2, 0xEC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XEC);
L_08001584:
    // 0x08001584: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001588: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800158C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x08001590: beq         $t3, $zero, L_080015A0
    if (ctx->r11 == 0) {
        // 0x08001594: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X1B4C) << 16);
            goto L_080015A0;
    }
    // 0x08001594: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1B4C) << 16);
    // 0x08001598: jalr        $t9
    // 0x0800159C: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800159C: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B4C));
    after_0:
L_080015A0:
    // 0x080015A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080015A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080015A8: jr          $ra
    // 0x080015AC: nop

    TRACE_RETURN()
    return;
    // 0x080015AC: nop

;}
RECOMP_FUNC void func_08004EF8_6F83D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08004EFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004F00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004F04: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004F08: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x08004F0C: jalr        $t9
    // 0x08004F10: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004F10: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x08004F14: bne         $v0, $zero, L_08004F64
    if (ctx->r2 != 0) {
        // 0x08004F18: addiu       $a0, $zero, 0x139
        ctx->r4 = ADD32(0, 0X139);
            goto L_08004F64;
    }
    // 0x08004F18: addiu       $a0, $zero, 0x139
    ctx->r4 = ADD32(0, 0X139);
    // 0x08004F1C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004F20: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x08004F24: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x08004F28: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x08004F2C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x08004F30: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x08004F34: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08004F38: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x08004F3C: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    // 0x08004F40: jalr        $t9
    // 0x08004F44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004F44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08004F48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004F4C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08004F50: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004F54: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4F74) << 16);
    // 0x08004F58: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x08004F5C: jalr        $t9
    // 0x08004F60: addiu       $a0, $a0, 0x4F74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4F74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004F60: addiu       $a0, $a0, 0x4F74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4F74));
    after_2:
L_08004F64:
    // 0x08004F64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004F68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004F6C: jr          $ra
    // 0x08004F70: nop

    TRACE_RETURN()
    return;
    // 0x08004F70: nop

;}
RECOMP_FUNC void func_0800333C_6F681C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800333C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003344: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003348: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800334C: beql        $t7, $zero, L_0800337C
    if (ctx->r15 == 0) {
        // 0x08003350: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800337C;
    }
    goto skip_0;
    // 0x08003350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003354: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08003358: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x0800335C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08003360: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08003364: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003368: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800336C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3388) << 16);
    // 0x08003370: jalr        $t9
    // 0x08003374: addiu       $a0, $a0, 0x3388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3388));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003374: addiu       $a0, $a0, 0x3388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3388));
    after_0:
    // 0x08003378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800337C:
    // 0x0800337C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003380: jr          $ra
    // 0x08003384: nop

    TRACE_RETURN()
    return;
    // 0x08003384: nop

;}
RECOMP_FUNC void func_08004750_6F7C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08004758: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800475C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08004760: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004764: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08004768: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x0800476C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08004770: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08004774: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08004778: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800477C: bne         $v0, $zero, L_080047C0
    if (ctx->r2 != 0) {
        // 0x08004780: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_080047C0;
    }
    // 0x08004780: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08004784: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C94) << 16);
    // 0x08004788: lwc1        $f0, 0x7C94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C94));
    // 0x0800478C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004790: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004794: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08004798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800479C: jalr        $t9
    // 0x080047A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080047A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080047A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C98) << 16);
    // 0x080047A8: lwc1        $f0, 0x7C98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C98));
    // 0x080047AC: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x080047B0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080047B4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080047B8: b           L_08004944
    // 0x080047BC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08004944;
    // 0x080047BC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_080047C0:
    // 0x080047C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080047C4: bne         $v0, $at, L_08004808
    if (ctx->r2 != ctx->r1) {
        // 0x080047C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08004808;
    }
    // 0x080047C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080047CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080047D0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080047D4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080047D8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080047DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080047E0: jalr        $t9
    // 0x080047E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080047E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080047E8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C9C) << 16);
    // 0x080047EC: lwc1        $f0, 0x7C9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C9C));
    // 0x080047F0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080047F4: sb          $t8, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r24;
    // 0x080047F8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080047FC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08004800: b           L_08004944
    // 0x08004804: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08004944;
    // 0x08004804: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08004808:
    // 0x08004808: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800480C: bne         $v0, $at, L_08004850
    if (ctx->r2 != ctx->r1) {
        // 0x08004810: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08004850;
    }
    // 0x08004810: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08004814: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004818: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800481C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08004820: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08004824: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08004828: jalr        $t9
    // 0x0800482C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800482C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08004830: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CA0) << 16);
    // 0x08004834: lwc1        $f0, 0x7CA0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CA0));
    // 0x08004838: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0800483C: sb          $t0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r8;
    // 0x08004840: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08004844: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08004848: b           L_08004944
    // 0x0800484C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08004944;
    // 0x0800484C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08004850:
    // 0x08004850: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08004854: bne         $v0, $at, L_08004898
    if (ctx->r2 != ctx->r1) {
        // 0x08004858: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08004898;
    }
    // 0x08004858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800485C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004860: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004864: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08004868: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x0800486C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08004870: jalr        $t9
    // 0x08004874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08004878: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CA4) << 16);
    // 0x0800487C: lwc1        $f0, 0x7CA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CA4));
    // 0x08004880: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x08004884: sb          $t1, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r9;
    // 0x08004888: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x0800488C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08004890: b           L_08004944
    // 0x08004894: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08004944;
    // 0x08004894: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08004898:
    // 0x08004898: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x0800489C: bne         $v0, $at, L_080048E0
    if (ctx->r2 != ctx->r1) {
        // 0x080048A0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080048E0;
    }
    // 0x080048A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080048A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080048A8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080048AC: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080048B0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080048B4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x080048B8: jalr        $t9
    // 0x080048BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080048BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080048C0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CA8) << 16);
    // 0x080048C4: lwc1        $f0, 0x7CA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CA8));
    // 0x080048C8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x080048CC: sb          $t2, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r10;
    // 0x080048D0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080048D4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080048D8: b           L_08004944
    // 0x080048DC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08004944;
    // 0x080048DC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_080048E0:
    // 0x080048E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080048E4: bne         $v0, $at, L_08004944
    if (ctx->r2 != ctx->r1) {
        // 0x080048E8: addiu       $t3, $zero, 0x1A2
        ctx->r11 = ADD32(0, 0X1A2);
            goto L_08004944;
    }
    // 0x080048E8: addiu       $t3, $zero, 0x1A2
    ctx->r11 = ADD32(0, 0X1A2);
    // 0x080048EC: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x080048F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080048F4: ori         $t4, $t4, 0x6E1
    ctx->r12 = ctx->r12 | 0X6E1;
    // 0x080048F8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080048FC: sh          $t3, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r11;
    // 0x08004900: sw          $t4, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r12;
    // 0x08004904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08004908: jalr        $t9
    // 0x0800490C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800490C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x08004910: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CAC) << 16);
    // 0x08004914: lwc1        $f0, 0x7CAC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CAC));
    // 0x08004918: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x0800491C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004920: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004924: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4A74) << 16);
    // 0x08004928: addiu       $a0, $a0, 0x4A74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4A74));
    // 0x0800492C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08004930: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08004934: jalr        $t9
    // 0x08004938: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08004938: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    after_6:
    // 0x0800493C: b           L_0800495C
    // 0x08004940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800495C;
    // 0x08004940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08004944:
    // 0x08004944: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004948: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800494C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X496C) << 16);
    // 0x08004950: jalr        $t9
    // 0x08004954: addiu       $a0, $a0, 0x496C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X496C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004954: addiu       $a0, $a0, 0x496C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X496C));
    after_7:
    // 0x08004958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800495C:
    // 0x0800495C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08004960: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08004964: jr          $ra
    // 0x08004968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08004968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_0800651C_6F99FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800651C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006524: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08006528: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800652C: beql        $t7, $zero, L_0800655C
    if (ctx->r15 == 0) {
        // 0x08006530: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_0800655C;
    }
    goto skip_0;
    // 0x08006530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08006534: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08006538: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x0800653C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08006540: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08006544: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006548: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800654C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6568) << 16);
    // 0x08006550: jalr        $t9
    // 0x08006554: addiu       $a0, $a0, 0x6568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6568));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006554: addiu       $a0, $a0, 0x6568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6568));
    after_0:
    // 0x08006558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800655C:
    // 0x0800655C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006560: jr          $ra
    // 0x08006564: nop

    TRACE_RETURN()
    return;
    // 0x08006564: nop

;}
RECOMP_FUNC void func_08003388_6F6868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800338C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003394: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003398: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x0800339C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080033A0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x080033A4: beq         $t6, $zero, L_080033F4
    if (ctx->r14 == 0) {
        // 0x080033A8: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_080033F4;
    }
    // 0x080033A8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080033AC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x080033B0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x080033B4: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080033B8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x080033BC: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x080033C0: lw          $t8, 0xD4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XD4);
    // 0x080033C4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x080033C8: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x080033CC: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x080033D0: sw          $t9, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r25;
    // 0x080033D4: lhu         $t0, 0xD8($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD8);
    // 0x080033D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080033DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080033E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3404) << 16);
    // 0x080033E4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x080033E8: addiu       $a0, $a0, 0x3404
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3404));
    // 0x080033EC: jalr        $t9
    // 0x080033F0: sb          $t0, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080033F0: sb          $t0, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r8;
    after_0:
L_080033F4:
    // 0x080033F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080033F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080033FC: jr          $ra
    // 0x08003400: nop

    TRACE_RETURN()
    return;
    // 0x08003400: nop

;}
RECOMP_FUNC void func_08002B2C_6F600C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002B34: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002B3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002B40: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X23EC) << 16);
    // 0x08002B44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002B48: jalr        $t9
    // 0x08002B4C: addiu       $a0, $a0, 0x23EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X23EC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002B4C: addiu       $a0, $a0, 0x23EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X23EC));
    after_0:
    // 0x08002B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002B58: jr          $ra
    // 0x08002B5C: nop

    TRACE_RETURN()
    return;
    // 0x08002B5C: nop

;}
RECOMP_FUNC void func_080023E0_6F58C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080023E4: jr          $ra
    // 0x080023E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080023E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001240_6F4720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001244: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800124C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08001250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001254: jalr        $t9
    // 0x08001258: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001258: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800125C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001260: addiu       $t9, $t9, 0x1EBC
    ctx->r25 = ADD32(ctx->r25, 0X1EBC);
    // 0x08001264: jalr        $t9
    // 0x08001268: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001268: nop

    after_1:
    // 0x0800126C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08001270: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001274: lw          $t6, 0xD4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XD4);
    // 0x08001278: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x0800127C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001280: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08001284: sw          $t7, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r15;
    // 0x08001288: lw          $t0, 0xEC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XEC);
    // 0x0800128C: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08001290: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x08001294: beql        $t1, $zero, L_080012BC
    if (ctx->r9 == 0) {
        // 0x08001298: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080012BC;
    }
    goto skip_0;
    // 0x08001298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800129C: jalr        $t9
    // 0x080012A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080012A0: nop

    after_2:
    // 0x080012A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080012AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X12C8) << 16);
    // 0x080012B0: jalr        $t9
    // 0x080012B4: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X12C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080012B4: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X12C8));
    after_3:
    // 0x080012B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080012BC:
    // 0x080012BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080012C0: jr          $ra
    // 0x080012C4: nop

    TRACE_RETURN()
    return;
    // 0x080012C4: nop

;}
RECOMP_FUNC void func_08005D18_6F91F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005D20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005D24: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08005D28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08005D2C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08005D30: bnel        $v0, $at, L_08005D80
    if (ctx->r2 != ctx->r1) {
        // 0x08005D34: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_08005D80;
    }
    goto skip_0;
    // 0x08005D34: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    skip_0:
    // 0x08005D38: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08005D3C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005D40: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08005D44: beql        $t6, $zero, L_08005F60
    if (ctx->r14 == 0) {
        // 0x08005D48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08005F60;
    }
    goto skip_1;
    // 0x08005D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08005D4C: jalr        $t9
    // 0x08005D50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005D50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08005D54: bne         $v0, $zero, L_08005D74
    if (ctx->r2 != 0) {
        // 0x08005D58: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08005D74;
    }
    // 0x08005D58: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08005D5C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005D60: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08005D64: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    // 0x08005D68: jalr        $t9
    // 0x08005D6C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005D6C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x08005D70: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_08005D74:
    // 0x08005D74: sh          $zero, 0xDA($a2)
    MEM_H(0XDA, ctx->r6) = 0;
    // 0x08005D78: lbu         $v0, 0xD0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XD0);
    // 0x08005D7C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_08005D80:
    // 0x08005D80: bnel        $v0, $at, L_08005DD0
    if (ctx->r2 != ctx->r1) {
        // 0x08005D84: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_08005DD0;
    }
    goto skip_2;
    // 0x08005D84: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_2:
    // 0x08005D88: lhu         $t7, 0xDA($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XDA);
    // 0x08005D8C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005D90: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08005D94: beql        $t7, $zero, L_08005F60
    if (ctx->r15 == 0) {
        // 0x08005D98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08005F60;
    }
    goto skip_3;
    // 0x08005D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x08005D9C: jalr        $t9
    // 0x08005DA0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005DA0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_2:
    // 0x08005DA4: bne         $v0, $zero, L_08005DC4
    if (ctx->r2 != 0) {
        // 0x08005DA8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08005DC4;
    }
    // 0x08005DA8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08005DAC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005DB0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08005DB4: addiu       $a0, $zero, 0x2AA
    ctx->r4 = ADD32(0, 0X2AA);
    // 0x08005DB8: jalr        $t9
    // 0x08005DBC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005DBC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_3:
    // 0x08005DC0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_08005DC4:
    // 0x08005DC4: sh          $zero, 0xDA($a2)
    MEM_H(0XDA, ctx->r6) = 0;
    // 0x08005DC8: lbu         $v0, 0xD0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XD0);
    // 0x08005DCC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_08005DD0:
    // 0x08005DD0: bnel        $v0, $at, L_08005E50
    if (ctx->r2 != ctx->r1) {
        // 0x08005DD4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_08005E50;
    }
    goto skip_4;
    // 0x08005DD4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    skip_4:
    // 0x08005DD8: lhu         $t8, 0xDA($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0XDA);
    // 0x08005DDC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005DE0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08005DE4: beq         $t8, $zero, L_08005F5C
    if (ctx->r24 == 0) {
        // 0x08005DE8: addiu       $a0, $zero, 0x19C
        ctx->r4 = ADD32(0, 0X19C);
            goto L_08005F5C;
    }
    // 0x08005DE8: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    // 0x08005DEC: jalr        $t9
    // 0x08005DF0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005DF0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_4:
    // 0x08005DF4: beq         $v0, $zero, L_08005E14
    if (ctx->r2 == 0) {
        // 0x08005DF8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08005E14;
    }
    // 0x08005DF8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08005DFC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005E00: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08005E04: jalr        $t9
    // 0x08005E08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005E08: nop

    after_5:
    // 0x08005E0C: b           L_08005F60
    // 0x08005E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08005F60;
    // 0x08005E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005E14:
    // 0x08005E14: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005E18: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08005E1C: jalr        $t9
    // 0x08005E20: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08005E20: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_6:
    // 0x08005E24: bne         $v0, $zero, L_08005E44
    if (ctx->r2 != 0) {
        // 0x08005E28: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08005E44;
    }
    // 0x08005E28: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08005E2C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005E30: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08005E34: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x08005E38: jalr        $t9
    // 0x08005E3C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08005E3C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_7:
    // 0x08005E40: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_08005E44:
    // 0x08005E44: sh          $zero, 0xDA($a2)
    MEM_H(0XDA, ctx->r6) = 0;
    // 0x08005E48: lbu         $v0, 0xD0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XD0);
    // 0x08005E4C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
L_08005E50:
    // 0x08005E50: bnel        $v0, $at, L_08005EC0
    if (ctx->r2 != ctx->r1) {
        // 0x08005E54: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_08005EC0;
    }
    goto skip_5;
    // 0x08005E54: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    skip_5:
    // 0x08005E58: lhu         $t0, 0xDA($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XDA);
    // 0x08005E5C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005E60: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x08005E64: beq         $t0, $zero, L_08005F5C
    if (ctx->r8 == 0) {
        // 0x08005E68: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_08005F5C;
    }
    // 0x08005E68: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08005E6C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08005E70: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08005E74: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08005E78: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x08005E7C: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x08005E80: lw          $t2, 0xD4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XD4);
    // 0x08005E84: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08005E88: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08005E8C: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08005E90: sw          $t3, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r11;
    // 0x08005E94: lhu         $t4, 0xD8($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0XD8);
    // 0x08005E98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005E9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005EA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4D20) << 16);
    // 0x08005EA4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x08005EA8: addiu       $a0, $a0, 0x4D20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4D20));
    // 0x08005EAC: jalr        $t9
    // 0x08005EB0: sb          $t4, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08005EB0: sb          $t4, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r12;
    after_8:
    // 0x08005EB4: b           L_08005F60
    // 0x08005EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08005F60;
    // 0x08005EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005EBC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_08005EC0:
    // 0x08005EC0: bne         $v0, $at, L_08005F38
    if (ctx->r2 != ctx->r1) {
        // 0x08005EC4: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08005F38;
    }
    // 0x08005EC4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005EC8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08005ECC: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08005ED0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08005ED4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005ED8: lw          $t8, 0xA0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XA0);
    // 0x08005EDC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08005EE0: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08005EE4: bne         $t6, $t8, L_08005F5C
    if (ctx->r14 != ctx->r24) {
        // 0x08005EE8: addiu       $v0, $v0, -0x3A38
        ctx->r2 = ADD32(ctx->r2, -0X3A38);
            goto L_08005F5C;
    }
    // 0x08005EE8: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x08005EEC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x08005EF0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08005EF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005EF8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08005EFC: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x08005F00: lw          $t1, 0xD4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XD4);
    // 0x08005F04: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x08005F08: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08005F0C: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x08005F10: sw          $t2, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r10;
    // 0x08005F14: lhu         $t3, 0xD8($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0XD8);
    // 0x08005F18: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005F1C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4D20) << 16);
    // 0x08005F20: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x08005F24: addiu       $a0, $a0, 0x4D20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4D20));
    // 0x08005F28: jalr        $t9
    // 0x08005F2C: sb          $t3, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08005F2C: sb          $t3, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r11;
    after_9:
    // 0x08005F30: b           L_08005F60
    // 0x08005F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08005F60;
    // 0x08005F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005F38:
    // 0x08005F38: lhu         $a0, 0xD4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XD4);
    // 0x08005F3C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08005F40: jalr        $t9
    // 0x08005F44: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08005F44: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_10:
    // 0x08005F48: beq         $v0, $zero, L_08005F5C
    if (ctx->r2 == 0) {
        // 0x08005F4C: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08005F5C;
    }
    // 0x08005F4C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08005F50: lw          $t5, 0x68($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X68);
    // 0x08005F54: ori         $t7, $t5, 0x2
    ctx->r15 = ctx->r13 | 0X2;
    // 0x08005F58: sw          $t7, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r15;
L_08005F5C:
    // 0x08005F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005F60:
    // 0x08005F60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005F64: jr          $ra
    // 0x08005F68: nop

    TRACE_RETURN()
    return;
    // 0x08005F68: nop

;}
RECOMP_FUNC void func_080061C8_6F96A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080061C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080061CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080061D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080061D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080061D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080061DC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080061E0: bne         $v0, $zero, L_08006218
    if (ctx->r2 != 0) {
        // 0x080061E4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08006218;
    }
    // 0x080061E4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080061E8: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x080061EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080061F0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080061F4: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080061F8: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x080061FC: jalr        $t9
    // 0x08006200: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006200: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_0:
    // 0x08006204: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006208: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800620C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6228) << 16);
    // 0x08006210: jalr        $t9
    // 0x08006214: addiu       $a0, $a0, 0x6228
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6228));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006214: addiu       $a0, $a0, 0x6228
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6228));
    after_1:
L_08006218:
    // 0x08006218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800621C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006220: jr          $ra
    // 0x08006224: nop

    TRACE_RETURN()
    return;
    // 0x08006224: nop

;}
RECOMP_FUNC void func_08004A74_6F7F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004A7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004A80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004A84: lhu         $t7, 0xDA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XDA);
    // 0x08004A88: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08004A8C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08004A90: beql        $t7, $zero, L_08004B08
    if (ctx->r15 == 0) {
        // 0x08004A94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08004B08;
    }
    goto skip_0;
    // 0x08004A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08004A98: lw          $t8, 0xD4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XD4);
    // 0x08004A9C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x08004AA0: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x08004AA4: sw          $t9, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r25;
    // 0x08004AA8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004AAC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004AB0: jalr        $t9
    // 0x08004AB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004AB4: nop

    after_0:
    // 0x08004AB8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004ABC: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08004AC0: jalr        $t9
    // 0x08004AC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004AC4: nop

    after_1:
    // 0x08004AC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004ACC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08004AD0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08004AD4: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08004AD8: sb          $t0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r8;
    // 0x08004ADC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004AE0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08004AE4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004AE8: jalr        $t9
    // 0x08004AEC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004AEC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x08004AF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004AF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004AF8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4B14) << 16);
    // 0x08004AFC: jalr        $t9
    // 0x08004B00: addiu       $a0, $a0, 0x4B14
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4B14));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004B00: addiu       $a0, $a0, 0x4B14
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4B14));
    after_3:
    // 0x08004B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08004B08:
    // 0x08004B08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004B0C: jr          $ra
    // 0x08004B10: nop

    TRACE_RETURN()
    return;
    // 0x08004B10: nop

;}
RECOMP_FUNC void func_08002CC0_6F61A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002CC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002CC8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002CCC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002CD0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x08002CD4: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002CD8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002CDC: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08002CE0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08002CE4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08002CE8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08002CEC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002CF0: bne         $v0, $zero, L_08002D2C
    if (ctx->r2 != 0) {
        // 0x08002CF4: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08002D2C;
    }
    // 0x08002CF4: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08002CF8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C24) << 16);
    // 0x08002CFC: lwc1        $f20, 0x7C24($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C24));
    // 0x08002D00: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D04: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002D08: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08002D0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002D10: jalr        $t9
    // 0x08002D14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002D18: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08002D1C: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08002D20: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08002D24: b           L_08002F0C
    // 0x08002D28: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_08002F0C;
    // 0x08002D28: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_08002D2C:
    // 0x08002D2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002D30: bne         $v0, $at, L_08002D6C
    if (ctx->r2 != ctx->r1) {
        // 0x08002D34: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002D6C;
    }
    // 0x08002D34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002D38: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C28) << 16);
    // 0x08002D3C: lwc1        $f20, 0x7C28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C28));
    // 0x08002D40: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D44: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002D48: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08002D4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002D50: jalr        $t9
    // 0x08002D54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002D54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002D58: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08002D5C: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08002D60: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08002D64: b           L_08002F0C
    // 0x08002D68: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_08002F0C;
    // 0x08002D68: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_08002D6C:
    // 0x08002D6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08002D70: bne         $v0, $at, L_08002DB0
    if (ctx->r2 != ctx->r1) {
        // 0x08002D74: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002DB0;
    }
    // 0x08002D74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002D78: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C2C) << 16);
    // 0x08002D7C: lwc1        $f20, 0x7C2C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C2C));
    // 0x08002D80: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002D84: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002D88: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08002D8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08002D90: jalr        $t9
    // 0x08002D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002D98: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08002D9C: sb          $t8, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r24;
    // 0x08002DA0: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08002DA4: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08002DA8: b           L_08002F0C
    // 0x08002DAC: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_08002F0C;
    // 0x08002DAC: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_08002DB0:
    // 0x08002DB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08002DB4: bne         $v0, $at, L_08002DF8
    if (ctx->r2 != ctx->r1) {
        // 0x08002DB8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002DF8;
    }
    // 0x08002DB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002DBC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002DC0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002DC4: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08002DC8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08002DCC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08002DD0: jalr        $t9
    // 0x08002DD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002DD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08002DD8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C30) << 16);
    // 0x08002DDC: lwc1        $f20, 0x7C30($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C30));
    // 0x08002DE0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08002DE4: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x08002DE8: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08002DEC: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08002DF0: b           L_08002F0C
    // 0x08002DF4: sb          $t0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r8;
        goto L_08002F0C;
    // 0x08002DF4: sb          $t0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r8;
L_08002DF8:
    // 0x08002DF8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08002DFC: bne         $v0, $at, L_08002E38
    if (ctx->r2 != ctx->r1) {
        // 0x08002E00: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002E38;
    }
    // 0x08002E00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002E04: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C34) << 16);
    // 0x08002E08: lwc1        $f20, 0x7C34($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C34));
    // 0x08002E0C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E10: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002E14: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08002E18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08002E1C: jalr        $t9
    // 0x08002E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08002E24: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08002E28: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08002E2C: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08002E30: b           L_08002F0C
    // 0x08002E34: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
        goto L_08002F0C;
    // 0x08002E34: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_08002E38:
    // 0x08002E38: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08002E3C: bne         $v0, $at, L_08002E80
    if (ctx->r2 != ctx->r1) {
        // 0x08002E40: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002E80;
    }
    // 0x08002E40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002E44: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E48: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002E4C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08002E50: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08002E54: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08002E58: jalr        $t9
    // 0x08002E5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002E5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08002E60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08002E64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002E68: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x08002E6C: sb          $t1, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r9;
    // 0x08002E70: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08002E74: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08002E78: b           L_08002F0C
    // 0x08002E7C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002F0C;
    // 0x08002E7C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08002E80:
    // 0x08002E80: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08002E84: bne         $v0, $at, L_08002ECC
    if (ctx->r2 != ctx->r1) {
        // 0x08002E88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002ECC;
    }
    // 0x08002E88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002E8C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002E90: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002E94: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08002E98: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08002E9C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08002EA0: jalr        $t9
    // 0x08002EA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002EA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08002EA8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C38) << 16);
    // 0x08002EAC: lwc1        $f0, 0x7C38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C38));
    // 0x08002EB0: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x08002EB4: ori         $t2, $t2, 0x6E0
    ctx->r10 = ctx->r10 | 0X6E0;
    // 0x08002EB8: sw          $t2, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r10;
    // 0x08002EBC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08002EC0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08002EC4: b           L_08002F0C
    // 0x08002EC8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002F0C;
    // 0x08002EC8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08002ECC:
    // 0x08002ECC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08002ED0: bne         $v0, $at, L_08002F0C
    if (ctx->r2 != ctx->r1) {
        // 0x08002ED4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002F0C;
    }
    // 0x08002ED4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002ED8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C3C) << 16);
    // 0x08002EDC: lwc1        $f20, 0x7C3C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C3C));
    // 0x08002EE0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002EE4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002EE8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08002EEC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08002EF0: jalr        $t9
    // 0x08002EF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002EF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x08002EF8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x08002EFC: sb          $t3, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r11;
    // 0x08002F00: swc1        $f20, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f20.u32l;
    // 0x08002F04: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x08002F08: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
L_08002F0C:
    // 0x08002F0C: lbu         $t4, 0xD3($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XD3);
    // 0x08002F10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002F14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2F60) << 16);
    // 0x08002F18: bne         $t4, $at, L_08002F3C
    if (ctx->r12 != ctx->r1) {
        // 0x08002F1C: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08002F3C;
    }
    // 0x08002F1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F20: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002F24: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X22F0) << 16);
    // 0x08002F2C: jalr        $t9
    // 0x08002F30: addiu       $a0, $a0, 0x22F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X22F0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002F30: addiu       $a0, $a0, 0x22F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X22F0));
    after_8:
    // 0x08002F34: b           L_08002F4C
    // 0x08002F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002F4C;
    // 0x08002F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002F3C:
    // 0x08002F3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002F40: jalr        $t9
    // 0x08002F44: addiu       $a0, $a0, 0x2F60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2F60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08002F44: addiu       $a0, $a0, 0x2F60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2F60));
    after_9:
    // 0x08002F48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002F4C:
    // 0x08002F4C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x08002F50: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002F54: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002F58: jr          $ra
    // 0x08002F5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08002F5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08002308_6F57E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800230C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002314: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002318: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800231C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002320: jalr        $t9
    // 0x08002324: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002324: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08002328: beq         $v0, $zero, L_08002340
    if (ctx->r2 == 0) {
        // 0x0800232C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X2350) << 16);
            goto L_08002340;
    }
    // 0x0800232C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2350) << 16);
    // 0x08002330: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002334: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002338: jalr        $t9
    // 0x0800233C: addiu       $a0, $a0, 0x2350
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2350));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800233C: addiu       $a0, $a0, 0x2350
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2350));
    after_1:
L_08002340:
    // 0x08002340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002348: jr          $ra
    // 0x0800234C: nop

    TRACE_RETURN()
    return;
    // 0x0800234C: nop

;}
RECOMP_FUNC void func_08005118_6F85F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005118: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800511C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08005120: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08005124: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08005128: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x0800512C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005130: addiu       $t6, $zero, 0x242
    ctx->r14 = ADD32(0, 0X242);
    // 0x08005134: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08005138: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x0800513C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08005140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005144: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08005148: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x0800514C: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08005150: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08005154: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08005158: jalr        $t9
    // 0x0800515C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800515C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08005160: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CB4) << 16);
    // 0x08005164: lwc1        $f0, 0x7CB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CB4));
    // 0x08005168: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0800516C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08005170: sb          $t0, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r8;
    // 0x08005174: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x08005178: addiu       $t1, $t1, 0x7B58
    ctx->r9 = ADD32(ctx->r9, 0X7B58);
    // 0x0800517C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08005180: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005184: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08005188: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800518C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X51BC) << 16);
    // 0x08005190: addiu       $a0, $a0, 0x51BC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X51BC));
    // 0x08005194: sw          $t2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r10;
    // 0x08005198: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x0800519C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080051A0: jalr        $t9
    // 0x080051A4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080051A4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x080051A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080051AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080051B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080051B4: jr          $ra
    // 0x080051B8: nop

    TRACE_RETURN()
    return;
    // 0x080051B8: nop

;}
RECOMP_FUNC void func_08005094_6F8574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005094: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08005098: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800509C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080050A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080050A4: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x080050A8: jalr        $t9
    // 0x080050AC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080050AC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x080050B0: bne         $v0, $zero, L_08005100
    if (ctx->r2 != 0) {
        // 0x080050B4: addiu       $a0, $zero, 0x138
        ctx->r4 = ADD32(0, 0X138);
            goto L_08005100;
    }
    // 0x080050B4: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    // 0x080050B8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080050BC: addiu       $t9, $t9, -0x5BE0
    ctx->r25 = ADD32(ctx->r25, -0X5BE0);
    // 0x080050C0: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x080050C4: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x080050C8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x080050CC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x080050D0: addiu       $a1, $zero, 0x11C
    ctx->r5 = ADD32(0, 0X11C);
    // 0x080050D4: addiu       $a2, $zero, -0x21
    ctx->r6 = ADD32(0, -0X21);
    // 0x080050D8: addiu       $a3, $zero, -0x220
    ctx->r7 = ADD32(0, -0X220);
    // 0x080050DC: jalr        $t9
    // 0x080050E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080050E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x080050E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080050E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080050EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080050F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4F74) << 16);
    // 0x080050F4: sb          $zero, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = 0;
    // 0x080050F8: jalr        $t9
    // 0x080050FC: addiu       $a0, $a0, 0x4F74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4F74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080050FC: addiu       $a0, $a0, 0x4F74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4F74));
    after_2:
L_08005100:
    // 0x08005100: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08005104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08005108: jr          $ra
    // 0x0800510C: nop

    TRACE_RETURN()
    return;
    // 0x0800510C: nop

    // 0x08005110: jr          $ra
    // 0x08005114: nop

    TRACE_RETURN()
    return;
    // 0x08005114: nop

;}
RECOMP_FUNC void func_08002F60_6F6440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002F68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002F6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002F70: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08002F74: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08002F78: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08002F7C: beq         $t6, $zero, L_08003028
    if (ctx->r14 == 0) {
        // 0x08002F80: addiu       $v1, $v1, -0x33D0
        ctx->r3 = ADD32(ctx->r3, -0X33D0);
            goto L_08003028;
    }
    // 0x08002F80: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08002F84: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x08002F88: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002F8C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002F90: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08002F94: sw          $t8, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r24;
    // 0x08002F98: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002F9C: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x08002FA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002FA4: beq         $v0, $zero, L_08002FCC
    if (ctx->r2 == 0) {
        // 0x08002FA8: nop
    
            goto L_08002FCC;
    }
    // 0x08002FA8: nop

    // 0x08002FAC: beq         $v0, $at, L_08002FCC
    if (ctx->r2 == ctx->r1) {
        // 0x08002FB0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_08002FCC;
    }
    // 0x08002FB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08002FB4: beq         $v0, $at, L_08002FCC
    if (ctx->r2 == ctx->r1) {
        // 0x08002FB8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_08002FCC;
    }
    // 0x08002FB8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08002FBC: beq         $v0, $at, L_08002FCC
    if (ctx->r2 == ctx->r1) {
        // 0x08002FC0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_08002FCC;
    }
    // 0x08002FC0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08002FC4: bne         $v0, $at, L_08002FDC
    if (ctx->r2 != ctx->r1) {
        // 0x08002FC8: nop
    
            goto L_08002FDC;
    }
    // 0x08002FC8: nop

L_08002FCC:
    // 0x08002FCC: jalr        $t9
    // 0x08002FD0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002FD0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08002FD4: b           L_08002FF4
    // 0x08002FD8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
        goto L_08002FF4;
    // 0x08002FD8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08002FDC:
    // 0x08002FDC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002FE0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002FE4: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    // 0x08002FE8: jalr        $t9
    // 0x08002FEC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002FEC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x08002FF0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08002FF4:
    // 0x08002FF4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002FF8: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08002FFC: jalr        $t9
    // 0x08003000: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003000: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x08003004: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08003008: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800300C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003010: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08003014: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08003018: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x0800301C: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08003020: jalr        $t9
    // 0x08003024: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003024: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_3:
L_08003028:
    // 0x08003028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800302C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003030: jr          $ra
    // 0x08003034: nop

    TRACE_RETURN()
    return;
    // 0x08003034: nop

;}
RECOMP_FUNC void func_080062A0_6F9780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080062A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080062A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080062A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080062AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080062B0: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080062B4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080062B8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080062BC: beq         $t6, $zero, L_08006308
    if (ctx->r14 == 0) {
        // 0x080062C0: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_08006308;
    }
    // 0x080062C0: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080062C4: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x080062C8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080062CC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080062D0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080062D4: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x080062D8: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x080062DC: jalr        $t9
    // 0x080062E0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080062E0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080062E4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080062E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080062EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080062F0: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x080062F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6318) << 16);
    // 0x080062F8: addiu       $a0, $a0, 0x6318
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6318));
    // 0x080062FC: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08006300: jalr        $t9
    // 0x08006304: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006304: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_1:
L_08006308:
    // 0x08006308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800630C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006310: jr          $ra
    // 0x08006314: nop

    TRACE_RETURN()
    return;
    // 0x08006314: nop

;}
RECOMP_FUNC void func_08004524_6F7A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800452C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004530: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004534: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08004538: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800453C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08004540: beq         $t6, $zero, L_080045C4
    if (ctx->r14 == 0) {
        // 0x08004544: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_080045C4;
    }
    // 0x08004544: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08004548: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x0800454C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08004550: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x08004554: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x08004558: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x0800455C: bne         $t9, $zero, L_0800457C
    if (ctx->r25 != 0) {
        // 0x08004560: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800457C;
    }
    // 0x08004560: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004564: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004568: addiu       $a0, $zero, 0x227
    ctx->r4 = ADD32(0, 0X227);
    // 0x0800456C: jalr        $t9
    // 0x08004570: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004570: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08004574: b           L_08004590
    // 0x08004578: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
        goto L_08004590;
    // 0x08004578: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_0800457C:
    // 0x0800457C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004580: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004584: jalr        $t9
    // 0x08004588: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004588: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x0800458C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08004590:
    // 0x08004590: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004594: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08004598: jalr        $t9
    // 0x0800459C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800459C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x080045A0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080045A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080045A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080045AC: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x080045B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x080045B4: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x080045B8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x080045BC: jalr        $t9
    // 0x080045C0: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080045C0: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_3:
L_080045C4:
    // 0x080045C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080045C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080045CC: jr          $ra
    // 0x080045D0: nop

    TRACE_RETURN()
    return;
    // 0x080045D0: nop

;}
RECOMP_FUNC void func_080012C8_6F47A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012C8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080012CC: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080012D0: lw          $t6, 0xD4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XD4);
    // 0x080012D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080012D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080012DC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080012E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080012E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080012E8: sw          $t7, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r15;
    // 0x080012EC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080012F0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080012F4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080012F8: bne         $v0, $zero, L_08001310
    if (ctx->r2 != 0) {
        // 0x080012FC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08001310;
    }
    // 0x080012FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001300: jalr        $t9
    // 0x08001304: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001304: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_0:
    // 0x08001308: b           L_08001400
    // 0x0800130C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x0800130C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_08001310:
    // 0x08001310: bne         $v0, $at, L_0800132C
    if (ctx->r2 != ctx->r1) {
        // 0x08001314: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800132C;
    }
    // 0x08001314: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001318: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800131C: jalr        $t9
    // 0x08001320: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001320: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_1:
    // 0x08001324: b           L_08001400
    // 0x08001328: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x08001328: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_0800132C:
    // 0x0800132C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001330: bne         $v0, $at, L_0800134C
    if (ctx->r2 != ctx->r1) {
        // 0x08001334: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800134C;
    }
    // 0x08001334: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001338: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800133C: jalr        $t9
    // 0x08001340: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001340: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_2:
    // 0x08001344: b           L_08001400
    // 0x08001348: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x08001348: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_0800134C:
    // 0x0800134C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08001350: bne         $v0, $at, L_0800136C
    if (ctx->r2 != ctx->r1) {
        // 0x08001354: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800136C;
    }
    // 0x08001354: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001358: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800135C: jalr        $t9
    // 0x08001360: addiu       $a0, $zero, 0x227
    ctx->r4 = ADD32(0, 0X227);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001360: addiu       $a0, $zero, 0x227
    ctx->r4 = ADD32(0, 0X227);
    after_3:
    // 0x08001364: b           L_08001400
    // 0x08001368: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x08001368: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_0800136C:
    // 0x0800136C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08001370: bne         $v0, $at, L_0800138C
    if (ctx->r2 != ctx->r1) {
        // 0x08001374: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800138C;
    }
    // 0x08001374: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001378: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800137C: jalr        $t9
    // 0x08001380: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001380: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    after_4:
    // 0x08001384: b           L_08001400
    // 0x08001388: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x08001388: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_0800138C:
    // 0x0800138C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08001390: bne         $v0, $at, L_080013AC
    if (ctx->r2 != ctx->r1) {
        // 0x08001394: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080013AC;
    }
    // 0x08001394: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001398: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800139C: jalr        $t9
    // 0x080013A0: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080013A0: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_5:
    // 0x080013A4: b           L_08001400
    // 0x080013A8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x080013A8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_080013AC:
    // 0x080013AC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x080013B0: bne         $v0, $at, L_080013CC
    if (ctx->r2 != ctx->r1) {
        // 0x080013B4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080013CC;
    }
    // 0x080013B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080013B8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080013BC: jalr        $t9
    // 0x080013C0: addiu       $a0, $zero, 0x15D
    ctx->r4 = ADD32(0, 0X15D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080013C0: addiu       $a0, $zero, 0x15D
    ctx->r4 = ADD32(0, 0X15D);
    after_6:
    // 0x080013C4: b           L_08001400
    // 0x080013C8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x080013C8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_080013CC:
    // 0x080013CC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080013D0: bne         $v0, $at, L_080013F0
    if (ctx->r2 != ctx->r1) {
        // 0x080013D4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080013F0;
    }
    // 0x080013D4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080013D8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080013DC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080013E0: jalr        $t9
    // 0x080013E4: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080013E4: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    after_7:
    // 0x080013E8: b           L_08001400
    // 0x080013EC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
        goto L_08001400;
    // 0x080013EC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_080013F0:
    // 0x080013F0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080013F4: jalr        $t9
    // 0x080013F8: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080013F8: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_8:
    // 0x080013FC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_08001400:
    // 0x08001400: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001404: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001408: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x0800140C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08001410: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x08001414: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x08001418: jalr        $t9
    // 0x0800141C: sw          $t2, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800141C: sw          $t2, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r10;
    after_9:
    // 0x08001420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001428: jr          $ra
    // 0x0800142C: nop

    TRACE_RETURN()
    return;
    // 0x0800142C: nop

;}
RECOMP_FUNC void func_080006D4_6F3BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080006E4: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080006E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080006EC: jalr        $t9
    // 0x080006F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080006F4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080006F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000700: lw          $v0, 0xDC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XDC);
    // 0x08000704: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000708: beq         $v0, $zero, L_08000714
    if (ctx->r2 == 0) {
        // 0x0800070C: nop
    
            goto L_08000714;
    }
    // 0x0800070C: nop

    // 0x08000710: sb          $t7, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r15;
L_08000714:
    // 0x08000714: jalr        $t9
    // 0x08000718: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000718: nop

    after_1:
    // 0x0800071C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000724: jr          $ra
    // 0x08000728: nop

    TRACE_RETURN()
    return;
    // 0x08000728: nop

;}
RECOMP_FUNC void func_08006000_6F94E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800600C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006010: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08006014: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x08006018: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x0800601C: beql        $t6, $zero, L_08006060
    if (ctx->r14 == 0) {
        // 0x08006020: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08006060;
    }
    goto skip_0;
    // 0x08006020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08006024: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08006028: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800602C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08006030: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08006034: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08006038: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x0800603C: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x08006040: jalr        $t9
    // 0x08006044: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006044: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_0:
    // 0x08006048: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800604C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006050: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X606C) << 16);
    // 0x08006054: jalr        $t9
    // 0x08006058: addiu       $a0, $a0, 0x606C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X606C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006058: addiu       $a0, $a0, 0x606C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X606C));
    after_1:
    // 0x0800605C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08006060:
    // 0x08006060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006064: jr          $ra
    // 0x08006068: nop

    TRACE_RETURN()
    return;
    // 0x08006068: nop

;}
RECOMP_FUNC void func_08004C00_6F80E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004C04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004C0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004C10: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x08004C14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004C18: jalr        $t9
    // 0x08004C1C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004C1C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08004C20: bne         $v0, $zero, L_08004C54
    if (ctx->r2 != 0) {
        // 0x08004C24: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08004C54;
    }
    // 0x08004C24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004C28: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C2C: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08004C30: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08004C34: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004C38: jalr        $t9
    // 0x08004C3C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004C3C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08004C40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004C44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004C48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4C64) << 16);
    // 0x08004C4C: jalr        $t9
    // 0x08004C50: addiu       $a0, $a0, 0x4C64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4C64));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004C50: addiu       $a0, $a0, 0x4C64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4C64));
    after_2:
L_08004C54:
    // 0x08004C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004C5C: jr          $ra
    // 0x08004C60: nop

    TRACE_RETURN()
    return;
    // 0x08004C60: nop

;}
RECOMP_FUNC void func_08000AA8_6F3F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AA8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000AAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B90) << 16);
    // 0x08000AB0: lwc1        $f0, 0x7B90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B90));
    // 0x08000AB4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000AB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x08000ABC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08000AC0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08000AC4: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08000AC8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000ACC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000AD0: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000AD4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x08000AD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000ADC: addiu       $t9, $zero, 0x23C
    ctx->r25 = ADD32(0, 0X23C);
    // 0x08000AE0: swc1        $f0, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f0.u32l;
    // 0x08000AE4: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x08000AE8: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x08000AEC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000AF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000AF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000AF8: bne         $v0, $zero, L_08000B20
    if (ctx->r2 != 0) {
        // 0x08000AFC: nop
    
            goto L_08000B20;
    }
    // 0x08000AFC: nop

    // 0x08000B00: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x08000B04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B08: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B0C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000B10: jalr        $t9
    // 0x08000B14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000B18: b           L_08000D2C
    // 0x08000B1C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
        goto L_08000D2C;
    // 0x08000B1C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
L_08000B20:
    // 0x08000B20: bne         $v0, $at, L_08000B50
    if (ctx->r2 != ctx->r1) {
        // 0x08000B24: addiu       $t0, $zero, 0x321
        ctx->r8 = ADD32(0, 0X321);
            goto L_08000B50;
    }
    // 0x08000B24: addiu       $t0, $zero, 0x321
    ctx->r8 = ADD32(0, 0X321);
    // 0x08000B28: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B2C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B30: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000B34: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x08000B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B40: jalr        $t9
    // 0x08000B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000B48: b           L_08000D2C
    // 0x08000B4C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
        goto L_08000D2C;
    // 0x08000B4C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
L_08000B50:
    // 0x08000B50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000B54: bne         $v0, $at, L_08000B9C
    if (ctx->r2 != ctx->r1) {
        // 0x08000B58: addiu       $t1, $zero, 0x321
        ctx->r9 = ADD32(0, 0X321);
            goto L_08000B9C;
    }
    // 0x08000B58: addiu       $t1, $zero, 0x321
    ctx->r9 = ADD32(0, 0X321);
    // 0x08000B5C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B60: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B64: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000B68: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x08000B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000B74: jalr        $t9
    // 0x08000B78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000B7C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B94) << 16);
    // 0x08000B80: lwc1        $f0, 0x7B94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B94));
    // 0x08000B84: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x08000B88: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000B8C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000B90: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000B94: b           L_08000D2C
    // 0x08000B98: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
        goto L_08000D2C;
    // 0x08000B98: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
L_08000B9C:
    // 0x08000B9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000BA0: bne         $v0, $at, L_08000BD4
    if (ctx->r2 != ctx->r1) {
        // 0x08000BA4: addiu       $t2, $zero, 0x31F
        ctx->r10 = ADD32(0, 0X31F);
            goto L_08000BD4;
    }
    // 0x08000BA4: addiu       $t2, $zero, 0x31F
    ctx->r10 = ADD32(0, 0X31F);
    // 0x08000BA8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BAC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000BB0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000BB4: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x08000BB8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BC4: jalr        $t9
    // 0x08000BC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000BC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000BCC: b           L_08000D2C
    // 0x08000BD0: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
        goto L_08000D2C;
    // 0x08000BD0: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
L_08000BD4:
    // 0x08000BD4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08000BD8: bne         $v0, $at, L_08000C20
    if (ctx->r2 != ctx->r1) {
        // 0x08000BDC: addiu       $t3, $zero, 0x32F
        ctx->r11 = ADD32(0, 0X32F);
            goto L_08000C20;
    }
    // 0x08000BDC: addiu       $t3, $zero, 0x32F
    ctx->r11 = ADD32(0, 0X32F);
    // 0x08000BE0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000BE4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000BE8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000BEC: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    // 0x08000BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BF8: jalr        $t9
    // 0x08000BFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000BFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08000C00: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B98) << 16);
    // 0x08000C04: lwc1        $f0, 0x7B98($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B98));
    // 0x08000C08: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x08000C0C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08000C10: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000C14: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000C18: b           L_08000D2C
    // 0x08000C1C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
        goto L_08000D2C;
    // 0x08000C1C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
L_08000C20:
    // 0x08000C20: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08000C24: bne         $v0, $at, L_08000C58
    if (ctx->r2 != ctx->r1) {
        // 0x08000C28: addiu       $t4, $zero, 0x242
        ctx->r12 = ADD32(0, 0X242);
            goto L_08000C58;
    }
    // 0x08000C28: addiu       $t4, $zero, 0x242
    ctx->r12 = ADD32(0, 0X242);
    // 0x08000C2C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C30: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C34: sh          $t4, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r12;
    // 0x08000C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000C40: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000C44: jalr        $t9
    // 0x08000C48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000C48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08000C4C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x08000C50: b           L_08000D2C
    // 0x08000C54: sb          $t5, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r13;
        goto L_08000D2C;
    // 0x08000C54: sb          $t5, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r13;
L_08000C58:
    // 0x08000C58: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08000C5C: bne         $v0, $at, L_08000C94
    if (ctx->r2 != ctx->r1) {
        // 0x08000C60: addiu       $t6, $zero, 0x23F
        ctx->r14 = ADD32(0, 0X23F);
            goto L_08000C94;
    }
    // 0x08000C60: addiu       $t6, $zero, 0x23F
    ctx->r14 = ADD32(0, 0X23F);
    // 0x08000C64: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C68: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000C6C: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000C70: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08000C74: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08000C80: jalr        $t9
    // 0x08000C84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000C84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08000C88: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000C8C: b           L_08000D2C
    // 0x08000C90: sb          $t7, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r15;
        goto L_08000D2C;
    // 0x08000C90: sb          $t7, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r15;
L_08000C94:
    // 0x08000C94: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08000C98: bne         $v0, $at, L_08000CD0
    if (ctx->r2 != ctx->r1) {
        // 0x08000C9C: addiu       $t8, $zero, 0x23F
        ctx->r24 = ADD32(0, 0X23F);
            goto L_08000CD0;
    }
    // 0x08000C9C: addiu       $t8, $zero, 0x23F
    ctx->r24 = ADD32(0, 0X23F);
    // 0x08000CA0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000CA4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000CA8: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08000CAC: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x08000CB0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CB8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08000CBC: jalr        $t9
    // 0x08000CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x08000CC4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x08000CC8: b           L_08000D2C
    // 0x08000CCC: sb          $t0, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r8;
        goto L_08000D2C;
    // 0x08000CCC: sb          $t0, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r8;
L_08000CD0:
    // 0x08000CD0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x08000CD4: bne         $v0, $at, L_08000D2C
    if (ctx->r2 != ctx->r1) {
        // 0x08000CD8: addiu       $t1, $zero, 0x32F
        ctx->r9 = ADD32(0, 0X32F);
            goto L_08000D2C;
    }
    // 0x08000CD8: addiu       $t1, $zero, 0x32F
    ctx->r9 = ADD32(0, 0X32F);
    // 0x08000CDC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000CE0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000CE4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x08000CE8: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x08000CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000CF4: jalr        $t9
    // 0x08000CF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000CF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x08000CFC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B9C) << 16);
    // 0x08000D00: lwc1        $f0, 0x7B9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B9C));
    // 0x08000D04: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x08000D08: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08000D0C: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x08000D10: addiu       $t2, $t2, 0x7B58
    ctx->r10 = ADD32(ctx->r10, 0X7B58);
    // 0x08000D14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000D18: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x08000D1C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000D20: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000D24: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000D28: sw          $t3, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r11;
L_08000D2C:
    // 0x08000D2C: lbu         $v0, 0xD1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD1);
    // 0x08000D30: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000D34: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000D38: bne         $v0, $zero, L_08000DE4
    if (ctx->r2 != 0) {
        // 0x08000D3C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08000DE4;
    }
    // 0x08000D3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000D40: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    // 0x08000D44: jalr        $v1
    // 0x08000D48: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_9;
    // 0x08000D48: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_9:
    // 0x08000D4C: beq         $v0, $zero, L_08000D78
    if (ctx->r2 == 0) {
        // 0x08000D50: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_08000D78;
    }
    // 0x08000D50: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000D54: jalr        $v1
    // 0x08000D58: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_10;
    // 0x08000D58: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_10:
    // 0x08000D5C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D60: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D64: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1020) << 16);
    // 0x08000D68: jalr        $t9
    // 0x08000D6C: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000D6C: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    after_11:
    // 0x08000D70: b           L_08001010
    // 0x08000D74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08001010;
    // 0x08000D74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000D78:
    // 0x08000D78: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000D80: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000D84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000D88: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D8C: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000D90: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X1430) << 16);
    // 0x08000D94: addiu       $a1, $a1, 0x1430
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X1430));
    // 0x08000D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000DA0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000DA4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000DA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000DAC: jalr        $t9
    // 0x08000DB0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000DB0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x08000DB4: beq         $v0, $zero, L_08000FF8
    if (ctx->r2 == 0) {
        // 0x08000DB8: addiu       $t4, $zero, 0x2B
        ctx->r12 = ADD32(0, 0X2B);
            goto L_08000FF8;
    }
    // 0x08000DB8: addiu       $t4, $zero, 0x2B
    ctx->r12 = ADD32(0, 0X2B);
    // 0x08000DBC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DC0: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08000DC4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000DC8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000DCC: jalr        $t9
    // 0x08000DD0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000DD0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_13:
    // 0x08000DD4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08000DD8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000DDC: b           L_08000FF8
    // 0x08000DE0: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
        goto L_08000FF8;
    // 0x08000DE0: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08000DE4:
    // 0x08000DE4: bne         $v0, $at, L_08000E94
    if (ctx->r2 != ctx->r1) {
        // 0x08000DE8: lui         $v1, 0x8002
        ctx->r3 = S32(0X8002 << 16);
            goto L_08000E94;
    }
    // 0x08000DE8: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000DEC: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    // 0x08000DF0: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000DF4: jalr        $v1
    // 0x08000DF8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_14;
    // 0x08000DF8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_14:
    // 0x08000DFC: beq         $v0, $zero, L_08000E28
    if (ctx->r2 == 0) {
        // 0x08000E00: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_08000E28;
    }
    // 0x08000E00: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000E04: jalr        $v1
    // 0x08000E08: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_15;
    // 0x08000E08: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_15:
    // 0x08000E0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1020) << 16);
    // 0x08000E18: jalr        $t9
    // 0x08000E1C: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08000E1C: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    after_16:
    // 0x08000E20: b           L_08001010
    // 0x08000E24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08001010;
    // 0x08000E24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000E28:
    // 0x08000E28: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000E2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000E30: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000E34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000E38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E3C: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000E40: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X18E4) << 16);
    // 0x08000E44: addiu       $a1, $a1, 0x18E4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X18E4));
    // 0x08000E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000E50: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000E54: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000E58: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x08000E5C: jalr        $t9
    // 0x08000E60: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000E60: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_17:
    // 0x08000E64: beq         $v0, $zero, L_08000FF8
    if (ctx->r2 == 0) {
        // 0x08000E68: addiu       $t5, $zero, 0x2B
        ctx->r13 = ADD32(0, 0X2B);
            goto L_08000FF8;
    }
    // 0x08000E68: addiu       $t5, $zero, 0x2B
    ctx->r13 = ADD32(0, 0X2B);
    // 0x08000E6C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000E70: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08000E74: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000E78: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000E7C: jalr        $t9
    // 0x08000E80: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08000E80: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_18:
    // 0x08000E84: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08000E88: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000E8C: b           L_08000FF8
    // 0x08000E90: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
        goto L_08000FF8;
    // 0x08000E90: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08000E94:
    // 0x08000E94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000E98: bne         $v0, $at, L_08000F48
    if (ctx->r2 != ctx->r1) {
        // 0x08000E9C: lui         $v1, 0x8002
        ctx->r3 = S32(0X8002 << 16);
            goto L_08000F48;
    }
    // 0x08000E9C: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000EA0: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    // 0x08000EA4: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000EA8: jalr        $v1
    // 0x08000EAC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_19;
    // 0x08000EAC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_19:
    // 0x08000EB0: beq         $v0, $zero, L_08000EDC
    if (ctx->r2 == 0) {
        // 0x08000EB4: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_08000EDC;
    }
    // 0x08000EB4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000EB8: jalr        $v1
    // 0x08000EBC: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_20;
    // 0x08000EBC: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_20:
    // 0x08000EC0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000EC4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000EC8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1020) << 16);
    // 0x08000ECC: jalr        $t9
    // 0x08000ED0: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08000ED0: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    after_21:
    // 0x08000ED4: b           L_08001010
    // 0x08000ED8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08001010;
    // 0x08000ED8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000EDC:
    // 0x08000EDC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x08000EE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000EE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000EE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000EEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EF0: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000EF4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X1A18) << 16);
    // 0x08000EF8: addiu       $a1, $a1, 0x1A18
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X1A18));
    // 0x08000EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F00: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000F04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000F08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000F0C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x08000F10: jalr        $t9
    // 0x08000F14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000F14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_22:
    // 0x08000F18: beq         $v0, $zero, L_08000FF8
    if (ctx->r2 == 0) {
        // 0x08000F1C: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_08000FF8;
    }
    // 0x08000F1C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x08000F20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000F24: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000F28: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000F2C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000F30: jalr        $t9
    // 0x08000F34: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000F34: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_23:
    // 0x08000F38: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08000F3C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000F40: b           L_08000FF8
    // 0x08000F44: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
        goto L_08000FF8;
    // 0x08000F44: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08000F48:
    // 0x08000F48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000F4C: bne         $v0, $at, L_08000FF8
    if (ctx->r2 != ctx->r1) {
        // 0x08000F50: lui         $v1, 0x8002
        ctx->r3 = S32(0X8002 << 16);
            goto L_08000FF8;
    }
    // 0x08000F50: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000F54: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    // 0x08000F58: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000F5C: jalr        $v1
    // 0x08000F60: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_24;
    // 0x08000F60: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_24:
    // 0x08000F64: beq         $v0, $zero, L_08000F90
    if (ctx->r2 == 0) {
        // 0x08000F68: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_08000F90;
    }
    // 0x08000F68: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000F6C: jalr        $v1
    // 0x08000F70: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_25;
    // 0x08000F70: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_25:
    // 0x08000F74: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F78: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F7C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1020) << 16);
    // 0x08000F80: jalr        $t9
    // 0x08000F84: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000F84: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    after_26:
    // 0x08000F88: b           L_08001010
    // 0x08000F8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08001010;
    // 0x08000F8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000F90:
    // 0x08000F90: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08000F94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000F98: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000F9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000FA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FA4: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08000FA8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X18E4) << 16);
    // 0x08000FAC: addiu       $a1, $a1, 0x18E4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X18E4));
    // 0x08000FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000FB4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000FB8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000FBC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000FC0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000FC4: jalr        $t9
    // 0x08000FC8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000FC8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_27:
    // 0x08000FCC: beq         $v0, $zero, L_08000FF8
    if (ctx->r2 == 0) {
        // 0x08000FD0: addiu       $t7, $zero, 0x2B
        ctx->r15 = ADD32(0, 0X2B);
            goto L_08000FF8;
    }
    // 0x08000FD0: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x08000FD4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FD8: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08000FDC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000FE0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000FE4: jalr        $t9
    // 0x08000FE8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000FE8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_28:
    // 0x08000FEC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08000FF0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000FF4: sw          $s0, 0xDC($v1)
    MEM_W(0XDC, ctx->r3) = ctx->r16;
L_08000FF8:
    // 0x08000FF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001000: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1020) << 16);
    // 0x08001004: jalr        $t9
    // 0x08001008: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001008: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    after_29:
    // 0x0800100C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08001010:
    // 0x08001010: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001014: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08001018: jr          $ra
    // 0x0800101C: nop

    TRACE_RETURN()
    return;
    // 0x0800101C: nop

;}
RECOMP_FUNC void func_08003E90_6F7370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003E94: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003E9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003EA0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003EA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003EA8: jalr        $t9
    // 0x08003EAC: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003EAC: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_0:
    // 0x08003EB0: beq         $v0, $zero, L_08003F08
    if (ctx->r2 == 0) {
        // 0x08003EB4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08003F08;
    }
    // 0x08003EB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08003EB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003EBC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003EC0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003EC4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003EC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08003ECC: jalr        $t9
    // 0x08003ED0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003ED0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08003ED4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003ED8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003EDC: jalr        $t9
    // 0x08003EE0: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003EE0: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_2:
    // 0x08003EE4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08003EE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003EEC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003EF0: lw          $t7, 0x60($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X60);
    // 0x08003EF4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3F18) << 16);
    // 0x08003EF8: addiu       $a0, $a0, 0x3F18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3F18));
    // 0x08003EFC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08003F00: jalr        $t9
    // 0x08003F04: sw          $t8, 0x60($t6)
    MEM_W(0X60, ctx->r14) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003F04: sw          $t8, 0x60($t6)
    MEM_W(0X60, ctx->r14) = ctx->r24;
    after_3:
L_08003F08:
    // 0x08003F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003F10: jr          $ra
    // 0x08003F14: nop

    TRACE_RETURN()
    return;
    // 0x08003F14: nop

;}
RECOMP_FUNC void func_080063C0_6F98A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080063C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080063C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7D04) << 16);
    // 0x080063C8: lwc1        $f0, 0x7D04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7D04));
    // 0x080063CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080063D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080063D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080063D8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080063DC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080063E0: addiu       $t6, $zero, 0x321
    ctx->r14 = ADD32(0, 0X321);
    // 0x080063E4: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x080063E8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080063EC: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080063F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x080063F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080063F8: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080063FC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08006400: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08006404: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006408: jalr        $t9
    // 0x0800640C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800640C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08006410: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7D08) << 16);
    // 0x08006414: lwc1        $f0, 0x7D08($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7D08));
    // 0x08006418: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0800641C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08006420: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08006424: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08006428: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    // 0x0800642C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08006430: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08006434: jalr        $t9
    // 0x08006438: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006438: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x0800643C: beq         $v0, $zero, L_0800646C
    if (ctx->r2 == 0) {
        // 0x08006440: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X6490) << 16);
            goto L_0800646C;
    }
    // 0x08006440: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6490) << 16);
    // 0x08006444: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x08006448: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800644C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006450: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X651C) << 16);
    // 0x08006454: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08006458: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x0800645C: jalr        $t9
    // 0x08006460: addiu       $a0, $a0, 0x651C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X651C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006460: addiu       $a0, $a0, 0x651C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X651C));
    after_2:
    // 0x08006464: b           L_08006480
    // 0x08006468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08006480;
    // 0x08006468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800646C:
    // 0x0800646C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006470: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006474: jalr        $t9
    // 0x08006478: addiu       $a0, $a0, 0x6490
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6490));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08006478: addiu       $a0, $a0, 0x6490
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6490));
    after_3:
    // 0x0800647C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08006480:
    // 0x08006480: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08006484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08006488: jr          $ra
    // 0x0800648C: nop

    TRACE_RETURN()
    return;
    // 0x0800648C: nop

;}
RECOMP_FUNC void func_080022FC_6F57DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080022FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002300: jr          $ra
    // 0x08002304: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002304: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08006228_6F9708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800622C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006230: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006234: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08006238: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800623C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08006240: beq         $t6, $zero, L_08006290
    if (ctx->r14 == 0) {
        // 0x08006244: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08006290;
    }
    // 0x08006244: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08006248: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x0800624C: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08006250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006254: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08006258: jalr        $t9
    // 0x0800625C: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800625C: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    after_0:
    // 0x08006260: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08006264: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x08006268: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0800626C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08006270: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08006274: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08006278: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x0800627C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08006280: lhu         $t1, 0xD8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XD8);
    // 0x08006284: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08006288: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x0800628C: sb          $t1, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r9;
L_08006290:
    // 0x08006290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006298: jr          $ra
    // 0x0800629C: nop

    TRACE_RETURN()
    return;
    // 0x0800629C: nop

;}
RECOMP_FUNC void func_08004F74_6F8454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004F74: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004F78: jr          $ra
    // 0x08004F7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004F7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004B14_6F7FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004B18: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004B20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004B24: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x08004B28: jalr        $t9
    // 0x08004B2C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004B2C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08004B30: bne         $v0, $zero, L_08004B48
    if (ctx->r2 != 0) {
        // 0x08004B34: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X4B58) << 16);
            goto L_08004B48;
    }
    // 0x08004B34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4B58) << 16);
    // 0x08004B38: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004B3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004B40: jalr        $t9
    // 0x08004B44: addiu       $a0, $a0, 0x4B58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4B58));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B44: addiu       $a0, $a0, 0x4B58
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4B58));
    after_1:
L_08004B48:
    // 0x08004B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004B50: jr          $ra
    // 0x08004B54: nop

    TRACE_RETURN()
    return;
    // 0x08004B54: nop

;}
RECOMP_FUNC void func_08001D6C_6F524C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08001D70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001D74: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08001D78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08001D7C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001D80: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001D84: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08001D88: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08001D8C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001D90: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001D94: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001D98: bne         $v0, $zero, L_08001DE8
    if (ctx->r2 != 0) {
        // 0x08001D9C: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08001DE8;
    }
    // 0x08001D9C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001DA0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DA4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001DA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001DAC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08001DB0: jalr        $t9
    // 0x08001DB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001DB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001DB8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BB0) << 16);
    // 0x08001DBC: lwc1        $f0, 0x7BB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BB0));
    // 0x08001DC0: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08001DC4: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x08001DC8: addiu       $t8, $t8, 0x7B58
    ctx->r24 = ADD32(ctx->r24, 0X7B58);
    // 0x08001DCC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001DD0: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08001DD4: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x08001DD8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001DDC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001DE0: b           L_08002140
    // 0x08001DE4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08001DE4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08001DE8:
    // 0x08001DE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001DEC: bne         $v0, $at, L_08001E40
    if (ctx->r2 != ctx->r1) {
        // 0x08001DF0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001E40;
    }
    // 0x08001DF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001DF4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DF8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001DFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001E00: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001E04: jalr        $t9
    // 0x08001E08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001E08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08001E0C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BB4) << 16);
    // 0x08001E10: lwc1        $f0, 0x7BB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BB4));
    // 0x08001E14: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08001E18: sb          $t1, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r9;
    // 0x08001E1C: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x08001E20: addiu       $t2, $t2, 0x7B58
    ctx->r10 = ADD32(ctx->r10, 0X7B58);
    // 0x08001E24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001E28: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x08001E2C: sw          $t3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r11;
    // 0x08001E30: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001E34: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001E38: b           L_08002140
    // 0x08001E3C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08001E3C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08001E40:
    // 0x08001E40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001E44: bne         $v0, $at, L_08001E98
    if (ctx->r2 != ctx->r1) {
        // 0x08001E48: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001E98;
    }
    // 0x08001E48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001E4C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001E50: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001E54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001E58: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001E5C: jalr        $t9
    // 0x08001E60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001E60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001E64: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BB8) << 16);
    // 0x08001E68: lwc1        $f0, 0x7BB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BB8));
    // 0x08001E6C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x08001E70: sb          $t4, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r12;
    // 0x08001E74: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x08001E78: addiu       $t5, $t5, 0x7B58
    ctx->r13 = ADD32(ctx->r13, 0X7B58);
    // 0x08001E7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001E80: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x08001E84: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x08001E88: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001E8C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001E90: b           L_08002140
    // 0x08001E94: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08001E94: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08001E98:
    // 0x08001E98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08001E9C: bne         $v0, $at, L_08001EF0
    if (ctx->r2 != ctx->r1) {
        // 0x08001EA0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001EF0;
    }
    // 0x08001EA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001EA4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001EA8: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001EAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08001EB0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001EB4: jalr        $t9
    // 0x08001EB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001EB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08001EBC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BBC) << 16);
    // 0x08001EC0: lwc1        $f0, 0x7BBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BBC));
    // 0x08001EC4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x08001EC8: sb          $t7, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r15;
    // 0x08001ECC: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x08001ED0: addiu       $t8, $t8, 0x7B58
    ctx->r24 = ADD32(ctx->r24, 0X7B58);
    // 0x08001ED4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001ED8: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08001EDC: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x08001EE0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001EE4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001EE8: b           L_08002140
    // 0x08001EEC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08001EEC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08001EF0:
    // 0x08001EF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08001EF4: bne         $v0, $at, L_08001F48
    if (ctx->r2 != ctx->r1) {
        // 0x08001EF8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001F48;
    }
    // 0x08001EF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001EFC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001F00: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001F04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08001F08: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001F0C: jalr        $t9
    // 0x08001F10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001F10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08001F14: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BC0) << 16);
    // 0x08001F18: lwc1        $f0, 0x7BC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BC0));
    // 0x08001F1C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x08001F20: sb          $t1, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r9;
    // 0x08001F24: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x08001F28: addiu       $t2, $t2, 0x7B58
    ctx->r10 = ADD32(ctx->r10, 0X7B58);
    // 0x08001F2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001F30: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x08001F34: sw          $t3, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r11;
    // 0x08001F38: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001F3C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001F40: b           L_08002140
    // 0x08001F44: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08001F44: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08001F48:
    // 0x08001F48: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08001F4C: bne         $v0, $at, L_08001FA0
    if (ctx->r2 != ctx->r1) {
        // 0x08001F50: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001FA0;
    }
    // 0x08001F50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001F54: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001F58: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001F5C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08001F60: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001F64: jalr        $t9
    // 0x08001F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08001F6C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BC4) << 16);
    // 0x08001F70: lwc1        $f0, 0x7BC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BC4));
    // 0x08001F74: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x08001F78: sb          $t4, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r12;
    // 0x08001F7C: lui         $t5, 0x8023
    ctx->r13 = S32(0X8023 << 16);
    // 0x08001F80: addiu       $t5, $t5, 0x7B58
    ctx->r13 = ADD32(ctx->r13, 0X7B58);
    // 0x08001F84: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001F88: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x08001F8C: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x08001F90: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001F94: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001F98: b           L_08002140
    // 0x08001F9C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08001F9C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08001FA0:
    // 0x08001FA0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08001FA4: bne         $v0, $at, L_08001FF8
    if (ctx->r2 != ctx->r1) {
        // 0x08001FA8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08001FF8;
    }
    // 0x08001FA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001FAC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001FB0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001FB4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08001FB8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001FBC: jalr        $t9
    // 0x08001FC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001FC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08001FC4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BC8) << 16);
    // 0x08001FC8: lwc1        $f0, 0x7BC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BC8));
    // 0x08001FCC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x08001FD0: sb          $t7, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r15;
    // 0x08001FD4: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x08001FD8: addiu       $t8, $t8, 0x7B58
    ctx->r24 = ADD32(ctx->r24, 0X7B58);
    // 0x08001FDC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08001FE0: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x08001FE4: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x08001FE8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08001FEC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08001FF0: b           L_08002140
    // 0x08001FF4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08001FF4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08001FF8:
    // 0x08001FF8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08001FFC: bne         $v0, $at, L_0800203C
    if (ctx->r2 != ctx->r1) {
        // 0x08002000: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_0800203C;
    }
    // 0x08002000: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002004: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002008: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800200C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08002010: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002014: jalr        $t9
    // 0x08002018: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002018: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x0800201C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BCC) << 16);
    // 0x08002020: lwc1        $f0, 0x7BCC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BCC));
    // 0x08002024: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x08002028: sb          $t1, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r9;
    // 0x0800202C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08002030: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08002034: b           L_08002140
    // 0x08002038: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08002038: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
L_0800203C:
    // 0x0800203C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x08002040: bne         $v0, $at, L_08002080
    if (ctx->r2 != ctx->r1) {
        // 0x08002044: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002080;
    }
    // 0x08002044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002048: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800204C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002050: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002054: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08002058: jalr        $t9
    // 0x0800205C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800205C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x08002060: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BD0) << 16);
    // 0x08002064: lwc1        $f0, 0x7BD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BD0));
    // 0x08002068: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x0800206C: sb          $t2, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r10;
    // 0x08002070: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08002074: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08002078: b           L_08002140
    // 0x0800207C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x0800207C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08002080:
    // 0x08002080: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x08002084: bne         $v0, $at, L_080020C0
    if (ctx->r2 != ctx->r1) {
        // 0x08002088: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080020C0;
    }
    // 0x08002088: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800208C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002090: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002098: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800209C: jalr        $t9
    // 0x080020A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080020A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x080020A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BD4) << 16);
    // 0x080020A8: lwc1        $f0, 0x7BD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BD4));
    // 0x080020AC: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x080020B0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080020B4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080020B8: b           L_08002140
    // 0x080020BC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x080020BC: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_080020C0:
    // 0x080020C0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x080020C4: bne         $v0, $at, L_08002104
    if (ctx->r2 != ctx->r1) {
        // 0x080020C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002104;
    }
    // 0x080020C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080020CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080020D0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080020D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x080020D8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080020DC: jalr        $t9
    // 0x080020E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080020E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x080020E4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BD8) << 16);
    // 0x080020E8: lwc1        $f0, 0x7BD8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BD8));
    // 0x080020EC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x080020F0: sb          $t3, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r11;
    // 0x080020F4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080020F8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080020FC: b           L_08002140
    // 0x08002100: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_08002140;
    // 0x08002100: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08002104:
    // 0x08002104: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x08002108: bne         $v0, $at, L_08002140
    if (ctx->r2 != ctx->r1) {
        // 0x0800210C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002140;
    }
    // 0x0800210C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002110: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002114: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002118: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0800211C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08002120: jalr        $t9
    // 0x08002124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08002124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x08002128: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BDC) << 16);
    // 0x0800212C: lwc1        $f0, 0x7BDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BDC));
    // 0x08002130: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08002134: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08002138: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800213C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_08002140:
    // 0x08002140: lbu         $t4, 0xD3($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XD3);
    // 0x08002144: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002148: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2190) << 16);
    // 0x0800214C: bne         $t4, $at, L_08002170
    if (ctx->r12 != ctx->r1) {
        // 0x08002150: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08002170;
    }
    // 0x08002150: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002154: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002158: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800215C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X22F0) << 16);
    // 0x08002160: jalr        $t9
    // 0x08002164: addiu       $a0, $a0, 0x22F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X22F0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08002164: addiu       $a0, $a0, 0x22F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X22F0));
    after_12:
    // 0x08002168: b           L_08002180
    // 0x0800216C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08002180;
    // 0x0800216C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002170:
    // 0x08002170: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002174: jalr        $t9
    // 0x08002178: addiu       $a0, $a0, 0x2190
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2190));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08002178: addiu       $a0, $a0, 0x2190
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2190));
    after_13:
    // 0x0800217C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002180:
    // 0x08002180: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x08002184: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08002188: jr          $ra
    // 0x0800218C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x0800218C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_080032C0_6F67A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080032C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080032C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080032C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080032CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080032D0: lbu         $t6, 0xD1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD1);
    // 0x080032D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080032D8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080032DC: bnel        $t6, $zero, L_08003330
    if (ctx->r14 != 0) {
        // 0x080032E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003330;
    }
    goto skip_0;
    // 0x080032E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080032E4: lbu         $t7, 0xD2($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XD2);
    // 0x080032E8: lbu         $t8, -0x3298($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3298);
    // 0x080032EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080032F0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080032F4: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x080032F8: beq         $at, $zero, L_0800332C
    if (ctx->r1 == 0) {
        // 0x080032FC: addiu       $a0, $zero, 0x224
        ctx->r4 = ADD32(0, 0X224);
            goto L_0800332C;
    }
    // 0x080032FC: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x08003300: jalr        $t9
    // 0x08003304: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003304: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08003308: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800330C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003310: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003314: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08003318: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X333C) << 16);
    // 0x0800331C: addiu       $a0, $a0, 0x333C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X333C));
    // 0x08003320: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08003324: jalr        $t9
    // 0x08003328: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003328: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_1:
L_0800332C:
    // 0x0800332C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003330:
    // 0x08003330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003334: jr          $ra
    // 0x08003338: nop

    TRACE_RETURN()
    return;
    // 0x08003338: nop

;}
RECOMP_FUNC void func_080051BC_6F869C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080051BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080051C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080051C4: lui         $s0, 0x8002
    ctx->r16 = S32(0X8002 << 16);
    // 0x080051C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080051CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080051D0: addiu       $s0, $s0, 0x40DC
    ctx->r16 = ADD32(ctx->r16, 0X40DC);
    // 0x080051D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080051D8: jalr        $s0
    // 0x080051DC: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_0;
    // 0x080051DC: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    after_0:
    // 0x080051E0: beql        $v0, $zero, L_080052D4
    if (ctx->r2 == 0) {
        // 0x080051E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080052D4;
    }
    goto skip_0;
    // 0x080051E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080051E8: jalr        $s0
    // 0x080051EC: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_1;
    // 0x080051EC: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    after_1:
    // 0x080051F0: beq         $v0, $zero, L_08005250
    if (ctx->r2 == 0) {
        // 0x080051F4: nop
    
            goto L_08005250;
    }
    // 0x080051F4: nop

    // 0x080051F8: jalr        $s0
    // 0x080051FC: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_2;
    // 0x080051FC: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    after_2:
    // 0x08005200: bne         $v0, $zero, L_08005250
    if (ctx->r2 != 0) {
        // 0x08005204: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08005250;
    }
    // 0x08005204: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005208: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800520C: jalr        $t9
    // 0x08005210: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005210: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_3:
    // 0x08005214: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x08005218: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800521C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08005220: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x08005224: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    // 0x08005228: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x0800522C: jalr        $t9
    // 0x08005230: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08005230: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    after_4:
    // 0x08005234: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005238: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800523C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X52E4) << 16);
    // 0x08005240: jalr        $t9
    // 0x08005244: addiu       $a0, $a0, 0x52E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X52E4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08005244: addiu       $a0, $a0, 0x52E4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X52E4));
    after_5:
    // 0x08005248: b           L_080052D4
    // 0x0800524C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080052D4;
    // 0x0800524C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08005250:
    // 0x08005250: jalr        $s0
    // 0x08005254: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_6;
    // 0x08005254: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
    after_6:
    // 0x08005258: beql        $v0, $zero, L_080052D4
    if (ctx->r2 == 0) {
        // 0x0800525C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080052D4;
    }
    goto skip_1;
    // 0x0800525C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08005260: jalr        $s0
    // 0x08005264: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    LOOKUP_FUNC(ctx->r16)(rdram, ctx);
        goto after_7;
    // 0x08005264: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    after_7:
    // 0x08005268: beq         $v0, $zero, L_080052D0
    if (ctx->r2 == 0) {
        // 0x0800526C: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_080052D0;
    }
    // 0x0800526C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x08005270: lhu         $t0, 0xDA($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0XDA);
    // 0x08005274: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005278: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x0800527C: beq         $t0, $zero, L_080052D0
    if (ctx->r8 == 0) {
        // 0x08005280: addiu       $a0, $zero, 0x15E
        ctx->r4 = ADD32(0, 0X15E);
            goto L_080052D0;
    }
    // 0x08005280: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    // 0x08005284: lw          $t1, 0xD4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XD4);
    // 0x08005288: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800528C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005290: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x08005294: jalr        $t9
    // 0x08005298: sw          $t2, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08005298: sw          $t2, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r10;
    after_8:
    // 0x0800529C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080052A0: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x080052A4: jalr        $t9
    // 0x080052A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080052A8: nop

    after_9:
    // 0x080052AC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x080052B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080052B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080052B8: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x080052BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x080052C0: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x080052C4: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x080052C8: jalr        $t9
    // 0x080052CC: sw          $t5, 0x60($t3)
    MEM_W(0X60, ctx->r11) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080052CC: sw          $t5, 0x60($t3)
    MEM_W(0X60, ctx->r11) = ctx->r13;
    after_10:
L_080052D0:
    // 0x080052D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080052D4:
    // 0x080052D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080052D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080052DC: jr          $ra
    // 0x080052E0: nop

    TRACE_RETURN()
    return;
    // 0x080052E0: nop

;}
RECOMP_FUNC void func_08000A60_6F3F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000A6C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000A70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A74: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000A78: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000A7C: bne         $v0, $zero, L_08000A8C
    if (ctx->r2 != 0) {
        // 0x08000A80: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000A8C;
    }
    // 0x08000A80: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000A84: jalr        $t9
    // 0x08000A88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A88: nop

    after_0:
L_08000A8C:
    // 0x08000A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A94: jr          $ra
    // 0x08000A98: nop

    TRACE_RETURN()
    return;
    // 0x08000A98: nop

;}
RECOMP_FUNC void func_08003C54_6F7134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003C5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003C60: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003C64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C68: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003C6C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003C70: beql        $t7, $zero, L_08003C84
    if (ctx->r15 == 0) {
        // 0x08003C74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003C84;
    }
    goto skip_0;
    // 0x08003C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003C78: jalr        $t9
    // 0x08003C7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C7C: nop

    after_0:
    // 0x08003C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003C84:
    // 0x08003C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003C88: jr          $ra
    // 0x08003C8C: nop

    TRACE_RETURN()
    return;
    // 0x08003C8C: nop

;}
RECOMP_FUNC void func_08006490_6F9970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08006494: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08006498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800649C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x080064A0: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x080064A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080064A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x080064AC: jalr        $v1
    // 0x080064B0: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x080064B0: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    after_0:
    // 0x080064B4: beq         $v0, $zero, L_0800650C
    if (ctx->r2 == 0) {
        // 0x080064B8: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_0800650C;
    }
    // 0x080064B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x080064BC: jalr        $v1
    // 0x080064C0: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x080064C0: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_1:
    // 0x080064C4: beq         $v0, $zero, L_0800650C
    if (ctx->r2 == 0) {
        // 0x080064C8: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_0800650C;
    }
    // 0x080064C8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080064CC: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080064D0: jalr        $t9
    // 0x080064D4: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080064D4: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    after_2:
    // 0x080064D8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x080064DC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080064E0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080064E4: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x080064E8: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x080064EC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x080064F0: jalr        $t9
    // 0x080064F4: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080064F4: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    after_3:
    // 0x080064F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080064FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006500: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X651C) << 16);
    // 0x08006504: jalr        $t9
    // 0x08006508: addiu       $a0, $a0, 0x651C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X651C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08006508: addiu       $a0, $a0, 0x651C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X651C));
    after_4:
L_0800650C:
    // 0x0800650C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08006514: jr          $ra
    // 0x08006518: nop

    TRACE_RETURN()
    return;
    // 0x08006518: nop

;}
RECOMP_FUNC void func_08006568_6F9A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800656C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006570: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08006574: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08006578: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800657C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08006580: beq         $t6, $zero, L_080065D0
    if (ctx->r14 == 0) {
        // 0x08006584: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_080065D0;
    }
    // 0x08006584: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08006588: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x0800658C: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08006590: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006594: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08006598: jalr        $t9
    // 0x0800659C: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800659C: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    after_0:
    // 0x080065A0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080065A4: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x080065A8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x080065AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080065B0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x080065B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x080065B8: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x080065BC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x080065C0: lhu         $t1, 0xD8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0XD8);
    // 0x080065C4: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x080065C8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x080065CC: sb          $t1, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r9;
L_080065D0:
    // 0x080065D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080065D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080065D8: jr          $ra
    // 0x080065DC: nop

    TRACE_RETURN()
    return;
    // 0x080065DC: nop

;}
RECOMP_FUNC void func_0800533C_6F881C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800533C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005344: lui         $t7, 0x8080
    ctx->r15 = S32(0X8080 << 16);
    // 0x08005348: addiu       $t6, $zero, 0x250
    ctx->r14 = ADD32(0, 0X250);
    // 0x0800534C: ori         $t7, $t7, 0x220
    ctx->r15 = ctx->r15 | 0X220;
    // 0x08005350: addiu       $t8, $zero, 0x4002
    ctx->r24 = ADD32(0, 0X4002);
    // 0x08005354: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005358: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800535C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08005360: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08005364: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08005368: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800536C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005370: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08005374: jalr        $t9
    // 0x08005378: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005378: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0800537C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08005380: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005384: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08005388: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x0800538C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08005390: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08005394: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08005398: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x0800539C: sb          $t0, 0x6C($a3)
    MEM_B(0X6C, ctx->r7) = ctx->r8;
    // 0x080053A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080053A4: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x080053A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080053AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080053B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080053B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X53E8) << 16);
    // 0x080053B8: addiu       $a0, $a0, 0x53E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X53E8));
    // 0x080053BC: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x080053C0: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x080053C4: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x080053C8: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x080053CC: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x080053D0: jalr        $t9
    // 0x080053D4: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080053D4: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_1:
    // 0x080053D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080053DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080053E0: jr          $ra
    // 0x080053E4: nop

    TRACE_RETURN()
    return;
    // 0x080053E4: nop

;}
