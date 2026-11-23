#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08001020_6F4500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001020: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08001024: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001028: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800102C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08001030: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08001034: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08001038: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800103C: beq         $t6, $zero, L_08001050
    if (ctx->r14 == 0) {
        // 0x08001040: addiu       $v1, $v1, 0x40DC
        ctx->r3 = ADD32(ctx->r3, 0X40DC);
            goto L_08001050;
    }
    // 0x08001040: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08001044: lw          $t7, 0xEC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XEC);
    // 0x08001048: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x0800104C: sw          $t8, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->r24;
L_08001050:
    // 0x08001050: lw          $t9, 0xEC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XEC);
    // 0x08001054: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x08001058: beql        $t0, $zero, L_08001230
    if (ctx->r8 == 0) {
        // 0x0800105C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08001230;
    }
    goto skip_0;
    // 0x0800105C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x08001060: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    // 0x08001064: jalr        $v1
    // 0x08001068: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08001068: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x0800106C: beq         $v0, $zero, L_080010A4
    if (ctx->r2 == 0) {
        // 0x08001070: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_080010A4;
    }
    // 0x08001070: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x08001074: jalr        $v1
    // 0x08001078: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08001078: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_1:
    // 0x0800107C: lw          $t1, 0xEC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XEC);
    // 0x08001080: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001084: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001088: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1240) << 16);
    // 0x0800108C: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x08001090: sw          $t2, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r10;
    // 0x08001094: jalr        $t9
    // 0x08001098: addiu       $a0, $a0, 0x1240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1240));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001098: addiu       $a0, $a0, 0x1240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1240));
    after_2:
    // 0x0800109C: b           L_08001230
    // 0x080010A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001230;
    // 0x080010A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080010A4:
    // 0x080010A4: lhu         $a0, 0xD6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD6);
    // 0x080010A8: jalr        $v1
    // 0x080010AC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x080010AC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x080010B0: beq         $v0, $zero, L_08001120
    if (ctx->r2 == 0) {
        // 0x080010B4: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_08001120;
    }
    // 0x080010B4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080010B8: jalr        $v1
    // 0x080010BC: lhu         $a0, 0xD6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD6);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x080010BC: lhu         $a0, 0xD6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD6);
    after_4:
    // 0x080010C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080010C4: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080010C8: jalr        $t9
    // 0x080010CC: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080010CC: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_5:
    // 0x080010D0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080010D4: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x080010D8: jalr        $t9
    // 0x080010DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080010DC: nop

    after_6:
    // 0x080010E0: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x080010E4: lw          $t3, 0x7AA8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7AA8);
    // 0x080010E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080010EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080010F0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x080010F4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x080010F8: sw          $zero, -0x3708($at)
    MEM_W(-0X3708, ctx->r1) = 0;
    // 0x080010FC: lw          $t5, 0xEC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XEC);
    // 0x08001100: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001104: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1240) << 16);
    // 0x08001108: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x0800110C: sw          $t6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r14;
    // 0x08001110: jalr        $t9
    // 0x08001114: addiu       $a0, $a0, 0x1240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1240));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001114: addiu       $a0, $a0, 0x1240
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1240));
    after_7:
    // 0x08001118: b           L_08001230
    // 0x0800111C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001230;
    // 0x0800111C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001120:
    // 0x08001120: lbu         $t7, 0xD1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XD1);
    // 0x08001124: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001128: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800112C: bnel        $t7, $zero, L_0800115C
    if (ctx->r15 != 0) {
        // 0x08001130: lbu         $t8, 0xD1($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0XD1);
            goto L_0800115C;
    }
    goto skip_1;
    // 0x08001130: lbu         $t8, 0xD1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD1);
    skip_1:
    // 0x08001134: jalr        $t9
    // 0x08001138: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001138: nop

    after_8:
    // 0x0800113C: bne         $v0, $zero, L_08001158
    if (ctx->r2 != 0) {
        // 0x08001140: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001158;
    }
    // 0x08001140: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001144: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001148: jalr        $t9
    // 0x0800114C: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800114C: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    after_9:
    // 0x08001150: b           L_080011FC
    // 0x08001154: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
        goto L_080011FC;
    // 0x08001154: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
L_08001158:
    // 0x08001158: lbu         $t8, 0xD1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD1);
L_0800115C:
    // 0x0800115C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001160: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001164: bne         $t8, $at, L_08001190
    if (ctx->r24 != ctx->r1) {
        // 0x08001168: addiu       $t9, $t9, -0xE28
        ctx->r25 = ADD32(ctx->r25, -0XE28);
            goto L_08001190;
    }
    // 0x08001168: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800116C: jalr        $t9
    // 0x08001170: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001170: nop

    after_10:
    // 0x08001174: bne         $v0, $zero, L_08001190
    if (ctx->r2 != 0) {
        // 0x08001178: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08001190;
    }
    // 0x08001178: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800117C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08001180: jalr        $t9
    // 0x08001184: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08001184: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_11:
    // 0x08001188: b           L_080011FC
    // 0x0800118C: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
        goto L_080011FC;
    // 0x0800118C: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
L_08001190:
    // 0x08001190: lbu         $t0, 0xD1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD1);
    // 0x08001194: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08001198: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800119C: bne         $t0, $at, L_080011C8
    if (ctx->r8 != ctx->r1) {
        // 0x080011A0: addiu       $t9, $t9, -0xE28
        ctx->r25 = ADD32(ctx->r25, -0XE28);
            goto L_080011C8;
    }
    // 0x080011A0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080011A4: jalr        $t9
    // 0x080011A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080011A8: nop

    after_12:
    // 0x080011AC: bne         $v0, $zero, L_080011C8
    if (ctx->r2 != 0) {
        // 0x080011B0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080011C8;
    }
    // 0x080011B0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080011B4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080011B8: jalr        $t9
    // 0x080011BC: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080011BC: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    after_13:
    // 0x080011C0: b           L_080011FC
    // 0x080011C4: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
        goto L_080011FC;
    // 0x080011C4: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
L_080011C8:
    // 0x080011C8: lbu         $t1, 0xD1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD1);
    // 0x080011CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080011D0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080011D4: bne         $t1, $at, L_080011F8
    if (ctx->r9 != ctx->r1) {
        // 0x080011D8: addiu       $t9, $t9, -0xE28
        ctx->r25 = ADD32(ctx->r25, -0XE28);
            goto L_080011F8;
    }
    // 0x080011D8: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080011DC: jalr        $t9
    // 0x080011E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080011E0: nop

    after_14:
    // 0x080011E4: bne         $v0, $zero, L_080011F8
    if (ctx->r2 != 0) {
        // 0x080011E8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080011F8;
    }
    // 0x080011E8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080011EC: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080011F0: jalr        $t9
    // 0x080011F4: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080011F4: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_15:
L_080011F8:
    // 0x080011F8: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
L_080011FC:
    // 0x080011FC: sh          $zero, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = 0;
    // 0x08001200: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1020) << 16);
    // 0x08001204: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x08001208: beq         $t2, $zero, L_08001220
    if (ctx->r10 == 0) {
        // 0x0800120C: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08001220;
    }
    // 0x0800120C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001210: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x08001214: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x08001218: b           L_0800122C
    // 0x0800121C: sw          $t3, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r11;
        goto L_0800122C;
    // 0x0800121C: sw          $t3, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r11;
L_08001220:
    // 0x08001220: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001224: jalr        $t9
    // 0x08001228: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001228: addiu       $a0, $a0, 0x1020
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1020));
    after_16:
L_0800122C:
    // 0x0800122C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001230:
    // 0x08001230: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001234: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001238: jr          $ra
    // 0x0800123C: nop

    TRACE_RETURN()
    return;
    // 0x0800123C: nop

;}
RECOMP_FUNC void func_0800496C_6F7E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800496C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004974: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800497C: lhu         $t7, 0xDA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XDA);
    // 0x08004980: beql        $t7, $zero, L_08004A68
    if (ctx->r15 == 0) {
        // 0x08004984: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08004A68;
    }
    goto skip_0;
    // 0x08004984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08004988: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800498C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004990: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004994: bne         $v0, $zero, L_080049AC
    if (ctx->r2 != 0) {
        // 0x08004998: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_080049AC;
    }
    // 0x08004998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800499C: jalr        $t9
    // 0x080049A0: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080049A0: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_0:
    // 0x080049A4: b           L_08004A20
    // 0x080049A8: nop

        goto L_08004A20;
    // 0x080049A8: nop

L_080049AC:
    // 0x080049AC: bne         $v0, $at, L_080049C8
    if (ctx->r2 != ctx->r1) {
        // 0x080049B0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080049C8;
    }
    // 0x080049B0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080049B4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080049B8: jalr        $t9
    // 0x080049BC: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080049BC: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_1:
    // 0x080049C0: b           L_08004A20
    // 0x080049C4: nop

        goto L_08004A20;
    // 0x080049C4: nop

L_080049C8:
    // 0x080049C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080049CC: bne         $v0, $at, L_080049E8
    if (ctx->r2 != ctx->r1) {
        // 0x080049D0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080049E8;
    }
    // 0x080049D0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080049D4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080049D8: jalr        $t9
    // 0x080049DC: addiu       $a0, $zero, 0x15D
    ctx->r4 = ADD32(0, 0X15D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080049DC: addiu       $a0, $zero, 0x15D
    ctx->r4 = ADD32(0, 0X15D);
    after_2:
    // 0x080049E0: b           L_08004A20
    // 0x080049E4: nop

        goto L_08004A20;
    // 0x080049E4: nop

L_080049E8:
    // 0x080049E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080049EC: bne         $v0, $at, L_08004A08
    if (ctx->r2 != ctx->r1) {
        // 0x080049F0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08004A08;
    }
    // 0x080049F0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080049F4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080049F8: jalr        $t9
    // 0x080049FC: addiu       $a0, $zero, 0x15D
    ctx->r4 = ADD32(0, 0X15D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080049FC: addiu       $a0, $zero, 0x15D
    ctx->r4 = ADD32(0, 0X15D);
    after_3:
    // 0x08004A00: b           L_08004A20
    // 0x08004A04: nop

        goto L_08004A20;
    // 0x08004A04: nop

L_08004A08:
    // 0x08004A08: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08004A0C: bne         $v0, $at, L_08004A20
    if (ctx->r2 != ctx->r1) {
        // 0x08004A10: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08004A20;
    }
    // 0x08004A10: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004A14: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004A18: jalr        $t9
    // 0x08004A1C: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004A1C: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    after_4:
L_08004A20:
    // 0x08004A20: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08004A24: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08004A28: lw          $t0, 0xD4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XD4);
    // 0x08004A2C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004A30: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08004A34: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08004A38: jalr        $t9
    // 0x08004A3C: sw          $t1, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004A3C: sw          $t1, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r9;
    after_5:
    // 0x08004A40: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x08004A44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004A48: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004A4C: lw          $t3, 0x60($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X60);
    // 0x08004A50: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08004A54: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x08004A58: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x08004A5C: jalr        $t9
    // 0x08004A60: sw          $t4, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08004A60: sw          $t4, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r12;
    after_6:
    // 0x08004A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08004A68:
    // 0x08004A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004A6C: jr          $ra
    // 0x08004A70: nop

    TRACE_RETURN()
    return;
    // 0x08004A70: nop

;}
RECOMP_FUNC void func_08006318_6F97F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800631C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006320: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08006324: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08006328: beql        $t7, $zero, L_080063A8
    if (ctx->r15 == 0) {
        // 0x0800632C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080063A8;
    }
    goto skip_0;
    // 0x0800632C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08006330: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08006334: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08006338: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x0800633C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08006340: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08006344: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08006348: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x0800634C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006350: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08006354: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x08006358: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800635C: jalr        $t9
    // 0x08006360: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006360: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08006364: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08006368: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x0800636C: jalr        $t9
    // 0x08006370: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006370: nop

    after_1:
    // 0x08006374: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x08006378: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x0800637C: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x08006380: lhu         $t2, 0xD8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XD8);
    // 0x08006384: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08006388: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800638C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006390: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X63B4) << 16);
    // 0x08006394: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x08006398: addiu       $a0, $a0, 0x63B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X63B4));
    // 0x0800639C: jalr        $t9
    // 0x080063A0: sb          $t2, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080063A0: sb          $t2, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r10;
    after_2:
    // 0x080063A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080063A8:
    // 0x080063A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080063AC: jr          $ra
    // 0x080063B0: nop

    TRACE_RETURN()
    return;
    // 0x080063B0: nop

;}
RECOMP_FUNC void func_08002C80_6F6160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C80: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002C84: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002C88: beq         $t7, $zero, L_08002CB8
    if (ctx->r15 == 0) {
        // 0x08002C8C: nop
    
            goto L_08002CB8;
    }
    // 0x08002C8C: nop

    // 0x08002C90: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08002C94: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002C98: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x08002C9C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08002CA0: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08002CA4: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x08002CA8: lhu         $t0, 0xD8($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD8);
    // 0x08002CAC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08002CB0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x08002CB4: sb          $t0, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r8;
L_08002CB8:
    // 0x08002CB8: jr          $ra
    // 0x08002CBC: nop

    TRACE_RETURN()
    return;
    // 0x08002CBC: nop

;}
RECOMP_FUNC void func_08006174_6F9654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08006178: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800617C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08006180: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08006184: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08006188: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800618C: jalr        $t9
    // 0x08006190: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006190: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_0:
    // 0x08006194: beq         $v0, $zero, L_080061B8
    if (ctx->r2 == 0) {
        // 0x08006198: addiu       $t6, $zero, 0x78
        ctx->r14 = ADD32(0, 0X78);
            goto L_080061B8;
    }
    // 0x08006198: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x0800619C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x080061A0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080061A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080061A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X61C8) << 16);
    // 0x080061AC: addiu       $a0, $a0, 0x61C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X61C8));
    // 0x080061B0: jalr        $t9
    // 0x080061B4: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080061B4: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
L_080061B8:
    // 0x080061B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080061BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080061C0: jr          $ra
    // 0x080061C4: nop

    TRACE_RETURN()
    return;
    // 0x080061C4: nop

;}
RECOMP_FUNC void func_08004354_6F7834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004354: jr          $ra
    // 0x08004358: nop

    TRACE_RETURN()
    return;
    // 0x08004358: nop

    // 0x0800435C: jr          $ra
    // 0x08004360: nop

    TRACE_RETURN()
    return;
    // 0x08004360: nop

