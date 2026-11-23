#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08001FE8_6B5288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001FEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001FF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001FF4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001FF8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FFC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002000: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002004: bne         $v0, $zero, L_08002018
    if (ctx->r2 != 0) {
        // 0x08002008: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002018;
    }
    // 0x08002008: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800200C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2028) << 16);
    // 0x08002010: jalr        $t9
    // 0x08002014: addiu       $a0, $a0, 0x2028
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2028));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002014: addiu       $a0, $a0, 0x2028
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2028));
    after_0:
L_08002018:
    // 0x08002018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800201C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002020: jr          $ra
    // 0x08002024: nop

    TRACE_RETURN()
    return;
    // 0x08002024: nop

;}
RECOMP_FUNC void func_080046B8_6B7958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080046B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080046BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080046C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080046C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080046C8: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x080046CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080046D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080046D4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080046D8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080046DC: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x080046E0: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x080046E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x080046E8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x080046EC: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    // 0x080046F0: jalr        $t9
    // 0x080046F4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080046F4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x080046F8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x080046FC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x08004700: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x08004704: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08004708: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800470C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004710: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08004714: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08004718: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800471C: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    // 0x08004720: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08004724: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x08004728: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x0800472C: jalr        $t9
    // 0x08004730: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004730: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    after_1:
    // 0x08004734: beq         $v0, $zero, L_08004758
    if (ctx->r2 == 0) {
        // 0x08004738: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X476C) << 16);
            goto L_08004758;
    }
    // 0x08004738: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X476C) << 16);
    // 0x0800473C: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x08004740: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004744: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004748: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x0800474C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08004750: jalr        $t9
    // 0x08004754: addiu       $a0, $a0, 0x476C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X476C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004754: addiu       $a0, $a0, 0x476C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X476C));
    after_2:
L_08004758:
    // 0x08004758: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800475C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004760: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08004764: jr          $ra
    // 0x08004768: nop

    TRACE_RETURN()
    return;
    // 0x08004768: nop

;}
RECOMP_FUNC void func_08005DEC_6B908C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005DF4: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08005DF8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08005DFC: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x08005E00: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005E04: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08005E08: bne         $v0, $zero, L_08005E2C
    if (ctx->r2 != 0) {
        // 0x08005E0C: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08005E2C;
    }
    // 0x08005E0C: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08005E10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08005E14: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005E18: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005E1C: swc1        $f4, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f4.u32l;
    // 0x08005E20: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X5E3C) << 16);
    // 0x08005E24: jalr        $t9
    // 0x08005E28: addiu       $a0, $a0, 0x5E3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5E3C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005E28: addiu       $a0, $a0, 0x5E3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5E3C));
    after_0:
L_08005E2C:
    // 0x08005E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005E34: jr          $ra
    // 0x08005E38: nop

    TRACE_RETURN()
    return;
    // 0x08005E38: nop

;}
RECOMP_FUNC void func_08002C4C_6B5EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002C50: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002C54: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002C5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002C60: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002C64: lbu         $t7, 0x184($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X184);
    // 0x08002C68: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08002C6C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08002C70: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x08002C74: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08002C78: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08002C7C: lbu         $t0, 0x184($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X184);
    // 0x08002C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002C84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08002C88: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x08002C8C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x08002C90: bne         $t2, $zero, L_08002CC8
    if (ctx->r10 != 0) {
        // 0x08002C94: sb          $t1, 0x184($v0)
        MEM_B(0X184, ctx->r2) = ctx->r9;
            goto L_08002CC8;
    }
    // 0x08002C94: sb          $t1, 0x184($v0)
    MEM_B(0X184, ctx->r2) = ctx->r9;
    // 0x08002C98: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002C9C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002CA0: jalr        $t9
    // 0x08002CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x08002CA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002CAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002CB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2CD8) << 16);
    // 0x08002CB4: jalr        $t9
    // 0x08002CB8: addiu       $a0, $a0, 0x2CD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2CD8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002CB8: addiu       $a0, $a0, 0x2CD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2CD8));
    after_1:
    // 0x08002CBC: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x08002CC0: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x08002CC4: sh          $t3, 0x8A($t4)
    MEM_H(0X8A, ctx->r12) = ctx->r11;
L_08002CC8:
    // 0x08002CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002CD0: jr          $ra
    // 0x08002CD4: nop

    TRACE_RETURN()
    return;
    // 0x08002CD4: nop

;}
RECOMP_FUNC void func_080009C4_6B3C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080009C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080009CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080009D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080009D4: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x080009D8: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x080009DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009E0: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x080009E4: beq         $t6, $zero, L_08000A20
    if (ctx->r14 == 0) {
        // 0x080009E8: lw          $t0, 0x18($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X18);
            goto L_08000A20;
    }
    // 0x080009E8: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x080009EC: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x080009F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009F4: addiu       $t9, $t9, -0x2350
    ctx->r25 = ADD32(ctx->r25, -0X2350);
    // 0x080009F8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x080009FC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x08000A00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000A04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A08: jalr        $t9
    // 0x08000A0C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A0C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x08000A10: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000A14: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x08000A18: b           L_08000AA8
    // 0x08000A1C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
        goto L_08000AA8;
    // 0x08000A1C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_08000A20:
    // 0x08000A20: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x08000A24: beq         $t7, $zero, L_08000A78
    if (ctx->r15 == 0) {
        // 0x08000A28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000A78;
    }
    // 0x08000A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A2C: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x08000A30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A34: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000A38: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08000A3C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x08000A40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A48: bgez        $a1, L_08000A58
    if (SIGNED(ctx->r5) >= 0) {
        // 0x08000A4C: sra         $t8, $a1, 2
        ctx->r24 = S32(SIGNED(ctx->r5) >> 2);
            goto L_08000A58;
    }
    // 0x08000A4C: sra         $t8, $a1, 2
    ctx->r24 = S32(SIGNED(ctx->r5) >> 2);
    // 0x08000A50: addiu       $at, $a1, 0x3
    ctx->r1 = ADD32(ctx->r5, 0X3);
    // 0x08000A54: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_08000A58:
    // 0x08000A58: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x08000A5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A60: jalr        $t9
    // 0x08000A64: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A64: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08000A68: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000A6C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x08000A70: b           L_08000AA8
    // 0x08000A74: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
        goto L_08000AA8;
    // 0x08000A74: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_08000A78:
    // 0x08000A78: lbu         $a1, 0xEC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XEC);
    // 0x08000A7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A80: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000A84: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08000A88: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x08000A8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000A90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A94: jalr        $t9
    // 0x08000A98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x08000A9C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x08000AA0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x08000AA4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
L_08000AA8:
    // 0x08000AA8: lw          $t1, 0xE8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XE8);
    // 0x08000AAC: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x08000AB0: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x08000AB4: sw          $t2, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r10;
    // 0x08000AB8: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x08000ABC: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x08000AC0: beql        $t3, $zero, L_08000AD8
    if (ctx->r11 == 0) {
        // 0x08000AC4: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_08000AD8;
    }
    goto skip_0;
    // 0x08000AC4: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    skip_0:
    // 0x08000AC8: lhu         $t4, 0x16($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X16);
    // 0x08000ACC: sh          $t4, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r12;
    // 0x08000AD0: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x08000AD4: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
L_08000AD8:
    // 0x08000AD8: beql        $t5, $zero, L_08000AF8
    if (ctx->r13 == 0) {
        // 0x08000ADC: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_08000AF8;
    }
    goto skip_1;
    // 0x08000ADC: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    skip_1:
    // 0x08000AE0: lhu         $t6, 0x16($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X16);
    // 0x08000AE4: addiu       $t7, $t6, -0x100
    ctx->r15 = ADD32(ctx->r14, -0X100);
    // 0x08000AE8: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08000AEC: sh          $t8, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r24;
    // 0x08000AF0: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x08000AF4: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
L_08000AF8:
    // 0x08000AF8: beq         $t9, $zero, L_08000B14
    if (ctx->r25 == 0) {
        // 0x08000AFC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08000B14;
    }
    // 0x08000AFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000B00: lhu         $t1, 0x16($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X16);
    // 0x08000B04: addiu       $t2, $t1, 0x100
    ctx->r10 = ADD32(ctx->r9, 0X100);
    // 0x08000B08: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08000B0C: sh          $t3, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r11;
    // 0x08000B10: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
L_08000B14:
    // 0x08000B14: andi        $t4, $v0, 0x8
    ctx->r12 = ctx->r2 & 0X8;
    // 0x08000B18: beq         $t4, $zero, L_08000B30
    if (ctx->r12 == 0) {
        // 0x08000B1C: addiu       $t3, $zero, 0x4
        ctx->r11 = ADD32(0, 0X4);
            goto L_08000B30;
    }
    // 0x08000B1C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x08000B20: lhu         $t5, 0x16($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X16);
    // 0x08000B24: addiu       $t6, $t5, 0x200
    ctx->r14 = ADD32(ctx->r13, 0X200);
    // 0x08000B28: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08000B2C: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
L_08000B30:
    // 0x08000B30: lbu         $t8, 0xEC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XEC);
    // 0x08000B34: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x08000B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B3C: addiu       $t9, $t8, -0x2
    ctx->r25 = ADD32(ctx->r24, -0X2);
    // 0x08000B40: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x08000B44: sb          $t9, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r25;
    // 0x08000B48: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x08000B4C: beq         $at, $zero, L_08000B5C
    if (ctx->r1 == 0) {
        // 0x08000B50: sw          $t1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r9;
            goto L_08000B5C;
    }
    // 0x08000B50: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x08000B54: sb          $t3, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r11;
    // 0x08000B58: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_08000B5C:
    // 0x08000B5C: lw          $v0, 0xE8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE8);
    // 0x08000B60: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08000B64: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08000B68: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x08000B6C: beq         $t5, $zero, L_08000B8C
    if (ctx->r13 == 0) {
        // 0x08000B70: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_08000B8C;
    }
    // 0x08000B70: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x08000B74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B78: addiu       $t9, $t9, -0x2350
    ctx->r25 = ADD32(ctx->r25, -0X2350);
    // 0x08000B7C: jalr        $t9
    // 0x08000B80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000B80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08000B84: b           L_08000BE8
    // 0x08000B88: lbu         $t8, 0xEC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XEC);
        goto L_08000BE8;
    // 0x08000B88: lbu         $t8, 0xEC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XEC);
L_08000B8C:
    // 0x08000B8C: beq         $t6, $zero, L_08000BC8
    if (ctx->r14 == 0) {
        // 0x08000B90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08000BC8;
    }
    // 0x08000B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000B94: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08000B98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000B9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BA0: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x08000BA4: mflo        $a1
    ctx->r5 = lo;
    // 0x08000BA8: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08000BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000BB4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08000BB8: jalr        $t9
    // 0x08000BBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000BBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08000BC0: b           L_08000BE8
    // 0x08000BC4: lbu         $t8, 0xEC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XEC);
        goto L_08000BE8;
    // 0x08000BC4: lbu         $t8, 0xEC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XEC);
L_08000BC8:
    // 0x08000BC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BCC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000BD0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x08000BD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000BD8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08000BDC: jalr        $t9
    // 0x08000BE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000BE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x08000BE4: lbu         $t8, 0xEC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XEC);
L_08000BE8:
    // 0x08000BE8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08000BEC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BF0: bne         $t8, $at, L_08000C00
    if (ctx->r24 != ctx->r1) {
        // 0x08000BF4: addiu       $t9, $t9, 0x4ED4
        ctx->r25 = ADD32(ctx->r25, 0X4ED4);
            goto L_08000C00;
    }
    // 0x08000BF4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000BF8: jalr        $t9
    // 0x08000BFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000BFC: nop

    after_6:
L_08000C00:
    // 0x08000C00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000C08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000C0C: jr          $ra
    // 0x08000C10: nop

    TRACE_RETURN()
    return;
    // 0x08000C10: nop

;}
RECOMP_FUNC void func_080066F4_6B9994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080066F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080066F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080066FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08006700: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08006704: lw          $t0, 0xDC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XDC);
    // 0x08006708: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA854) << 16);
    // 0x0800670C: addiu       $t9, $t9, -0x57AC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA854));
    // 0x08006710: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x08006714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006718: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800671C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08006720: jalr        $t9
    // 0x08006724: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006724: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x08006728: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x0800672C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x08006730: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08006734: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08006738: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x0800673C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08006740: sh          $t8, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r24;
    // 0x08006744: jalr        $v0
    // 0x08006748: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08006748: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x0800674C: beq         $v0, $zero, L_08006760
    if (ctx->r2 == 0) {
        // 0x08006750: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_08006760;
    }
    // 0x08006750: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08006754: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08006758: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x0800675C: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08006760:
    // 0x08006760: lw          $t4, 0x68($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X68);
    // 0x08006764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800676C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x08006770: beq         $t5, $zero, L_08006830
    if (ctx->r13 == 0) {
        // 0x08006774: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08006830;
    }
    // 0x08006774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006778: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x0800677C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006780: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08006784: bgez        $v1, L_08006798
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006788: andi        $t6, $v1, 0x3
        ctx->r14 = ctx->r3 & 0X3;
            goto L_08006798;
    }
    // 0x08006788: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x0800678C: beq         $t6, $zero, L_08006798
    if (ctx->r14 == 0) {
        // 0x08006790: nop
    
            goto L_08006798;
    }
    // 0x08006790: nop

    // 0x08006794: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_08006798:
    // 0x08006798: bne         $t6, $zero, L_080067E0
    if (ctx->r14 != 0) {
        // 0x0800679C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_080067E0;
    }
    // 0x0800679C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x080067A0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x080067A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x080067A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080067AC: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x080067B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080067B4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x080067B8: jalr        $t9
    // 0x080067BC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080067BC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_2:
    // 0x080067C0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x080067C4: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x080067C8: bgez        $v1, L_080067DC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x080067CC: andi        $t7, $v1, 0x3
        ctx->r15 = ctx->r3 & 0X3;
            goto L_080067DC;
    }
    // 0x080067CC: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x080067D0: beq         $t7, $zero, L_080067DC
    if (ctx->r15 == 0) {
        // 0x080067D4: nop
    
            goto L_080067DC;
    }
    // 0x080067D4: nop

    // 0x080067D8: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_080067DC:
    // 0x080067DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_080067E0:
    // 0x080067E0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080067E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080067E8: bne         $v1, $at, L_08006810
    if (ctx->r3 != ctx->r1) {
        // 0x080067EC: addiu       $v0, $v0, -0x20A0
        ctx->r2 = ADD32(ctx->r2, -0X20A0);
            goto L_08006810;
    }
    // 0x080067EC: addiu       $v0, $v0, -0x20A0
    ctx->r2 = ADD32(ctx->r2, -0X20A0);
    // 0x080067F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080067F4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080067F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080067FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006800: jalr        $v0
    // 0x08006804: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08006804: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08006808: b           L_08006848
    // 0x0800680C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006848;
    // 0x0800680C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006810:
    // 0x08006810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800681C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006820: jalr        $v0
    // 0x08006824: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08006824: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08006828: b           L_08006848
    // 0x0800682C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006848;
    // 0x0800682C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006830:
    // 0x08006830: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006834: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08006838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800683C: jalr        $t9
    // 0x08006840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08006840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x08006844: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006848:
    // 0x08006848: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x0800684C: jalr        $t9
    // 0x08006850: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08006850: nop

    after_6:
    // 0x08006854: beq         $v0, $zero, L_080068A4
    if (ctx->r2 == 0) {
        // 0x08006858: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080068A4;
    }
    // 0x08006858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800685C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006860: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08006864: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08006868: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x0800686C: jalr        $t9
    // 0x08006870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08006870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08006874: beq         $v0, $zero, L_08006894
    if (ctx->r2 == 0) {
        // 0x08006878: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X73D0) << 16);
            goto L_08006894;
    }
    // 0x08006878: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X73D0) << 16);
    // 0x0800687C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08006880: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08006884: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08006888: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x0800688C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08006890: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_08006894:
    // 0x08006894: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006898: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800689C: jalr        $t9
    // 0x080068A0: addiu       $a0, $a0, 0x73D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080068A0: addiu       $a0, $a0, 0x73D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X73D0));
    after_8:
L_080068A4:
    // 0x080068A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080068A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080068AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x080068B0: jr          $ra
    // 0x080068B4: nop

    TRACE_RETURN()
    return;
    // 0x080068B4: nop

;}
RECOMP_FUNC void func_08008560_6BB800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08008564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008568: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800856C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08008570: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08008574: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08008578: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x0800857C: bne         $t6, $at, L_08008598
    if (ctx->r14 != ctx->r1) {
        // 0x08008580: addiu       $a0, $zero, 0x3D
        ctx->r4 = ADD32(0, 0X3D);
            goto L_08008598;
    }
    // 0x08008580: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x08008584: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08008588: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800858C: jalr        $t9
    // 0x08008590: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008590: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08008594: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08008598:
    // 0x08008598: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x0800859C: addiu       $a0, $a0, -0x39F4
    ctx->r4 = ADD32(ctx->r4, -0X39F4);
    // 0x080085A0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x080085A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080085A8: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x080085AC: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x080085B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080085B4: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x080085B8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x080085BC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x080085C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080085C4: swc1        $f6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f6.u32l;
    // 0x080085C8: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x080085CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080085D0: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080085D4: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x080085D8: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x080085DC: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    // 0x080085E0: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080085E4: bne         $v0, $zero, L_08008614
    if (ctx->r2 != 0) {
        // 0x080085E8: sh          $t1, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r9;
            goto L_08008614;
    }
    // 0x080085E8: sh          $t1, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r9;
    // 0x080085EC: jalr        $t9
    // 0x080085F0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080085F0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x080085F4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080085F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080085FC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x08008600: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008604: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8624) << 16);
    // 0x08008608: addiu       $a0, $a0, -0x79DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8624));
    // 0x0800860C: jalr        $t9
    // 0x08008610: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08008610: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    after_2:
