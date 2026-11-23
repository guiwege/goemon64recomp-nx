#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_080009D8_6F3EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080009DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080009E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080009E4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080009E8: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x080009EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080009F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080009F4: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x080009F8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x080009FC: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x08000A00: lbu         $t0, 0xD1($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD1);
    // 0x08000A04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A08: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000A0C: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x08000A10: sb          $t1, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r9;
    // 0x08000A14: lbu         $a1, 0xD1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD1);
    // 0x08000A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08000A1C: jalr        $t9
    // 0x08000A20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000A24: lbu         $t2, 0xD1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD1);
    // 0x08000A28: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A30: bne         $t2, $zero, L_08000A4C
    if (ctx->r10 != 0) {
        // 0x08000A34: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0XA60) << 16);
            goto L_08000A4C;
    }
    // 0x08000A34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0XA60) << 16);
    // 0x08000A38: jalr        $t9
    // 0x08000A3C: addiu       $a0, $a0, 0xA60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0XA60));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A3C: addiu       $a0, $a0, 0xA60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0XA60));
    after_1:
    // 0x08000A40: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x08000A44: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08000A48: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
L_08000A4C:
    // 0x08000A4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000A50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08000A54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000A58: jr          $ra
    // 0x08000A5C: nop

    TRACE_RETURN()
    return;
    // 0x08000A5C: nop

;}
RECOMP_FUNC void func_08002190_6F5670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800219C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080021A0: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080021A4: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080021A8: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x080021AC: beql        $t6, $zero, L_08002248
    if (ctx->r14 == 0) {
        // 0x080021B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002248;
    }
    goto skip_0;
    // 0x080021B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080021B4: jalr        $t9
    // 0x080021B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080021BC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080021C0: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x080021C4: lw          $t7, 0xD4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD4);
    // 0x080021C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080021CC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080021D0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080021D4: sw          $t8, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r24;
    // 0x080021D8: lbu         $v0, 0xD0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XD0);
    // 0x080021DC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x080021E0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080021E4: beq         $v0, $zero, L_080021FC
    if (ctx->r2 == 0) {
        // 0x080021E8: addiu       $a0, $zero, 0x224
        ctx->r4 = ADD32(0, 0X224);
            goto L_080021FC;
    }
    // 0x080021E8: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x080021EC: beq         $v0, $at, L_080021FC
    if (ctx->r2 == ctx->r1) {
        // 0x080021F0: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_080021FC;
    }
    // 0x080021F0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x080021F4: bne         $v0, $at, L_0800220C
    if (ctx->r2 != ctx->r1) {
        // 0x080021F8: nop
    
            goto L_0800220C;
    }
    // 0x080021F8: nop

L_080021FC:
    // 0x080021FC: jalr        $t9
    // 0x08002200: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002200: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x08002204: b           L_08002224
    // 0x08002208: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
        goto L_08002224;
    // 0x08002208: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_0800220C:
    // 0x0800220C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002210: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08002214: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    // 0x08002218: jalr        $t9
    // 0x0800221C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800221C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x08002220: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08002224:
    // 0x08002224: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08002228: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800222C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002230: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08002234: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08002238: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    // 0x0800223C: jalr        $t9
    // 0x08002240: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002240: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    after_3:
    // 0x08002244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002248:
    // 0x08002248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800224C: jr          $ra
    // 0x08002250: nop

    TRACE_RETURN()
    return;
    // 0x08002250: nop

;}
RECOMP_FUNC void func_08003DC8_6F72A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003DCC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003DD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003DD8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003DDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003DE0: jalr        $t9
    // 0x08003DE4: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003DE4: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    after_0:
    // 0x08003DE8: beq         $v0, $zero, L_08003E20
    if (ctx->r2 == 0) {
        // 0x08003DEC: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08003E20;
    }
    // 0x08003DEC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08003DF0: lw          $t6, 0x60($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X60);
    // 0x08003DF4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003DF8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003DFC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08003E00: sw          $t7, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r15;
    // 0x08003E04: jalr        $t9
    // 0x08003E08: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003E08: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_1:
    // 0x08003E0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003E10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003E14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3E30) << 16);
    // 0x08003E18: jalr        $t9
    // 0x08003E1C: addiu       $a0, $a0, 0x3E30
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3E30));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003E1C: addiu       $a0, $a0, 0x3E30
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3E30));
    after_2:
L_08003E20:
    // 0x08003E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003E28: jr          $ra
    // 0x08003E2C: nop

    TRACE_RETURN()
    return;
    // 0x08003E2C: nop

;}
RECOMP_FUNC void func_0800021C_6F36FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800021C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x08000220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000224: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000228: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800022C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08000230: beq         $v0, $zero, L_080003F8
    if (ctx->r2 == 0) {
        // 0x08000234: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_080003F8;
    }
    // 0x08000234: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000238: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800023C: lbu         $t6, -0x3298($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3298);
    // 0x08000240: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X552C) << 16);
    // 0x08000244: addiu       $a1, $a1, 0x552C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X552C));
    // 0x08000248: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x0800024C: bne         $at, $zero, L_08000404
    if (ctx->r1 != 0) {
        // 0x08000250: addiu       $a2, $zero, 0x9
        ctx->r6 = ADD32(0, 0X9);
            goto L_08000404;
    }
    // 0x08000250: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x08000254: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08000258: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x0800025C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08000260: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x08000264: jalr        $v0
    // 0x08000268: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08000268: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x0800026C: beq         $v0, $zero, L_080002E8
    if (ctx->r2 == 0) {
        // 0x08000270: lw          $a3, 0x3C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X3C);
            goto L_080002E8;
    }
    // 0x08000270: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x08000274: lw          $t7, 0x64($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X64);
    // 0x08000278: addiu       $t9, $zero, 0x2B
    ctx->r25 = ADD32(0, 0X2B);
    // 0x0800027C: sh          $t9, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r25;
    // 0x08000280: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000284: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08000288: sw          $t8, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r24;
    // 0x0800028C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000290: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x08000294: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08000298: jalr        $t9
    // 0x0800029C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800029C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_1:
    // 0x080002A0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x080002A4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x080002A8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080002AC: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x080002B0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x080002B4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x080002B8: nop

    // 0x080002BC: sh          $t1, 0xC8($v1)
    MEM_H(0XC8, ctx->r3) = ctx->r9;
    // 0x080002C0: lwc1        $f8, 0xC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC);
    // 0x080002C4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080002C8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x080002CC: nop

    // 0x080002D0: sh          $t3, 0xCA($v1)
    MEM_H(0XCA, ctx->r3) = ctx->r11;
    // 0x080002D4: lwc1        $f16, 0x10($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X10);
    // 0x080002D8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x080002DC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x080002E0: nop

    // 0x080002E4: sh          $t5, 0xCC($v1)
    MEM_H(0XCC, ctx->r3) = ctx->r13;
L_080002E8:
    // 0x080002E8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080002EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X72C) << 16);
    // 0x080002F0: addiu       $a1, $a1, 0x72C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X72C));
    // 0x080002F4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x080002F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x080002FC: jalr        $t9
    // 0x08000300: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000300: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x08000304: beq         $v0, $zero, L_080003DC
    if (ctx->r2 == 0) {
        // 0x08000308: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_080003DC;
    }
    // 0x08000308: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x0800030C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x08000310: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000314: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000318: addiu       $v0, $v0, 0x41C4
    ctx->r2 = ADD32(ctx->r2, 0X41C4);
    // 0x0800031C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08000320: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x08000324: jalr        $v0
    // 0x08000328: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x08000328: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_3:
    // 0x0800032C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x08000330: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000334: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000338: lw          $t7, 0x64($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X64);
    // 0x0800033C: lw          $a1, 0x18($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X18);
    // 0x08000340: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000344: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08000348: sw          $t8, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r24;
    // 0x0800034C: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000350: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000354: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000358: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800035C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x08000360: jalr        $t9
    // 0x08000364: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000364: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    after_4:
    // 0x08000368: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x0800036C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08000370: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000374: sw          $v1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r3;
    // 0x08000378: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x0800037C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000380: jalr        $t9
    // 0x08000384: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000384: nop

    after_5:
    // 0x08000388: beq         $v0, $zero, L_080003DC
    if (ctx->r2 == 0) {
        // 0x0800038C: addiu       $t1, $zero, 0x2B
        ctx->r9 = ADD32(0, 0X2B);
            goto L_080003DC;
    }
    // 0x0800038C: addiu       $t1, $zero, 0x2B
    ctx->r9 = ADD32(0, 0X2B);
    // 0x08000390: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08000394: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08000398: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x0800039C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x080003A0: jalr        $t9
    // 0x080003A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080003A4: nop

    after_6:
    // 0x080003A8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080003AC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x080003B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080003B4: lw          $t2, 0x64($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X64);
    // 0x080003B8: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x080003BC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080003C0: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x080003C4: sw          $t3, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r11;
    // 0x080003C8: sb          $t4, 0xD0($v1)
    MEM_B(0XD0, ctx->r3) = ctx->r12;
    // 0x080003CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080003D0: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x080003D4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080003D8: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
L_080003DC:
    // 0x080003DC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080003E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080003E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X414) << 16);
    // 0x080003E8: jalr        $t9
    // 0x080003EC: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X414));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080003EC: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X414));
    after_7:
    // 0x080003F0: b           L_08000408
    // 0x080003F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000408;
    // 0x080003F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080003F8:
    // 0x080003F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X414) << 16);
    // 0x080003FC: jalr        $t9
    // 0x08000400: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X414));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000400: addiu       $a0, $a0, 0x414
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X414));
    after_8:
L_08000404:
    // 0x08000404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000408:
    // 0x08000408: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x0800040C: jr          $ra
    // 0x08000410: nop

    TRACE_RETURN()
    return;
    // 0x08000410: nop

;}
RECOMP_FUNC void func_08003C90_6F7170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003C94: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003C9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003CA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003CA4: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08003CA8: jalr        $t9
    // 0x08003CAC: lw          $a0, 0xD4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003CAC: lw          $a0, 0xD4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD4);
    after_0:
    // 0x08003CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003CB8: jr          $ra
    // 0x08003CBC: nop

    TRACE_RETURN()
    return;
    // 0x08003CBC: nop

;}
RECOMP_FUNC void func_080024B4_6F5994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024B4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x080024B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x080024BC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x080024C0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x080024C4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x080024C8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080024CC: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x080024D0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080024D4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x080024D8: beq         $t7, $zero, L_0800265C
    if (ctx->r15 == 0) {
        // 0x080024DC: lw          $v0, 0x18($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X18);
            goto L_0800265C;
    }
    // 0x080024DC: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x080024E0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080024E4: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x080024E8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080024EC: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080024F0: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080024F4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080024F8: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x080024FC: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08002500: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08002504: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BE4) << 16);
    // 0x08002508: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x0800250C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08002510: lwc1        $f16, 0x7BE4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BE4));
    // 0x08002514: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002518: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x0800251C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08002520: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002524: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08002528: c.le.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl <= ctx->f16.fl;
    // 0x0800252C: nop

    // 0x08002530: bc1fl       L_08002544
    if (!c1cs) {
        // 0x08002534: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_08002544;
    }
    goto skip_0;
    // 0x08002534: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x08002538: jalr        $t9
    // 0x0800253C: lhu         $a0, 0xD0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800253C: lhu         $a0, 0xD0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XD0);
    after_0:
    // 0x08002540: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_08002544:
    // 0x08002544: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X2674) << 16);
    // 0x08002548: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x0800254C: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08002550: addiu       $a1, $a1, 0x2674
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X2674));
    // 0x08002554: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08002558: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x0800255C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08002560: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002564: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002568: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800256C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x08002570: jalr        $v0
    // 0x08002574: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08002574: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x08002578: beq         $v0, $zero, L_080025A8
    if (ctx->r2 == 0) {
        // 0x0800257C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080025A8;
    }
    // 0x0800257C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002580: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002584: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x08002588: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800258C: sh          $t8, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r24;
    // 0x08002590: jalr        $t9
    // 0x08002594: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002594: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_2:
    // 0x08002598: lw          $t0, 0xE8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE8);
    // 0x0800259C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080025A0: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x080025A4: sw          $t1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r9;
L_080025A8:
    // 0x080025A8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x080025AC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x080025B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080025B4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x080025B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080025BC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x080025C0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x080025C4: jalr        $t9
    // 0x080025C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080025C8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_3:
    // 0x080025CC: beq         $v0, $zero, L_080025FC
    if (ctx->r2 == 0) {
        // 0x080025D0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_080025FC;
    }
    // 0x080025D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x080025D4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080025D8: addiu       $t2, $zero, 0x2B
    ctx->r10 = ADD32(0, 0X2B);
    // 0x080025DC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080025E0: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x080025E4: jalr        $t9
    // 0x080025E8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080025E8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_4:
    // 0x080025EC: lw          $t3, 0xE8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XE8);
    // 0x080025F0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x080025F4: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x080025F8: sw          $t4, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r12;
L_080025FC:
    // 0x080025FC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x08002600: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x08002604: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002608: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x0800260C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08002610: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x08002614: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x08002618: jalr        $t9
    // 0x0800261C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800261C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_5:
    // 0x08002620: beq         $v0, $zero, L_08002650
    if (ctx->r2 == 0) {
        // 0x08002624: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08002650;
    }
    // 0x08002624: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08002628: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800262C: addiu       $t5, $zero, 0x2B
    ctx->r13 = ADD32(0, 0X2B);
    // 0x08002630: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002634: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08002638: jalr        $t9
    // 0x0800263C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800263C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_6:
    // 0x08002640: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x08002644: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08002648: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x0800264C: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
L_08002650:
    // 0x08002650: lw          $t8, 0x68($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X68);
    // 0x08002654: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x08002658: sw          $t0, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r8;
L_0800265C:
    // 0x0800265C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x08002660: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x08002664: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x08002668: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x0800266C: jr          $ra
    // 0x08002670: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x08002670: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08004D20_6F8200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004D20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004D24: jr          $ra
    // 0x08004D28: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004D28: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004348_6F7828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004348: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0800434C: jr          $ra
    // 0x08004350: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004350: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800000C_6F34EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800000C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000018: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800001C: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08000020: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08000024: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08000028: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800002C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000030: bne         $v0, $zero, L_0800008C
    if (ctx->r2 != 0) {
        // 0x08000034: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_0800008C;
    }
    // 0x08000034: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000038: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B74) << 16);
    // 0x0800003C: lwc1        $f0, 0x7B74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B74));
    // 0x08000040: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000044: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000048: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x0800004C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000050: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08000054: jalr        $t9
    // 0x08000058: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000058: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800005C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000060: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B78) << 16);
    // 0x08000064: lwc1        $f0, 0x7B78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B78));
    // 0x08000068: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x0800006C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08000070: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000074: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x08000078: sw          $t0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r8;
    // 0x0800007C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08000080: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000084: b           L_080000E4
    // 0x08000088: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
        goto L_080000E4;
    // 0x08000088: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_0800008C:
    // 0x0800008C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000090: bne         $v0, $at, L_080000E4
    if (ctx->r2 != ctx->r1) {
        // 0x08000094: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_080000E4;
    }
    // 0x08000094: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000098: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800009C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080000A0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x080000A4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080000A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080000AC: jalr        $t9
    // 0x080000B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x080000B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080000B8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B7C) << 16);
    // 0x080000BC: lwc1        $f0, 0x7B7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B7C));
    // 0x080000C0: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x080000C4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080000C8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080000CC: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x080000D0: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    // 0x080000D4: sb          $t3, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r11;
    // 0x080000D8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080000DC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080000E0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_080000E4:
    // 0x080000E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X10C) << 16);
    // 0x080000F0: jalr        $t9
    // 0x080000F4: addiu       $a0, $a0, 0x10C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X10C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000F4: addiu       $a0, $a0, 0x10C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X10C));
    after_2:
    // 0x080000F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080000FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000104: jr          $ra
    // 0x08000108: nop

    TRACE_RETURN()
    return;
    // 0x08000108: nop