;}
RECOMP_FUNC void func_08004370_6F7850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004370: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004374: jr          $ra
    // 0x08004378: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004378: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004364_6F7844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004364: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004368: jr          $ra
    // 0x0800436C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800436C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002C00_6F60E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002C0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002C10: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08002C14: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08002C18: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08002C1C: beq         $t6, $zero, L_08002C70
    if (ctx->r14 == 0) {
        // 0x08002C20: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08002C70;
    }
    // 0x08002C20: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08002C24: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x08002C28: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08002C2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002C30: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08002C34: jalr        $t9
    // 0x08002C38: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C38: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    after_0:
    // 0x08002C3C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002C40: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08002C44: jalr        $t9
    // 0x08002C48: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002C48: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    after_1:
    // 0x08002C4C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08002C50: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002C54: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002C58: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08002C5C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2C80) << 16);
    // 0x08002C60: addiu       $a0, $a0, 0x2C80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2C80));
    // 0x08002C64: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08002C68: jalr        $t9
    // 0x08002C6C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002C6C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_2:
L_08002C70:
    // 0x08002C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002C78: jr          $ra
    // 0x08002C7C: nop

    TRACE_RETURN()
    return;
    // 0x08002C7C: nop

;}
RECOMP_FUNC void func_08000000_6F34E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000004: jr          $ra
    // 0x08000008: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000008: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004E50_6F8330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004E58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004E5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004E60: lhu         $t7, 0xDA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XDA);
    // 0x08004E64: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08004E68: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08004E6C: beql        $t7, $zero, L_08004EEC
    if (ctx->r15 == 0) {
        // 0x08004E70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08004EEC;
    }
    goto skip_0;
    // 0x08004E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08004E74: lw          $t8, 0xD4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XD4);
    // 0x08004E78: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x08004E7C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x08004E80: sw          $t9, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r25;
    // 0x08004E84: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08004E88: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08004E8C: jalr        $t9
    // 0x08004E90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004E90: nop

    after_0:
    // 0x08004E94: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004E98: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08004E9C: jalr        $t9
    // 0x08004EA0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004EA0: nop

    after_1:
    // 0x08004EA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004EA8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08004EAC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x08004EB0: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08004EB4: sb          $t0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r8;
    // 0x08004EB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004EBC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08004EC0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004EC4: jalr        $t9
    // 0x08004EC8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004EC8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x08004ECC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004ED0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08004ED4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004ED8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4EF8) << 16);
    // 0x08004EDC: sw          $zero, 0x7AC4($at)
    MEM_W(0X7AC4, ctx->r1) = 0;
    // 0x08004EE0: jalr        $t9
    // 0x08004EE4: addiu       $a0, $a0, 0x4EF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4EF8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004EE4: addiu       $a0, $a0, 0x4EF8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4EF8));
    after_3:
    // 0x08004EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08004EEC:
    // 0x08004EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004EF0: jr          $ra
    // 0x08004EF4: nop

    TRACE_RETURN()
    return;
    // 0x08004EF4: nop

;}
RECOMP_FUNC void func_08001CFC_6F51DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001D04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001D08: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001D0C: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x08001D10: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x08001D14: bnel        $t7, $zero, L_08001D48
    if (ctx->r15 != 0) {
        // 0x08001D18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001D48;
    }
    goto skip_0;
    // 0x08001D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001D1C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08001D20: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08001D24: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001D28: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08001D2C: lw          $t0, 0xEC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XEC);
    // 0x08001D30: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D34: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001D38: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x08001D3C: jalr        $t9
    // 0x08001D40: sw          $t1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001D40: sw          $t1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r9;
    after_0:
    // 0x08001D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001D48:
    // 0x08001D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001D4C: jr          $ra
    // 0x08001D50: nop

    TRACE_RETURN()
    return;
    // 0x08001D50: nop

    // 0x08001D54: jr          $ra
    // 0x08001D58: nop

    TRACE_RETURN()
    return;
    // 0x08001D58: nop

    // 0x08001D5C: jr          $ra
    // 0x08001D60: nop

    TRACE_RETURN()
    return;
    // 0x08001D60: nop

    // 0x08001D64: jr          $ra
    // 0x08001D68: nop

    TRACE_RETURN()
    return;
    // 0x08001D68: nop

;}
RECOMP_FUNC void func_08005790_6F8C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08005798: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800579C: addiu       $t6, $zero, 0x312
    ctx->r14 = ADD32(0, 0X312);
    // 0x080057A0: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x080057A4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080057A8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080057AC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x080057B0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080057B4: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080057B8: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080057BC: bne         $t9, $at, L_08005894
    if (ctx->r25 != ctx->r1) {
        // 0x080057C0: sw          $t8, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r24;
            goto L_08005894;
    }
    // 0x080057C0: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x080057C4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080057C8: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080057CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080057D0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080057D4: jalr        $t9
    // 0x080057D8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080057D8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x080057DC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080057E0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x080057E4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CB8) << 16);
    // 0x080057E8: lwc1        $f0, 0x7CB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CB8));
    // 0x080057EC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x080057F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080057F4: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x080057F8: lui         $at, 0x4417
    ctx->r1 = S32(0X4417 << 16);
    // 0x080057FC: sw          $t0, 0x60($a3)
    MEM_W(0X60, ctx->r7) = ctx->r8;
    // 0x08005800: sb          $zero, 0x6C($a3)
    MEM_B(0X6C, ctx->r7) = 0;
    // 0x08005804: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005808: lui         $at, 0xC407
    ctx->r1 = S32(0XC407 << 16);
    // 0x0800580C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005810: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005814: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08005818: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x0800581C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005820: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005824: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005828: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x0800582C: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08005830: jalr        $t9
    // 0x08005834: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005834: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_1:
    // 0x08005838: beq         $v0, $zero, L_08005884
    if (ctx->r2 == 0) {
        // 0x0800583C: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_08005884;
    }
    // 0x0800583C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08005840: lhu         $t1, 0xDA($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0XDA);
    // 0x08005844: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005848: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800584C: beql        $t1, $zero, L_08005D0C
    if (ctx->r9 == 0) {
        // 0x08005850: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08005D0C;
    }
    goto skip_0;
    // 0x08005850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08005854: jalr        $t9
    // 0x08005858: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005858: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x0800585C: bne         $v0, $zero, L_0800587C
    if (ctx->r2 != 0) {
        // 0x08005860: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_0800587C;
    }
    // 0x08005860: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08005864: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005868: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800586C: addiu       $a0, $zero, 0xE2
    ctx->r4 = ADD32(0, 0XE2);
    // 0x08005870: jalr        $t9
    // 0x08005874: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005874: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_3:
    // 0x08005878: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
L_0800587C:
    // 0x0800587C: b           L_08005D08
    // 0x08005880: sh          $zero, 0xDA($a3)
    MEM_H(0XDA, ctx->r7) = 0;
        goto L_08005D08;
    // 0x08005880: sh          $zero, 0xDA($a3)
    MEM_H(0XDA, ctx->r7) = 0;
L_08005884:
    // 0x08005884: lw          $t2, 0x68($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X68);
    // 0x08005888: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x0800588C: b           L_08005D08
    // 0x08005890: sw          $t3, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r11;
        goto L_08005D08;
    // 0x08005890: sw          $t3, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r11;
L_08005894:
    // 0x08005894: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08005898: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800589C: lhu         $a0, 0xD4($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0XD4);
    // 0x080058A0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x080058A4: jalr        $t9
    // 0x080058A8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080058A8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_4:
    // 0x080058AC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080058B0: beq         $v0, $zero, L_080058C8
    if (ctx->r2 == 0) {
        // 0x080058B4: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_080058C8;
    }
    // 0x080058B4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x080058B8: lw          $t4, 0x68($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X68);
    // 0x080058BC: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x080058C0: b           L_08005D08
    // 0x080058C4: sw          $t5, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r13;
        goto L_08005D08;
    // 0x080058C4: sw          $t5, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r13;
L_080058C8:
    // 0x080058C8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080058CC: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080058D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x080058D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080058D8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x080058DC: jalr        $t9
    // 0x080058E0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080058E0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_5:
    // 0x080058E4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x080058E8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x080058EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080058F0: lbu         $v0, 0xD0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XD0);
    // 0x080058F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080058F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X5D18) << 16);
    // 0x080058FC: bne         $v0, $zero, L_08005940
    if (ctx->r2 != 0) {
        // 0x08005900: sb          $zero, 0x6C($a3)
        MEM_B(0X6C, ctx->r7) = 0;
            goto L_08005940;
    }
    // 0x08005900: sb          $zero, 0x6C($a3)
    MEM_B(0X6C, ctx->r7) = 0;
    // 0x08005904: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CBC) << 16);
    // 0x08005908: lwc1        $f0, 0x7CBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CBC));
    // 0x0800590C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CC0) << 16);
    // 0x08005910: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005914: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005918: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x0800591C: lwc1        $f10, 0x7CC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CC0));
    // 0x08005920: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08005924: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005928: lui         $at, 0xC308
    ctx->r1 = S32(0XC308 << 16);
    // 0x0800592C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005930: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x08005934: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x08005938: b           L_08005D00
    // 0x0800593C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
        goto L_08005D00;
    // 0x0800593C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_08005940:
    // 0x08005940: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08005944: bne         $v0, $at, L_08005984
    if (ctx->r2 != ctx->r1) {
        // 0x08005948: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(34, 0X7CC4) << 16);
            goto L_08005984;
    }
    // 0x08005948: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CC4) << 16);
    // 0x0800594C: lwc1        $f0, 0x7CC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CC4));
    // 0x08005950: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CC8) << 16);
    // 0x08005954: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005958: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x0800595C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005960: lwc1        $f4, 0x7CC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CC8));
    // 0x08005964: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x08005968: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800596C: lui         $at, 0x4343
    ctx->r1 = S32(0X4343 << 16);
    // 0x08005970: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005974: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08005978: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x0800597C: b           L_08005D00
    // 0x08005980: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
        goto L_08005D00;
    // 0x08005980: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
L_08005984:
    // 0x08005984: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08005988: bne         $v0, $at, L_080059C8
    if (ctx->r2 != ctx->r1) {
        // 0x0800598C: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(34, 0X7CCC) << 16);
            goto L_080059C8;
    }
    // 0x0800598C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CCC) << 16);
    // 0x08005990: lwc1        $f0, 0x7CCC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CCC));
    // 0x08005994: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x08005998: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800599C: lui         $at, 0x4238
    ctx->r1 = S32(0X4238 << 16);
    // 0x080059A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080059A4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x080059A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080059AC: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x080059B0: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x080059B4: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x080059B8: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x080059BC: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x080059C0: b           L_08005D00
    // 0x080059C4: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
        goto L_08005D00;
    // 0x080059C4: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_080059C8:
    // 0x080059C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080059CC: bne         $v0, $at, L_08005A0C
    if (ctx->r2 != ctx->r1) {
        // 0x080059D0: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08005A0C;
    }
    // 0x080059D0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x080059D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080059D8: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x080059DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080059E0: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x080059E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080059E8: lui         $at, 0x4388
    ctx->r1 = S32(0X4388 << 16);
    // 0x080059EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080059F0: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x080059F4: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x080059F8: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x080059FC: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08005A00: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08005A04: b           L_08005D00
    // 0x08005A08: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
        goto L_08005D00;
    // 0x08005A08: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
L_08005A0C:
    // 0x08005A0C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08005A10: bne         $v0, $at, L_08005A50
    if (ctx->r2 != ctx->r1) {
        // 0x08005A14: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(34, 0X7CD0) << 16);
            goto L_08005A50;
    }
    // 0x08005A14: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CD0) << 16);
    // 0x08005A18: lwc1        $f0, 0x7CD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CD0));
    // 0x08005A1C: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    // 0x08005A20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08005A24: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x08005A28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005A2C: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08005A30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005A34: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005A38: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005A3C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005A40: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x08005A44: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x08005A48: b           L_08005D00
    // 0x08005A4C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
        goto L_08005D00;
    // 0x08005A4C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_08005A50:
    // 0x08005A50: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x08005A54: bne         $v0, $at, L_08005A94
    if (ctx->r2 != ctx->r1) {
        // 0x08005A58: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(34, 0X7CD4) << 16);
            goto L_08005A94;
    }
    // 0x08005A58: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CD4) << 16);
    // 0x08005A5C: lwc1        $f0, 0x7CD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CD4));
    // 0x08005A60: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CD8) << 16);
    // 0x08005A64: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005A68: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005A6C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005A70: lwc1        $f4, 0x7CD8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CD8));
    // 0x08005A74: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08005A78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005A7C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08005A80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005A84: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08005A88: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08005A8C: b           L_08005D00
    // 0x08005A90: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
        goto L_08005D00;
    // 0x08005A90: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
L_08005A94:
    // 0x08005A94: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08005A98: bne         $v0, $at, L_08005AD8
    if (ctx->r2 != ctx->r1) {
        // 0x08005A9C: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(34, 0X7CDC) << 16);
            goto L_08005AD8;
    }
    // 0x08005A9C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CDC) << 16);
    // 0x08005AA0: lwc1        $f0, 0x7CDC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CDC));
    // 0x08005AA4: lui         $at, 0xC31A
    ctx->r1 = S32(0XC31A << 16);
    // 0x08005AA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08005AAC: lui         $at, 0x4264
    ctx->r1 = S32(0X4264 << 16);
    // 0x08005AB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005AB4: lui         $at, 0xC292
    ctx->r1 = S32(0XC292 << 16);
    // 0x08005AB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005ABC: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005AC0: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005AC4: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005AC8: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x08005ACC: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x08005AD0: b           L_08005D00
    // 0x08005AD4: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
        goto L_08005D00;
    // 0x08005AD4: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_08005AD8:
    // 0x08005AD8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x08005ADC: bne         $v0, $at, L_08005B2C
    if (ctx->r2 != ctx->r1) {
        // 0x08005AE0: addiu       $t6, $zero, 0x289
        ctx->r14 = ADD32(0, 0X289);
            goto L_08005B2C;
    }
    // 0x08005AE0: addiu       $t6, $zero, 0x289
    ctx->r14 = ADD32(0, 0X289);
    // 0x08005AE4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CE0) << 16);
    // 0x08005AE8: lwc1        $f0, 0x7CE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CE0));
    // 0x08005AEC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CE4) << 16);
    // 0x08005AF0: addiu       $t7, $zero, 0x37F
    ctx->r15 = ADD32(0, 0X37F);
    // 0x08005AF4: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005AF8: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005AFC: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005B00: lwc1        $f4, 0x7CE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CE4));
    // 0x08005B04: lui         $at, 0xC21C
    ctx->r1 = S32(0XC21C << 16);
    // 0x08005B08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005B0C: lui         $at, 0xC345
    ctx->r1 = S32(0XC345 << 16);
    // 0x08005B10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005B14: sh          $t7, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r15;
    // 0x08005B18: sh          $t6, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r14;
    // 0x08005B1C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08005B20: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08005B24: b           L_08005D00
    // 0x08005B28: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
        goto L_08005D00;
    // 0x08005B28: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
