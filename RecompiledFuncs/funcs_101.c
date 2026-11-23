#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08000000_6AE7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000008: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000014: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000018: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x0800001C: jalr        $t9
    // 0x08000020: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000020: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08000024: beq         $v0, $zero, L_0800003C
    if (ctx->r2 == 0) {
        // 0x08000028: lui         $t8, 0x40
        ctx->r24 = S32(0X40 << 16);
            goto L_0800003C;
    }
    // 0x08000028: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x0800002C: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000030: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000034: b           L_080000B8
    // 0x08000038: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_080000B8;
    // 0x08000038: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_0800003C:
    // 0x0800003C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000040: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08000044: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08000048: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800004C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000050: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000058: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x0800005C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000060: jalr        $t9
    // 0x08000064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000068: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800006C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000074: jalr        $t9
    // 0x08000078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x0800007C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000080: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000088: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x0800008C: jalr        $t9
    // 0x08000090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x08000094: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000098: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x0800009C: jalr        $t9
    // 0x080000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080000A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0XCC) << 16);
    // 0x080000B0: jalr        $t9
    // 0x080000B4: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0XCC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000B4: addiu       $a0, $a0, 0xCC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0XCC));
    after_5:
L_080000B8:
    // 0x080000B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080000BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080000C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080000C4: jr          $ra
    // 0x080000C8: nop

    TRACE_RETURN()
    return;
    // 0x080000C8: nop

;}
RECOMP_FUNC void func_080002D0_6AEAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080002D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080002DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080002E0: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x080002E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080002EC: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x080002F0: beq         $t7, $zero, L_08000364
    if (ctx->r15 == 0) {
        // 0x080002F4: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_08000364;
    }
    // 0x080002F4: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080002F8: jalr        $t9
    // 0x080002FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002FC: nop

    after_0:
    // 0x08000300: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000304: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000308: jalr        $t9
    // 0x0800030C: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800030C: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    after_1:
    // 0x08000310: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000314: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800031C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000324: jalr        $t9
    // 0x08000328: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000328: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x0800032C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000330: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08000334: jalr        $t9
    // 0x08000338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x0800033C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000340: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000344: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x08000348: jalr        $t9
    // 0x0800034C: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800034C: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_4:
    // 0x08000350: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000354: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000358: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X174) << 16);
    // 0x0800035C: jalr        $t9
    // 0x08000360: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X174));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000360: addiu       $a0, $a0, 0x174
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X174));
    after_5:
L_08000364:
    // 0x08000364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800036C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000370: jr          $ra
    // 0x08000374: nop

    TRACE_RETURN()
    return;
    // 0x08000374: nop

;}
RECOMP_FUNC void func_080009F4_6AF1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080009F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080009FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000A00: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08000A04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000A08: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x08000A0C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08000A10: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08000A14: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x08000A18: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x08000A1C: beq         $t0, $zero, L_08000AA4
    if (ctx->r8 == 0) {
        // 0x08000A20: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000AA4;
    }
    // 0x08000A20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A24: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000A28: jalr        $t9
    // 0x08000A2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A2C: nop

    after_0:
    // 0x08000A30: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A34: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000A38: jalr        $t9
    // 0x08000A3C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A3C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x08000A40: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A44: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000A54: jalr        $t9
    // 0x08000A58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000A5C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A60: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08000A64: jalr        $t9
    // 0x08000A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08000A6C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000A70: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000A74: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x08000A78: jalr        $t9
    // 0x08000A7C: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000A7C: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_4:
    // 0x08000A80: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x08000A84: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A88: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A8C: beq         $v0, $zero, L_08000A9C
    if (ctx->r2 == 0) {
        // 0x08000A90: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(17, 0X4AC) << 16);
            goto L_08000A9C;
    }
    // 0x08000A90: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X4AC) << 16);
    // 0x08000A94: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000A98: sb          $t1, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r9;
L_08000A9C:
    // 0x08000A9C: jalr        $t9
    // 0x08000AA0: addiu       $a0, $a0, 0x4AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X4AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000AA0: addiu       $a0, $a0, 0x4AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X4AC));
    after_5:
L_08000AA4:
    // 0x08000AA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000AA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000AB0: jr          $ra
    // 0x08000AB4: nop

    TRACE_RETURN()
    return;
    // 0x08000AB4: nop

;}
RECOMP_FUNC void func_080001B4_6AE994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001B8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080001BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001C0: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080001C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080001C8: jalr        $t9
    // 0x080001CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080001D0: bne         $v0, $zero, L_080001F4
    if (ctx->r2 != 0) {
        // 0x080001D4: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_080001F4;
    }
    // 0x080001D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001D8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080001DC: jalr        $t9
    // 0x080001E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001E0: nop

    after_1:
    // 0x080001E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001E8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080001EC: jalr        $t9
    // 0x080001F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080001F0: nop

    after_2:
L_080001F4:
    // 0x080001F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080001F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001FC: jr          $ra
    // 0x08000200: nop

    TRACE_RETURN()
    return;
    // 0x08000200: nop

;}
RECOMP_FUNC void func_080005F8_6AEDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080005FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000600: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000604: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000608: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x0800060C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000614: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x08000618: beq         $t7, $zero, L_080006CC
    if (ctx->r15 == 0) {
        // 0x0800061C: addiu       $t9, $t9, 0x1F70
        ctx->r25 = ADD32(ctx->r25, 0X1F70);
            goto L_080006CC;
    }
    // 0x0800061C: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000620: jalr        $t9
    // 0x08000624: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000624: nop

    after_0:
    // 0x08000628: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800062C: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000634: jalr        $t9
    // 0x08000638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x0800063C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000640: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x08000644: jalr        $t9
    // 0x08000648: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000648: lhu         $a0, 0xD0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD0);
    after_2:
    // 0x0800064C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000650: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000654: jalr        $t9
    // 0x08000658: addiu       $a0, $zero, 0xE2
    ctx->r4 = ADD32(0, 0XE2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000658: addiu       $a0, $zero, 0xE2
    ctx->r4 = ADD32(0, 0XE2);
    after_3:
    // 0x0800065C: beq         $v0, $zero, L_0800067C
    if (ctx->r2 == 0) {
        // 0x08000660: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_0800067C;
    }
    // 0x08000660: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000664: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000668: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800066C: jalr        $t9
    // 0x08000670: addiu       $a0, $zero, 0x312
    ctx->r4 = ADD32(0, 0X312);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000670: addiu       $a0, $zero, 0x312
    ctx->r4 = ADD32(0, 0X312);
    after_4:
    // 0x08000674: b           L_08000688
    // 0x08000678: nop

        goto L_08000688;
    // 0x08000678: nop

L_0800067C:
    // 0x0800067C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000680: jalr        $t9
    // 0x08000684: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000684: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    after_5:
L_08000688:
    // 0x08000688: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800068C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800069C: jalr        $t9
    // 0x080006A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080006A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x080006A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006A8: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x080006AC: jalr        $t9
    // 0x080006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x080006B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006B8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080006BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X6E0) << 16);
    // 0x080006C0: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x080006C4: jalr        $t9
    // 0x080006C8: addiu       $a0, $a0, 0x6E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X6E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080006C8: addiu       $a0, $a0, 0x6E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X6E0));
    after_8:
L_080006CC:
    // 0x080006CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080006D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080006D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080006D8: jr          $ra
    // 0x080006DC: nop

    TRACE_RETURN()
    return;
    // 0x080006DC: nop

;}
RECOMP_FUNC void func_08000514_6AECF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000514: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000518: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800051C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000528: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800052C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000530: jalr        $t9
    // 0x08000534: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000534: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x08000538: beq         $v0, $zero, L_08000550
    if (ctx->r2 == 0) {
        // 0x0800053C: lui         $t8, 0x40
        ctx->r24 = S32(0X40 << 16);
            goto L_08000550;
    }
    // 0x0800053C: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08000540: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000544: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000548: b           L_080005E4
    // 0x0800054C: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_080005E4;
    // 0x0800054C: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_08000550:
    // 0x08000550: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000554: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x08000558: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x0800055C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000560: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000564: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800056C: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08000570: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000574: jalr        $t9
    // 0x08000578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800057C: lhu         $t1, 0x5E($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X5E);
    // 0x08000580: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000584: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x08000588: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800058C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x08000590: sh          $t2, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r10;
    // 0x08000594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000598: jalr        $t9
    // 0x0800059C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800059C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x080005A0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x080005A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005A8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080005B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080005B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080005B8: jalr        $t9
    // 0x080005BC: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080005BC: sh          $t3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r11;
    after_3:
    // 0x080005C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005C4: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x080005C8: jalr        $t9
    // 0x080005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080005D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005D4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080005D8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X5F8) << 16);
    // 0x080005DC: jalr        $t9
    // 0x080005E0: addiu       $a0, $a0, 0x5F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X5F8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080005E0: addiu       $a0, $a0, 0x5F8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X5F8));
    after_5:
L_080005E4:
    // 0x080005E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080005E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080005EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x080005F0: jr          $ra
    // 0x080005F4: nop

    TRACE_RETURN()
    return;
    // 0x080005F4: nop