;}
RECOMP_FUNC void func_08002408_6FD608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800240C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002410: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002414: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08002418: addiu       $t6, $zero, 0x19B
    ctx->r14 = ADD32(0, 0X19B);
    // 0x0800241C: addiu       $t7, $zero, 0x260
    ctx->r15 = ADD32(0, 0X260);
    // 0x08002420: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002424: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08002428: bne         $v0, $zero, L_08002440
    if (ctx->r2 != 0) {
        // 0x0800242C: sw          $t7, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r15;
            goto L_08002440;
    }
    // 0x0800242C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002430: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08002434: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08002438: b           L_08002470
    // 0x0800243C: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
        goto L_08002470;
    // 0x0800243C: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
L_08002440:
    // 0x08002440: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08002444: bne         $v0, $at, L_08002458
    if (ctx->r2 != ctx->r1) {
        // 0x08002448: lui         $at, 0xC270
        ctx->r1 = S32(0XC270 << 16);
            goto L_08002458;
    }
    // 0x08002448: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x0800244C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002450: b           L_08002470
    // 0x08002454: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
        goto L_08002470;
    // 0x08002454: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
L_08002458:
    // 0x08002458: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800245C: bne         $v0, $at, L_08002470
    if (ctx->r2 != ctx->r1) {
        // 0x08002460: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_08002470;
    }
    // 0x08002460: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08002464: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002468: nop

    // 0x0800246C: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
L_08002470:
    // 0x08002470: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002474: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002478: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800247C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002488: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0800248C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x08002490: jalr        $t9
    // 0x08002494: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002494: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    after_0:
    // 0x08002498: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800249C: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x080024A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024A4: jalr        $t9
    // 0x080024A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080024A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x080024AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080024B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080024B4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080024B8: sb          $t8, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r24;
    // 0x080024BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080024C0: jalr        $t9
    // 0x080024C4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080024C4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x080024C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080024CC: addiu       $t0, $zero, -0x32
    ctx->r8 = ADD32(0, -0X32);
    // 0x080024D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080024D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X24F8) << 16);
    // 0x080024D8: sh          $t0, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r8;
    // 0x080024DC: jalr        $t9
    // 0x080024E0: addiu       $a0, $a0, 0x24F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X24F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080024E0: addiu       $a0, $a0, 0x24F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X24F8));
    after_3:
    // 0x080024E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080024E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080024EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080024F0: jr          $ra
    // 0x080024F4: nop

    TRACE_RETURN()
    return;
    // 0x080024F4: nop

;}
RECOMP_FUNC void func_08000C80_6FBE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C88: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000C8C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08000C90: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08000C94: bne         $t8, $zero, L_08000CBC
    if (ctx->r24 != 0) {
        // 0x08000C98: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000CBC;
    }
    // 0x08000C98: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000C9C: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x08000CA0: lbu         $t9, 0xD1($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD1);
    // 0x08000CA4: sh          $t9, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r25;
    // 0x08000CA8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000CAC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000CB0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XCCC) << 16);
    // 0x08000CB4: jalr        $t9
    // 0x08000CB8: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XCCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000CB8: addiu       $a0, $a0, 0xCCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XCCC));
    after_0:
L_08000CBC:
    // 0x08000CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000CC4: jr          $ra
    // 0x08000CC8: nop

    TRACE_RETURN()
    return;
    // 0x08000CC8: nop

;}
RECOMP_FUNC void func_08000BB8_6FBDB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000BC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000BC8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000BCC: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08000BD0: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x08000BD4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000BD8: bne         $v0, $zero, L_08000C00
    if (ctx->r2 != 0) {
        // 0x08000BDC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000C00;
    }
    // 0x08000BDC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000BE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000BE4: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000BE8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BEC: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x08000BF0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XB34) << 16);
    // 0x08000BF4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000BF8: jalr        $t9
    // 0x08000BFC: addiu       $a0, $a0, 0xB34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XB34));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BFC: addiu       $a0, $a0, 0xB34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XB34));
    after_0:
L_08000C00:
    // 0x08000C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C08: jr          $ra
    // 0x08000C0C: nop

    TRACE_RETURN()
    return;
    // 0x08000C0C: nop

;}
RECOMP_FUNC void func_080002A0_6FB4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080002A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080002AC: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x080002B0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080002B4: lbu         $a1, 0xD5($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD5);
    // 0x080002B8: jal         0x08000000
    // 0x080002BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_08000000_6FB200(rdram, ctx);
        goto after_0;
    // 0x080002BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x080002C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080002C4: lbu         $a2, 0xD1($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XD1);
    // 0x080002C8: lbu         $a1, 0xD0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD0);
    // 0x080002CC: lbu         $t1, 0xD3($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD3);
    // 0x080002D0: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x080002D4: andi        $a2, $t9, 0xFFFF
    ctx->r6 = ctx->r25 & 0XFFFF;
    // 0x080002D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002DC: addiu       $t9, $t9, 0x39B0
    ctx->r25 = ADD32(ctx->r25, 0X39B0);
    // 0x080002E0: lbu         $a3, 0xD2($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XD2);
    // 0x080002E4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x080002E8: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x080002EC: jalr        $t9
    // 0x080002F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x080002F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X234) << 16);
    // 0x08000300: jalr        $t9
    // 0x08000304: addiu       $a0, $a0, 0x234
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X234));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000304: addiu       $a0, $a0, 0x234
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X234));
    after_2:
    // 0x08000308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800030C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000310: jr          $ra
    // 0x08000314: nop

    TRACE_RETURN()
    return;
    // 0x08000314: nop

;}
RECOMP_FUNC void func_080008D4_6FBAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080008D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080008DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080008E0: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x080008E4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080008E8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x080008EC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x080008F0: bne         $t9, $zero, L_0800090C
    if (ctx->r25 != 0) {
        // 0x080008F4: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_0800090C;
    }
    // 0x080008F4: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080008F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000900: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XA48) << 16);
    // 0x08000904: jalr        $t9
    // 0x08000908: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XA48));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000908: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XA48));
    after_0:
L_0800090C:
    // 0x0800090C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000914: jr          $ra
    // 0x08000918: nop

    TRACE_RETURN()
    return;
    // 0x08000918: nop

;}
RECOMP_FUNC void func_08000FFC_6FC1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800100C: lh          $t7, 0xD2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XD2);
    // 0x08001010: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x08001014: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08001018: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x0800101C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001020: lh          $t8, 0xD4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD4);
    // 0x08001024: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001028: lh          $t9, 0xD6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XD6);
    // 0x0800102C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x08001030: lh          $t6, 0xD0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD0);
    // 0x08001034: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08001038: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x0800103C: sh          $t0, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r8;
    // 0x08001040: sh          $t6, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r14;
    // 0x08001044: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001048: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x0800104C: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x08001050: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08001054: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001058: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x0800105C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x08001060: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001064: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001068: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x0800106C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001070: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x08001074: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001078: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x0800107C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001080: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x08001084: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XF74) << 16);
    // 0x08001088: jalr        $t9
    // 0x0800108C: addiu       $a0, $a0, 0xF74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XF74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800108C: addiu       $a0, $a0, 0xF74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XF74));
    after_0:
    // 0x08001090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001098: jr          $ra
    // 0x0800109C: nop

    TRACE_RETURN()
    return;
    // 0x0800109C: nop

    // 0x080010A0: jr          $ra
    // 0x080010A4: nop

    TRACE_RETURN()
    return;
    // 0x080010A4: nop

;}
RECOMP_FUNC void func_08000318_6FB518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800031C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000320: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000324: lbu         $t6, 0xD4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD4);
    // 0x08000328: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x0800032C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000330: bne         $t6, $zero, L_08000354
    if (ctx->r14 != 0) {
        // 0x08000334: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000354;
    }
    // 0x08000334: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000338: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800033C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000340: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2A0) << 16);
    // 0x08000344: jalr        $t9
    // 0x08000348: addiu       $a0, $a0, 0x2A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000348: addiu       $a0, $a0, 0x2A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2A0));
    after_0:
    // 0x0800034C: b           L_08000394
    // 0x08000350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000394;
    // 0x08000350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000354:
    // 0x08000354: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000358: jalr        $t9
    // 0x0800035C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800035C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x08000360: beq         $v0, $zero, L_08000390
    if (ctx->r2 == 0) {
        // 0x08000364: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08000390;
    }
    // 0x08000364: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000368: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800036C: addiu       $t9, $t9, 0x76C4
    ctx->r25 = ADD32(ctx->r25, 0X76C4);
    // 0x08000370: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08000374: jalr        $t9
    // 0x08000378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x0800037C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000380: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000384: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2A0) << 16);
    // 0x08000388: jalr        $t9
    // 0x0800038C: addiu       $a0, $a0, 0x2A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800038C: addiu       $a0, $a0, 0x2A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2A0));
    after_3:
L_08000390:
    // 0x08000390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000394:
    // 0x08000394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000398: jr          $ra
    // 0x0800039C: nop

    TRACE_RETURN()
    return;
    // 0x0800039C: nop

;}
RECOMP_FUNC void func_08000714_6FB914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800071C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000720: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08000724: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000728: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800072C: lhu         $a0, 0xD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD8);
    // 0x08000730: jalr        $t9
    // 0x08000734: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000734: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08000738: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x0800073C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000740: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000744: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000748: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x0800074C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x08000750: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08000754: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08000758: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x0800075C: lh          $t7, 0xD8($a2)
    ctx->r15 = MEM_H(ctx->r6, 0XD8);
    // 0x08000760: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x08000764: sh          $t8, 0xD8($a2)
    MEM_H(0XD8, ctx->r6) = ctx->r24;
    // 0x08000768: lh          $t0, 0xD8($a2)
    ctx->r8 = MEM_H(ctx->r6, 0XD8);
    // 0x0800076C: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08000770: sh          $t1, 0xD8($a2)
    MEM_H(0XD8, ctx->r6) = ctx->r9;
    // 0x08000774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800077C: jr          $ra
    // 0x08000780: nop

    TRACE_RETURN()
    return;
    // 0x08000780: nop

;}
RECOMP_FUNC void func_08001BF4_6FCDF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BFC: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001C00: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08001C04: ori         $t6, $t6, 0x221
    ctx->r14 = ctx->r14 | 0X221;
    // 0x08001C08: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001C0C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001C10: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001C14: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001C18: lbu         $a1, 0xD0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001C1C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08001C20: jalr        $t9
    // 0x08001C24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001C28: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08001C2C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37C4) << 16);
    // 0x08001C30: lwc1        $f0, 0x37C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(35, 0X37C4));
    // 0x08001C34: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001C38: lhu         $t7, 0x16($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X16);
    // 0x08001C3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C40: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C44: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X1C70) << 16);
    // 0x08001C48: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x08001C4C: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08001C50: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08001C54: addiu       $a0, $a0, 0x1C70
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1C70));
    // 0x08001C58: jalr        $t9
    // 0x08001C5C: sh          $t7, 0xE0($a2)
    MEM_H(0XE0, ctx->r6) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C5C: sh          $t7, 0xE0($a2)
    MEM_H(0XE0, ctx->r6) = ctx->r15;
    after_1:
    // 0x08001C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C68: jr          $ra
    // 0x08001C6C: nop

    TRACE_RETURN()
    return;
    // 0x08001C6C: nop

;}
RECOMP_FUNC void func_08002180_6FD380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002180: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002188: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800218C: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x08002190: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002194: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08002198: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x0800219C: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x080021A0: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x080021A4: lw          $a3, 0xC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XC);
    // 0x080021A8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x080021AC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x080021B0: jalr        $t9
    // 0x080021B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x080021B8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080021BC: bne         $v0, $zero, L_080021FC
    if (ctx->r2 != 0) {
        // 0x080021C0: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_080021FC;
    }
    // 0x080021C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x080021C4: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x080021C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080021CC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x080021D0: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x080021D4: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080021D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080021DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2298) << 16);
    // 0x080021E0: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x080021E4: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080021E8: addiu       $a0, $a0, 0x2298
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2298));
    // 0x080021EC: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x080021F0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x080021F4: jalr        $t9
    // 0x080021F8: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080021F8: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
L_080021FC:
    // 0x080021FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002200: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002204: jr          $ra
    // 0x08002208: nop

    TRACE_RETURN()
    return;
    // 0x08002208: nop

;}
RECOMP_FUNC void func_08000CCC_6FBECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000CD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000CD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000CD8: lbu         $t6, 0xD1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD1);
    // 0x08000CDC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3778) << 16);
    // 0x08000CE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000CE4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x08000CE8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000CEC: ldc1        $f4, 0x3778($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3778));
    // 0x08000CF0: bgez        $t6, L_08000D08
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08000CF4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_08000D08;
    }
    // 0x08000CF4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000CF8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x08000CFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000D00: nop

    // 0x08000D04: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_08000D08:
    // 0x08000D08: lhu         $t7, 0x14($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X14);
    // 0x08000D0C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x08000D10: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000D14: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08000D18: div.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f4.d, ctx->f16.d);
    // 0x08000D1C: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x08000D20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000D24: bgez        $t7, L_08000D3C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x08000D28: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_08000D3C;
    }
    // 0x08000D28: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x08000D2C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08000D30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08000D34: nop

    // 0x08000D38: add.d       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f10.d + ctx->f8.d;
L_08000D3C:
    // 0x08000D3C: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x08000D40: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08000D44: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x08000D48: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000D4C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x08000D50: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08000D54: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    // 0x08000D58: cvt.w.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = CVT_W_D(ctx->f4.d);
    // 0x08000D5C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08000D60: nop

    // 0x08000D64: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x08000D68: beql        $t9, $zero, L_08000DBC
    if (ctx->r25 == 0) {
        // 0x08000D6C: mfc1        $t9, $f16
        ctx->r25 = (int32_t)ctx->f16.u32l;
            goto L_08000DBC;
    }
    goto skip_0;
    // 0x08000D6C: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x08000D70: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000D74: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000D78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08000D7C: sub.d       $f16, $f4, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f4.d - ctx->f16.d;
    // 0x08000D80: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08000D84: nop

    // 0x08000D88: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x08000D8C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x08000D90: nop

    // 0x08000D94: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x08000D98: bne         $t9, $zero, L_08000DB0
    if (ctx->r25 != 0) {
        // 0x08000D9C: nop
    
            goto L_08000DB0;
    }
    // 0x08000D9C: nop

    // 0x08000DA0: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x08000DA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000DA8: b           L_08000DC8
    // 0x08000DAC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_08000DC8;
    // 0x08000DAC: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_08000DB0:
    // 0x08000DB0: b           L_08000DC8
    // 0x08000DB4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_08000DC8;
    // 0x08000DB4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x08000DB8: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
L_08000DBC:
    // 0x08000DBC: nop

    // 0x08000DC0: bltz        $t9, L_08000DB0
    if (SIGNED(ctx->r25) < 0) {
        // 0x08000DC4: nop
    
            goto L_08000DB0;
    }
    // 0x08000DC4: nop