L_08005B2C:
    // 0x08005B2C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x08005B30: bne         $v0, $at, L_08005B70
    if (ctx->r2 != ctx->r1) {
        // 0x08005B34: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(34, 0X7CE8) << 16);
            goto L_08005B70;
    }
    // 0x08005B34: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CE8) << 16);
    // 0x08005B38: lwc1        $f0, 0x7CE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CE8));
    // 0x08005B3C: lui         $at, 0x4309
    ctx->r1 = S32(0X4309 << 16);
    // 0x08005B40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08005B44: lui         $at, 0x4286
    ctx->r1 = S32(0X4286 << 16);
    // 0x08005B48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005B4C: lui         $at, 0xC369
    ctx->r1 = S32(0XC369 << 16);
    // 0x08005B50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005B54: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005B58: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005B5C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005B60: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x08005B64: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x08005B68: b           L_08005D00
    // 0x08005B6C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
        goto L_08005D00;
    // 0x08005B6C: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_08005B70:
    // 0x08005B70: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x08005B74: bne         $v0, $at, L_08005BB4
    if (ctx->r2 != ctx->r1) {
        // 0x08005B78: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08005BB4;
    }
    // 0x08005B78: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08005B7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005B80: lui         $at, 0xC375
    ctx->r1 = S32(0XC375 << 16);
    // 0x08005B84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08005B88: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
    // 0x08005B8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005B90: lui         $at, 0xC363
    ctx->r1 = S32(0XC363 << 16);
    // 0x08005B94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005B98: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005B9C: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005BA0: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005BA4: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08005BA8: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08005BAC: b           L_08005D00
    // 0x08005BB0: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
        goto L_08005D00;
    // 0x08005BB0: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
L_08005BB4:
    // 0x08005BB4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x08005BB8: bne         $v0, $at, L_08005BF4
    if (ctx->r2 != ctx->r1) {
        // 0x08005BBC: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08005BF4;
    }
    // 0x08005BBC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08005BC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005BC4: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x08005BC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005BCC: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x08005BD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005BD4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08005BD8: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005BDC: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005BE0: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005BE4: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x08005BE8: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
    // 0x08005BEC: b           L_08005D00
    // 0x08005BF0: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
        goto L_08005D00;
    // 0x08005BF0: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
L_08005BF4:
    // 0x08005BF4: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x08005BF8: bne         $v0, $at, L_08005C38
    if (ctx->r2 != ctx->r1) {
        // 0x08005BFC: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08005C38;
    }
    // 0x08005BFC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08005C00: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005C04: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CEC) << 16);
    // 0x08005C08: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005C0C: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005C10: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005C14: lwc1        $f4, 0x7CEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CEC));
    // 0x08005C18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CF0) << 16);
    // 0x08005C1C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08005C20: lwc1        $f6, 0x7CF0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CF0));
    // 0x08005C24: lui         $at, 0xC370
    ctx->r1 = S32(0XC370 << 16);
    // 0x08005C28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005C2C: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08005C30: b           L_08005D00
    // 0x08005C34: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
        goto L_08005D00;
    // 0x08005C34: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
L_08005C38:
    // 0x08005C38: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x08005C3C: bne         $v0, $at, L_08005C7C
    if (ctx->r2 != ctx->r1) {
        // 0x08005C40: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08005C7C;
    }
    // 0x08005C40: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08005C44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005C48: lui         $at, 0xC2C0
    ctx->r1 = S32(0XC2C0 << 16);
    // 0x08005C4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08005C50: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x08005C54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005C58: lui         $at, 0x4214
    ctx->r1 = S32(0X4214 << 16);
    // 0x08005C5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08005C60: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005C64: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005C68: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005C6C: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x08005C70: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x08005C74: b           L_08005D00
    // 0x08005C78: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
        goto L_08005D00;
    // 0x08005C78: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_08005C7C:
    // 0x08005C7C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x08005C80: bne         $v0, $at, L_08005CC0
    if (ctx->r2 != ctx->r1) {
        // 0x08005C84: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08005CC0;
    }
    // 0x08005C84: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08005C88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005C8C: lui         $at, 0xC2C0
    ctx->r1 = S32(0XC2C0 << 16);
    // 0x08005C90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08005C94: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x08005C98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005C9C: lui         $at, 0x4214
    ctx->r1 = S32(0X4214 << 16);
    // 0x08005CA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08005CA4: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005CA8: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005CAC: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005CB0: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08005CB4: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08005CB8: b           L_08005D00
    // 0x08005CBC: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
        goto L_08005D00;
    // 0x08005CBC: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
L_08005CC0:
    // 0x08005CC0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x08005CC4: bne         $v0, $at, L_08005D00
    if (ctx->r2 != ctx->r1) {
        // 0x08005CC8: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_08005D00;
    }
    // 0x08005CC8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08005CCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08005CD0: lui         $at, 0x43E9
    ctx->r1 = S32(0X43E9 << 16);
    // 0x08005CD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08005CD8: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x08005CDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005CE0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CF4) << 16);
    // 0x08005CE4: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08005CE8: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08005CEC: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08005CF0: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x08005CF4: swc1        $f16, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f16.u32l;
    // 0x08005CF8: lwc1        $f18, 0x7CF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CF4));
    // 0x08005CFC: swc1        $f18, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f18.u32l;
L_08005D00:
    // 0x08005D00: jalr        $t9
    // 0x08005D04: addiu       $a0, $a0, 0x5D18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X5D18));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08005D04: addiu       $a0, $a0, 0x5D18
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X5D18));
    after_6:
L_08005D08:
    // 0x08005D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005D0C:
    // 0x08005D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005D10: jr          $ra
    // 0x08005D14: nop

    TRACE_RETURN()
    return;
    // 0x08005D14: nop

;}
RECOMP_FUNC void func_0800010C_6F35EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800010C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000114: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000118: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800011C: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08000120: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000124: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000128: beq         $t6, $zero, L_080001AC
    if (ctx->r14 == 0) {
        // 0x0800012C: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_080001AC;
    }
    // 0x0800012C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000130: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x08000134: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08000138: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x0800013C: lbu         $t9, 0xD0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XD0);
    // 0x08000140: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    // 0x08000144: bne         $t9, $zero, L_08000164
    if (ctx->r25 != 0) {
        // 0x08000148: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000164;
    }
    // 0x08000148: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800014C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000150: addiu       $a0, $zero, 0x224
    ctx->r4 = ADD32(0, 0X224);
    // 0x08000154: jalr        $t9
    // 0x08000158: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000158: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800015C: b           L_08000178
    // 0x08000160: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
        goto L_08000178;
    // 0x08000160: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08000164:
    // 0x08000164: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000168: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800016C: jalr        $t9
    // 0x08000170: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000170: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x08000174: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_08000178:
    // 0x08000178: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x0800017C: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08000180: jalr        $t9
    // 0x08000184: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000184: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x08000188: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x0800018C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000190: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000194: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08000198: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x0800019C: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x080001A0: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x080001A4: jalr        $t9
    // 0x080001A8: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080001A8: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_3:
L_080001AC:
    // 0x080001AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080001B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001B4: jr          $ra
    // 0x080001B8: nop

    TRACE_RETURN()
    return;
    // 0x080001B8: nop

;}
RECOMP_FUNC void func_080046C8_6F7BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080046C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080046CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080046D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080046D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080046D8: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x080046DC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080046E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080046E4: beq         $t6, $zero, L_08004740
    if (ctx->r14 == 0) {
        // 0x080046E8: addiu       $v0, $v0, -0x33D0
        ctx->r2 = ADD32(ctx->r2, -0X33D0);
            goto L_08004740;
    }
    // 0x080046E8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080046EC: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x080046F0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080046F4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080046F8: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080046FC: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    // 0x08004700: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    // 0x08004704: jalr        $t9
    // 0x08004708: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004708: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800470C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08004710: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08004714: jalr        $t9
    // 0x08004718: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004718: nop

    after_1:
    // 0x0800471C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08004720: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004724: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004728: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x0800472C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08004730: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    // 0x08004734: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x08004738: jalr        $t9
    // 0x0800473C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800473C: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
    after_2:
L_08004740:
    // 0x08004740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004748: jr          $ra
    // 0x0800474C: nop

    TRACE_RETURN()
    return;
    // 0x0800474C: nop

;}
RECOMP_FUNC void func_080053E8_6F88C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080053E8: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x080053EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080053F0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080053F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080053F8: sw          $a0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r4;
    // 0x080053FC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08005400: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005404: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08005408: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x0800540C: addiu       $v0, $v0, 0x2850
    ctx->r2 = ADD32(ctx->r2, 0X2850);
    // 0x08005410: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08005414: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x08005418: lw          $a1, 0x8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X8);
    // 0x0800541C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08005420: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08005424: jalr        $v0
    // 0x08005428: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08005428: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_0:
    // 0x0800542C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08005430: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005434: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08005438: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800543C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08005440: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08005444: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08005448: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x0800544C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x08005450: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x08005454: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08005458: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x0800545C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x08005460: jalr        $t9
    // 0x08005464: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005464: nop

    after_1:
    // 0x08005468: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x0800546C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08005470: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08005474: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08005478: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x0800547C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08005480: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08005484: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08005488: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x0800548C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x08005490: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08005494: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x08005498: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x0800549C: jalr        $t9
    // 0x080054A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080054A0: nop

    after_2:
    // 0x080054A4: lh          $t6, 0xF0($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XF0);
    // 0x080054A8: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x080054AC: beql        $t6, $zero, L_0800551C
    if (ctx->r14 == 0) {
        // 0x080054B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_0800551C;
    }
    goto skip_0;
    // 0x080054B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080054B4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x080054B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x080054BC: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x080054C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080054C4: addiu       $v1, $v1, -0x5230
    ctx->r3 = ADD32(ctx->r3, -0X5230);
    // 0x080054C8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x080054CC: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x080054D0: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x080054D4: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x080054D8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x080054DC: jalr        $v1
    // 0x080054E0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_3;
    // 0x080054E0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_3:
    // 0x080054E4: addiu       $t7, $v0, -0x100
    ctx->r15 = ADD32(ctx->r2, -0X100);
    // 0x080054E8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080054EC: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080054F0: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x080054F4: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x080054F8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x080054FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08005500: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08005504: jalr        $v1
    // 0x08005508: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08005508: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_4:
    // 0x0800550C: addiu       $t0, $v0, -0x100
    ctx->r8 = ADD32(ctx->r2, -0X100);
    // 0x08005510: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08005514: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x08005518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800551C:
    // 0x0800551C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005520: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x08005524: jr          $ra
    // 0x08005528: nop

    TRACE_RETURN()
    return;
    // 0x08005528: nop

;}
RECOMP_FUNC void func_08005F6C_6F944C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005F6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08005F70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08005F74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08005F78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08005F7C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08005F80: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08005F84: addiu       $t6, $zero, 0x23F
    ctx->r14 = ADD32(0, 0X23F);
    // 0x08005F88: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08005F8C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08005F90: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08005F94: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08005F98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08005F9C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08005FA0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08005FA4: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08005FA8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08005FAC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x08005FB0: jalr        $t9
    // 0x08005FB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08005FB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08005FB8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CF8) << 16);
    // 0x08005FBC: lwc1        $f0, 0x7CF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CF8));
    // 0x08005FC0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08005FC4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08005FC8: sb          $t0, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r8;
    // 0x08005FCC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005FD0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005FD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6000) << 16);
    // 0x08005FD8: addiu       $a0, $a0, 0x6000
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6000));
    // 0x08005FDC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08005FE0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08005FE4: jalr        $t9
    // 0x08005FE8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08005FE8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x08005FEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08005FF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08005FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08005FF8: jr          $ra
    // 0x08005FFC: nop

    TRACE_RETURN()
    return;
    // 0x08005FFC: nop

;}
RECOMP_FUNC void func_08006740_6F9C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08006740: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08006744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08006748: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800674C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08006750: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08006754: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08006758: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800675C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08006760: bne         $v0, $zero, L_080067C0
    if (ctx->r2 != 0) {
        // 0x08006764: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080067C0;
    }
    // 0x08006764: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08006768: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x0800676C: addiu       $v0, $v0, -0xBE0
    ctx->r2 = ADD32(ctx->r2, -0XBE0);
    // 0x08006770: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08006774: addiu       $a0, $zero, 0x2A0
    ctx->r4 = ADD32(0, 0X2A0);
    // 0x08006778: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x0800677C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x08006780: jalr        $v0
    // 0x08006784: lui         $a3, 0x4330
    ctx->r7 = S32(0X4330 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08006784: lui         $a3, 0x4330
    ctx->r7 = S32(0X4330 << 16);
    after_0:
    // 0x08006788: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x0800678C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08006790: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08006794: addiu       $a0, $zero, 0x27F
    ctx->r4 = ADD32(0, 0X27F);
    // 0x08006798: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x0800679C: jalr        $v0
    // 0x080067A0: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x080067A0: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    after_1:
    // 0x080067A4: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x080067A8: lw          $t9, 0x68($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X68);
    // 0x080067AC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080067B0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080067B4: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x080067B8: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x080067BC: sw          $t0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r8;
L_080067C0:
    // 0x080067C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080067C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080067C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080067CC: jr          $ra
    // 0x080067D0: nop

    TRACE_RETURN()
    return;
    // 0x080067D0: nop

    // 0x080067D4: jr          $ra
    // 0x080067D8: nop

    TRACE_RETURN()
    return;
    // 0x080067D8: nop

;}
RECOMP_FUNC void func_08004CC0_6F81A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004CC0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08004CC4: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x08004CC8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08004CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004CD0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08004CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004CD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004CDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004CE0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08004CE4: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x08004CE8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08004CEC: lhu         $t7, 0xD8($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XD8);
    // 0x08004CF0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08004CF4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004CF8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004CFC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4D20) << 16);
    // 0x08004D00: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x08004D04: addiu       $a0, $a0, 0x4D20
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4D20));
    // 0x08004D08: jalr        $t9
    // 0x08004D0C: sb          $t7, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004D0C: sb          $t7, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r15;
    after_0:
    // 0x08004D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004D18: jr          $ra
    // 0x08004D1C: nop

    TRACE_RETURN()
    return;
    // 0x08004D1C: nop