;}
RECOMP_FUNC void func_08000174_6AE954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000178: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800017C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000180: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000184: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x08000188: jalr        $t9
    // 0x0800018C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800018C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08000190: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000194: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000198: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X1B4) << 16);
    // 0x0800019C: jalr        $t9
    // 0x080001A0: addiu       $a0, $a0, 0x1B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X1B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001A0: addiu       $a0, $a0, 0x1B4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X1B4));
    after_1:
    // 0x080001A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080001A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001AC: jr          $ra
    // 0x080001B0: nop

    TRACE_RETURN()
    return;
    // 0x080001B0: nop

;}
RECOMP_FUNC void func_080004AC_6AEC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080004BC: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080004C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080004C4: jalr        $t9
    // 0x080004C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x080004CC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080004D0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080004D8: lw          $v0, 0xE4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XE4);
    // 0x080004DC: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080004E0: beq         $v0, $zero, L_080004EC
    if (ctx->r2 == 0) {
        // 0x080004E4: nop
    
            goto L_080004EC;
    }
    // 0x080004E4: nop

    // 0x080004E8: sb          $t7, 0xD0($v0)
    MEM_B(0XD0, ctx->r2) = ctx->r15;
L_080004EC:
    // 0x080004EC: jalr        $t9
    // 0x080004F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004F0: nop

    after_1:
    // 0x080004F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004F8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080004FC: jalr        $t9
    // 0x08000500: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000500: nop

    after_2:
    // 0x08000504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800050C: jr          $ra
    // 0x08000510: nop

    TRACE_RETURN()
    return;
    // 0x08000510: nop

;}
RECOMP_FUNC void func_08000908_6AF0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800090C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000910: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000914: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000918: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800091C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000920: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000924: jalr        $t9
    // 0x08000928: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000928: lhu         $a0, 0xD0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XD0);
    after_0:
    // 0x0800092C: beq         $v0, $zero, L_08000944
    if (ctx->r2 == 0) {
        // 0x08000930: lui         $t8, 0x40
        ctx->r24 = S32(0X40 << 16);
            goto L_08000944;
    }
    // 0x08000930: lui         $t8, 0x40
    ctx->r24 = S32(0X40 << 16);
    // 0x08000934: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x08000938: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x0800093C: b           L_080009E0
    // 0x08000940: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
        goto L_080009E0;
    // 0x08000940: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
L_08000944:
    // 0x08000944: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000948: ori         $t8, $t8, 0x6E0
    ctx->r24 = ctx->r24 | 0X6E0;
    // 0x0800094C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x08000950: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000954: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000958: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x0800095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000960: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x08000964: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08000968: jalr        $t9
    // 0x0800096C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800096C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08000970: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000974: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800097C: jalr        $t9
    // 0x08000980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x08000984: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000988: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x0800098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000990: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x08000994: jalr        $t9
    // 0x08000998: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000998: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x0800099C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(17, 0XC20) << 16);
    // 0x080009A0: lwc1        $f0, 0xC20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(17, 0XC20));
    // 0x080009A4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x080009A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009AC: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080009B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080009B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080009B8: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080009BC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080009C0: jalr        $t9
    // 0x080009C4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080009C4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    after_4:
    // 0x080009C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(17, 0X9F4) << 16);
    // 0x080009D4: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x080009D8: jalr        $t9
    // 0x080009DC: addiu       $a0, $a0, 0x9F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X9F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080009DC: addiu       $a0, $a0, 0x9F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(17, 0X9F4));
    after_5:
L_080009E0:
    // 0x080009E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080009E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080009E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080009EC: jr          $ra
    // 0x080009F0: nop

    TRACE_RETURN()
    return;
    // 0x080009F0: nop

;}
RECOMP_FUNC void func_08003638_6B2A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003638: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800363C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003640: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003644: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003648: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x0800364C: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x08003650: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08003654: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x08003658: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x0800365C: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x08003660: jalr        $t9
    // 0x08003664: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08003664: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_0:
    // 0x08003668: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800366C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08003670: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x08003674: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08003678: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x0800367C: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    // 0x08003680: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x08003684: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003688: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x0800368C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003690: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X36B0) << 16);
    // 0x08003694: addiu       $a0, $a0, 0x36B0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X36B0));
    // 0x08003698: jalr        $t9
    // 0x0800369C: sw          $t1, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r9;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800369C: sw          $t1, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r9;
    after_1:
    // 0x080036A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080036A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080036A8: jr          $ra
    // 0x080036AC: nop

    TRACE_RETURN()
    return;
    // 0x080036AC: nop

;}
RECOMP_FUNC void func_0800284C_6B1C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800284C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002854: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x08002858: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800285C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08002860: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08002864: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x08002868: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x0800286C: jalr        $v0
    // 0x08002870: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x08002870: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x08002874: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x08002878: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800287C: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08002880: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x08002884: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x08002888: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x0800288C: lui         $a1, 0xC000
    ctx->r5 = S32(0XC000 << 16);
    // 0x08002890: lui         $a2, 0xC040
    ctx->r6 = S32(0XC040 << 16);
    // 0x08002894: jalr        $t9
    // 0x08002898: lui         $a3, 0xC29C
    ctx->r7 = S32(0XC29C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002898: lui         $a3, 0xC29C
    ctx->r7 = S32(0XC29C << 16);
    after_1:
    // 0x0800289C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x080028A0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x080028A4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x080028A8: jalr        $t9
    // 0x080028AC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080028AC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_2:
    // 0x080028B0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x080028B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080028B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080028BC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080028C0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x080028C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x080028C8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x080028CC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080028D0: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x080028D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080028D8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x080028DC: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    // 0x080028E0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x080028E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080028E8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080028EC: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x080028F0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x080028F4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x080028F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080028FC: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x08002900: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x08002904: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x08002908: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800290C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x08002910: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08002914: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08002918: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x0800291C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x08002920: jalr        $t9
    // 0x08002924: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002924: nop

    after_3:
    // 0x08002928: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800292C: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08002930: jalr        $t9
    // 0x08002934: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002934: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x08002938: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800293C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002940: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x08002944: jalr        $t9
    // 0x08002948: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002948: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_5:
    // 0x0800294C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002954: jr          $ra
    // 0x08002958: nop

    TRACE_RETURN()
    return;
    // 0x08002958: nop

;}
RECOMP_FUNC void func_08000490_6AF8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000490: jr          $ra
    // 0x08000494: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x08000494: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_08001D14_6B1124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001D1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001D20: jal         0x08001A18
    // 0x08001D24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001D24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001D28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001D2C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001D30: addiu       $t6, $zero, 0x2F2
    ctx->r14 = ADD32(0, 0X2F2);
    // 0x08001D34: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001D3C: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001D40: jalr        $t9
    // 0x08001D44: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001D44: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001D48: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001D4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001D50: lui         $at, 0xC2BC
    ctx->r1 = S32(0XC2BC << 16);
    // 0x08001D54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001D58: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x08001D5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08001D60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001D64: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001D68: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001D6C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08001D70: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08001D74: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x08001D78: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08001D7C: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08001D80: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08001D84: jalr        $t9
    // 0x08001D88: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001D88: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_2:
    // 0x08001D8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001D90: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001D94: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001D98: jalr        $t9
    // 0x08001D9C: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001D9C: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    after_3:
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
RECOMP_FUNC void func_08001A54_6B0E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001A5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001A60: jal         0x08001A18
    // 0x08001A64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001A64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001A68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001A6C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001A70: addiu       $t6, $zero, 0x2F1
    ctx->r14 = ADD32(0, 0X2F1);
    // 0x08001A74: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001A7C: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001A80: jalr        $t9
    // 0x08001A84: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A84: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001A88: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x08001A8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001A90: lui         $at, 0xC250
    ctx->r1 = S32(0XC250 << 16);
    // 0x08001A94: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08001A98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001A9C: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x08001AA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001AA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001AA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AAC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001AB0: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x08001AB4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x08001AB8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08001ABC: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08001AC0: jalr        $t9
    // 0x08001AC4: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001AC4: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    after_2:
    // 0x08001AC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001ACC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001AD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001AD4: jalr        $t9
    // 0x08001AD8: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001AD8: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    after_3:
    // 0x08001ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001AE4: jr          $ra
    // 0x08001AE8: nop

    TRACE_RETURN()
    return;
    // 0x08001AE8: nop