L_08000DC8:
    // 0x08000DC8: sh          $t9, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r25;
    // 0x08000DCC: lh          $t0, 0xD4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XD4);
    // 0x08000DD0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x08000DD4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x08000DD8: sh          $t1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r9;
    // 0x08000DDC: lh          $t2, 0xD4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XD4);
    // 0x08000DE0: bnel        $t2, $zero, L_08000E18
    if (ctx->r10 != 0) {
        // 0x08000DE4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000E18;
    }
    goto skip_1;
    // 0x08000DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x08000DE8: lbu         $t3, 0xD1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XD1);
    // 0x08000DEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DF0: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08000DF4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x08000DF8: jalr        $t9
    // 0x08000DFC: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DFC: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    after_0:
    // 0x08000E00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E04: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E08: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XC80) << 16);
    // 0x08000E0C: jalr        $t9
    // 0x08000E10: addiu       $a0, $a0, 0xC80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XC80));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000E10: addiu       $a0, $a0, 0xC80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XC80));
    after_1:
    // 0x08000E14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000E18:
    // 0x08000E18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000E1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000E20: jr          $ra
    // 0x08000E24: nop

    TRACE_RETURN()
    return;
    // 0x08000E24: nop

;}
RECOMP_FUNC void func_08001224_6FC424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800122C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001230: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001234: lh          $t7, 0xD2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XD2);
    // 0x08001238: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x0800123C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08001240: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x08001244: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001248: lh          $t8, 0xD4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD4);
    // 0x0800124C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001250: lh          $t9, 0xD6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XD6);
    // 0x08001254: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x08001258: lh          $t6, 0xD0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD0);
    // 0x0800125C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08001260: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001264: sh          $t0, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r8;
    // 0x08001268: sh          $t6, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r14;
    // 0x0800126C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001270: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001274: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x08001278: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x0800127C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001280: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x08001284: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x08001288: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800128C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001290: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001294: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001298: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x0800129C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080012A0: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x080012A4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080012A8: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x080012AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X119C) << 16);
    // 0x080012B0: jalr        $t9
    // 0x080012B4: addiu       $a0, $a0, 0x119C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X119C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080012B4: addiu       $a0, $a0, 0x119C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X119C));
    after_0:
    // 0x080012B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080012BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080012C0: jr          $ra
    // 0x080012C4: nop

    TRACE_RETURN()
    return;
    // 0x080012C4: nop

;}
RECOMP_FUNC void func_08000B34_6FBD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000B3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000B40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000B44: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000B48: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000B4C: bne         $v0, $zero, L_08000BA8
    if (ctx->r2 != 0) {
        // 0x08000B50: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000BA8;
    }
    // 0x08000B50: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000B54: lh          $t8, 0xD0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD0);
    // 0x08000B58: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08000B5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000B60: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x08000B64: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000B68: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000B6C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08000B70: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000B74: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x08000B78: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08000B7C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000B80: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B84: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x08000B88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B8C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000B90: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x08000B94: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000B98: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x08000B9C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XADC) << 16);
    // 0x08000BA0: jalr        $t9
    // 0x08000BA4: addiu       $a0, $a0, 0xADC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XADC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BA4: addiu       $a0, $a0, 0xADC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XADC));
    after_0:
L_08000BA8:
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
RECOMP_FUNC void func_08002388_6FD588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002388: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x0800238C: jr          $ra
    // 0x08002390: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002390: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08000894_6FBA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800089C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080008A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080008A4: lbu         $t6, 0xD1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD1);
    // 0x080008A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080008B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x080008B4: sh          $t7, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r15;
    // 0x080008B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X7C0) << 16);
    // 0x080008BC: jalr        $t9
    // 0x080008C0: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X7C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080008C0: addiu       $a0, $a0, 0x7C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X7C0));
    after_0:
    // 0x080008C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080008C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080008CC: jr          $ra
    // 0x080008D0: nop

    TRACE_RETURN()
    return;
    // 0x080008D0: nop

;}
RECOMP_FUNC void func_08000784_6FB984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800078C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000790: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000794: lbu         $t6, 0xD2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD2);
    // 0x08000798: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800079C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007A0: sh          $t6, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r14;
    // 0x080007A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X714) << 16);
    // 0x080007A8: jalr        $t9
    // 0x080007AC: addiu       $a0, $a0, 0x714
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X714));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007AC: addiu       $a0, $a0, 0x714
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X714));
    after_0:
    // 0x080007B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080007B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080007B8: jr          $ra
    // 0x080007BC: nop

    TRACE_RETURN()
    return;
    // 0x080007BC: nop

;}
RECOMP_FUNC void func_08000E64_6FC064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000E6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000E70: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000E74: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000E78: bne         $v0, $zero, L_08000F64
    if (ctx->r2 != 0) {
        // 0x08000E7C: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000F64;
    }
    // 0x08000E7C: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000E80: lh          $v0, 0xD8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XD8);
    // 0x08000E84: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000E88: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08000E8C: beq         $v1, $zero, L_08000ECC
    if (ctx->r3 == 0) {
        // 0x08000E90: sh          $t7, 0xD8($a0)
        MEM_H(0XD8, ctx->r4) = ctx->r15;
            goto L_08000ECC;
    }
    // 0x08000E90: sh          $t7, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r15;
    // 0x08000E94: lh          $t9, 0xD2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XD2);
    // 0x08000E98: lh          $t1, 0xD4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XD4);
    // 0x08000E9C: lh          $t3, 0xD6($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XD6);
    // 0x08000EA0: lh          $t5, 0xDA($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XDA);
    // 0x08000EA4: lh          $t8, 0xD0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD0);
    // 0x08000EA8: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x08000EAC: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x08000EB0: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x08000EB4: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x08000EB8: sh          $t0, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r8;
    // 0x08000EBC: sh          $t2, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r10;
    // 0x08000EC0: sh          $t4, 0xD6($a0)
    MEM_H(0XD6, ctx->r4) = ctx->r12;
    // 0x08000EC4: sh          $t6, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r14;
    // 0x08000EC8: sh          $t8, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r24;
L_08000ECC:
    // 0x08000ECC: lh          $t7, 0xD2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XD2);
    // 0x08000ED0: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x08000ED4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08000ED8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x08000EDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000EE0: lh          $t8, 0xD4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD4);
    // 0x08000EE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000EE8: lh          $t9, 0xD6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XD6);
    // 0x08000EEC: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x08000EF0: lh          $t0, 0xD8($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XD8);
    // 0x08000EF4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x08000EF8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08000EFC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x08000F00: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000F04: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000F08: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x08000F0C: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08000F10: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000F14: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x08000F18: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x08000F1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F20: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08000F28: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08000F2C: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x08000F30: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000F34: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x08000F38: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000F3C: bne         $t1, $zero, L_08000F58
    if (ctx->r9 != 0) {
        // 0x08000F40: swc1        $f8, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
            goto L_08000F58;
    }
    // 0x08000F40: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x08000F44: lwc1        $f10, 0x7C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x08000F48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000F4C: nop

    // 0x08000F50: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x08000F54: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
L_08000F58:
    // 0x08000F58: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XF74) << 16);
    // 0x08000F5C: jalr        $t9
    // 0x08000F60: addiu       $a0, $a0, 0xF74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XF74));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F60: addiu       $a0, $a0, 0xF74
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XF74));
    after_0:
L_08000F64:
    // 0x08000F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F6C: jr          $ra
    // 0x08000F70: nop

    TRACE_RETURN()
    return;
    // 0x08000F70: nop

;}
RECOMP_FUNC void func_080026D0_6FD8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080026D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080026D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080026D8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080026DC: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x080026E0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080026E4: lbu         $a1, 0xD9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XD9);
    // 0x080026E8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080026EC: jal         0x08000000
    // 0x080026F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_08000000_6FB200(rdram, ctx);
        goto after_0;
    // 0x080026F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080026F4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080026F8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080026FC: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x08002700: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x08002704: lh          $t9, 0xD6($a2)
    ctx->r25 = MEM_H(ctx->r6, 0XD6);
    // 0x08002708: lhu         $t3, 0xD0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0XD0);
    // 0x0800270C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08002710: lhu         $t5, 0xD2($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0XD2);
    // 0x08002714: lhu         $t7, 0xD4($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XD4);
    // 0x08002718: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2788) << 16);
    // 0x0800271C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x08002720: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x08002724: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x08002728: sh          $t8, 0xC8($a2)
    MEM_H(0XC8, ctx->r6) = ctx->r24;
    // 0x0800272C: lwc1        $f8, 0xC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC);
    // 0x08002730: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x08002734: addiu       $a0, $a0, 0x2788
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2788));
    // 0x08002738: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x0800273C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x08002740: nop

    // 0x08002744: sh          $t0, 0xCA($a2)
    MEM_H(0XCA, ctx->r6) = ctx->r8;
    // 0x08002748: lwc1        $f16, 0x10($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X10);
    // 0x0800274C: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x08002750: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002754: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x08002758: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800275C: sh          $t4, 0xD0($a2)
    MEM_H(0XD0, ctx->r6) = ctx->r12;
    // 0x08002760: sh          $t6, 0xD2($a2)
    MEM_H(0XD2, ctx->r6) = ctx->r14;
    // 0x08002764: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x08002768: sh          $t8, 0xD4($a2)
    MEM_H(0XD4, ctx->r6) = ctx->r24;
    // 0x0800276C: sh          $t0, 0xD6($a2)
    MEM_H(0XD6, ctx->r6) = ctx->r8;
    // 0x08002770: jalr        $t9
    // 0x08002774: sh          $t2, 0xCC($a2)
    MEM_H(0XCC, ctx->r6) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002774: sh          $t2, 0xCC($a2)
    MEM_H(0XCC, ctx->r6) = ctx->r10;
    after_1:
    // 0x08002778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800277C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002780: jr          $ra
    // 0x08002784: nop

    TRACE_RETURN()
    return;
    // 0x08002784: nop

;}
RECOMP_FUNC void func_0800220C_6FD40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800220C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002214: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002218: lw          $v1, 0xE0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE0);
    // 0x0800221C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002220: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08002224: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x08002228: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x0800222C: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x08002230: lw          $a3, 0x18($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X18);
    // 0x08002234: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08002238: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x0800223C: jalr        $t9
    // 0x08002240: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002240: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x08002244: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08002248: bne         $v0, $zero, L_08002288
    if (ctx->r2 != 0) {
        // 0x0800224C: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_08002288;
    }
    // 0x0800224C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08002250: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08002254: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002258: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x0800225C: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x08002260: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x08002264: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002268: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2298) << 16);
    // 0x0800226C: swc1        $f8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f8.u32l;
    // 0x08002270: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
    // 0x08002274: addiu       $a0, $a0, 0x2298
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2298));
    // 0x08002278: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x0800227C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x08002280: jalr        $t9
    // 0x08002284: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002284: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
L_08002288:
    // 0x08002288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800228C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002290: jr          $ra
    // 0x08002294: nop

    TRACE_RETURN()
    return;
    // 0x08002294: nop

;}
RECOMP_FUNC void func_0800321C_6FE41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800321C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003224: lhu         $v0, 0xEE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XEE);
    // 0x08003228: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x0800322C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x08003230: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x08003234: beq         $t6, $zero, L_0800325C
    if (ctx->r14 == 0) {
        // 0x08003238: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800325C;
    }
    // 0x08003238: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x0800323C: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x08003240: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x08003244: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x08003248: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800324C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x08003250: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x08003254: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x08003258: lhu         $v0, 0xEE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XEE);
L_0800325C:
    // 0x0800325C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x08003260: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x08003264: bne         $t1, $zero, L_0800328C
    if (ctx->r9 != 0) {
        // 0x08003268: sh          $t0, 0xEE($a2)
        MEM_H(0XEE, ctx->r6) = ctx->r8;
            goto L_0800328C;
    }
    // 0x08003268: sh          $t0, 0xEE($a2)
    MEM_H(0XEE, ctx->r6) = ctx->r8;
    // 0x0800326C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003270: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003274: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X329C) << 16);
    // 0x08003278: addiu       $a0, $a0, 0x329C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X329C));
    // 0x0800327C: jalr        $t9
    // 0x08003280: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003280: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x08003284: jal         0x080028B4
    // 0x08003288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_080028B4_6FDAB4(rdram, ctx);
        goto after_1;
    // 0x08003288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_0800328C:
    // 0x0800328C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003294: jr          $ra
    // 0x08003298: nop

    TRACE_RETURN()
    return;
    // 0x08003298: nop

;}
RECOMP_FUNC void func_080009E4_6FBBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080009E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080009EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080009F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080009F4: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x080009F8: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x080009FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08000A00: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08000A04: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08000A08: bne         $t8, $zero, L_08000A38
    if (ctx->r24 != 0) {
        // 0x08000A0C: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000A38;
    }
    // 0x08000A0C: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000A10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000A14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000A18: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08000A1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A20: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x08000A24: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08000A28: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X980) << 16);
    // 0x08000A2C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A30: jalr        $t9
    // 0x08000A34: addiu       $a0, $a0, 0x980
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X980));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A34: addiu       $a0, $a0, 0x980
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X980));
    after_0:
L_08000A38:
    // 0x08000A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000A40: jr          $ra
    // 0x08000A44: nop

    TRACE_RETURN()
    return;
    // 0x08000A44: nop

;}
RECOMP_FUNC void func_080012C8_6FC4C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080012CC: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x080012D0: addiu       $t7, $t6, -0x8
    ctx->r15 = ADD32(ctx->r14, -0X8);
    // 0x080012D4: jr          $ra
    // 0x080012D8: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x080012D8: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_0800204C_6FD24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800204C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08002050: lbu         $t6, -0x32D0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32D0);
    // 0x08002054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800205C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002060: bne         $t6, $zero, L_08002170
    if (ctx->r14 != 0) {
        // 0x08002064: lw          $v0, 0xE0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XE0);
            goto L_08002170;
    }
    // 0x08002064: lw          $v0, 0xE0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0);
    // 0x08002068: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x0800206C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x08002070: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x08002074: nop

    // 0x08002078: bc1fl       L_080020F4
    if (!c1cs) {
        // 0x0800207C: lwc1        $f16, 0x8($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
            goto L_080020F4;
    }
    goto skip_0;
    // 0x0800207C: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x08002080: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x08002084: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08002088: lw          $t8, -0x39F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39F4);
    // 0x0800208C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x08002090: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002094: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x08002098: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x0800209C: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x080020A0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x080020A4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x080020A8: nop

    // 0x080020AC: bc1t        L_080020C0
    if (c1cs) {
        // 0x080020B0: nop
    
            goto L_080020C0;
    }
    // 0x080020B0: nop

    // 0x080020B4: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x080020B8: lw          $t0, 0xA0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XA0);
    // 0x080020BC: bne         $a1, $t0, L_080020F0
    if (ctx->r5 != ctx->r8) {
        // 0x080020C0: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080020F0;
    }
L_080020C0:
    // 0x080020C0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080020C4: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080020C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080020CC: jalr        $t9
    // 0x080020D0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080020D0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    after_0:
    // 0x080020D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080020D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080020DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2180) << 16);
    // 0x080020E0: jalr        $t9
    // 0x080020E4: addiu       $a0, $a0, 0x2180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2180));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080020E4: addiu       $a0, $a0, 0x2180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2180));
    after_1:
    // 0x080020E8: b           L_08002174
    // 0x080020EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08002174;
    // 0x080020EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080020F0:
    // 0x080020F0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