;}
RECOMP_FUNC void func_080019AC_6F4E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080019AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080019B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080019B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080019B8: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x080019BC: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x080019C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080019C4: lw          $t6, 0xEC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XEC);
    // 0x080019C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080019CC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080019D0: sw          $t7, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r15;
    // 0x080019D4: lhu         $t8, 0xDA($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XDA);
    // 0x080019D8: ori         $t0, $t7, 0x4
    ctx->r8 = ctx->r15 | 0X4;
    // 0x080019DC: beql        $t8, $zero, L_080019F0
    if (ctx->r24 == 0) {
        // 0x080019E0: lw          $t1, 0xEC($v0)
        ctx->r9 = MEM_W(ctx->r2, 0XEC);
            goto L_080019F0;
    }
    goto skip_0;
    // 0x080019E0: lw          $t1, 0xEC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XEC);
    skip_0:
    // 0x080019E4: sw          $t0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r8;
    // 0x080019E8: sh          $zero, 0xDA($a0)
    MEM_H(0XDA, ctx->r4) = 0;
    // 0x080019EC: lw          $t1, 0xEC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XEC);
L_080019F0:
    // 0x080019F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1B4C) << 16);
    // 0x080019F4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x080019F8: beql        $t2, $zero, L_08001A0C
    if (ctx->r10 == 0) {
        // 0x080019FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001A0C;
    }
    goto skip_1;
    // 0x080019FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08001A00: jalr        $t9
    // 0x08001A04: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B4C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A04: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1B4C));
    after_0:
    // 0x08001A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001A0C:
    // 0x08001A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001A10: jr          $ra
    // 0x08001A14: nop

    TRACE_RETURN()
    return;
    // 0x08001A14: nop

;}
RECOMP_FUNC void func_08003038_6F6518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800303C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003040: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08003044: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x08003048: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x0800304C: lui         $t6, 0x8060
    ctx->r14 = S32(0X8060 << 16);
    // 0x08003050: ori         $t6, $t6, 0x26E1
    ctx->r14 = ctx->r14 | 0X26E1;
    // 0x08003054: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08003058: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800305C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08003060: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003064: bne         $v0, $zero, L_0800309C
    if (ctx->r2 != 0) {
        // 0x08003068: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_0800309C;
    }
    // 0x08003068: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x0800306C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003070: addiu       $t8, $zero, 0x23C
    ctx->r24 = ADD32(0, 0X23C);
    // 0x08003074: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003078: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x0800307C: sh          $t8, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r24;
    // 0x08003080: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003084: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003088: jalr        $t9
    // 0x0800308C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800308C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003090: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08003094: b           L_08003110
    // 0x08003098: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
        goto L_08003110;
    // 0x08003098: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_0800309C:
    // 0x0800309C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080030A0: bne         $v0, $at, L_08003110
    if (ctx->r2 != ctx->r1) {
        // 0x080030A4: lui         $t0, 0x8060
        ctx->r8 = S32(0X8060 << 16);
            goto L_08003110;
    }
    // 0x080030A4: lui         $t0, 0x8060
    ctx->r8 = S32(0X8060 << 16);
    // 0x080030A8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080030AC: ori         $t0, $t0, 0x20A0
    ctx->r8 = ctx->r8 | 0X20A0;
    // 0x080030B0: addiu       $t1, $zero, 0x242
    ctx->r9 = ADD32(0, 0X242);
    // 0x080030B4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080030B8: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x080030BC: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x080030C0: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x080030C4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080030C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080030CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x080030D0: jalr        $t9
    // 0x080030D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080030D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080030D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C40) << 16);
    // 0x080030DC: lwc1        $f0, 0x7C40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C40));
    // 0x080030E0: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x080030E4: sb          $t2, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r10;
    // 0x080030E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080030EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080030F0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3410) << 16);
    // 0x080030F4: addiu       $a0, $a0, 0x3410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3410));
    // 0x080030F8: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x080030FC: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08003100: jalr        $t9
    // 0x08003104: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003104: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x08003108: b           L_080032B0
    // 0x0800310C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080032B0;
    // 0x0800310C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003110:
    // 0x08003110: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003114: bne         $v0, $at, L_0800314C
    if (ctx->r2 != ctx->r1) {
        // 0x08003118: addiu       $t3, $zero, 0x242
        ctx->r11 = ADD32(0, 0X242);
            goto L_0800314C;
    }
    // 0x08003118: addiu       $t3, $zero, 0x242
    ctx->r11 = ADD32(0, 0X242);
    // 0x0800311C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003120: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003124: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08003128: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    // 0x0800312C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08003138: jalr        $t9
    // 0x0800313C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800313C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08003140: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x08003144: sb          $t4, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r12;
    // 0x08003148: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_0800314C:
    // 0x0800314C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08003150: bne         $v0, $at, L_080031D0
    if (ctx->r2 != ctx->r1) {
        // 0x08003154: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080031D0;
    }
    // 0x08003154: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003158: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800315C: jalr        $t9
    // 0x08003160: addiu       $a0, $zero, 0x1C2
    ctx->r4 = ADD32(0, 0X1C2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08003160: addiu       $a0, $zero, 0x1C2
    ctx->r4 = ADD32(0, 0X1C2);
    after_4:
    // 0x08003164: beq         $v0, $zero, L_08003184
    if (ctx->r2 == 0) {
        // 0x08003168: addiu       $t5, $zero, 0x3D7
        ctx->r13 = ADD32(0, 0X3D7);
            goto L_08003184;
    }
    // 0x08003168: addiu       $t5, $zero, 0x3D7
    ctx->r13 = ADD32(0, 0X3D7);
    // 0x0800316C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003170: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003174: jalr        $t9
    // 0x08003178: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08003178: nop

    after_5:
    // 0x0800317C: b           L_080032B0
    // 0x08003180: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080032B0;
    // 0x08003180: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003184:
    // 0x08003184: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003188: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x0800318C: sh          $t5, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r13;
    // 0x08003190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003194: jalr        $t9
    // 0x08003198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08003198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x0800319C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080031A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080031A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080031A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3410) << 16);
    // 0x080031AC: sb          $t6, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r14;
    // 0x080031B0: jalr        $t9
    // 0x080031B4: addiu       $a0, $a0, 0x3410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3410));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080031B4: addiu       $a0, $a0, 0x3410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3410));
    after_7:
    // 0x080031B8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C44) << 16);
    // 0x080031BC: lwc1        $f0, 0x7C44($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C44));
    // 0x080031C0: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x080031C4: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x080031C8: b           L_080032AC
    // 0x080031CC: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
        goto L_080032AC;
    // 0x080031CC: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_080031D0:
    // 0x080031D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x080031D4: bne         $v0, $at, L_08003288
    if (ctx->r2 != ctx->r1) {
        // 0x080031D8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(34, 0X32C0) << 16);
            goto L_08003288;
    }
    // 0x080031D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X32C0) << 16);
    // 0x080031DC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080031E0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080031E4: jalr        $t9
    // 0x080031E8: addiu       $a0, $zero, 0x1C3
    ctx->r4 = ADD32(0, 0X1C3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080031E8: addiu       $a0, $zero, 0x1C3
    ctx->r4 = ADD32(0, 0X1C3);
    after_8:
    // 0x080031EC: beq         $v0, $zero, L_0800320C
    if (ctx->r2 == 0) {
        // 0x080031F0: lui         $t7, 0x8023
        ctx->r15 = S32(0X8023 << 16);
            goto L_0800320C;
    }
    // 0x080031F0: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x080031F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080031F8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080031FC: jalr        $t9
    // 0x08003200: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08003200: nop

    after_9:
    // 0x08003204: b           L_080032B0
    // 0x08003208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080032B0;
    // 0x08003208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800320C:
    // 0x0800320C: addiu       $t7, $t7, 0x7B58
    ctx->r15 = ADD32(ctx->r15, 0X7B58);
    // 0x08003210: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003214: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x08003218: lui         $t0, 0x8060
    ctx->r8 = S32(0X8060 << 16);
    // 0x0800321C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003220: sw          $t8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r24;
    // 0x08003224: ori         $t0, $t0, 0x20A0
    ctx->r8 = ctx->r8 | 0X20A0;
    // 0x08003228: addiu       $t1, $zero, 0x242
    ctx->r9 = ADD32(0, 0X242);
    // 0x0800322C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08003230: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x08003234: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x08003238: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x0800323C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08003240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003244: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08003248: jalr        $t9
    // 0x0800324C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800324C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x08003250: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C48) << 16);
    // 0x08003254: lwc1        $f0, 0x7C48($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C48));
    // 0x08003258: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x0800325C: sb          $t2, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r10;
    // 0x08003260: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003264: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003268: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3410) << 16);
    // 0x0800326C: addiu       $a0, $a0, 0x3410
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3410));
    // 0x08003270: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08003274: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08003278: jalr        $t9
    // 0x0800327C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800327C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    after_11:
    // 0x08003280: b           L_080032B0
    // 0x08003284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_080032B0;
    // 0x08003284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003288:
    // 0x08003288: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C4C) << 16);
    // 0x0800328C: lwc1        $f0, 0x7C4C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C4C));
    // 0x08003290: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003294: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003298: addiu       $a0, $a0, 0x32C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X32C0));
    // 0x0800329C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x080032A0: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x080032A4: jalr        $t9
    // 0x080032A8: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080032A8: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    after_12:
L_080032AC:
    // 0x080032AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080032B0:
    // 0x080032B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080032B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x080032B8: jr          $ra
    // 0x080032BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x080032BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08003410_6F68F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003410: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08003414: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08003418: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800341C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08003420: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003424: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003428: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800342C: bnel        $v0, $at, L_08003470
    if (ctx->r2 != ctx->r1) {
        // 0x08003430: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08003470;
    }
    goto skip_0;
    // 0x08003430: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x08003434: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08003438: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800343C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08003440: beql        $t6, $zero, L_08003470
    if (ctx->r14 == 0) {
        // 0x08003444: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_08003470;
    }
    goto skip_1;
    // 0x08003444: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_1:
    // 0x08003448: jalr        $t9
    // 0x0800344C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800344C: nop

    after_0:
    // 0x08003450: bne         $v0, $zero, L_08003464
    if (ctx->r2 != 0) {
        // 0x08003454: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08003464;
    }
    // 0x08003454: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003458: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800345C: jalr        $t9
    // 0x08003460: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003460: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_1:
L_08003464:
    // 0x08003464: sh          $zero, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = 0;
    // 0x08003468: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
    // 0x0800346C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_08003470:
    // 0x08003470: bnel        $v0, $at, L_080034C4
    if (ctx->r2 != ctx->r1) {
        // 0x08003474: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_080034C4;
    }
    goto skip_2;
    // 0x08003474: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_2:
    // 0x08003478: lhu         $t7, 0xDA($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XDA);
    // 0x0800347C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x08003480: beql        $t7, $zero, L_080034C4
    if (ctx->r15 == 0) {
        // 0x08003484: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_080034C4;
    }
    goto skip_3;
    // 0x08003484: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_3:
    // 0x08003488: lw          $t8, -0x3954($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3954);
    // 0x0800348C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08003490: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003494: beq         $t8, $at, L_080034B8
    if (ctx->r24 == ctx->r1) {
        // 0x08003498: addiu       $t9, $t9, -0xE28
        ctx->r25 = ADD32(ctx->r25, -0XE28);
            goto L_080034B8;
    }
    // 0x08003498: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x0800349C: jalr        $t9
    // 0x080034A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080034A0: nop

    after_2:
    // 0x080034A4: bne         $v0, $zero, L_080034B8
    if (ctx->r2 != 0) {
        // 0x080034A8: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080034B8;
    }
    // 0x080034A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080034AC: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080034B0: jalr        $t9
    // 0x080034B4: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080034B4: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    after_3:
L_080034B8:
    // 0x080034B8: sh          $zero, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = 0;
    // 0x080034BC: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
    // 0x080034C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_080034C4:
    // 0x080034C4: bnel        $v0, $at, L_08003504
    if (ctx->r2 != ctx->r1) {
        // 0x080034C8: lw          $t1, 0x68($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X68);
            goto L_08003504;
    }
    goto skip_4;
    // 0x080034C8: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    skip_4:
    // 0x080034CC: lhu         $t0, 0xDA($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XDA);
    // 0x080034D0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080034D4: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080034D8: beql        $t0, $zero, L_08003504
    if (ctx->r8 == 0) {
        // 0x080034DC: lw          $t1, 0x68($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X68);
            goto L_08003504;
    }
    goto skip_5;
    // 0x080034DC: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
    skip_5:
    // 0x080034E0: jalr        $t9
    // 0x080034E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080034E4: nop

    after_4:
    // 0x080034E8: bne         $v0, $zero, L_080034FC
    if (ctx->r2 != 0) {
        // 0x080034EC: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080034FC;
    }
    // 0x080034EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080034F0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080034F4: jalr        $t9
    // 0x080034F8: addiu       $a0, $zero, 0x2AF
    ctx->r4 = ADD32(0, 0X2AF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080034F8: addiu       $a0, $zero, 0x2AF
    ctx->r4 = ADD32(0, 0X2AF);
    after_5:
L_080034FC:
    // 0x080034FC: sh          $zero, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = 0;
    // 0x08003500: lw          $t1, 0x68($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X68);
L_08003504:
    // 0x08003504: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x08003508: beql        $t2, $zero, L_08003884
    if (ctx->r10 == 0) {
        // 0x0800350C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08003884;
    }
    goto skip_6;
    // 0x0800350C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_6:
    // 0x08003510: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x08003514: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08003518: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x0800351C: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
    // 0x08003520: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x08003524: beq         $v0, $at, L_08003534
    if (ctx->r2 == ctx->r1) {
        // 0x08003528: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_08003534;
    }
    // 0x08003528: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x0800352C: bnel        $v0, $at, L_080036B8
    if (ctx->r2 != ctx->r1) {
        // 0x08003530: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_080036B8;
    }
    goto skip_7;
    // 0x08003530: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_7:
L_08003534:
    // 0x08003534: lbu         $t5, 0x4C($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4C);
    // 0x08003538: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x0800353C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003540: bne         $t5, $at, L_080036B4
    if (ctx->r13 != ctx->r1) {
        // 0x08003544: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_080036B4;
    }
    // 0x08003544: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003548: jalr        $t9
    // 0x0800354C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800354C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_6:
    // 0x08003550: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003554: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X2674) << 16);
    // 0x08003558: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x0800355C: addiu       $v0, $v0, -0x2218
    ctx->r2 = ADD32(ctx->r2, -0X2218);
    // 0x08003560: addiu       $a1, $a1, 0x2674
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X2674));
    // 0x08003564: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08003568: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x0800356C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08003570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003574: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003578: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x0800357C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08003580: jalr        $v0
    // 0x08003584: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x08003584: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x08003588: beq         $v0, $zero, L_080035BC
    if (ctx->r2 == 0) {
        // 0x0800358C: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_080035BC;
    }
    // 0x0800358C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x08003590: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003594: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08003598: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800359C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x080035A0: jalr        $t9
    // 0x080035A4: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080035A4: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_8:
    // 0x080035A8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x080035AC: lw          $t7, 0xE8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XE8);
    // 0x080035B0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080035B4: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x080035B8: sw          $t8, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r24;