L_08008614:
    // 0x08008614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08008618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800861C: jr          $ra
    // 0x08008620: nop

    TRACE_RETURN()
    return;
    // 0x08008620: nop

;}
RECOMP_FUNC void func_080049A4_6B7C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080049A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080049A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080049AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080049B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080049B4: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x080049B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080049BC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080049C0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x080049C4: beq         $t6, $zero, L_08004AD8
    if (ctx->r14 == 0) {
        // 0x080049C8: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_08004AD8;
    }
    // 0x080049C8: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x080049CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080049D0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080049D4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x080049D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080049DC: jalr        $t9
    // 0x080049E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080049E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x080049E4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x080049E8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080049EC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080049F0: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x080049F4: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080049F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080049FC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x08004A00: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08004A04: addiu       $a3, $zero, -0x50
    ctx->r7 = ADD32(0, -0X50);
    // 0x08004A08: jalr        $t9
    // 0x08004A0C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004A0C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    after_1:
    // 0x08004A10: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A14: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004A1C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08004A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004A24: jalr        $t9
    // 0x08004A28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004A28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08004A2C: lw          $t3, 0x64($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X64);
    // 0x08004A30: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(20, 0X5B1C) << 16);
    // 0x08004A34: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x08004A38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A3C: addiu       $t0, $t0, 0x5B1C
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(20, 0X5B1C));
    // 0x08004A40: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x08004A44: ori         $t2, $t2, 0xEE1
    ctx->r10 = ctx->r10 | 0XEE1;
    // 0x08004A48: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08004A4C: ori         $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 | 0X8000;
    // 0x08004A50: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
    // 0x08004A54: sb          $t1, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r9;
    // 0x08004A58: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08004A5C: sw          $t4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r12;
    // 0x08004A60: jalr        $t9
    // 0x08004A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08004A68: lw          $t5, 0xE8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XE8);
    // 0x08004A6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004A70: addiu       $t9, $t9, -0x6D64
    ctx->r25 = ADD32(ctx->r25, -0X6D64);
    // 0x08004A74: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x08004A78: beql        $t6, $zero, L_08004A8C
    if (ctx->r14 == 0) {
        // 0x08004A7C: addiu       $t7, $zero, 0xC8
        ctx->r15 = ADD32(0, 0XC8);
            goto L_08004A8C;
    }
    goto skip_0;
    // 0x08004A7C: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    skip_0:
    // 0x08004A80: jalr        $t9
    // 0x08004A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x08004A88: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
L_08004A8C:
    // 0x08004A8C: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08004A90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08004A94: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08004A98: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08004A9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004AA0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08004AA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004AA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004AAC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08004AB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004AB4: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08004AB8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08004ABC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08004AC0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08004AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004AC8: jalr        $t9
    // 0x08004ACC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004ACC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x08004AD0: b           L_08004E34
    // 0x08004AD4: nop

        goto L_08004E34;
    // 0x08004AD4: nop

L_08004AD8:
    // 0x08004AD8: beq         $t8, $zero, L_08004BD8
    if (ctx->r24 == 0) {
        // 0x08004ADC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08004BD8;
    }
    // 0x08004ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004AE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004AE4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004AE8: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x08004AEC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x08004AF0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08004AF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004AF8: jalr        $t9
    // 0x08004AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08004AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08004B00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x08004B04: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004B08: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B0C: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x08004B10: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08004B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004B18: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x08004B1C: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08004B20: addiu       $a3, $zero, -0x50
    ctx->r7 = ADD32(0, -0X50);
    // 0x08004B24: jalr        $t9
    // 0x08004B28: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004B28: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    after_7:
    // 0x08004B2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B30: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004B38: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08004B3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004B40: jalr        $t9
    // 0x08004B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08004B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x08004B48: lw          $t4, 0x64($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X64);
    // 0x08004B4C: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x08004B50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B54: ori         $t3, $t3, 0xEE1
    ctx->r11 = ctx->r11 | 0XEE1;
    // 0x08004B58: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08004B5C: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x08004B60: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x08004B64: sw          $t5, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r13;
    // 0x08004B68: jalr        $t9
    // 0x08004B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08004B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x08004B70: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x08004B74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B78: addiu       $t9, $t9, -0x6D64
    ctx->r25 = ADD32(ctx->r25, -0X6D64);
    // 0x08004B7C: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x08004B80: beq         $t7, $zero, L_08004B90
    if (ctx->r15 == 0) {
        // 0x08004B84: nop
    
            goto L_08004B90;
    }
    // 0x08004B84: nop

    // 0x08004B88: jalr        $t9
    // 0x08004B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08004B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_08004B90:
    // 0x08004B90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08004B94: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08004B98: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08004B9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08004BA0: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08004BA4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08004BA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08004BAC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08004BB0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004BB4: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08004BB8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08004BBC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08004BC0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08004BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004BC8: jalr        $t9
    // 0x08004BCC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08004BCC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x08004BD0: b           L_08004E34
    // 0x08004BD4: nop

        goto L_08004E34;
    // 0x08004BD4: nop

L_08004BD8:
    // 0x08004BD8: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x08004BDC: beq         $t8, $zero, L_08004CDC
    if (ctx->r24 == 0) {
        // 0x08004BE0: andi        $t7, $v0, 0x8
        ctx->r15 = ctx->r2 & 0X8;
            goto L_08004CDC;
    }
    // 0x08004BE0: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x08004BE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004BE8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004BF0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08004BF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004BF8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x08004BFC: jalr        $t9
    // 0x08004C00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08004C00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x08004C04: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x08004C08: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004C0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C10: or          $t0, $v0, $at
    ctx->r8 = ctx->r2 | ctx->r1;
    // 0x08004C14: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08004C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004C1C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x08004C20: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08004C24: addiu       $a3, $zero, -0x50
    ctx->r7 = ADD32(0, -0X50);
    // 0x08004C28: jalr        $t9
    // 0x08004C2C: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08004C2C: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
    after_13:
    // 0x08004C30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C34: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004C3C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08004C40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004C44: jalr        $t9
    // 0x08004C48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08004C48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x08004C4C: lw          $t3, 0x64($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X64);
    // 0x08004C50: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x08004C54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C58: ori         $t2, $t2, 0xEE1
    ctx->r10 = ctx->r10 | 0XEE1;
    // 0x08004C5C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08004C60: ori         $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 | 0X8000;
    // 0x08004C64: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08004C68: sw          $t4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r12;
    // 0x08004C6C: jalr        $t9
    // 0x08004C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08004C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x08004C74: lw          $t5, 0xE8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XE8);
    // 0x08004C78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004C7C: addiu       $t9, $t9, -0x6D64
    ctx->r25 = ADD32(ctx->r25, -0X6D64);
    // 0x08004C80: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x08004C84: beq         $t6, $zero, L_08004C94
    if (ctx->r14 == 0) {
        // 0x08004C88: nop
    
            goto L_08004C94;
    }
    // 0x08004C88: nop

    // 0x08004C8C: jalr        $t9
    // 0x08004C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08004C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_08004C94:
    // 0x08004C94: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08004C98: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08004C9C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08004CA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08004CA4: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08004CA8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08004CAC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08004CB0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08004CB4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004CB8: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08004CBC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08004CC0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08004CC4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08004CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004CCC: jalr        $t9
    // 0x08004CD0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08004CD0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x08004CD4: b           L_08004E34
    // 0x08004CD8: nop

        goto L_08004E34;
    // 0x08004CD8: nop

L_08004CDC:
    // 0x08004CDC: beq         $t7, $zero, L_08004DD8
    if (ctx->r15 == 0) {
        // 0x08004CE0: andi        $t5, $v0, 0x10
        ctx->r13 = ctx->r2 & 0X10;
            goto L_08004DD8;
    }
    // 0x08004CE0: andi        $t5, $v0, 0x10
    ctx->r13 = ctx->r2 & 0X10;
    // 0x08004CE4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004CE8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004CF0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08004CF4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x08004CF8: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x08004CFC: jalr        $t9
    // 0x08004D00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08004D00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x08004D04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08004D08: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004D0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004D10: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x08004D14: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08004D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004D1C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x08004D20: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x08004D24: addiu       $a3, $zero, -0x50
    ctx->r7 = ADD32(0, -0X50);
    // 0x08004D28: jalr        $t9
    // 0x08004D2C: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08004D2C: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    after_19:
    // 0x08004D30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004D34: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004D3C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08004D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004D44: jalr        $t9
    // 0x08004D48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08004D48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x08004D4C: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x08004D50: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08004D54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004D58: lui         $t1, 0xA0
    ctx->r9 = S32(0XA0 << 16);
    // 0x08004D5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004D60: ori         $t1, $t1, 0xEE1
    ctx->r9 = ctx->r9 | 0XEE1;
    // 0x08004D64: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x08004D68: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08004D6C: ori         $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 | 0X8000;
    // 0x08004D70: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08004D74: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x08004D78: sb          $t4, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r12;
    // 0x08004D7C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x08004D80: jalr        $t9
    // 0x08004D84: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x08004D84: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    after_21:
    // 0x08004D88: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08004D8C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08004D90: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08004D94: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08004D98: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08004D9C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3C0) << 16);
    // 0x08004DA0: ldc1        $f4, -0x3C40($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3C0));
    // 0x08004DA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004DA8: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08004DAC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08004DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004DB4: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x08004DB8: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    // 0x08004DBC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x08004DC0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08004DC4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08004DC8: jalr        $t9
    // 0x08004DCC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08004DCC: nop

    after_22:
    // 0x08004DD0: b           L_08004E34
    // 0x08004DD4: nop

        goto L_08004E34;
    // 0x08004DD4: nop

L_08004DD8:
    // 0x08004DD8: beq         $t5, $zero, L_08004E34
    if (ctx->r13 == 0) {
        // 0x08004DDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08004E34;
    }
    // 0x08004DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004DE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004DE4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08004DE8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08004DEC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x08004DF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08004DF4: jalr        $t9
    // 0x08004DF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08004DF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x08004DFC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x08004E00: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08004E04: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08004E08: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08004E0C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004E10: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08004E14: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08004E18: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x08004E1C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08004E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004E24: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08004E28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08004E2C: jalr        $t9
    // 0x08004E30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08004E30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_24:
L_08004E34:
    // 0x08004E34: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004E38: addiu       $t0, $zero, 0xCB
    ctx->r8 = ADD32(0, 0XCB);
    // 0x08004E3C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08004E40: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x08004E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004E48: jalr        $t9
    // 0x08004E4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x08004E4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_25:
    // 0x08004E50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004E54: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08004E58: jalr        $t9
    // 0x08004E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08004E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x08004E60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004E64: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08004E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004E6C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08004E70: jalr        $t9
    // 0x08004E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08004E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x08004E78: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3C8) << 16);
    // 0x08004E7C: lwc1        $f0, -0x3C38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3C8));
    // 0x08004E80: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08004E84: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x08004E88: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08004E8C: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x08004E90: sb          $t2, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r10;
    // 0x08004E94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004E98: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x08004E9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004EA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X4ED0) << 16);
    // 0x08004EA4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08004EA8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08004EAC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08004EB0: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08004EB4: jalr        $t9
    // 0x08004EB8: addiu       $a0, $a0, 0x4ED0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X4ED0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08004EB8: addiu       $a0, $a0, 0x4ED0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X4ED0));
    after_28:
    // 0x08004EBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08004EC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08004EC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08004EC8: jr          $ra
    // 0x08004ECC: nop

    TRACE_RETURN()
    return;
    // 0x08004ECC: nop

;}
RECOMP_FUNC void func_08000388_6B3628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000388: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800038C: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x08000390: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000394: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000398: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800039C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080003A0: beq         $t6, $zero, L_08000558
    if (ctx->r14 == 0) {
        // 0x080003A4: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_08000558;
    }
    // 0x080003A4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x080003A8: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080003AC: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x080003B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x080003B4: jalr        $v0
    // 0x080003B8: addiu       $a0, $zero, 0x1C1
    ctx->r4 = ADD32(0, 0X1C1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080003B8: addiu       $a0, $zero, 0x1C1
    ctx->r4 = ADD32(0, 0X1C1);
    after_0:
    // 0x080003BC: beq         $v0, $zero, L_080003FC
    if (ctx->r2 == 0) {
        // 0x080003C0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_080003FC;
    }
    // 0x080003C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080003C4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080003C8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x080003CC: lui         $t8, 0xD
    ctx->r24 = S32(0XD << 16);
    // 0x080003D0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080003D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x080003D8: lw          $t8, -0x718($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X718);
    // 0x080003DC: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x080003E0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x080003E4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080003E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080003EC: jalr        $t9
    // 0x080003F0: sh          $zero, 0x22($t8)
    MEM_H(0X22, ctx->r24) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003F0: sh          $zero, 0x22($t8)
    MEM_H(0X22, ctx->r24) = 0;
    after_1:
    // 0x080003F4: b           L_08000430
    // 0x080003F8: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
        goto L_08000430;
    // 0x080003F8: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
L_080003FC:
    // 0x080003FC: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08000400: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08000404: lui         $t2, 0xD
    ctx->r10 = S32(0XD << 16);
    // 0x08000408: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800040C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x08000410: lw          $t2, -0x718($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X718);
    // 0x08000414: addiu       $t9, $t9, -0x5C04
    ctx->r25 = ADD32(ctx->r25, -0X5C04);
    // 0x08000418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x0800041C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000420: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x08000424: jalr        $t9
    // 0x08000428: sh          $t0, 0x22($t2)
    MEM_H(0X22, ctx->r10) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000428: sh          $t0, 0x22($t2)
    MEM_H(0X22, ctx->r10) = ctx->r8;
    after_2:
    // 0x0800042C: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
L_08000430:
    // 0x08000430: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000434: addiu       $t9, $t9, -0x7184
    ctx->r25 = ADD32(ctx->r25, -0X7184);
    // 0x08000438: beq         $v1, $zero, L_08000468
    if (ctx->r3 == 0) {
        // 0x0800043C: nop
    
            goto L_08000468;
    }
    // 0x0800043C: nop

    // 0x08000440: lbu         $t3, 0x4C($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4C);
    // 0x08000444: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x08000448: bne         $t3, $at, L_08000468
    if (ctx->r11 != ctx->r1) {
        // 0x0800044C: nop
    
            goto L_08000468;
    }
    // 0x0800044C: nop

    // 0x08000450: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    // 0x08000454: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x08000458: andi        $t4, $v0, 0x80
    ctx->r12 = ctx->r2 & 0X80;
    // 0x0800045C: beq         $t4, $zero, L_08000468
    if (ctx->r12 == 0) {
        // 0x08000460: and         $t5, $v0, $at
        ctx->r13 = ctx->r2 & ctx->r1;
            goto L_08000468;
    }
    // 0x08000460: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x08000464: sw          $t5, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r13;
L_08000468:
    // 0x08000468: beq         $v1, $zero, L_08000498
    if (ctx->r3 == 0) {
        // 0x0800046C: nop
    
            goto L_08000498;
    }
    // 0x0800046C: nop

    // 0x08000470: lbu         $t6, 0x4C($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4C);
    // 0x08000474: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x08000478: bne         $t6, $at, L_08000498
    if (ctx->r14 != ctx->r1) {
        // 0x0800047C: nop
    
            goto L_08000498;
    }
    // 0x0800047C: nop

    // 0x08000480: lw          $v0, 0x68($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X68);
    // 0x08000484: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x08000488: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x0800048C: beq         $t7, $zero, L_08000498
    if (ctx->r15 == 0) {
        // 0x08000490: and         $t8, $v0, $at
        ctx->r24 = ctx->r2 & ctx->r1;
            goto L_08000498;
    }
    // 0x08000490: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x08000494: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
L_08000498:
    // 0x08000498: jalr        $t9
    // 0x0800049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x080004A0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080004A4: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080004A8: lbu         $v0, 0x139($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X139);
    // 0x080004AC: beq         $v0, $zero, L_080004B8
    if (ctx->r2 == 0) {
        // 0x080004B0: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_080004B8;
    }
    // 0x080004B0: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x080004B4: sb          $t1, 0x139($v1)
    MEM_B(0X139, ctx->r3) = ctx->r9;
L_080004B8:
    // 0x080004B8: lw          $t0, 0x68($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X68);
    // 0x080004BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080004C0: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x080004C4: beq         $t2, $zero, L_08000540
    if (ctx->r10 == 0) {
        // 0x080004C8: nop
    
            goto L_08000540;
    }
    // 0x080004C8: nop

    // 0x080004CC: jalr        $t9
    // 0x080004D0: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080004D0: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    after_4:
    // 0x080004D4: beq         $v0, $zero, L_080004E8
    if (ctx->r2 == 0) {
        // 0x080004D8: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_080004E8;
    }
    // 0x080004D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080004DC: jalr        $t9
    // 0x080004E0: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080004E0: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    after_5:
    // 0x080004E4: bne         $v0, $zero, L_08000540
    if (ctx->r2 != 0) {
        // 0x080004E8: lui         $t3, 0x8016
        ctx->r11 = S32(0X8016 << 16);
            goto L_08000540;
    }
L_080004E8:
    // 0x080004E8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x080004EC: lbu         $t3, -0x3297($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3297);
    // 0x080004F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080004F4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080004F8: bne         $t3, $zero, L_08000540
    if (ctx->r11 != 0) {
        // 0x080004FC: addiu       $a0, $zero, 0x106
        ctx->r4 = ADD32(0, 0X106);
            goto L_08000540;
    }
    // 0x080004FC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x08000500: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000504: addiu       $v0, $v0, -0xBE0
    ctx->r2 = ADD32(ctx->r2, -0XBE0);
    // 0x08000508: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800050C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x08000510: jalr        $v0
    // 0x08000514: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08000514: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_6:
    // 0x08000518: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x0800051C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000520: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000524: addiu       $a0, $zero, 0x26E
    ctx->r4 = ADD32(0, 0X26E);
    // 0x08000528: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x0800052C: jalr        $v0
    // 0x08000530: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x08000530: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_7:
    // 0x08000534: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x08000538: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800053C: sb          $t4, -0x3297($at)
    MEM_B(-0X3297, ctx->r1) = ctx->r12;
L_08000540:
    // 0x08000540: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA228) << 16);
    // 0x08000544: addiu       $t9, $t9, -0x5DD8
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA228));
    // 0x08000548: jalr        $t9
    // 0x0800054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x08000550: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x08000554: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