L_080020F4:
    // 0x080020F4: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x080020F8: nop

    // 0x080020FC: bc1fl       L_08002174
    if (!c1cs) {
        // 0x08002100: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002174;
    }
    goto skip_1;
    // 0x08002100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08002104: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x08002108: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x0800210C: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x08002110: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x08002114: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002118: lwc1        $f18, 0xC($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0XC);
    // 0x0800211C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08002120: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002124: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08002128: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800212C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08002130: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x08002134: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x08002138: nop

    // 0x0800213C: bc1t        L_08002154
    if (c1cs) {
        // 0x08002140: nop
    
            goto L_08002154;
    }
    // 0x08002140: nop

    // 0x08002144: lw          $t3, -0x39FC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39FC);
    // 0x08002148: lw          $t4, 0xA0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XA0);
    // 0x0800214C: bnel        $a2, $t4, L_08002174
    if (ctx->r6 != ctx->r12) {
        // 0x08002150: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002174;
    }
    goto skip_2;
    // 0x08002150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_08002154:
    // 0x08002154: jalr        $t9
    // 0x08002158: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002158: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x0800215C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002160: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002164: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X220C) << 16);
    // 0x08002168: jalr        $t9
    // 0x0800216C: addiu       $a0, $a0, 0x220C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X220C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800216C: addiu       $a0, $a0, 0x220C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X220C));
    after_3:
L_08002170:
    // 0x08002170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08002174:
    // 0x08002174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002178: jr          $ra
    // 0x0800217C: nop

    TRACE_RETURN()
    return;
    // 0x0800217C: nop

;}
RECOMP_FUNC void func_08000000_6FB200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000008: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x0800000C: beq         $at, $zero, L_080001A0
    if (ctx->r1 == 0) {
        // 0x08000010: lw          $v0, 0x18($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X18);
            goto L_080001A0;
    }
    // 0x08000010: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000014: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x08000018: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X375C) << 16);
    // 0x0800001C: addu        $at, $at, $t6
    gpr jr_addend_08000024 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000020: lw          $t6, 0x375C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(35, 0X375C));
    // 0x08000024: jr          $t6
    // 0x08000028: nop

    switch (jr_addend_08000024 >> 2) {
        case 0: goto L_0800002C; break;
        case 1: goto L_08000078; break;
        case 2: goto L_080000C4; break;
        case 3: goto L_08000110; break;
        case 4: goto L_0800015C; break;
        default: switch_error(__func__, 0x08000024, 0x0800375C);
    }
    // 0x08000028: nop

L_0800002C:
    // 0x0800002C: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08000030: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x08000034: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000038: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x0800003C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000040: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08000044: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000048: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x0800004C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000050: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000054: jalr        $t9
    // 0x08000058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x0800005C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000060: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000064: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000068: jalr        $t9
    // 0x0800006C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800006C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x08000070: b           L_080001A4
    // 0x08000074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080001A4;
    // 0x08000074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000078:
    // 0x08000078: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x0800007C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000080: addiu       $t0, $zero, 0x1A0
    ctx->r8 = ADD32(0, 0X1A0);
    // 0x08000084: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000088: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x0800008C: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    // 0x08000090: sw          $t2, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r10;
    // 0x08000094: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000098: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800009C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080000A0: jalr        $t9
    // 0x080000A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080000A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x080000A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080000AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080000B0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x080000B4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080000B8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080000BC: b           L_080001A0
    // 0x080000C0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
        goto L_080001A0;
    // 0x080000C0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_080000C4:
    // 0x080000C4: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x080000C8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x080000CC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080000D0: addiu       $t3, $zero, 0x1F9
    ctx->r11 = ADD32(0, 0X1F9);
    // 0x080000D4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080000D8: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x080000DC: sh          $t3, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r11;
    // 0x080000E0: sw          $t5, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r13;
    // 0x080000E4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080000E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x080000EC: jalr        $t9
    // 0x080000F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080000F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x080000F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080000F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080000FC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000100: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08000104: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000108: b           L_080001A0
    // 0x0800010C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
        goto L_080001A0;
    // 0x0800010C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
L_08000110:
    // 0x08000110: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x08000114: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000118: addiu       $t6, $zero, 0x3E2
    ctx->r14 = ADD32(0, 0X3E2);
    // 0x0800011C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000120: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08000124: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08000128: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x0800012C: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08000130: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000134: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08000138: jalr        $t9
    // 0x0800013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x08000140: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000144: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000148: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x0800014C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08000150: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08000154: b           L_080001A0
    // 0x08000158: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
        goto L_080001A0;
    // 0x08000158: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
L_0800015C:
    // 0x0800015C: lw          $t0, 0x60($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X60);
    // 0x08000160: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000164: addiu       $t2, $zero, 0x1F4
    ctx->r10 = ADD32(0, 0X1F4);
    // 0x08000168: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800016C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x08000170: sw          $t1, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r9;
    // 0x08000174: sh          $t2, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r10;
    // 0x08000178: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x0800017C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000180: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000184: jalr        $t9
    // 0x08000188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x0800018C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000190: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000194: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000198: jalr        $t9
    // 0x0800019C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800019C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_6:
L_080001A0:
    // 0x080001A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001A4:
    // 0x080001A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080001A8: jr          $ra
    // 0x080001AC: nop

    TRACE_RETURN()
    return;
    // 0x080001AC: nop

    // 0x080001B0: jr          $ra
    // 0x080001B4: nop

    TRACE_RETURN()
    return;
    // 0x080001B4: nop

;}
RECOMP_FUNC void func_08002788_6FD988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002788: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800278C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002790: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002794: lh          $t6, 0xC8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC8);
    // 0x08002798: lh          $t9, 0xD6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XD6);
    // 0x0800279C: lh          $t7, 0xCA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XCA);
    // 0x080027A0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x080027A4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x080027A8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x080027AC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080027B0: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x080027B4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x080027B8: lh          $t8, 0xCC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XCC);
    // 0x080027BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080027C0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080027C4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x080027C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080027CC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x080027D0: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080027D4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x080027D8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080027DC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x080027E0: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x080027E4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080027E8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x080027EC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080027F0: jalr        $t9
    // 0x080027F4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080027F4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x080027F8: bne         $v0, $zero, L_08002810
    if (ctx->r2 != 0) {
        // 0x080027FC: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(35, 0X2820) << 16);
            goto L_08002810;
    }
    // 0x080027FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2820) << 16);
    // 0x08002800: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002804: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002808: jalr        $t9
    // 0x0800280C: addiu       $a0, $a0, 0x2820
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2820));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800280C: addiu       $a0, $a0, 0x2820
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2820));
    after_1:
L_08002810:
    // 0x08002810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002818: jr          $ra
    // 0x0800281C: nop

    TRACE_RETURN()
    return;
    // 0x0800281C: nop

;}
RECOMP_FUNC void func_08001F38_6FD138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F38: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001F3C: jr          $ra
    // 0x08001F40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001F40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002600_6FD800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002600: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002604: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002608: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800260C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002610: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08002614: lbu         $v0, 0xD8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD8);
    // 0x08002618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800261C: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x08002620: bne         $v0, $zero, L_08002644
    if (ctx->r2 != 0) {
        // 0x08002624: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08002644;
    }
    // 0x08002624: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08002628: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800262C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002630: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X26D0) << 16);
    // 0x08002634: jalr        $t9
    // 0x08002638: addiu       $a0, $a0, 0x26D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X26D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002638: addiu       $a0, $a0, 0x26D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X26D0));
    after_0:
    // 0x0800263C: b           L_080026C0
    // 0x08002640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080026C0;
    // 0x08002640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002644:
    // 0x08002644: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08002648: addiu       $v1, $v1, 0x3E94
    ctx->r3 = ADD32(ctx->r3, 0X3E94);
    // 0x0800264C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x08002650: jalr        $v1
    // 0x08002654: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08002654: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    after_1:
    // 0x08002658: beq         $v0, $zero, L_080026BC
    if (ctx->r2 == 0) {
        // 0x0800265C: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_080026BC;
    }
    // 0x0800265C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08002660: lbu         $a0, 0xD8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD8);
    // 0x08002664: jalr        $v1
    // 0x08002668: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08002668: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_2:
    // 0x0800266C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002670: addiu       $t9, $t9, -0x5B1C
    ctx->r25 = ADD32(ctx->r25, -0X5B1C);
    // 0x08002674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002678: jalr        $t9
    // 0x0800267C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800267C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_3:
    // 0x08002680: lbu         $t8, 0xDA($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XDA);
    // 0x08002684: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08002688: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800268C: beq         $t8, $zero, L_080026A8
    if (ctx->r24 == 0) {
        // 0x08002690: addiu       $a0, $zero, 0x21A
        ctx->r4 = ADD32(0, 0X21A);
            goto L_080026A8;
    }
    // 0x08002690: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    // 0x08002694: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002698: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800269C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x080026A0: jalr        $t9
    // 0x080026A4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080026A4: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_4:
L_080026A8:
    // 0x080026A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080026AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080026B0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X26D0) << 16);
    // 0x080026B4: jalr        $t9
    // 0x080026B8: addiu       $a0, $a0, 0x26D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X26D0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080026B8: addiu       $a0, $a0, 0x26D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X26D0));
    after_5:
L_080026BC:
    // 0x080026BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080026C0:
    // 0x080026C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080026C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080026C8: jr          $ra
    // 0x080026CC: nop

    TRACE_RETURN()
    return;
    // 0x080026CC: nop

;}
RECOMP_FUNC void func_08002578_6FD778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800257C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002580: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002584: lh          $t6, 0xD0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XD0);
    // 0x08002588: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x0800258C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002590: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x08002594: sh          $t7, 0xD0($a0)
    MEM_H(0XD0, ctx->r4) = ctx->r15;
    // 0x08002598: lhu         $a0, 0xD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD8);
    // 0x0800259C: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080025A0: jalr        $t9
    // 0x080025A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025A4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x080025A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080025AC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080025B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080025B4: lh          $t8, 0xD0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0XD0);
    // 0x080025B8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x080025BC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x080025C0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x080025C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025C8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080025CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080025D0: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x080025D4: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x080025D8: lh          $t1, 0xD0($a2)
    ctx->r9 = MEM_H(ctx->r6, 0XD0);
    // 0x080025DC: slti        $at, $t1, -0x46
    ctx->r1 = SIGNED(ctx->r9) < -0X46 ? 1 : 0;
    // 0x080025E0: beql        $at, $zero, L_080025F4
    if (ctx->r1 == 0) {
        // 0x080025E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080025F4;
    }
    goto skip_0;
    // 0x080025E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080025E8: jalr        $t9
    // 0x080025EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025EC: nop

    after_1:
    // 0x080025F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080025F4:
    // 0x080025F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080025F8: jr          $ra
    // 0x080025FC: nop

    TRACE_RETURN()
    return;
    // 0x080025FC: nop

;}
RECOMP_FUNC void func_080010A8_6FC2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080010B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080010B8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080010BC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080010C0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080010C4: bne         $v0, $zero, L_0800118C
    if (ctx->r2 != 0) {
        // 0x080010C8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_0800118C;
    }
    // 0x080010C8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080010CC: lh          $v0, 0xD8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XD8);
    // 0x080010D0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x080010D4: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x080010D8: beq         $v1, $zero, L_08001118
    if (ctx->r3 == 0) {
        // 0x080010DC: sh          $t7, 0xD8($a0)
        MEM_H(0XD8, ctx->r4) = ctx->r15;
            goto L_08001118;
    }
    // 0x080010DC: sh          $t7, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r15;
    // 0x080010E0: lh          $t9, 0xD2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XD2);
    // 0x080010E4: lh          $t1, 0xD4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0XD4);
    // 0x080010E8: lh          $t3, 0xD6($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XD6);
    // 0x080010EC: lh          $t5, 0xDA($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XDA);
    // 0x080010F0: lh          $t8, 0xD0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XD0);
    // 0x080010F4: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x080010F8: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x080010FC: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x08001100: negu        $t6, $t5
    ctx->r14 = SUB32(0, ctx->r13);
    // 0x08001104: sh          $t0, 0xD2($a0)
    MEM_H(0XD2, ctx->r4) = ctx->r8;
    // 0x08001108: sh          $t2, 0xD4($a0)
    MEM_H(0XD4, ctx->r4) = ctx->r10;
    // 0x0800110C: sh          $t4, 0xD6($a0)
    MEM_H(0XD6, ctx->r4) = ctx->r12;
    // 0x08001110: sh          $t6, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = ctx->r14;
    // 0x08001114: sh          $t8, 0xD8($a0)
    MEM_H(0XD8, ctx->r4) = ctx->r24;
L_08001118:
    // 0x08001118: lh          $t7, 0xD2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XD2);
    // 0x0800111C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x08001120: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x08001124: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x08001128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800112C: lh          $t8, 0xD4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0XD4);
    // 0x08001130: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001134: lh          $t9, 0xD6($a1)
    ctx->r25 = MEM_H(ctx->r5, 0XD6);
    // 0x08001138: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x0800113C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X119C) << 16);
    // 0x08001140: addiu       $a0, $a0, 0x119C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X119C));
    // 0x08001144: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x08001148: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800114C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001150: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x08001154: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08001158: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x0800115C: swc1        $f16, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f16.u32l;
    // 0x08001160: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x08001164: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001168: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800116C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001170: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001174: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x08001178: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800117C: swc1        $f10, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f10.u32l;
    // 0x08001180: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001184: jalr        $t9
    // 0x08001188: swc1        $f8, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001188: swc1        $f8, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f8.u32l;
    after_0:
L_0800118C:
    // 0x0800118C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001194: jr          $ra
    // 0x08001198: nop

    TRACE_RETURN()
    return;
    // 0x08001198: nop

;}
RECOMP_FUNC void func_080013AC_6FC5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080013B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080013B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080013B8: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x080013BC: ori         $t6, $t6, 0x220
    ctx->r14 = ctx->r14 | 0X220;
    // 0x080013C0: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x080013C4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x080013C8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080013CC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080013D0: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x080013D4: addiu       $v0, $v0, -0x61F8
    ctx->r2 = ADD32(ctx->r2, -0X61F8);
    // 0x080013D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080013DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x080013E0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x080013E4: jalr        $v0
    // 0x080013E8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080013E8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x080013EC: lbu         $t8, 0xD0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD0);
    // 0x080013F0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x080013F4: sltiu       $at, $t8, 0xE
    ctx->r1 = ctx->r24 < 0XE ? 1 : 0;
    // 0x080013F8: beq         $at, $zero, L_080018F4
    if (ctx->r1 == 0) {
        // 0x080013FC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_080018F4;
    }
    // 0x080013FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x08001400: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3780) << 16);
    // 0x08001404: addu        $at, $at, $t8
    gpr jr_addend_0800140C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x08001408: lw          $t8, 0x3780($at)
    ctx->r24 = ADD32(ctx->r1, (int16_t)RELOC_LO16(35, 0X3780));
    // 0x0800140C: jr          $t8
    // 0x08001410: nop

    switch (jr_addend_0800140C >> 2) {
        case 0: goto L_08001414; break;
        case 1: goto L_08001450; break;
        case 2: goto L_08001490; break;
        case 3: goto L_080014CC; break;
        case 4: goto L_08001524; break;
        case 5: goto L_08001578; break;
        case 6: goto L_080015D0; break;
        case 7: goto L_08001618; break;
        case 8: goto L_08001654; break;
        case 9: goto L_080016AC; break;
        case 10: goto L_080016F8; break;
        case 11: goto L_08001744; break;
        case 12: goto L_08001800; break;
        case 13: goto L_08001894; break;
        default: switch_error(__func__, 0x0800140C, 0x08003780);
    }
    // 0x08001410: nop