L_080035BC:
    // 0x080035BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080035C0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080035C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080035C8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080035CC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080035D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080035D4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080035D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080035DC: jalr        $t9
    // 0x080035E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080035E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x080035E4: beq         $v0, $zero, L_08003618
    if (ctx->r2 == 0) {
        // 0x080035E8: addiu       $t0, $zero, 0x2B
        ctx->r8 = ADD32(0, 0X2B);
            goto L_08003618;
    }
    // 0x080035E8: addiu       $t0, $zero, 0x2B
    ctx->r8 = ADD32(0, 0X2B);
    // 0x080035EC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080035F0: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x080035F4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080035F8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x080035FC: jalr        $t9
    // 0x08003600: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003600: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_10:
    // 0x08003604: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08003608: lw          $t1, 0xE8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XE8);
    // 0x0800360C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08003610: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x08003614: sw          $t2, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r10;
L_08003618:
    // 0x08003618: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800361C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08003620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003624: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08003628: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x0800362C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003630: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08003634: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08003638: jalr        $t9
    // 0x0800363C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x0800363C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x08003640: beq         $v0, $zero, L_08003674
    if (ctx->r2 == 0) {
        // 0x08003644: addiu       $t3, $zero, 0x2B
        ctx->r11 = ADD32(0, 0X2B);
            goto L_08003674;
    }
    // 0x08003644: addiu       $t3, $zero, 0x2B
    ctx->r11 = ADD32(0, 0X2B);
    // 0x08003648: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800364C: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08003650: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003654: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x08003658: jalr        $t9
    // 0x0800365C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x0800365C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_12:
    // 0x08003660: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08003664: lw          $t4, 0xE8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XE8);
    // 0x08003668: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800366C: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x08003670: sw          $t5, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r13;
L_08003674:
    // 0x08003674: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08003678: lbu         $t8, 0xD0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD0);
    // 0x0800367C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x08003680: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08003684: bne         $t8, $at, L_0800369C
    if (ctx->r24 != ctx->r1) {
        // 0x08003688: sw          $t7, 0x68($s0)
        MEM_W(0X68, ctx->r16) = ctx->r15;
            goto L_0800369C;
    }
    // 0x08003688: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x0800368C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08003690: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08003694: jalr        $t9
    // 0x08003698: addiu       $a0, $zero, 0x1C3
    ctx->r4 = ADD32(0, 0X1C3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08003698: addiu       $a0, $zero, 0x1C3
    ctx->r4 = ADD32(0, 0X1C3);
    after_13:
L_0800369C:
    // 0x0800369C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080036A0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080036A4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3894) << 16);
    // 0x080036A8: jalr        $t9
    // 0x080036AC: addiu       $a0, $a0, 0x3894
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3894));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x080036AC: addiu       $a0, $a0, 0x3894
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3894));
    after_14:
    // 0x080036B0: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_080036B4:
    // 0x080036B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_080036B8:
    // 0x080036B8: bne         $v0, $at, L_08003880
    if (ctx->r2 != ctx->r1) {
        // 0x080036BC: lw          $t0, 0x4C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X4C);
            goto L_08003880;
    }
    // 0x080036BC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x080036C0: lbu         $v0, 0x4C($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X4C);
    // 0x080036C4: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x080036C8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x080036CC: beq         $v0, $at, L_080036E4
    if (ctx->r2 == ctx->r1) {
        // 0x080036D0: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_080036E4;
    }
    // 0x080036D0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x080036D4: beq         $v0, $at, L_080036E4
    if (ctx->r2 == ctx->r1) {
        // 0x080036D8: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_080036E4;
    }
    // 0x080036D8: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x080036DC: bnel        $v0, $at, L_08003884
    if (ctx->r2 != ctx->r1) {
        // 0x080036E0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08003884;
    }
    goto skip_8;
    // 0x080036E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
L_080036E4:
    // 0x080036E4: lw          $t1, -0x3954($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3954);
    // 0x080036E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080036EC: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    // 0x080036F0: bne         $t1, $at, L_08003880
    if (ctx->r9 != ctx->r1) {
        // 0x080036F4: lui         $t2, 0x800
        ctx->r10 = S32(RELOC_HI16(34, 0X2674) << 16);
            goto L_08003880;
    }
    // 0x080036F4: lui         $t2, 0x800
    ctx->r10 = S32(RELOC_HI16(34, 0X2674) << 16);
    // 0x080036F8: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x080036FC: lui         $t4, 0x8002
    ctx->r12 = S32(0X8002 << 16);
    // 0x08003700: lui         $t5, 0x800
    ctx->r13 = S32(RELOC_HI16(34, 0X3894) << 16);
    // 0x08003704: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x08003708: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800370C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003710: addiu       $t6, $t6, 0x521C
    ctx->r14 = ADD32(ctx->r14, 0X521C);
    // 0x08003714: addiu       $t5, $t5, 0x3894
    ctx->r13 = ADD32(ctx->r13, (int16_t)RELOC_LO16(34, 0X3894));
    // 0x08003718: addiu       $t4, $t4, 0x4038
    ctx->r12 = ADD32(ctx->r12, 0X4038);
    // 0x0800371C: addiu       $t3, $t3, -0x2218
    ctx->r11 = ADD32(ctx->r11, -0X2218);
    // 0x08003720: addiu       $t2, $t2, 0x2674
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(34, 0X2674));
    // 0x08003724: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x08003728: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x0800372C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x08003730: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x08003734: jalr        $t9
    // 0x08003738: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08003738: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_15:
    // 0x0800373C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08003740: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x08003744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003748: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x0800374C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08003750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003754: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08003758: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x0800375C: jalr        $t9
    // 0x08003760: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08003760: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_16:
    // 0x08003764: beq         $v0, $zero, L_08003798
    if (ctx->r2 == 0) {
        // 0x08003768: addiu       $t7, $zero, 0x2B
        ctx->r15 = ADD32(0, 0X2B);
            goto L_08003798;
    }
    // 0x08003768: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x0800376C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003770: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08003774: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003778: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0800377C: jalr        $t9
    // 0x08003780: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08003780: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_17:
    // 0x08003784: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08003788: lw          $t8, 0xE8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XE8);
    // 0x0800378C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08003790: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x08003794: sw          $t0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r8;
L_08003798:
    // 0x08003798: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x0800379C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080037A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080037A4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x080037A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080037AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080037B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x080037B4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x080037B8: jalr        $t9
    // 0x080037BC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080037BC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_18:
    // 0x080037C0: beq         $v0, $zero, L_080037F4
    if (ctx->r2 == 0) {
        // 0x080037C4: addiu       $t1, $zero, 0x2B
        ctx->r9 = ADD32(0, 0X2B);
            goto L_080037F4;
    }
    // 0x080037C4: addiu       $t1, $zero, 0x2B
    ctx->r9 = ADD32(0, 0X2B);
    // 0x080037C8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080037CC: sh          $t1, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r9;
    // 0x080037D0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080037D4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x080037D8: jalr        $t9
    // 0x080037DC: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x080037DC: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_19:
    // 0x080037E0: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x080037E4: lw          $t2, 0xE8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XE8);
    // 0x080037E8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080037EC: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x080037F0: sw          $t3, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r11;
L_080037F4:
    // 0x080037F4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x080037F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x080037FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003804: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x08003808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800380C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08003810: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08003814: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08003818: jalr        $t9
    // 0x0800381C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800381C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x08003820: beq         $v0, $zero, L_08003854
    if (ctx->r2 == 0) {
        // 0x08003824: addiu       $t4, $zero, 0x2B
        ctx->r12 = ADD32(0, 0X2B);
            goto L_08003854;
    }
    // 0x08003824: addiu       $t4, $zero, 0x2B
    ctx->r12 = ADD32(0, 0X2B);
    // 0x08003828: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800382C: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08003830: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003834: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x08003838: jalr        $t9
    // 0x0800383C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x0800383C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_21:
    // 0x08003840: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08003844: lw          $t5, 0xE8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XE8);
    // 0x08003848: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x0800384C: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x08003850: sw          $t6, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r14;
L_08003854:
    // 0x08003854: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x08003858: addiu       $a0, $zero, 0x1C2
    ctx->r4 = ADD32(0, 0X1C2);
    // 0x0800385C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08003860: sw          $t8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r24;
    // 0x08003864: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x08003868: jalr        $t9
    // 0x0800386C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x0800386C: nop

    after_22:
    // 0x08003870: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x08003874: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x08003878: jalr        $t9
    // 0x0800387C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800387C: nop

    after_23:
L_08003880:
    // 0x08003880: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08003884:
    // 0x08003884: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08003888: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x0800388C: jr          $ra
    // 0x08003890: nop

    TRACE_RETURN()
    return;
    // 0x08003890: nop

;}
RECOMP_FUNC void func_08002B60_6F6040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002B64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002B68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002B6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002B70: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002B74: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002B78: addiu       $t6, $zero, 0x240
    ctx->r14 = ADD32(0, 0X240);
    // 0x08002B7C: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08002B80: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x08002B84: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002B88: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x08002B8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002B90: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08002B94: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002B98: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08002B9C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08002BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002BA4: jalr        $t9
    // 0x08002BA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002BA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002BAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C20) << 16);
    // 0x08002BB0: lwc1        $f0, 0x7C20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C20));
    // 0x08002BB4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x08002BB8: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08002BBC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002BC0: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08002BC4: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08002BC8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08002BCC: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x08002BD0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002BD4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002BD8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2C00) << 16);
    // 0x08002BDC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x08002BE0: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x08002BE4: jalr        $t9
    // 0x08002BE8: addiu       $a0, $a0, 0x2C00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2C00));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002BE8: addiu       $a0, $a0, 0x2C00
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2C00));
    after_1:
    // 0x08002BEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002BF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002BF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002BF8: jr          $ra
    // 0x08002BFC: nop

    TRACE_RETURN()
    return;
    // 0x08002BFC: nop

;}
RECOMP_FUNC void func_0800606C_6F954C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800606C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08006070: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08006074: beq         $t7, $zero, L_08006098
    if (ctx->r15 == 0) {
        // 0x08006078: nop
    
            goto L_08006098;
    }
    // 0x08006078: nop

    // 0x0800607C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08006080: lw          $t0, 0x68($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X68);
    // 0x08006084: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08006088: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x0800608C: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x08006090: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08006094: sw          $t1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r9;
L_08006098:
    // 0x08006098: jr          $ra
    // 0x0800609C: nop

    TRACE_RETURN()
    return;
    // 0x0800609C: nop

;}
RECOMP_FUNC void func_08004F80_6F8460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004F80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08004F84: jr          $ra
    // 0x08004F88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08004F88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_080017EC_6F4CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017EC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x080017F0: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x080017F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080017F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080017FC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001808: bgez        $t6, L_0800181C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x0800180C: andi        $t7, $t6, 0x1
        ctx->r15 = ctx->r14 & 0X1;
            goto L_0800181C;
    }
    // 0x0800180C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x08001810: beq         $t7, $zero, L_0800181C
    if (ctx->r15 == 0) {
        // 0x08001814: nop
    
            goto L_0800181C;
    }
    // 0x08001814: nop

    // 0x08001818: addiu       $t7, $t7, -0x2
    ctx->r15 = ADD32(ctx->r15, -0X2);
L_0800181C:
    // 0x0800181C: bgtz        $t7, L_08001838
    if (SIGNED(ctx->r15) > 0) {
        // 0x08001820: lui         $t3, 0x2A0
        ctx->r11 = S32(0X2A0 << 16);
            goto L_08001838;
    }
    // 0x08001820: lui         $t3, 0x2A0
    ctx->r11 = S32(0X2A0 << 16);
    // 0x08001824: lw          $t8, 0x60($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X60);
    // 0x08001828: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x0800182C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001830: b           L_08001844
    // 0x08001834: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
        goto L_08001844;
    // 0x08001834: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
L_08001838:
    // 0x08001838: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x0800183C: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x08001840: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
L_08001844:
    // 0x08001844: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08001848: ori         $t3, $t3, 0x7E1
    ctx->r11 = ctx->r11 | 0X7E1;
    // 0x0800184C: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x08001850: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08001854: bne         $v0, $zero, L_08001878
    if (ctx->r2 != 0) {
        // 0x08001858: sh          $t2, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r10;
            goto L_08001878;
    }
    // 0x08001858: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    // 0x0800185C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001860: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001864: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1888) << 16);
    // 0x08001868: sw          $t3, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r11;
    // 0x0800186C: sb          $t4, 0x75($a1)
    MEM_B(0X75, ctx->r5) = ctx->r12;
    // 0x08001870: jalr        $t9
    // 0x08001874: addiu       $a0, $a0, 0x1888
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1888));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001874: addiu       $a0, $a0, 0x1888
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1888));
    after_0:
L_08001878:
    // 0x08001878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800187C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001880: jr          $ra
    // 0x08001884: nop

    TRACE_RETURN()
    return;
    // 0x08001884: nop