;}
RECOMP_FUNC void func_0800121C_6B062C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800121C: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x08001220: addiu       $v1, $v1, -0x4E5C
    ctx->r3 = ADD32(ctx->r3, -0X4E5C);
    // 0x08001224: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x08001228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800122C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x08001230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001238: beq         $v0, $at, L_08001260
    if (ctx->r2 == ctx->r1) {
        // 0x0800123C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_08001260;
    }
    // 0x0800123C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001240: bne         $v0, $zero, L_080012AC
    if (ctx->r2 != 0) {
        // 0x08001244: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X12C0) << 16);
            goto L_080012AC;
    }
    // 0x08001244: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X12C0) << 16);
    // 0x08001248: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800124C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001250: jalr        $t9
    // 0x08001254: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X12C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001254: addiu       $a0, $a0, 0x12C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X12C0));
    after_0:
    // 0x08001258: b           L_080012B4
    // 0x0800125C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080012B4;
    // 0x0800125C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001260:
    // 0x08001260: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08001264: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x08001268: jalr        $t9
    // 0x0800126C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800126C: nop

    after_1:
    // 0x08001270: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001274: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08001278: jalr        $t9
    // 0x0800127C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800127C: nop

    after_2:
    // 0x08001280: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001284: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08001288: jalr        $t9
    // 0x0800128C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800128C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    after_3:
    // 0x08001290: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001294: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001298: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1380) << 16);
    // 0x0800129C: jalr        $t9
    // 0x080012A0: addiu       $a0, $a0, 0x1380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1380));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080012A0: addiu       $a0, $a0, 0x1380
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1380));
    after_4:
    // 0x080012A4: b           L_080012B4
    // 0x080012A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080012B4;
    // 0x080012A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080012AC:
    // 0x080012AC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x080012B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080012B4:
    // 0x080012B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080012B8: jr          $ra
    // 0x080012BC: nop

    TRACE_RETURN()
    return;
    // 0x080012BC: nop

;}
RECOMP_FUNC void func_08001BEC_6B0FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001BEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001BF8: jal         0x08001A18
    // 0x08001BFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001BFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001C00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001C04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001C08: addiu       $t6, $zero, 0x2F2
    ctx->r14 = ADD32(0, 0X2F2);
    // 0x08001C0C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001C14: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001C18: jalr        $t9
    // 0x08001C1C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001C1C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001C20: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001C24: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001C28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001C2C: lui         $at, 0xC23C
    ctx->r1 = S32(0XC23C << 16);
    // 0x08001C30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001C34: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x08001C38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001C3C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001C40: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001C44: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001C48: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    // 0x08001C4C: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08001C50: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x08001C54: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08001C58: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08001C5C: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08001C60: jalr        $t9
    // 0x08001C64: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001C64: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_2:
    // 0x08001C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001C70: jr          $ra
    // 0x08001C74: nop

    TRACE_RETURN()
    return;
    // 0x08001C74: nop

;}
RECOMP_FUNC void func_0800181C_6B0C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800181C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001820: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08001824: lw          $t6, -0x39F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39F4);
    // 0x08001828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800182C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001830: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001834: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001838: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800183C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x08001840: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001844: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001848: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x0800184C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1870) << 16);
    // 0x08001850: bc1fl       L_08001864
    if (!c1cs) {
        // 0x08001854: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08001864;
    }
    goto skip_0;
    // 0x08001854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08001858: jalr        $t9
    // 0x0800185C: addiu       $a0, $a0, 0x1870
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1870));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800185C: addiu       $a0, $a0, 0x1870
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1870));
    after_0:
    // 0x08001860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001864:
    // 0x08001864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001868: jr          $ra
    // 0x0800186C: nop

    TRACE_RETURN()
    return;
    // 0x0800186C: nop

;}
RECOMP_FUNC void func_080000EC_6AF4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000F4: lwc1        $f4, 0xDC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x080000F8: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x080000FC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x08000100: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x08000104: lwc1        $f6, 0xE0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x08000108: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x0800010C: lwc1        $f8, 0xE4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x08000110: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x08000114: lhu         $t6, 0xE8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XE8);
    // 0x08000118: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    // 0x0800011C: lhu         $t7, 0xEA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XEA);
    // 0x08000120: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x08000124: lhu         $t8, 0xEC($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XEC);
    // 0x08000128: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x0800012C: lw          $t9, 0x7920($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7920);
    // 0x08000130: beql        $t9, $zero, L_08000174
    if (ctx->r25 == 0) {
        // 0x08000134: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000174;
    }
    goto skip_0;
    // 0x08000134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000138: lw          $v0, -0x321C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X321C);
    // 0x0800013C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000140: beql        $v0, $zero, L_08000174
    if (ctx->r2 == 0) {
        // 0x08000144: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000174;
    }
    goto skip_1;
    // 0x08000144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x08000148: beq         $v0, $at, L_08000170
    if (ctx->r2 == ctx->r1) {
        // 0x0800014C: lui         $t0, 0x801C
        ctx->r8 = S32(0X801C << 16);
            goto L_08000170;
    }
    // 0x0800014C: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x08000150: lw          $t0, 0x792C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X792C);
    // 0x08000154: lbu         $t1, 0xDB($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XDB);
    // 0x08000158: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800015C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000160: bne         $t0, $t1, L_08000170
    if (ctx->r8 != ctx->r9) {
        // 0x08000164: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X180) << 16);
            goto L_08000170;
    }
    // 0x08000164: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X180) << 16);
    // 0x08000168: jalr        $t9
    // 0x0800016C: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X180));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800016C: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X180));
    after_0:
L_08000170:
    // 0x08000170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000174:
    // 0x08000174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000178: jr          $ra
    // 0x0800017C: nop

    TRACE_RETURN()
    return;
    // 0x0800017C: nop

;}
RECOMP_FUNC void func_080008C4_6AFCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080008C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080008CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080008D0: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x080008D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080008D8: jal         0x080004FC
    // 0x080008DC: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x080008DC: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x080008E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008E4: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080008E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080008EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080008F0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080008F4: jalr        $t9
    // 0x080008F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080008F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080008FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000900: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000904: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000908: jalr        $t9
    // 0x0800090C: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800090C: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x08000910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000918: jr          $ra
    // 0x0800091C: nop

    TRACE_RETURN()
    return;
    // 0x0800091C: nop

;}
RECOMP_FUNC void func_08000B90_6AFFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000B94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000B9C: lui         $a1, 0x1000
    ctx->r5 = S32(0X1000 << 16);
    // 0x08000BA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000BA4: jal         0x080004FC
    // 0x08000BA8: ori         $a1, $a1, 0x661
    ctx->r5 = ctx->r5 | 0X661;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000BA8: ori         $a1, $a1, 0x661
    ctx->r5 = ctx->r5 | 0X661;
    after_0:
    // 0x08000BAC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BB0: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000BB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000BB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000BBC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000BC0: jalr        $t9
    // 0x08000BC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000BC8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BCC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000BD0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000BD4: jalr        $t9
    // 0x08000BD8: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000BD8: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x08000BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000BE4: jr          $ra
    // 0x08000BE8: nop

    TRACE_RETURN()
    return;
    // 0x08000BE8: nop