L_08001414:
    // 0x08001414: addiu       $t9, $zero, 0x1F8
    ctx->r25 = ADD32(0, 0X1F8);
    // 0x08001418: sh          $t9, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r25;
    // 0x0800141C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001420: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001428: jalr        $t9
    // 0x0800142C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800142C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08001430: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001434: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001438: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X1368) << 16);
    // 0x0800143C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001440: jalr        $t9
    // 0x08001444: addiu       $a0, $a0, 0x1368
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1368));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001444: addiu       $a0, $a0, 0x1368
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1368));
    after_2:
    // 0x08001448: b           L_080018F8
    // 0x0800144C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x0800144C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001450:
    // 0x08001450: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001454: addiu       $t0, $zero, 0x1FB
    ctx->r8 = ADD32(0, 0X1FB);
    // 0x08001458: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800145C: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x08001460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001464: jalr        $t9
    // 0x08001468: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001468: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x0800146C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001470: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x08001474: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001478: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XE28) << 16);
    // 0x0800147C: sb          $t1, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r9;
    // 0x08001480: jalr        $t9
    // 0x08001484: addiu       $a0, $a0, 0xE28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XE28));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001484: addiu       $a0, $a0, 0xE28
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XE28));
    after_4:
    // 0x08001488: b           L_080018F8
    // 0x0800148C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x0800148C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001490:
    // 0x08001490: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001494: addiu       $t2, $zero, 0x1F8
    ctx->r10 = ADD32(0, 0X1F8);
    // 0x08001498: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800149C: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x080014A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080014A4: jalr        $t9
    // 0x080014A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080014A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x080014AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080014B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X12C8) << 16);
    // 0x080014B8: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x080014BC: jalr        $t9
    // 0x080014C0: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X12C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080014C0: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X12C8));
    after_6:
    // 0x080014C4: b           L_080018F8
    // 0x080014C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x080014C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080014CC:
    // 0x080014CC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080014D0: addiu       $t3, $zero, 0x1FB
    ctx->r11 = ADD32(0, 0X1FB);
    // 0x080014D4: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080014D8: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    // 0x080014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080014E0: jalr        $t9
    // 0x080014E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080014E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x080014E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x080014F0: addiu       $t5, $zero, -0x17
    ctx->r13 = ADD32(0, -0X17);
    // 0x080014F4: addiu       $t6, $zero, 0x46
    ctx->r14 = ADD32(0, 0X46);
    // 0x080014F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080014FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X1224) << 16);
    // 0x08001500: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001504: sh          $t4, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r12;
    // 0x08001508: sh          $t5, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r13;
    // 0x0800150C: sh          $t6, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r14;
    // 0x08001510: sh          $zero, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = 0;
    // 0x08001514: jalr        $t9
    // 0x08001518: addiu       $a0, $a0, 0x1224
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1224));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001518: addiu       $a0, $a0, 0x1224
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1224));
    after_8:
    // 0x0800151C: b           L_080018F8
    // 0x08001520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x08001520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001524:
    // 0x08001524: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001528: addiu       $t7, $zero, 0x1FB
    ctx->r15 = ADD32(0, 0X1FB);
    // 0x0800152C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001530: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08001534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001538: jalr        $t9
    // 0x0800153C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800153C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x08001540: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001544: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08001548: addiu       $t0, $zero, 0x39
    ctx->r8 = ADD32(0, 0X39);
    // 0x0800154C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001550: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X1224) << 16);
    // 0x08001554: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001558: sh          $t8, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r24;
    // 0x0800155C: sh          $zero, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = 0;
    // 0x08001560: sh          $zero, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = 0;
    // 0x08001564: sh          $t0, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r8;
    // 0x08001568: jalr        $t9
    // 0x0800156C: addiu       $a0, $a0, 0x1224
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1224));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800156C: addiu       $a0, $a0, 0x1224
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1224));
    after_10:
    // 0x08001570: b           L_080018F8
    // 0x08001574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x08001574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001578:
    // 0x08001578: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800157C: addiu       $t1, $zero, 0x1FB
    ctx->r9 = ADD32(0, 0X1FB);
    // 0x08001580: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001584: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x08001588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800158C: jalr        $t9
    // 0x08001590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x08001594: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001598: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x0800159C: addiu       $t3, $zero, 0x3E
    ctx->r11 = ADD32(0, 0X3E);
    // 0x080015A0: addiu       $t4, $zero, -0x1F
    ctx->r12 = ADD32(0, -0X1F);
    // 0x080015A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080015A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XFFC) << 16);
    // 0x080015AC: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x080015B0: sh          $t2, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r10;
    // 0x080015B4: sh          $t3, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r11;
    // 0x080015B8: sh          $t4, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r12;
    // 0x080015BC: sh          $zero, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = 0;
    // 0x080015C0: jalr        $t9
    // 0x080015C4: addiu       $a0, $a0, 0xFFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XFFC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080015C4: addiu       $a0, $a0, 0xFFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XFFC));
    after_12:
    // 0x080015C8: b           L_080018F8
    // 0x080015CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x080015CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080015D0:
    // 0x080015D0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080015D4: addiu       $t5, $zero, 0x1F8
    ctx->r13 = ADD32(0, 0X1F8);
    // 0x080015D8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080015DC: sh          $t5, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r13;
    // 0x080015E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080015E4: jalr        $t9
    // 0x080015E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080015E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x080015EC: lbu         $t7, 0xD1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD1);
    // 0x080015F0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080015F8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080015FC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X1368) << 16);
    // 0x08001600: sb          $t6, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r14;
    // 0x08001604: addiu       $a0, $a0, 0x1368
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1368));
    // 0x08001608: jalr        $t9
    // 0x0800160C: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x0800160C: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    after_14:
    // 0x08001610: b           L_080018F8
    // 0x08001614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x08001614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001618:
    // 0x08001618: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800161C: addiu       $t8, $zero, 0x1F8
    ctx->r24 = ADD32(0, 0X1F8);
    // 0x08001620: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001624: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x08001628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800162C: jalr        $t9
    // 0x08001630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x08001634: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001638: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800163C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X12C8) << 16);
    // 0x08001640: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001644: jalr        $t9
    // 0x08001648: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X12C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001648: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X12C8));
    after_16:
    // 0x0800164C: b           L_080018F8
    // 0x08001650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x08001650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001654:
    // 0x08001654: lhu         $t0, 0xD4($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XD4);
    // 0x08001658: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x0800165C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001660: addiu       $t4, $zero, 0x1FB
    ctx->r12 = ADD32(0, 0X1FB);
    // 0x08001664: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001668: addiu       $t1, $t0, -0xA
    ctx->r9 = ADD32(ctx->r8, -0XA);
    // 0x0800166C: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x08001670: sh          $t1, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r9;
    // 0x08001674: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x08001678: sh          $t4, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r12;
    // 0x0800167C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001680: jalr        $t9
    // 0x08001684: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08001684: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x08001688: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800168C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x08001690: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001694: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XC10) << 16);
    // 0x08001698: sb          $t5, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r13;
    // 0x0800169C: jalr        $t9
    // 0x080016A0: addiu       $a0, $a0, 0xC10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XC10));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080016A0: addiu       $a0, $a0, 0xC10
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XC10));
    after_18:
    // 0x080016A4: b           L_080018F8
    // 0x080016A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x080016A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080016AC:
    // 0x080016AC: lw          $t6, 0x64($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X64);
    // 0x080016B0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080016B4: addiu       $t8, $zero, 0x1FB
    ctx->r24 = ADD32(0, 0X1FB);
    // 0x080016B8: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080016BC: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x080016C0: sw          $t7, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r15;
    // 0x080016C4: sh          $t8, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r24;
    // 0x080016C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080016CC: jalr        $t9
    // 0x080016D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080016D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_19:
    // 0x080016D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080016D8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x080016DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080016E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X894) << 16);
    // 0x080016E4: sb          $t0, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r8;
    // 0x080016E8: jalr        $t9
    // 0x080016EC: addiu       $a0, $a0, 0x894
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X894));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x080016EC: addiu       $a0, $a0, 0x894
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X894));
    after_20:
    // 0x080016F0: b           L_080018F8
    // 0x080016F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x080016F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080016F8:
    // 0x080016F8: lw          $t1, 0x64($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X64);
    // 0x080016FC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001700: addiu       $t3, $zero, 0x1FB
    ctx->r11 = ADD32(0, 0X1FB);
    // 0x08001704: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001708: ori         $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 | 0X4000;
    // 0x0800170C: sw          $t2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r10;
    // 0x08001710: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    // 0x08001714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001718: jalr        $t9
    // 0x0800171C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x0800171C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_21:
    // 0x08001720: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001724: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x08001728: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800172C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0XA48) << 16);
    // 0x08001730: sb          $t4, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r12;
    // 0x08001734: jalr        $t9
    // 0x08001738: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XA48));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08001738: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0XA48));
    after_22:
    // 0x0800173C: b           L_080018F8
    // 0x08001740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x08001740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001744:
    // 0x08001744: lbu         $v0, 0xD1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD1);
    // 0x08001748: addiu       $t5, $zero, 0x220
    ctx->r13 = ADD32(0, 0X220);
    // 0x0800174C: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x08001750: beq         $v0, $zero, L_0800176C
    if (ctx->r2 == 0) {
        // 0x08001754: addiu       $t6, $zero, 0x32B
        ctx->r14 = ADD32(0, 0X32B);
            goto L_0800176C;
    }
    // 0x08001754: addiu       $t6, $zero, 0x32B
    ctx->r14 = ADD32(0, 0X32B);
    // 0x08001758: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800175C: beq         $v0, $at, L_080017A0
    if (ctx->r2 == ctx->r1) {
        // 0x08001760: addiu       $t7, $zero, 0x32B
        ctx->r15 = ADD32(0, 0X32B);
            goto L_080017A0;
    }
    // 0x08001760: addiu       $t7, $zero, 0x32B
    ctx->r15 = ADD32(0, 0X32B);
    // 0x08001764: b           L_08001804
    // 0x08001768: lbu         $a1, 0xD1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD1);
        goto L_08001804;
    // 0x08001768: lbu         $a1, 0xD1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD1);
L_0800176C:
    // 0x0800176C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001770: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001774: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08001778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800177C: jalr        $t9
    // 0x08001780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08001780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x08001784: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001788: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800178C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X784) << 16);
    // 0x08001790: jalr        $t9
    // 0x08001794: addiu       $a0, $a0, 0x784
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X784));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001794: addiu       $a0, $a0, 0x784
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X784));
    after_24:
    // 0x08001798: b           L_080018F8
    // 0x0800179C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x0800179C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080017A0:
    // 0x080017A0: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x080017A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x080017A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080017AC: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080017B0: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x080017B4: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x080017B8: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x080017BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080017C0: jalr        $t9
    // 0x080017C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080017C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_25:
    // 0x080017C8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x080017CC: sb          $t1, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r9;
    // 0x080017D0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080017D4: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x080017D8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x080017DC: jalr        $t9
    // 0x080017E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080017E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x080017E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080017E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080017EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X784) << 16);
    // 0x080017F0: jalr        $t9
    // 0x080017F4: addiu       $a0, $a0, 0x784
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X784));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x080017F4: addiu       $a0, $a0, 0x784
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X784));
    after_27:
    // 0x080017F8: b           L_080018F8
    // 0x080017FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x080017FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001800:
    // 0x08001800: lbu         $a1, 0xD1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD1);
L_08001804:
    // 0x08001804: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x08001808: jal         0x08000000
    // 0x0800180C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_08000000_6FB200(rdram, ctx);
        goto after_28;
    // 0x0800180C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x08001810: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x08001814: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08001818: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x0800181C: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x08001820: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x08001824: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x08001828: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x0800182C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001830: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08001834: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001838: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X5D0) << 16);
    // 0x0800183C: addiu       $a0, $a0, 0x5D0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X5D0));
    // 0x08001840: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x08001844: nop

    // 0x08001848: sh          $t5, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r13;
    // 0x0800184C: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x08001850: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08001854: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x08001858: nop

    // 0x0800185C: sh          $t7, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r15;
    // 0x08001860: lwc1        $f16, 0x10($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08001864: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x08001868: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x0800186C: nop

    // 0x08001870: sh          $t0, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r8;
    // 0x08001874: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x08001878: lwc1        $f4, 0xC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XC);
    // 0x0800187C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08001880: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x08001884: jalr        $t9
    // 0x08001888: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001888: sh          $t2, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r10;
    after_29:
    // 0x0800188C: b           L_080018F8
    // 0x08001890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080018F8;
    // 0x08001890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001894:
    // 0x08001894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800189C: jal         0x08000000
    // 0x080018A0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_08000000_6FB200(rdram, ctx);
        goto after_30;
    // 0x080018A0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_30:
    // 0x080018A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x080018A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080018AC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080018B0: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x080018B4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X3AC) << 16);
    // 0x080018B8: addiu       $a0, $a0, 0x3AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3AC));
    // 0x080018BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x080018C0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x080018C4: nop

    // 0x080018C8: sh          $t4, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r12;
    // 0x080018CC: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x080018D0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x080018D4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x080018D8: nop

    // 0x080018DC: sh          $t6, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r14;
    // 0x080018E0: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x080018E4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x080018E8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x080018EC: jalr        $t9
    // 0x080018F0: sh          $t8, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x080018F0: sh          $t8, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r24;
    after_31:
L_080018F4:
    // 0x080018F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080018F8:
    // 0x080018F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080018FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001900: jr          $ra
    // 0x08001904: nop

    TRACE_RETURN()
    return;
    // 0x08001904: nop

;}
RECOMP_FUNC void func_08001B08_6FCD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001B10: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001B14: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(35, 0X1908) << 16);
    // 0x08001B18: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08001B1C: bne         $v0, $zero, L_08001B60
    if (ctx->r2 != 0) {
        // 0x08001B20: addiu       $t9, $t9, 0x1908
        ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(35, 0X1908));
            goto L_08001B60;
    }
    // 0x08001B20: addiu       $t9, $t9, 0x1908
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(35, 0X1908));
    // 0x08001B24: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001B28: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x08001B2C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37B8) << 16);
    // 0x08001B30: lw          $t6, 0xA0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA0);
    // 0x08001B34: bnel        $a1, $t6, L_08001B48
    if (ctx->r5 != ctx->r14) {
        // 0x08001B38: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_08001B48;
    }
    goto skip_0;
    // 0x08001B38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    skip_0:
    // 0x08001B3C: lwc1        $f4, 0x37B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(35, 0X37B8));
    // 0x08001B40: swc1        $f4, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->f4.u32l;
    // 0x08001B44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_08001B48:
    // 0x08001B48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001B4C: jalr        $t9
    // 0x08001B50: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001B50: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08001B54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001B58: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001B5C: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