;}
RECOMP_FUNC void func_08003894_6F6D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003894: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003898: jr          $ra
    // 0x0800389C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800389C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08005754_6F8C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08005754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08005758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800575C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08005760: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08005764: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08005768: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800576C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08005770: bne         $v0, $zero, L_08005780
    if (ctx->r2 != 0) {
        // 0x08005774: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08005780;
    }
    // 0x08005774: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08005778: jalr        $t9
    // 0x0800577C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800577C: nop

    after_0:
L_08005780:
    // 0x08005780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08005784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08005788: jr          $ra
    // 0x0800578C: nop

    TRACE_RETURN()
    return;
    // 0x0800578C: nop

;}
RECOMP_FUNC void func_08003FD8_6F74B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003FD8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08003FDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08003FE0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08003FE4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08003FE8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x08003FEC: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003FF0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08003FF4: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08003FF8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08003FFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08004000: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08004004: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08004008: bne         $v0, $zero, L_08004058
    if (ctx->r2 != 0) {
        // 0x0800400C: sw          $t7, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->r15;
            goto L_08004058;
    }
    // 0x0800400C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08004010: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C68) << 16);
    // 0x08004014: lwc1        $f20, 0x7C68($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C68));
    // 0x08004018: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800401C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08004020: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08004024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08004028: jalr        $t9
    // 0x0800402C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800402C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08004030: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08004034: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004038: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800403C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X41C0) << 16);
    // 0x08004040: swc1        $f20, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
    // 0x08004044: swc1        $f20, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f20.u32l;
    // 0x08004048: swc1        $f20, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f20.u32l;
    // 0x0800404C: jalr        $t9
    // 0x08004050: addiu       $a0, $a0, 0x41C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X41C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004050: addiu       $a0, $a0, 0x41C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X41C0));
    after_1:
    // 0x08004054: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_08004058:
    // 0x08004058: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C6C) << 16);
    // 0x0800405C: lwc1        $f20, 0x7C6C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C6C));
    // 0x08004060: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08004064: bne         $v0, $at, L_080040C0
    if (ctx->r2 != ctx->r1) {
        // 0x08004068: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080040C0;
    }
    // 0x08004068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800406C: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(34, 0X41C0) << 16);
    // 0x08004070: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x08004074: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004078: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800407C: addiu       $t0, $t0, 0x521C
    ctx->r8 = ADD32(ctx->r8, 0X521C);
    // 0x08004080: addiu       $t8, $t8, 0x41C0
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(34, 0X41C0));
    // 0x08004084: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x08004088: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x0800408C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x08004090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08004094: jalr        $t9
    // 0x08004098: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004098: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x0800409C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x080040A0: swc1        $f20, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
    // 0x080040A4: swc1        $f20, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f20.u32l;
    // 0x080040A8: swc1        $f20, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f20.u32l;
    // 0x080040AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080040B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x080040B4: jalr        $t9
    // 0x080040B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080040B8: nop

    after_3:
    // 0x080040BC: lbu         $v0, 0xD0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD0);
L_080040C0:
    // 0x080040C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080040C4: bne         $v0, $at, L_080041A8
    if (ctx->r2 != ctx->r1) {
        // 0x080040C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080041A8;
    }
    // 0x080040C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080040CC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x080040D0: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x080040D4: addiu       $t1, $t1, 0x521C
    ctx->r9 = ADD32(ctx->r9, 0X521C);
    // 0x080040D8: addiu       $v0, $v0, 0x6DF8
    ctx->r2 = ADD32(ctx->r2, 0X6DF8);
    // 0x080040DC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080040E0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x080040E4: jalr        $v0
    // 0x080040E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x080040E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x080040EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080040F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080040F4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080040F8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x080040FC: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004100: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X4280) << 16);
    // 0x08004104: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08004108: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x0800410C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08004110: sb          $t2, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = ctx->r10;
    // 0x08004114: addiu       $a1, $a1, 0x4280
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X4280));
    // 0x08004118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800411C: jalr        $t9
    // 0x08004120: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08004120: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x08004124: beq         $v0, $zero, L_08004194
    if (ctx->r2 == 0) {
        // 0x08004128: lui         $t4, 0x8020
        ctx->r12 = S32(0X8020 << 16);
            goto L_08004194;
    }
    // 0x08004128: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x0800412C: lw          $t3, 0xD0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD0);
    // 0x08004130: ori         $t4, $t4, 0x6E1
    ctx->r12 = ctx->r12 | 0X6E1;
    // 0x08004134: sw          $t4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r12;
    // 0x08004138: sw          $t3, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r11;
    // 0x0800413C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08004140: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x08004144: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08004148: jalr        $t9
    // 0x0800414C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800414C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
    // 0x08004150: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x08004154: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004158: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800415C: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x08004160: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x08004164: sb          $t5, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = ctx->r13;
    // 0x08004168: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800416C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x08004170: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004174: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08004178: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x0800417C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08004180: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x08004184: jalr        $t9
    // 0x08004188: sh          $t6, 0x28($a2)
    MEM_H(0X28, ctx->r6) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08004188: sh          $t6, 0x28($a2)
    MEM_H(0X28, ctx->r6) = ctx->r14;
    after_7:
    // 0x0800418C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x08004190: sw          $v0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r2;
L_08004194:
    // 0x08004194: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08004198: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4370) << 16);
    // 0x0800419C: addiu       $a0, $a0, 0x4370
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4370));
    // 0x080041A0: jalr        $t9
    // 0x080041A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080041A4: nop

    after_8:
L_080041A8:
    // 0x080041A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080041AC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x080041B0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080041B4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080041B8: jr          $ra
    // 0x080041BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x080041BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08004B58_6F8038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004B5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004B64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004B68: addiu       $t9, $t9, 0x168
    ctx->r25 = ADD32(ctx->r25, 0X168);
    // 0x08004B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004B70: jalr        $t9
    // 0x08004B74: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004B74: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x08004B78: bne         $v0, $zero, L_08004BAC
    if (ctx->r2 != 0) {
        // 0x08004B7C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_08004BAC;
    }
    // 0x08004B7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08004B80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004B84: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08004B88: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08004B8C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08004B90: jalr        $t9
    // 0x08004B94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004B94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x08004B98: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004B9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004BA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4BBC) << 16);
    // 0x08004BA4: jalr        $t9
    // 0x08004BA8: addiu       $a0, $a0, 0x4BBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4BBC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004BA8: addiu       $a0, $a0, 0x4BBC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4BBC));
    after_2:
L_08004BAC:
    // 0x08004BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004BB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004BB4: jr          $ra
    // 0x08004BB8: nop

    TRACE_RETURN()
    return;
    // 0x08004BB8: nop

;}
RECOMP_FUNC void func_08003CC8_6F71A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003CCC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003CD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003CD8: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08003CDC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x08003CE0: jalr        $t9
    // 0x08003CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08003CE8: beq         $v0, $zero, L_08003D20
    if (ctx->r2 == 0) {
        // 0x08003CEC: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_08003D20;
    }
    // 0x08003CEC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003CF0: lw          $t6, 0x60($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X60);
    // 0x08003CF4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08003CF8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08003CFC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08003D00: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    // 0x08003D04: jalr        $t9
    // 0x08003D08: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003D08: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_1:
    // 0x08003D0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003D10: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003D14: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X3D30) << 16);
    // 0x08003D18: jalr        $t9
    // 0x08003D1C: addiu       $a0, $a0, 0x3D30
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3D30));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003D1C: addiu       $a0, $a0, 0x3D30
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X3D30));
    after_2:
L_08003D20:
    // 0x08003D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003D28: jr          $ra
    // 0x08003D2C: nop

    TRACE_RETURN()
    return;
    // 0x08003D2C: nop

;}
RECOMP_FUNC void func_08003D6C_6F724C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003D74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08003D78: lhu         $t6, 0xDA($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XDA);
    // 0x08003D7C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08003D80: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08003D84: beql        $t6, $zero, L_08003DBC
    if (ctx->r14 == 0) {
        // 0x08003D88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003DBC;
    }
    goto skip_0;
    // 0x08003D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003D8C: lw          $t7, 0xD4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD4);
    // 0x08003D90: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08003D94: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08003D98: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x08003D9C: jalr        $t9
    // 0x08003DA0: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003DA0: sw          $t8, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r24;
    after_0:
    // 0x08003DA4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003DA8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003DAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X2254) << 16);
    // 0x08003DB0: jalr        $t9
    // 0x08003DB4: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003DB4: addiu       $a0, $a0, 0x2254
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X2254));
    after_1:
    // 0x08003DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003DBC:
    // 0x08003DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003DC0: jr          $ra
    // 0x08003DC4: nop

    TRACE_RETURN()
    return;
    // 0x08003DC4: nop

;}
RECOMP_FUNC void func_080065E0_6F9AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080065E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080065E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x080065E8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080065EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080065F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080065F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x080065F8: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080065FC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08006600: jalr        $t9
    // 0x08006604: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08006604: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    after_0:
    // 0x08006608: beq         $v0, $zero, L_08006620
    if (ctx->r2 == 0) {
        // 0x0800660C: lui         $t8, 0x8020
        ctx->r24 = S32(0X8020 << 16);
            goto L_08006620;
    }
    // 0x0800660C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x08006610: lw          $t6, 0x68($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X68);
    // 0x08006614: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08006618: b           L_080066C4
    // 0x0800661C: sw          $t7, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r15;
        goto L_080066C4;
    // 0x0800661C: sw          $t7, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r15;
L_08006620:
    // 0x08006620: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x08006624: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08006628: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x0800662C: addiu       $t1, $t1, 0x7B58
    ctx->r9 = ADD32(ctx->r9, 0X7B58);
    // 0x08006630: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08006634: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08006638: sw          $t8, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r24;
    // 0x0800663C: sw          $t0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r8;
    // 0x08006640: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x08006644: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08006648: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x0800664C: sw          $t2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r10;
    // 0x08006650: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08006654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08006658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800665C: jalr        $t9
    // 0x08006660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08006660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08006664: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08006668: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x0800666C: sb          $zero, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = 0;
    // 0x08006670: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7D0C) << 16);
    // 0x08006674: lwc1        $f4, 0x7D0C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7D0C));
    // 0x08006678: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7D10) << 16);
    // 0x0800667C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006680: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x08006684: lwc1        $f6, 0x7D10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7D10));
    // 0x08006688: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7D14) << 16);
    // 0x0800668C: addiu       $t3, $zero, 0x3EC
    ctx->r11 = ADD32(0, 0X3EC);
    // 0x08006690: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x08006694: lwc1        $f8, 0x7D14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7D14));
    // 0x08006698: addiu       $t4, $zero, 0x220
    ctx->r12 = ADD32(0, 0X220);
    // 0x0800669C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080066A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X66D8) << 16);
    // 0x080066A4: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x080066A8: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x080066AC: addiu       $a0, $a0, 0x66D8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X66D8));
    // 0x080066B0: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x080066B4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x080066B8: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x080066BC: jalr        $t9
    // 0x080066C0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080066C0: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    after_2:
L_080066C4:
    // 0x080066C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080066C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x080066CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x080066D0: jr          $ra
    // 0x080066D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x080066D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08001C60_6F5140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001C60: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08001C64: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08001C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001C6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001C70: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001C78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001C7C: bgez        $t6, L_08001C90
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08001C80: andi        $t7, $t6, 0x1
        ctx->r15 = ctx->r14 & 0X1;
            goto L_08001C90;
    }
    // 0x08001C80: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x08001C84: beq         $t7, $zero, L_08001C90
    if (ctx->r15 == 0) {
        // 0x08001C88: nop
    
            goto L_08001C90;
    }
    // 0x08001C88: nop

    // 0x08001C8C: addiu       $t7, $t7, -0x2
    ctx->r15 = ADD32(ctx->r15, -0X2);
L_08001C90:
    // 0x08001C90: bgtz        $t7, L_08001CAC
    if (SIGNED(ctx->r15) > 0) {
        // 0x08001C94: lui         $t3, 0x2A0
        ctx->r11 = S32(0X2A0 << 16);
            goto L_08001CAC;
    }
    // 0x08001C94: lui         $t3, 0x2A0
    ctx->r11 = S32(0X2A0 << 16);
    // 0x08001C98: lw          $t8, 0x60($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X60);
    // 0x08001C9C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08001CA0: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001CA4: b           L_08001CB8
    // 0x08001CA8: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
        goto L_08001CB8;
    // 0x08001CA8: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
L_08001CAC:
    // 0x08001CAC: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08001CB0: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x08001CB4: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
L_08001CB8:
    // 0x08001CB8: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08001CBC: ori         $t3, $t3, 0x7E1
    ctx->r11 = ctx->r11 | 0X7E1;
    // 0x08001CC0: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x08001CC4: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08001CC8: bne         $v0, $zero, L_08001CEC
    if (ctx->r2 != 0) {
        // 0x08001CCC: sh          $t2, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r10;
            goto L_08001CEC;
    }
    // 0x08001CCC: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    // 0x08001CD0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001CD4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001CD8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1CFC) << 16);
    // 0x08001CDC: sw          $t3, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r11;
    // 0x08001CE0: sb          $t4, 0x75($a1)
    MEM_B(0X75, ctx->r5) = ctx->r12;
    // 0x08001CE4: jalr        $t9
    // 0x08001CE8: addiu       $a0, $a0, 0x1CFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1CFC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001CE8: addiu       $a0, $a0, 0x1CFC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1CFC));
    after_0:
L_08001CEC:
    // 0x08001CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001CF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001CF4: jr          $ra
    // 0x08001CF8: nop

    TRACE_RETURN()
    return;
    // 0x08001CF8: nop