;}
RECOMP_FUNC void func_08000CD0_6B00E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000CD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000CDC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000CE0: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x08000CE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CEC: beq         $v1, $zero, L_08000D14
    if (ctx->r3 == 0) {
        // 0x08000CF0: lui         $a1, 0x1280
        ctx->r5 = S32(0X1280 << 16);
            goto L_08000D14;
    }
    // 0x08000CF0: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x08000CF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000CF8: beq         $v1, $at, L_08000E38
    if (ctx->r3 == ctx->r1) {
        // 0x08000CFC: addiu       $v0, $s0, 0xD0
        ctx->r2 = ADD32(ctx->r16, 0XD0);
            goto L_08000E38;
    }
    // 0x08000CFC: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000D00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000D04: beq         $v1, $at, L_08000E58
    if (ctx->r3 == ctx->r1) {
        // 0x08000D08: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000E58;
    }
    // 0x08000D08: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000D0C: b           L_08000EBC
    // 0x08000D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000EBC;
    // 0x08000D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000D14:
    // 0x08000D14: jal         0x080004FC
    // 0x08000D18: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000D18: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x08000D1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D20: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000D2C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000D30: jalr        $t9
    // 0x08000D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000D38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D3C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000D40: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x08000D44: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x08000D48: jalr        $t9
    // 0x08000D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08000D50: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000D54: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000D58: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1FFC) << 16);
    // 0x08000D5C: addiu       $a1, $a1, 0x1FFC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1FFC));
    // 0x08000D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D64: jalr        $t9
    // 0x08000D68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000D68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x08000D6C: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x08000D70: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D74: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000D78: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000D7C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08000D80: jalr        $t9
    // 0x08000D84: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000D84: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_4:
    // 0x08000D88: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x08000D8C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08000D90: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x08000D94: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x08000D98: lbu         $t7, 0xD8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000D9C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000DA0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000DA4: sb          $t7, 0x74($a1)
    MEM_B(0X74, ctx->r5) = ctx->r15;
    // 0x08000DA8: lbu         $t8, 0xD8($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XD8);
    // 0x08000DAC: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    // 0x08000DB0: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08000DB4: jalr        $t9
    // 0x08000DB8: sb          $t0, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000DB8: sb          $t0, 0xD8($v1)
    MEM_B(0XD8, ctx->r3) = ctx->r8;
    after_5:
    // 0x08000DBC: beq         $v0, $zero, L_08000E00
    if (ctx->r2 == 0) {
        // 0x08000DC0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000E00;
    }
    // 0x08000DC0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000DC4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000DC8: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08000DCC: jalr        $t9
    // 0x08000DD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000DD0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x08000DD4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DD8: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000DDC: jalr        $t9
    // 0x08000DE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000DE0: nop

    after_7:
    // 0x08000DE4: addiu       $v0, $s0, 0xD0
    ctx->r2 = ADD32(ctx->r16, 0XD0);
    // 0x08000DE8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x08000DEC: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x08000DF0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x08000DF4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000DF8: b           L_08000EB8
    // 0x08000DFC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_08000EB8;
    // 0x08000DFC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_08000E00:
    // 0x08000E00: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000E04: jalr        $t9
    // 0x08000E08: addiu       $a0, $zero, 0x34F
    ctx->r4 = ADD32(0, 0X34F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000E08: addiu       $a0, $zero, 0x34F
    ctx->r4 = ADD32(0, 0X34F);
    after_8:
    // 0x08000E0C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000E10: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000E14: jalr        $t9
    // 0x08000E18: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000E18: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x08000E1C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E20: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000E24: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0XECC) << 16);
    // 0x08000E28: jalr        $t9
    // 0x08000E2C: addiu       $a0, $a0, 0xECC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XECC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000E2C: addiu       $a0, $a0, 0xECC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XECC));
    after_10:
    // 0x08000E30: b           L_08000EBC
    // 0x08000E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000EBC;
    // 0x08000E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000E38:
    // 0x08000E38: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x08000E3C: addiu       $t4, $a0, -0x1
    ctx->r12 = ADD32(ctx->r4, -0X1);
    // 0x08000E40: bne         $a0, $zero, L_08000EB8
    if (ctx->r4 != 0) {
        // 0x08000E44: sw          $t4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r12;
            goto L_08000EB8;
    }
    // 0x08000E44: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x08000E48: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x08000E4C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x08000E50: b           L_08000EB8
    // 0x08000E54: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_08000EB8;
    // 0x08000E54: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_08000E58:
    // 0x08000E58: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000E5C: jalr        $t9
    // 0x08000E60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000E60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x08000E64: beq         $v0, $zero, L_08000EB8
    if (ctx->r2 == 0) {
        // 0x08000E68: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_08000EB8;
    }
    // 0x08000E68: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x08000E6C: lhu         $t7, 0x7AB2($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7AB2);
    // 0x08000E70: addiu       $at, $zero, 0x1B8
    ctx->r1 = ADD32(0, 0X1B8);
    // 0x08000E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E78: bne         $t7, $at, L_08000EA4
    if (ctx->r15 != ctx->r1) {
        // 0x08000E7C: addiu       $a1, $zero, 0x266
        ctx->r5 = ADD32(0, 0X266);
            goto L_08000EA4;
    }
    // 0x08000E7C: addiu       $a1, $zero, 0x266
    ctx->r5 = ADD32(0, 0X266);
    // 0x08000E80: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E84: addiu       $t9, $t9, 0x1638
    ctx->r25 = ADD32(ctx->r25, 0X1638);
    // 0x08000E88: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(18, 0XF28) << 16);
    // 0x08000E8C: addiu       $a2, $a2, 0xF28
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(18, 0XF28));
    // 0x08000E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E94: jalr        $t9
    // 0x08000E98: addiu       $a1, $zero, 0x262
    ctx->r5 = ADD32(0, 0X262);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000E98: addiu       $a1, $zero, 0x262
    ctx->r5 = ADD32(0, 0X262);
    after_12:
    // 0x08000E9C: b           L_08000EBC
    // 0x08000EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000EBC;
    // 0x08000EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000EA4:
    // 0x08000EA4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EA8: addiu       $t9, $t9, 0x1638
    ctx->r25 = ADD32(ctx->r25, 0X1638);
    // 0x08000EAC: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(18, 0XF28) << 16);
    // 0x08000EB0: jalr        $t9
    // 0x08000EB4: addiu       $a2, $a2, 0xF28
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(18, 0XF28));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000EB4: addiu       $a2, $a2, 0xF28
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(18, 0XF28));
    after_13:
L_08000EB8:
    // 0x08000EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000EBC:
    // 0x08000EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000EC4: jr          $ra
    // 0x08000EC8: nop

    TRACE_RETURN()
    return;
    // 0x08000EC8: nop

;}
RECOMP_FUNC void func_080004D4_6AF8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004E0: addiu       $t9, $t9, 0xF70
    ctx->r25 = ADD32(ctx->r25, 0XF70);
    // 0x080004E4: jalr        $t9
    // 0x080004E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080004EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004F4: jr          $ra
    // 0x080004F8: nop

    TRACE_RETURN()
    return;
    // 0x080004F8: nop

;}
RECOMP_FUNC void func_08000F88_6B0398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000F8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000F94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08000F98: lui         $t6, 0x1000
    ctx->r14 = S32(0X1000 << 16);
    // 0x08000F9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FA0: ori         $t6, $t6, 0x261
    ctx->r14 = ctx->r14 | 0X261;
    // 0x08000FA4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x08000FA8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000FAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000FB0: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08000FB4: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000FB8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000FBC: jalr        $t9
    // 0x08000FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000FC4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000FC8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000FD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x08000FD4: jalr        $t9
    // 0x08000FD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x08000FDC: bne         $v0, $zero, L_08000FFC
    if (ctx->r2 != 0) {
        // 0x08000FE0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000FFC;
    }
    // 0x08000FE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000FE4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FE8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000FEC: jalr        $t9
    // 0x08000FF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000FF0: nop

    after_2:
    // 0x08000FF4: b           L_0800104C
    // 0x08000FF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_0800104C;
    // 0x08000FF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000FFC:
    // 0x08000FFC: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x08001000: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001004: sh          $t8, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r24;
    // 0x08001008: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800100C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x08001010: jalr        $t9
    // 0x08001014: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001014: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_3:
    // 0x08001018: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x0800101C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08001020: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08001024: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001028: lbu         $t0, 0xD8($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XD8);
    // 0x0800102C: sb          $t0, 0x74($v1)
    MEM_B(0X74, ctx->r3) = ctx->r8;
    // 0x08001030: lbu         $t1, 0xD8($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD8);
    // 0x08001034: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08001038: sb          $t2, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r10;
    // 0x0800103C: sw          $s0, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r16;
    // 0x08001040: lhu         $t3, 0xD6($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XD6);
    // 0x08001044: sw          $t3, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = ctx->r11;
    // 0x08001048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_0800104C:
    // 0x0800104C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08001050: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08001054: jr          $ra
    // 0x08001058: nop

    TRACE_RETURN()
    return;
    // 0x08001058: nop

;}
RECOMP_FUNC void func_08002644_6B1A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002644: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08002648: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x0800264C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x08002650: lw          $a1, -0x39FC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X39FC);
    // 0x08002654: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002658: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800265C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x08002660: lw          $t6, 0xE0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XE0);
    // 0x08002664: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x08002668: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x0800266C: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x08002670: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08002674: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002678: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0800267C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002680: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08002684: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002688: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x0800268C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x08002690: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x08002694: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x08002698: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x0800269C: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080026A0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x080026A4: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x080026A8: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x080026AC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080026B0: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080026B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080026B8: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x080026BC: jalr        $t9
    // 0x080026C0: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080026C0: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x080026C4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x080026C8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x080026CC: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x080026D0: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x080026D4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x080026D8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080026DC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080026E0: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x080026E4: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x080026E8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x080026EC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080026F0: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x080026F4: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x080026F8: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x080026FC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08002700: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002704: jalr        $t9
    // 0x08002708: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002708: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_1:
    // 0x0800270C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08002710: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x08002714: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x08002718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800271C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x08002720: jalr        $v0
    // 0x08002724: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x08002724: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x08002728: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x0800272C: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08002730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002734: lwc1        $f16, 0xE0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XE0);
    // 0x08002738: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x0800273C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x08002740: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08002744: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x08002748: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x0800274C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08002750: jal         0x0800260C
    // 0x08002754: nop

    func_0800260C_6B1A1C(rdram, ctx);
        goto after_3;
    // 0x08002754: nop

    after_3:
    // 0x08002758: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x0800275C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08002760: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x08002764: lwc1        $f0, 0x18($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X18);
    // 0x08002768: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x0800276C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x08002770: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x08002774: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x08002778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800277C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x08002780: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x08002784: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08002788: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x0800278C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x08002790: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x08002794: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08002798: div.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x0800279C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x080027A0: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x080027A4: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x080027A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080027AC: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x080027B0: div.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x080027B4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x080027B8: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080027BC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x080027C0: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x080027C4: div.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x080027C8: jalr        $t9
    // 0x080027CC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080027CC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x080027D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x080027D4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x080027D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080027DC: lwc1        $f6, 0x14($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X14);
    // 0x080027E0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080027E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080027E8: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x080027EC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x080027F0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x080027F4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080027F8: jalr        $t9
    // 0x080027FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080027FC: nop

    after_5:
    // 0x08002800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002808: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x0800280C: jr          $ra
    // 0x08002810: nop

    TRACE_RETURN()
    return;
    // 0x08002810: nop