L_08001B60:
    // 0x08001B60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001B64: bne         $v0, $at, L_08001BAC
    if (ctx->r2 != ctx->r1) {
        // 0x08001B68: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_08001BAC;
    }
    // 0x08001B68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x08001B6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001B70: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x08001B74: lui         $v1, 0x800
    ctx->r3 = S32(RELOC_HI16(35, 0X1908) << 16);
    // 0x08001B78: addiu       $v1, $v1, 0x1908
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(35, 0X1908));
    // 0x08001B7C: lw          $t7, 0xA0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA0);
    // 0x08001B80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37BC) << 16);
    // 0x08001B84: bnel        $a2, $t7, L_08001B98
    if (ctx->r6 != ctx->r15) {
        // 0x08001B88: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_08001B98;
    }
    goto skip_1;
    // 0x08001B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_1:
    // 0x08001B8C: lwc1        $f6, 0x37BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(35, 0X37BC));
    // 0x08001B90: swc1        $f6, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f6.u32l;
    // 0x08001B94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_08001B98:
    // 0x08001B98: jalr        $v1
    // 0x08001B9C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08001B9C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x08001BA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001BA4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001BA8: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
L_08001BAC:
    // 0x08001BAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001BB0: bne         $v0, $at, L_08001BE4
    if (ctx->r2 != ctx->r1) {
        // 0x08001BB4: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_08001BE4;
    }
    // 0x08001BB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001BB8: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x08001BBC: lui         $v1, 0x800
    ctx->r3 = S32(RELOC_HI16(35, 0X1908) << 16);
    // 0x08001BC0: addiu       $v1, $v1, 0x1908
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(35, 0X1908));
    // 0x08001BC4: lw          $t8, 0xA0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XA0);
    // 0x08001BC8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37C0) << 16);
    // 0x08001BCC: bne         $a2, $t8, L_08001BDC
    if (ctx->r6 != ctx->r24) {
        // 0x08001BD0: nop
    
            goto L_08001BDC;
    }
    // 0x08001BD0: nop

    // 0x08001BD4: lwc1        $f8, 0x37C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(35, 0X37C0));
    // 0x08001BD8: swc1        $f8, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f8.u32l;
L_08001BDC:
    // 0x08001BDC: jalr        $v1
    // 0x08001BE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x08001BE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
L_08001BE4:
    // 0x08001BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001BEC: jr          $ra
    // 0x08001BF0: nop

    TRACE_RETURN()
    return;
    // 0x08001BF0: nop

;}
RECOMP_FUNC void func_0800091C_6FBB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800091C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000928: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800092C: lhu         $t6, 0x8A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000930: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x08000934: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x08000938: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x0800093C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x08000940: bne         $t8, $zero, L_08000970
    if (ctx->r24 != 0) {
        // 0x08000944: sh          $t7, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r15;
            goto L_08000970;
    }
    // 0x08000944: sh          $t7, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r15;
    // 0x08000948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800094C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08000950: sh          $t9, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r25;
    // 0x08000954: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000958: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x0800095C: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08000960: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X8D4) << 16);
    // 0x08000964: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000968: jalr        $t9
    // 0x0800096C: addiu       $a0, $a0, 0x8D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X8D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800096C: addiu       $a0, $a0, 0x8D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X8D4));
    after_0:
L_08000970:
    // 0x08000970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000978: jr          $ra
    // 0x0800097C: nop

    TRACE_RETURN()
    return;
    // 0x0800097C: nop

;}
RECOMP_FUNC void func_08003148_6FE348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003148: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800314C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003150: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08003154: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x08003158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800315C: beql        $v0, $zero, L_08003180
    if (ctx->r2 == 0) {
        // 0x08003160: lh          $t6, 0xD0($s0)
        ctx->r14 = MEM_H(ctx->r16, 0XD0);
            goto L_08003180;
    }
    goto skip_0;
    // 0x08003160: lh          $t6, 0xD0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XD0);
    skip_0:
    // 0x08003164: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08003168: swc1        $f4, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f4.u32l;
    // 0x0800316C: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08003170: swc1        $f6, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->f6.u32l;
    // 0x08003174: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003178: swc1        $f8, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f8.u32l;
    // 0x0800317C: lh          $t6, 0xD0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XD0);
L_08003180:
    // 0x08003180: lh          $t9, 0xD6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XD6);
    // 0x08003184: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x08003188: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x0800318C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x08003190: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08003194: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08003198: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x0800319C: lh          $t7, 0xD2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD2);
    // 0x080031A0: lh          $t8, 0xD4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD4);
    // 0x080031A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080031A8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x080031AC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x080031B0: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x080031B4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x080031B8: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x080031BC: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x080031C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080031C4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x080031C8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x080031CC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x080031D0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x080031D4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080031D8: jalr        $t9
    // 0x080031DC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080031DC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x080031E0: bne         $v0, $zero, L_080031F8
    if (ctx->r2 != 0) {
        // 0x080031E4: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(35, 0X3074) << 16);
            goto L_080031F8;
    }
    // 0x080031E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X3074) << 16);
    // 0x080031E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080031EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080031F0: jalr        $t9
    // 0x080031F4: addiu       $a0, $a0, 0x3074
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3074));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080031F4: addiu       $a0, $a0, 0x3074
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3074));
    after_1:
L_080031F8:
    // 0x080031F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x080031FC: sh          $t0, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = ctx->r8;
    // 0x08003200: jal         0x080028B4
    // 0x08003204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_080028B4_6FDAB4(rdram, ctx);
        goto after_2;
    // 0x08003204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08003208: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800320C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08003210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08003214: jr          $ra
    // 0x08003218: nop

    TRACE_RETURN()
    return;
    // 0x08003218: nop

;}
RECOMP_FUNC void func_0800119C_6FC39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800119C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080011A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080011A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080011A8: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x080011AC: lh          $t7, 0xDA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XDA);
    // 0x080011B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080011B4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080011B8: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x080011BC: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x080011C0: bne         $t0, $zero, L_08001210
    if (ctx->r8 != 0) {
        // 0x080011C4: sh          $t9, 0x14($a1)
        MEM_H(0X14, ctx->r5) = ctx->r25;
            goto L_08001210;
    }
    // 0x080011C4: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x080011C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080011CC: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x080011D0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080011D4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080011D8: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x080011DC: jalr        $t9
    // 0x080011E0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011E0: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_0:
    // 0x080011E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080011E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011EC: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x080011F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080011F4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X10A8) << 16);
    // 0x080011F8: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x080011FC: addiu       $a0, $a0, 0x10A8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X10A8));
    // 0x08001200: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x08001204: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x08001208: jalr        $t9
    // 0x0800120C: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800120C: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    after_1:
L_08001210:
    // 0x08001210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08001214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001218: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800121C: jr          $ra
    // 0x08001220: nop

    TRACE_RETURN()
    return;
    // 0x08001220: nop

;}
RECOMP_FUNC void func_08001C70_6FCE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C70: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x08001C74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08001C78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08001C7C: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x08001C80: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08001C84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001C88: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08001C8C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08001C90: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x08001C94: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001C98: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x08001C9C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08001CA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x08001CA4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x08001CA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001CAC: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x08001CB0: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x08001CB4: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08001CB8: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x08001CBC: lwc1        $f18, 0x10($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X10);
    // 0x08001CC0: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08001CC4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08001CC8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x08001CCC: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x08001CD0: lw          $t9, 0xA0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XA0);
    // 0x08001CD4: beql        $a1, $t9, L_08001D34
    if (ctx->r5 == ctx->r25) {
        // 0x08001CD8: swc1        $f10, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
            goto L_08001D34;
    }
    goto skip_0;
    // 0x08001CD8: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    skip_0:
    // 0x08001CDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001CE0: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x08001CE4: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x08001CE8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001CEC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x08001CF0: sh          $t1, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r9;
    // 0x08001CF4: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x08001CF8: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x08001CFC: jalr        $t9
    // 0x08001D00: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D00: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x08001D04: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x08001D08: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D0C: addiu       $t9, $t9, -0x24FC
    ctx->r25 = ADD32(ctx->r25, -0X24FC);
    // 0x08001D10: lhu         $a3, 0xE0($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0XE0);
    // 0x08001D14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001D18: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x08001D1C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x08001D20: jalr        $t9
    // 0x08001D24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08001D28: b           L_08001D8C
    // 0x08001D2C: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
        goto L_08001D8C;
    // 0x08001D2C: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001D30: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
L_08001D34:
    // 0x08001D34: lh          $t3, 0xE4($a2)
    ctx->r11 = MEM_H(ctx->r6, 0XE4);
    // 0x08001D38: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x08001D3C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D40: addiu       $t4, $t3, 0xC8
    ctx->r12 = ADD32(ctx->r11, 0XC8);
    // 0x08001D44: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x08001D48: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x08001D4C: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x08001D50: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x08001D54: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x08001D58: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x08001D5C: jalr        $t9
    // 0x08001D60: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001D60: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x08001D64: lw          $t5, 0xB0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB0);
    // 0x08001D68: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D6C: addiu       $t9, $t9, -0x24FC
    ctx->r25 = ADD32(ctx->r25, -0X24FC);
    // 0x08001D70: lhu         $a3, 0xE0($t5)
    ctx->r7 = MEM_HU(ctx->r13, 0XE0);
    // 0x08001D74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001D78: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x08001D7C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x08001D80: jalr        $t9
    // 0x08001D84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001D84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08001D88: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
L_08001D8C:
    // 0x08001D8C: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x08001D90: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001D94: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08001D98: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08001D9C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x08001DA0: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08001DA4: jalr        $t9
    // 0x08001DA8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001DA8: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_4:
    // 0x08001DAC: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x08001DB0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08001DB4: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x08001DB8: lhu         $t7, 0x50($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X50);
    // 0x08001DBC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x08001DC0: nop

    // 0x08001DC4: slti        $at, $a3, 0x3
    ctx->r1 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x08001DC8: beq         $at, $zero, L_08001DE8
    if (ctx->r1 == 0) {
        // 0x08001DCC: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(35, 0X37C8) << 16);
            goto L_08001DE8;
    }
    // 0x08001DCC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37C8) << 16);
    // 0x08001DD0: ldc1        $f16, 0x37C8($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X37C8));
    // 0x08001DD4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001DD8: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x08001DDC: nop

    // 0x08001DE0: bc1tl       L_08001F1C
    if (c1cs) {
        // 0x08001DE4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08001F1C;
    }
    goto skip_1;
    // 0x08001DE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
L_08001DE8:
    // 0x08001DE8: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x08001DEC: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x08001DF0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37D0) << 16);
    // 0x08001DF4: subu        $t8, $t7, $a2
    ctx->r24 = SUB32(ctx->r15, ctx->r6);
    // 0x08001DF8: addiu       $v0, $t8, 0x200
    ctx->r2 = ADD32(ctx->r24, 0X200);
    // 0x08001DFC: andi        $t1, $v0, 0x3FF
    ctx->r9 = ctx->r2 & 0X3FF;
    // 0x08001E00: addiu       $v1, $t1, -0x200
    ctx->r3 = ADD32(ctx->r9, -0X200);
    // 0x08001E04: bgez        $v1, L_08001E18
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08001E08: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_08001E18;
    }
    // 0x08001E08: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x08001E0C: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x08001E10: b           L_08001E1C
    // 0x08001E14: subu        $a0, $t2, $t1
    ctx->r4 = SUB32(ctx->r10, ctx->r9);
        goto L_08001E1C;
    // 0x08001E14: subu        $a0, $t2, $t1
    ctx->r4 = SUB32(ctx->r10, ctx->r9);
L_08001E18:
    // 0x08001E18: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_08001E1C:
    // 0x08001E1C: ldc1        $f10, 0x37D0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X37D0));
    // 0x08001E20: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001E24: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001E28: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x08001E2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001E30: lhu         $t4, 0x50($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X50);
    // 0x08001E34: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x08001E38: add.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d + ctx->f16.d;
    // 0x08001E3C: trunc.w.d   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x08001E40: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08001E44: nop

    // 0x08001E48: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x08001E4C: beq         $at, $zero, L_08001E5C
    if (ctx->r1 == 0) {
        // 0x08001E50: nop
    
            goto L_08001E5C;
    }
    // 0x08001E50: nop

    // 0x08001E54: b           L_08001E84
    // 0x08001E58: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
        goto L_08001E84;
    // 0x08001E58: sh          $t4, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r12;
L_08001E5C:
    // 0x08001E5C: bltz        $v1, L_08001E70
    if (SIGNED(ctx->r3) < 0) {
        // 0x08001E60: subu        $t9, $a2, $a1
        ctx->r25 = SUB32(ctx->r6, ctx->r5);
            goto L_08001E70;
    }
    // 0x08001E60: subu        $t9, $a2, $a1
    ctx->r25 = SUB32(ctx->r6, ctx->r5);
    // 0x08001E64: addu        $t5, $a2, $a1
    ctx->r13 = ADD32(ctx->r6, ctx->r5);
    // 0x08001E68: b           L_08001E74
    // 0x08001E6C: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
        goto L_08001E74;
    // 0x08001E6C: sh          $t5, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r13;
L_08001E70:
    // 0x08001E70: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
L_08001E74:
    // 0x08001E74: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x08001E78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001E7C: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08001E80: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
L_08001E84:
    // 0x08001E84: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x08001E88: lhu         $t8, 0x54($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X54);
    // 0x08001E8C: lhu         $t4, 0x54($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X54);
    // 0x08001E90: subu        $t1, $t8, $a2
    ctx->r9 = SUB32(ctx->r24, ctx->r6);
    // 0x08001E94: addiu       $v0, $t1, 0x200
    ctx->r2 = ADD32(ctx->r9, 0X200);
    // 0x08001E98: andi        $t2, $v0, 0x3FF
    ctx->r10 = ctx->r2 & 0X3FF;
    // 0x08001E9C: addiu       $v1, $t2, -0x200
    ctx->r3 = ADD32(ctx->r10, -0X200);
    // 0x08001EA0: bgez        $v1, L_08001EB0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x08001EA4: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_08001EB0;
    }
    // 0x08001EA4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x08001EA8: b           L_08001EB0
    // 0x08001EAC: subu        $a0, $t3, $t2
    ctx->r4 = SUB32(ctx->r11, ctx->r10);
        goto L_08001EB0;
    // 0x08001EAC: subu        $a0, $t3, $t2
    ctx->r4 = SUB32(ctx->r11, ctx->r10);
L_08001EB0:
    // 0x08001EB0: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x08001EB4: beq         $at, $zero, L_08001EC4
    if (ctx->r1 == 0) {
        // 0x08001EB8: nop
    
            goto L_08001EC4;
    }
    // 0x08001EB8: nop

    // 0x08001EBC: b           L_08001EEC
    // 0x08001EC0: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
        goto L_08001EEC;
    // 0x08001EC0: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
L_08001EC4:
    // 0x08001EC4: bltz        $v1, L_08001ED8
    if (SIGNED(ctx->r3) < 0) {
        // 0x08001EC8: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_08001ED8;
    }
    // 0x08001EC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08001ECC: addu        $t5, $a2, $a1
    ctx->r13 = ADD32(ctx->r6, ctx->r5);
    // 0x08001ED0: b           L_08001EE0
    // 0x08001ED4: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
        goto L_08001EE0;
    // 0x08001ED4: sh          $t5, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r13;
L_08001ED8:
    // 0x08001ED8: subu        $t9, $a2, $a1
    ctx->r25 = SUB32(ctx->r6, ctx->r5);
    // 0x08001EDC: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
L_08001EE0:
    // 0x08001EE0: lhu         $t6, 0x18($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X18);
    // 0x08001EE4: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08001EE8: sh          $t7, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r15;