L_08000558:
    // 0x08000558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800055C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000560: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08000564: jr          $ra
    // 0x08000568: nop

    TRACE_RETURN()
    return;
    // 0x08000568: nop

;}
RECOMP_FUNC void func_080014B4_6B4754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080014B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080014C0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x080014C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080014C8: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080014CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080014D0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x080014D4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x080014D8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080014DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080014E0: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x080014E4: jalr        $t9
    // 0x080014E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080014E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080014EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080014F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x080014F4: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x080014F8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080014FC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08001500: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001504: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
    // 0x08001508: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800150C: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x08001510: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x08001514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001518: jalr        $t9
    // 0x0800151C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800151C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08001520: lui         $t1, 0x80
    ctx->r9 = S32(0X80 << 16);
    // 0x08001524: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x08001528: ori         $t1, $t1, 0x620
    ctx->r9 = ctx->r9 | 0X620;
    // 0x0800152C: addiu       $t2, $zero, 0xF0
    ctx->r10 = ADD32(0, 0XF0);
    // 0x08001530: addiu       $s1, $s1, -0x6D4C
    ctx->r17 = ADD32(ctx->r17, -0X6D4C);
    // 0x08001534: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08001538: sb          $t2, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r10;
    // 0x0800153C: jalr        $s1
    // 0x08001540: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_2;
    // 0x08001540: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_2:
    // 0x08001544: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08001548: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x0800154C: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x08001550: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001554: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x08001558: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x0800155C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001560: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001564: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x08001568: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800156C: sb          $t3, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r11;
    // 0x08001570: div.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f20.d);
    // 0x08001574: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x08001578: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x0800157C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001580: jalr        $s1
    // 0x08001584: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_3;
    // 0x08001584: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x08001588: andi        $t4, $v0, 0x3FF
    ctx->r12 = ctx->r2 & 0X3FF;
    // 0x0800158C: sh          $t4, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r12;
    // 0x08001590: jalr        $s1
    // 0x08001594: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_4;
    // 0x08001594: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_4:
    // 0x08001598: andi        $t5, $v0, 0x3FF
    ctx->r13 = ctx->r2 & 0X3FF;
    // 0x0800159C: sh          $t5, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r13;
    // 0x080015A0: jalr        $s1
    // 0x080015A4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_5;
    // 0x080015A4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x080015A8: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x080015AC: sh          $t6, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r14;
    // 0x080015B0: jalr        $s1
    // 0x080015B4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_6;
    // 0x080015B4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x080015B8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x080015BC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x080015C0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080015C4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080015C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080015CC: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC340) << 16);
    // 0x080015D0: ldc1        $f6, -0x3CC0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC340));
    // 0x080015D4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x080015D8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x080015DC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080015E0: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x080015E4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080015E8: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x080015EC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080015F0: jalr        $s1
    // 0x080015F4: swc1        $f10, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_7;
    // 0x080015F4: swc1        $f10, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f10.u32l;
    after_7:
    // 0x080015F8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x080015FC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001600: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001604: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001608: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800160C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC348) << 16);
    // 0x08001610: ldc1        $f16, -0x3CB8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC348));
    // 0x08001614: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x08001618: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x0800161C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001620: div.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f20.d);
    // 0x08001624: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x08001628: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x0800162C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001630: jalr        $s1
    // 0x08001634: swc1        $f4, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_8;
    // 0x08001634: swc1        $f4, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f4.u32l;
    after_8:
    // 0x08001638: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x0800163C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001640: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001644: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08001648: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x0800164C: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC350) << 16);
    // 0x08001650: ldc1        $f6, -0x3CB0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC350));
    // 0x08001654: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08001658: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800165C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001660: addiu       $t9, $t9, -0x4BDC
    ctx->r25 = ADD32(ctx->r25, -0X4BDC);
    // 0x08001664: div.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f20.d);
    // 0x08001668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800166C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08001670: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08001674: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x08001678: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800167C: swc1        $f10, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f10.u32l;
    // 0x08001680: jalr        $t9
    // 0x08001684: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001684: lhu         $a1, 0x88($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X88);
    after_9:
    // 0x08001688: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800168C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001690: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X16B4) << 16);
    // 0x08001694: jalr        $t9
    // 0x08001698: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X16B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001698: addiu       $a0, $a0, 0x16B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X16B4));
    after_10:
    // 0x0800169C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x080016A0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x080016A4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x080016A8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x080016AC: jr          $ra
    // 0x080016B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x080016B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_08003CA4_6B6F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003CA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003CA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003CAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003CB0: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08003CB4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003CB8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003CBC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08003CC0: beq         $t7, $zero, L_08003CD0
    if (ctx->r15 == 0) {
        // 0x08003CC4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X3CE0) << 16);
            goto L_08003CD0;
    }
    // 0x08003CC4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3CE0) << 16);
    // 0x08003CC8: jalr        $t9
    // 0x08003CCC: addiu       $a0, $a0, 0x3CE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3CE0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003CCC: addiu       $a0, $a0, 0x3CE0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3CE0));
    after_0:
L_08003CD0:
    // 0x08003CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003CD8: jr          $ra
    // 0x08003CDC: nop

    TRACE_RETURN()
    return;
    // 0x08003CDC: nop

;}
RECOMP_FUNC void func_08005B1C_6B8DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005B20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08005B24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005B28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005B2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005B30: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X5B50) << 16);
    // 0x08005B34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005B38: jalr        $t9
    // 0x08005B3C: addiu       $a0, $a0, 0x5B50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5B50));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005B3C: addiu       $a0, $a0, 0x5B50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5B50));
    after_0:
    // 0x08005B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005B48: jr          $ra
    // 0x08005B4C: nop

    TRACE_RETURN()
    return;
    // 0x08005B4C: nop

;}
RECOMP_FUNC void func_08008A38_6BBCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008A38: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08008A3C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08008A40: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08008A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08008A48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08008A4C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08008A50: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08008A54: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08008A58: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08008A5C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008A60: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08008A64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08008A68: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x08008A6C: addiu       $t9, $t9, 0x27FC
    ctx->r25 = ADD32(ctx->r25, 0X27FC);
    // 0x08008A70: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x08008A74: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x08008A78: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x08008A7C: jalr        $t9
    // 0x08008A80: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08008A80: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x08008A84: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08008A88: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08008A8C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08008A90: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08008A94: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08008A98: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08008A9C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x08008AA0: sub.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x08008AA4: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08008AA8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08008AAC: sub.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x08008AB0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08008AB4: lw          $t0, -0x3A1C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A1C);
    // 0x08008AB8: sub.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x08008ABC: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x08008AC0: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08008AC4: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08008AC8: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08008ACC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08008AD0: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x08008AD4: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x08008AD8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08008ADC: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x08008AE0: bne         $t0, $zero, L_08008B50
    if (ctx->r8 != 0) {
        // 0x08008AE4: swc1        $f10, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
            goto L_08008B50;
    }
    // 0x08008AE4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x08008AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08008AEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008AF0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08008AF4: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08008AF8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x08008AFC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08008B00: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x08008B04: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08008B08: jalr        $t9
    // 0x08008B0C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08008B0C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_1:
    // 0x08008B10: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08008B14: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08008B18: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08008B1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08008B20: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08008B24: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x08008B28: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008B2C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x08008B30: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08008B34: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08008B38: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08008B3C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08008B40: jalr        $t9
    // 0x08008B44: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08008B44: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_2:
    // 0x08008B48: b           L_08008E44
    // 0x08008B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08008E44;
    // 0x08008B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08008B50:
    // 0x08008B50: jalr        $v0
    // 0x08008B54: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08008B54: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_3:
    // 0x08008B58: beq         $v0, $zero, L_08008B90
    if (ctx->r2 == 0) {
        // 0x08008B5C: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_08008B90;
    }
    // 0x08008B5C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08008B60: jalr        $t9
    // 0x08008B64: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08008B64: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_4:
    // 0x08008B68: beq         $v0, $zero, L_08008B90
    if (ctx->r2 == 0) {
        // 0x08008B6C: addiu       $t1, $zero, 0x96
        ctx->r9 = ADD32(0, 0X96);
            goto L_08008B90;
    }
    // 0x08008B6C: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x08008B70: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008B74: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008B78: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X94D4) << 16);
    // 0x08008B7C: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08008B80: jalr        $t9
    // 0x08008B84: addiu       $a0, $a0, -0x6B2C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X94D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08008B84: addiu       $a0, $a0, -0x6B2C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X94D4));
    after_5:
    // 0x08008B88: b           L_08008E44
    // 0x08008B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08008E44;
    // 0x08008B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08008B90:
    // 0x08008B90: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08008B94: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    // 0x08008B98: jalr        $t9
    // 0x08008B9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08008B9C: nop

    after_6:
    // 0x08008BA0: beq         $v0, $zero, L_08008BCC
    if (ctx->r2 == 0) {
        // 0x08008BA4: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_08008BCC;
    }
    // 0x08008BA4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08008BA8: jalr        $t9
    // 0x08008BAC: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08008BAC: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    after_7:
    // 0x08008BB0: beq         $v0, $zero, L_08008BCC
    if (ctx->r2 == 0) {
        // 0x08008BB4: lui         $a0, 0x801
        ctx->r4 = S32(RELOC_HI16(20, 0X9184) << 16);
            goto L_08008BCC;
    }
    // 0x08008BB4: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X9184) << 16);
    // 0x08008BB8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008BBC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008BC0: sb          $zero, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = 0;
    // 0x08008BC4: jalr        $t9
    // 0x08008BC8: addiu       $a0, $a0, -0x6E7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X9184));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08008BC8: addiu       $a0, $a0, -0x6E7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X9184));
    after_8:
L_08008BCC:
    // 0x08008BCC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08008BD0: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08008BD4: jalr        $t9
    // 0x08008BD8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08008BD8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_9:
    // 0x08008BDC: beq         $v0, $zero, L_08008BFC
    if (ctx->r2 == 0) {
        // 0x08008BE0: lui         $a0, 0x801
        ctx->r4 = S32(RELOC_HI16(20, 0X8E54) << 16);
            goto L_08008BFC;
    }
    // 0x08008BE0: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8E54) << 16);
    // 0x08008BE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08008BE8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08008BEC: jalr        $t9
    // 0x08008BF0: addiu       $a0, $a0, -0x71AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8E54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08008BF0: addiu       $a0, $a0, -0x71AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8E54));
    after_10:
    // 0x08008BF4: b           L_08008E44
    // 0x08008BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08008E44;
    // 0x08008BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08008BFC:
    // 0x08008BFC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08008C00: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08008C04: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x08008C08: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08008C0C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x08008C10: lhu         $v1, 0x307A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307A);
    // 0x08008C14: andi        $t2, $v1, 0x10
    ctx->r10 = ctx->r3 & 0X10;
    // 0x08008C18: beq         $t2, $zero, L_08008C54
    if (ctx->r10 == 0) {
        // 0x08008C1C: or          $v1, $t2, $zero
        ctx->r3 = ctx->r10 | 0;
            goto L_08008C54;
    }
    // 0x08008C1C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x08008C20: lhu         $t3, 0x307C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X307C);
    // 0x08008C24: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x08008C28: beq         $t4, $zero, L_08008C54
    if (ctx->r12 == 0) {
        // 0x08008C2C: nop
    
            goto L_08008C54;
    }
    // 0x08008C2C: nop

    // 0x08008C30: sb          $zero, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = 0;
    // 0x08008C34: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08008C38: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08008C3C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x08008C40: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08008C44: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x08008C48: lhu         $v1, 0x307A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307A);
    // 0x08008C4C: andi        $t5, $v1, 0x10
    ctx->r13 = ctx->r3 & 0X10;
    // 0x08008C50: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_08008C54:
    // 0x08008C54: beq         $v1, $zero, L_08008C94
    if (ctx->r3 == 0) {
        // 0x08008C58: lui         $a1, 0xC33E
        ctx->r5 = S32(0XC33E << 16);
            goto L_08008C94;
    }
    // 0x08008C58: lui         $a1, 0xC33E
    ctx->r5 = S32(0XC33E << 16);
    // 0x08008C5C: lhu         $t6, 0x307C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X307C);
    // 0x08008C60: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08008C64: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x08008C68: beq         $t7, $zero, L_08008C94
    if (ctx->r15 == 0) {
        // 0x08008C6C: nop
    
            goto L_08008C94;
    }
    // 0x08008C6C: nop

    // 0x08008C70: sb          $t8, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r24;
    // 0x08008C74: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08008C78: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08008C7C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x08008C80: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08008C84: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x08008C88: lhu         $v1, 0x307A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307A);
    // 0x08008C8C: andi        $t0, $v1, 0x10
    ctx->r8 = ctx->r3 & 0X10;
    // 0x08008C90: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_08008C94:
    // 0x08008C94: beq         $v1, $zero, L_08008CD4
    if (ctx->r3 == 0) {
        // 0x08008C98: lui         $a2, 0x428C
        ctx->r6 = S32(0X428C << 16);
            goto L_08008CD4;
    }
    // 0x08008C98: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x08008C9C: lhu         $t1, 0x307C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X307C);
    // 0x08008CA0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x08008CA4: andi        $t9, $t1, 0x1
    ctx->r25 = ctx->r9 & 0X1;
    // 0x08008CA8: beq         $t9, $zero, L_08008CD4
    if (ctx->r25 == 0) {
        // 0x08008CAC: nop
    
            goto L_08008CD4;
    }
    // 0x08008CAC: nop

    // 0x08008CB0: sb          $t2, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r10;
    // 0x08008CB4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08008CB8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x08008CBC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x08008CC0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x08008CC4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x08008CC8: lhu         $v1, 0x307A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X307A);
    // 0x08008CCC: andi        $t3, $v1, 0x10
    ctx->r11 = ctx->r3 & 0X10;
    // 0x08008CD0: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
L_08008CD4:
    // 0x08008CD4: beq         $v1, $zero, L_08008CF4
    if (ctx->r3 == 0) {
        // 0x08008CD8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_08008CF4;
    }
    // 0x08008CD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08008CDC: lhu         $t4, 0x307C($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X307C);
    // 0x08008CE0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x08008CE4: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x08008CE8: beql        $t5, $zero, L_08008CF8
    if (ctx->r13 == 0) {
        // 0x08008CEC: lbu         $v0, 0xDC($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XDC);
            goto L_08008CF8;
    }
    goto skip_0;
    // 0x08008CEC: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
    skip_0:
    // 0x08008CF0: sb          $t6, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r14;
L_08008CF4:
    // 0x08008CF4: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
L_08008CF8:
    // 0x08008CF8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008CFC: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08008D00: bne         $v0, $zero, L_08008D18
    if (ctx->r2 != 0) {
        // 0x08008D04: lui         $a3, 0x433E
        ctx->r7 = S32(0X433E << 16);
            goto L_08008D18;
    }
    // 0x08008D04: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    // 0x08008D08: jalr        $t9
    // 0x08008D0C: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08008D0C: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    after_11:
    // 0x08008D10: b           L_08008D90
    // 0x08008D14: nop

        goto L_08008D90;
    // 0x08008D14: nop

L_08008D18:
    // 0x08008D18: bne         $v0, $at, L_08008D40
    if (ctx->r2 != ctx->r1) {
        // 0x08008D1C: lui         $a1, 0xC334
        ctx->r5 = S32(0XC334 << 16);
            goto L_08008D40;
    }
    // 0x08008D1C: lui         $a1, 0xC334
    ctx->r5 = S32(0XC334 << 16);
    // 0x08008D20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008D24: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08008D28: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08008D2C: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x08008D30: jalr        $t9
    // 0x08008D34: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08008D34: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    after_12:
    // 0x08008D38: b           L_08008D90
    // 0x08008D3C: nop

        goto L_08008D90;
    // 0x08008D3C: nop

L_08008D40:
    // 0x08008D40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08008D44: bne         $v0, $at, L_08008D6C
    if (ctx->r2 != ctx->r1) {
        // 0x08008D48: lui         $a1, 0x4334
        ctx->r5 = S32(0X4334 << 16);
            goto L_08008D6C;
    }
    // 0x08008D48: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x08008D4C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008D50: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08008D54: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08008D58: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08008D5C: jalr        $t9
    // 0x08008D60: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08008D60: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    after_13:
    // 0x08008D64: b           L_08008D90
    // 0x08008D68: nop

        goto L_08008D90;
    // 0x08008D68: nop