;}
RECOMP_FUNC void func_080010A4_6B04B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080010AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080010B4: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080010B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080010BC: jalr        $t9
    // 0x080010C0: addiu       $a0, $zero, 0x352
    ctx->r4 = ADD32(0, 0X352);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010C0: addiu       $a0, $zero, 0x352
    ctx->r4 = ADD32(0, 0X352);
    after_0:
    // 0x080010C4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1A54) << 16);
    // 0x080010C8: addiu       $a1, $a1, 0x1A54
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1A54));
    // 0x080010CC: jal         0x08000F88
    // 0x080010D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_08000F88_6B0398(rdram, ctx);
        goto after_1;
    // 0x080010D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x080010D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010D8: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080010DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080010E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080010E4: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080010E8: jalr        $t9
    // 0x080010EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x080010F0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010F4: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080010F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080010FC: jalr        $t9
    // 0x08001100: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001100: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_3:
    // 0x08001104: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001108: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800110C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X105C) << 16);
    // 0x08001110: jalr        $t9
    // 0x08001114: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001114: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    after_4:
    // 0x08001118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800111C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001120: jr          $ra
    // 0x08001124: nop

    TRACE_RETURN()
    return;
    // 0x08001124: nop

;}
RECOMP_FUNC void func_08003438_6B2848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800343C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003440: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003444: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003448: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800344C: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003450: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x08003454: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x08003458: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800345C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08003460: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x08003464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003468: jalr        $t9
    // 0x0800346C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800346C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003470: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08003474: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003478: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x0800347C: lbu         $t8, 0xD0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD0);
    // 0x08003480: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x08003484: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08003488: beq         $t8, $zero, L_080034AC
    if (ctx->r24 == 0) {
        // 0x0800348C: nop
    
            goto L_080034AC;
    }
    // 0x0800348C: nop

    // 0x08003490: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x08003494: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003498: nop

    // 0x0800349C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x080034A0: nop

    // 0x080034A4: bc1fl       L_080034B8
    if (!c1cs) {
        // 0x080034A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_080034B8;
    }
    goto skip_0;
    // 0x080034A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_080034AC:
    // 0x080034AC: jalr        $t9
    // 0x080034B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080034B0: nop

    after_1:
    // 0x080034B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080034B8:
    // 0x080034B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080034BC: jr          $ra
    // 0x080034C0: nop

    TRACE_RETURN()
    return;
    // 0x080034C0: nop

    // 0x080034C4: jr          $ra
    // 0x080034C8: nop

    TRACE_RETURN()
    return;
    // 0x080034C8: nop

;}
RECOMP_FUNC void func_08001FFC_6B140C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001FFC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08002000: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08002004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800200C: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08002010: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08002014: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x08002018: addiu       $t6, $zero, 0x30D
    ctx->r14 = ADD32(0, 0X30D);
    // 0x0800201C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002020: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08002024: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08002028: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x0800202C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002030: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08002034: jalr        $t9
    // 0x08002038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x0800203C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08002040: lui         $at, 0xC208
    ctx->r1 = S32(0XC208 << 16);
    // 0x08002044: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002048: lui         $at, 0xC24C
    ctx->r1 = S32(0XC24C << 16);
    // 0x0800204C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08002050: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08002054: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002058: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800205C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X2090) << 16);
    // 0x08002060: addiu       $a0, $a0, 0x2090
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2090));
    // 0x08002064: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08002068: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x0800206C: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08002070: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08002074: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08002078: jalr        $t9
    // 0x0800207C: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800207C: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_1:
    // 0x08002080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002088: jr          $ra
    // 0x0800208C: nop

    TRACE_RETURN()
    return;
    // 0x0800208C: nop

;}
RECOMP_FUNC void func_08001F90_6B13A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001F98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001F9C: jal         0x08001A18
    // 0x08001FA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001FA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08001FA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001FA8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001FAC: addiu       $t6, $zero, 0x30C
    ctx->r14 = ADD32(0, 0X30C);
    // 0x08001FB0: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001FB8: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001FBC: jalr        $t9
    // 0x08001FC0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001FC0: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001FC4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08001FC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001FCC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001FD0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001FD4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001FD8: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    // 0x08001FDC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x08001FE0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x08001FE4: jalr        $t9
    // 0x08001FE8: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001FE8: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    after_2:
    // 0x08001FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001FF4: jr          $ra
    // 0x08001FF8: nop

    TRACE_RETURN()
    return;
    // 0x08001FF8: nop

;}
RECOMP_FUNC void func_0800246C_6B187C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800246C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08002470: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x08002474: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x08002478: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800247C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002480: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x08002484: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x08002488: lw          $t8, 0xE0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XE0);
    // 0x0800248C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08002490: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x08002494: bne         $t8, $zero, L_0800253C
    if (ctx->r24 != 0) {
        // 0x08002498: addiu       $s0, $a0, 0xD0
        ctx->r16 = ADD32(ctx->r4, 0XD0);
            goto L_0800253C;
    }
    // 0x08002498: addiu       $s0, $a0, 0xD0
    ctx->r16 = ADD32(ctx->r4, 0XD0);
    // 0x0800249C: lui         $v1, 0x8001
    ctx->r3 = S32(0X8001 << 16);
    // 0x080024A0: addiu       $v1, $v1, 0x24A0
    ctx->r3 = ADD32(ctx->r3, 0X24A0);
    // 0x080024A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080024A8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x080024AC: jalr        $v1
    // 0x080024B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x080024B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_0:
    // 0x080024B4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x080024B8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080024BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080024C0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080024C4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080024C8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080024CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080024D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080024D4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080024D8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080024DC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x080024E0: jalr        $t9
    // 0x080024E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080024E4: nop

    after_1:
    // 0x080024E8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x080024EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080024F0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x080024F4: jalr        $t9
    // 0x080024F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080024F8: nop

    after_2:
    // 0x080024FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08002500: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08002504: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08002508: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x0800250C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002510: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08002514: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08002518: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x0800251C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x08002520: jal         0x0800260C
    // 0x08002524: nop

    func_0800260C_6B1A1C(rdram, ctx);
        goto after_3;
    // 0x08002524: nop

    after_3:
    // 0x08002528: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800252C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002530: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X256C) << 16);
    // 0x08002534: jalr        $t9
    // 0x08002538: addiu       $a0, $a0, 0x256C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X256C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002538: addiu       $a0, $a0, 0x256C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X256C));
    after_4:
L_0800253C:
    // 0x0800253C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x08002540: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002544: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002548: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x0800254C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x08002550: jalr        $t9
    // 0x08002554: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002554: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x08002558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800255C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002560: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08002564: jr          $ra
    // 0x08002568: nop

    TRACE_RETURN()
    return;
    // 0x08002568: nop

;}
RECOMP_FUNC void func_08002090_6B14A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002094: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002098: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800209C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x080020A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080020A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080020A8: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x080020AC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x080020B0: jalr        $t9
    // 0x080020B4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080020B4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x080020B8: beq         $v0, $zero, L_080020D0
    if (ctx->r2 == 0) {
        // 0x080020BC: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_080020D0;
    }
    // 0x080020BC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x080020C0: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x080020C4: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x080020C8: b           L_080020E4
    // 0x080020CC: sw          $t6, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r14;
        goto L_080020E4;
    // 0x080020CC: sw          $t6, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r14;
L_080020D0:
    // 0x080020D0: lw          $t7, 0x60($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X60);
    // 0x080020D4: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x080020D8: ori         $at, $at, 0xFFDF
    ctx->r1 = ctx->r1 | 0XFFDF;
    // 0x080020DC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x080020E0: sw          $t8, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r24;
L_080020E4:
    // 0x080020E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080020E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080020EC: jr          $ra
    // 0x080020F0: nop

    TRACE_RETURN()
    return;
    // 0x080020F0: nop

;}
RECOMP_FUNC void func_0800256C_6B197C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800256C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002570: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x08002574: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x08002578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800257C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002580: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002584: lw          $a1, 0xE0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XE0);
    // 0x08002588: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x0800258C: addiu       $s0, $a3, 0xD0
    ctx->r16 = ADD32(ctx->r7, 0XD0);
    // 0x08002590: beq         $a1, $zero, L_080025C0
    if (ctx->r5 == 0) {
        // 0x08002594: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_080025C0;
    }
    // 0x08002594: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002598: addiu       $s0, $a3, 0xD0
    ctx->r16 = ADD32(ctx->r7, 0XD0);
    // 0x0800259C: jal         0x08002644
    // 0x080025A0: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    func_08002644_6B1A54(rdram, ctx);
        goto after_0;
    // 0x080025A0: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x080025A4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025A8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X246C) << 16);
    // 0x080025B0: jalr        $t9
    // 0x080025B4: addiu       $a0, $a0, 0x246C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X246C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025B4: addiu       $a0, $a0, 0x246C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X246C));
    after_1:
    // 0x080025B8: b           L_080025E4
    // 0x080025BC: nop

        goto L_080025E4;
    // 0x080025BC: nop

L_080025C0:
    // 0x080025C0: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x080025C4: jalr        $t9
    // 0x080025C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080025C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x080025CC: beq         $v0, $zero, L_080025E4
    if (ctx->r2 == 0) {
        // 0x080025D0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X2388) << 16);
            goto L_080025E4;
    }
    // 0x080025D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X2388) << 16);
    // 0x080025D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025DC: jalr        $t9
    // 0x080025E0: addiu       $a0, $a0, 0x2388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2388));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080025E0: addiu       $a0, $a0, 0x2388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2388));
    after_3:
L_080025E4:
    // 0x080025E4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080025E8: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080025EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080025F0: jalr        $t9
    // 0x080025F4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080025F4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_4:
    // 0x080025F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080025FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002604: jr          $ra
    // 0x08002608: nop

    TRACE_RETURN()
    return;
    // 0x08002608: nop

;}
RECOMP_FUNC void func_080014B0_6B08C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080014B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080014B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080014BC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1C78) << 16);
    // 0x080014C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080014C4: jal         0x08000F88
    // 0x080014C8: addiu       $a1, $a1, 0x1C78
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1C78));
    func_08000F88_6B0398(rdram, ctx);
        goto after_0;
    // 0x080014C8: addiu       $a1, $a1, 0x1C78
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1C78));
    after_0:
    // 0x080014CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014D0: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080014D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080014D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080014DC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080014E0: jalr        $t9
    // 0x080014E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080014E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080014E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014EC: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x080014F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080014F4: jalr        $t9
    // 0x080014F8: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080014F8: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_2:
    // 0x080014FC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001500: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001504: jalr        $t9
    // 0x08001508: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001508: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_3:
    // 0x0800150C: beq         $v0, $zero, L_08001538
    if (ctx->r2 == 0) {
        // 0x08001510: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X1568) << 16);
            goto L_08001538;
    }
    // 0x08001510: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1568) << 16);
    // 0x08001514: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x08001518: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800151C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001520: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1620) << 16);
    // 0x08001524: addiu       $a0, $a0, 0x1620
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1620));
    // 0x08001528: jalr        $t9
    // 0x0800152C: sw          $zero, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800152C: sw          $zero, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = 0;
    after_4:
    // 0x08001530: b           L_08001548
    // 0x08001534: nop

        goto L_08001548;
    // 0x08001534: nop

L_08001538:
    // 0x08001538: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800153C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001540: jalr        $t9
    // 0x08001544: addiu       $a0, $a0, 0x1568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1568));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001544: addiu       $a0, $a0, 0x1568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1568));
    after_5:
L_08001548:
    // 0x08001548: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800154C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08001550: jalr        $t9
    // 0x08001554: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001554: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_6:
    // 0x08001558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800155C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001560: jr          $ra
    // 0x08001564: nop

    TRACE_RETURN()
    return;
    // 0x08001564: nop

;}
RECOMP_FUNC void func_08000320_6AF730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800032C: jal         0x08000394
    // 0x08000330: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08000394_6AF7A4(rdram, ctx);
        goto after_0;
    // 0x08000330: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000334: jal         0x08000490
    // 0x08000338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_08000490_6AF8A0(rdram, ctx);
        goto after_1;
    // 0x08000338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x0800033C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x08000340: lw          $t6, -0x321C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X321C);
    // 0x08000344: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08000348: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x0800034C: beql        $t6, $at, L_08000388
    if (ctx->r14 == ctx->r1) {
        // 0x08000350: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000388;
    }
    goto skip_0;
    // 0x08000350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000354: lw          $t7, 0x7920($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7920);
    // 0x08000358: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x0800035C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X274) << 16);
    // 0x08000360: beq         $t7, $zero, L_08000374
    if (ctx->r15 == 0) {
        // 0x08000364: lui         $t8, 0x801C
        ctx->r24 = S32(0X801C << 16);
            goto L_08000374;
    }
    // 0x08000364: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x08000368: lw          $t8, 0x792C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X792C);
    // 0x0800036C: lbu         $t0, 0xDB($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XDB);
    // 0x08000370: beq         $t8, $t0, L_08000384
    if (ctx->r24 == ctx->r8) {
        // 0x08000374: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08000384;
    }
L_08000374:
    // 0x08000374: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000378: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800037C: jalr        $t9
    // 0x08000380: addiu       $a0, $a0, 0x274
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X274));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000380: addiu       $a0, $a0, 0x274
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X274));
    after_2:
L_08000384:
    // 0x08000384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000388:
    // 0x08000388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800038C: jr          $ra
    // 0x08000390: nop

    TRACE_RETURN()
    return;
    // 0x08000390: nop

;}
RECOMP_FUNC void func_08000F28_6B0338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000F2C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000F34: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x08000F38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000F3C: jalr        $t9
    // 0x08000F40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000F44: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F48: addiu       $t9, $t9, 0x3E40
    ctx->r25 = ADD32(ctx->r25, 0X3E40);
    // 0x08000F4C: jalr        $t9
    // 0x08000F50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000F50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x08000F54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000F58: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000F5C: jalr        $t9
    // 0x08000F60: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000F60: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x08000F64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000F68: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000F6C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0XECC) << 16);
    // 0x08000F70: jalr        $t9
    // 0x08000F74: addiu       $a0, $a0, 0xECC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XECC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F74: addiu       $a0, $a0, 0xECC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0XECC));
    after_3:
    // 0x08000F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F80: jr          $ra
    // 0x08000F84: nop

    TRACE_RETURN()
    return;
    // 0x08000F84: nop

;}
RECOMP_FUNC void func_0800172C_6B0B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800172C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001730: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001738: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x0800173C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001740: jalr        $t9
    // 0x08001744: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001744: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001748: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800174C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001750: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1568) << 16);
    // 0x08001754: jalr        $t9
    // 0x08001758: addiu       $a0, $a0, 0x1568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1568));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001758: addiu       $a0, $a0, 0x1568
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1568));
    after_1:
    // 0x0800175C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001764: jr          $ra
    // 0x08001768: nop

    TRACE_RETURN()
    return;
    // 0x08001768: nop

;}
RECOMP_FUNC void func_08002144_6B1554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002144: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08002148: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x0800214C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x08002150: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002154: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x08002158: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800215C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x08002160: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x08002164: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x08002168: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x0800216C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x08002170: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x08002174: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x08002178: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x0800217C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08002180: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x08002184: lhu         $t0, 0xD4($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XD4);
    // 0x08002188: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x0800218C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002190: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x08002194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002198: bgez        $t0, L_080021B0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x0800219C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_080021B0;
    }
    // 0x0800219C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080021A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080021A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080021A8: nop

    // 0x080021AC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_080021B0:
    // 0x080021B0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x080021B4: lhu         $t1, 0xD6($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0XD6);
    // 0x080021B8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080021BC: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x080021C0: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x080021C4: bgez        $t1, L_080021DC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x080021C8: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_080021DC;
    }
    // 0x080021C8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x080021CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080021D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080021D4: nop

    // 0x080021D8: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_080021DC:
    // 0x080021DC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x080021E0: lhu         $t2, 0xD8($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0XD8);
    // 0x080021E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x080021E8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x080021EC: bgez        $t2, L_08002200
    if (SIGNED(ctx->r10) >= 0) {
        // 0x080021F0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_08002200;
    }
    // 0x080021F0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x080021F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080021F8: nop

    // 0x080021FC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_08002200:
    // 0x08002200: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x08002204: lhu         $t3, 0xDA($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0XDA);
    // 0x08002208: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x0800220C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x08002210: bgez        $t3, L_08002224
    if (SIGNED(ctx->r11) >= 0) {
        // 0x08002214: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_08002224;
    }
    // 0x08002214: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08002218: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800221C: nop

    // 0x08002220: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_08002224:
    // 0x08002224: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x08002228: sw          $zero, 0x60($s1)
    MEM_W(0X60, ctx->r17) = 0;
    // 0x0800222C: sw          $t4, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r12;
    // 0x08002230: jalr        $t9
    // 0x08002234: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002234: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x08002238: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x0800223C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002240: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08002244: sll         $t5, $a1, 6
    ctx->r13 = S32(ctx->r5 << 6);
    // 0x08002248: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x0800224C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x08002250: jalr        $t9
    // 0x08002254: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002254: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x08002258: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x0800225C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08002260: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08002264: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08002268: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x0800226C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08002270: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08002274: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002278: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x0800227C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08002280: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x08002284: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x08002288: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x0800228C: jalr        $t9
    // 0x08002290: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002290: nop

    after_2:
    // 0x08002294: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08002298: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x0800229C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x080022A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x080022A4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080022A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022AC: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x080022B0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x080022B4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080022B8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x080022BC: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x080022C0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x080022C4: jalr        $t9
    // 0x080022C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080022C8: nop

    after_3:
    // 0x080022CC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x080022D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080022D4: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x080022D8: sw          $a1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r5;
    // 0x080022DC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x080022E0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x080022E4: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x080022E8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x080022EC: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x080022F0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x080022F4: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x080022F8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x080022FC: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    // 0x08002300: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x08002304: jalr        $t9
    // 0x08002308: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002308: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x0800230C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002310: addiu       $t9, $t9, 0x2938
    ctx->r25 = ADD32(ctx->r25, 0X2938);
    // 0x08002314: jalr        $t9
    // 0x08002318: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002318: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x0800231C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002320: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002324: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002328: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x0800232C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x08002330: addiu       $t0, $zero, 0x138
    ctx->r8 = ADD32(0, 0X138);
    // 0x08002334: addiu       $t1, $zero, 0xE0
    ctx->r9 = ADD32(0, 0XE0);
    // 0x08002338: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x0800233C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X2814) << 16);
    // 0x08002340: sh          $t7, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r15;
    // 0x08002344: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    // 0x08002348: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
    // 0x0800234C: sh          $t1, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r9;
    // 0x08002350: addiu       $a1, $a1, 0x2814
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X2814));
    // 0x08002354: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08002358: jalr        $t9
    // 0x0800235C: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800235C: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    after_6:
    // 0x08002360: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002364: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002368: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X2388) << 16);
    // 0x0800236C: jalr        $t9
    // 0x08002370: addiu       $a0, $a0, 0x2388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2388));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002370: addiu       $a0, $a0, 0x2388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2388));
    after_7:
    // 0x08002374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002378: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x0800237C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08002380: jr          $ra
    // 0x08002384: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x08002384: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_08001A18_6B0E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001A18: lw          $t8, 0xD4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD4);
    // 0x08001A1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001A20: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001A24: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001A28: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001A2C: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x08001A30: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08001A34: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001A38: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08001A3C: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    // 0x08001A40: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
    // 0x08001A44: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x08001A48: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x08001A4C: jr          $ra
    // 0x08001A50: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x08001A50: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_080005C4_6AF9D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080005CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005D0: lui         $a1, 0x1000
    ctx->r5 = S32(0X1000 << 16);
    // 0x080005D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080005D8: jal         0x080004FC
    // 0x080005DC: ori         $a1, $a1, 0x661
    ctx->r5 = ctx->r5 | 0X661;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x080005DC: ori         $a1, $a1, 0x661
    ctx->r5 = ctx->r5 | 0X661;
    after_0:
    // 0x080005E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080005E4: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x080005E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080005EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080005F0: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080005F4: jalr        $t9
    // 0x080005F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080005F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x080005FC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000600: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000604: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000608: jalr        $t9
    // 0x0800060C: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800060C: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x08000610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000618: jr          $ra
    // 0x0800061C: nop

    TRACE_RETURN()
    return;
    // 0x0800061C: nop