;}
RECOMP_FUNC void func_08000A9C_6F3F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A9C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000AA0: jr          $ra
    // 0x08000AA4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08000AA4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002674_6F5B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002674: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08002678: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x0800267C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x08002680: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08002684: lui         $t6, 0x40
    ctx->r14 = S32(0X40 << 16);
    // 0x08002688: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800268C: ori         $t6, $t6, 0x6E0
    ctx->r14 = ctx->r14 | 0X6E0;
    // 0x08002690: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x08002694: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002698: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800269C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x080026A0: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x080026A4: jalr        $t9
    // 0x080026A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080026A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x080026AC: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x080026B0: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x080026B4: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x080026B8: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x080026BC: beq         $t8, $zero, L_0800274C
    if (ctx->r24 == 0) {
        // 0x080026C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800274C;
    }
    // 0x080026C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080026C4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080026C8: sb          $t0, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r8;
    // 0x080026CC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080026D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080026D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080026D8: jalr        $t9
    // 0x080026DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080026DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x080026E0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x080026E4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080026E8: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x080026EC: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    // 0x080026F0: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x080026F4: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x080026F8: sh          $t3, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r11;
    // 0x080026FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002700: addiu       $t9, $t9, -0x28DC
    ctx->r25 = ADD32(ctx->r25, -0X28DC);
    // 0x08002704: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x08002708: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x0800270C: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x08002710: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08002714: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x08002718: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x0800271C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x08002720: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x08002724: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x08002728: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x0800272C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x08002730: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08002734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800273C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002740: jalr        $t9
    // 0x08002744: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002744: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002748: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_0800274C:
    // 0x0800274C: andi        $t1, $v1, 0x2
    ctx->r9 = ctx->r3 & 0X2;
    // 0x08002750: beq         $t1, $zero, L_080027F0
    if (ctx->r9 == 0) {
        // 0x08002754: addiu       $t2, $zero, 0x5A
        ctx->r10 = ADD32(0, 0X5A);
            goto L_080027F0;
    }
    // 0x08002754: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x08002758: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x0800275C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002760: sb          $t2, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r10;
    // 0x08002764: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002768: addiu       $t3, $t3, -0x28DC
    ctx->r11 = ADD32(ctx->r11, -0X28DC);
    // 0x0800276C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x08002770: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002778: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    // 0x0800277C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002780: jalr        $t9
    // 0x08002784: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002784: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08002788: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x0800278C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002790: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x08002794: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    // 0x08002798: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x0800279C: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x080027A0: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080027A4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x080027A8: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x080027AC: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x080027B0: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x080027B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080027B8: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x080027BC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x080027C0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x080027C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x080027C8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x080027CC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x080027D0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x080027D4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080027D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080027DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080027E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080027E4: jalr        $t9
    // 0x080027E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080027E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080027EC: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_080027F0:
    // 0x080027F0: andi        $t4, $v1, 0x4
    ctx->r12 = ctx->r3 & 0X4;
    // 0x080027F4: beq         $t4, $zero, L_08002844
    if (ctx->r12 == 0) {
        // 0x080027F8: addiu       $t5, $zero, 0x5A
        ctx->r13 = ADD32(0, 0X5A);
            goto L_08002844;
    }
    // 0x080027F8: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x080027FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002800: sb          $t5, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r13;
    // 0x08002804: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x08002808: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800280C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002810: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
    // 0x08002814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002818: jalr        $t9
    // 0x0800281C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800281C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x08002820: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x08002824: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08002828: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x0800282C: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x08002830: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08002834: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08002838: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x0800283C: sb          $t0, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r8;
    // 0x08002840: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
L_08002844:
    // 0x08002844: andi        $t1, $v1, 0x8
    ctx->r9 = ctx->r3 & 0X8;
    // 0x08002848: beq         $t1, $zero, L_08002890
    if (ctx->r9 == 0) {
        // 0x0800284C: addiu       $t2, $zero, 0x5A
        ctx->r10 = ADD32(0, 0X5A);
            goto L_08002890;
    }
    // 0x0800284C: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x08002850: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002854: sb          $t2, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r10;
    // 0x08002858: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800285C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002864: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    // 0x08002868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800286C: jalr        $t9
    // 0x08002870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08002874: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x08002878: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800287C: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x08002880: sw          $t3, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r11;
    // 0x08002884: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x08002888: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    // 0x0800288C: sh          $t5, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r13;
L_08002890:
    // 0x08002890: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002894: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002898: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X28B8) << 16);
    // 0x0800289C: jalr        $t9
    // 0x080028A0: addiu       $a0, $a0, 0x28B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X28B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080028A0: addiu       $a0, $a0, 0x28B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X28B8));
    after_7:
    // 0x080028A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x080028A8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x080028AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x080028B0: jr          $ra
    // 0x080028B4: nop

    TRACE_RETURN()
    return;
    // 0x080028B4: nop

;}
RECOMP_FUNC void func_08001BCC_6F50AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BCC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08001BD0: lhu         $t6, -0x33D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X33D0);
    // 0x08001BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001BDC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08001BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001BE8: bgez        $t6, L_08001BFC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x08001BEC: andi        $t7, $t6, 0x3
        ctx->r15 = ctx->r14 & 0X3;
            goto L_08001BFC;
    }
    // 0x08001BEC: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x08001BF0: beq         $t7, $zero, L_08001BFC
    if (ctx->r15 == 0) {
        // 0x08001BF4: nop
    
            goto L_08001BFC;
    }
    // 0x08001BF4: nop

    // 0x08001BF8: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_08001BFC:
    // 0x08001BFC: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x08001C00: beq         $at, $zero, L_08001C1C
    if (ctx->r1 == 0) {
        // 0x08001C04: addiu       $t3, $zero, 0xF
        ctx->r11 = ADD32(0, 0XF);
            goto L_08001C1C;
    }
    // 0x08001C04: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x08001C08: lw          $t8, 0x60($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X60);
    // 0x08001C0C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08001C10: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08001C14: b           L_08001C28
    // 0x08001C18: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
        goto L_08001C28;
    // 0x08001C18: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
L_08001C1C:
    // 0x08001C1C: lw          $t0, 0x60($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X60);
    // 0x08001C20: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x08001C24: sw          $t1, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r9;
L_08001C28:
    // 0x08001C28: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x08001C2C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X1C60) << 16);
    // 0x08001C30: addiu       $a0, $a0, 0x1C60
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X1C60));
    // 0x08001C34: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x08001C38: bne         $v0, $zero, L_08001C50
    if (ctx->r2 != 0) {
        // 0x08001C3C: sh          $t2, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r10;
            goto L_08001C50;
    }
    // 0x08001C3C: sh          $t2, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r10;
    // 0x08001C40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C44: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C48: jalr        $t9
    // 0x08001C4C: sh          $t3, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001C4C: sh          $t3, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r11;
    after_0:
L_08001C50:
    // 0x08001C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C58: jr          $ra
    // 0x08001C5C: nop

    TRACE_RETURN()
    return;
    // 0x08001C5C: nop

;}
RECOMP_FUNC void func_080023EC_6F58CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080023EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080023F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080023F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080023F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x080023FC: lui         $t7, 0x82E0
    ctx->r15 = S32(0X82E0 << 16);
    // 0x08002400: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002404: addiu       $t6, $zero, 0x199
    ctx->r14 = ADD32(0, 0X199);
    // 0x08002408: ori         $t7, $t7, 0x7E1
    ctx->r15 = ctx->r15 | 0X7E1;
    // 0x0800240C: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x08002410: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002418: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800241C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08002420: sh          $t8, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r24;
    // 0x08002424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002428: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800242C: jalr        $t9
    // 0x08002430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002434: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002438: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x0800243C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002440: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x08002444: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08002448: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x0800244C: jalr        $t9
    // 0x08002450: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002450: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x08002454: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002458: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x0800245C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002460: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x08002464: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x08002468: jalr        $t9
    // 0x0800246C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800246C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002470: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BE0) << 16);
    // 0x08002474: lwc1        $f0, 0x7BE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BE0));
    // 0x08002478: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x0800247C: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08002480: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002484: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002488: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X24B4) << 16);
    // 0x0800248C: addiu       $a0, $a0, 0x24B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X24B4));
    // 0x08002490: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08002494: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08002498: jalr        $t9
    // 0x0800249C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800249C: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    after_3:
    // 0x080024A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080024A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080024A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080024AC: jr          $ra
    // 0x080024B0: nop

    TRACE_RETURN()
    return;
    // 0x080024B0: nop

;}
RECOMP_FUNC void func_080066D8_6F9BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080066D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080066DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080066E0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080066E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080066E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080066EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080066F0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080066F4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x080066F8: jalr        $t9
    // 0x080066FC: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080066FC: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    after_0:
    // 0x08006700: beq         $v0, $zero, L_08006730
    if (ctx->r2 == 0) {
        // 0x08006704: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_08006730;
    }
    // 0x08006704: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08006708: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    // 0x0800670C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08006710: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x08006714: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08006718: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6740) << 16);
    // 0x0800671C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x08006720: sw          $t7, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r15;
    // 0x08006724: sh          $t8, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r24;
    // 0x08006728: jalr        $t9
    // 0x0800672C: addiu       $a0, $a0, 0x6740
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6740));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800672C: addiu       $a0, $a0, 0x6740
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6740));
    after_1:
L_08006730:
    // 0x08006730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08006734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08006738: jr          $ra
    // 0x0800673C: nop

    TRACE_RETURN()
    return;
    // 0x0800673C: nop

;}
RECOMP_FUNC void func_0800072C_6F3C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800072C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000730: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000734: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000738: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x0800073C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000740: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000744: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x08000748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x0800074C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08000750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000754: jalr        $t9
    // 0x08000758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x0800075C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000760: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08000764: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x08000768: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x0800076C: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x08000770: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x08000774: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x08000778: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x0800077C: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08000780: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08000784: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x08000788: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x0800078C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x08000790: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08000794: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x08000798: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x0800079C: lbu         $t0, 0xD0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD0);
    // 0x080007A0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7B84) << 16);
    // 0x080007A4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x080007A8: beq         $t0, $zero, L_080007B8
    if (ctx->r8 == 0) {
        // 0x080007AC: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080007B8;
    }
    // 0x080007AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080007B0: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x080007B4: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
L_080007B8:
    // 0x080007B8: sh          $zero, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = 0;
    // 0x080007BC: lwc1        $f4, 0x7B84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7B84));
    // 0x080007C0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x080007C4: jalr        $t9
    // 0x080007C8: swc1        $f4, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080007C8: swc1        $f4, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f4.u32l;
    after_1:
    // 0x080007CC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007D0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007D4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X7F4) << 16);
    // 0x080007D8: jalr        $t9
    // 0x080007DC: addiu       $a0, $a0, 0x7F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X7F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080007DC: addiu       $a0, $a0, 0x7F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X7F4));
    after_2:
    // 0x080007E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080007E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080007E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080007EC: jr          $ra
    // 0x080007F0: nop

    TRACE_RETURN()
    return;
    // 0x080007F0: nop

;}
RECOMP_FUNC void func_08003404_6F68E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003404: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08003408: jr          $ra
    // 0x0800340C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x0800340C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08004280_6F7760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004280: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08004284: lbu         $t6, -0x3298($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3298);
    // 0x08004288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800428C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004290: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x08004294: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08004298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800429C: bne         $at, $zero, L_080042E4
    if (ctx->r1 != 0) {
        // 0x080042A0: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_080042E4;
    }
    // 0x080042A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080042A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080042A8: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080042AC: addiu       $a0, $zero, 0x15E
    ctx->r4 = ADD32(0, 0X15E);
    // 0x080042B0: jalr        $t9
    // 0x080042B4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080042B4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x080042B8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080042BC: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x080042C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080042C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080042C8: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x080042CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080042D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X42F4) << 16);
    // 0x080042D4: addiu       $a0, $a0, 0x42F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X42F4));
    // 0x080042D8: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    // 0x080042DC: jalr        $t9
    // 0x080042E0: swc1        $f4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080042E0: swc1        $f4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f4.u32l;
    after_1:
L_080042E4:
    // 0x080042E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080042E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080042EC: jr          $ra
    // 0x080042F0: nop

    TRACE_RETURN()
    return;
    // 0x080042F0: nop

;}
RECOMP_FUNC void func_08004FEC_6F84CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004FF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004FF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004FF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004FFC: lhu         $t7, 0xDA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XDA);
    // 0x08005000: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08005004: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08005008: beql        $t7, $zero, L_08005088
    if (ctx->r15 == 0) {
        // 0x0800500C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08005088;
    }
    goto skip_0;
    // 0x0800500C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08005010: lw          $t8, 0xD4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XD4);
    // 0x08005014: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x08005018: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x0800501C: sw          $t9, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r25;
    // 0x08005020: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08005024: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08005028: jalr        $t9
    // 0x0800502C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800502C: nop

    after_0:
    // 0x08005030: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08005034: addiu       $t9, $t9, -0x4DC0
    ctx->r25 = ADD32(ctx->r25, -0X4DC0);
    // 0x08005038: jalr        $t9
    // 0x0800503C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800503C: nop

    after_1:
    // 0x08005040: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08005044: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08005048: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x0800504C: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08005050: sb          $t0, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r8;
    // 0x08005054: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08005058: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x0800505C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x08005060: jalr        $t9
    // 0x08005064: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08005064: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x08005068: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800506C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08005070: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08005074: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X5094) << 16);
    // 0x08005078: sw          $zero, 0x7AC4($at)
    MEM_W(0X7AC4, ctx->r1) = 0;
    // 0x0800507C: jalr        $t9
    // 0x08005080: addiu       $a0, $a0, 0x5094
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X5094));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08005080: addiu       $a0, $a0, 0x5094
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X5094));
    after_3:
    // 0x08005084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08005088:
    // 0x08005088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800508C: jr          $ra
    // 0x08005090: nop

    TRACE_RETURN()
    return;
    // 0x08005090: nop

;}
RECOMP_FUNC void func_080028B8_6F5D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080028B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x080028BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080028C0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080028C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080028C8: lbu         $t6, 0xEC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEC);
    // 0x080028CC: lw          $v0, 0xE8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE8);
    // 0x080028D0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080028D4: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x080028D8: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x080028DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080028E0: beq         $t8, $zero, L_0800295C
    if (ctx->r24 == 0) {
        // 0x080028E4: sb          $t7, 0xEC($a0)
        MEM_B(0XEC, ctx->r4) = ctx->r15;
            goto L_0800295C;
    }
    // 0x080028E4: sb          $t7, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = ctx->r15;
    // 0x080028E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080028EC: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080028F0: lbu         $a1, 0xEC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XEC);
    // 0x080028F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080028F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080028FC: jalr        $t9
    // 0x08002900: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002900: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08002904: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002908: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BE8) << 16);
    // 0x0800290C: ldc1        $f0, 0x7BE8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BE8));
    // 0x08002910: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002914: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002918: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x0800291C: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x08002920: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002924: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002928: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x0800292C: addiu       $t1, $t0, 0x40
    ctx->r9 = ADD32(ctx->r8, 0X40);
    // 0x08002930: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08002934: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08002938: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x0800293C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002940: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002944: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x08002948: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x0800294C: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08002950: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002954: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x08002958: lw          $v0, 0xE8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XE8);