L_08001EEC:
    // 0x08001EEC: bne         $t0, $zero, L_08001F18
    if (ctx->r8 != 0) {
        // 0x08001EF0: lw          $v0, 0xB0($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XB0);
            goto L_08001F18;
    }
    // 0x08001EF0: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x08001EF4: lh          $t8, 0xE4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XE4);
    // 0x08001EF8: negu        $t1, $t8
    ctx->r9 = SUB32(0, ctx->r24);
    // 0x08001EFC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x08001F00: nop

    // 0x08001F04: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x08001F08: trunc.w.d   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x08001F0C: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x08001F10: nop

    // 0x08001F14: sh          $t3, 0xE4($v0)
    MEM_H(0XE4, ctx->r2) = ctx->r11;
L_08001F18:
    // 0x08001F18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08001F1C:
    // 0x08001F1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001F20: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x08001F24: jr          $ra
    // 0x08001F28: nop

    TRACE_RETURN()
    return;
    // 0x08001F28: nop

;}
RECOMP_FUNC void func_080028B4_6FDAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080028B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080028B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080028BC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080028C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080028C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080028C8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080028CC: jalr        $t9
    // 0x080028D0: lhu         $a0, 0xE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XE0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080028D0: lhu         $a0, 0xE0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XE0);
    after_0:
    // 0x080028D4: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x080028D8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080028DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080028E0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x080028E4: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x080028E8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x080028EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37D8) << 16);
    // 0x080028F0: ldc1        $f10, 0x37D8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X37D8));
    // 0x080028F4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x080028F8: lw          $t7, 0x9C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X9C);
    // 0x080028FC: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(35, 0X3830) << 16);
    // 0x08002900: addiu       $t0, $t0, 0x3830
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(35, 0X3830));
    // 0x08002904: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x08002908: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x0800290C: beq         $t7, $zero, L_08002DA8
    if (ctx->r15 == 0) {
        // 0x08002910: cvt.s.d     $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
            goto L_08002DA8;
    }
    // 0x08002910: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x08002914: lhu         $t1, 0xE2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XE2);
    // 0x08002918: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x0800291C: beq         $at, $zero, L_08002DA8
    if (ctx->r1 == 0) {
        // 0x08002920: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_08002DA8;
    }
    // 0x08002920: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x08002924: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37E0) << 16);
    // 0x08002928: addu        $at, $at, $t1
    gpr jr_addend_08002930 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x0800292C: lw          $t1, 0x37E0($at)
    ctx->r9 = ADD32(ctx->r1, (int16_t)RELOC_LO16(35, 0X37E0));
    // 0x08002930: jr          $t1
    // 0x08002934: nop

    switch (jr_addend_08002930 >> 2) {
        case 0: goto L_08002938; break;
        case 1: goto L_08002A34; break;
        case 2: goto L_08002B28; break;
        case 3: goto L_08002BA4; break;
        case 4: goto L_08002C14; break;
        case 5: goto L_08002D74; break;
        default: switch_error(__func__, 0x08002930, 0x080037E0);
    }
    // 0x08002934: nop

L_08002938:
    // 0x08002938: trunc.w.s   $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x0800293C: lh          $t2, 0xE0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XE0);
    // 0x08002940: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002944: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002948: addiu       $t3, $t2, 0xA0
    ctx->r11 = ADD32(ctx->r10, 0XA0);
    // 0x0800294C: sh          $t3, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r11;
    // 0x08002950: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08002954: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800295C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002960: jalr        $t9
    // 0x08002964: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002964: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_1:
    // 0x08002968: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(35, 0X3830) << 16);
    // 0x0800296C: addiu       $t0, $t0, 0x3830
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(35, 0X3830));
    // 0x08002970: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x08002974: lw          $v1, 0xDC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XDC);
    // 0x08002978: beql        $v1, $zero, L_08002DAC
    if (ctx->r3 == 0) {
        // 0x0800297C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08002DAC;
    }
    goto skip_0;
    // 0x0800297C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x08002980: lw          $t5, 0x68($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X68);
    // 0x08002984: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x08002988: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x0800298C: beql        $t6, $zero, L_08002DAC
    if (ctx->r14 == 0) {
        // 0x08002990: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08002DAC;
    }
    goto skip_1;
    // 0x08002990: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x08002994: sb          $t7, 0x8D($v0)
    MEM_B(0X8D, ctx->r2) = ctx->r15;
    // 0x08002998: lbu         $t8, 0x4C($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4C);
    // 0x0800299C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x080029A0: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x080029A4: bne         $t8, $at, L_08002DA8
    if (ctx->r24 != ctx->r1) {
        // 0x080029A8: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_08002DA8;
    }
    // 0x080029A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x080029AC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x080029B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080029B4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x080029B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080029BC: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x080029C0: ori         $t3, $t3, 0x220
    ctx->r11 = ctx->r11 | 0X220;
    // 0x080029C4: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x080029C8: sh          $t2, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r10;
    // 0x080029CC: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x080029D0: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    // 0x080029D4: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
    // 0x080029D8: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x080029DC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080029E0: addiu       $t9, $t9, -0xC28
    ctx->r25 = ADD32(ctx->r25, -0XC28);
    // 0x080029E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080029E8: sw          $zero, 0x60($t4)
    MEM_W(0X60, ctx->r12) = 0;
    // 0x080029EC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x080029F0: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080029F4: addiu       $a0, $zero, 0x2A3
    ctx->r4 = ADD32(0, 0X2A3);
    // 0x080029F8: jalr        $t9
    // 0x080029FC: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080029FC: lui         $a3, 0x4448
    ctx->r7 = S32(0X4448 << 16);
    after_2:
    // 0x08002A00: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002A04: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002A08: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x08002A0C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002A10: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X321C) << 16);
    // 0x08002A14: sh          $t5, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r13;
    // 0x08002A18: addiu       $a0, $a0, 0x321C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X321C));
    // 0x08002A1C: swc1        $f2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f2.u32l;
    // 0x08002A20: swc1        $f2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f2.u32l;
    // 0x08002A24: jalr        $t9
    // 0x08002A28: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002A28: swc1        $f2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f2.u32l;
    after_3:
    // 0x08002A2C: b           L_08002DAC
    // 0x08002A30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002DAC;
    // 0x08002A30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002A34:
    // 0x08002A34: lh          $v0, 0xE0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE0);
    // 0x08002A38: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x08002A3C: slti        $at, $t6, 0x3E0
    ctx->r1 = SIGNED(ctx->r14) < 0X3E0 ? 1 : 0;
    // 0x08002A40: beq         $at, $zero, L_08002A4C
    if (ctx->r1 == 0) {
        // 0x08002A44: addiu       $t7, $v0, 0xA0
        ctx->r15 = ADD32(ctx->r2, 0XA0);
            goto L_08002A4C;
    }
    // 0x08002A44: addiu       $t7, $v0, 0xA0
    ctx->r15 = ADD32(ctx->r2, 0XA0);
    // 0x08002A48: sh          $t7, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r15;
L_08002A4C:
    // 0x08002A4C: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002A50: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x08002A54: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08002A58: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x08002A5C: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x08002A60: beq         $t2, $zero, L_08002B14
    if (ctx->r10 == 0) {
        // 0x08002A64: sh          $t1, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r9;
            goto L_08002B14;
    }
    // 0x08002A64: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08002A68: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002A6C: lwc1        $f0, 0xDC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08002A70: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X37F8) << 16);
    // 0x08002A74: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08002A78: nop

    // 0x08002A7C: bc1fl       L_08002AA0
    if (!c1cs) {
        // 0x08002A80: sh          $zero, 0xE0($s0)
        MEM_H(0XE0, ctx->r16) = 0;
            goto L_08002AA0;
    }
    goto skip_2;
    // 0x08002A80: sh          $zero, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = 0;
    skip_2:
    // 0x08002A84: ldc1        $f10, 0x37F8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X37F8));
    // 0x08002A88: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x08002A8C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x08002A90: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002A94: b           L_08002AA0
    // 0x08002A98: swc1        $f18, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f18.u32l;
        goto L_08002AA0;
    // 0x08002A98: swc1        $f18, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f18.u32l;
    // 0x08002A9C: sh          $zero, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = 0;
L_08002AA0:
    // 0x08002AA0: lwc1        $f0, 0xE4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x08002AA4: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x08002AA8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08002AAC: nop

    // 0x08002AB0: bc1f        L_08002AD4
    if (!c1cs) {
        // 0x08002AB4: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_08002AD4;
    }
    // 0x08002AB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002AB8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08002ABC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08002AC0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08002AC4: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x08002AC8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002ACC: b           L_08002AD8
    // 0x08002AD0: swc1        $f10, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f10.u32l;
        goto L_08002AD8;
    // 0x08002AD0: swc1        $f10, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f10.u32l;
L_08002AD4:
    // 0x08002AD4: swc1        $f2, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f2.u32l;
L_08002AD8:
    // 0x08002AD8: lwc1        $f18, 0xDC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08002ADC: lwc1        $f6, 0xE4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x08002AE0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002AE4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x08002AE8: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002AEC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x08002AF0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x08002AF4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08002AF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002B00: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08002B04: jalr        $t9
    // 0x08002B08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002B08: nop

    after_4:
    // 0x08002B0C: b           L_08002DAC
    // 0x08002B10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002DAC;
    // 0x08002B10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002B14:
    // 0x08002B14: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002B18: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x08002B1C: sh          $t7, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r15;
    // 0x08002B20: b           L_08002DA8
    // 0x08002B24: swc1        $f2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f2.u32l;
        goto L_08002DA8;
    // 0x08002B24: swc1        $f2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f2.u32l;
L_08002B28:
    // 0x08002B28: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002B2C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x08002B30: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x08002B34: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x08002B38: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x08002B3C: beq         $t2, $zero, L_08002B8C
    if (ctx->r10 == 0) {
        // 0x08002B40: sh          $t1, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r9;
            goto L_08002B8C;
    }
    // 0x08002B40: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x08002B44: lwc1        $f10, 0xDC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08002B48: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3800) << 16);
    // 0x08002B4C: ldc1        $f16, 0x3800($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3800));
    // 0x08002B50: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x08002B54: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x08002B58: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x08002B5C: nop

    // 0x08002B60: bc1fl       L_08002B84
    if (!c1cs) {
        // 0x08002B64: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_08002B84;
    }
    goto skip_3;
    // 0x08002B64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_3:
    // 0x08002B68: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3808) << 16);
    // 0x08002B6C: ldc1        $f18, 0x3808($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3808));
    // 0x08002B70: add.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f0.d + ctx->f18.d;
    // 0x08002B74: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002B78: b           L_08002DA8
    // 0x08002B7C: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
        goto L_08002DA8;
    // 0x08002B7C: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
    // 0x08002B80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_08002B84:
    // 0x08002B84: b           L_08002DA8
    // 0x08002B88: swc1        $f8, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f8.u32l;
        goto L_08002DA8;
    // 0x08002B88: swc1        $f8, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f8.u32l;
L_08002B8C:
    // 0x08002B8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002B90: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x08002B94: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x08002B98: sh          $t4, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r12;
    // 0x08002B9C: b           L_08002DA8
    // 0x08002BA0: swc1        $f10, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f10.u32l;
        goto L_08002DA8;
    // 0x08002BA0: swc1        $f10, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f10.u32l;
L_08002BA4:
    // 0x08002BA4: lhu         $t5, 0x8A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002BA8: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08002BAC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x08002BB0: addiu       $t9, $t5, -0x1
    ctx->r25 = ADD32(ctx->r13, -0X1);
    // 0x08002BB4: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x08002BB8: beq         $t6, $zero, L_08002BFC
    if (ctx->r14 == 0) {
        // 0x08002BBC: sh          $t9, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r25;
            goto L_08002BFC;
    }
    // 0x08002BBC: sh          $t9, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r25;
    // 0x08002BC0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002BC4: lwc1        $f0, 0xDC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08002BC8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3810) << 16);
    // 0x08002BCC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x08002BD0: nop

    // 0x08002BD4: bc1f        L_08002BF4
    if (!c1cs) {
        // 0x08002BD8: nop
    
            goto L_08002BF4;
    }
    // 0x08002BD8: nop

    // 0x08002BDC: ldc1        $f18, 0x3810($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3810));
    // 0x08002BE0: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08002BE4: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x08002BE8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002BEC: b           L_08002DA8
    // 0x08002BF0: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
        goto L_08002DA8;
    // 0x08002BF0: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
L_08002BF4:
    // 0x08002BF4: b           L_08002DA8
    // 0x08002BF8: swc1        $f2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f2.u32l;
        goto L_08002DA8;
    // 0x08002BF8: swc1        $f2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f2.u32l;
L_08002BFC:
    // 0x08002BFC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x08002C00: sh          $t7, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r15;
    // 0x08002C04: sh          $t8, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r24;
    // 0x08002C08: swc1        $f2, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f2.u32l;
    // 0x08002C0C: b           L_08002DA8
    // 0x08002C10: swc1        $f2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f2.u32l;
        goto L_08002DA8;
    // 0x08002C10: swc1        $f2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f2.u32l;
L_08002C14:
    // 0x08002C14: lhu         $t1, 0x8A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X8A);
    // 0x08002C18: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x08002C1C: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x08002C20: beq         $t3, $zero, L_08002D00
    if (ctx->r11 == 0) {
        // 0x08002C24: sh          $t2, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r10;
            goto L_08002D00;
    }
    // 0x08002C24: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
    // 0x08002C28: lwc1        $f8, 0xDC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08002C2C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3818) << 16);
    // 0x08002C30: ldc1        $f10, 0x3818($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3818));
    // 0x08002C34: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x08002C38: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x08002C3C: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x08002C40: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08002C44: bc1fl       L_08002C68
    if (!c1cs) {
        // 0x08002C48: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_08002C68;
    }
    goto skip_4;
    // 0x08002C48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_4:
    // 0x08002C4C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3820) << 16);
    // 0x08002C50: ldc1        $f16, 0x3820($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3820));
    // 0x08002C54: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x08002C58: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08002C5C: b           L_08002C70
    // 0x08002C60: swc1        $f4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f4.u32l;
        goto L_08002C70;
    // 0x08002C60: swc1        $f4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f4.u32l;
    // 0x08002C64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_08002C68:
    // 0x08002C68: nop

    // 0x08002C6C: swc1        $f6, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f6.u32l;
L_08002C70:
    // 0x08002C70: lwc1        $f8, 0xE4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x08002C74: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x08002C78: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08002C7C: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x08002C80: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x08002C84: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x08002C88: nop

    // 0x08002C8C: bc1fl       L_08002CB8
    if (!c1cs) {
        // 0x08002C90: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_08002CB8;
    }
    goto skip_5;
    // 0x08002C90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_5:
    // 0x08002C94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002C98: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08002C9C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08002CA0: nop

    // 0x08002CA4: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x08002CA8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08002CAC: b           L_08002CC0
    // 0x08002CB0: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
        goto L_08002CC0;
    // 0x08002CB0: swc1        $f4, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f4.u32l;
    // 0x08002CB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_08002CB8:
    // 0x08002CB8: nop

    // 0x08002CBC: swc1        $f6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f6.u32l;