;}
RECOMP_FUNC void func_080037EC_6B2BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x080037F0: jr          $ra
    // 0x080037F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x080037F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08001938_6B0D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800193C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001944: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(18, 0X1EF0) << 16);
    // 0x08001948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800194C: jal         0x08000F88
    // 0x08001950: addiu       $a1, $a1, 0x1EF0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1EF0));
    func_08000F88_6B0398(rdram, ctx);
        goto after_0;
    // 0x08001950: addiu       $a1, $a1, 0x1EF0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(18, 0X1EF0));
    after_0:
    // 0x08001954: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001958: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x0800195C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001964: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001968: jalr        $t9
    // 0x0800196C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800196C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08001970: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001974: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001978: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800197C: jalr        $t9
    // 0x08001980: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001980: lui         $a1, 0x3FA0
    ctx->r5 = S32(0X3FA0 << 16);
    after_2:
    // 0x08001984: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001988: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800198C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X105C) << 16);
    // 0x08001990: jalr        $t9
    // 0x08001994: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001994: addiu       $a0, $a0, 0x105C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X105C));
    after_3:
    // 0x08001998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800199C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080019A0: jr          $ra
    // 0x080019A4: nop

    TRACE_RETURN()
    return;
    // 0x080019A4: nop

;}
RECOMP_FUNC void func_08000AD8_6AFEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000ADC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AE4: lui         $a1, 0x1280
    ctx->r5 = S32(0X1280 << 16);
    // 0x08000AE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000AEC: jal         0x080004FC
    // 0x08000AF0: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    func_080004FC_6AF90C(rdram, ctx);
        goto after_0;
    // 0x08000AF0: ori         $a1, $a1, 0x761
    ctx->r5 = ctx->r5 | 0X761;
    after_0:
    // 0x08000AF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AF8: addiu       $t9, $t9, 0x1C0C
    ctx->r25 = ADD32(ctx->r25, 0X1C0C);
    // 0x08000AFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B04: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000B08: jalr        $t9
    // 0x08000B0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000B10: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B14: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B18: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X59C) << 16);
    // 0x08000B1C: jalr        $t9
    // 0x08000B20: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B20: addiu       $a0, $a0, 0x59C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X59C));
    after_2:
    // 0x08000B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000B2C: jr          $ra
    // 0x08000B30: nop

    TRACE_RETURN()
    return;
    // 0x08000B30: nop

;}
RECOMP_FUNC void func_08003304_6B2714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003304: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08003308: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800330C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003310: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003314: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08003318: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800331C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x08003320: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08003324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08003328: jalr        $t9
    // 0x0800332C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800332C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08003330: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08003334: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08003338: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x0800333C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x08003340: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x08003344: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x08003348: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x0800334C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003350: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x08003354: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003358: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X3378) << 16);
    // 0x0800335C: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X3378));
    // 0x08003360: jalr        $t9
    // 0x08003364: sw          $t0, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003364: sw          $t0, 0x60($t1)
    MEM_W(0X60, ctx->r9) = ctx->r8;
    after_1:
    // 0x08003368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x0800336C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08003370: jr          $ra
    // 0x08003374: nop

    TRACE_RETURN()
    return;
    // 0x08003374: nop

;}
RECOMP_FUNC void func_080037F8_6B2C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080037FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003800: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08003804: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x08003808: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800380C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08003810: addiu       $t9, $t9, 0x6ED0
    ctx->r25 = ADD32(ctx->r25, 0X6ED0);
    // 0x08003814: lw          $a1, 0xD4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD4);
    // 0x08003818: jalr        $t9
    // 0x0800381C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800381C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x08003820: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(18, 0X3B88) << 16);
    // 0x08003824: lwc1        $f0, 0x3B88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(18, 0X3B88));
    // 0x08003828: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800382C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003830: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003834: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x08003838: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    // 0x0800383C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x08003840: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08003844: jalr        $t9
    // 0x08003848: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08003848: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x0800384C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003854: jr          $ra
    // 0x08003858: nop

    TRACE_RETURN()
    return;
    // 0x08003858: nop

;}
RECOMP_FUNC void func_080034CC_6B28DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080034CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080034D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080034D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080034D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080034DC: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x080034E0: addiu       $t8, $zero, 0x222
    ctx->r24 = ADD32(0, 0X222);
    // 0x080034E4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080034E8: bne         $v0, $zero, L_08003560
    if (ctx->r2 != 0) {
        // 0x080034EC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08003560;
    }
    // 0x080034EC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080034F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x080034F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080034F8: addiu       $t9, $zero, 0xF8
    ctx->r25 = ADD32(0, 0XF8);
    // 0x080034FC: sb          $t9, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r25;
    // 0x08003500: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003504: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08003508: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x0800350C: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08003510: swc1        $f4, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f4.u32l;
    // 0x08003514: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08003518: jalr        $t9
    // 0x0800351C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800351C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08003520: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003524: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08003528: jalr        $t9
    // 0x0800352C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800352C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08003530: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08003534: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08003538: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800353C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08003540: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08003544: jalr        $t9
    // 0x08003548: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003548: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x0800354C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003550: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003554: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X3570) << 16);
    // 0x08003558: jalr        $t9
    // 0x0800355C: addiu       $a0, $a0, 0x3570
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X3570));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800355C: addiu       $a0, $a0, 0x3570
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X3570));
    after_3:
L_08003560:
    // 0x08003560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08003564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003568: jr          $ra
    // 0x0800356C: nop

    TRACE_RETURN()
    return;
    // 0x0800356C: nop

;}
RECOMP_FUNC void func_08000498_6AF8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800049C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004A4: addiu       $t9, $t9, 0x1A90
    ctx->r25 = ADD32(ctx->r25, 0X1A90);
    // 0x080004A8: jalr        $t9
    // 0x080004AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080004B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004B8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X4D4) << 16);
    // 0x080004BC: jalr        $t9
    // 0x080004C0: addiu       $a0, $a0, 0x4D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X4D4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080004C0: addiu       $a0, $a0, 0x4D4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X4D4));
    after_1:
    // 0x080004C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004CC: jr          $ra
    // 0x080004D0: nop

    TRACE_RETURN()
    return;
    // 0x080004D0: nop

;}
RECOMP_FUNC void func_080020F4_6B1504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080020F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080020F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080020FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08002100: lw          $v0, 0xE0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0);
    // 0x08002104: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002108: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800210C: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x08002110: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x08002114: beq         $v1, $zero, L_08002128
    if (ctx->r3 == 0) {
        // 0x08002118: sw          $t6, 0xE0($a0)
        MEM_W(0XE0, ctx->r4) = ctx->r14;
            goto L_08002128;
    }
    // 0x08002118: sw          $t6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r14;
    // 0x0800211C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x08002120: b           L_08002134
    // 0x08002124: sw          $t8, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r24;
        goto L_08002134;
    // 0x08002124: sw          $t8, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r24;