L_0800295C:
    // 0x0800295C: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x08002960: beq         $t3, $zero, L_080029DC
    if (ctx->r11 == 0) {
        // 0x08002964: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080029DC;
    }
    // 0x08002964: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002968: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800296C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002970: lbu         $a1, 0xEC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XEC);
    // 0x08002974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800297C: jalr        $t9
    // 0x08002980: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002980: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002984: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002988: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7BF0) << 16);
    // 0x0800298C: ldc1        $f2, 0x7BF0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(34, 0X7BF0));
    // 0x08002990: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002994: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002998: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x0800299C: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x080029A0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080029A4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x080029A8: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x080029AC: addiu       $t5, $t4, -0x40
    ctx->r13 = ADD32(ctx->r12, -0X40);
    // 0x080029B0: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x080029B4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x080029B8: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x080029BC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080029C0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080029C4: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
    // 0x080029C8: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x080029CC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x080029D0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080029D4: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x080029D8: lw          $v0, 0xE8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XE8);
L_080029DC:
    // 0x080029DC: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x080029E0: beq         $t7, $zero, L_08002A80
    if (ctx->r15 == 0) {
        // 0x080029E4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002A80;
    }
    // 0x080029E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080029E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080029EC: addiu       $t9, $t9, -0x22B4
    ctx->r25 = ADD32(ctx->r25, -0X22B4);
    // 0x080029F0: lbu         $a1, 0xEC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XEC);
    // 0x080029F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080029F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080029FC: jalr        $t9
    // 0x08002A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08002A04: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002A08: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C00) << 16);
    // 0x08002A0C: ldc1        $f0, 0x7C00($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C00));
    // 0x08002A10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002A14: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002A18: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08002A1C: lhu         $t8, 0x16($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X16);
    // 0x08002A20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A24: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002A28: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002A2C: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08002A30: addiu       $t0, $t8, 0x40
    ctx->r8 = ADD32(ctx->r24, 0X40);
    // 0x08002A34: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x08002A38: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08002A3C: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x08002A40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002A44: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002A48: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08002A4C: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x08002A50: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08002A54: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08002A58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002A5C: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x08002A60: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002A64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002A68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08002A6C: jalr        $t9
    // 0x08002A70: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002A70: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x08002A74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08002A78: sb          $t2, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r10;
    // 0x08002A7C: lw          $v0, 0xE8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XE8);
L_08002A80:
    // 0x08002A80: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x08002A84: beq         $t3, $zero, L_08002AFC
    if (ctx->r11 == 0) {
        // 0x08002A88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_08002AFC;
    }
    // 0x08002A88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002A8C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002A90: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08002A94: lbu         $a1, 0xEC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XEC);
    // 0x08002A98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08002A9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08002AA0: jalr        $t9
    // 0x08002AA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002AA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x08002AA8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002AAC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7C18) << 16);
    // 0x08002AB0: ldc1        $f2, 0x7C18($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(34, 0X7C18));
    // 0x08002AB4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002AB8: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08002ABC: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x08002AC0: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x08002AC4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002AC8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002ACC: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08002AD0: addiu       $t5, $t4, -0x40
    ctx->r13 = ADD32(ctx->r12, -0X40);
    // 0x08002AD4: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x08002AD8: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08002ADC: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x08002AE0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08002AE4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08002AE8: sh          $t6, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r14;
    // 0x08002AEC: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x08002AF0: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08002AF4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08002AF8: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_08002AFC:
    // 0x08002AFC: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08002B00: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x08002B04: bne         $v0, $zero, L_08002B18
    if (ctx->r2 != 0) {
        // 0x08002B08: sh          $t7, 0x8A($s1)
        MEM_H(0X8A, ctx->r17) = ctx->r15;
            goto L_08002B18;
    }
    // 0x08002B08: sh          $t7, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r15;
    // 0x08002B0C: lw          $t8, 0x68($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X68);
    // 0x08002B10: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x08002B14: sw          $t0, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r8;
L_08002B18:
    // 0x08002B18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002B1C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08002B20: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08002B24: jr          $ra
    // 0x08002B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08002B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08004D2C_6F820C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004D2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08004D30: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08004D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004D38: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08004D3C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08004D40: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x08004D44: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x08004D48: jalr        $t9
    // 0x08004D4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004D4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08004D50: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08004D54: beq         $v0, $zero, L_08004E40
    if (ctx->r2 == 0) {
        // 0x08004D58: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_08004E40;
    }
    // 0x08004D58: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x08004D5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x08004D60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004D64: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08004D68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004D6C: addiu       $t6, $zero, 0x250
    ctx->r14 = ADD32(0, 0X250);
    // 0x08004D70: ori         $t7, $t7, 0x6E1
    ctx->r15 = ctx->r15 | 0X6E1;
    // 0x08004D74: sh          $t6, 0x5E($a3)
    MEM_H(0X5E, ctx->r7) = ctx->r14;
    // 0x08004D78: sw          $t7, 0x60($a3)
    MEM_W(0X60, ctx->r7) = ctx->r15;
    // 0x08004D7C: sw          $v0, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->r2;
    // 0x08004D80: sb          $v0, 0x6C($a3)
    MEM_B(0X6C, ctx->r7) = ctx->r2;
    // 0x08004D84: addiu       $t8, $zero, 0x30F
    ctx->r24 = ADD32(0, 0X30F);
    // 0x08004D88: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004D8C: sh          $t8, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r24;
    // 0x08004D90: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08004D94: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08004D98: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08004D9C: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08004DA0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x08004DA4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08004DA8: jalr        $t9
    // 0x08004DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08004DB0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08004DB4: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08004DB8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(34, 0X4F80) << 16);
    // 0x08004DBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08004DC0: addiu       $a1, $a1, 0x4F80
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(34, 0X4F80));
    // 0x08004DC4: jalr        $t9
    // 0x08004DC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08004DC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x08004DCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004DD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004DD4: beq         $v0, $zero, L_08004E2C
    if (ctx->r2 == 0) {
        // 0x08004DD8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08004E2C;
    }
    // 0x08004DD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08004DDC: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x08004DE0: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08004DE4: ori         $t0, $t0, 0x6E1
    ctx->r8 = ctx->r8 | 0X6E1;
    // 0x08004DE8: sw          $t0, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r8;
    // 0x08004DEC: sb          $zero, 0x6C($v1)
    MEM_B(0X6C, ctx->r3) = 0;
    // 0x08004DF0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(34, 0X7CB0) << 16);
    // 0x08004DF4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08004DF8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08004DFC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x08004E00: lwc1        $f4, 0x7CB0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(34, 0X7CB0));
    // 0x08004E04: addiu       $t1, $zero, 0x2B
    ctx->r9 = ADD32(0, 0X2B);
    // 0x08004E08: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08004E0C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x08004E10: sh          $t1, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r9;
    // 0x08004E14: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08004E18: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x08004E1C: jalr        $t9
    // 0x08004E20: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08004E20: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_3:
    // 0x08004E24: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x08004E28: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
L_08004E2C:
    // 0x08004E2C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004E30: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004E34: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4E50) << 16);
    // 0x08004E38: jalr        $t9
    // 0x08004E3C: addiu       $a0, $a0, 0x4E50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4E50));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08004E3C: addiu       $a0, $a0, 0x4E50
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4E50));
    after_4:
L_08004E40:
    // 0x08004E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08004E48: jr          $ra
    // 0x08004E4C: nop

    TRACE_RETURN()
    return;
    // 0x08004E4C: nop

;}
RECOMP_FUNC void func_080042F4_6F77D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080042F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080042F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080042FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08004300: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08004304: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08004308: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x0800430C: bne         $v0, $zero, L_08004338
    if (ctx->r2 != 0) {
        // 0x08004310: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08004338;
    }
    // 0x08004310: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08004314: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08004318: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800431C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004320: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08004324: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08004328: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x0800432C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4348) << 16);
    // 0x08004330: jalr        $t9
    // 0x08004334: addiu       $a0, $a0, 0x4348
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4348));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004334: addiu       $a0, $a0, 0x4348
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4348));
    after_0:
L_08004338:
    // 0x08004338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800433C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004340: jr          $ra
    // 0x08004344: nop

    TRACE_RETURN()
    return;
    // 0x08004344: nop

;}
RECOMP_FUNC void func_08002254_6F5734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002254: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800225C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08002260: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08002264: beql        $t7, $zero, L_080022E4
    if (ctx->r15 == 0) {
        // 0x08002268: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080022E4;
    }
    goto skip_0;
    // 0x08002268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800226C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x08002270: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08002274: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08002278: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x0800227C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08002280: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x08002284: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x08002288: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800228C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x08002290: sb          $zero, -0x767($at)
    MEM_B(-0X767, ctx->r1) = 0;
    // 0x08002294: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08002298: jalr        $t9
    // 0x0800229C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800229C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080022A0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080022A4: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x080022A8: jalr        $t9
    // 0x080022AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080022AC: nop

    after_1:
    // 0x080022B0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x080022B4: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x080022B8: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x080022BC: lhu         $t2, 0xD8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XD8);
    // 0x080022C0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x080022C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080022C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080022CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X22F0) << 16);
    // 0x080022D0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x080022D4: addiu       $a0, $a0, 0x22F0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X22F0));
    // 0x080022D8: jalr        $t9
    // 0x080022DC: sb          $t2, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080022DC: sb          $t2, -0x768($at)
    MEM_B(-0X768, ctx->r1) = ctx->r10;
    after_2:
    // 0x080022E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080022E4:
    // 0x080022E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080022E8: jr          $ra
    // 0x080022EC: nop

    TRACE_RETURN()
    return;
    // 0x080022EC: nop

;}
RECOMP_FUNC void func_08004F8C_6F846C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08004F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08004F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08004F94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x08004F98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08004F9C: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x08004FA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08004FA4: addiu       $t6, $zero, 0x250
    ctx->r14 = ADD32(0, 0X250);
    // 0x08004FA8: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x08004FAC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x08004FB0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08004FB4: sw          $v0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r2;
    // 0x08004FB8: sb          $v0, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r2;
    // 0x08004FBC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004FC0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08004FC4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X4FEC) << 16);
    // 0x08004FC8: addiu       $a0, $a0, 0x4FEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X4FEC));
    // 0x08004FCC: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08004FD0: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08004FD4: jalr        $t9
    // 0x08004FD8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004FD8: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x08004FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08004FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08004FE4: jr          $ra
    // 0x08004FE8: nop

    TRACE_RETURN()
    return;
    // 0x08004FE8: nop

;}
RECOMP_FUNC void func_0800058C_6F3A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800058C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000590: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000594: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000598: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800059C: lbu         $t6, 0xD1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD1);
    // 0x080005A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080005A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080005A8: bne         $t6, $at, L_080005C8
    if (ctx->r14 != ctx->r1) {
        // 0x080005AC: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_080005C8;
    }
    // 0x080005AC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x080005B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005B4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080005B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080005BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080005C0: jalr        $t9
    // 0x080005C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080005C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_080005C8:
    // 0x080005C8: lw          $t7, 0x68($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X68);
    // 0x080005CC: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x080005D0: beql        $t8, $zero, L_080006B0
    if (ctx->r24 == 0) {
        // 0x080005D4: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_080006B0;
    }
    goto skip_0;
    // 0x080005D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x080005D8: lbu         $v0, 0xD1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD1);
    // 0x080005DC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080005E4: beq         $v0, $zero, L_08000608
    if (ctx->r2 == 0) {
        // 0x080005E8: addiu       $t9, $t9, 0x4038
        ctx->r25 = ADD32(ctx->r25, 0X4038);
            goto L_08000608;
    }
    // 0x080005E8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080005EC: beq         $v0, $at, L_08000638
    if (ctx->r2 == ctx->r1) {
        // 0x080005F0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000638;
    }
    // 0x080005F0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080005F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080005F8: beq         $v0, $at, L_0800066C
    if (ctx->r2 == ctx->r1) {
        // 0x080005FC: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_0800066C;
    }
    // 0x080005FC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000600: b           L_08000698
    // 0x08000604: nop

        goto L_08000698;
    // 0x08000604: nop

L_08000608:
    // 0x08000608: jalr        $t9
    // 0x0800060C: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800060C: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_1:
    // 0x08000610: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000614: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000618: jalr        $t9
    // 0x0800061C: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800061C: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    after_2:
    // 0x08000620: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000624: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000628: jalr        $t9
    // 0x0800062C: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800062C: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_3:
    // 0x08000630: b           L_08000698
    // 0x08000634: nop

        goto L_08000698;
    // 0x08000634: nop

L_08000638:
    // 0x08000638: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x0800063C: jalr        $t9
    // 0x08000640: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000640: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_4:
    // 0x08000644: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000648: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800064C: jalr        $t9
    // 0x08000650: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000650: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    after_5:
    // 0x08000654: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000658: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800065C: jalr        $t9
    // 0x08000660: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000660: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_6:
    // 0x08000664: b           L_08000698
    // 0x08000668: nop

        goto L_08000698;
    // 0x08000668: nop

L_0800066C:
    // 0x0800066C: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000670: jalr        $t9
    // 0x08000674: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000674: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_7:
    // 0x08000678: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800067C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000680: jalr        $t9
    // 0x08000684: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000684: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    after_8:
    // 0x08000688: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800068C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000690: jalr        $t9
    // 0x08000694: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000694: lhu         $a0, 0xD4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD4);
    after_9:
L_08000698:
    // 0x08000698: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800069C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(34, 0X6D4) << 16);
    // 0x080006A4: jalr        $t9
    // 0x080006A8: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080006A8: addiu       $a0, $a0, 0x6D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(34, 0X6D4));
    after_10:
    // 0x080006AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_080006B0:
    // 0x080006B0: lhu         $t1, 0x16($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X16);
    // 0x080006B4: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x080006B8: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x080006BC: sh          $t3, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r11;
    // 0x080006C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x080006C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080006C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080006CC: jr          $ra
    // 0x080006D0: nop

    TRACE_RETURN()
    return;
    // 0x080006D0: nop

;}
RECOMP_FUNC void func_080067E8_6F9CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080067E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080067EC: jr          $ra
    // 0x080067F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080067F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