L_08002CC0:
    // 0x08002CC0: lwc1        $f10, 0xDC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x08002CC4: lwc1        $f18, 0xE4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x08002CC8: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x08002CCC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002CD0: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002CD4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x08002CD8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x08002CDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002CE0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x08002CE4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08002CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002CEC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x08002CF0: jalr        $t9
    // 0x08002CF4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002CF4: nop

    after_5:
    // 0x08002CF8: b           L_08002DAC
    // 0x08002CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002DAC;
    // 0x08002CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002D00:
    // 0x08002D00: sh          $zero, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = 0;
    // 0x08002D04: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x08002D08: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002D0C: lui         $t8, 0x60
    ctx->r24 = S32(0X60 << 16);
    // 0x08002D10: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x08002D14: ori         $t8, $t8, 0x80
    ctx->r24 = ctx->r24 | 0X80;
    // 0x08002D18: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x08002D1C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08002D20: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
    // 0x08002D24: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x08002D28: ori         $t2, $t2, 0x260
    ctx->r10 = ctx->r10 | 0X260;
    // 0x08002D2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D30: sw          $t8, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r24;
    // 0x08002D34: lhu         $t3, 0xEC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XEC);
    // 0x08002D38: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x08002D3C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D40: beq         $t3, $zero, L_08002D64
    if (ctx->r11 == 0) {
        // 0x08002D44: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(35, 0X3074) << 16);
            goto L_08002D64;
    }
    // 0x08002D44: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X3074) << 16);
    // 0x08002D48: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002D4C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002D50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X3148) << 16);
    // 0x08002D54: jalr        $t9
    // 0x08002D58: addiu       $a0, $a0, 0x3148
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3148));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002D58: addiu       $a0, $a0, 0x3148
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3148));
    after_6:
    // 0x08002D5C: b           L_08002DAC
    // 0x08002D60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002DAC;
    // 0x08002D60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002D64:
    // 0x08002D64: jalr        $t9
    // 0x08002D68: addiu       $a0, $a0, 0x3074
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3074));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002D68: addiu       $a0, $a0, 0x3074
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3074));
    after_7:
    // 0x08002D6C: b           L_08002DAC
    // 0x08002D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_08002DAC;
    // 0x08002D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002D74:
    // 0x08002D74: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x08002D78: ori         $t4, $t4, 0x20
    ctx->r12 = ctx->r12 | 0X20;
    // 0x08002D7C: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x08002D80: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x08002D84: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002D88: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002D8C: sw          $zero, 0x60($t5)
    MEM_W(0X60, ctx->r13) = 0;
    // 0x08002D90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002D98: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08002D9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002DA0: jalr        $t9
    // 0x08002DA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002DA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
L_08002DA8:
    // 0x08002DA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08002DAC:
    // 0x08002DAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002DB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08002DB4: jr          $ra
    // 0x08002DB8: nop

    TRACE_RETURN()
    return;
    // 0x08002DB8: nop

;}
RECOMP_FUNC void func_08002298_6FD498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800229C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080022A0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080022A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080022AC: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x080022B0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080022B4: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x080022B8: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    // 0x080022BC: jalr        $t9
    // 0x080022C0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080022C0: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
    // 0x080022C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080022CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X22E8) << 16);
    // 0x080022D0: jalr        $t9
    // 0x080022D4: addiu       $a0, $a0, 0x22E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X22E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080022D4: addiu       $a0, $a0, 0x22E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X22E8));
    after_1:
    // 0x080022D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080022DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080022E0: jr          $ra
    // 0x080022E4: nop

    TRACE_RETURN()
    return;
    // 0x080022E4: nop

;}
RECOMP_FUNC void func_080019EC_6FCBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080019F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080019F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080019F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080019FC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08001A00: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001A04: ori         $t6, $t6, 0x23
    ctx->r14 = ctx->r14 | 0X23;
    // 0x08001A08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001A0C: bne         $v0, $zero, L_08001A3C
    if (ctx->r2 != 0) {
        // 0x08001A10: sw          $t6, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->r14;
            goto L_08001A3C;
    }
    // 0x08001A10: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001A14: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A18: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001A1C: jalr        $t9
    // 0x08001A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001A24: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001A28: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001A2C: jalr        $t9
    // 0x08001A30: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A30: addiu       $a0, $zero, 0x2AD
    ctx->r4 = ADD32(0, 0X2AD);
    after_1:
    // 0x08001A34: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08001A38: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_08001A3C:
    // 0x08001A3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001A40: bne         $v0, $at, L_08001A64
    if (ctx->r2 != ctx->r1) {
        // 0x08001A44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001A64;
    }
    // 0x08001A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A48: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A4C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001A50: jalr        $t9
    // 0x08001A54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001A54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x08001A58: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001A5C: sb          $t7, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r15;
    // 0x08001A60: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_08001A64:
    // 0x08001A64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001A68: bne         $v0, $at, L_08001A88
    if (ctx->r2 != ctx->r1) {
        // 0x08001A6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_08001A88;
    }
    // 0x08001A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A70: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A74: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001A78: jalr        $t9
    // 0x08001A7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001A7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x08001A80: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08001A84: sb          $t8, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r24;
L_08001A88:
    // 0x08001A88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001A8C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001A90: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08001A94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A98: addiu       $t9, $t9, 0x9F0
    ctx->r25 = ADD32(ctx->r25, 0X9F0);
    // 0x08001A9C: swc1        $f0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f0.u32l;
    // 0x08001AA0: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x08001AA4: jalr        $t9
    // 0x08001AA8: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001AA8: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    after_4:
    // 0x08001AAC: bne         $v0, $zero, L_08001ACC
    if (ctx->r2 != 0) {
        // 0x08001AB0: sw          $v0, 0xE4($s0)
        MEM_W(0XE4, ctx->r16) = ctx->r2;
            goto L_08001ACC;
    }
    // 0x08001AB0: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x08001AB4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001AB8: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08001ABC: jalr        $t9
    // 0x08001AC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001AC0: nop

    after_5:
    // 0x08001AC4: b           L_08001AF8
    // 0x08001AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001AF8;
    // 0x08001AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001ACC:
    // 0x08001ACC: lw          $t1, 0xE4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XE4);
    // 0x08001AD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x08001AD4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08001AD8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001ADC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AE0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X1B08) << 16);
    // 0x08001AE4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08001AE8: addiu       $a0, $a0, 0x1B08
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X1B08));
    // 0x08001AEC: jalr        $t9
    // 0x08001AF0: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001AF0: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    after_6:
    // 0x08001AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001AF8:
    // 0x08001AF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001B00: jr          $ra
    // 0x08001B04: nop

    TRACE_RETURN()
    return;
    // 0x08001B04: nop

;}
RECOMP_FUNC void func_080007C0_6FB9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080007C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080007C8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080007CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080007D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080007D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080007D8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080007DC: jalr        $t9
    // 0x080007E0: lhu         $a0, 0xD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007E0: lhu         $a0, 0xD8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD8);
    after_0:
    // 0x080007E4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080007E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080007EC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080007F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080007F4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080007F8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x080007FC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(35, 0X2408) << 16);
    // 0x08000800: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000804: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000808: addiu       $a1, $a1, 0x2408
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(35, 0X2408));
    // 0x0800080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000810: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x08000814: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x08000818: lh          $t7, 0xD8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD8);
    // 0x0800081C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x08000820: sh          $t8, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r24;
    // 0x08000824: lh          $t0, 0xD8($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XD8);
    // 0x08000828: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x0800082C: sh          $t1, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r9;
    // 0x08000830: lh          $t2, 0xD8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XD8);
    // 0x08000834: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x08000838: sh          $t3, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r11;
    // 0x0800083C: lh          $t4, 0xD8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XD8);
    // 0x08000840: bnel        $t4, $zero, L_08000884
    if (ctx->r12 != 0) {
        // 0x08000844: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08000884;
    }
    goto skip_0;
    // 0x08000844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08000848: jalr        $t9
    // 0x0800084C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800084C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x08000850: beq         $v0, $zero, L_08000880
    if (ctx->r2 == 0) {
        // 0x08000854: addiu       $t5, $zero, 0x2C
        ctx->r13 = ADD32(0, 0X2C);
            goto L_08000880;
    }
    // 0x08000854: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x08000858: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800085C: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08000860: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000864: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08000868: jalr        $t9
    // 0x0800086C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800086C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_2:
    // 0x08000870: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08000874: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08000878: lbu         $t6, 0xD2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XD2);
    // 0x0800087C: sb          $t6, 0xD0($v1)
    MEM_B(0XD0, ctx->r3) = ctx->r14;
L_08000880:
    // 0x08000880: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000884:
    // 0x08000884: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x0800088C: jr          $ra
    // 0x08000890: nop

    TRACE_RETURN()
    return;
    // 0x08000890: nop

;}
RECOMP_FUNC void func_08002394_6FD594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002398: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x0800239C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080023A0: ori         $t6, $t6, 0x221
    ctx->r14 = ctx->r14 | 0X221;
    // 0x080023A4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080023A8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x080023AC: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080023B0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080023B4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x080023B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080023BC: jalr        $t9
    // 0x080023C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080023C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080023C4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080023C8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x080023CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080023D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080023D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023D8: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x080023DC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X2388) << 16);
    // 0x080023E4: addiu       $a0, $a0, 0x2388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X2388));
    // 0x080023E8: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x080023EC: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x080023F0: jalr        $t9
    // 0x080023F4: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023F4: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    after_1:
    // 0x080023F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080023FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002400: jr          $ra
    // 0x08002404: nop

    TRACE_RETURN()
    return;
    // 0x08002404: nop

;}
RECOMP_FUNC void func_08002E28_6FE028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002E28: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002E2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002E30: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08002E34: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08002E38: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x08002E3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002E40: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08002E44: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002E48: beq         $t7, $zero, L_08002E64
    if (ctx->r15 == 0) {
        // 0x08002E4C: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08002E64;
    }
    // 0x08002E4C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002E50: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08002E54: jalr        $t9
    // 0x08002E58: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002E58: addiu       $a0, $zero, 0x1A4
    ctx->r4 = ADD32(0, 0X1A4);
    after_0:
    // 0x08002E5C: beql        $v0, $zero, L_08003064
    if (ctx->r2 == 0) {
        // 0x08002E60: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_08003064;
    }
    goto skip_0;
    // 0x08002E60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_08002E64:
    // 0x08002E64: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x08002E68: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x08002E6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002E70: ori         $t8, $t8, 0x260
    ctx->r24 = ctx->r24 | 0X260;
    // 0x08002E74: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x08002E78: addiu       $t1, $zero, 0x1F9
    ctx->r9 = ADD32(0, 0X1F9);
    // 0x08002E7C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08002E80: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x08002E84: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08002E88: sb          $t0, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r8;
    // 0x08002E8C: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x08002E90: sw          $t3, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r11;
    // 0x08002E94: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08002E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002E9C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08002EA0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08002EA4: jalr        $t9
    // 0x08002EA8: addiu       $a3, $zero, -0x5
    ctx->r7 = ADD32(0, -0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002EA8: addiu       $a3, $zero, -0x5
    ctx->r7 = ADD32(0, -0X5);
    after_1:
    // 0x08002EAC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002EB0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002EB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08002EBC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08002EC0: jalr        $t9
    // 0x08002EC4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002EC4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x08002EC8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002ECC: addiu       $t9, $t9, -0x7234
    ctx->r25 = ADD32(ctx->r25, -0X7234);
    // 0x08002ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002ED4: jalr        $t9
    // 0x08002ED8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002ED8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x08002EDC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002EE0: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08002EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002EE8: jalr        $t9
    // 0x08002EEC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002EEC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_4:
    // 0x08002EF0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08002EF4: sb          $t4, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r12;
    // 0x08002EF8: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08002EFC: lhu         $t9, 0xD2($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XD2);
    // 0x08002F00: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x08002F04: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x08002F08: lhu         $t2, 0xD0($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XD0);
    // 0x08002F0C: lhu         $t5, 0xD4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XD4);
    // 0x08002F10: lh          $t7, 0xD6($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD6);
    // 0x08002F14: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x08002F18: addu        $t4, $t9, $at
    ctx->r12 = ADD32(ctx->r25, ctx->r1);
    // 0x08002F1C: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08002F20: sh          $t6, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r14;
    // 0x08002F24: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08002F28: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08002F2C: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x08002F30: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x08002F34: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x08002F38: lhu         $a0, 0xE0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE0);
    // 0x08002F3C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x08002F40: nop

    // 0x08002F44: sh          $t8, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r24;
    // 0x08002F48: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08002F4C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x08002F50: sh          $t3, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r11;
    // 0x08002F54: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x08002F58: sh          $t4, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r12;
    // 0x08002F5C: sh          $t6, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r14;
    // 0x08002F60: sh          $t8, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r24;
    // 0x08002F64: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x08002F68: jalr        $t9
    // 0x08002F6C: sh          $t1, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002F6C: sh          $t1, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r9;
    after_5:
    // 0x08002F70: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x08002F74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x08002F78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08002F7C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08002F80: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(35, 0X3828) << 16);
    // 0x08002F84: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x08002F88: ldc1        $f10, 0x3828($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(35, 0X3828));
    // 0x08002F8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002F90: addiu       $t9, $t9, -0x20A0
    ctx->r25 = ADD32(ctx->r25, -0X20A0);
    // 0x08002F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002F98: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x08002F9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08002FA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002FA4: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08002FA8: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x08002FAC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x08002FB0: jalr        $t9
    // 0x08002FB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002FB4: nop

    after_6:
    // 0x08002FB8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002FBC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08002FC0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(35, 0X2DBC) << 16);
    // 0x08002FC4: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
    // 0x08002FC8: addiu       $a1, $a1, 0x2DBC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(35, 0X2DBC));
    // 0x08002FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002FD0: jalr        $t9
    // 0x08002FD4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002FD4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x08002FD8: beq         $v0, $zero, L_08003038
    if (ctx->r2 == 0) {
        // 0x08002FDC: addiu       $t1, $zero, 0x2C
        ctx->r9 = ADD32(0, 0X2C);
            goto L_08003038;
    }
    // 0x08002FDC: addiu       $t1, $zero, 0x2C
    ctx->r9 = ADD32(0, 0X2C);
    // 0x08002FE0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002FE4: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x08002FE8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08002FEC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08002FF0: jalr        $t9
    // 0x08002FF4: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08002FF4: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_8:
    // 0x08002FF8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x08002FFC: addiu       $t2, $zero, 0x1F9
    ctx->r10 = ADD32(0, 0X1F9);
    // 0x08003000: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08003004: sh          $t2, 0x5E($v1)
    MEM_H(0X5E, ctx->r3) = ctx->r10;
    // 0x08003008: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x0800300C: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x08003010: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x08003014: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x08003018: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x0800301C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x08003020: swc1        $f4, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->f4.u32l;
    // 0x08003024: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x08003028: swc1        $f6, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->f6.u32l;
    // 0x0800302C: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x08003030: swc1        $f8, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->f8.u32l;
    // 0x08003034: sw          $v1, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r3;
L_08003038:
    // 0x08003038: lw          $t3, 0xD8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD8);
    // 0x0800303C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003040: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003044: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x08003048: beq         $t4, $zero, L_08003058
    if (ctx->r12 == 0) {
        // 0x0800304C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(35, 0X3074) << 16);
            goto L_08003058;
    }
    // 0x0800304C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(35, 0X3074) << 16);
    // 0x08003050: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x08003054: sh          $t5, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r13;
L_08003058:
    // 0x08003058: jalr        $t9
    // 0x0800305C: addiu       $a0, $a0, 0x3074
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3074));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800305C: addiu       $a0, $a0, 0x3074
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(35, 0X3074));
    after_9:
    // 0x08003060: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08003064:
    // 0x08003064: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08003068: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x0800306C: jr          $ra
    // 0x08003070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x08003070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