L_08008D6C:
    // 0x08008D6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08008D70: bne         $v0, $at, L_08008D90
    if (ctx->r2 != ctx->r1) {
        // 0x08008D74: lui         $a1, 0xC33E
        ctx->r5 = S32(0XC33E << 16);
            goto L_08008D90;
    }
    // 0x08008D74: lui         $a1, 0xC33E
    ctx->r5 = S32(0XC33E << 16);
    // 0x08008D78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008D7C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08008D80: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x08008D84: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08008D88: jalr        $t9
    // 0x08008D8C: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08008D8C: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_14:
L_08008D90:
    // 0x08008D90: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC40C) << 16);
    // 0x08008D94: lwc1        $f8, -0x3BF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC40C));
    // 0x08008D98: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x08008D9C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08008DA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08008DA4: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x08008DA8: nop

    // 0x08008DAC: bc1f        L_08008DF4
    if (!c1cs) {
        // 0x08008DB0: nop
    
            goto L_08008DF4;
    }
    // 0x08008DB0: nop

    // 0x08008DB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08008DB8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08008DBC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08008DC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08008DC4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08008DC8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008DCC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08008DD0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x08008DD4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x08008DD8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08008DDC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08008DE0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08008DE4: jalr        $t9
    // 0x08008DE8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08008DE8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_15:
    // 0x08008DEC: b           L_08008E2C
    // 0x08008DF0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
        goto L_08008E2C;
    // 0x08008DF0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
L_08008DF4:
    // 0x08008DF4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08008DF8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08008DFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08008E00: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08008E04: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008E08: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08008E0C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x08008E10: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x08008E14: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08008E18: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08008E1C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08008E20: jalr        $t9
    // 0x08008E24: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08008E24: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_16:
    // 0x08008E28: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
L_08008E2C:
    // 0x08008E2C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08008E30: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08008E34: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x08008E38: jalr        $t9
    // 0x08008E3C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08008E3C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_17:
    // 0x08008E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08008E44:
    // 0x08008E44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08008E48: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x08008E4C: jr          $ra
    // 0x08008E50: nop

    TRACE_RETURN()
    return;
    // 0x08008E50: nop

;}
RECOMP_FUNC void func_0800A924_6BDBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800A924: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x0800A928: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800A92C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x0800A930: addiu       $s0, $s0, -0x39D8
    ctx->r16 = ADD32(ctx->r16, -0X39D8);
    // 0x0800A934: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x0800A938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800A93C: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x0800A940: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x0800A944: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x0800A948: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800A94C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800A950: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x0800A954: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x0800A958: lbu         $t0, 0xD0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800A95C: sltiu       $at, $t0, 0xA
    ctx->r1 = ctx->r8 < 0XA ? 1 : 0;
    // 0x0800A960: beq         $at, $zero, L_0800B270
    if (ctx->r1 == 0) {
        // 0x0800A964: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_0800B270;
    }
    // 0x0800A964: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x0800A968: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC450) << 16);
    // 0x0800A96C: addu        $at, $at, $t0
    gpr jr_addend_0800A974 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x0800A970: lw          $t0, -0x3BB0($at)
    ctx->r8 = ADD32(ctx->r1, (int16_t)RELOC_LO16(20, 0XC450));
    // 0x0800A974: jr          $t0
    // 0x0800A978: nop

    switch (jr_addend_0800A974 >> 2) {
        case 0: goto L_0800A97C; break;
        case 1: goto L_0800AB8C; break;
        case 2: goto L_0800ABD8; break;
        case 3: goto L_0800AC08; break;
        case 4: goto L_0800AC58; break;
        case 5: goto L_0800ACDC; break;
        case 6: goto L_0800AD60; break;
        case 7: goto L_0800B150; break;
        case 8: goto L_0800B1D8; break;
        case 9: goto L_0800B200; break;
        default: switch_error(__func__, 0x0800A974, 0x0800C450);
    }
    // 0x0800A978: nop

L_0800A97C:
    // 0x0800A97C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800A980: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800A984: jalr        $t9
    // 0x0800A988: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800A988: addiu       $a0, $zero, 0x172
    ctx->r4 = ADD32(0, 0X172);
    after_0:
    // 0x0800A98C: bne         $v0, $zero, L_0800B288
    if (ctx->r2 != 0) {
        // 0x0800A990: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_0800B288;
    }
    // 0x0800A990: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x0800A994: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x0800A998: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x0800A99C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800A9A0: lwc1        $f0, 0xC($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0XC);
    // 0x0800A9A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800A9A8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800A9AC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x0800A9B0: nop

    // 0x0800A9B4: bc1fl       L_0800A9D4
    if (!c1cs) {
        // 0x0800A9B8: lui         $at, 0xC352
        ctx->r1 = S32(0XC352 << 16);
            goto L_0800A9D4;
    }
    goto skip_0;
    // 0x0800A9B8: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    skip_0:
    // 0x0800A9BC: jalr        $t9
    // 0x0800A9C0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800A9C0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x0800A9C4: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x0800A9C8: lw          $t2, -0x39F4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X39F4);
    // 0x0800A9CC: lwc1        $f0, 0xC($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0XC);
    // 0x0800A9D0: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