L_08002128:
    // 0x08002128: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X2144) << 16);
    // 0x0800212C: jalr        $t9
    // 0x08002130: addiu       $a0, $a0, 0x2144
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2144));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002130: addiu       $a0, $a0, 0x2144
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X2144));
    after_0:
L_08002134:
    // 0x08002134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800213C: jr          $ra
    // 0x08002140: nop

    TRACE_RETURN()
    return;
    // 0x08002140: nop

;}
RECOMP_FUNC void func_08001EF0_6B1300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001EF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001EFC: jal         0x08001A18
    // 0x08001F00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08001A18_6B0E28(rdram, ctx);
        goto after_0;
    // 0x08001F00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08001F04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001F08: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001F0C: addiu       $t6, $zero, 0x2F2
    ctx->r14 = ADD32(0, 0X2F2);
    // 0x08001F10: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08001F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001F18: sb          $zero, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = 0;
    // 0x08001F1C: jalr        $t9
    // 0x08001F20: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001F20: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    after_1:
    // 0x08001F24: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08001F28: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x08001F2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001F30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001F34: lui         $at, 0xC208
    ctx->r1 = S32(0XC208 << 16);
    // 0x08001F38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001F3C: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x08001F40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001F44: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001F48: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001F4C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x08001F50: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x08001F54: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x08001F58: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x08001F5C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x08001F60: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x08001F64: jalr        $t9
    // 0x08001F68: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001F68: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    after_2:
    // 0x08001F6C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F70: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001F74: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X1AEC) << 16);
    // 0x08001F78: jalr        $t9
    // 0x08001F7C: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001F7C: addiu       $a0, $a0, 0x1AEC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X1AEC));
    after_3:
    // 0x08001F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001F88: jr          $ra
    // 0x08001F8C: nop

    TRACE_RETURN()
    return;
    // 0x08001F8C: nop

;}
RECOMP_FUNC void func_08000ECC_6B02DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000ED0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000ED8: addiu       $t9, $t9, 0x13F4
    ctx->r25 = ADD32(ctx->r25, 0X13F4);
    // 0x08000EDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000EE0: jalr        $t9
    // 0x08000EE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000EE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000EE8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000EEC: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x08000EF0: jalr        $t9
    // 0x08000EF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000EF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x08000EF8: bnel        $v0, $zero, L_08000F1C
    if (ctx->r2 != 0) {
        // 0x08000EFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000F1C;
    }
    goto skip_0;
    // 0x08000EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000F00: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x08000F04: lui         $at, 0xEFFF
    ctx->r1 = S32(0XEFFF << 16);
    // 0x08000F08: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x08000F0C: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x08000F10: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08000F14: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    // 0x08000F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000F1C:
    // 0x08000F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F20: jr          $ra
    // 0x08000F24: nop

    TRACE_RETURN()
    return;
    // 0x08000F24: nop

;}
RECOMP_FUNC void func_080012C0_6B06D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012C0: lui         $v0, 0x8006
    ctx->r2 = S32(0X8006 << 16);
    // 0x080012C4: lw          $v0, -0x4E5C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4E5C);
    // 0x080012C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080012CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080012D0: beq         $v0, $at, L_080012F8
    if (ctx->r2 == ctx->r1) {
        // 0x080012D4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_080012F8;
    }
    // 0x080012D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080012D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080012DC: beq         $v0, $at, L_08001314
    if (ctx->r2 == ctx->r1) {
        // 0x080012E0: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08001314;
    }
    // 0x080012E0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080012E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x080012E8: beq         $v0, $at, L_0800132C
    if (ctx->r2 == ctx->r1) {
        // 0x080012EC: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_0800132C;
    }
    // 0x080012EC: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080012F0: b           L_08001344
    // 0x080012F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
        goto L_08001344;
    // 0x080012F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
L_080012F8:
    // 0x080012F8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080012FC: addiu       $t9, $t9, -0x5A2C
    ctx->r25 = ADD32(ctx->r25, -0X5A2C);
    // 0x08001300: addiu       $a0, $zero, 0x1DA
    ctx->r4 = ADD32(0, 0X1DA);
    // 0x08001304: jalr        $t9
    // 0x08001308: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001308: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x0800130C: b           L_08001374
    // 0x08001310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001374;
    // 0x08001310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001314:
    // 0x08001314: addiu       $t9, $t9, -0x5A2C
    ctx->r25 = ADD32(ctx->r25, -0X5A2C);
    // 0x08001318: addiu       $a0, $zero, 0x1DB
    ctx->r4 = ADD32(0, 0X1DB);
    // 0x0800131C: jalr        $t9
    // 0x08001320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x08001324: b           L_08001374
    // 0x08001328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001374;
    // 0x08001328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_0800132C:
    // 0x0800132C: addiu       $t9, $t9, -0x5A2C
    ctx->r25 = ADD32(ctx->r25, -0X5A2C);
    // 0x08001330: addiu       $a0, $zero, 0x1DC
    ctx->r4 = ADD32(0, 0X1DC);
    // 0x08001334: jalr        $t9
    // 0x08001338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x0800133C: b           L_08001374
    // 0x08001340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001374;
    // 0x08001340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001344:
    // 0x08001344: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x08001348: addiu       $t9, $t9, 0x1CCC
    ctx->r25 = ADD32(ctx->r25, 0X1CCC);
    // 0x0800134C: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x08001350: beql        $t7, $zero, L_0800136C
    if (ctx->r15 == 0) {
        // 0x08001354: lhu         $t8, 0xA8($a0)
        ctx->r24 = MEM_HU(ctx->r4, 0XA8);
            goto L_0800136C;
    }
    goto skip_0;
    // 0x08001354: lhu         $t8, 0xA8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XA8);
    skip_0:
    // 0x08001358: jalr        $t9
    // 0x0800135C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800135C: nop

    after_3:
    // 0x08001360: b           L_08001374
    // 0x08001364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08001374;
    // 0x08001364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001368: lhu         $t8, 0xA8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XA8);
L_0800136C:
    // 0x0800136C: sh          $t8, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r24;
    // 0x08001370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08001374:
    // 0x08001374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001378: jr          $ra
    // 0x0800137C: nop

    TRACE_RETURN()
    return;
    // 0x0800137C: nop

;}
RECOMP_FUNC void func_08002388_6B1798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002388: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800238C: lw          $v0, -0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39FC);
    // 0x08002390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002398: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800239C: beq         $v0, $zero, L_0800245C
    if (ctx->r2 == 0) {
        // 0x080023A0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_0800245C;
    }
    // 0x080023A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x080023A4: lw          $a1, 0xE0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XE0);
    // 0x080023A8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080023AC: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080023B0: beq         $a1, $zero, L_080023DC
    if (ctx->r5 == 0) {
        // 0x080023B4: addiu       $v1, $a3, 0xD0
        ctx->r3 = ADD32(ctx->r7, 0XD0);
            goto L_080023DC;
    }
    // 0x080023B4: addiu       $v1, $a3, 0xD0
    ctx->r3 = ADD32(ctx->r7, 0XD0);
    // 0x080023B8: jal         0x08002644
    // 0x080023BC: lw          $a2, 0xD0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XD0);
    func_08002644_6B1A54(rdram, ctx);
        goto after_0;
    // 0x080023BC: lw          $a2, 0xD0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XD0);
    after_0:
    // 0x080023C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023C8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X246C) << 16);
    // 0x080023CC: jalr        $t9
    // 0x080023D0: addiu       $a0, $a0, 0x246C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X246C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023D0: addiu       $a0, $a0, 0x246C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X246C));
    after_1:
    // 0x080023D4: b           L_08002434
    // 0x080023D8: nop

        goto L_08002434;
    // 0x080023D8: nop

L_080023DC:
    // 0x080023DC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x080023E0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x080023E4: jalr        $t9
    // 0x080023E8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080023E8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_2:
    // 0x080023EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080023F0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080023F4: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x080023F8: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080023FC: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08002400: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x08002404: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08002408: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800240C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08002410: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08002414: jal         0x0800260C
    // 0x08002418: nop

    func_0800260C_6B1A1C(rdram, ctx);
        goto after_3;
    // 0x08002418: nop

    after_3:
    // 0x0800241C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08002420: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002424: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002428: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x0800242C: jalr        $t9
    // 0x08002430: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002430: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    after_4:
L_08002434:
    // 0x08002434: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08002438: addiu       $t9, $t9, 0x3E94
    ctx->r25 = ADD32(ctx->r25, 0X3E94);
    // 0x0800243C: jalr        $t9
    // 0x08002440: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002440: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x08002444: beq         $v0, $zero, L_0800245C
    if (ctx->r2 == 0) {
        // 0x08002448: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(18, 0X284C) << 16);
            goto L_0800245C;
    }
    // 0x08002448: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(18, 0X284C) << 16);
    // 0x0800244C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002450: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002454: jalr        $t9
    // 0x08002458: addiu       $a0, $a0, 0x284C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X284C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002458: addiu       $a0, $a0, 0x284C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(18, 0X284C));
    after_6:
L_0800245C:
    // 0x0800245C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002464: jr          $ra
    // 0x08002468: nop

    TRACE_RETURN()
    return;
    // 0x08002468: nop

;}