L_0800A9D4:
    // 0x0800A9D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800A9D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800A9DC: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x0800A9E0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x0800A9E4: nop

    // 0x0800A9E8: bc1tl       L_0800B28C
    if (c1cs) {
        // 0x0800A9EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800B28C;
    }
    goto skip_1;
    // 0x0800A9EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x0800A9F0: jalr        $t9
    // 0x0800A9F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800A9F4: nop

    after_2:
    // 0x0800A9F8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x0800A9FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800AA00: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0800AA04: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x0800AA08: sb          $t3, 0x64($t4)
    MEM_B(0X64, ctx->r12) = ctx->r11;
    // 0x0800AA0C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x0800AA10: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800AA14: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    // 0x0800AA18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800AA1C: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x0800AA20: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x0800AA24: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x0800AA28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800AA2C: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x0800AA30: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x0800AA34: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x0800AA38: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AA3C: swc1        $f16, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f16.u32l;
    // 0x0800AA40: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x0800AA44: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x0800AA48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800AA4C: sh          $t8, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r24;
    // 0x0800AA50: jalr        $t9
    // 0x0800AA54: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800AA54: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_3:
    // 0x0800AA58: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800AA5C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AA60: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x0800AA64: sw          $v0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r2;
    // 0x0800AA68: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x0800AA6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800AA70: jalr        $t9
    // 0x0800AA74: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800AA74: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    after_4:
    // 0x0800AA78: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AA7C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x0800AA80: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AA84: jalr        $t9
    // 0x0800AA88: addiu       $a1, $zero, 0x1600
    ctx->r5 = ADD32(0, 0X1600);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800AA88: addiu       $a1, $zero, 0x1600
    ctx->r5 = ADD32(0, 0X1600);
    after_5:
    // 0x0800AA8C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AA90: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800AA94: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AA98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x0800AA9C: lui         $a2, 0xC341
    ctx->r6 = S32(0XC341 << 16);
    // 0x0800AAA0: jalr        $t9
    // 0x0800AAA4: lui         $a3, 0x42F2
    ctx->r7 = S32(0X42F2 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800AAA4: lui         $a3, 0x42F2
    ctx->r7 = S32(0X42F2 << 16);
    after_6:
    // 0x0800AAA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AAAC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800AAB0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AAB4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x0800AAB8: lui         $a2, 0xC32D
    ctx->r6 = S32(0XC32D << 16);
    // 0x0800AABC: jalr        $t9
    // 0x0800AAC0: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800AAC0: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_7:
    // 0x0800AAC4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AAC8: addiu       $t9, $t9, 0x381C
    ctx->r25 = ADD32(ctx->r25, 0X381C);
    // 0x0800AACC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x0800AAD0: jalr        $t9
    // 0x0800AAD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800AAD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x0800AAD8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x0800AADC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800AAE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AAE4: addiu       $t9, $t9, 0x33E0
    ctx->r25 = ADD32(ctx->r25, 0X33E0);
    // 0x0800AAE8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0800AAEC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800AAF0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x0800AAF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800AAF8: jalr        $t9
    // 0x0800AAFC: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800AAFC: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    after_9:
    // 0x0800AB00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AB04: addiu       $t9, $t9, 0x3400
    ctx->r25 = ADD32(ctx->r25, 0X3400);
    // 0x0800AB08: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0800AB0C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800AB10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x0800AB14: jalr        $t9
    // 0x0800AB18: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800AB18: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_10:
    // 0x0800AB1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AB20: addiu       $t9, $t9, 0x3484
    ctx->r25 = ADD32(ctx->r25, 0X3484);
    // 0x0800AB24: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0800AB28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800AB2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800AB30: jalr        $t9
    // 0x0800AB34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800AB34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x0800AB38: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AB3C: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x0800AB40: jalr        $t9
    // 0x0800AB44: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800AB44: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_12:
    // 0x0800AB48: addiu       $t1, $zero, 0x38
    ctx->r9 = ADD32(0, 0X38);
    // 0x0800AB4C: addiu       $t2, $zero, 0x140
    ctx->r10 = ADD32(0, 0X140);
    // 0x0800AB50: addiu       $t3, $zero, 0xB8
    ctx->r11 = ADD32(0, 0XB8);
    // 0x0800AB54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800AB58: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x0800AB5C: sh          $t1, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r9;
    // 0x0800AB60: sh          $t2, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r10;
    // 0x0800AB64: sh          $t3, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r11;
    // 0x0800AB68: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x0800AB6C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800AB70: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    // 0x0800AB74: jalr        $t9
    // 0x0800AB78: addiu       $a0, $zero, 0x174
    ctx->r4 = ADD32(0, 0X174);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800AB78: addiu       $a0, $zero, 0x174
    ctx->r4 = ADD32(0, 0X174);
    after_13:
    // 0x0800AB7C: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x0800AB80: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x0800AB84: b           L_0800B270
    // 0x0800AB88: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_0800B270;
    // 0x0800AB88: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_0800AB8C:
    // 0x0800AB8C: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800AB90: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x0800AB94: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x0800AB98: lhu         $v1, 0xD2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XD2);
    // 0x0800AB9C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x0800ABA0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800ABA4: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x0800ABA8: bne         $v1, $zero, L_0800B288
    if (ctx->r3 != 0) {
        // 0x0800ABAC: sh          $t7, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r15;
            goto L_0800B288;
    }
    // 0x0800ABAC: sh          $t7, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r15;
    // 0x0800ABB0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800ABB4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800ABB8: jalr        $t9
    // 0x0800ABBC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x0800ABBC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_14:
    // 0x0800ABC0: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x0800ABC4: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x0800ABC8: sh          $t8, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r24;
    // 0x0800ABCC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x0800ABD0: b           L_0800B270
    // 0x0800ABD4: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_0800B270;
    // 0x0800ABD4: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_0800ABD8:
    // 0x0800ABD8: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800ABDC: lhu         $v1, 0xD2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XD2);
    // 0x0800ABE0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800ABE4: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x0800ABE8: bne         $v1, $zero, L_0800B288
    if (ctx->r3 != 0) {
        // 0x0800ABEC: sh          $t2, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r10;
            goto L_0800B288;
    }
    // 0x0800ABEC: sh          $t2, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r10;
    // 0x0800ABF0: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x0800ABF4: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x0800ABF8: sh          $t3, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r11;
    // 0x0800ABFC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800AC00: b           L_0800B270
    // 0x0800AC04: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_0800B270;
    // 0x0800AC04: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_0800AC08:
    // 0x0800AC08: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800AC0C: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x0800AC10: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800AC14: lhu         $v1, 0xD2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XD2);
    // 0x0800AC18: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800AC1C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800AC20: bnel        $v1, $at, L_0800AC38
    if (ctx->r3 != ctx->r1) {
        // 0x0800AC24: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_0800AC38;
    }
    goto skip_2;
    // 0x0800AC24: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    skip_2:
    // 0x0800AC28: jalr        $t9
    // 0x0800AC2C: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x0800AC2C: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_15:
    // 0x0800AC30: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0800AC34: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
L_0800AC38:
    // 0x0800AC38: bne         $v1, $zero, L_0800B288
    if (ctx->r3 != 0) {
        // 0x0800AC3C: sh          $t6, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r14;
            goto L_0800B288;
    }
    // 0x0800AC3C: sh          $t6, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r14;
    // 0x0800AC40: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x0800AC44: addiu       $t7, $zero, 0x91
    ctx->r15 = ADD32(0, 0X91);
    // 0x0800AC48: sh          $t7, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r15;
    // 0x0800AC4C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x0800AC50: b           L_0800B270
    // 0x0800AC54: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_0800B270;
    // 0x0800AC54: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_0800AC58:
    // 0x0800AC58: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800AC5C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AC60: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800AC64: lui         $a1, 0xC1B8
    ctx->r5 = S32(0XC1B8 << 16);
    // 0x0800AC68: lui         $a2, 0xC29C
    ctx->r6 = S32(0XC29C << 16);
    // 0x0800AC6C: lui         $a3, 0xC234
    ctx->r7 = S32(0XC234 << 16);
    // 0x0800AC70: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800AC74: jalr        $t9
    // 0x0800AC78: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x0800AC78: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_16:
    // 0x0800AC7C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AC80: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800AC84: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AC88: lui         $a1, 0x4130
    ctx->r5 = S32(0X4130 << 16);
    // 0x0800AC8C: lui         $a2, 0xC190
    ctx->r6 = S32(0XC190 << 16);
    // 0x0800AC90: jalr        $t9
    // 0x0800AC94: lui         $a3, 0x4160
    ctx->r7 = S32(0X4160 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x0800AC94: lui         $a3, 0x4160
    ctx->r7 = S32(0X4160 << 16);
    after_17:
    // 0x0800AC98: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x0800AC9C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x0800ACA0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800ACA4: bne         $v1, $at, L_0800ACB8
    if (ctx->r3 != ctx->r1) {
        // 0x0800ACA8: addiu       $t9, $t9, -0x2CF0
        ctx->r25 = ADD32(ctx->r25, -0X2CF0);
            goto L_0800ACB8;
    }
    // 0x0800ACA8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800ACAC: jalr        $t9
    // 0x0800ACB0: addiu       $a0, $zero, 0x29F
    ctx->r4 = ADD32(0, 0X29F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x0800ACB0: addiu       $a0, $zero, 0x29F
    ctx->r4 = ADD32(0, 0X29F);
    after_18:
    // 0x0800ACB4: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
L_0800ACB8:
    // 0x0800ACB8: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x0800ACBC: bne         $v1, $zero, L_0800B288
    if (ctx->r3 != 0) {
        // 0x0800ACC0: sh          $t1, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r9;
            goto L_0800B288;
    }
    // 0x0800ACC0: sh          $t1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r9;
    // 0x0800ACC4: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x0800ACC8: addiu       $t2, $zero, 0x38
    ctx->r10 = ADD32(0, 0X38);
    // 0x0800ACCC: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x0800ACD0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800ACD4: b           L_0800B270
    // 0x0800ACD8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_0800B270;
    // 0x0800ACD8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_0800ACDC:
    // 0x0800ACDC: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800ACE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800ACE4: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x0800ACE8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800ACEC: jalr        $t9
    // 0x0800ACF0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800ACF0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_19:
    // 0x0800ACF4: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x0800ACF8: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x0800ACFC: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x0800AD00: sh          $t6, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r14;
    // 0x0800AD04: sh          $t5, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r13;
    // 0x0800AD08: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x0800AD0C: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x0800AD10: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800AD14: subu        $t0, $t8, $t7
    ctx->r8 = SUB32(ctx->r24, ctx->r15);
    // 0x0800AD18: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x0800AD1C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0800AD20: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800AD24: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x0800AD28: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x0800AD2C: bne         $t2, $zero, L_0800B288
    if (ctx->r10 != 0) {
        // 0x0800AD30: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_0800B288;
    }
    // 0x0800AD30: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x0800AD34: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0800AD38: jalr        $t9
    // 0x0800AD3C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800AD3C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    after_20:
    // 0x0800AD40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800AD44: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800AD48: jalr        $t9
    // 0x0800AD4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x0800AD4C: nop

    after_21:
    // 0x0800AD50: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x0800AD54: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800AD58: b           L_0800B270
    // 0x0800AD5C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_0800B270;
    // 0x0800AD5C: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_0800AD60:
    // 0x0800AD60: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800AD64: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x0800AD68: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800AD6C: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x0800AD70: bne         $t6, $zero, L_0800ADF4
    if (ctx->r14 != 0) {
        // 0x0800AD74: addiu       $s0, $s0, 0xD0
        ctx->r16 = ADD32(ctx->r16, 0XD0);
            goto L_0800ADF4;
    }
    // 0x0800AD74: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800AD78: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800AD7C: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x0800AD80: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x0800AD84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800AD88: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800AD8C: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800AD90: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AD94: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800AD98: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800AD9C: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x0800ADA0: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x0800ADA4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x0800ADA8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800ADAC: jalr        $t9
    // 0x0800ADB0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x0800ADB0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_22:
    // 0x0800ADB4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800ADB8: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x0800ADBC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x0800ADC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800ADC4: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x0800ADC8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800ADCC: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x0800ADD0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x0800ADD4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800ADD8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x0800ADDC: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x0800ADE0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x0800ADE4: jalr        $t9
    // 0x0800ADE8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800ADE8: nop

    after_23:
    // 0x0800ADEC: b           L_0800B28C
    // 0x0800ADF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800B28C;
    // 0x0800ADF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800ADF4:
    // 0x0800ADF4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800ADF8: addiu       $t9, $t9, 0x27FC
    ctx->r25 = ADD32(ctx->r25, 0X27FC);
    // 0x0800ADFC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AE00: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x0800AE04: jalr        $t9
    // 0x0800AE08: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x0800AE08: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    after_24:
    // 0x0800AE0C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800AE10: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x0800AE14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800AE18: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x0800AE1C: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0800AE20: jalr        $t9
    // 0x0800AE24: lwc1        $f14, 0x10($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x0800AE24: lwc1        $f14, 0x10($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X10);
    after_25:
    // 0x0800AE28: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x0800AE2C: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x0800AE30: sh          $v0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r2;
    // 0x0800AE34: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800AE38: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x0800AE3C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0800AE40: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x0800AE44: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x0800AE48: nop

    // 0x0800AE4C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x0800AE50: jalr        $t9
    // 0x0800AE54: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x0800AE54: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_26:
    // 0x0800AE58: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x0800AE5C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800AE60: addiu       $v0, $v0, 0x2500
    ctx->r2 = ADD32(ctx->r2, 0X2500);
    // 0x0800AE64: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AE68: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800AE6C: jalr        $v0
    // 0x0800AE70: addiu       $a1, $zero, 0x2200
    ctx->r5 = ADD32(0, 0X2200);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_27;
    // 0x0800AE70: addiu       $a1, $zero, 0x2200
    ctx->r5 = ADD32(0, 0X2200);
    after_27:
    // 0x0800AE74: lhu         $a0, 0x6E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6E);
    // 0x0800AE78: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800AE7C: addiu       $v0, $v0, 0x3E10
    ctx->r2 = ADD32(ctx->r2, 0X3E10);
    // 0x0800AE80: addiu       $t8, $a0, -0x50
    ctx->r24 = ADD32(ctx->r4, -0X50);
    // 0x0800AE84: andi        $a0, $t8, 0x3FF
    ctx->r4 = ctx->r24 & 0X3FF;
    // 0x0800AE88: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x0800AE8C: jalr        $v0
    // 0x0800AE90: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_28;
    // 0x0800AE90: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_28:
    // 0x0800AE94: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x0800AE98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800AE9C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x0800AEA0: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x0800AEA4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x0800AEA8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x0800AEAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800AEB0: jalr        $v0
    // 0x0800AEB4: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_29;
    // 0x0800AEB4: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    after_29:
    // 0x0800AEB8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x0800AEBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800AEC0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800AEC4: lhu         $a0, 0x6E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6E);
    // 0x0800AEC8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x0800AECC: jalr        $t9
    // 0x0800AED0: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x0800AED0: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    after_30:
    // 0x0800AED4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800AED8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800AEDC: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x0800AEE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x0800AEE4: lhu         $a0, 0x6E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X6E);
    // 0x0800AEE8: div.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x0800AEEC: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0800AEF0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x0800AEF4: jalr        $t9
    // 0x0800AEF8: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x0800AEF8: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_31:
    // 0x0800AEFC: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x0800AF00: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800AF04: addiu       $v0, $v0, 0x2518
    ctx->r2 = ADD32(ctx->r2, 0X2518);
    // 0x0800AF08: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0800AF0C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x0800AF10: lui         $a2, 0xC343
    ctx->r6 = S32(0XC343 << 16);
    // 0x0800AF14: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x0800AF18: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x0800AF1C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AF20: jalr        $v0
    // 0x0800AF24: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_32;
    // 0x0800AF24: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_32:
    // 0x0800AF28: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x0800AF2C: lw          $t0, -0x39F4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39F4);
    // 0x0800AF30: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x0800AF34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800AF38: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x0800AF3C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800AF40: addiu       $v0, $v0, 0x2628
    ctx->r2 = ADD32(ctx->r2, 0X2628);
    // 0x0800AF44: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800AF48: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AF4C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x0800AF50: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x0800AF54: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800AF58: jalr        $v0
    // 0x0800AF5C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_33;
    // 0x0800AF5C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_33:
    // 0x0800AF60: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800AF64: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x0800AF68: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x0800AF6C: jalr        $v0
    // 0x0800AF70: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_34;
    // 0x0800AF70: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    after_34:
    // 0x0800AF74: beql        $v0, $zero, L_0800B0D8
    if (ctx->r2 == 0) {
        // 0x0800AF78: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_0800B0D8;
    }
    goto skip_3;
    // 0x0800AF78: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x0800AF7C: lhu         $t1, 0x2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2);
    // 0x0800AF80: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AF84: addiu       $a1, $zero, 0x1200
    ctx->r5 = ADD32(0, 0X1200);
    // 0x0800AF88: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x0800AF8C: sh          $t2, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r10;
    // 0x0800AF90: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800AF94: jalr        $t9
    // 0x0800AF98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x0800AF98: nop

    after_35:
    // 0x0800AF9C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x0800AFA0: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x0800AFA4: beq         $at, $zero, L_0800B000
    if (ctx->r1 == 0) {
        // 0x0800AFA8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_0800B000;
    }
    // 0x0800AFA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800AFAC: bne         $v0, $at, L_0800AFC0
    if (ctx->r2 != ctx->r1) {
        // 0x0800AFB0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800AFC0;
    }
    // 0x0800AFB0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800AFB4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800AFB8: jalr        $t9
    // 0x0800AFBC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x0800AFBC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_36:
L_0800AFC0:
    // 0x0800AFC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AFC4: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800AFC8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AFCC: lui         $a1, 0xC2FA
    ctx->r5 = S32(0XC2FA << 16);
    // 0x0800AFD0: lui         $a2, 0xC319
    ctx->r6 = S32(0XC319 << 16);
    // 0x0800AFD4: jalr        $t9
    // 0x0800AFD8: lui         $a3, 0x4282
    ctx->r7 = S32(0X4282 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x0800AFD8: lui         $a3, 0x4282
    ctx->r7 = S32(0X4282 << 16);
    after_37:
    // 0x0800AFDC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800AFE0: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800AFE4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800AFE8: lui         $a1, 0xC1C0
    ctx->r5 = S32(0XC1C0 << 16);
    // 0x0800AFEC: lui         $a2, 0xC2C6
    ctx->r6 = S32(0XC2C6 << 16);
    // 0x0800AFF0: jalr        $t9
    // 0x0800AFF4: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x0800AFF4: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    after_38:
    // 0x0800AFF8: b           L_0800B28C
    // 0x0800AFFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800B28C;
    // 0x0800AFFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800B000:
    // 0x0800B000: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x0800B004: beq         $at, $zero, L_0800B060
    if (ctx->r1 == 0) {
        // 0x0800B008: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_0800B060;
    }
    // 0x0800B008: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x0800B00C: bne         $v0, $at, L_0800B020
    if (ctx->r2 != ctx->r1) {
        // 0x0800B010: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800B020;
    }
    // 0x0800B010: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800B014: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800B018: jalr        $t9
    // 0x0800B01C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x0800B01C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_39:
L_0800B020:
    // 0x0800B020: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B024: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800B028: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B02C: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    // 0x0800B030: lui         $a2, 0xC2A4
    ctx->r6 = S32(0XC2A4 << 16);
    // 0x0800B034: jalr        $t9
    // 0x0800B038: lui         $a3, 0xC2A6
    ctx->r7 = S32(0XC2A6 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x0800B038: lui         $a3, 0xC2A6
    ctx->r7 = S32(0XC2A6 << 16);
    after_40:
    // 0x0800B03C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B040: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800B044: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B048: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    // 0x0800B04C: lui         $a2, 0xC2D2
    ctx->r6 = S32(0XC2D2 << 16);
    // 0x0800B050: jalr        $t9
    // 0x0800B054: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x0800B054: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_41:
    // 0x0800B058: b           L_0800B28C
    // 0x0800B05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800B28C;
    // 0x0800B05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800B060:
    // 0x0800B060: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x0800B064: beq         $at, $zero, L_0800B0C4
    if (ctx->r1 == 0) {
        // 0x0800B068: addiu       $a0, $zero, 0x1BC
        ctx->r4 = ADD32(0, 0X1BC);
            goto L_0800B0C4;
    }
    // 0x0800B068: addiu       $a0, $zero, 0x1BC
    ctx->r4 = ADD32(0, 0X1BC);
    // 0x0800B06C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x0800B070: bne         $v0, $at, L_0800B084
    if (ctx->r2 != ctx->r1) {
        // 0x0800B074: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800B084;
    }
    // 0x0800B074: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800B078: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800B07C: jalr        $t9
    // 0x0800B080: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x0800B080: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_42:
L_0800B084:
    // 0x0800B084: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B088: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800B08C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B090: lui         $a1, 0x4258
    ctx->r5 = S32(0X4258 << 16);
    // 0x0800B094: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    // 0x0800B098: jalr        $t9
    // 0x0800B09C: lui         $a3, 0xC228
    ctx->r7 = S32(0XC228 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x0800B09C: lui         $a3, 0xC228
    ctx->r7 = S32(0XC228 << 16);
    after_43:
    // 0x0800B0A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B0A4: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800B0A8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B0AC: lui         $a1, 0xC080
    ctx->r5 = S32(0XC080 << 16);
    // 0x0800B0B0: lui         $a2, 0xC2D4
    ctx->r6 = S32(0XC2D4 << 16);
    // 0x0800B0B4: jalr        $t9
    // 0x0800B0B8: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x0800B0B8: lui         $a3, 0xC0A0
    ctx->r7 = S32(0XC0A0 << 16);
    after_44:
    // 0x0800B0BC: b           L_0800B28C
    // 0x0800B0C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800B28C;
    // 0x0800B0C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800B0C4:
    // 0x0800B0C4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800B0C8: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x0800B0CC: jalr        $t9
    // 0x0800B0D0: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x0800B0D0: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    after_45:
    // 0x0800B0D4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
L_0800B0D8:
    // 0x0800B0D8: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x0800B0DC: jalr        $t9
    // 0x0800B0E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x0800B0E0: nop

    after_46:
    // 0x0800B0E4: beq         $v0, $zero, L_0800B270
    if (ctx->r2 == 0) {
        // 0x0800B0E8: lui         $a1, 0xC28C
        ctx->r5 = S32(0XC28C << 16);
            goto L_0800B270;
    }
    // 0x0800B0E8: lui         $a1, 0xC28C
    ctx->r5 = S32(0XC28C << 16);
    // 0x0800B0EC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800B0F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B0F4: lui         $a2, 0xC329
    ctx->r6 = S32(0XC329 << 16);
    // 0x0800B0F8: jalr        $t9
    // 0x0800B0FC: lui         $a3, 0x42D6
    ctx->r7 = S32(0X42D6 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x0800B0FC: lui         $a3, 0x42D6
    ctx->r7 = S32(0X42D6 << 16);
    after_47:
    // 0x0800B100: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x0800B104: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B108: lui         $a1, 0xC214
    ctx->r5 = S32(0XC214 << 16);
    // 0x0800B10C: lui         $a2, 0xC2FE
    ctx->r6 = S32(0XC2FE << 16);
    // 0x0800B110: jalr        $t9
    // 0x0800B114: lui         $a3, 0x426C
    ctx->r7 = S32(0X426C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x0800B114: lui         $a3, 0x426C
    ctx->r7 = S32(0X426C << 16);
    after_48:
    // 0x0800B118: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x0800B11C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x0800B120: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800B124: addiu       $a1, $zero, 0x1600
    ctx->r5 = ADD32(0, 0X1600);
    // 0x0800B128: jalr        $t9
    // 0x0800B12C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x0800B12C: nop

    after_49:
    // 0x0800B130: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800B134: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x0800B138: jalr        $t9
    // 0x0800B13C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x0800B13C: nop

    after_50:
    // 0x0800B140: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x0800B144: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800B148: b           L_0800B270
    // 0x0800B14C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_0800B270;
    // 0x0800B14C: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_0800B150:
    // 0x0800B150: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800B154: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B158: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x0800B15C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800B160: jalr        $t9
    // 0x0800B164: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x0800B164: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_51:
    // 0x0800B168: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x0800B16C: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x0800B170: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x0800B174: sh          $t6, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r14;
    // 0x0800B178: sh          $t5, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r13;
    // 0x0800B17C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x0800B180: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x0800B184: addiu       $t4, $zero, 0x38
    ctx->r12 = ADD32(0, 0X38);
    // 0x0800B188: subu        $t0, $t7, $t8
    ctx->r8 = SUB32(ctx->r15, ctx->r24);
    // 0x0800B18C: sh          $t0, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r8;
    // 0x0800B190: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x0800B194: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    // 0x0800B198: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800B19C: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x0800B1A0: slti        $at, $t2, 0x38
    ctx->r1 = SIGNED(ctx->r10) < 0X38 ? 1 : 0;
    // 0x0800B1A4: bne         $at, $zero, L_0800B288
    if (ctx->r1 != 0) {
        // 0x0800B1A8: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_0800B288;
    }
    // 0x0800B1A8: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x0800B1AC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800B1B0: jalr        $t9
    // 0x0800B1B4: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x0800B1B4: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    after_52:
    // 0x0800B1B8: beql        $v0, $zero, L_0800B28C
    if (ctx->r2 == 0) {
        // 0x0800B1BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800B28C;
    }
    goto skip_4;
    // 0x0800B1BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x0800B1C0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x0800B1C4: addiu       $t5, $zero, 0x104
    ctx->r13 = ADD32(0, 0X104);
    // 0x0800B1C8: sh          $t5, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r13;
    // 0x0800B1CC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x0800B1D0: b           L_0800B270
    // 0x0800B1D4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_0800B270;
    // 0x0800B1D4: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_0800B1D8:
    // 0x0800B1D8: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800B1DC: lhu         $v1, 0xD2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XD2);
    // 0x0800B1E0: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800B1E4: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x0800B1E8: bne         $v1, $zero, L_0800B288
    if (ctx->r3 != 0) {
        // 0x0800B1EC: sh          $t8, 0x2($s0)
        MEM_H(0X2, ctx->r16) = ctx->r24;
            goto L_0800B288;
    }
    // 0x0800B1EC: sh          $t8, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r24;
    // 0x0800B1F0: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x0800B1F4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x0800B1F8: b           L_0800B270
    // 0x0800B1FC: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_0800B270;
    // 0x0800B1FC: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_0800B200:
    // 0x0800B200: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x0800B204: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B208: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x0800B20C: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800B210: jalr        $t9
    // 0x0800B214: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x0800B214: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_53:
    // 0x0800B218: sh          $zero, 0x48($v0)
    MEM_H(0X48, ctx->r2) = 0;
    // 0x0800B21C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x0800B220: addiu       $t3, $zero, 0x140
    ctx->r11 = ADD32(0, 0X140);
    // 0x0800B224: sh          $t3, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r11;
    // 0x0800B228: sh          $t2, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r10;
    // 0x0800B22C: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x0800B230: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x0800B234: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800B238: subu        $t6, $t5, $t4
    ctx->r14 = SUB32(ctx->r13, ctx->r12);
    // 0x0800B23C: sh          $t6, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r14;
    // 0x0800B240: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x0800B244: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800B248: addiu       $a0, $zero, 0x1AB
    ctx->r4 = ADD32(0, 0X1AB);
    // 0x0800B24C: addiu       $t8, $t7, -0x2
    ctx->r24 = ADD32(ctx->r15, -0X2);
    // 0x0800B250: bne         $t8, $zero, L_0800B288
    if (ctx->r24 != 0) {
        // 0x0800B254: sw          $t8, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r24;
            goto L_0800B288;
    }
    // 0x0800B254: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x0800B258: jalr        $t9
    // 0x0800B25C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x0800B25C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_54:
    // 0x0800B260: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800B264: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800B268: jalr        $t9
    // 0x0800B26C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x0800B26C: nop

    after_55:
L_0800B270:
    // 0x0800B270: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x0800B274: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800B278: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x0800B27C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x0800B280: jalr        $t9
    // 0x0800B284: lw          $a0, 0xD8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x0800B284: lw          $a0, 0xD8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XD8);
    after_56:
L_0800B288:
    // 0x0800B288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800B28C:
    // 0x0800B28C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800B290: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x0800B294: jr          $ra
    // 0x0800B298: nop

    TRACE_RETURN()
    return;
    // 0x0800B298: nop

;}
RECOMP_FUNC void func_08009A50_6BCCF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08009A50: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08009A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08009A58: lw          $t0, 0xD0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD0);
    // 0x08009A5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08009A60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x08009A64: lw          $t6, 0xE8($t0)
    ctx->r14 = MEM_W(ctx->r8, 0XE8);
    // 0x08009A68: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x08009A6C: lw          $a1, -0x39F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39F4);
    // 0x08009A70: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x08009A74: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x08009A78: bne         $t7, $zero, L_08009BF4
    if (ctx->r15 != 0) {
        // 0x08009A7C: lw          $a2, 0x18($t0)
        ctx->r6 = MEM_W(ctx->r8, 0X18);
            goto L_08009BF4;
    }
    // 0x08009A7C: lw          $a2, 0x18($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X18);
    // 0x08009A80: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x08009A84: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x08009A88: bne         $t8, $zero, L_08009BF4
    if (ctx->r24 != 0) {
        // 0x08009A8C: andi        $t9, $v1, 0x4000
        ctx->r25 = ctx->r3 & 0X4000;
            goto L_08009BF4;
    }
    // 0x08009A8C: andi        $t9, $v1, 0x4000
    ctx->r25 = ctx->r3 & 0X4000;
    // 0x08009A90: bnel        $t9, $zero, L_08009BF8
    if (ctx->r25 != 0) {
        // 0x08009A94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08009BF8;
    }
    goto skip_0;
    // 0x08009A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08009A98: lhu         $t1, 0x3E($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X3E);
    // 0x08009A9C: lh          $t2, 0x40($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X40);
    // 0x08009AA0: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x08009AA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08009AA8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x08009AAC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x08009AB0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC428) << 16);
    // 0x08009AB4: ldc1        $f8, -0x3BD8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC428));
    // 0x08009AB8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x08009ABC: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08009AC0: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x08009AC4: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x08009AC8: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x08009ACC: add.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f10.d + ctx->f0.d;
    // 0x08009AD0: cvt.s.d     $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f14.fl = CVT_S_D(ctx->f0.d);
    // 0x08009AD4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x08009AD8: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x08009ADC: nop

    // 0x08009AE0: bc1fl       L_08009B04
    if (!c1cs) {
        // 0x08009AE4: lui         $at, 0xC270
        ctx->r1 = S32(0XC270 << 16);
            goto L_08009B04;
    }
    goto skip_1;
    // 0x08009AE4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    skip_1:
    // 0x08009AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08009AEC: nop

    // 0x08009AF0: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x08009AF4: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x08009AF8: nop

    // 0x08009AFC: bc1t        L_08009B30
    if (c1cs) {
        // 0x08009B00: lui         $at, 0xC270
        ctx->r1 = S32(0XC270 << 16);
            goto L_08009B30;
    }
    // 0x08009B00: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
L_08009B04:
    // 0x08009B04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08009B08: nop

    // 0x08009B0C: c.le.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl <= ctx->f8.fl;
    // 0x08009B10: nop

    // 0x08009B14: bc1fl       L_08009BF8
    if (!c1cs) {
        // 0x08009B18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08009BF8;
    }
    goto skip_2;
    // 0x08009B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x08009B1C: sub.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x08009B20: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x08009B24: nop

    // 0x08009B28: bc1fl       L_08009BF8
    if (!c1cs) {
        // 0x08009B2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08009BF8;
    }
    goto skip_3;
    // 0x08009B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
L_08009B30:
    // 0x08009B30: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08009B34: lwc1        $f16, 0x8($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X8);
    // 0x08009B38: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08009B3C: lwc1        $f8, 0x10($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
    // 0x08009B40: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x08009B44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08009B48: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08009B4C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x08009B50: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x08009B54: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08009B58: jalr        $t9
    // 0x08009B5C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08009B5C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_0:
    // 0x08009B60: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x08009B64: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08009B68: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08009B6C: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x08009B70: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x08009B74: beq         $t4, $zero, L_08009B84
    if (ctx->r12 == 0) {
        // 0x08009B78: andi        $t5, $v1, 0x2
        ctx->r13 = ctx->r3 & 0X2;
            goto L_08009B84;
    }
    // 0x08009B78: andi        $t5, $v1, 0x2
    ctx->r13 = ctx->r3 & 0X2;
    // 0x08009B7C: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    // 0x08009B80: sh          $a0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r4;
L_08009B84:
    // 0x08009B84: beq         $t5, $zero, L_08009B98
    if (ctx->r13 == 0) {
        // 0x08009B88: lhu         $a0, 0x56($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X56);
            goto L_08009B98;
    }
    // 0x08009B88: lhu         $a0, 0x56($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X56);
    // 0x08009B8C: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    // 0x08009B90: addiu       $t6, $a0, -0x100
    ctx->r14 = ADD32(ctx->r4, -0X100);
    // 0x08009B94: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
L_08009B98:
    // 0x08009B98: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x08009B9C: beq         $t8, $zero, L_08009BB0
    if (ctx->r24 == 0) {
        // 0x08009BA0: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_08009BB0;
    }
    // 0x08009BA0: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x08009BA4: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    // 0x08009BA8: addiu       $t1, $a0, 0x100
    ctx->r9 = ADD32(ctx->r4, 0X100);
    // 0x08009BAC: andi        $a0, $t1, 0x3FF
    ctx->r4 = ctx->r9 & 0X3FF;
L_08009BB0:
    // 0x08009BB0: beql        $t3, $zero, L_08009BC8
    if (ctx->r11 == 0) {
        // 0x08009BB4: subu        $v1, $v0, $a0
        ctx->r3 = SUB32(ctx->r2, ctx->r4);
            goto L_08009BC8;
    }
    goto skip_4;
    // 0x08009BB4: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    skip_4:
    // 0x08009BB8: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    // 0x08009BBC: addiu       $t9, $a0, 0x200
    ctx->r25 = ADD32(ctx->r4, 0X200);
    // 0x08009BC0: andi        $a0, $t9, 0x3FF
    ctx->r4 = ctx->r25 & 0X3FF;
    // 0x08009BC4: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
L_08009BC8:
    // 0x08009BC8: bgez        $v1, L_08009BD8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08009BCC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_08009BD8;
    }
    // 0x08009BCC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x08009BD0: b           L_08009BD8
    // 0x08009BD4: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
        goto L_08009BD8;
    // 0x08009BD4: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
L_08009BD8:
    // 0x08009BD8: andi        $t5, $a0, 0x3FF
    ctx->r13 = ctx->r4 & 0X3FF;
    // 0x08009BDC: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x08009BE0: beql        $at, $zero, L_08009BF8
    if (ctx->r1 == 0) {
        // 0x08009BE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08009BF8;
    }
    goto skip_5;
    // 0x08009BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x08009BE8: lw          $t6, 0xE8($t0)
    ctx->r14 = MEM_W(ctx->r8, 0XE8);
    // 0x08009BEC: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x08009BF0: sw          $t7, 0xE8($t0)
    MEM_W(0XE8, ctx->r8) = ctx->r15;
L_08009BF4:
    // 0x08009BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08009BF8:
    // 0x08009BF8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x08009BFC: jr          $ra
    // 0x08009C00: nop

    TRACE_RETURN()
    return;
    // 0x08009C00: nop

;}
RECOMP_FUNC void func_08003BBC_6B6E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003BC4: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08003BC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003BCC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08003BD0: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08003BD4: bne         $t7, $zero, L_08003C0C
    if (ctx->r15 != 0) {
        // 0x08003BD8: addiu       $t9, $t9, -0x39D8
        ctx->r25 = ADD32(ctx->r25, -0X39D8);
            goto L_08003C0C;
    }
    // 0x08003BD8: addiu       $t9, $t9, -0x39D8
    ctx->r25 = ADD32(ctx->r25, -0X39D8);
    // 0x08003BDC: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x08003BE0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x08003BE4: jalr        $t9
    // 0x08003BE8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003BE8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x08003BEC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003BF0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003BF4: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08003BF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003BFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3C1C) << 16);
    // 0x08003C00: addiu       $a0, $a0, 0x3C1C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3C1C));
    // 0x08003C04: jalr        $t9
    // 0x08003C08: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003C08: sh          $t8, 0x8A($a2)
    MEM_H(0X8A, ctx->r6) = ctx->r24;
    after_1:
L_08003C0C:
    // 0x08003C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003C14: jr          $ra
    // 0x08003C18: nop

    TRACE_RETURN()
    return;
    // 0x08003C18: nop

;}
RECOMP_FUNC void func_08001D54_6B4FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001D58: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001D60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001D64: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001D68: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08001D6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001D70: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001D74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001D78: jalr        $t9
    // 0x08001D7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08001D80: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08001D84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D88: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08001D8C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1DB0) << 16);
    // 0x08001D94: addiu       $a0, $a0, 0x1DB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1DB0));
    // 0x08001D98: jalr        $t9
    // 0x08001D9C: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D9C: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x08001DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001DA8: jr          $ra
    // 0x08001DAC: nop

    TRACE_RETURN()
    return;
    // 0x08001DAC: nop

;}
RECOMP_FUNC void func_08008280_6BB520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08008280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08008284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08008288: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800828C: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08008290: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08008294: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08008298: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800829C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080082A0: beq         $v1, $zero, L_080082BC
    if (ctx->r3 == 0) {
        // 0x080082A4: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080082BC;
    }
    // 0x080082A4: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080082A8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080082AC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    // 0x080082B0: jalr        $t9
    // 0x080082B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080082B4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x080082B8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_080082BC:
    // 0x080082BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080082C0: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x080082C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x080082C8: jalr        $t9
    // 0x080082CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080082CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x080082D0: bne         $v0, $zero, L_080082E8
    if (ctx->r2 != 0) {
        // 0x080082D4: lui         $a0, 0x801
        ctx->r4 = S32(RELOC_HI16(20, 0X82F8) << 16);
            goto L_080082E8;
    }
    // 0x080082D4: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X82F8) << 16);
    // 0x080082D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080082DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080082E0: jalr        $t9
    // 0x080082E4: addiu       $a0, $a0, -0x7D08
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X82F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080082E4: addiu       $a0, $a0, -0x7D08
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X82F8));
    after_2:
L_080082E8:
    // 0x080082E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080082EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080082F0: jr          $ra
    // 0x080082F4: nop

    TRACE_RETURN()
    return;
    // 0x080082F4: nop

;}
RECOMP_FUNC void func_08007694_6BA934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007698: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800769C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080076A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080076A4: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080076A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080076AC: jalr        $t9
    // 0x080076B0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080076B0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x080076B4: beq         $v0, $zero, L_080076D8
    if (ctx->r2 == 0) {
        // 0x080076B8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_080076D8;
    }
    // 0x080076B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080076BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080076C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080076C4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
    // 0x080076C8: jalr        $t9
    // 0x080076CC: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080076CC: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    after_1:
    // 0x080076D0: b           L_08007718
    // 0x080076D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08007718;
    // 0x080076D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080076D8:
    // 0x080076D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080076DC: addiu       $t9, $t9, -0x2658
    ctx->r25 = ADD32(ctx->r25, -0X2658);
    // 0x080076E0: addiu       $a1, $zero, 0x360
    ctx->r5 = ADD32(0, 0X360);
    // 0x080076E4: jalr        $t9
    // 0x080076E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080076E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x080076EC: beq         $v0, $zero, L_08007714
    if (ctx->r2 == 0) {
        // 0x080076F0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08007714;
    }
    // 0x080076F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080076F4: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x080076F8: jalr        $t9
    // 0x080076FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080076FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x08007700: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007704: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007708: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7724) << 16);
    // 0x0800770C: jalr        $t9
    // 0x08007710: addiu       $a0, $a0, 0x7724
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7724));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08007710: addiu       $a0, $a0, 0x7724
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7724));
    after_4:
L_08007714:
    // 0x08007714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08007718:
    // 0x08007718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800771C: jr          $ra
    // 0x08007720: nop

    TRACE_RETURN()
    return;
    // 0x08007720: nop

;}
RECOMP_FUNC void func_080073FC_6BA69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080073FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007400: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007408: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800740C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08007410: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007414: jalr        $t9
    // 0x08007418: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007418: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x0800741C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007420: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08007424: jalr        $t9
    // 0x08007428: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007428: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x0800742C: beq         $v0, $zero, L_08007450
    if (ctx->r2 == 0) {
        // 0x08007430: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08007450;
    }
    // 0x08007430: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08007434: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007438: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800743C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X79B0) << 16);
    // 0x08007440: jalr        $t9
    // 0x08007444: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007444: addiu       $a0, $a0, 0x79B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X79B0));
    after_2:
    // 0x08007448: b           L_0800747C
    // 0x0800744C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_0800747C;
    // 0x0800744C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08007450:
    // 0x08007450: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007454: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08007458: jalr        $t9
    // 0x0800745C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800745C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x08007460: bne         $v0, $zero, L_08007478
    if (ctx->r2 != 0) {
        // 0x08007464: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X7488) << 16);
            goto L_08007478;
    }
    // 0x08007464: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7488) << 16);
    // 0x08007468: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800746C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007470: jalr        $t9
    // 0x08007474: addiu       $a0, $a0, 0x7488
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7488));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08007474: addiu       $a0, $a0, 0x7488
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7488));
    after_4:
L_08007478:
    // 0x08007478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800747C:
    // 0x0800747C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007480: jr          $ra
    // 0x08007484: nop

    TRACE_RETURN()
    return;
    // 0x08007484: nop

;}
RECOMP_FUNC void func_08000584_6B3824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800058C: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08000590: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000594: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000598: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800059C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080005A0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080005A4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080005A8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080005AC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080005B0: jalr        $t9
    // 0x080005B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x080005B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080005BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080005C0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080005C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X56C) << 16);
    // 0x080005D0: addiu       $a0, $a0, 0x56C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X56C));
    // 0x080005D4: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x080005D8: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x080005DC: jalr        $t9
    // 0x080005E0: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005E0: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x080005E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005EC: jr          $ra
    // 0x080005F0: nop

    TRACE_RETURN()
    return;
    // 0x080005F0: nop

;}
RECOMP_FUNC void func_08007850_6BAAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007850: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08007854: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x08007858: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x0800785C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08007860: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08007864: lw          $a2, -0x324C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X324C);
    // 0x08007868: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x0800786C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08007870: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08007874: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08007878: addiu       $t9, $t9, -0x420
    ctx->r25 = ADD32(ctx->r25, -0X420);
    // 0x0800787C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08007880: addiu       $a1, $zero, 0x203
    ctx->r5 = ADD32(0, 0X203);
    // 0x08007884: jalr        $t9
    // 0x08007888: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007888: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x0800788C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08007890: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007894: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007898: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X78B8) << 16);
    // 0x0800789C: addiu       $a0, $a0, 0x78B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X78B8));
    // 0x080078A0: jalr        $t9
    // 0x080078A4: sw          $v0, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080078A4: sw          $v0, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->r2;
    after_1:
    // 0x080078A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080078AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080078B0: jr          $ra
    // 0x080078B4: nop

    TRACE_RETURN()
    return;
    // 0x080078B4: nop

;}
RECOMP_FUNC void func_08002FFC_6B629C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003000: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800300C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08003010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003014: jalr        $t9
    // 0x08003018: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003018: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    after_0:
    // 0x0800301C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08003020: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003024: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08003028: lw          $t6, 0xE8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XE8);
    // 0x0800302C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003030: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3058) << 16);
    // 0x08003034: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x08003038: sw          $t7, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r15;
    // 0x0800303C: sb          $zero, -0x324C($at)
    MEM_B(-0X324C, ctx->r1) = 0;
    // 0x08003040: jalr        $t9
    // 0x08003044: addiu       $a0, $a0, 0x3058
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3058));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003044: addiu       $a0, $a0, 0x3058
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3058));
    after_1:
    // 0x08003048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800304C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003050: jr          $ra
    // 0x08003054: nop

    TRACE_RETURN()
    return;
    // 0x08003054: nop

;}
RECOMP_FUNC void func_08006B04_6B9DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006B04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08006B08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08006B0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08006B10: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08006B14: lw          $t0, 0xDC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XDC);
    // 0x08006B18: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA854) << 16);
    // 0x08006B1C: addiu       $t9, $t9, -0x57AC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA854));
    // 0x08006B20: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x08006B24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006B28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08006B2C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08006B30: jalr        $t9
    // 0x08006B34: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006B34: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x08006B38: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x08006B3C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x08006B40: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08006B44: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08006B48: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08006B4C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08006B50: sh          $t8, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r24;
    // 0x08006B54: jalr        $v0
    // 0x08006B58: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08006B58: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x08006B5C: beq         $v0, $zero, L_08006B70
    if (ctx->r2 == 0) {
        // 0x08006B60: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_08006B70;
    }
    // 0x08006B60: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08006B64: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08006B68: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08006B6C: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08006B70:
    // 0x08006B70: lw          $t4, 0x68($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X68);
    // 0x08006B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006B7C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x08006B80: beq         $t5, $zero, L_08006C40
    if (ctx->r13 == 0) {
        // 0x08006B84: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08006C40;
    }
    // 0x08006B84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006B88: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x08006B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006B90: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08006B94: bgez        $v1, L_08006BA8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006B98: andi        $t6, $v1, 0x3
        ctx->r14 = ctx->r3 & 0X3;
            goto L_08006BA8;
    }
    // 0x08006B98: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x08006B9C: beq         $t6, $zero, L_08006BA8
    if (ctx->r14 == 0) {
        // 0x08006BA0: nop
    
            goto L_08006BA8;
    }
    // 0x08006BA0: nop

    // 0x08006BA4: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_08006BA8:
    // 0x08006BA8: bne         $t6, $zero, L_08006BF0
    if (ctx->r14 != 0) {
        // 0x08006BAC: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_08006BF0;
    }
    // 0x08006BAC: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x08006BB0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x08006BB4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x08006BB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006BBC: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08006BC0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08006BC4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08006BC8: jalr        $t9
    // 0x08006BCC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08006BCC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_2:
    // 0x08006BD0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x08006BD4: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x08006BD8: bgez        $v1, L_08006BEC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08006BDC: andi        $t7, $v1, 0x3
        ctx->r15 = ctx->r3 & 0X3;
            goto L_08006BEC;
    }
    // 0x08006BDC: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x08006BE0: beq         $t7, $zero, L_08006BEC
    if (ctx->r15 == 0) {
        // 0x08006BE4: nop
    
            goto L_08006BEC;
    }
    // 0x08006BE4: nop

    // 0x08006BE8: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_08006BEC:
    // 0x08006BEC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_08006BF0:
    // 0x08006BF0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x08006BF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08006BF8: bne         $v1, $at, L_08006C20
    if (ctx->r3 != ctx->r1) {
        // 0x08006BFC: addiu       $v0, $v0, -0x20A0
        ctx->r2 = ADD32(ctx->r2, -0X20A0);
            goto L_08006C20;
    }
    // 0x08006BFC: addiu       $v0, $v0, -0x20A0
    ctx->r2 = ADD32(ctx->r2, -0X20A0);
    // 0x08006C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006C04: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08006C08: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08006C0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006C10: jalr        $v0
    // 0x08006C14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08006C14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08006C18: b           L_08006C58
    // 0x08006C1C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006C58;
    // 0x08006C1C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006C20:
    // 0x08006C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08006C28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08006C2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006C30: jalr        $v0
    // 0x08006C34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x08006C34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08006C38: b           L_08006C58
    // 0x08006C3C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08006C58;
    // 0x08006C3C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006C40:
    // 0x08006C40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006C44: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08006C48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08006C4C: jalr        $t9
    // 0x08006C50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08006C50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x08006C54: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08006C58:
    // 0x08006C58: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x08006C5C: jalr        $t9
    // 0x08006C60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08006C60: nop

    after_6:
    // 0x08006C64: beq         $v0, $zero, L_08006CB4
    if (ctx->r2 == 0) {
        // 0x08006C68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08006CB4;
    }
    // 0x08006C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08006C6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006C70: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08006C74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08006C78: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08006C7C: jalr        $t9
    // 0x08006C80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08006C80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x08006C84: beq         $v0, $zero, L_08006CA4
    if (ctx->r2 == 0) {
        // 0x08006C88: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
            goto L_08006CA4;
    }
    // 0x08006C88: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
    // 0x08006C8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08006C90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08006C94: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x08006C98: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08006C9C: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08006CA0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_08006CA4:
    // 0x08006CA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006CA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006CAC: jalr        $t9
    // 0x08006CB0: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08006CB0: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    after_8:
L_08006CB4:
    // 0x08006CB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08006CB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08006CBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08006CC0: jr          $ra
    // 0x08006CC4: nop

    TRACE_RETURN()
    return;
    // 0x08006CC4: nop

;}
RECOMP_FUNC void func_08002CD8_6B5F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002CE0: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002CE4: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x08002CE8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08002CEC: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08002CF0: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08002CF4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002CF8: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x08002CFC: bne         $v0, $zero, L_08002D1C
    if (ctx->r2 != 0) {
        // 0x08002D00: sh          $t9, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r25;
            goto L_08002D1C;
    }
    // 0x08002D00: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08002D04: sh          $t0, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r8;
    // 0x08002D08: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D0C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D10: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2D2C) << 16);
    // 0x08002D14: jalr        $t9
    // 0x08002D18: addiu       $a0, $a0, 0x2D2C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D2C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002D18: addiu       $a0, $a0, 0x2D2C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D2C));
    after_0:
L_08002D1C:
    // 0x08002D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002D24: jr          $ra
    // 0x08002D28: nop

    TRACE_RETURN()
    return;
    // 0x08002D28: nop

;}
RECOMP_FUNC void func_080094D4_6BC774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080094D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080094D8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080094DC: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x080094E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080094E4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x080094E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080094EC: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x080094F0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x080094F4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x080094F8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080094FC: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08009500: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08009504: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x08009508: jalr        $t9
    // 0x0800950C: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800950C: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_0:
    // 0x08009510: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x08009514: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009518: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x0800951C: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x08009520: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08009524: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08009528: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x0800952C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08009530: jalr        $t9
    // 0x08009534: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08009534: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_1:
    // 0x08009538: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x0800953C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009540: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08009544: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x08009548: lui         $a2, 0xC220
    ctx->r6 = S32(0XC220 << 16);
    // 0x0800954C: lui         $a3, 0xC2DC
    ctx->r7 = S32(0XC2DC << 16);
    // 0x08009550: jalr        $t9
    // 0x08009554: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08009554: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_2:
    // 0x08009558: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x0800955C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009560: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08009564: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08009568: jalr        $t9
    // 0x0800956C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800956C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_3:
    // 0x08009570: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08009574: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X95B0) << 16);
    // 0x08009578: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x0800957C: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08009580: addiu       $a0, $a0, -0x6A50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X95B0));
    // 0x08009584: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08009588: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x0800958C: bne         $v0, $zero, L_080095A0
    if (ctx->r2 != 0) {
        // 0x08009590: sh          $t2, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r10;
            goto L_080095A0;
    }
    // 0x08009590: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    // 0x08009594: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08009598: jalr        $t9
    // 0x0800959C: sh          $t3, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800959C: sh          $t3, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r11;
    after_4:
L_080095A0:
    // 0x080095A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080095A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x080095A8: jr          $ra
    // 0x080095AC: nop

    TRACE_RETURN()
    return;
    // 0x080095AC: nop

;}
RECOMP_FUNC void func_0800930C_6BC5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800930C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08009310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08009314: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08009318: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x0800931C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08009320: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08009324: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08009328: bne         $v0, $zero, L_0800933C
    if (ctx->r2 != 0) {
        // 0x0800932C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800933C;
    }
    // 0x0800932C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08009330: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X934C) << 16);
    // 0x08009334: jalr        $t9
    // 0x08009338: addiu       $a0, $a0, -0x6CB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X934C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08009338: addiu       $a0, $a0, -0x6CB4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X934C));
    after_0:
L_0800933C:
    // 0x0800933C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08009340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08009344: jr          $ra
    // 0x08009348: nop

    TRACE_RETURN()
    return;
    // 0x08009348: nop

;}
RECOMP_FUNC void func_0800711C_6BA3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800711C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08007120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08007124: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08007128: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x0800712C: lw          $t0, 0xDC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XDC);
    // 0x08007130: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA854) << 16);
    // 0x08007134: addiu       $t9, $t9, -0x57AC
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA854));
    // 0x08007138: lw          $t6, 0x18($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X18);
    // 0x0800713C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08007140: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08007144: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x08007148: jalr        $t9
    // 0x0800714C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800714C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x08007150: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x08007154: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x08007158: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x0800715C: lhu         $t8, 0x16($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X16);
    // 0x08007160: addiu       $v0, $v0, 0x3E94
    ctx->r2 = ADD32(ctx->r2, 0X3E94);
    // 0x08007164: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x08007168: sh          $t8, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r24;
    // 0x0800716C: jalr        $v0
    // 0x08007170: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08007170: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x08007174: beq         $v0, $zero, L_08007188
    if (ctx->r2 == 0) {
        // 0x08007178: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_08007188;
    }
    // 0x08007178: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x0800717C: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x08007180: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x08007184: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_08007188:
    // 0x08007188: lw          $t4, 0x68($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X68);
    // 0x0800718C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007194: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x08007198: beq         $t5, $zero, L_08007258
    if (ctx->r13 == 0) {
        // 0x0800719C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_08007258;
    }
    // 0x0800719C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080071A0: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x080071A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080071A8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080071AC: bgez        $v1, L_080071C0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x080071B0: andi        $t6, $v1, 0x3
        ctx->r14 = ctx->r3 & 0X3;
            goto L_080071C0;
    }
    // 0x080071B0: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x080071B4: beq         $t6, $zero, L_080071C0
    if (ctx->r14 == 0) {
        // 0x080071B8: nop
    
            goto L_080071C0;
    }
    // 0x080071B8: nop

    // 0x080071BC: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_080071C0:
    // 0x080071C0: bne         $t6, $zero, L_08007208
    if (ctx->r14 != 0) {
        // 0x080071C4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_08007208;
    }
    // 0x080071C4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x080071C8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x080071CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x080071D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080071D4: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x080071D8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080071DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x080071E0: jalr        $t9
    // 0x080071E4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080071E4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_2:
    // 0x080071E8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x080071EC: lbu         $v1, 0x8C($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8C);
    // 0x080071F0: bgez        $v1, L_08007204
    if (SIGNED(ctx->r3) >= 0) {
        // 0x080071F4: andi        $t7, $v1, 0x3
        ctx->r15 = ctx->r3 & 0X3;
            goto L_08007204;
    }
    // 0x080071F4: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x080071F8: beq         $t7, $zero, L_08007204
    if (ctx->r15 == 0) {
        // 0x080071FC: nop
    
            goto L_08007204;
    }
    // 0x080071FC: nop

    // 0x08007200: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_08007204:
    // 0x08007204: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_08007208:
    // 0x08007208: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x0800720C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08007210: bne         $v1, $at, L_08007238
    if (ctx->r3 != ctx->r1) {
        // 0x08007214: addiu       $v0, $v0, -0x20A0
        ctx->r2 = ADD32(ctx->r2, -0X20A0);
            goto L_08007238;
    }
    // 0x08007214: addiu       $v0, $v0, -0x20A0
    ctx->r2 = ADD32(ctx->r2, -0X20A0);
    // 0x08007218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800721C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08007220: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08007224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08007228: jalr        $v0
    // 0x0800722C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x0800722C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x08007230: b           L_08007270
    // 0x08007234: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08007270;
    // 0x08007234: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08007238:
    // 0x08007238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800723C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08007244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08007248: jalr        $v0
    // 0x0800724C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0800724C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x08007250: b           L_08007270
    // 0x08007254: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
        goto L_08007270;
    // 0x08007254: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08007258:
    // 0x08007258: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800725C: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08007260: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08007264: jalr        $t9
    // 0x08007268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08007268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x0800726C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_08007270:
    // 0x08007270: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x08007274: jalr        $t9
    // 0x08007278: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08007278: nop

    after_6:
    // 0x0800727C: beq         $v0, $zero, L_080072CC
    if (ctx->r2 == 0) {
        // 0x08007280: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080072CC;
    }
    // 0x08007280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08007284: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08007288: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x0800728C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08007290: addiu       $a1, $a1, 0x183C
    ctx->r5 = ADD32(ctx->r5, 0X183C);
    // 0x08007294: jalr        $t9
    // 0x08007298: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08007298: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x0800729C: beq         $v0, $zero, L_080072BC
    if (ctx->r2 == 0) {
        // 0x080072A0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
            goto L_080072BC;
    }
    // 0x080072A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X72E0) << 16);
    // 0x080072A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080072A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080072AC: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x080072B0: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080072B4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080072B8: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
L_080072BC:
    // 0x080072BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080072C0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080072C4: jalr        $t9
    // 0x080072C8: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080072C8: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X72E0));
    after_8:
L_080072CC:
    // 0x080072CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080072D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080072D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x080072D8: jr          $ra
    // 0x080072DC: nop

    TRACE_RETURN()
    return;
    // 0x080072DC: nop

;}
RECOMP_FUNC void func_08004808_6B7AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004808: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800480C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08004810: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08004814: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08004818: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x0800481C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004820: sb          $t6, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r14;
    // 0x08004824: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004828: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800482C: lbu         $a1, 0xD1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD1);
    // 0x08004830: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x08004834: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08004838: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x0800483C: jalr        $t9
    // 0x08004840: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004840: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x08004844: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08004848: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800484C: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x08004850: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004854: addiu       $t1, $zero, 0xCB
    ctx->r9 = ADD32(0, 0XCB);
    // 0x08004858: addiu       $t2, $zero, 0x420
    ctx->r10 = ADD32(0, 0X420);
    // 0x0800485C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004860: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    // 0x08004864: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x08004868: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x0800486C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08004870: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08004874: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08004878: jalr        $t9
    // 0x0800487C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800487C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08004880: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08004884: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x08004888: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800488C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004890: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x08004894: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08004898: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x0800489C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080048A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080048A4: lui         $a2, 0xC37A
    ctx->r6 = S32(0XC37A << 16);
    // 0x080048A8: jalr        $t9
    // 0x080048AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080048AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x080048B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080048B4: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x080048B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080048BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X48E0) << 16);
    // 0x080048C0: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x080048C4: jalr        $t9
    // 0x080048C8: addiu       $a0, $a0, 0x48E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X48E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080048C8: addiu       $a0, $a0, 0x48E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X48E0));
    after_3:
    // 0x080048CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080048D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080048D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080048D8: jr          $ra
    // 0x080048DC: nop

    TRACE_RETURN()
    return;
    // 0x080048DC: nop

;}
RECOMP_FUNC void func_080038B8_6B6B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080038B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080038BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080038C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080038C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080038C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080038CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080038D0: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x080038D4: sb          $t6, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r14;
    // 0x080038D8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080038DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080038E0: jalr        $t9
    // 0x080038E4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080038E4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x080038E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080038EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080038F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X390C) << 16);
    // 0x080038F4: jalr        $t9
    // 0x080038F8: addiu       $a0, $a0, 0x390C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X390C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080038F8: addiu       $a0, $a0, 0x390C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X390C));
    after_1:
    // 0x080038FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003904: jr          $ra
    // 0x08003908: nop

    TRACE_RETURN()
    return;
    // 0x08003908: nop

;}
RECOMP_FUNC void func_080016B4_6B4954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080016B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080016B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080016BC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080016C0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080016C4: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x080016C8: lhu         $t6, 0xD4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XD4);
    // 0x080016CC: lhu         $t1, 0x16($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X16);
    // 0x080016D0: lhu         $t5, 0x18($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X18);
    // 0x080016D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x080016D8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x080016DC: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x080016E0: lhu         $t0, 0xD6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD6);
    // 0x080016E4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080016E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016EC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x080016F0: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x080016F4: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x080016F8: lhu         $t4, 0xD8($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XD8);
    // 0x080016FC: addiu       $t9, $t9, -0x61C0
    ctx->r25 = ADD32(ctx->r25, -0X61C0);
    // 0x08001700: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08001704: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x08001708: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x0800170C: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x08001710: lui         $a1, 0xBC44
    ctx->r5 = S32(0XBC44 << 16);
    // 0x08001714: jalr        $t9
    // 0x08001718: ori         $a1, $a1, 0x9BA6
    ctx->r5 = ctx->r5 | 0X9BA6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001718: ori         $a1, $a1, 0x9BA6
    ctx->r5 = ctx->r5 | 0X9BA6;
    after_0:
    // 0x0800171C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001720: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001724: lbu         $a1, 0xD0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XD0);
    // 0x08001728: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800172C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001730: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08001734: jalr        $t9
    // 0x08001738: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001738: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800173C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001740: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001744: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001748: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x0800174C: jalr        $t9
    // 0x08001750: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001750: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    after_2:
    // 0x08001754: beq         $v0, $zero, L_080017E0
    if (ctx->r2 == 0) {
        // 0x08001758: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080017E0;
    }
    // 0x08001758: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800175C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001760: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001764: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001768: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x0800176C: jalr        $t9
    // 0x08001770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x08001774: beq         $v0, $zero, L_080017D0
    if (ctx->r2 == 0) {
        // 0x08001778: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080017D0;
    }
    // 0x08001778: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x0800177C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001780: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001784: jalr        $t9
    // 0x08001788: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001788: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x0800178C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08001790: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001794: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001798: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x0800179C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080017A0: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC358) << 16);
    // 0x080017A4: ldc1        $f18, -0x3CA8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(20, 0XC358));
    // 0x080017A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017AC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080017B0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080017B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017B8: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080017BC: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080017C0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080017C4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080017C8: jalr        $t9
    // 0x080017CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080017CC: nop

    after_5:
L_080017D0:
    // 0x080017D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080017D4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080017D8: jalr        $t9
    // 0x080017DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080017DC: nop

    after_6:
L_080017E0:
    // 0x080017E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080017E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080017E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080017EC: jr          $ra
    // 0x080017F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x080017F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_080024A0_6B5740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080024A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080024AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080024B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080024B4: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080024B8: sb          $zero, -0x324A($at)
    MEM_B(-0X324A, ctx->r1) = 0;
    // 0x080024BC: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x080024C0: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x080024C4: jalr        $t9
    // 0x080024C8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080024C8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x080024CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080024D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080024D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X24F0) << 16);
    // 0x080024D8: jalr        $t9
    // 0x080024DC: addiu       $a0, $a0, 0x24F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X24F0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080024DC: addiu       $a0, $a0, 0x24F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X24F0));
    after_1:
    // 0x080024E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080024E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080024E8: jr          $ra
    // 0x080024EC: nop

    TRACE_RETURN()
    return;
    // 0x080024EC: nop

;}
RECOMP_FUNC void func_08003B00_6B6DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003B00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003B04: jr          $ra
    // 0x08003B08: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08003B08: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08007B58_6BADF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007B60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007B64: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08007B68: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08007B6C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x08007B70: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08007B74: bne         $v0, $zero, L_08007BA0
    if (ctx->r2 != 0) {
        // 0x08007B78: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08007BA0;
    }
    // 0x08007B78: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08007B7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007B80: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08007B84: jalr        $t9
    // 0x08007B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08007B8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007B90: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007B94: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7BB0) << 16);
    // 0x08007B98: jalr        $t9
    // 0x08007B9C: addiu       $a0, $a0, 0x7BB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7BB0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007B9C: addiu       $a0, $a0, 0x7BB0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7BB0));
    after_1:
L_08007BA0:
    // 0x08007BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007BA8: jr          $ra
    // 0x08007BAC: nop

    TRACE_RETURN()
    return;
    // 0x08007BAC: nop

;}
RECOMP_FUNC void func_0800332C_6B65CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800332C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003330: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003334: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800333C: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x08003340: lbu         $t6, 0x184($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X184);
    // 0x08003344: lui         $at, 0xFF3F
    ctx->r1 = S32(0XFF3F << 16);
    // 0x08003348: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x0800334C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x08003350: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08003354: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08003358: lbu         $t0, 0x184($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X184);
    // 0x0800335C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08003360: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x08003364: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x08003368: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x0800336C: blez        $t2, L_080033CC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x08003370: sb          $t1, 0x184($v0)
        MEM_B(0X184, ctx->r2) = ctx->r9;
            goto L_080033CC;
    }
    // 0x08003370: sb          $t1, 0x184($v0)
    MEM_B(0X184, ctx->r2) = ctx->r9;
    // 0x08003374: sb          $zero, 0x184($v0)
    MEM_B(0X184, ctx->r2) = 0;
    // 0x08003378: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x0800337C: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x08003380: lw          $t3, 0xE8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XE8);
    // 0x08003384: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003388: sh          $t5, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r13;
    // 0x0800338C: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08003390: sw          $t4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->r12;
    // 0x08003394: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08003398: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x0800339C: jalr        $t9
    // 0x080033A0: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080033A0: addiu       $a0, $zero, 0x1A9
    ctx->r4 = ADD32(0, 0X1A9);
    after_0:
    // 0x080033A4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080033A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080033AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080033B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080033B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X33DC) << 16);
    // 0x080033B8: addiu       $a0, $a0, 0x33DC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X33DC));
    // 0x080033BC: swc1        $f0, 0x80($a2)
    MEM_W(0X80, ctx->r6) = ctx->f0.u32l;
    // 0x080033C0: swc1        $f0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->f0.u32l;
    // 0x080033C4: jalr        $t9
    // 0x080033C8: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080033C8: swc1        $f0, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f0.u32l;
    after_1:
L_080033CC:
    // 0x080033CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080033D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080033D4: jr          $ra
    // 0x080033D8: nop

    TRACE_RETURN()
    return;
    // 0x080033D8: nop

;}
RECOMP_FUNC void func_08002FA4_6B6244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002FAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002FB0: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08002FB4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002FB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002FBC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002FC0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08002FC4: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x08002FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002FCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002FD0: jalr        $t9
    // 0x08002FD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002FD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002FD8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002FDC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002FE0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X1D54) << 16);
    // 0x08002FE4: jalr        $t9
    // 0x08002FE8: addiu       $a0, $a0, 0x1D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1D54));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002FE8: addiu       $a0, $a0, 0x1D54
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X1D54));
    after_1:
    // 0x08002FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002FF4: jr          $ra
    // 0x08002FF8: nop

    TRACE_RETURN()
    return;
    // 0x08002FF8: nop

;}
RECOMP_FUNC void func_08005D80_6B9020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005D80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08005D84: jr          $ra
    // 0x08005D88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08005D88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003C1C_6B6EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003C24: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x08003C28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003C2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003C30: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x08003C34: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x08003C38: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08003C3C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x08003C40: bne         $v0, $zero, L_08003C58
    if (ctx->r2 != 0) {
        // 0x08003C44: sh          $t8, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r24;
            goto L_08003C58;
    }
    // 0x08003C44: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08003C48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X3C68) << 16);
    // 0x08003C4C: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08003C50: jalr        $t9
    // 0x08003C54: addiu       $a0, $a0, 0x3C68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3C68));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003C54: addiu       $a0, $a0, 0x3C68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X3C68));
    after_0:
L_08003C58:
    // 0x08003C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003C60: jr          $ra
    // 0x08003C64: nop

    TRACE_RETURN()
    return;
    // 0x08003C64: nop

;}
RECOMP_FUNC void func_08005EB8_6B9158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005EB8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08005EBC: jr          $ra
    // 0x08005EC0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08005EC0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002864_6B5B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800286C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002870: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08002874: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002878: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800287C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08002880: bne         $v0, $zero, L_08002894
    if (ctx->r2 != 0) {
        // 0x08002884: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08002894;
    }
    // 0x08002884: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08002888: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2D6C) << 16);
    // 0x0800288C: jalr        $t9
    // 0x08002890: addiu       $a0, $a0, 0x2D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D6C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002890: addiu       $a0, $a0, 0x2D6C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2D6C));
    after_0:
L_08002894:
    // 0x08002894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800289C: jr          $ra
    // 0x080028A0: nop

    TRACE_RETURN()
    return;
    // 0x080028A0: nop

;}
RECOMP_FUNC void func_08002EC8_6B6168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002ECC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002ED4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002ED8: addiu       $t9, $t9, 0x210
    ctx->r25 = ADD32(ctx->r25, 0X210);
    // 0x08002EDC: jalr        $t9
    // 0x08002EE0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002EE0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08002EE4: bne         $v0, $zero, L_08002EFC
    if (ctx->r2 != 0) {
        // 0x08002EE8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X2F0C) << 16);
            goto L_08002EFC;
    }
    // 0x08002EE8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X2F0C) << 16);
    // 0x08002EEC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002EF0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002EF4: jalr        $t9
    // 0x08002EF8: addiu       $a0, $a0, 0x2F0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2F0C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002EF8: addiu       $a0, $a0, 0x2F0C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X2F0C));
    after_1:
L_08002EFC:
    // 0x08002EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002F04: jr          $ra
    // 0x08002F08: nop

    TRACE_RETURN()
    return;
    // 0x08002F08: nop

;}
RECOMP_FUNC void func_08007488_6BA728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800748C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007494: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08007498: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x0800749C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080074A0: jalr        $t9
    // 0x080074A4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080074A4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x080074A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080074AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080074B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X74CC) << 16);
    // 0x080074B4: jalr        $t9
    // 0x080074B8: addiu       $a0, $a0, 0x74CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X74CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080074B8: addiu       $a0, $a0, 0x74CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X74CC));
    after_1:
    // 0x080074BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080074C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080074C4: jr          $ra
    // 0x080074C8: nop

    TRACE_RETURN()
    return;
    // 0x080074C8: nop

;}
RECOMP_FUNC void func_08006AC0_6B9D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006AC4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC3FC) << 16);
    // 0x08006AC8: lwc1        $f0, -0x3C04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC3FC));
    // 0x08006ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006AD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006AD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006AD8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006ADC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X6B04) << 16);
    // 0x08006AE0: addiu       $a0, $a0, 0x6B04
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X6B04));
    // 0x08006AE4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08006AE8: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08006AEC: jalr        $t9
    // 0x08006AF0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006AF0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x08006AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006AFC: jr          $ra
    // 0x08006B00: nop

    TRACE_RETURN()
    return;
    // 0x08006B00: nop

;}
RECOMP_FUNC void func_080093FC_6BC69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080093FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08009400: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08009404: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08009408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800940C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08009410: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08009414: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08009418: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800941C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08009420: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009424: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08009428: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x0800942C: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08009430: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x08009434: lui         $a1, 0xC32A
    ctx->r5 = S32(0XC32A << 16);
    // 0x08009438: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x0800943C: jalr        $t9
    // 0x08009440: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08009440: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    after_0:
    // 0x08009444: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08009448: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800944C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08009450: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08009454: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08009458: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x0800945C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08009460: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08009464: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08009468: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x0800946C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08009470: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08009474: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x08009478: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0800947C: jalr        $t9
    // 0x08009480: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08009480: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x08009484: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08009488: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800948C: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08009490: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08009494: jalr        $t9
    // 0x08009498: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08009498: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_2:
    // 0x0800949C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x080094A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080094A4: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080094A8: jalr        $t9
    // 0x080094AC: sb          $zero, 0xDD($t0)
    MEM_B(0XDD, ctx->r8) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080094AC: sb          $zero, 0xDD($t0)
    MEM_B(0XDD, ctx->r8) = 0;
    after_3:
    // 0x080094B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080094B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080094B8: lui         $a0, 0x801
    ctx->r4 = S32(RELOC_HI16(20, 0X8A38) << 16);
    // 0x080094BC: jalr        $t9
    // 0x080094C0: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080094C0: addiu       $a0, $a0, -0x75C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X8A38));
    after_4:
    // 0x080094C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080094C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080094CC: jr          $ra
    // 0x080094D0: nop

    TRACE_RETURN()
    return;
    // 0x080094D0: nop

;}
RECOMP_FUNC void func_08006ED0_6BA170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006ED4: lui         $at, 0x801
    ctx->r1 = S32(RELOC_HI16(20, 0XC404) << 16);
    // 0x08006ED8: lwc1        $f0, -0x3BFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(20, 0XC404));
    // 0x08006EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006EE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006EE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006EE8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006EEC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X6F14) << 16);
    // 0x08006EF0: addiu       $a0, $a0, 0x6F14
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X6F14));
    // 0x08006EF4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08006EF8: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08006EFC: jalr        $t9
    // 0x08006F00: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006F00: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x08006F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006F0C: jr          $ra
    // 0x08006F10: nop

    TRACE_RETURN()
    return;
    // 0x08006F10: nop

;}
RECOMP_FUNC void func_08007C70_6BAF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08007C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08007C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08007C78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08007C7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08007C80: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x08007C84: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08007C88: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08007C8C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08007C90: jalr        $t9
    // 0x08007C94: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007C94: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    after_0:
    // 0x08007C98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007C9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007CA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7CBC) << 16);
    // 0x08007CA4: jalr        $t9
    // 0x08007CA8: addiu       $a0, $a0, 0x7CBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7CBC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007CA8: addiu       $a0, $a0, 0x7CBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7CBC));
    after_1:
    // 0x08007CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007CB4: jr          $ra
    // 0x08007CB8: nop

    TRACE_RETURN()
    return;
    // 0x08007CB8: nop

;}
RECOMP_FUNC void func_08000C14_6B3EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000C18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000C1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000C20: lbu         $t8, 0x30($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X30);
    // 0x08000C24: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08000C28: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08000C2C: ori         $t9, $t8, 0x3
    ctx->r25 = ctx->r24 | 0X3;
    // 0x08000C30: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x08000C34: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000C38: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000C3C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C40: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08000C44: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000C48: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000C4C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000C50: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08000C54: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000C58: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08000C5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000C60: jalr        $t9
    // 0x08000C64: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C64: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x08000C68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000C6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000C70: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000C74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000C78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000C7C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08000C80: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000C84: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08000C88: sb          $t0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r8;
    // 0x08000C8C: lw          $v0, 0xE8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE8);
    // 0x08000C90: andi        $a1, $v0, 0x400
    ctx->r5 = ctx->r2 & 0X400;
    // 0x08000C94: beq         $a1, $zero, L_08000CE4
    if (ctx->r5 == 0) {
        // 0x08000C98: nop
    
            goto L_08000CE4;
    }
    // 0x08000C98: nop

    // 0x08000C9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000CA0: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x08000CA4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x08000CA8: lui         $t9, 0x801
    ctx->r25 = S32(RELOC_HI16(20, 0XA6F8) << 16);
    // 0x08000CAC: addiu       $t9, $t9, -0x5908
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(20, 0XA6F8));
    // 0x08000CB0: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x08000CB4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x08000CB8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08000CBC: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x08000CC0: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x08000CC4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x08000CC8: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x08000CCC: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x08000CD0: jalr        $t9
    // 0x08000CD4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000CD4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x08000CD8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000CDC: lw          $v0, 0xE8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE8);
    // 0x08000CE0: andi        $a1, $v0, 0x400
    ctx->r5 = ctx->r2 & 0X400;
L_08000CE4:
    // 0x08000CE4: beq         $a1, $zero, L_08000CFC
    if (ctx->r5 == 0) {
        // 0x08000CE8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0XD34) << 16);
            goto L_08000CFC;
    }
    // 0x08000CE8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0XD34) << 16);
    // 0x08000CEC: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x08000CF0: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x08000CF4: sw          $t4, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r12;
    // 0x08000CF8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_08000CFC:
    // 0x08000CFC: andi        $t5, $v0, 0x800
    ctx->r13 = ctx->r2 & 0X800;
    // 0x08000D00: beq         $t5, $zero, L_08000D14
    if (ctx->r13 == 0) {
        // 0x08000D04: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000D14;
    }
    // 0x08000D04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D08: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x08000D0C: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x08000D10: sw          $t6, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r14;
L_08000D14:
    // 0x08000D14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D18: jalr        $t9
    // 0x08000D1C: addiu       $a0, $a0, 0xD34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0XD34));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D1C: addiu       $a0, $a0, 0xD34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0XD34));
    after_2:
    // 0x08000D20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000D28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000D2C: jr          $ra
    // 0x08000D30: nop

    TRACE_RETURN()
    return;
    // 0x08000D30: nop

;}
RECOMP_FUNC void func_08002918_6B5BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800291C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002920: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002928: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800292C: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002930: lbu         $t7, 0x184($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X184);
    // 0x08002934: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08002938: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x0800293C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x08002940: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08002944: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08002948: lbu         $t0, 0x184($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X184);
    // 0x0800294C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002950: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002954: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08002958: sb          $t1, 0x184($v0)
    MEM_B(0X184, ctx->r2) = ctx->r9;
    // 0x0800295C: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08002960: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002964: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08002968: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x0800296C: lhu         $t3, -0x5232($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X5232);
    // 0x08002970: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002974: addiu       $a0, $zero, 0x261
    ctx->r4 = ADD32(0, 0X261);
    // 0x08002978: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x0800297C: bnel        $t4, $zero, L_08002998
    if (ctx->r12 != 0) {
        // 0x08002980: lbu         $t5, 0x184($v0)
        ctx->r13 = MEM_BU(ctx->r2, 0X184);
            goto L_08002998;
    }
    goto skip_0;
    // 0x08002980: lbu         $t5, 0x184($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X184);
    skip_0:
    // 0x08002984: jalr        $t9
    // 0x08002988: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002988: lui         $a3, 0x43A5
    ctx->r7 = S32(0X43A5 << 16);
    after_0:
    // 0x0800298C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002990: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002994: lbu         $t5, 0x184($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X184);
L_08002998:
    // 0x08002998: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x0800299C: addiu       $t7, $zero, 0x154
    ctx->r15 = ADD32(0, 0X154);
    // 0x080029A0: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x080029A4: bne         $at, $zero, L_080029C8
    if (ctx->r1 != 0) {
        // 0x080029A8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(20, 0X29D8) << 16);
            goto L_080029C8;
    }
    // 0x080029A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X29D8) << 16);
    // 0x080029AC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x080029B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080029B4: sb          $t6, 0x184($v0)
    MEM_B(0X184, ctx->r2) = ctx->r14;
    // 0x080029B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080029BC: addiu       $a0, $a0, 0x29D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X29D8));
    // 0x080029C0: jalr        $t9
    // 0x080029C4: sh          $t7, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080029C4: sh          $t7, 0x8A($t8)
    MEM_H(0X8A, ctx->r24) = ctx->r15;
    after_1:
L_080029C8:
    // 0x080029C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080029CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080029D0: jr          $ra
    // 0x080029D4: nop

    TRACE_RETURN()
    return;
    // 0x080029D4: nop

;}
RECOMP_FUNC void func_080079E4_6BAC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080079E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080079E8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080079EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080079F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080079F4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080079F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080079FC: jalr        $t9
    // 0x08007A00: ori         $a0, $zero, 0x8243
    ctx->r4 = 0 | 0X8243;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08007A00: ori         $a0, $zero, 0x8243
    ctx->r4 = 0 | 0X8243;
    after_0:
    // 0x08007A04: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08007A08: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08007A0C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08007A10: lw          $t6, 0xE8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XE8);
    // 0x08007A14: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x08007A18: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x08007A1C: jalr        $t9
    // 0x08007A20: sw          $t7, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08007A20: sw          $t7, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r15;
    after_1:
    // 0x08007A24: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08007A28: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08007A2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08007A30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08007A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08007A38: jalr        $t9
    // 0x08007A3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08007A3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08007A40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08007A44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08007A48: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X7A64) << 16);
    // 0x08007A4C: jalr        $t9
    // 0x08007A50: addiu       $a0, $a0, 0x7A64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7A64));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08007A50: addiu       $a0, $a0, 0x7A64
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X7A64));
    after_3:
    // 0x08007A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08007A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08007A5C: jr          $ra
    // 0x08007A60: nop

    TRACE_RETURN()
    return;
    // 0x08007A60: nop

;}
RECOMP_FUNC void func_08005CC0_6B8F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005CC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08005CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005CCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005CD0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08005CD4: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08005CD8: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08005CDC: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08005CE0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08005CE4: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x08005CE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08005CEC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x08005CF0: lhu         $v0, -0x4F84($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4F84);
    // 0x08005CF4: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x08005CF8: beq         $t7, $zero, L_08005D34
    if (ctx->r15 == 0) {
        // 0x08005CFC: andi        $t8, $v0, 0x4000
        ctx->r24 = ctx->r2 & 0X4000;
            goto L_08005D34;
    }
    // 0x08005CFC: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x08005D00: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005D04: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08005D08: lwc1        $f4, 0x1A0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1A0);
    // 0x08005D0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005D10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005D14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005D18: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08005D1C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X5C68) << 16);
    // 0x08005D20: addiu       $a0, $a0, 0x5C68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5C68));
    // 0x08005D24: jalr        $t9
    // 0x08005D28: swc1        $f8, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005D28: swc1        $f8, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = ctx->f8.u32l;
    after_0:
    // 0x08005D2C: b           L_08005D6C
    // 0x08005D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08005D6C;
    // 0x08005D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005D34:
    // 0x08005D34: beq         $t8, $zero, L_08005D68
    if (ctx->r24 == 0) {
        // 0x08005D38: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_08005D68;
    }
    // 0x08005D38: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005D3C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08005D40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08005D44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005D48: lwc1        $f10, 0x1A0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1A0);
    // 0x08005D4C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005D50: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005D54: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x08005D58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(20, 0X5C68) << 16);
    // 0x08005D5C: addiu       $a0, $a0, 0x5C68
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(20, 0X5C68));
    // 0x08005D60: jalr        $t9
    // 0x08005D64: swc1        $f18, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005D64: swc1        $f18, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = ctx->f18.u32l;
    after_1:
L_08005D68:
    // 0x08005D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005D6C:
    // 0x08005D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005D70: jr          $ra
    // 0x08005D74: nop

    TRACE_RETURN()
    return;
    // 0x08005D74: nop

    // 0x08005D78: jr          $ra
    // 0x08005D7C: nop

    TRACE_RETURN()
    return;
    // 0x08005D7C: nop

;}
