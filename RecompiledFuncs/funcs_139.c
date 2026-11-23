#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08002A80_728F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002A88: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08002A8C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x08002A90: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08002A94: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x08002A98: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x08002A9C: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x08002AA0: beq         $t0, $zero, L_08002AC8
    if (ctx->r8 == 0) {
        // 0x08002AA4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08002AC8;
    }
    // 0x08002AA4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08002AA8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08002AAC: jalr        $t9
    // 0x08002AB0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002AB0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_0:
    // 0x08002AB4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002AB8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002ABC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X2AD8) << 16);
    // 0x08002AC0: jalr        $t9
    // 0x08002AC4: addiu       $a0, $a0, 0x2AD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2AD8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002AC4: addiu       $a0, $a0, 0x2AD8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2AD8));
    after_1:
L_08002AC8:
    // 0x08002AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002AD0: jr          $ra
    // 0x08002AD4: nop

    TRACE_RETURN()
    return;
    // 0x08002AD4: nop

;}
RECOMP_FUNC void func_080001AC_72663C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001B0: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x080001B4: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x080001B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080001C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080001C4: lbu         $t7, 0x4C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4C);
    // 0x080001C8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080001CC: bnel        $t7, $at, L_08000214
    if (ctx->r15 != ctx->r1) {
        // 0x080001D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000214;
    }
    goto skip_0;
    // 0x080001D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080001D4: jal         0x08002B30
    // 0x080001D8: nop

    func_08002B30_728FC0(rdram, ctx);
        goto after_0;
    // 0x080001D8: nop

    after_0:
    // 0x080001DC: beq         $v0, $zero, L_08000210
    if (ctx->r2 == 0) {
        // 0x080001E0: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08000210;
    }
    // 0x080001E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001E4: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x080001E8: jalr        $t9
    // 0x080001EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080001EC: nop

    after_1:
    // 0x080001F0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x080001F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080001F8: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x080001FC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000200: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X220) << 16);
    // 0x08000204: addiu       $a0, $a0, 0x220
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X220));
    // 0x08000208: jalr        $t9
    // 0x0800020C: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800020C: sh          $t8, 0x8A($t0)
    MEM_H(0X8A, ctx->r8) = ctx->r24;
    after_2:
L_08000210:
    // 0x08000210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000214:
    // 0x08000214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000218: jr          $ra
    // 0x0800021C: nop

    TRACE_RETURN()
    return;
    // 0x0800021C: nop

;}
RECOMP_FUNC void func_08000000_726490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800000C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000010: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08000014: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000018: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x0800001C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000020: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08000024: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000028: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x0800002C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x08000030: jalr        $v1
    // 0x08000034: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x08000034: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x08000038: beq         $v0, $zero, L_08000050
    if (ctx->r2 == 0) {
        // 0x0800003C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08000050;
    }
    // 0x0800003C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000040: jalr        $v1
    // 0x08000044: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x08000044: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_1:
    // 0x08000048: beq         $v0, $zero, L_08000068
    if (ctx->r2 == 0) {
        // 0x0800004C: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_08000068;
    }
    // 0x0800004C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
L_08000050:
    // 0x08000050: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000054: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000058: jalr        $t9
    // 0x0800005C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800005C: nop

    after_2:
    // 0x08000060: b           L_080000C4
    // 0x08000064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080000C4;
    // 0x08000064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000068:
    // 0x08000068: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800006C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000070: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000074: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000078: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x0800007C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x08000080: jalr        $t9
    // 0x08000084: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000084: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x08000088: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x0800008C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0XD0) << 16);
    // 0x08000090: bne         $v0, $zero, L_080000B0
    if (ctx->r2 != 0) {
        // 0x08000094: sw          $v0, 0xD0($t8)
        MEM_W(0XD0, ctx->r24) = ctx->r2;
            goto L_080000B0;
    }
    // 0x08000094: sw          $v0, 0xD0($t8)
    MEM_W(0XD0, ctx->r24) = ctx->r2;
    // 0x08000098: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800009C: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000A0: jalr        $t9
    // 0x080000A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000A4: nop

    after_4:
    // 0x080000A8: b           L_080000C4
    // 0x080000AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080000C4;
    // 0x080000AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000B0:
    // 0x080000B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000B4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000B8: jalr        $t9
    // 0x080000BC: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0XD0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000BC: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0XD0));
    after_5:
    // 0x080000C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080000C4:
    // 0x080000C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080000C8: jr          $ra
    // 0x080000CC: nop

    TRACE_RETURN()
    return;
    // 0x080000CC: nop

;}
RECOMP_FUNC void func_08000A34_726EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A38: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A40: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000A44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000A48: jalr        $t9
    // 0x08000A4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000A50: bne         $v0, $zero, L_08000AB0
    if (ctx->r2 != 0) {
        // 0x08000A54: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_08000AB0;
    }
    // 0x08000A54: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000A58: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08000A5C: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08000A60: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000A64: jalr        $t9
    // 0x08000A68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x08000A6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000A70: addiu       $t9, $t9, 0x1F0
    ctx->r25 = ADD32(ctx->r25, 0X1F0);
    // 0x08000A74: jalr        $t9
    // 0x08000A78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x08000A7C: bne         $v0, $zero, L_08000AB0
    if (ctx->r2 != 0) {
        // 0x08000A80: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_08000AB0;
    }
    // 0x08000A80: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000A84: addiu       $t9, $t9, -0x3A40
    ctx->r25 = ADD32(ctx->r25, -0X3A40);
    // 0x08000A88: jalr        $t9
    // 0x08000A8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A8C: nop

    after_3:
    // 0x08000A90: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000A94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A98: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x08000A9C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000AA0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X2C8) << 16);
    // 0x08000AA4: addiu       $a0, $a0, 0x2C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2C8));
    // 0x08000AA8: jalr        $t9
    // 0x08000AAC: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000AAC: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_4:
L_08000AB0:
    // 0x08000AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000AB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AB8: jr          $ra
    // 0x08000ABC: nop

    TRACE_RETURN()
    return;
    // 0x08000ABC: nop

;}
RECOMP_FUNC void func_0800098C_726E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800098C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000994: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000998: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800099C: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x080009A0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080009A4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080009A8: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x080009AC: jalr        $t9
    // 0x080009B0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080009B0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x080009B4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x080009B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009BC: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080009C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009C4: jalr        $t9
    // 0x080009C8: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080009C8: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_1:
    // 0x080009CC: beq         $v0, $zero, L_080009E0
    if (ctx->r2 == 0) {
        // 0x080009D0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_080009E0;
    }
    // 0x080009D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080009D4: lw          $t0, 0x64($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X64);
    // 0x080009D8: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x080009DC: sw          $t1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r9;
L_080009E0:
    // 0x080009E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009E4: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x080009E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080009EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080009F0: jalr        $t9
    // 0x080009F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080009F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x080009F8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x080009FC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x08000A00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A04: lw          $v0, 0x8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X8);
    // 0x08000A08: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A0C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0XA34) << 16);
    // 0x08000A10: lw          $t3, 0x60($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X60);
    // 0x08000A14: addiu       $a0, $a0, 0xA34
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0XA34));
    // 0x08000A18: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x08000A1C: jalr        $t9
    // 0x08000A20: sw          $t4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A20: sw          $t4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r12;
    after_3:
    // 0x08000A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000A2C: jr          $ra
    // 0x08000A30: nop

    TRACE_RETURN()
    return;
    // 0x08000A30: nop

;}
RECOMP_FUNC void func_0800261C_728AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800261C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08002620: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002624: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002628: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x0800262C: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x08002630: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08002634: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x08002638: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800263C: addiu       $t8, $zero, 0x22A
    ctx->r24 = ADD32(0, 0X22A);
    // 0x08002640: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08002644: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08002648: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x0800264C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x08002650: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x08002654: jalr        $t9
    // 0x08002658: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002658: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x0800265C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002660: addiu       $t0, $zero, 0xFC
    ctx->r8 = ADD32(0, 0XFC);
    // 0x08002664: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08002668: sb          $t0, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r8;
    // 0x0800266C: jalr        $t9
    // 0x08002670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08002674: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002678: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800267C: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x08002680: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x08002684: jalr        $t9
    // 0x08002688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x0800268C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002690: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08002694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800269C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x080026A0: jalr        $t9
    // 0x080026A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080026A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x080026A8: lbu         $a3, 0xD0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XD0);
    // 0x080026AC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x080026B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080026B4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080026B8: subu        $t2, $t1, $a3
    ctx->r10 = SUB32(ctx->r9, ctx->r7);
    // 0x080026BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x080026C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080026C4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x080026C8: jalr        $t9
    // 0x080026CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080026CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x080026D0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x080026D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080026D8: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x080026DC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080026E0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x080026E4: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x080026E8: sw          $t4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r12;
    // 0x080026EC: sb          $t5, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r13;
    // 0x080026F0: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x080026F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080026F8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080026FC: bne         $v1, $zero, L_0800270C
    if (ctx->r3 != 0) {
        // 0x08002700: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_0800270C;
    }
    // 0x08002700: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002704: b           L_08002754
    // 0x08002708: sb          $zero, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = 0;
        goto L_08002754;
    // 0x08002708: sb          $zero, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = 0;
L_0800270C:
    // 0x0800270C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08002710: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x08002714: mfhi        $v0
    ctx->r2 = hi;
    // 0x08002718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800271C: beq         $v0, $zero, L_08002740
    if (ctx->r2 == 0) {
        // 0x08002720: nop
    
            goto L_08002740;
    }
    // 0x08002720: nop

    // 0x08002724: beq         $v0, $at, L_08002748
    if (ctx->r2 == ctx->r1) {
        // 0x08002728: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_08002748;
    }
    // 0x08002728: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x0800272C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x08002730: beq         $v0, $at, L_08002750
    if (ctx->r2 == ctx->r1) {
        // 0x08002734: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_08002750;
    }
    // 0x08002734: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08002738: b           L_08002754
    // 0x0800273C: nop

        goto L_08002754;
    // 0x0800273C: nop

L_08002740:
    // 0x08002740: b           L_08002754
    // 0x08002744: sb          $zero, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = 0;
        goto L_08002754;
    // 0x08002744: sb          $zero, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = 0;
L_08002748:
    // 0x08002748: b           L_08002754
    // 0x0800274C: sb          $t6, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r14;
        goto L_08002754;
    // 0x0800274C: sb          $t6, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r14;
L_08002750:
    // 0x08002750: sb          $t7, 0xD4($s0)
    MEM_B(0XD4, ctx->r16) = ctx->r15;
L_08002754:
    // 0x08002754: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08002758: jalr        $t9
    // 0x0800275C: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800275C: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    after_5:
    // 0x08002760: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002764: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08002768: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800276C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002770: jalr        $t9
    // 0x08002774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08002774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x08002778: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800277C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002780: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X27A0) << 16);
    // 0x08002784: jalr        $t9
    // 0x08002788: addiu       $a0, $a0, 0x27A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X27A0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08002788: addiu       $a0, $a0, 0x27A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X27A0));
    after_7:
    // 0x0800278C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002790: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002794: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002798: jr          $ra
    // 0x0800279C: nop

    TRACE_RETURN()
    return;
    // 0x0800279C: nop

;}
RECOMP_FUNC void func_080008F8_726D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080008F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080008FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000900: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000904: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000908: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x0800090C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x08000910: lw          $t8, 0x68($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X68);
    // 0x08000914: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x08000918: beq         $t9, $zero, L_0800097C
    if (ctx->r25 == 0) {
        // 0x0800091C: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_0800097C;
    }
    // 0x0800091C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000920: addiu       $t9, $t9, 0x1F70
    ctx->r25 = ADD32(ctx->r25, 0X1F70);
    // 0x08000924: jalr        $t9
    // 0x08000928: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000928: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x0800092C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000930: addiu       $t9, $t9, 0x1EBC
    ctx->r25 = ADD32(ctx->r25, 0X1EBC);
    // 0x08000934: jalr        $t9
    // 0x08000938: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000938: nop

    after_1:
    // 0x0800093C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x08000940: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000944: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000948: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x0800094C: lw          $a0, 0xDC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XDC);
    // 0x08000950: beql        $a0, $zero, L_08000964
    if (ctx->r4 == 0) {
        // 0x08000954: lw          $t1, 0x20($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X20);
            goto L_08000964;
    }
    goto skip_0;
    // 0x08000954: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x08000958: jalr        $t9
    // 0x0800095C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800095C: nop

    after_2:
    // 0x08000960: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_08000964:
    // 0x08000964: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000968: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800096C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X98C) << 16);
    // 0x08000970: addiu       $a0, $a0, 0x98C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X98C));
    // 0x08000974: jalr        $t9
    // 0x08000978: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000978: sh          $zero, 0x8A($t1)
    MEM_H(0X8A, ctx->r9) = 0;
    after_3:
L_0800097C:
    // 0x0800097C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000984: jr          $ra
    // 0x08000988: nop

    TRACE_RETURN()
    return;
    // 0x08000988: nop

;}
RECOMP_FUNC void func_08002508_728998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002508: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800250C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08002510: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08002514: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x08002518: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x0800251C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x08002520: sh          $t9, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r25;
    // 0x08002524: lui         $t6, 0x2A0
    ctx->r14 = S32(0X2A0 << 16);
    // 0x08002528: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800252C: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x08002530: addiu       $t0, $zero, 0x32C
    ctx->r8 = ADD32(0, 0X32C);
    // 0x08002534: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08002538: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x0800253C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002540: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08002544: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08002548: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    // 0x0800254C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x08002550: jalr        $t9
    // 0x08002554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08002558: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800255C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08002560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08002568: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800256C: jalr        $t9
    // 0x08002570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08002570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08002574: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002578: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x0800257C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08002580: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08002584: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x08002588: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x0800258C: jalr        $t9
    // 0x08002590: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002590: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x08002594: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002598: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x0800259C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080025A0: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080025A4: jalr        $t9
    // 0x080025A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080025A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x080025AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025B0: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080025B4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080025B8: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080025BC: jalr        $t9
    // 0x080025C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080025C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x080025C4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080025C8: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080025CC: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x080025D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025D4: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x080025D8: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x080025DC: lbu         $t2, 0xD8($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD8);
    // 0x080025E0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025E4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X2610) << 16);
    // 0x080025E8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080025EC: sb          $t3, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r11;
    // 0x080025F0: sh          $t4, 0xA8($s0)
    MEM_H(0XA8, ctx->r16) = ctx->r12;
    // 0x080025F4: jalr        $t9
    // 0x080025F8: addiu       $a0, $a0, 0x2610
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2610));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080025F8: addiu       $a0, $a0, 0x2610
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2610));
    after_5:
    // 0x080025FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08002600: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08002604: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08002608: jr          $ra
    // 0x0800260C: nop

    TRACE_RETURN()
    return;
    // 0x0800260C: nop

;}
RECOMP_FUNC void func_080021AC_72863C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080021AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080021B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080021B8: addiu       $t9, $t9, 0x1FB0
    ctx->r25 = ADD32(ctx->r25, 0X1FB0);
    // 0x080021BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080021C0: jalr        $t9
    // 0x080021C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080021C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080021C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080021CC: addiu       $t9, $t9, 0x1ED4
    ctx->r25 = ADD32(ctx->r25, 0X1ED4);
    // 0x080021D0: jalr        $t9
    // 0x080021D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080021D4: nop

    after_1:
    // 0x080021D8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x080021DC: addiu       $t9, $t9, -0x3A70
    ctx->r25 = ADD32(ctx->r25, -0X3A70);
    // 0x080021E0: jalr        $t9
    // 0x080021E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080021E4: nop

    after_2:
    // 0x080021E8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080021EC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080021F0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x080021F4: jalr        $t9
    // 0x080021F8: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080021F8: addiu       $a0, $a0, 0x54B4
    ctx->r4 = ADD32(ctx->r4, 0X54B4);
    after_3:
    // 0x080021FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002204: jr          $ra
    // 0x08002208: nop

    TRACE_RETURN()
    return;
    // 0x08002208: nop

;}
RECOMP_FUNC void func_080024FC_72898C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080024FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002500: jr          $ra
    // 0x08002504: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002504: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08002428_7288B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800242C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002430: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002438: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x0800243C: addiu       $t9, $zero, 0x3C3
    ctx->r25 = ADD32(0, 0X3C3);
    // 0x08002440: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x08002444: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002448: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x0800244C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002450: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08002454: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002458: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800245C: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08002460: jalr        $t9
    // 0x08002464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x08002468: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800246C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08002470: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08002474: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08002478: jalr        $t9
    // 0x0800247C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800247C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x08002480: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002484: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08002488: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800248C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08002490: jalr        $t9
    // 0x08002494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08002494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x08002498: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800249C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080024A0: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x080024A4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X3100) << 16);
    // 0x080024A8: lwc1        $f0, 0x3100($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X3100));
    // 0x080024AC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080024B0: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x080024B4: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x080024B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080024BC: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x080024C0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080024C4: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x080024C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080024CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X24FC) << 16);
    // 0x080024D0: addiu       $a0, $a0, 0x24FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X24FC));
    // 0x080024D4: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x080024D8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x080024DC: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x080024E0: jalr        $t9
    // 0x080024E4: sb          $t3, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080024E4: sb          $t3, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r11;
    after_3:
    // 0x080024E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080024EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080024F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080024F4: jr          $ra
    // 0x080024F8: nop

    TRACE_RETURN()
    return;
    // 0x080024F8: nop

;}
RECOMP_FUNC void func_08002BF8_729088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002BFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002C04: addiu       $t9, $t9, 0x3A24
    ctx->r25 = ADD32(ctx->r25, 0X3A24);
    // 0x08002C08: jalr        $t9
    // 0x08002C0C: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002C0C: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    after_0:
    // 0x08002C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002C18: jr          $ra
    // 0x08002C1C: nop

    TRACE_RETURN()
    return;
    // 0x08002C1C: nop

;}
RECOMP_FUNC void func_08002358_7287E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002358: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800235C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002360: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08002364: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08002368: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x0800236C: addiu       $t9, $zero, 0x3C3
    ctx->r25 = ADD32(0, 0X3C3);
    // 0x08002370: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x08002374: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08002378: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x0800237C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08002380: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x08002384: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08002388: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800238C: sw          $t8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r24;
    // 0x08002390: jalr        $t9
    // 0x08002394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08002398: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800239C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x080023A0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080023A4: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x080023A8: jalr        $t9
    // 0x080023AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080023AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x080023B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023B4: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x080023B8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x080023BC: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x080023C0: jalr        $t9
    // 0x080023C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080023C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x080023C8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080023CC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x080023D0: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x080023D4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x080023D8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080023DC: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x080023E0: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x080023E4: addiu       $t3, $zero, 0xC9
    ctx->r11 = ADD32(0, 0XC9);
    // 0x080023E8: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x080023EC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x080023F0: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x080023F4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080023F8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X234C) << 16);
    // 0x080023FC: addiu       $a0, $a0, 0x234C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X234C));
    // 0x08002400: sh          $t3, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r11;
    // 0x08002404: jalr        $t9
    // 0x08002408: sb          $t4, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08002408: sb          $t4, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r12;
    after_3:
    // 0x0800240C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08002410: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08002414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08002418: jr          $ra
    // 0x0800241C: nop

    TRACE_RETURN()
    return;
    // 0x0800241C: nop

    // 0x08002420: jr          $ra
    // 0x08002424: nop

    TRACE_RETURN()
    return;
    // 0x08002424: nop

;}
RECOMP_FUNC void func_08002610_728AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002610: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08002614: jr          $ra
    // 0x08002618: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08002618: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_0800010C_72659C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800010C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000110: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08000114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000118: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x0800011C: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08000120: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000124: jalr        $t9
    // 0x08000128: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000128: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    after_0:
    // 0x0800012C: beq         $v0, $zero, L_08000150
    if (ctx->r2 == 0) {
        // 0x08000130: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_08000150;
    }
    // 0x08000130: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x08000134: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000138: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800013C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X644) << 16);
    // 0x08000140: jalr        $t9
    // 0x08000144: addiu       $a0, $a0, 0x644
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X644));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000144: addiu       $a0, $a0, 0x644
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X644));
    after_1:
    // 0x08000148: b           L_08000198
    // 0x0800014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_08000198;
    // 0x0800014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000150:
    // 0x08000150: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x08000154: addiu       $v0, $v0, 0x4088
    ctx->r2 = ADD32(ctx->r2, 0X4088);
    // 0x08000158: jalr        $v0
    // 0x0800015C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x0800015C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x08000160: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08000164: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x08000168: jalr        $t9
    // 0x0800016C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800016C: nop

    after_3:
    // 0x08000170: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x08000174: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x08000178: jalr        $t9
    // 0x0800017C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800017C: nop

    after_4:
    // 0x08000180: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000184: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000188: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X1AC) << 16);
    // 0x0800018C: jalr        $t9
    // 0x08000190: addiu       $a0, $a0, 0x1AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X1AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000190: addiu       $a0, $a0, 0x1AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X1AC));
    after_5:
    // 0x08000194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000198:
    // 0x08000198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x0800019C: jr          $ra
    // 0x080001A0: nop

    TRACE_RETURN()
    return;
    // 0x080001A0: nop

    // 0x080001A4: jr          $ra
    // 0x080001A8: nop

    TRACE_RETURN()
    return;
    // 0x080001A8: nop

;}
RECOMP_FUNC void func_08002BBC_72904C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002BC0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08002BC8: addiu       $t9, $t9, 0x3C90
    ctx->r25 = ADD32(ctx->r25, 0X3C90);
    // 0x08002BCC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X2C7C) << 16);
    // 0x08002BD0: addiu       $a0, $a0, 0x2C7C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2C7C));
    // 0x08002BD4: jalr        $t9
    // 0x08002BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08002BDC: bne         $v0, $zero, L_08002BEC
    if (ctx->r2 != 0) {
        // 0x08002BE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08002BEC;
    }
    // 0x08002BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08002BE4: b           L_08002BF0
    // 0x08002BE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08002BF0;
    // 0x08002BE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08002BEC:
    // 0x08002BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08002BF0:
    // 0x08002BF0: jr          $ra
    // 0x08002BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x08002BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_08000AC0_726F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08000AC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000AC8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000ACC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000AD0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08000AD4: lw          $s0, 0xD0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XD0);
    // 0x08000AD8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08000ADC: lhu         $t0, 0xEC($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XEC);
    // 0x08000AE0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x08000AE4: sltiu       $at, $t6, 0x11
    ctx->r1 = ctx->r14 < 0X11 ? 1 : 0;
    // 0x08000AE8: beq         $at, $zero, L_08002160
    if (ctx->r1 == 0) {
        // 0x08000AEC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_08002160;
    }
    // 0x08000AEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x08000AF0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X3070) << 16);
    // 0x08000AF4: addu        $at, $at, $t6
    gpr jr_addend_08000AFC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08000AF8: lw          $t6, 0x3070($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(57, 0X3070));
    // 0x08000AFC: jr          $t6
    // 0x08000B00: nop

    switch (jr_addend_08000AFC >> 2) {
        case 0: goto L_08000B04; break;
        case 1: goto L_08001064; break;
        case 2: goto L_08001304; break;
        case 3: goto L_08000DC4; break;
        case 4: goto L_080015C0; break;
        case 5: goto L_08001820; break;
        case 6: goto L_08001A98; break;
        case 7: goto L_08001AF4; break;
        case 8: goto L_08001C94; break;
        case 9: goto L_08001D98; break;
        case 10: goto L_08001E90; break;
        case 11: goto L_08001E44; break;
        case 12: goto L_08001D44; break;
        case 13: goto L_08001DD8; break;
        case 14: goto L_080015A8; break;
        case 15: goto L_080015DC; break;
        case 16: goto L_080015EC; break;
        default: switch_error(__func__, 0x08000AFC, 0x08003070);
    }
    // 0x08000B00: nop

L_08000B04:
    // 0x08000B04: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000B08: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08000B0C: addiu       $a0, $zero, 0x1F0
    ctx->r4 = ADD32(0, 0X1F0);
    // 0x08000B10: jalr        $t9
    // 0x08000B14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x08000B18: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30B4) << 16);
    // 0x08000B1C: lwc1        $f0, 0x30B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30B4));
    // 0x08000B20: lui         $at, 0xC264
    ctx->r1 = S32(0XC264 << 16);
    // 0x08000B24: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x08000B28: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x08000B2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000B30: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08000B34: lui         $at, 0xC278
    ctx->r1 = S32(0XC278 << 16);
    // 0x08000B38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000B3C: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x08000B40: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08000B44: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30B8) << 16);
    // 0x08000B48: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x08000B4C: swc1        $f6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f6.u32l;
    // 0x08000B50: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08000B54: lwc1        $f8, 0x30B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30B8));
    // 0x08000B58: lui         $t5, 0x4
    ctx->r13 = S32(0X4 << 16);
    // 0x08000B5C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x08000B60: swc1        $f8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f8.u32l;
    // 0x08000B64: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x08000B68: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x08000B6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000B70: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x08000B74: lw          $t5, -0x4FE8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4FE8);
    // 0x08000B78: lui         $at, 0xC3CC
    ctx->r1 = S32(0XC3CC << 16);
    // 0x08000B7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000B80: sb          $t3, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r11;
    // 0x08000B84: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x08000B88: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x08000B8C: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x08000B90: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08000B94: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x08000B98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000B9C: ori         $t9, $t6, 0x20
    ctx->r25 = ctx->r14 | 0X20;
    // 0x08000BA0: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
    // 0x08000BA4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x08000BA8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08000BAC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08000BB0: lw          $t7, 0x60($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X60);
    // 0x08000BB4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08000BB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000BBC: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x08000BC0: sw          $t8, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r24;
    // 0x08000BC4: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x08000BC8: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x08000BCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000BD0: lw          $t2, 0x60($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X60);
    // 0x08000BD4: lui         $at, 0xC238
    ctx->r1 = S32(0XC238 << 16);
    // 0x08000BD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000BDC: ori         $t4, $t2, 0x20
    ctx->r12 = ctx->r10 | 0X20;
    // 0x08000BE0: sw          $t4, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r12;
    // 0x08000BE4: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x08000BE8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30BC) << 16);
    // 0x08000BEC: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x08000BF0: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000BF4: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x08000BF8: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08000BFC: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000C00: swc1        $f12, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f12.u32l;
    // 0x08000C04: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08000C08: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000C0C: swc1        $f16, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f16.u32l;
    // 0x08000C10: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x08000C14: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000C18: sh          $v1, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r3;
    // 0x08000C1C: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x08000C20: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000C24: sh          $zero, 0x16($t5)
    MEM_H(0X16, ctx->r13) = 0;
    // 0x08000C28: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08000C2C: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000C30: sh          $zero, 0x18($t9)
    MEM_H(0X18, ctx->r25) = 0;
    // 0x08000C34: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08000C38: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000C3C: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x08000C40: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x08000C44: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000C48: swc1        $f0, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f0.u32l;
    // 0x08000C4C: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x08000C50: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000C54: swc1        $f0, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f0.u32l;
    // 0x08000C58: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08000C5C: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000C60: sb          $a3, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r7;
    // 0x08000C64: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x08000C68: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000C6C: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x08000C70: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x08000C74: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000C78: swc1        $f4, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f4.u32l;
    // 0x08000C7C: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x08000C80: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000C84: swc1        $f6, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f6.u32l;
    // 0x08000C88: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x08000C8C: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000C90: sh          $v1, 0x14($t9)
    MEM_H(0X14, ctx->r25) = ctx->r3;
    // 0x08000C94: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x08000C98: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000C9C: sh          $zero, 0x16($t8)
    MEM_H(0X16, ctx->r24) = 0;
    // 0x08000CA0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x08000CA4: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000CA8: sh          $zero, 0x18($t4)
    MEM_H(0X18, ctx->r12) = 0;
    // 0x08000CAC: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x08000CB0: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000CB4: swc1        $f2, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f2.u32l;
    // 0x08000CB8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x08000CBC: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000CC0: swc1        $f2, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f2.u32l;
    // 0x08000CC4: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x08000CC8: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000CCC: swc1        $f2, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f2.u32l;
    // 0x08000CD0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x08000CD4: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000CD8: sb          $a3, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r7;
    // 0x08000CDC: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x08000CE0: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000CE4: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x08000CE8: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x08000CEC: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000CF0: swc1        $f12, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f12.u32l;
    // 0x08000CF4: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x08000CF8: lwc1        $f10, 0x30BC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30BC));
    // 0x08000CFC: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000D00: swc1        $f10, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f10.u32l;
    // 0x08000D04: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x08000D08: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000D0C: sh          $v1, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r3;
    // 0x08000D10: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x08000D14: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000D18: sh          $zero, 0x16($t5)
    MEM_H(0X16, ctx->r13) = 0;
    // 0x08000D1C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x08000D20: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000D24: sh          $zero, 0x18($t9)
    MEM_H(0X18, ctx->r25) = 0;
    // 0x08000D28: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x08000D2C: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x08000D30: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x08000D34: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x08000D38: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000D3C: swc1        $f0, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f0.u32l;
    // 0x08000D40: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x08000D44: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08000D48: swc1        $f0, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f0.u32l;
    // 0x08000D4C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x08000D50: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x08000D54: sb          $a3, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r7;
    // 0x08000D58: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D5C: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000D60: jalr        $t9
    // 0x08000D64: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000D64: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x08000D68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D6C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000D70: lui         $a3, 0xC3D0
    ctx->r7 = S32(0XC3D0 << 16);
    // 0x08000D74: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08000D78: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000D7C: lui         $a1, 0xC180
    ctx->r5 = S32(0XC180 << 16);
    // 0x08000D80: jalr        $t9
    // 0x08000D84: lui         $a2, 0xC24C
    ctx->r6 = S32(0XC24C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000D84: lui         $a2, 0xC24C
    ctx->r6 = S32(0XC24C << 16);
    after_2:
    // 0x08000D88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000D8C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08000D90: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08000D94: lui         $a1, 0xC180
    ctx->r5 = S32(0XC180 << 16);
    // 0x08000D98: lui         $a2, 0xC24C
    ctx->r6 = S32(0XC24C << 16);
    // 0x08000D9C: jalr        $t9
    // 0x08000DA0: lui         $a3, 0xC3A4
    ctx->r7 = S32(0XC3A4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000DA0: lui         $a3, 0xC3A4
    ctx->r7 = S32(0XC3A4 << 16);
    after_3:
    // 0x08000DA4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000DA8: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000DAC: jalr        $t9
    // 0x08000DB0: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000DB0: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_4:
    // 0x08000DB4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08000DB8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x08000DBC: b           L_08002160
    // 0x08000DC0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
        goto L_08002160;
    // 0x08000DC0: sb          $t7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r15;
L_08000DC4:
    // 0x08000DC4: lhu         $t8, 0x8A($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X8A);
    // 0x08000DC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000DCC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000DD0: bne         $t8, $at, L_08000DE0
    if (ctx->r24 != ctx->r1) {
        // 0x08000DD4: addiu       $t9, $t9, -0x7438
        ctx->r25 = ADD32(ctx->r25, -0X7438);
            goto L_08000DE0;
    }
    // 0x08000DD4: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000DD8: jalr        $t9
    // 0x08000DDC: addiu       $a0, $zero, 0x145
    ctx->r4 = ADD32(0, 0X145);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000DDC: addiu       $a0, $zero, 0x145
    ctx->r4 = ADD32(0, 0X145);
    after_5:
L_08000DE0:
    // 0x08000DE0: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x08000DE4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08000DE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08000DEC: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x08000DF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08000DF4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(57, 0X261C) << 16);
    // 0x08000DF8: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000DFC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x08000E00: nop

    // 0x08000E04: bc1fl       L_08000EF0
    if (!c1cs) {
        // 0x08000E08: sh          $zero, 0x14($v0)
        MEM_H(0X14, ctx->r2) = 0;
            goto L_08000EF0;
    }
    goto skip_0;
    // 0x08000E08: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    skip_0:
    // 0x08000E0C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000E10: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30C0) << 16);
    // 0x08000E14: ldc1        $f0, 0x30C0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(57, 0X30C0));
    // 0x08000E18: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x08000E1C: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x08000E20: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x08000E24: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000E28: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x08000E2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000E30: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000E34: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08000E38: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x08000E3C: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x08000E40: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000E44: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000E48: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x08000E4C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000E50: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x08000E54: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x08000E58: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x08000E5C: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x08000E60: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08000E64: sh          $t7, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r15;
    // 0x08000E68: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x08000E6C: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x08000E70: lhu         $t9, 0x16($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X16);
    // 0x08000E74: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x08000E78: sh          $t2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r10;
    // 0x08000E7C: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x08000E80: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x08000E84: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x08000E88: addiu       $t5, $t3, -0x30
    ctx->r13 = ADD32(ctx->r11, -0X30);
    // 0x08000E8C: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x08000E90: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
    // 0x08000E94: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x08000E98: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x08000E9C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000EA0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000EA4: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x08000EA8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08000EAC: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x08000EB0: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x08000EB4: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x08000EB8: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08000EBC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08000EC0: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08000EC4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08000EC8: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x08000ECC: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x08000ED0: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x08000ED4: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000ED8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08000EDC: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x08000EE0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000EE4: b           L_08000FB4
    // 0x08000EE8: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
        goto L_08000FB4;
    // 0x08000EE8: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x08000EEC: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
L_08000EF0:
    // 0x08000EF0: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x08000EF4: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x08000EF8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08000EFC: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x08000F00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08000F04: sh          $zero, 0x18($t4)
    MEM_H(0X18, ctx->r12) = 0;
    // 0x08000F08: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x08000F0C: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x08000F10: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000F14: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x08000F18: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x08000F1C: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x08000F20: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000F24: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000F28: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x08000F2C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08000F30: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x08000F34: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x08000F38: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x08000F3C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000F40: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x08000F44: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x08000F48: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x08000F4C: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x08000F50: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x08000F54: sh          $t9, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r25;
    // 0x08000F58: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x08000F5C: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x08000F60: lhu         $t4, 0x16($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X16);
    // 0x08000F64: addiu       $t3, $t4, -0x30
    ctx->r11 = ADD32(ctx->r12, -0X30);
    // 0x08000F68: andi        $t5, $t3, 0x3FF
    ctx->r13 = ctx->r11 & 0X3FF;
    // 0x08000F6C: sh          $t5, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r13;
    // 0x08000F70: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x08000F74: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x08000F78: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x08000F7C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08000F80: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
    // 0x08000F84: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x08000F88: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x08000F8C: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000F90: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x08000F94: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x08000F98: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x08000F9C: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08000FA0: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x08000FA4: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x08000FA8: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x08000FAC: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08000FB0: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_08000FB4:
    // 0x08000FB4: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x08000FB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FBC: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08000FC0: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x08000FC4: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x08000FC8: addiu       $a1, $a1, 0x261C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X261C));
    // 0x08000FCC: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000FD0: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x08000FD4: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x08000FD8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x08000FDC: jalr        $t9
    // 0x08000FE0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000FE0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x08000FE4: beq         $v0, $zero, L_08001020
    if (ctx->r2 == 0) {
        // 0x08000FE8: addiu       $t6, $zero, 0x42
        ctx->r14 = ADD32(0, 0X42);
            goto L_08001020;
    }
    // 0x08000FE8: addiu       $t6, $zero, 0x42
    ctx->r14 = ADD32(0, 0X42);
    // 0x08000FEC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000FF0: sh          $t6, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r14;
    // 0x08000FF4: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000FF8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x08000FFC: jalr        $t9
    // 0x08001000: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001000: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_7:
    // 0x08001004: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x08001008: lw          $t8, 0x64($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X64);
    // 0x0800100C: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001010: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001014: ori         $t2, $t8, 0x2
    ctx->r10 = ctx->r24 | 0X2;
    // 0x08001018: sw          $t2, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r10;
    // 0x0800101C: sh          $t7, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r15;
L_08001020:
    // 0x08001020: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x08001024: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30C8) << 16);
    // 0x08001028: lwc1        $f6, 0x30C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30C8));
    // 0x0800102C: lw          $t4, 0x18($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X18);
    // 0x08001030: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001034: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001038: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x0800103C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08001040: nop

    // 0x08001044: bc1f        L_08002160
    if (!c1cs) {
        // 0x08001048: nop
    
            goto L_08002160;
    }
    // 0x08001048: nop

    // 0x0800104C: jalr        $t9
    // 0x08001050: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001050: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_8:
    // 0x08001054: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001058: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x0800105C: b           L_08002160
    // 0x08001060: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08002160;
    // 0x08001060: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08001064:
    // 0x08001064: lhu         $t5, 0x8A($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800106C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001070: bne         $t5, $at, L_08001080
    if (ctx->r13 != ctx->r1) {
        // 0x08001074: addiu       $t9, $t9, -0x7438
        ctx->r25 = ADD32(ctx->r25, -0X7438);
            goto L_08001080;
    }
    // 0x08001074: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001078: jalr        $t9
    // 0x0800107C: addiu       $a0, $zero, 0x146
    ctx->r4 = ADD32(0, 0X146);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800107C: addiu       $a0, $zero, 0x146
    ctx->r4 = ADD32(0, 0X146);
    after_9:
L_08001080:
    // 0x08001080: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08001084: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001088: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800108C: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x08001090: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001094: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(57, 0X261C) << 16);
    // 0x08001098: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800109C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x080010A0: nop

    // 0x080010A4: bc1fl       L_08001190
    if (!c1cs) {
        // 0x080010A8: sh          $zero, 0x14($v0)
        MEM_H(0X14, ctx->r2) = 0;
            goto L_08001190;
    }
    goto skip_1;
    // 0x080010A8: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    skip_1:
    // 0x080010AC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080010B0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30D0) << 16);
    // 0x080010B4: ldc1        $f0, 0x30D0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(57, 0X30D0));
    // 0x080010B8: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x080010BC: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x080010C0: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x080010C4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x080010C8: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x080010CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080010D0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080010D4: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x080010D8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x080010DC: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x080010E0: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080010E4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080010E8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080010EC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080010F0: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x080010F4: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x080010F8: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x080010FC: lhu         $t4, 0x14($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X14);
    // 0x08001100: andi        $t3, $t4, 0x3FF
    ctx->r11 = ctx->r12 & 0X3FF;
    // 0x08001104: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
    // 0x08001108: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x0800110C: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x08001110: lhu         $t9, 0x16($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X16);
    // 0x08001114: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x08001118: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    // 0x0800111C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08001120: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x08001124: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x08001128: addiu       $t2, $t8, 0x30
    ctx->r10 = ADD32(ctx->r24, 0X30);
    // 0x0800112C: andi        $t4, $t2, 0x3FF
    ctx->r12 = ctx->r10 & 0X3FF;
    // 0x08001130: sh          $t4, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r12;
    // 0x08001134: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x08001138: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x0800113C: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08001140: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x08001144: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08001148: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x0800114C: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x08001150: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x08001154: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x08001158: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x0800115C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001160: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x08001164: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001168: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x0800116C: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x08001170: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x08001174: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08001178: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800117C: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x08001180: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001184: b           L_08001254
    // 0x08001188: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
        goto L_08001254;
    // 0x08001188: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
    // 0x0800118C: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
L_08001190:
    // 0x08001190: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08001194: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x08001198: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x0800119C: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x080011A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x080011A4: sh          $zero, 0x18($t7)
    MEM_H(0X18, ctx->r15) = 0;
    // 0x080011A8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x080011AC: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x080011B0: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080011B4: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x080011B8: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x080011BC: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x080011C0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x080011C4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080011C8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080011CC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080011D0: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x080011D4: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x080011D8: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x080011DC: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080011E0: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x080011E4: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x080011E8: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x080011EC: lhu         $t5, 0x14($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X14);
    // 0x080011F0: andi        $t9, $t5, 0x3FF
    ctx->r25 = ctx->r13 & 0X3FF;
    // 0x080011F4: sh          $t9, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r25;
    // 0x080011F8: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x080011FC: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x08001200: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x08001204: addiu       $t8, $t7, 0x30
    ctx->r24 = ADD32(ctx->r15, 0X30);
    // 0x08001208: andi        $t2, $t8, 0x3FF
    ctx->r10 = ctx->r24 & 0X3FF;
    // 0x0800120C: sh          $t2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r10;
    // 0x08001210: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x08001214: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x08001218: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x0800121C: andi        $t5, $t3, 0x3FF
    ctx->r13 = ctx->r11 & 0X3FF;
    // 0x08001220: sh          $t5, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r13;
    // 0x08001224: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x08001228: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x0800122C: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08001230: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x08001234: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x08001238: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x0800123C: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08001240: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x08001244: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x08001248: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x0800124C: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08001250: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
L_08001254:
    // 0x08001254: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x08001258: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800125C: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08001260: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x08001264: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x08001268: addiu       $a1, $a1, 0x261C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X261C));
    // 0x0800126C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001270: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x08001274: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x08001278: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x0800127C: jalr        $t9
    // 0x08001280: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08001280: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x08001284: beq         $v0, $zero, L_080012C0
    if (ctx->r2 == 0) {
        // 0x08001288: addiu       $t4, $zero, 0x42
        ctx->r12 = ADD32(0, 0X42);
            goto L_080012C0;
    }
    // 0x08001288: addiu       $t4, $zero, 0x42
    ctx->r12 = ADD32(0, 0X42);
    // 0x0800128C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001290: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08001294: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001298: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x0800129C: jalr        $t9
    // 0x080012A0: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080012A0: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_11:
    // 0x080012A4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x080012A8: lw          $t5, 0x64($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X64);
    // 0x080012AC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x080012B0: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    // 0x080012B4: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x080012B8: sw          $t6, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r14;
    // 0x080012BC: sh          $t3, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r11;
L_080012C0:
    // 0x080012C0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080012C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30D8) << 16);
    // 0x080012C8: lwc1        $f18, 0x30D8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30D8));
    // 0x080012CC: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x080012D0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080012D4: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x080012D8: lwc1        $f16, 0xC($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0XC);
    // 0x080012DC: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x080012E0: nop

    // 0x080012E4: bc1f        L_08002160
    if (!c1cs) {
        // 0x080012E8: nop
    
            goto L_08002160;
    }
    // 0x080012E8: nop

    // 0x080012EC: jalr        $t9
    // 0x080012F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080012F0: nop

    after_12:
    // 0x080012F4: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080012F8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080012FC: b           L_08002160
    // 0x08001300: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002160;
    // 0x08001300: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_08001304:
    // 0x08001304: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800130C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001310: bne         $t2, $at, L_08001320
    if (ctx->r10 != ctx->r1) {
        // 0x08001314: addiu       $t9, $t9, -0x7438
        ctx->r25 = ADD32(ctx->r25, -0X7438);
            goto L_08001320;
    }
    // 0x08001314: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001318: jalr        $t9
    // 0x0800131C: addiu       $a0, $zero, 0x147
    ctx->r4 = ADD32(0, 0X147);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800131C: addiu       $a0, $zero, 0x147
    ctx->r4 = ADD32(0, 0X147);
    after_13:
L_08001320:
    // 0x08001320: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x08001324: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800132C: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x08001330: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001334: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08001338: nop

    // 0x0800133C: bc1fl       L_0800143C
    if (!c1cs) {
        // 0x08001340: sh          $zero, 0x14($v0)
        MEM_H(0X14, ctx->r2) = 0;
            goto L_0800143C;
    }
    goto skip_2;
    // 0x08001340: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    skip_2:
    // 0x08001344: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001348: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30E0) << 16);
    // 0x0800134C: ldc1        $f0, 0x30E0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(57, 0X30E0));
    // 0x08001350: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x08001354: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x08001358: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x0800135C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08001360: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x08001364: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001368: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x0800136C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001370: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001374: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08001378: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x0800137C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001380: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001384: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x08001388: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x0800138C: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x08001390: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001394: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001398: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x0800139C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x080013A0: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x080013A4: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x080013A8: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x080013AC: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x080013B0: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080013B4: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
    // 0x080013B8: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x080013BC: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x080013C0: lhu         $t9, 0x16($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X16);
    // 0x080013C4: andi        $t4, $t9, 0x3FF
    ctx->r12 = ctx->r25 & 0X3FF;
    // 0x080013C8: sh          $t4, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r12;
    // 0x080013CC: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x080013D0: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x080013D4: lhu         $t5, 0x18($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X18);
    // 0x080013D8: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x080013DC: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
    // 0x080013E0: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x080013E4: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x080013E8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080013EC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080013F0: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x080013F4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080013F8: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x080013FC: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x08001400: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x08001404: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08001408: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x0800140C: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x08001410: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x08001414: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x08001418: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x0800141C: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x08001420: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08001424: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08001428: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x0800142C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001430: b           L_080014F0
    // 0x08001434: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
        goto L_080014F0;
    // 0x08001434: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x08001438: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
L_0800143C:
    // 0x0800143C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x08001440: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x08001444: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x08001448: lw          $v0, 0x18($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X18);
    // 0x0800144C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001450: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001454: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x08001458: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x0800145C: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x08001460: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001464: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001468: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x0800146C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001470: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x08001474: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x08001478: lw          $v0, 0x18($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X18);
    // 0x0800147C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001480: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x08001484: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x08001488: lw          $v0, 0x18($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X18);
    // 0x0800148C: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x08001490: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x08001494: sh          $t7, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r15;
    // 0x08001498: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x0800149C: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x080014A0: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x080014A4: andi        $t9, $t2, 0x3FF
    ctx->r25 = ctx->r10 & 0X3FF;
    // 0x080014A8: sh          $t9, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r25;
    // 0x080014AC: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x080014B0: lw          $v0, 0x18($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X18);
    // 0x080014B4: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x080014B8: andi        $t5, $t3, 0x3FF
    ctx->r13 = ctx->r11 & 0X3FF;
    // 0x080014BC: sh          $t5, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r13;
    // 0x080014C0: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x080014C4: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x080014C8: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x080014CC: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x080014D0: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x080014D4: lw          $v0, 0x18($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X18);
    // 0x080014D8: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x080014DC: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x080014E0: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x080014E4: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x080014E8: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x080014EC: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
L_080014F0:
    // 0x080014F0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x080014F4: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x080014F8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(57, 0X261C) << 16);
    // 0x080014FC: lw          $v0, 0x18($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X18);
    // 0x08001500: addiu       $a1, $a1, 0x261C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X261C));
    // 0x08001504: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001508: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x0800150C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x08001510: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x08001514: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x08001518: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800151C: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x08001520: jalr        $t9
    // 0x08001524: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08001524: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x08001528: beq         $v0, $zero, L_08001564
    if (ctx->r2 == 0) {
        // 0x0800152C: addiu       $t4, $zero, 0x42
        ctx->r12 = ADD32(0, 0X42);
            goto L_08001564;
    }
    // 0x0800152C: addiu       $t4, $zero, 0x42
    ctx->r12 = ADD32(0, 0X42);
    // 0x08001530: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001534: sh          $t4, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r12;
    // 0x08001538: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800153C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x08001540: jalr        $t9
    // 0x08001544: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08001544: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_15:
    // 0x08001548: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x0800154C: lw          $t5, 0x64($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X64);
    // 0x08001550: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001554: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001558: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x0800155C: sw          $t6, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r14;
    // 0x08001560: sh          $t3, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r11;
L_08001564:
    // 0x08001564: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x08001568: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30E8) << 16);
    // 0x0800156C: lwc1        $f6, 0x30E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30E8));
    // 0x08001570: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x08001574: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001578: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x0800157C: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08001580: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x08001584: nop

    // 0x08001588: bc1f        L_08002160
    if (!c1cs) {
        // 0x0800158C: nop
    
            goto L_08002160;
    }
    // 0x0800158C: nop

    // 0x08001590: jalr        $t9
    // 0x08001594: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x08001594: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_16:
    // 0x08001598: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x0800159C: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x080015A0: b           L_08002160
    // 0x080015A4: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
        goto L_08002160;
    // 0x080015A4: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_080015A8:
    // 0x080015A8: jal         0x08002BF8
    // 0x080015AC: nop

    func_08002BF8_729088(rdram, ctx);
        goto after_17;
    // 0x080015AC: nop

    after_17:
    // 0x080015B0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080015B4: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x080015B8: b           L_08002160
    // 0x080015BC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08002160;
    // 0x080015BC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_080015C0:
    // 0x080015C0: jal         0x08002C20
    // 0x080015C4: nop

    func_08002C20_7290B0(rdram, ctx);
        goto after_18;
    // 0x080015C4: nop

    after_18:
    // 0x080015C8: bne         $v0, $zero, L_08002160
    if (ctx->r2 != 0) {
        // 0x080015CC: addiu       $t4, $zero, 0xF
        ctx->r12 = ADD32(0, 0XF);
            goto L_08002160;
    }
    // 0x080015CC: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x080015D0: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080015D4: b           L_08002160
    // 0x080015D8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_08002160;
    // 0x080015D8: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_080015DC:
    // 0x080015DC: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x080015E0: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x080015E4: b           L_08002160
    // 0x080015E8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08002160;
    // 0x080015E8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_080015EC:
    // 0x080015EC: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x080015F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080015F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080015F8: bne         $v0, $at, L_08001628
    if (ctx->r2 != ctx->r1) {
        // 0x080015FC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08001628;
    }
    // 0x080015FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001600: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001604: addiu       $t9, $t9, 0x2F8
    ctx->r25 = ADD32(ctx->r25, 0X2F8);
    // 0x08001608: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x0800160C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x08001610: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001614: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08001618: jalr        $t9
    // 0x0800161C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x0800161C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_19:
    // 0x08001620: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08001624: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_08001628:
    // 0x08001628: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x0800162C: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x08001630: beq         $at, $zero, L_0800167C
    if (ctx->r1 == 0) {
        // 0x08001634: addiu       $v1, $v1, 0x2F8
        ctx->r3 = ADD32(ctx->r3, 0X2F8);
            goto L_0800167C;
    }
    // 0x08001634: addiu       $v1, $v1, 0x2F8
    ctx->r3 = ADD32(ctx->r3, 0X2F8);
    // 0x08001638: bgez        $v0, L_0800164C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800163C: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_0800164C;
    }
    // 0x0800163C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x08001640: beq         $t6, $zero, L_0800164C
    if (ctx->r14 == 0) {
        // 0x08001644: nop
    
            goto L_0800164C;
    }
    // 0x08001644: nop

    // 0x08001648: addiu       $t6, $t6, -0x2
    ctx->r14 = ADD32(ctx->r14, -0X2);
L_0800164C:
    // 0x0800164C: bne         $t6, $zero, L_0800167C
    if (ctx->r14 != 0) {
        // 0x08001650: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_0800167C;
    }
    // 0x08001650: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001654: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x08001658: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x0800165C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001660: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001664: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08001668: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x0800166C: jalr        $v1
    // 0x08001670: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_20;
    // 0x08001670: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_20:
    // 0x08001674: b           L_080016A4
    // 0x08001678: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
        goto L_080016A4;
    // 0x08001678: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_0800167C:
    // 0x0800167C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x08001680: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08001684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800168C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001690: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001694: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x08001698: jalr        $v1
    // 0x0800169C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_21;
    // 0x0800169C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_21:
    // 0x080016A0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_080016A4:
    // 0x080016A4: lhu         $t2, 0x8A($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X8A);
    // 0x080016A8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x080016AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080016B0: bne         $t2, $at, L_08001774
    if (ctx->r10 != ctx->r1) {
        // 0x080016B4: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_08001774;
    }
    // 0x080016B4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080016B8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080016BC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x080016C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x080016C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080016C8: jalr        $t9
    // 0x080016CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x080016CC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_22:
    // 0x080016D0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x080016D4: lui         $at, 0xC3B6
    ctx->r1 = S32(0XC3B6 << 16);
    // 0x080016D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080016DC: sh          $t3, 0xEC($s1)
    MEM_H(0XEC, ctx->r17) = ctx->r11;
    // 0x080016E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080016E4: andi        $t0, $t3, 0xFFFF
    ctx->r8 = ctx->r11 & 0XFFFF;
    // 0x080016E8: addiu       $t9, $t9, 0x410
    ctx->r25 = ADD32(ctx->r25, 0X410);
    // 0x080016EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(57, 0X2508) << 16);
    // 0x080016F0: addiu       $a1, $a1, 0x2508
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(57, 0X2508));
    // 0x080016F4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x080016F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x080016FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001700: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    // 0x08001704: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    // 0x08001708: jalr        $t9
    // 0x0800170C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x0800170C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_23:
    // 0x08001710: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x08001714: beq         $v0, $zero, L_08001774
    if (ctx->r2 == 0) {
        // 0x08001718: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_08001774;
    }
    // 0x08001718: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x0800171C: addiu       $t5, $zero, 0x42
    ctx->r13 = ADD32(0, 0X42);
    // 0x08001720: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001724: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08001728: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800172C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x08001730: jalr        $t9
    // 0x08001734: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08001734: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_24:
    // 0x08001738: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x0800173C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001740: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x08001744: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
    // 0x08001748: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x0800174C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08001750: addiu       $a0, $zero, 0x148
    ctx->r4 = ADD32(0, 0X148);
    // 0x08001754: lw          $t8, 0x64($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X64);
    // 0x08001758: ori         $t2, $t8, 0x2
    ctx->r10 = ctx->r24 | 0X2;
    // 0x0800175C: sw          $t2, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r10;
    // 0x08001760: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x08001764: lw          $t3, 0x18($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X18);
    // 0x08001768: jalr        $t9
    // 0x0800176C: sb          $a3, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x0800176C: sb          $a3, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r7;
    after_25:
    // 0x08001770: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_08001774:
    // 0x08001774: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001778: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x0800177C: bne         $at, $zero, L_080017C8
    if (ctx->r1 != 0) {
        // 0x08001780: slti        $at, $t0, 0x2
        ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
            goto L_080017C8;
    }
    // 0x08001780: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x08001784: bne         $at, $zero, L_080017C8
    if (ctx->r1 != 0) {
        // 0x08001788: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_080017C8;
    }
    // 0x08001788: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800178C: addiu       $t0, $t0, -0x5
    ctx->r8 = ADD32(ctx->r8, -0X5);
    // 0x08001790: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x08001794: beq         $at, $zero, L_080017A0
    if (ctx->r1 == 0) {
        // 0x08001798: addiu       $t5, $zero, 0xFF
        ctx->r13 = ADD32(0, 0XFF);
            goto L_080017A0;
    }
    // 0x08001798: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x0800179C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_080017A0:
    // 0x080017A0: sh          $t0, 0xEC($s1)
    MEM_H(0XEC, ctx->r17) = ctx->r8;
    // 0x080017A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x080017A8: andi        $a1, $t0, 0xFF
    ctx->r5 = ctx->r8 & 0XFF;
    // 0x080017AC: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x080017B0: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x080017B4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x080017B8: jalr        $t9
    // 0x080017BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080017BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_26:
    // 0x080017C0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x080017C4: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_080017C8:
    // 0x080017C8: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x080017CC: bne         $at, $zero, L_08002160
    if (ctx->r1 != 0) {
        // 0x080017D0: slti        $at, $t0, 0x2
        ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
            goto L_08002160;
    }
    // 0x080017D0: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x080017D4: beq         $at, $zero, L_08002160
    if (ctx->r1 == 0) {
        // 0x080017D8: nop
    
            goto L_08002160;
    }
    // 0x080017D8: nop

    // 0x080017DC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x080017E0: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x080017E4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x080017E8: lw          $t6, 0x60($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X60);
    // 0x080017EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080017F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080017F4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080017F8: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    // 0x080017FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001800: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08001804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001808: jalr        $t9
    // 0x0800180C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x0800180C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_27:
    // 0x08001810: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001814: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x08001818: b           L_08002160
    // 0x0800181C: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08002160;
    // 0x0800181C: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08001820:
    // 0x08001820: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001824: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001828: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x0800182C: bne         $v0, $at, L_08001A6C
    if (ctx->r2 != ctx->r1) {
        // 0x08001830: addiu       $t0, $t0, -0x39FC
        ctx->r8 = ADD32(ctx->r8, -0X39FC);
            goto L_08001A6C;
    }
    // 0x08001830: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08001834: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x08001838: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x0800183C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001840: lw          $t3, 0x5C($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X5C);
    // 0x08001844: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x08001848: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x0800184C: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    // 0x08001850: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x08001854: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001858: addiu       $v1, $v1, -0x39EC
    ctx->r3 = ADD32(ctx->r3, -0X39EC);
    // 0x0800185C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x08001860: sb          $t5, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r13;
    // 0x08001864: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x08001868: lui         $at, 0x4292
    ctx->r1 = S32(0X4292 << 16);
    // 0x0800186C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001870: lw          $t8, 0x5C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5C);
    // 0x08001874: lui         $at, 0xC278
    ctx->r1 = S32(0XC278 << 16);
    // 0x08001878: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800187C: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x08001880: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x08001884: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30EC) << 16);
    // 0x08001888: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x0800188C: swc1        $f10, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f10.u32l;
    // 0x08001890: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08001894: addiu       $a2, $a2, -0x39E4
    ctx->r6 = ADD32(ctx->r6, -0X39E4);
    // 0x08001898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800189C: swc1        $f16, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f16.u32l;
    // 0x080018A0: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x080018A4: lwc1        $f18, 0x30EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30EC));
    // 0x080018A8: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
    // 0x080018AC: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x080018B0: sh          $t1, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r9;
    // 0x080018B4: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x080018B8: sh          $zero, 0x14($t5)
    MEM_H(0X14, ctx->r13) = 0;
    // 0x080018BC: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x080018C0: sh          $zero, 0x18($t6)
    MEM_H(0X18, ctx->r14) = 0;
    // 0x080018C4: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x080018C8: sh          $t1, 0x94($t7)
    MEM_H(0X94, ctx->r15) = ctx->r9;
    // 0x080018CC: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x080018D0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x080018D4: lwc1        $f0, 0x8($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X8);
    // 0x080018D8: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x080018DC: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x080018E0: swc1        $f0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f0.u32l;
    // 0x080018E4: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x080018E8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x080018EC: lwc1        $f0, 0xC($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0XC);
    // 0x080018F0: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x080018F4: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x080018F8: swc1        $f0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f0.u32l;
    // 0x080018FC: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08001900: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x08001904: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08001908: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
    // 0x0800190C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x08001910: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x08001914: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x08001918: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x0800191C: lhu         $v0, 0x16($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X16);
    // 0x08001920: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x08001924: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x08001928: sh          $v0, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r2;
    // 0x0800192C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x08001930: sh          $v0, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r2;
    // 0x08001934: jalr        $t9
    // 0x08001938: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08001938: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_28:
    // 0x0800193C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08001940: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x08001944: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001948: lw          $t3, 0x60($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X60);
    // 0x0800194C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001950: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001954: ori         $t5, $t3, 0x20
    ctx->r13 = ctx->r11 | 0X20;
    // 0x08001958: sw          $t5, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r13;
    // 0x0800195C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08001960: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001968: lw          $t6, 0x60($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X60);
    // 0x0800196C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x08001970: sw          $t7, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r15;
    // 0x08001974: jalr        $t9
    // 0x08001978: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08001978: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_29:
    // 0x0800197C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x08001980: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30F0) << 16);
    // 0x08001984: lwc1        $f0, 0x30F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30F0));
    // 0x08001988: lw          $t4, 0x18($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X18);
    // 0x0800198C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x08001990: lui         $at, 0x42B2
    ctx->r1 = S32(0X42B2 << 16);
    // 0x08001994: sb          $t8, 0x5($t4)
    MEM_B(0X5, ctx->r12) = ctx->r24;
    // 0x08001998: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x0800199C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080019A0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30F4) << 16);
    // 0x080019A4: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x080019A8: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x080019AC: swc1        $f4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f4.u32l;
    // 0x080019B0: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x080019B4: lwc1        $f6, 0x30F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30F4));
    // 0x080019B8: lui         $at, 0x438F
    ctx->r1 = S32(0X438F << 16);
    // 0x080019BC: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x080019C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080019C4: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    // 0x080019C8: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x080019CC: lw          $t2, 0x18($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X18);
    // 0x080019D0: swc1        $f8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f8.u32l;
    // 0x080019D4: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x080019D8: lw          $t4, 0x18($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X18);
    // 0x080019DC: sh          $zero, 0x14($t4)
    MEM_H(0X14, ctx->r12) = 0;
    // 0x080019E0: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x080019E4: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x080019E8: sh          $zero, 0x16($t5)
    MEM_H(0X16, ctx->r13) = 0;
    // 0x080019EC: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x080019F0: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x080019F4: sh          $zero, 0x18($t7)
    MEM_H(0X18, ctx->r15) = 0;
    // 0x080019F8: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x080019FC: lw          $t2, 0x18($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X18);
    // 0x08001A00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A04: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08001A08: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x08001A0C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x08001A10: lw          $t4, 0x18($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X18);
    // 0x08001A14: swc1        $f0, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f0.u32l;
    // 0x08001A18: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x08001A1C: lw          $t5, 0x18($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X18);
    // 0x08001A20: swc1        $f0, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f0.u32l;
    // 0x08001A24: jalr        $t9
    // 0x08001A28: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08001A28: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_30:
    // 0x08001A2C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A30: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001A34: lui         $a3, 0x4398
    ctx->r7 = S32(0X4398 << 16);
    // 0x08001A38: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001A3C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001A40: lui         $a1, 0x42C0
    ctx->r5 = S32(0X42C0 << 16);
    // 0x08001A44: jalr        $t9
    // 0x08001A48: lui         $a2, 0xC260
    ctx->r6 = S32(0XC260 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08001A48: lui         $a2, 0xC260
    ctx->r6 = S32(0XC260 << 16);
    after_31:
    // 0x08001A4C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A50: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001A54: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001A58: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x08001A5C: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x08001A60: jalr        $t9
    // 0x08001A64: lui         $a3, 0x4387
    ctx->r7 = S32(0X4387 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x08001A64: lui         $a3, 0x4387
    ctx->r7 = S32(0X4387 << 16);
    after_32:
    // 0x08001A68: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_08001A6C:
    // 0x08001A6C: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x08001A70: bne         $at, $zero, L_08002160
    if (ctx->r1 != 0) {
        // 0x08001A74: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002160;
    }
    // 0x08001A74: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A78: addiu       $t9, $t9, 0x148
    ctx->r25 = ADD32(ctx->r25, 0X148);
    // 0x08001A7C: jalr        $t9
    // 0x08001A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x08001A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_33:
    // 0x08001A84: bne         $v0, $zero, L_08002160
    if (ctx->r2 != 0) {
        // 0x08001A88: addiu       $t6, $zero, 0x6
        ctx->r14 = ADD32(0, 0X6);
            goto L_08002160;
    }
    // 0x08001A88: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x08001A8C: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001A90: b           L_08002160
    // 0x08001A94: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_08002160;
    // 0x08001A94: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_08001A98:
    // 0x08001A98: lhu         $t7, 0x8A($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001A9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001AA0: bne         $t7, $at, L_08001ACC
    if (ctx->r15 != ctx->r1) {
        // 0x08001AA4: nop
    
            goto L_08001ACC;
    }
    // 0x08001AA4: nop

    // 0x08001AA8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08001AAC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AB0: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x08001AB4: lw          $t2, 0x60($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X60);
    // 0x08001AB8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x08001ABC: ori         $t8, $t2, 0x1
    ctx->r24 = ctx->r10 | 0X1;
    // 0x08001AC0: sw          $t8, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r24;
    // 0x08001AC4: jalr        $t9
    // 0x08001AC8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x08001AC8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_34:
L_08001ACC:
    // 0x08001ACC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AD0: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08001AD4: jalr        $t9
    // 0x08001AD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x08001AD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_35:
    // 0x08001ADC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001AE0: bne         $v0, $at, L_08002160
    if (ctx->r2 != ctx->r1) {
        // 0x08001AE4: addiu       $t4, $zero, 0x8
        ctx->r12 = ADD32(0, 0X8);
            goto L_08002160;
    }
    // 0x08001AE4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x08001AE8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001AEC: b           L_08002160
    // 0x08001AF0: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
        goto L_08002160;
    // 0x08001AF0: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
L_08001AF4:
    // 0x08001AF4: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001AF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001AFC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001B00: bne         $t3, $at, L_08001C40
    if (ctx->r11 != ctx->r1) {
        // 0x08001B04: addiu       $t0, $t0, -0x39FC
        ctx->r8 = ADD32(ctx->r8, -0X39FC);
            goto L_08001C40;
    }
    // 0x08001B04: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08001B08: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x08001B0C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08001B10: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001B14: lw          $t6, 0x5C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X5C);
    // 0x08001B18: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x08001B1C: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08001B20: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x08001B24: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08001B28: lui         $a3, 0x4388
    ctx->r7 = S32(0X4388 << 16);
    // 0x08001B2C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001B30: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x08001B34: sb          $t7, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = ctx->r15;
    // 0x08001B38: lui         $at, 0x4292
    ctx->r1 = S32(0X4292 << 16);
    // 0x08001B3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001B40: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08001B44: lui         $at, 0xC278
    ctx->r1 = S32(0XC278 << 16);
    // 0x08001B48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001B4C: swc1        $f10, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f10.u32l;
    // 0x08001B50: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x08001B54: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(57, 0X30F8) << 16);
    // 0x08001B58: lui         $a1, 0x429C
    ctx->r5 = S32(0X429C << 16);
    // 0x08001B5C: swc1        $f16, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f16.u32l;
    // 0x08001B60: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x08001B64: lwc1        $f18, 0x30F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(57, 0X30F8));
    // 0x08001B68: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B6C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08001B70: swc1        $f18, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f18.u32l;
    // 0x08001B74: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x08001B78: lui         $a2, 0xC238
    ctx->r6 = S32(0XC238 << 16);
    // 0x08001B7C: sh          $t1, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r9;
    // 0x08001B80: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x08001B84: sh          $zero, 0x14($t5)
    MEM_H(0X14, ctx->r13) = 0;
    // 0x08001B88: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08001B8C: sh          $zero, 0x18($t6)
    MEM_H(0X18, ctx->r14) = 0;
    // 0x08001B90: jalr        $t9
    // 0x08001B94: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x08001B94: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_36:
    // 0x08001B98: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B9C: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x08001BA0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001BA4: lui         $a1, 0x429C
    ctx->r5 = S32(0X429C << 16);
    // 0x08001BA8: lui         $a2, 0xC254
    ctx->r6 = S32(0XC254 << 16);
    // 0x08001BAC: jalr        $t9
    // 0x08001BB0: lui         $a3, 0x43B2
    ctx->r7 = S32(0X43B2 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x08001BB0: lui         $a3, 0x43B2
    ctx->r7 = S32(0X43B2 << 16);
    after_37:
    // 0x08001BB4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08001BB8: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x08001BBC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08001BC0: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x08001BC4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x08001BC8: addu        $t8, $t2, $v0
    ctx->r24 = ADD32(ctx->r10, ctx->r2);
    // 0x08001BCC: lw          $t4, 0x3018($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X3018);
    // 0x08001BD0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x08001BD4: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x08001BD8: sb          $t7, 0xD($t4)
    MEM_B(0XD, ctx->r12) = ctx->r15;
    // 0x08001BDC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x08001BE0: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    // 0x08001BE4: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x08001BE8: lw          $t9, 0x3018($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X3018);
    // 0x08001BEC: sb          $t3, 0x10($t9)
    MEM_B(0X10, ctx->r25) = ctx->r11;
    // 0x08001BF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001BF4: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001BF8: jalr        $t9
    // 0x08001BFC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_38;
    // 0x08001BFC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_38:
    // 0x08001C00: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C04: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001C08: lui         $a3, 0x438A
    ctx->r7 = S32(0X438A << 16);
    // 0x08001C0C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001C10: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001C14: lui         $a1, 0x429C
    ctx->r5 = S32(0X429C << 16);
    // 0x08001C18: jalr        $t9
    // 0x08001C1C: lui         $a2, 0xC27C
    ctx->r6 = S32(0XC27C << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_39;
    // 0x08001C1C: lui         $a2, 0xC27C
    ctx->r6 = S32(0XC27C << 16);
    after_39:
    // 0x08001C20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C24: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001C28: lui         $a3, 0x43AF
    ctx->r7 = S32(0X43AF << 16);
    // 0x08001C2C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001C30: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001C34: lui         $a1, 0x429C
    ctx->r5 = S32(0X429C << 16);
    // 0x08001C38: jalr        $t9
    // 0x08001C3C: lui         $a2, 0xC200
    ctx->r6 = S32(0XC200 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08001C3C: lui         $a2, 0xC200
    ctx->r6 = S32(0XC200 << 16);
    after_40:
L_08001C40:
    // 0x08001C40: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001C44: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001C48: jalr        $t9
    // 0x08001C4C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x08001C4C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_41:
    // 0x08001C50: bne         $v0, $zero, L_08002160
    if (ctx->r2 != 0) {
        // 0x08001C54: lui         $t2, 0x8016
        ctx->r10 = S32(0X8016 << 16);
            goto L_08002160;
    }
    // 0x08001C54: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x08001C58: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x08001C5C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x08001C60: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x08001C64: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x08001C68: lw          $t8, -0x4FE8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4FE8);
    // 0x08001C6C: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x08001C70: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x08001C74: sb          $zero, 0xD($t8)
    MEM_B(0XD, ctx->r24) = 0;
    // 0x08001C78: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x08001C7C: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x08001C80: lw          $t4, -0x4FE8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4FE8);
    // 0x08001C84: sb          $zero, 0x10($t4)
    MEM_B(0X10, ctx->r12) = 0;
    // 0x08001C88: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001C8C: b           L_08002160
    // 0x08001C90: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08002160;
    // 0x08001C90: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08001C94:
    // 0x08001C94: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001C98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001C9C: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    // 0x08001CA0: bne         $t6, $at, L_08001CF0
    if (ctx->r14 != ctx->r1) {
        // 0x08001CA4: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08001CF0;
    }
    // 0x08001CA4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CA8: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x08001CAC: jalr        $t9
    // 0x08001CB0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08001CB0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_42:
    // 0x08001CB4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CB8: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08001CBC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001CC0: lui         $a1, 0x42D8
    ctx->r5 = S32(0X42D8 << 16);
    // 0x08001CC4: lui         $a2, 0xC258
    ctx->r6 = S32(0XC258 << 16);
    // 0x08001CC8: jalr        $t9
    // 0x08001CCC: lui         $a3, 0x43A4
    ctx->r7 = S32(0X43A4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x08001CCC: lui         $a3, 0x43A4
    ctx->r7 = S32(0X43A4 << 16);
    after_43:
    // 0x08001CD0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CD4: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08001CD8: lui         $a3, 0x4399
    ctx->r7 = S32(0X4399 << 16);
    // 0x08001CDC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x08001CE0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08001CE4: lui         $a1, 0x42B0
    ctx->r5 = S32(0X42B0 << 16);
    // 0x08001CE8: jalr        $t9
    // 0x08001CEC: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x08001CEC: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    after_44:
L_08001CF0:
    // 0x08001CF0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001CF4: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x08001CF8: jalr        $t9
    // 0x08001CFC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x08001CFC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    after_45:
    // 0x08001D00: bne         $v0, $zero, L_08002160
    if (ctx->r2 != 0) {
        // 0x08001D04: addiu       $a0, $zero, 0x1F1
        ctx->r4 = ADD32(0, 0X1F1);
            goto L_08002160;
    }
    // 0x08001D04: addiu       $a0, $zero, 0x1F1
    ctx->r4 = ADD32(0, 0X1F1);
    // 0x08001D08: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001D0C: addiu       $t9, $t9, -0x2C78
    ctx->r25 = ADD32(ctx->r25, -0X2C78);
    // 0x08001D10: jalr        $t9
    // 0x08001D14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x08001D14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_46:
    // 0x08001D18: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001D1C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001D20: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001D28: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001D2C: jalr        $t9
    // 0x08001D30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_47;
    // 0x08001D30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_47:
    // 0x08001D34: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001D38: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x08001D3C: b           L_08002160
    // 0x08001D40: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08002160;
    // 0x08001D40: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08001D44:
    // 0x08001D44: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D48: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001D4C: jalr        $t9
    // 0x08001D50: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_48;
    // 0x08001D50: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_48:
    // 0x08001D54: beq         $v0, $zero, L_08002160
    if (ctx->r2 == 0) {
        // 0x08001D58: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08002160;
    }
    // 0x08001D58: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001D5C: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08001D60: jalr        $t9
    // 0x08001D64: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08001D64: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_49:
    // 0x08001D68: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001D6C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001D70: lui         $a2, 0x3E2A
    ctx->r6 = S32(0X3E2A << 16);
    // 0x08001D74: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001D78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001D7C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x08001D80: jalr        $t9
    // 0x08001D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_50;
    // 0x08001D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_50:
    // 0x08001D88: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001D8C: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x08001D90: b           L_08002160
    // 0x08001D94: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
        goto L_08002160;
    // 0x08001D94: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_08001D98:
    // 0x08001D98: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001D9C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001DA0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001DA4: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x08001DA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001DAC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08001DB0: lbu         $t7, 0x7C($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X7C);
    // 0x08001DB4: andi        $t4, $t7, 0x2
    ctx->r12 = ctx->r15 & 0X2;
    // 0x08001DB8: beq         $t4, $zero, L_08002160
    if (ctx->r12 == 0) {
        // 0x08001DBC: nop
    
            goto L_08002160;
    }
    // 0x08001DBC: nop

    // 0x08001DC0: jalr        $t9
    // 0x08001DC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x08001DC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_51:
    // 0x08001DC8: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001DCC: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x08001DD0: b           L_08002160
    // 0x08001DD4: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_08002160;
    // 0x08001DD4: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
L_08001DD8:
    // 0x08001DD8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001DDC: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x08001DE0: jalr        $t9
    // 0x08001DE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_52;
    // 0x08001DE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_52:
    // 0x08001DE8: beq         $v0, $zero, L_08001E20
    if (ctx->r2 == 0) {
        // 0x08001DEC: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08001E20;
    }
    // 0x08001DEC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x08001DF0: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x08001DF4: jalr        $t9
    // 0x08001DF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_53;
    // 0x08001DF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_53:
    // 0x08001DFC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x08001E00: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x08001E04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001E08: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001E0C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x08001E10: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x08001E14: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x08001E18: jalr        $t9
    // 0x08001E1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_54;
    // 0x08001E1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_54:
L_08001E20:
    // 0x08001E20: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001E24: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08001E28: jalr        $t9
    // 0x08001E2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08001E2C: nop

    after_55:
    // 0x08001E30: bne         $v0, $zero, L_08002160
    if (ctx->r2 != 0) {
        // 0x08001E34: addiu       $a3, $zero, 0xB
        ctx->r7 = ADD32(0, 0XB);
            goto L_08002160;
    }
    // 0x08001E34: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x08001E38: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001E3C: b           L_08002160
    // 0x08001E40: sb          $a3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r7;
        goto L_08002160;
    // 0x08001E40: sb          $a3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r7;
L_08001E44:
    // 0x08001E44: lhu         $t6, 0x8A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001E48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001E4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001E50: bne         $t6, $at, L_08001E6C
    if (ctx->r14 != ctx->r1) {
        // 0x08001E54: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08001E6C;
    }
    // 0x08001E54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001E58: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E5C: addiu       $t9, $t9, 0x26C
    ctx->r25 = ADD32(ctx->r25, 0X26C);
    // 0x08001E60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001E64: jalr        $t9
    // 0x08001E68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08001E68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_56:
L_08001E6C:
    // 0x08001E6C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001E70: addiu       $t9, $t9, 0x1F0
    ctx->r25 = ADD32(ctx->r25, 0X1F0);
    // 0x08001E74: jalr        $t9
    // 0x08001E78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_57;
    // 0x08001E78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_57:
    // 0x08001E7C: bne         $v0, $zero, L_08002160
    if (ctx->r2 != 0) {
        // 0x08001E80: addiu       $t3, $zero, 0xA
        ctx->r11 = ADD32(0, 0XA);
            goto L_08002160;
    }
    // 0x08001E80: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x08001E84: sh          $zero, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = 0;
    // 0x08001E88: b           L_08002160
    // 0x08001E8C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
        goto L_08002160;
    // 0x08001E8C: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_08001E90:
    // 0x08001E90: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x08001E94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001E98: bne         $v0, $at, L_0800207C
    if (ctx->r2 != ctx->r1) {
        // 0x08001E9C: lui         $at, 0x40E0
        ctx->r1 = S32(0X40E0 << 16);
            goto L_0800207C;
    }
    // 0x08001E9C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x08001EA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001EA4: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08001EA8: lui         $at, 0xC25C
    ctx->r1 = S32(0XC25C << 16);
    // 0x08001EAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001EB0: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x08001EB4: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08001EB8: lui         $at, 0x4347
    ctx->r1 = S32(0X4347 << 16);
    // 0x08001EBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001EC0: swc1        $f6, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f6.u32l;
    // 0x08001EC4: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08001EC8: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08001ECC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x08001ED0: swc1        $f8, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f8.u32l;
    // 0x08001ED4: lw          $t4, 0x84($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X84);
    // 0x08001ED8: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x08001EDC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08001EE0: sh          $t1, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r9;
    // 0x08001EE4: lw          $t5, 0x84($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X84);
    // 0x08001EE8: addiu       $v1, $v1, -0x39EC
    ctx->r3 = ADD32(ctx->r3, -0X39EC);
    // 0x08001EEC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x08001EF0: sh          $zero, 0x14($t5)
    MEM_H(0X14, ctx->r13) = 0;
    // 0x08001EF4: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08001EF8: addiu       $a2, $a2, -0x39E4
    ctx->r6 = ADD32(ctx->r6, -0X39E4);
    // 0x08001EFC: sh          $zero, 0x18($t6)
    MEM_H(0X18, ctx->r14) = 0;
    // 0x08001F00: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x08001F04: sh          $t1, 0x94($t9)
    MEM_H(0X94, ctx->r25) = ctx->r9;
    // 0x08001F08: lw          $t3, 0x84($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X84);
    // 0x08001F0C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x08001F10: lwc1        $f0, 0x8($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X8);
    // 0x08001F14: swc1        $f0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f0.u32l;
    // 0x08001F18: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x08001F1C: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x08001F20: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08001F24: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x08001F28: lwc1        $f0, 0xC($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0XC);
    // 0x08001F2C: swc1        $f0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f0.u32l;
    // 0x08001F30: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x08001F34: swc1        $f0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f0.u32l;
    // 0x08001F38: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x08001F3C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x08001F40: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    // 0x08001F44: swc1        $f0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
    // 0x08001F48: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x08001F4C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001F50: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08001F54: swc1        $f0, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f0.u32l;
    // 0x08001F58: lw          $t2, 0x84($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X84);
    // 0x08001F5C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x08001F60: lhu         $v0, 0x16($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X16);
    // 0x08001F64: sh          $v0, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r2;
    // 0x08001F68: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x08001F6C: sh          $v0, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r2;
    // 0x08001F70: jalr        $t9
    // 0x08001F74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08001F74: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_58:
    // 0x08001F78: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x08001F7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001F80: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x08001F84: lui         $at, 0xC258
    ctx->r1 = S32(0XC258 << 16);
    // 0x08001F88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001F8C: swc1        $f10, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f10.u32l;
    // 0x08001F90: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x08001F94: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x08001F98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08001F9C: swc1        $f16, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f16.u32l;
    // 0x08001FA0: lw          $t6, 0x1C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1C);
    // 0x08001FA4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08001FA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001FAC: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x08001FB0: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x08001FB4: lui         $at, 0xC210
    ctx->r1 = S32(0XC210 << 16);
    // 0x08001FB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001FBC: swc1        $f4, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f4.u32l;
    // 0x08001FC0: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x08001FC4: lui         $at, 0x4344
    ctx->r1 = S32(0X4344 << 16);
    // 0x08001FC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001FCC: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x08001FD0: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x08001FD4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x08001FD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08001FDC: swc1        $f8, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f8.u32l;
    // 0x08001FE0: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x08001FE4: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x08001FE8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x08001FEC: swc1        $f10, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f10.u32l;
    // 0x08001FF0: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x08001FF4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08001FF8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x08001FFC: sb          $zero, -0x51E0($at)
    MEM_B(-0X51E0, ctx->r1) = 0;
    // 0x08002000: lw          $t4, -0x39D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39D8);
    // 0x08002004: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x08002008: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800200C: sb          $zero, 0x64($t4)
    MEM_B(0X64, ctx->r12) = 0;
    // 0x08002010: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x08002014: lui         $at, 0xC258
    ctx->r1 = S32(0XC258 << 16);
    // 0x08002018: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x0800201C: swc1        $f16, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f16.u32l;
    // 0x08002020: lw          $t6, 0x1C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1C);
    // 0x08002024: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x08002028: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800202C: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
    // 0x08002030: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x08002034: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08002038: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800203C: swc1        $f4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f4.u32l;
    // 0x08002040: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x08002044: lui         $at, 0xC210
    ctx->r1 = S32(0XC210 << 16);
    // 0x08002048: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x0800204C: swc1        $f6, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f6.u32l;
    // 0x08002050: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x08002054: lui         $at, 0x4344
    ctx->r1 = S32(0X4344 << 16);
    // 0x08002058: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800205C: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x08002060: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x08002064: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x08002068: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800206C: swc1        $f10, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f10.u32l;
    // 0x08002070: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x08002074: swc1        $f16, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f16.u32l;
    // 0x08002078: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_0800207C:
    // 0x0800207C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08002080: bne         $v0, $at, L_08002130
    if (ctx->r2 != ctx->r1) {
        // 0x08002084: lui         $t4, 0x8003
        ctx->r12 = S32(0X8003 << 16);
            goto L_08002130;
    }
    // 0x08002084: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x08002088: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800208C: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x08002090: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08002094: addiu       $t4, $t4, 0x4EF8
    ctx->r12 = ADD32(ctx->r12, 0X4EF8);
    // 0x08002098: jalr        $t9
    // 0x0800209C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x0800209C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    after_59:
    // 0x080020A0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080020A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x080020A8: jalr        $t9
    // 0x080020AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x080020AC: nop

    after_60:
    // 0x080020B0: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x080020B4: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x080020B8: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x080020BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x080020C0: sb          $zero, 0x64($t5)
    MEM_B(0X64, ctx->r13) = 0;
    // 0x080020C4: lw          $t6, 0x1C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1C);
    // 0x080020C8: lui         $at, 0xC258
    ctx->r1 = S32(0XC258 << 16);
    // 0x080020CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080020D0: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x080020D4: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x080020D8: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x080020DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080020E0: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x080020E4: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x080020E8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x080020EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080020F0: swc1        $f6, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f6.u32l;
    // 0x080020F4: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x080020F8: lui         $at, 0xC210
    ctx->r1 = S32(0XC210 << 16);
    // 0x080020FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08002100: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x08002104: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x08002108: lui         $at, 0x4344
    ctx->r1 = S32(0X4344 << 16);
    // 0x0800210C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08002110: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
    // 0x08002114: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x08002118: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x0800211C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08002120: swc1        $f16, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f16.u32l;
    // 0x08002124: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    // 0x08002128: swc1        $f18, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f18.u32l;
    // 0x0800212C: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
L_08002130:
    // 0x08002130: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x08002134: bne         $at, $zero, L_08002160
    if (ctx->r1 != 0) {
        // 0x08002138: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08002160;
    }
    // 0x08002138: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800213C: addiu       $t9, $t9, 0x148
    ctx->r25 = ADD32(ctx->r25, 0X148);
    // 0x08002140: jalr        $t9
    // 0x08002144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08002144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_61:
    // 0x08002148: bne         $v0, $zero, L_08002160
    if (ctx->r2 != 0) {
        // 0x0800214C: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(57, 0X21AC) << 16);
            goto L_08002160;
    }
    // 0x0800214C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X21AC) << 16);
    // 0x08002150: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002154: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002158: jalr        $t9
    // 0x0800215C: addiu       $a0, $a0, 0x21AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X21AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x0800215C: addiu       $a0, $a0, 0x21AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X21AC));
    after_62:
L_08002160:
    // 0x08002160: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x08002164: lw          $t5, -0x39D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39D8);
    // 0x08002168: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x0800216C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08002170: lbu         $t6, 0x64($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X64);
    // 0x08002174: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08002178: bnel        $t6, $at, L_08002190
    if (ctx->r14 != ctx->r1) {
        // 0x0800217C: lhu         $t3, 0x8A($s1)
        ctx->r11 = MEM_HU(ctx->r17, 0X8A);
            goto L_08002190;
    }
    goto skip_3;
    // 0x0800217C: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
    skip_3:
    // 0x08002180: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x08002184: jalr        $t9
    // 0x08002188: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08002188: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    after_63:
    // 0x0800218C: lhu         $t3, 0x8A($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X8A);
L_08002190:
    // 0x08002190: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x08002194: sh          $t2, 0x8A($s1)
    MEM_H(0X8A, ctx->r17) = ctx->r10;
    // 0x08002198: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800219C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080021A0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080021A4: jr          $ra
    // 0x080021A8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x080021A8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08000220_7266B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800022C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000230: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000234: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x08000238: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x0800023C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x08000240: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000244: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x08000248: bgez        $v0, L_08000264
    if (SIGNED(ctx->r2) >= 0) {
        // 0x0800024C: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_08000264;
    }
    // 0x0800024C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x08000250: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x08000254: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000258: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x0800025C: nop

    // 0x08000260: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_08000264:
    // 0x08000264: c.eq.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d == ctx->f8.d;
    // 0x08000268: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800026C: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x08000270: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x08000274: bc1fl       L_08000290
    if (!c1cs) {
        // 0x08000278: slt         $v1, $zero, $v0
        ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_08000290;
    }
    goto skip_0;
    // 0x08000278: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    skip_0:
    // 0x0800027C: jalr        $t9
    // 0x08000280: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000280: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000284: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x08000288: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    // 0x0800028C: slt         $v1, $zero, $v0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
L_08000290:
    // 0x08000290: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000294: bne         $v1, $zero, L_080002B8
    if (ctx->r3 != 0) {
        // 0x08000298: sh          $t6, 0x8A($a1)
        MEM_H(0X8A, ctx->r5) = ctx->r14;
            goto L_080002B8;
    }
    // 0x08000298: sh          $t6, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r14;
    // 0x0800029C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x080002A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X2C8) << 16);
    // 0x080002AC: sh          $t7, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r15;
    // 0x080002B0: jalr        $t9
    // 0x080002B4: addiu       $a0, $a0, 0x2C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002B4: addiu       $a0, $a0, 0x2C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X2C8));
    after_1:
L_080002B8:
    // 0x080002B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002C0: jr          $ra
    // 0x080002C4: nop

    TRACE_RETURN()
    return;
    // 0x080002C4: nop

;}
RECOMP_FUNC void func_080000D0_726560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080000D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080000D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080000D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080000DC: jal         0x08002BBC
    // 0x080000E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_08002BBC_72904C(rdram, ctx);
        goto after_0;
    // 0x080000E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080000E4: bne         $v0, $zero, L_080000FC
    if (ctx->r2 != 0) {
        // 0x080000E8: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(57, 0X10C) << 16);
            goto L_080000FC;
    }
    // 0x080000E8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(57, 0X10C) << 16);
    // 0x080000EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080000F4: jalr        $t9
    // 0x080000F8: addiu       $a0, $a0, 0x10C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X10C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080000F8: addiu       $a0, $a0, 0x10C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(57, 0X10C));
    after_1:
L_080000FC:
    // 0x080000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000104: jr          $ra
    // 0x08000108: nop

    TRACE_RETURN()
    return;
    // 0x08000108: nop

;}
RECOMP_FUNC void func_08000CD8_72A278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CD8: jr          $ra
    // 0x08000CDC: nop

    TRACE_RETURN()
    return;
    // 0x08000CDC: nop

;}
RECOMP_FUNC void func_08000C88_72A228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C88: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
    // 0x08000C8C: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000C90: jr          $ra
    // 0x08000C94: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    TRACE_RETURN()
    return;
    // 0x08000C94: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_080012E4_72A884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012E4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080012E8: addiu       $t6, $a1, 0x200
    ctx->r14 = ADD32(ctx->r5, 0X200);
    // 0x080012EC: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x080012F0: sh          $a1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r5;
    // 0x080012F4: sh          $a2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r6;
    // 0x080012F8: sh          $a3, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r7;
    // 0x080012FC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x08001300: sh          $t7, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r15;
    // 0x08001304: sh          $a2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r6;
    // 0x08001308: jr          $ra
    // 0x0800130C: sh          $a3, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x0800130C: sh          $a3, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r7;
;}
RECOMP_FUNC void func_08000F70_72A510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000F74: jr          $ra
    // 0x08000F78: swc1        $f12, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x08000F78: swc1        $f12, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_08000AB0_72A050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x08000AB4: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x08000AB8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x08000ABC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000AC0: beq         $t6, $zero, L_08000B94
    if (ctx->r14 == 0) {
        // 0x08000AC4: lui         $t1, 0x8020
        ctx->r9 = S32(0X8020 << 16);
            goto L_08000B94;
    }
    // 0x08000AC4: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x08000AC8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000ACC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000AD0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X1474) << 16);
    // 0x08000AD4: lwc1        $f2, 0x1474($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(58, 0X1474));
    // 0x08000AD8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000ADC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000AE0: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x08000AE4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000AE8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x08000AEC: nop

    // 0x08000AF0: bc1fl       L_08000B08
    if (!c1cs) {
        // 0x08000AF4: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_08000B08;
    }
    goto skip_0;
    // 0x08000AF4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_0:
    // 0x08000AF8: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x08000AFC: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x08000B00: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000B04: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_08000B08:
    // 0x08000B08: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08000B0C: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x08000B10: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08000B14: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x08000B18: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x08000B1C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08000B20: nop

    // 0x08000B24: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08000B28: beql        $t0, $zero, L_08000B78
    if (ctx->r8 == 0) {
        // 0x08000B2C: mfc1        $t0, $f16
        ctx->r8 = (int32_t)ctx->f16.u32l;
            goto L_08000B78;
    }
    goto skip_1;
    // 0x08000B2C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x08000B30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08000B34: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000B38: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x08000B3C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x08000B40: nop

    // 0x08000B44: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08000B48: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x08000B4C: nop

    // 0x08000B50: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x08000B54: bne         $t0, $zero, L_08000B6C
    if (ctx->r8 != 0) {
        // 0x08000B58: nop
    
            goto L_08000B6C;
    }
    // 0x08000B58: nop

    // 0x08000B5C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x08000B60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08000B64: b           L_08000B84
    // 0x08000B68: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_08000B84;
    // 0x08000B68: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_08000B6C:
    // 0x08000B6C: b           L_08000B84
    // 0x08000B70: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_08000B84;
    // 0x08000B70: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x08000B74: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
L_08000B78:
    // 0x08000B78: nop

    // 0x08000B7C: bltz        $t0, L_08000B6C
    if (SIGNED(ctx->r8) < 0) {
        // 0x08000B80: nop
    
            goto L_08000B6C;
    }
    // 0x08000B80: nop

L_08000B84:
    // 0x08000B84: lw          $t1, -0x39F4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39F4);
    // 0x08000B88: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x08000B8C: sh          $t0, 0x16($t1)
    MEM_H(0X16, ctx->r9) = ctx->r8;
    // 0x08000B90: nop

L_08000B94:
    // 0x08000B94: jr          $ra
    // 0x08000B98: nop

    TRACE_RETURN()
    return;
    // 0x08000B98: nop

;}
RECOMP_FUNC void func_08000F2C_72A4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F2C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000F30: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08000F34: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000F38: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000F3C: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x08000F40: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x08000F44: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000F48: jr          $ra
    // 0x08000F4C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000F4C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08000EF0_72A490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000EF8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08000EFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F00: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000F04: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x08000F08: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000F10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000F14: jalr        $t9
    // 0x08000F18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000F18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08000F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000F24: jr          $ra
    // 0x08000F28: nop

    TRACE_RETURN()
    return;
    // 0x08000F28: nop

;}
RECOMP_FUNC void func_08000000_7295A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000008: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800000C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000010: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000014: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800001C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000020: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x08000024: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000028: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x0800002C: jalr        $t9
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000030: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000034: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x08000038: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800003C: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x08000040: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08000044: jal         0x08000DA4
    // 0x08000048: lw          $a0, -0x3344($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3344);
    func_08000DA4_72A344(rdram, ctx);
        goto after_1;
    // 0x08000048: lw          $a0, -0x3344($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3344);
    after_1:
    // 0x0800004C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x08000050: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x08000054: lui         $t0, 0x800
    ctx->r8 = S32(RELOC_HI16(58, 0X90) << 16);
    // 0x08000058: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800005C: addiu       $t8, $zero, 0x7D0
    ctx->r24 = ADD32(0, 0X7D0);
    // 0x08000060: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000064: addiu       $t0, $t0, 0x90
    ctx->r8 = ADD32(ctx->r8, (int16_t)RELOC_LO16(58, 0X90));
    // 0x08000068: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x0800006C: sw          $v0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r2;
    // 0x08000070: addiu       $a0, $a0, 0x218C
    ctx->r4 = ADD32(ctx->r4, 0X218C);
    // 0x08000074: sw          $t8, 0xC0($v1)
    MEM_W(0XC0, ctx->r3) = ctx->r24;
    // 0x08000078: jalr        $t9
    // 0x0800007C: sw          $t0, 0xBC($v1)
    MEM_W(0XBC, ctx->r3) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800007C: sw          $t0, 0xBC($v1)
    MEM_W(0XBC, ctx->r3) = ctx->r8;
    after_2:
    // 0x08000080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000088: jr          $ra
    // 0x0800008C: nop

    TRACE_RETURN()
    return;
    // 0x0800008C: nop

;}
RECOMP_FUNC void func_08000B9C_72A13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000BA0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BA8: addiu       $t9, $t9, 0x4E08
    ctx->r25 = ADD32(ctx->r25, 0X4E08);
    // 0x08000BAC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(58, 0XAB0) << 16);
    // 0x08000BB0: addiu       $a1, $a1, 0xAB0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(58, 0XAB0));
    // 0x08000BB4: jalr        $t9
    // 0x08000BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x08000BBC: bne         $v0, $zero, L_08000BCC
    if (ctx->r2 != 0) {
        // 0x08000BC0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_08000BCC;
    }
    // 0x08000BC0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08000BC4: b           L_08000BF8
    // 0x08000BC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000BF8;
    // 0x08000BC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000BCC:
    // 0x08000BCC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x08000BD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000BD4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x08000BD8: sw          $zero, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = 0;
    // 0x08000BDC: sw          $t6, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r14;
    // 0x08000BE0: sw          $zero, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = 0;
    // 0x08000BE4: sb          $a0, 0x74($v1)
    MEM_B(0X74, ctx->r3) = ctx->r4;
    // 0x08000BE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x08000BEC: swc1        $f4, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f4.u32l;
    // 0x08000BF0: sb          $a0, 0x7AE2($at)
    MEM_B(0X7AE2, ctx->r1) = ctx->r4;
    // 0x08000BF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_08000BF8:
    // 0x08000BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C00: jr          $ra
    // 0x08000C04: nop

    TRACE_RETURN()
    return;
    // 0x08000C04: nop

;}
RECOMP_FUNC void func_08000C98_72A238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C98: jr          $ra
    // 0x08000C9C: nop

    TRACE_RETURN()
    return;
    // 0x08000C9C: nop

;}
RECOMP_FUNC void func_08000F50_72A4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F50: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000F54: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000F58: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000F5C: swc1        $f12, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f12.u32l;
    // 0x08000F60: swc1        $f14, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f14.u32l;
    // 0x08000F64: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000F68: jr          $ra
    // 0x08000F6C: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000F6C: swc1        $f4, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_080012AC_72A84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012AC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x080012B0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x080012B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x080012B8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x080012BC: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x080012C0: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x080012C4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x080012C8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x080012CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x080012D0: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x080012D4: swc1        $f14, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f14.u32l;
    // 0x080012D8: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x080012DC: jr          $ra
    // 0x080012E0: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x080012E0: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_08000DA4_72A344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000DA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x08000DA8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000DB0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000DB4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(58, 0XCE0) << 16);
    // 0x08000DB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000DBC: addiu       $a1, $a1, 0xCE0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(58, 0XCE0));
    // 0x08000DC0: jalr        $t9
    // 0x08000DC4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DC4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x08000DC8: bne         $v0, $zero, L_08000DD8
    if (ctx->r2 != 0) {
        // 0x08000DCC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_08000DD8;
    }
    // 0x08000DCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x08000DD0: b           L_08000ECC
    // 0x08000DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08000ECC;
    // 0x08000DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000DD8:
    // 0x08000DD8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000DDC: addiu       $t6, $zero, 0x43
    ctx->r14 = ADD32(0, 0X43);
    // 0x08000DE0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000DE4: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x08000DE8: jalr        $t9
    // 0x08000DEC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000DEC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_1:
    // 0x08000DF0: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x08000DF4: addiu       $t7, $zero, 0x336
    ctx->r15 = ADD32(0, 0X336);
    // 0x08000DF8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DFC: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x08000E00: sh          $t7, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r15;
    // 0x08000E04: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x08000E08: addiu       $t9, $t9, 0x6DF8
    ctx->r25 = ADD32(ctx->r25, 0X6DF8);
    // 0x08000E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E14: jalr        $t9
    // 0x08000E18: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000E18: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_2:
    // 0x08000E1C: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x08000E20: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E24: ori         $t8, $t8, 0x220
    ctx->r24 = ctx->r24 | 0X220;
    // 0x08000E28: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000E2C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000E38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x08000E3C: jalr        $t9
    // 0x08000E40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000E44: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000E48: addiu       $a0, $a0, -0x33D0
    ctx->r4 = ADD32(ctx->r4, -0X33D0);
    // 0x08000E4C: lbu         $t1, 0xD8($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD8);
    // 0x08000E50: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X1478) << 16);
    // 0x08000E54: lwc1        $f0, 0x1478($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(58, 0X1478));
    // 0x08000E58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x08000E5C: sb          $t1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r9;
    // 0x08000E60: lbu         $t2, 0xD8($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XD8);
    // 0x08000E64: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x08000E68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08000E6C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000E70: sb          $t3, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r11;
    // 0x08000E74: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x08000E78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000E7C: lui         $at, 0x4286
    ctx->r1 = S32(0X4286 << 16);
    // 0x08000E80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000E84: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x08000E88: addiu       $t4, $t4, -0x2580
    ctx->r12 = ADD32(ctx->r12, -0X2580);
    // 0x08000E8C: addiu       $v1, $s0, 0xD0
    ctx->r3 = ADD32(ctx->r16, 0XD0);
    // 0x08000E90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000E94: sw          $t4, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r12;
    // 0x08000E98: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x08000E9C: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x08000EA0: swc1        $f0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f0.u32l;
    // 0x08000EA4: swc1        $f4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f4.u32l;
    // 0x08000EA8: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    // 0x08000EAC: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x08000EB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000EB4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x08000EB8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x08000EBC: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x08000EC0: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x08000EC4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x08000EC8: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
L_08000ECC:
    // 0x08000ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000ED0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000ED4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000ED8: jr          $ra
    // 0x08000EDC: nop

    TRACE_RETURN()
    return;
    // 0x08000EDC: nop

    // 0x08000EE0: jr          $ra
    // 0x08000EE4: nop

    TRACE_RETURN()
    return;
    // 0x08000EE4: nop

    // 0x08000EE8: jr          $ra
    // 0x08000EEC: nop

    TRACE_RETURN()
    return;
    // 0x08000EEC: nop

;}
RECOMP_FUNC void func_08000C08_72A1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C0C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C14: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000C18: jalr        $t9
    // 0x08000C1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C1C: nop

    after_0:
    // 0x08000C20: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x08000C24: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x08000C28: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x08000C2C: sb          $zero, 0x2E23($at)
    MEM_B(0X2E23, ctx->r1) = 0;
    // 0x08000C30: sb          $zero, 0x2E21($at)
    MEM_B(0X2E21, ctx->r1) = 0;
    // 0x08000C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C3C: jr          $ra
    // 0x08000C40: nop

    TRACE_RETURN()
    return;
    // 0x08000C40: nop

;}
RECOMP_FUNC void func_08000CA0_72A240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000CA4: addiu       $v0, $v0, -0x39F4
    ctx->r2 = ADD32(ctx->r2, -0X39F4);
    // 0x08000CA8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08000CAC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x08000CB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08000CB4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x08000CB8: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    // 0x08000CBC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x08000CC0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x08000CC4: swc1        $f14, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f14.u32l;
    // 0x08000CC8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x08000CCC: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x08000CD0: jr          $ra
    // 0x08000CD4: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x08000CD4: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_08001090_72A630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001090: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x08001094: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x08001098: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x0800109C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080010A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080010A4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x080010A8: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x080010AC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(58, 0XF7C) << 16);
    // 0x080010B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080010B4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080010B8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x080010BC: addiu       $a1, $a1, 0xF7C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(58, 0XF7C));
    // 0x080010C0: jalr        $t9
    // 0x080010C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080010C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x080010C8: bne         $v0, $zero, L_080010D8
    if (ctx->r2 != 0) {
        // 0x080010CC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_080010D8;
    }
    // 0x080010CC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x080010D0: b           L_08001298
    // 0x080010D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_08001298;
    // 0x080010D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_080010D8:
    // 0x080010D8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080010DC: addiu       $t6, $zero, 0x43
    ctx->r14 = ADD32(0, 0X43);
    // 0x080010E0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080010E4: sh          $t6, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r14;
    // 0x080010E8: jalr        $t9
    // 0x080010EC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080010EC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_1:
    // 0x080010F0: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x080010F4: sw          $s0, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r16;
    // 0x080010F8: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x080010FC: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x08001100: addiu       $t8, $zero, 0x289
    ctx->r24 = ADD32(0, 0X289);
    // 0x08001104: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x08001108: sh          $t8, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r24;
    // 0x0800110C: addiu       $a2, $a2, 0x6DF8
    ctx->r6 = ADD32(ctx->r6, 0X6DF8);
    // 0x08001110: sw          $t7, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r15;
    // 0x08001114: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x08001118: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800111C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001120: jalr        $a2
    // 0x08001124: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_2;
    // 0x08001124: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_2:
    // 0x08001128: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800112C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08001130: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001134: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X147C) << 16);
    // 0x08001138: lwc1        $f0, 0x147C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(58, 0X147C));
    // 0x0800113C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x08001140: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x08001144: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x08001148: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x0800114C: sb          $t1, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r9;
    // 0x08001150: lbu         $t2, 0xD8($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XD8);
    // 0x08001154: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x08001158: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x0800115C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08001160: sb          $t3, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r11;
    // 0x08001164: sw          $t4, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r12;
    // 0x08001168: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800116C: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x08001170: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08001174: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x08001178: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x0800117C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x08001180: sb          $t5, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r13;
    // 0x08001184: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x08001188: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x0800118C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x08001190: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001194: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x08001198: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X1480) << 16);
    // 0x0800119C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x080011A4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080011A8: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
    // 0x080011AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080011B0: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x080011B4: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x080011B8: lwc1        $f18, 0x1480($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(58, 0X1480));
    // 0x080011BC: sb          $a2, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r6;
    // 0x080011C0: sb          $a3, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r7;
    // 0x080011C4: sb          $t0, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r8;
    // 0x080011C8: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    // 0x080011CC: jalr        $t9
    // 0x080011D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080011D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_3:
    // 0x080011D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x080011D8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x080011DC: or          $a3, $v0, $at
    ctx->r7 = ctx->r2 | ctx->r1;
    // 0x080011E0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080011E4: or          $t7, $a3, $at
    ctx->r15 = ctx->r7 | ctx->r1;
    // 0x080011E8: sw          $t7, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r15;
    // 0x080011EC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x080011F0: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x080011F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080011F8: addiu       $t9, $t9, 0x5DFC
    ctx->r25 = ADD32(ctx->r25, 0X5DFC);
    // 0x080011FC: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x08001200: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001204: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001208: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x0800120C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x08001210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x08001214: lwc1        $f8, 0xC($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XC);
    // 0x08001218: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x0800121C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x08001220: lwc1        $f6, 0x10($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X10);
    // 0x08001224: jalr        $t9
    // 0x08001228: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001228: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    after_4:
    // 0x0800122C: bne         $v0, $zero, L_0800123C
    if (ctx->r2 != 0) {
        // 0x08001230: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_0800123C;
    }
    // 0x08001230: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x08001234: b           L_08001298
    // 0x08001238: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_08001298;
    // 0x08001238: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_0800123C:
    // 0x0800123C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08001240: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x08001244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001248: jalr        $t9
    // 0x0800124C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800124C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_5:
    // 0x08001250: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x08001254: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x08001258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x0800125C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001260: sw          $t3, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r11;
    // 0x08001264: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x08001268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800126C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x08001270: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x08001274: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x08001278: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x0800127C: lwc1        $f16, 0xC($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0XC);
    // 0x08001280: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x08001284: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x08001288: lwc1        $f18, 0x10($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X10);
    // 0x0800128C: jal         0x080012E4
    // 0x08001290: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    func_080012E4_72A884(rdram, ctx);
        goto after_6;
    // 0x08001290: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    after_6:
    // 0x08001294: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_08001298:
    // 0x08001298: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x0800129C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x080012A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x080012A4: jr          $ra
    // 0x080012A8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x080012A8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_08001310_72A8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001310: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x08001314: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x08001318: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0800131C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08001320: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08001324: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x08001328: nop

    // 0x0800132C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x08001330: nop

    // 0x08001334: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x08001338: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x0800133C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x08001340: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x08001344: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x08001348: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x0800134C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x08001350: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x08001354: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x08001358: nop

    // 0x0800135C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x08001360: nop

    // 0x08001364: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x08001368: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x0800136C: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x08001370: jr          $ra
    // 0x08001374: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x08001374: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_08000C44_72A1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000C48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000C4C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08000C50: sb          $zero, 0x74($a0)
    MEM_B(0X74, ctx->r4) = 0;
    // 0x08000C54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C58: addiu       $t9, $t9, 0x3E9C
    ctx->r25 = ADD32(ctx->r25, 0X3E9C);
    // 0x08000C5C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x08000C60: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x08000C64: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08000C68: jalr        $t9
    // 0x08000C6C: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C6C: addiu       $a2, $a3, 0x74
    ctx->r6 = ADD32(ctx->r7, 0X74);
    after_0:
    // 0x08000C70: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08000C74: sw          $v0, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->r2;
    // 0x08000C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000C80: jr          $ra
    // 0x08000C84: nop

    TRACE_RETURN()
    return;
    // 0x08000C84: nop

;}
RECOMP_FUNC void func_08000F7C_72A51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000F7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000F80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000F84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000F88: lw          $a1, 0xE4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XE4);
    // 0x08000F8C: jal         0x08001310
    // 0x08000F90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_08001310_72A8B0(rdram, ctx);
        goto after_0;
    // 0x08000F90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000F94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000F98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000F9C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000FA0: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08000FA4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000FA8: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000FAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08000FB0: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08000FB4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000FB8: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x08000FBC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000FC0: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x08000FC4: nop

    // 0x08000FC8: bc1fl       L_08000FEC
    if (!c1cs) {
        // 0x08000FCC: cfc1        $t6, $FpcCsr
        ctx->r14 = get_cop1_cs();
            goto L_08000FEC;
    }
    goto skip_0;
    // 0x08000FCC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    skip_0:
    // 0x08000FD0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FD4: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000FD8: jalr        $t9
    // 0x08000FDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000FDC: nop

    after_1:
    // 0x08000FE0: b           L_08001084
    // 0x08000FE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08001084;
    // 0x08000FE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000FE8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
L_08000FEC:
    // 0x08000FEC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x08000FF0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x08000FF4: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x08000FF8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08000FFC: nop

    // 0x08001000: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08001004: beql        $t7, $zero, L_08001054
    if (ctx->r15 == 0) {
        // 0x08001008: mfc1        $t7, $f16
        ctx->r15 = (int32_t)ctx->f16.u32l;
            goto L_08001054;
    }
    goto skip_1;
    // 0x08001008: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x0800100C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08001010: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001014: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x08001018: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x0800101C: nop

    // 0x08001020: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x08001024: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x08001028: nop

    // 0x0800102C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x08001030: bne         $t7, $zero, L_08001048
    if (ctx->r15 != 0) {
        // 0x08001034: nop
    
            goto L_08001048;
    }
    // 0x08001034: nop

    // 0x08001038: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x0800103C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x08001040: b           L_08001060
    // 0x08001044: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_08001060;
    // 0x08001044: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_08001048:
    // 0x08001048: b           L_08001060
    // 0x0800104C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_08001060;
    // 0x0800104C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x08001050: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
L_08001054:
    // 0x08001054: nop

    // 0x08001058: bltz        $t7, L_08001048
    if (SIGNED(ctx->r15) < 0) {
        // 0x0800105C: nop
    
            goto L_08001048;
    }
    // 0x0800105C: nop

L_08001060:
    // 0x08001060: lbu         $t8, 0x13($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X13);
    // 0x08001064: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x08001068: sb          $t7, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r15;
    // 0x0800106C: lbu         $a2, 0x11($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X11);
    // 0x08001070: lbu         $a3, 0x12($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X12);
    // 0x08001074: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x08001078: jalr        $t9
    // 0x0800107C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800107C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x08001080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08001084:
    // 0x08001084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08001088: jr          $ra
    // 0x0800108C: nop

    TRACE_RETURN()
    return;
    // 0x0800108C: nop

;}
RECOMP_FUNC void func_08000090_729630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000090: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x08000094: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x08000098: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x0800009C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x080000A0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x080000A4: lw          $a1, 0xD0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XD0);
    // 0x080000A8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x080000AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080000B0: sltiu       $at, $v1, 0xE
    ctx->r1 = ctx->r3 < 0XE ? 1 : 0;
    // 0x080000B4: beq         $at, $zero, L_08000A80
    if (ctx->r1 == 0) {
        // 0x080000B8: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_08000A80;
    }
    // 0x080000B8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x080000BC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X1430) << 16);
    // 0x080000C0: addu        $at, $at, $t7
    gpr jr_addend_080000C8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x080000C4: lw          $t7, 0x1430($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(58, 0X1430));
    // 0x080000C8: jr          $t7
    // 0x080000CC: nop

    switch (jr_addend_080000C8 >> 2) {
        case 0: goto L_080000D0; break;
        case 1: goto L_08000148; break;
        case 2: goto L_08000278; break;
        case 3: goto L_080002B8; break;
        case 4: goto L_08000374; break;
        case 5: goto L_080003A8; break;
        case 6: goto L_08000484; break;
        case 7: goto L_080005AC; break;
        case 8: goto L_080005F0; break;
        case 9: goto L_08000740; break;
        case 10: goto L_080007B0; break;
        case 11: goto L_080007EC; break;
        case 12: goto L_080008E4; break;
        case 13: goto L_08000984; break;
        default: switch_error(__func__, 0x080000C8, 0x08001430);
    }
    // 0x080000CC: nop

L_080000D0:
    // 0x080000D0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x080000D4: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x080000D8: lw          $t8, 0x250($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X250);
    // 0x080000DC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080000E0: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080000E4: beq         $t8, $zero, L_0800011C
    if (ctx->r24 == 0) {
        // 0x080000E8: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_0800011C;
    }
    // 0x080000E8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080000EC: lw          $t9, 0x254($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X254);
    // 0x080000F0: beq         $t9, $zero, L_0800011C
    if (ctx->r25 == 0) {
        // 0x080000F4: nop
    
            goto L_0800011C;
    }
    // 0x080000F4: nop

    // 0x080000F8: lw          $t0, 0x258($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X258);
    // 0x080000FC: beq         $t0, $zero, L_0800011C
    if (ctx->r8 == 0) {
        // 0x08000100: nop
    
            goto L_0800011C;
    }
    // 0x08000100: nop

    // 0x08000104: lw          $t1, 0x25C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X25C);
    // 0x08000108: addiu       $t2, $v1, 0x1
    ctx->r10 = ADD32(ctx->r3, 0X1);
    // 0x0800010C: beq         $t1, $zero, L_0800011C
    if (ctx->r9 == 0) {
        // 0x08000110: nop
    
            goto L_0800011C;
    }
    // 0x08000110: nop

    // 0x08000114: b           L_08000A80
    // 0x08000118: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
        goto L_08000A80;
    // 0x08000118: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
L_0800011C:
    // 0x0800011C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000120: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000124: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000128: jalr        $t9
    // 0x0800012C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800012C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x08000130: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000134: addiu       $t9, $t9, 0x5020
    ctx->r25 = ADD32(ctx->r25, 0X5020);
    // 0x08000138: jalr        $t9
    // 0x0800013C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800013C: nop

    after_1:
    // 0x08000140: b           L_08000AA0
    // 0x08000144: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000AA0;
    // 0x08000144: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000148:
    // 0x08000148: jal         0x08000B9C
    // 0x0800014C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_08000B9C_72A13C(rdram, ctx);
        goto after_2;
    // 0x0800014C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_2:
    // 0x08000150: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x08000154: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000158: jal         0x08000C44
    // 0x0800015C: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    func_08000C44_72A1E4(rdram, ctx);
        goto after_3;
    // 0x0800015C: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    after_3:
    // 0x08000160: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08000164: lw          $t3, -0x39D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39D8);
    // 0x08000168: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x0800016C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x08000170: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x08000174: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000178: addiu       $t9, $t9, 0x2940
    ctx->r25 = ADD32(ctx->r25, 0X2940);
    // 0x0800017C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x08000180: sw          $t5, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r13;
    // 0x08000184: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x08000188: jalr        $t9
    // 0x0800018C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800018C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x08000190: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000194: addiu       $t9, $t9, 0x2878
    ctx->r25 = ADD32(ctx->r25, 0X2878);
    // 0x08000198: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x0800019C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x080001A0: jalr        $t9
    // 0x080001A4: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080001A4: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_5:
    // 0x080001A8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x080001AC: lw          $t7, -0x39D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39D8);
    // 0x080001B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080001B4: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080001B8: sb          $t6, 0x64($t7)
    MEM_B(0X64, ctx->r15) = ctx->r14;
    // 0x080001BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080001C0: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080001C4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x080001C8: jalr        $v0
    // 0x080001CC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x080001CC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_6:
    // 0x080001D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080001D4: addiu       $t9, $t9, 0x24AC
    ctx->r25 = ADD32(ctx->r25, 0X24AC);
    // 0x080001D8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080001DC: jalr        $t9
    // 0x080001E0: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080001E0: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    after_7:
    // 0x080001E4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x080001E8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080001EC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x080001F0: jalr        $t9
    // 0x080001F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001F4: nop

    after_8:
    // 0x080001F8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x080001FC: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000200: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000204: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000208: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800020C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000210: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000214: jalr        $t9
    // 0x08000218: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000218: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_9:
    // 0x0800021C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000220: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000224: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x08000228: jalr        $t9
    // 0x0800022C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x0800022C: nop

    after_10:
    // 0x08000230: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000234: addiu       $t9, $t9, 0x25F0
    ctx->r25 = ADD32(ctx->r25, 0X25F0);
    // 0x08000238: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800023C: lui         $a2, 0x800
    ctx->r6 = S32(RELOC_HI16(58, 0X1380) << 16);
    // 0x08000240: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x08000244: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x08000248: addiu       $a2, $a2, 0x1380
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(58, 0X1380));
    // 0x0800024C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08000250: jalr        $t9
    // 0x08000254: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000254: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_11:
    // 0x08000258: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x0800025C: addiu       $t9, $t9, 0x3DF0
    ctx->r25 = ADD32(ctx->r25, 0X3DF0);
    // 0x08000260: jalr        $t9
    // 0x08000264: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000264: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x08000268: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x0800026C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x08000270: b           L_08000A80
    // 0x08000274: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08000A80;
    // 0x08000274: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_08000278:
    // 0x08000278: jal         0x08000C88
    // 0x0800027C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_08000C88_72A228(rdram, ctx);
        goto after_13;
    // 0x0800027C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_13:
    // 0x08000280: bne         $v0, $zero, L_08000A80
    if (ctx->r2 != 0) {
        // 0x08000284: lui         $t9, 0x8001
        ctx->r25 = S32(0X8001 << 16);
            goto L_08000A80;
    }
    // 0x08000284: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000288: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x0800028C: jalr        $t9
    // 0x08000290: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000290: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_14:
    // 0x08000294: bne         $v0, $zero, L_08000A80
    if (ctx->r2 != 0) {
        // 0x08000298: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000A80;
    }
    // 0x08000298: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800029C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080002A0: jalr        $t9
    // 0x080002A4: addiu       $a0, $zero, 0x1F6
    ctx->r4 = ADD32(0, 0X1F6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x080002A4: addiu       $a0, $zero, 0x1F6
    ctx->r4 = ADD32(0, 0X1F6);
    after_15:
    // 0x080002A8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x080002AC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080002B0: b           L_08000A80
    // 0x080002B4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000A80;
    // 0x080002B4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080002B8:
    // 0x080002B8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080002BC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080002C0: jalr        $t9
    // 0x080002C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080002C4: nop

    after_16:
    // 0x080002C8: bne         $v0, $zero, L_08000A80
    if (ctx->r2 != 0) {
        // 0x080002CC: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000A80;
    }
    // 0x080002CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002D0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080002D4: jalr        $t9
    // 0x080002D8: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080002D8: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_17:
    // 0x080002DC: beq         $v0, $zero, L_080002F0
    if (ctx->r2 == 0) {
        // 0x080002E0: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_080002F0;
    }
    // 0x080002E0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080002E4: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080002E8: jalr        $t9
    // 0x080002EC: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080002EC: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_18:
L_080002F0:
    // 0x080002F0: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x080002F4: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x080002F8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080002FC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08000300: jalr        $v0
    // 0x08000304: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_19;
    // 0x08000304: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_19:
    // 0x08000308: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x0800030C: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000310: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000314: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x08000318: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800031C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08000320: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000324: jalr        $t9
    // 0x08000328: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x08000328: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_20:
    // 0x0800032C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000330: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000334: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x08000338: jalr        $t9
    // 0x0800033C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x0800033C: nop

    after_21:
    // 0x08000340: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000344: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000348: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x0800034C: lui         $a3, 0x4403
    ctx->r7 = S32(0X4403 << 16);
    // 0x08000350: ori         $a3, $a3, 0x6CCD
    ctx->r7 = ctx->r7 | 0X6CCD;
    // 0x08000354: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000358: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x0800035C: jalr        $t9
    // 0x08000360: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x08000360: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_22:
    // 0x08000364: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x08000368: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x0800036C: b           L_08000A80
    // 0x08000370: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
        goto L_08000A80;
    // 0x08000370: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_08000374:
    // 0x08000374: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000378: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x0800037C: jalr        $t9
    // 0x08000380: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x08000380: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_23:
    // 0x08000384: bne         $v0, $zero, L_08000A80
    if (ctx->r2 != 0) {
        // 0x08000388: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_08000A80;
    }
    // 0x08000388: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800038C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000390: jalr        $t9
    // 0x08000394: addiu       $a0, $zero, 0x1F9
    ctx->r4 = ADD32(0, 0X1F9);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x08000394: addiu       $a0, $zero, 0x1F9
    ctx->r4 = ADD32(0, 0X1F9);
    after_24:
    // 0x08000398: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x0800039C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080003A0: b           L_08000A80
    // 0x080003A4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000A80;
    // 0x080003A4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_080003A8:
    // 0x080003A8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080003AC: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x080003B0: jalr        $t9
    // 0x080003B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080003B4: nop

    after_25:
    // 0x080003B8: bne         $v0, $zero, L_08000A80
    if (ctx->r2 != 0) {
        // 0x080003BC: lui         $t9, 0x8002
        ctx->r25 = S32(0X8002 << 16);
            goto L_08000A80;
    }
    // 0x080003BC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080003C0: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x080003C4: jalr        $t9
    // 0x080003C8: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x080003C8: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    after_26:
    // 0x080003CC: beql        $v0, $zero, L_080003E8
    if (ctx->r2 == 0) {
        // 0x080003D0: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_080003E8;
    }
    goto skip_0;
    // 0x080003D0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x080003D4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x080003D8: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x080003DC: b           L_08000A80
    // 0x080003E0: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
        goto L_08000A80;
    // 0x080003E0: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x080003E4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_080003E8:
    // 0x080003E8: beql        $a0, $zero, L_080003FC
    if (ctx->r4 == 0) {
        // 0x080003EC: lw          $t1, 0x10($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X10);
            goto L_080003FC;
    }
    goto skip_1;
    // 0x080003EC: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    skip_1:
    // 0x080003F0: jal         0x08000C08
    // 0x080003F4: nop

    func_08000C08_72A1A8(rdram, ctx);
        goto after_27;
    // 0x080003F4: nop

    after_27:
    // 0x080003F8: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
L_080003FC:
    // 0x080003FC: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x08000400: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x08000404: beq         $t1, $zero, L_08000444
    if (ctx->r9 == 0) {
        // 0x08000408: nop
    
            goto L_08000444;
    }
    // 0x08000408: nop

    // 0x0800040C: lw          $t3, -0x39DC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39DC);
    // 0x08000410: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x08000414: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000418: sb          $t2, 0xD0($t3)
    MEM_B(0XD0, ctx->r11) = ctx->r10;
    // 0x0800041C: lw          $t4, -0x39D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39D8);
    // 0x08000420: addiu       $t9, $t9, 0x2500
    ctx->r25 = ADD32(ctx->r25, 0X2500);
    // 0x08000424: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x08000428: sb          $zero, 0x64($t4)
    MEM_B(0X64, ctx->r12) = 0;
    // 0x0800042C: jalr        $t9
    // 0x08000430: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x08000430: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_28:
    // 0x08000434: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000438: addiu       $t9, $t9, 0x2304
    ctx->r25 = ADD32(ctx->r25, 0X2304);
    // 0x0800043C: jalr        $t9
    // 0x08000440: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x08000440: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_29:
L_08000444:
    // 0x08000444: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000448: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x0800044C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x08000450: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000454: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000458: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x0800045C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000460: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x08000464: jalr        $t9
    // 0x08000468: lw          $a1, 0xD0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x08000468: lw          $a1, 0xD0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0XD0);
    after_30:
    // 0x0800046C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000470: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000474: jalr        $t9
    // 0x08000478: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x08000478: nop

    after_31:
    // 0x0800047C: b           L_08000A84
    // 0x08000480: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_08000A84;
    // 0x08000480: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000484:
    // 0x08000484: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x08000488: addiu       $v1, $v1, -0x39FC
    ctx->r3 = ADD32(ctx->r3, -0X39FC);
    // 0x0800048C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x08000490: lbu         $t6, 0x60($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X60);
    // 0x08000494: bnel        $t6, $zero, L_080004CC
    if (ctx->r14 != 0) {
        // 0x08000498: addiu       $t2, $zero, 0x32
        ctx->r10 = ADD32(0, 0X32);
            goto L_080004CC;
    }
    goto skip_2;
    // 0x08000498: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    skip_2:
    // 0x0800049C: lw          $t7, 0x5C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X5C);
    // 0x080004A0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x080004A4: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x080004A8: sh          $zero, 0x86($t7)
    MEM_H(0X86, ctx->r15) = 0;
    // 0x080004AC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x080004B0: addiu       $t9, $t9, -0x5324
    ctx->r25 = ADD32(ctx->r25, -0X5324);
    // 0x080004B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080004B8: lw          $t1, 0x5C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X5C);
    // 0x080004BC: sb          $t8, 0x84($t1)
    MEM_B(0X84, ctx->r9) = ctx->r24;
    // 0x080004C0: jalr        $t9
    // 0x080004C4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x080004C4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_32:
    // 0x080004C8: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
L_080004CC:
    // 0x080004CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x080004D0: sw          $t2, -0x3320($at)
    MEM_W(-0X3320, ctx->r1) = ctx->r10;
    // 0x080004D4: jal         0x08000EF0
    // 0x080004D8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_08000EF0_72A490(rdram, ctx);
        goto after_33;
    // 0x080004D8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_33:
    // 0x080004DC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X1468) << 16);
    // 0x080004E0: lwc1        $f4, 0x1468($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(58, 0X1468));
    // 0x080004E4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080004E8: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x080004EC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x080004F0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080004F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080004F8: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    // 0x080004FC: jal         0x08001090
    // 0x08000500: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_08001090_72A630(rdram, ctx);
        goto after_34;
    // 0x08000500: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_34:
    // 0x08000504: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x08000508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x0800050C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x08000510: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x08000514: jal         0x080012AC
    // 0x08000518: lui         $a3, 0x4314
    ctx->r7 = S32(0X4314 << 16);
    func_080012AC_72A84C(rdram, ctx);
        goto after_35;
    // 0x08000518: lui         $a3, 0x4314
    ctx->r7 = S32(0X4314 << 16);
    after_35:
    // 0x0800051C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000520: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x08000524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000528: jal         0x080012E4
    // 0x0800052C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_080012E4_72A884(rdram, ctx);
        goto after_36;
    // 0x0800052C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_36:
    // 0x08000530: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X146C) << 16);
    // 0x08000534: lwc1        $f6, 0x146C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(58, 0X146C));
    // 0x08000538: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x0800053C: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x08000540: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x08000544: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x08000548: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800054C: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    // 0x08000550: jal         0x08001090
    // 0x08000554: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_08001090_72A630(rdram, ctx);
        goto after_37;
    // 0x08000554: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_37:
    // 0x08000558: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x0800055C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x08000560: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x08000564: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x08000568: jal         0x080012AC
    // 0x0800056C: lui         $a3, 0x4314
    ctx->r7 = S32(0X4314 << 16);
    func_080012AC_72A84C(rdram, ctx);
        goto after_38;
    // 0x0800056C: lui         $a3, 0x4314
    ctx->r7 = S32(0X4314 << 16);
    after_38:
    // 0x08000570: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x08000574: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x08000578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800057C: jal         0x080012E4
    // 0x08000580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_080012E4_72A884(rdram, ctx);
        goto after_39;
    // 0x08000580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_39:
    // 0x08000584: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000588: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x0800058C: jalr        $t9
    // 0x08000590: addiu       $a0, $zero, 0x139
    ctx->r4 = ADD32(0, 0X139);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_40;
    // 0x08000590: addiu       $a0, $zero, 0x139
    ctx->r4 = ADD32(0, 0X139);
    after_40:
    // 0x08000594: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x08000598: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x0800059C: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x080005A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080005A4: b           L_08000A80
    // 0x080005A8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000A80;
    // 0x080005A8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_080005AC:
    // 0x080005AC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x080005B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x080005B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x080005B8: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x080005BC: bne         $v1, $zero, L_08000A80
    if (ctx->r3 != 0) {
        // 0x080005C0: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_08000A80;
    }
    // 0x080005C0: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x080005C4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080005C8: addiu       $t9, $t9, -0x7438
    ctx->r25 = ADD32(ctx->r25, -0X7438);
    // 0x080005CC: sb          $t8, 0x7AE0($at)
    MEM_B(0X7AE0, ctx->r1) = ctx->r24;
    // 0x080005D0: jalr        $t9
    // 0x080005D4: addiu       $a0, $zero, 0x251
    ctx->r4 = ADD32(0, 0X251);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_41;
    // 0x080005D4: addiu       $a0, $zero, 0x251
    ctx->r4 = ADD32(0, 0X251);
    after_41:
    // 0x080005D8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x080005DC: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x080005E0: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x080005E4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x080005E8: b           L_08000A80
    // 0x080005EC: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000A80;
    // 0x080005EC: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_080005F0:
    // 0x080005F0: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x080005F4: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    // 0x080005F8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x080005FC: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x08000600: beq         $t5, $zero, L_08000658
    if (ctx->r13 == 0) {
        // 0x08000604: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_08000658;
    }
    // 0x08000604: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08000608: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800060C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000610: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x08000614: lui         $a3, 0x4403
    ctx->r7 = S32(0X4403 << 16);
    // 0x08000618: ori         $a3, $a3, 0x6CCD
    ctx->r7 = ctx->r7 | 0X6CCD;
    // 0x0800061C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x08000620: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000624: jalr        $t9
    // 0x08000628: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_42;
    // 0x08000628: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_42:
    // 0x0800062C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000630: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000634: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000638: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800063C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000640: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08000644: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x08000648: jalr        $t9
    // 0x0800064C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_43;
    // 0x0800064C: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    after_43:
    // 0x08000650: b           L_080006AC
    // 0x08000654: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
        goto L_080006AC;
    // 0x08000654: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_08000658:
    // 0x08000658: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800065C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000660: lui         $a3, 0x4403
    ctx->r7 = S32(0X4403 << 16);
    // 0x08000664: ori         $a3, $a3, 0x6CCD
    ctx->r7 = ctx->r7 | 0X6CCD;
    // 0x08000668: jalr        $t9
    // 0x0800066C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_44;
    // 0x0800066C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_44:
    // 0x08000670: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08000674: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08000678: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x0800067C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000680: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000684: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000688: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800068C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08000690: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000694: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08000698: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x0800069C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x080006A0: jalr        $t9
    // 0x080006A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_45;
    // 0x080006A4: nop

    after_45:
    // 0x080006A8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_080006AC:
    // 0x080006AC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x080006B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x080006B4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x080006B8: bne         $v1, $zero, L_08000A80
    if (ctx->r3 != 0) {
        // 0x080006BC: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_08000A80;
    }
    // 0x080006BC: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x080006C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080006C4: addiu       $t9, $t9, 0x6D2C
    ctx->r25 = ADD32(ctx->r25, 0X6D2C);
    // 0x080006C8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x080006CC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x080006D0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x080006D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x080006D8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x080006DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x080006E0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x080006E4: jalr        $t9
    // 0x080006E8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_46;
    // 0x080006E8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_46:
    // 0x080006EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080006F0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x080006F4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x080006F8: jal         0x08000F50
    // 0x080006FC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    func_08000F50_72A4F0(rdram, ctx);
        goto after_47;
    // 0x080006FC: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_47:
    // 0x08000700: lui         $a3, 0x4403
    ctx->r7 = S32(0X4403 << 16);
    // 0x08000704: ori         $a3, $a3, 0x6CCD
    ctx->r7 = ctx->r7 | 0X6CCD;
    // 0x08000708: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x0800070C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x08000710: jal         0x08000CA0
    // 0x08000714: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    func_08000CA0_72A240(rdram, ctx);
        goto after_48;
    // 0x08000714: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    after_48:
    // 0x08000718: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800071C: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x08000720: jalr        $t9
    // 0x08000724: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_49;
    // 0x08000724: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    after_49:
    // 0x08000728: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x0800072C: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x08000730: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x08000734: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x08000738: b           L_08000A80
    // 0x0800073C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
        goto L_08000A80;
    // 0x0800073C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_08000740:
    // 0x08000740: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x08000744: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x08000748: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x0800074C: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x08000750: bne         $t4, $zero, L_0800078C
    if (ctx->r12 != 0) {
        // 0x08000754: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_0800078C;
    }
    // 0x08000754: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x08000758: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(58, 0X1470) << 16);
    // 0x0800075C: lwc1        $f18, 0x1470($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(58, 0X1470));
    // 0x08000760: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000764: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x08000768: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x0800076C: jal         0x08001090
    // 0x08000770: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_08001090_72A630(rdram, ctx);
        goto after_50;
    // 0x08000770: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_50:
    // 0x08000774: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x08000778: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x0800077C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x08000780: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x08000784: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x08000788: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_0800078C:
    // 0x0800078C: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x08000790: bne         $v1, $zero, L_08000A80
    if (ctx->r3 != 0) {
        // 0x08000794: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_08000A80;
    }
    // 0x08000794: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x08000798: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x0800079C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x080007A0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x080007A4: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x080007A8: b           L_08000A80
    // 0x080007AC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
        goto L_08000A80;
    // 0x080007AC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
L_080007B0:
    // 0x080007B0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x080007B4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080007B8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007BC: bne         $v1, $at, L_080007D0
    if (ctx->r3 != ctx->r1) {
        // 0x080007C0: addiu       $t9, $t9, -0x7468
        ctx->r25 = ADD32(ctx->r25, -0X7468);
            goto L_080007D0;
    }
    // 0x080007C0: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080007C4: jalr        $t9
    // 0x080007C8: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_51;
    // 0x080007C8: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    after_51:
    // 0x080007CC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
L_080007D0:
    // 0x080007D0: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x080007D4: bne         $v1, $zero, L_08000A80
    if (ctx->r3 != 0) {
        // 0x080007D8: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_08000A80;
    }
    // 0x080007D8: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x080007DC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x080007E0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x080007E4: b           L_08000A80
    // 0x080007E8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000A80;
    // 0x080007E8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_080007EC:
    // 0x080007EC: lui         $a2, 0x43C7
    ctx->r6 = S32(0X43C7 << 16);
    // 0x080007F0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x080007F4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x080007F8: lui         $a1, 0x441E
    ctx->r5 = S32(0X441E << 16);
    // 0x080007FC: jal         0x08000F2C
    // 0x08000800: lui         $a3, 0xC38E
    ctx->r7 = S32(0XC38E << 16);
    func_08000F2C_72A4CC(rdram, ctx);
        goto after_52;
    // 0x08000800: lui         $a3, 0xC38E
    ctx->r7 = S32(0XC38E << 16);
    after_52:
    // 0x08000804: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000808: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x0800080C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x08000810: jal         0x08000F50
    // 0x08000814: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    func_08000F50_72A4F0(rdram, ctx);
        goto after_53;
    // 0x08000814: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_53:
    // 0x08000818: lui         $a1, 0x3F6E
    ctx->r5 = S32(0X3F6E << 16);
    // 0x0800081C: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x08000820: jal         0x08000F70
    // 0x08000824: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    func_08000F70_72A510(rdram, ctx);
        goto after_54;
    // 0x08000824: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_54:
    // 0x08000828: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800082C: addiu       $t9, $t9, 0x27B8
    ctx->r25 = ADD32(ctx->r25, 0X27B8);
    // 0x08000830: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000834: lui         $a1, 0x43C6
    ctx->r5 = S32(0X43C6 << 16);
    // 0x08000838: lui         $a2, 0xC325
    ctx->r6 = S32(0XC325 << 16);
    // 0x0800083C: jalr        $t9
    // 0x08000840: lui         $a3, 0xC298
    ctx->r7 = S32(0XC298 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_55;
    // 0x08000840: lui         $a3, 0xC298
    ctx->r7 = S32(0XC298 << 16);
    after_55:
    // 0x08000844: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000848: addiu       $t9, $t9, 0x2818
    ctx->r25 = ADD32(ctx->r25, 0X2818);
    // 0x0800084C: lui         $a1, 0x43E3
    ctx->r5 = S32(0X43E3 << 16);
    // 0x08000850: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000854: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000858: lui         $a2, 0xC1C0
    ctx->r6 = S32(0XC1C0 << 16);
    // 0x0800085C: jalr        $t9
    // 0x08000860: lui         $a3, 0xC300
    ctx->r7 = S32(0XC300 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_56;
    // 0x08000860: lui         $a3, 0xC300
    ctx->r7 = S32(0XC300 << 16);
    after_56:
    // 0x08000864: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x08000868: addiu       $v0, $v0, 0x24A0
    ctx->r2 = ADD32(ctx->r2, 0X24A0);
    // 0x0800086C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000870: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08000874: jalr        $v0
    // 0x08000878: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_57;
    // 0x08000878: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_57:
    // 0x0800087C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000880: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x08000884: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x08000888: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    // 0x0800088C: lui         $a2, 0xC330
    ctx->r6 = S32(0XC330 << 16);
    // 0x08000890: jalr        $t9
    // 0x08000894: lui         $a3, 0xC2FE
    ctx->r7 = S32(0XC2FE << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_58;
    // 0x08000894: lui         $a3, 0xC2FE
    ctx->r7 = S32(0XC2FE << 16);
    after_58:
    // 0x08000898: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x0800089C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008A0: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x080008A4: jalr        $t9
    // 0x080008A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_59;
    // 0x080008A8: nop

    after_59:
    // 0x080008AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080008B0: addiu       $t9, $t9, 0x2628
    ctx->r25 = ADD32(ctx->r25, 0X2628);
    // 0x080008B4: lui         $a1, 0x43E3
    ctx->r5 = S32(0X43E3 << 16);
    // 0x080008B8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x080008BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080008C0: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    // 0x080008C4: jalr        $t9
    // 0x080008C8: lui         $a3, 0xC301
    ctx->r7 = S32(0XC301 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_60;
    // 0x080008C8: lui         $a3, 0xC301
    ctx->r7 = S32(0XC301 << 16);
    after_60:
    // 0x080008CC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x080008D0: addiu       $t5, $zero, 0x4B
    ctx->r13 = ADD32(0, 0X4B);
    // 0x080008D4: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x080008D8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x080008DC: b           L_08000A80
    // 0x080008E0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_08000A80;
    // 0x080008E0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
L_080008E4:
    // 0x080008E4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x080008E8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080008EC: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x080008F0: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x080008F4: bne         $v1, $zero, L_08000A80
    if (ctx->r3 != 0) {
        // 0x080008F8: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_08000A80;
    }
    // 0x080008F8: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x080008FC: jalr        $t9
    // 0x08000900: addiu       $a0, $zero, 0x28E
    ctx->r4 = ADD32(0, 0X28E);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_61;
    // 0x08000900: addiu       $a0, $zero, 0x28E
    ctx->r4 = ADD32(0, 0X28E);
    after_61:
    // 0x08000904: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800090C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000910: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000914: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000918: addiu       $t9, $t9, -0x1154
    ctx->r25 = ADD32(ctx->r25, -0X1154);
    // 0x0800091C: lui         $a1, 0x43E3
    ctx->r5 = S32(0X43E3 << 16);
    // 0x08000920: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x08000924: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x08000928: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x0800092C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x08000930: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x08000934: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x08000938: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x0800093C: lui         $a3, 0xC2FA
    ctx->r7 = S32(0XC2FA << 16);
    // 0x08000940: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x08000944: jalr        $t9
    // 0x08000948: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_62;
    // 0x08000948: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_62:
    // 0x0800094C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x08000950: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000954: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000958: beql        $a0, $zero, L_08000970
    if (ctx->r4 == 0) {
        // 0x0800095C: lw          $t3, 0x0($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X0);
            goto L_08000970;
    }
    goto skip_3;
    // 0x0800095C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x08000960: jalr        $t9
    // 0x08000964: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_63;
    // 0x08000964: nop

    after_63:
    // 0x08000968: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x0800096C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_08000970:
    // 0x08000970: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x08000974: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x08000978: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x0800097C: b           L_08000A80
    // 0x08000980: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
        goto L_08000A80;
    // 0x08000980: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_08000984:
    // 0x08000984: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000988: addiu       $t9, $t9, 0x2380
    ctx->r25 = ADD32(ctx->r25, 0X2380);
    // 0x0800098C: jalr        $t9
    // 0x08000990: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_64;
    // 0x08000990: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_64:
    // 0x08000994: bne         $v0, $zero, L_080009C8
    if (ctx->r2 != 0) {
        // 0x08000998: lui         $a1, 0x43B4
        ctx->r5 = S32(0X43B4 << 16);
            goto L_080009C8;
    }
    // 0x08000998: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    // 0x0800099C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009A0: addiu       $t9, $t9, 0x24A0
    ctx->r25 = ADD32(ctx->r25, 0X24A0);
    // 0x080009A4: jalr        $t9
    // 0x080009A8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_65;
    // 0x080009A8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_65:
    // 0x080009AC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080009B0: addiu       $t9, $t9, 0x2518
    ctx->r25 = ADD32(ctx->r25, 0X2518);
    // 0x080009B4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x080009B8: lui         $a1, 0x43CA
    ctx->r5 = S32(0X43CA << 16);
    // 0x080009BC: lui         $a2, 0xC33B
    ctx->r6 = S32(0XC33B << 16);
    // 0x080009C0: jalr        $t9
    // 0x080009C4: lui         $a3, 0xC332
    ctx->r7 = S32(0XC332 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_66;
    // 0x080009C4: lui         $a3, 0xC332
    ctx->r7 = S32(0XC332 << 16);
    after_66:
L_080009C8:
    // 0x080009C8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x080009CC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080009D0: addiu       $t9, $t9, 0x4088
    ctx->r25 = ADD32(ctx->r25, 0X4088);
    // 0x080009D4: addiu       $t5, $v1, -0x1
    ctx->r13 = ADD32(ctx->r3, -0X1);
    // 0x080009D8: bne         $v1, $zero, L_08000A80
    if (ctx->r3 != 0) {
        // 0x080009DC: sw          $t5, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r13;
            goto L_08000A80;
    }
    // 0x080009DC: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x080009E0: jalr        $t9
    // 0x080009E4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_67;
    // 0x080009E4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    after_67:
    // 0x080009E8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x080009EC: beql        $a0, $zero, L_08000A00
    if (ctx->r4 == 0) {
        // 0x080009F0: lw          $a0, 0xC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC);
            goto L_08000A00;
    }
    goto skip_4;
    // 0x080009F0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    skip_4:
    // 0x080009F4: jal         0x08000C08
    // 0x080009F8: nop

    func_08000C08_72A1A8(rdram, ctx);
        goto after_68;
    // 0x080009F8: nop

    after_68:
    // 0x080009FC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
L_08000A00:
    // 0x08000A00: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A04: addiu       $t9, $t9, 0x4EF8
    ctx->r25 = ADD32(ctx->r25, 0X4EF8);
    // 0x08000A08: beq         $a0, $zero, L_08000A18
    if (ctx->r4 == 0) {
        // 0x08000A0C: nop
    
            goto L_08000A18;
    }
    // 0x08000A0C: nop

    // 0x08000A10: jalr        $t9
    // 0x08000A14: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_69;
    // 0x08000A14: nop

    after_69:
L_08000A18:
    // 0x08000A18: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000A1C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000A20: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x08000A24: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000A28: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A2C: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000A30: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000A34: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x08000A38: jalr        $t9
    // 0x08000A3C: lw          $a1, 0xD0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XD0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_70;
    // 0x08000A3C: lw          $a1, 0xD0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XD0);
    after_70:
    // 0x08000A40: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A44: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000A48: jalr        $t9
    // 0x08000A4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_71;
    // 0x08000A4C: nop

    after_71:
    // 0x08000A50: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x08000A54: addiu       $t9, $t9, -0x5B04
    ctx->r25 = ADD32(ctx->r25, -0X5B04);
    // 0x08000A58: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x08000A5C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000A60: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    // 0x08000A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000A68: addiu       $a2, $zero, -0x4B
    ctx->r6 = ADD32(0, -0X4B);
    // 0x08000A6C: addiu       $a3, $zero, 0x1B3
    ctx->r7 = ADD32(0, 0X1B3);
    // 0x08000A70: jalr        $t9
    // 0x08000A74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_72;
    // 0x08000A74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_72:
    // 0x08000A78: b           L_08000AA0
    // 0x08000A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_08000AA0;
    // 0x08000A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000A80:
    // 0x08000A80: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_08000A84:
    // 0x08000A84: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A88: addiu       $t9, $t9, 0x2900
    ctx->r25 = ADD32(ctx->r25, 0X2900);
    // 0x08000A8C: beql        $a0, $zero, L_08000AA0
    if (ctx->r4 == 0) {
        // 0x08000A90: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_08000AA0;
    }
    goto skip_5;
    // 0x08000A90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x08000A94: jalr        $t9
    // 0x08000A98: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_73;
    // 0x08000A98: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    after_73:
    // 0x08000A9C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_08000AA0:
    // 0x08000AA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08000AA4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x08000AA8: jr          $ra
    // 0x08000AAC: nop

    TRACE_RETURN()
    return;
    // 0x08000AAC: nop

;}
RECOMP_FUNC void func_08000CE0_72A280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000CE8: lwc1        $f6, 0xDC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08000CEC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000CF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CF4: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x08000CF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000CFC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x08000D00: lwc1        $f10, 0xDC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x08000D04: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x08000D08: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x08000D0C: beq         $t6, $zero, L_08000D30
    if (ctx->r14 == 0) {
        // 0x08000D10: swc1        $f16, 0xDC($a0)
        MEM_W(0XDC, ctx->r4) = ctx->f16.u32l;
            goto L_08000D30;
    }
    // 0x08000D10: swc1        $f16, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f16.u32l;
    // 0x08000D14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000D18: jalr        $t9
    // 0x08000D1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000D1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000D20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000D24: beq         $v0, $zero, L_08000D30
    if (ctx->r2 == 0) {
        // 0x08000D28: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_08000D30;
    }
    // 0x08000D28: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D2C: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
L_08000D30:
    // 0x08000D30: addiu       $v0, $a0, 0xD0
    ctx->r2 = ADD32(ctx->r4, 0XD0);
    // 0x08000D34: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000D38: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000D3C: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000D40: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000D44: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08000D48: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x08000D4C: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x08000D50: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08000D54: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08000D58: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x08000D5C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x08000D60: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08000D64: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08000D68: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x08000D6C: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000D70: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08000D74: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08000D78: swc1        $f16, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f16.u32l;
    // 0x08000D7C: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000D80: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x08000D84: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08000D88: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x08000D8C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x08000D90: swc1        $f16, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f16.u32l;
    // 0x08000D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000D9C: jr          $ra
    // 0x08000DA0: nop

    TRACE_RETURN()
    return;
    // 0x08000DA0: nop

;}
RECOMP_FUNC void func_08000000_72AA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08000004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x0800000C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x08000010: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x08000014: lw          $a3, 0xD4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XD4);
    // 0x08000018: lw          $v1, 0xD8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD8);
    // 0x0800001C: sw          $v0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r2;
    // 0x08000020: sw          $a3, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r7;
    // 0x08000024: sw          $v1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r3;
    // 0x08000028: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x0800002C: lui         $a2, 0x8002
    ctx->r6 = S32(0X8002 << 16);
    // 0x08000030: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000034: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x08000038: addiu       $a2, $a2, 0x40DC
    ctx->r6 = ADD32(ctx->r6, 0X40DC);
    // 0x0800003C: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    // 0x08000040: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x08000044: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x08000048: jalr        $a2
    // 0x0800004C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x0800004C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x08000050: bne         $v0, $zero, L_0800008C
    if (ctx->r2 != 0) {
        // 0x08000054: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_0800008C;
    }
    // 0x08000054: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000058: jalr        $t9
    // 0x0800005C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800005C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_1:
    // 0x08000060: bne         $v0, $zero, L_0800008C
    if (ctx->r2 != 0) {
        // 0x08000064: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_0800008C;
    }
    // 0x08000064: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000068: jalr        $t9
    // 0x0800006C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800006C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_2:
    // 0x08000070: bne         $v0, $zero, L_0800008C
    if (ctx->r2 != 0) {
        // 0x08000074: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_0800008C;
    }
    // 0x08000074: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000078: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800007C: jalr        $t9
    // 0x08000080: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000080: nop

    after_3:
    // 0x08000084: b           L_080002B0
    // 0x08000088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080002B0;
    // 0x08000088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_0800008C:
    // 0x0800008C: lw          $t7, 0xDC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XDC);
    // 0x08000090: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08000094: bne         $t7, $zero, L_080000C0
    if (ctx->r15 != 0) {
        // 0x08000098: nop
    
            goto L_080000C0;
    }
    // 0x08000098: nop

    // 0x0800009C: jalr        $t9
    // 0x080000A0: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000A0: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    after_4:
    // 0x080000A4: beq         $v0, $zero, L_080000C0
    if (ctx->r2 == 0) {
        // 0x080000A8: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080000C0;
    }
    // 0x080000A8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000AC: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000B0: jalr        $t9
    // 0x080000B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000B4: nop

    after_5:
    // 0x080000B8: b           L_080002B0
    // 0x080000BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080002B0;
    // 0x080000BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080000C0:
    // 0x080000C0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080000C4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080000C8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080000CC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080000D0: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080000D4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080000D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080000DC: jalr        $t9
    // 0x080000E0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000E0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_6:
    // 0x080000E4: bne         $v0, $zero, L_08000104
    if (ctx->r2 != 0) {
        // 0x080000E8: sw          $v0, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r2;
            goto L_08000104;
    }
    // 0x080000E8: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x080000EC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080000F0: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080000F4: jalr        $t9
    // 0x080000F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080000F8: nop

    after_7:
    // 0x080000FC: b           L_080002B0
    // 0x08000100: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_080002B0;
    // 0x08000100: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_08000104:
    // 0x08000104: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x08000108: lw          $t6, 0xDC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XDC);
    // 0x0800010C: lui         $t8, 0x2C0
    ctx->r24 = S32(0X2C0 << 16);
    // 0x08000110: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x08000114: ori         $t8, $t8, 0x7E1
    ctx->r24 = ctx->r24 | 0X7E1;
    // 0x08000118: addiu       $t2, $zero, 0x1E1
    ctx->r10 = ADD32(0, 0X1E1);
    // 0x0800011C: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x08000120: addiu       $t4, $zero, 0x338
    ctx->r12 = ADD32(0, 0X338);
    // 0x08000124: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x08000128: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x0800012C: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x08000130: sw          $t1, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r9;
    // 0x08000134: sh          $t2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r10;
    // 0x08000138: sb          $t3, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r11;
    // 0x0800013C: sh          $t4, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r12;
    // 0x08000140: bne         $v1, $t6, L_08000154
    if (ctx->r3 != ctx->r14) {
        // 0x08000144: sb          $t5, 0x4C($s0)
        MEM_B(0X4C, ctx->r16) = ctx->r13;
            goto L_08000154;
    }
    // 0x08000144: sb          $t5, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r13;
    // 0x08000148: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x0800014C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x08000150: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
L_08000154:
    // 0x08000154: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x08000158: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000160: bne         $v0, $at, L_08000178
    if (ctx->r2 != ctx->r1) {
        // 0x08000164: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_08000178;
    }
    // 0x08000164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000168: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(59, 0XE0C) << 16);
    // 0x0800016C: lwc1        $f6, 0xE0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(59, 0XE0C));
    // 0x08000170: b           L_0800019C
    // 0x08000174: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
        goto L_0800019C;
    // 0x08000174: swc1        $f6, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f6.u32l;
L_08000178:
    // 0x08000178: bne         $v1, $v0, L_0800018C
    if (ctx->r3 != ctx->r2) {
        // 0x0800017C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_0800018C;
    }
    // 0x0800017C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000180: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08000184: b           L_0800019C
    // 0x08000188: swc1        $f8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f8.u32l;
        goto L_0800019C;
    // 0x08000188: swc1        $f8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f8.u32l;
L_0800018C:
    // 0x0800018C: bne         $v0, $zero, L_0800019C
    if (ctx->r2 != 0) {
        // 0x08000190: lui         $at, 0x800
        ctx->r1 = S32(RELOC_HI16(59, 0XE10) << 16);
            goto L_0800019C;
    }
    // 0x08000190: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(59, 0XE10) << 16);
    // 0x08000194: lwc1        $f10, 0xE10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(59, 0XE10));
    // 0x08000198: swc1        $f10, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f10.u32l;
L_0800019C:
    // 0x0800019C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001A0: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x080001A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080001A8: jalr        $t9
    // 0x080001AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x080001AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x080001B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001B4: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080001B8: addiu       $t8, $zero, -0x2
    ctx->r24 = ADD32(0, -0X2);
    // 0x080001BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x080001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001C4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080001C8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080001CC: jalr        $t9
    // 0x080001D0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080001D0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_9:
    // 0x080001D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080001D8: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x080001E4: jalr        $t9
    // 0x080001E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x080001E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x080001EC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080001F0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080001F8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x080001FC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000200: jalr        $t9
    // 0x08000204: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08000204: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x08000208: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800020C: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000210: jalr        $t9
    // 0x08000214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x08000214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x08000218: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800021C: addiu       $t9, $t9, 0x5214
    ctx->r25 = ADD32(ctx->r25, 0X5214);
    // 0x08000220: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x08000224: addiu       $a1, $a1, -0x6DA4
    ctx->r5 = ADD32(ctx->r5, -0X6DA4);
    // 0x08000228: jalr        $t9
    // 0x0800022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x0800022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x08000230: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000234: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08000238: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x0800023C: addiu       $a1, $a1, -0x70D0
    ctx->r5 = ADD32(ctx->r5, -0X70D0);
    // 0x08000240: jalr        $t9
    // 0x08000244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x08000248: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x0800024C: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x08000250: lbu         $t0, 0xD8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000254: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(59, 0XE14) << 16);
    // 0x08000258: lwc1        $f0, 0xE14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(59, 0XE14));
    // 0x0800025C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x08000260: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
    // 0x08000264: lbu         $t1, 0xD8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XD8);
    // 0x08000268: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800026C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x08000270: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x08000274: sb          $t2, 0xD8($v0)
    MEM_B(0XD8, ctx->r2) = ctx->r10;
    // 0x08000278: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x0800027C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000284: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x08000288: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x0800028C: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x08000290: jalr        $t9
    // 0x08000294: sb          $t3, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r11;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000294: sb          $t3, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r11;
    after_15:
    // 0x08000298: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800029C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(59, 0X2C0) << 16);
    // 0x080002A4: jalr        $t9
    // 0x080002A8: addiu       $a0, $a0, 0x2C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(59, 0X2C0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080002A8: addiu       $a0, $a0, 0x2C0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(59, 0X2C0));
    after_16:
    // 0x080002AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_080002B0:
    // 0x080002B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x080002B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x080002B8: jr          $ra
    // 0x080002BC: nop

    TRACE_RETURN()
    return;
    // 0x080002BC: nop

;}
RECOMP_FUNC void func_08000BAC_72B5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000BAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000BB4: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x08000BB8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BBC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000BC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000BC4: jalr        $t9
    // 0x08000BC8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BC8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x08000BCC: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(59, 0X990) << 16);
    // 0x08000BD0: addiu       $t9, $t9, 0x990
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(59, 0X990));
    // 0x08000BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000BD8: jalr        $t9
    // 0x08000BDC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BDC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x08000BE0: bne         $v0, $zero, L_08000C30
    if (ctx->r2 != 0) {
        // 0x08000BE4: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_08000C30;
    }
    // 0x08000BE4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x08000BE8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000BEC: lw          $v0, 0x84($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X84);
    // 0x08000BF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BF4: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08000BF8: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x08000BFC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08000C00: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08000C04: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000C08: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08000C0C: jalr        $t9
    // 0x08000C10: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000C10: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_2:
    // 0x08000C14: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x08000C18: andi        $t0, $v0, 0x3FF
    ctx->r8 = ctx->r2 & 0X3FF;
    // 0x08000C1C: lhu         $t2, 0x16($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X16);
    // 0x08000C20: beql        $t0, $t2, L_08000C34
    if (ctx->r8 == ctx->r10) {
        // 0x08000C24: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08000C34;
    }
    goto skip_0;
    // 0x08000C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x08000C28: b           L_08000C34
    // 0x08000C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08000C34;
    // 0x08000C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_08000C30:
    // 0x08000C30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000C34:
    // 0x08000C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000C38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000C3C: jr          $ra
    // 0x08000C40: nop

    TRACE_RETURN()
    return;
    // 0x08000C40: nop

;}
RECOMP_FUNC void func_08000990_72B3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000990: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x08000994: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000998: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x0800099C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x080009A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080009A4: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x080009A8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x080009AC: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x080009B0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x080009B4: addiu       $a2, $a2, 0x3E10
    ctx->r6 = ADD32(ctx->r6, 0X3E10);
    // 0x080009B8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x080009BC: addiu       $t6, $v0, -0x55
    ctx->r14 = ADD32(ctx->r2, -0X55);
    // 0x080009C0: addiu       $t8, $v0, 0x55
    ctx->r24 = ADD32(ctx->r2, 0X55);
    // 0x080009C4: andi        $a0, $t6, 0x3FF
    ctx->r4 = ctx->r14 & 0X3FF;
    // 0x080009C8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x080009CC: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
    // 0x080009D0: sh          $a0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r4;
    // 0x080009D4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x080009D8: jalr        $a2
    // 0x080009DC: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x080009DC: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    after_0:
    // 0x080009E0: lbu         $t0, 0x9A($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9A);
    // 0x080009E4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x080009E8: addiu       $v0, $v0, 0x3EA0
    ctx->r2 = ADD32(ctx->r2, 0X3EA0);
    // 0x080009EC: addu        $t1, $t0, $s2
    ctx->r9 = ADD32(ctx->r8, ctx->r18);
    // 0x080009F0: addiu       $t2, $t1, 0xA
    ctx->r10 = ADD32(ctx->r9, 0XA);
    // 0x080009F4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x080009F8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x080009FC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000A00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000A04: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08000A08: jalr        $v0
    // 0x08000A0C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x08000A0C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x08000A10: lbu         $t3, 0x9A($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X9A);
    // 0x08000A14: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000A18: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    // 0x08000A1C: addu        $t4, $t3, $s2
    ctx->r12 = ADD32(ctx->r11, ctx->r18);
    // 0x08000A20: addiu       $t5, $t4, 0xA
    ctx->r13 = ADD32(ctx->r12, 0XA);
    // 0x08000A24: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x08000A28: nop

    // 0x08000A2C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000A30: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08000A34: jalr        $t9
    // 0x08000A38: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A38: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x08000A3C: lbu         $t6, 0x9A($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X9A);
    // 0x08000A40: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A44: lhu         $a0, 0x38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X38);
    // 0x08000A48: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x08000A4C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x08000A50: nop

    // 0x08000A54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000A58: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08000A5C: jalr        $t9
    // 0x08000A60: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A60: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x08000A64: lbu         $t8, 0x9A($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X9A);
    // 0x08000A68: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x08000A6C: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    // 0x08000A70: addu        $t0, $t8, $s2
    ctx->r8 = ADD32(ctx->r24, ctx->r18);
    // 0x08000A74: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x08000A78: nop

    // 0x08000A7C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000A80: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08000A84: jalr        $t9
    // 0x08000A88: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000A88: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x08000A8C: lbu         $t1, 0x9A($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X9A);
    // 0x08000A90: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A94: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    // 0x08000A98: addu        $t2, $t1, $s2
    ctx->r10 = ADD32(ctx->r9, ctx->r18);
    // 0x08000A9C: addiu       $t3, $t2, -0xA
    ctx->r11 = ADD32(ctx->r10, -0XA);
    // 0x08000AA0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x08000AA4: nop

    // 0x08000AA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000AAC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x08000AB0: jalr        $t9
    // 0x08000AB4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000AB4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x08000AB8: lbu         $t4, 0x9A($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X9A);
    // 0x08000ABC: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x08000AC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000AC4: addu        $t5, $t4, $s2
    ctx->r13 = ADD32(ctx->r12, ctx->r18);
    // 0x08000AC8: addiu       $t6, $t5, -0xA
    ctx->r14 = ADD32(ctx->r13, -0XA);
    // 0x08000ACC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x08000AD0: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x08000AD4: addiu       $v0, $v0, -0x61F8
    ctx->r2 = ADD32(ctx->r2, -0X61F8);
    // 0x08000AD8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x08000ADC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000AE0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08000AE4: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x08000AE8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000AEC: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000AF0: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x08000AF4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000AF8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000AFC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x08000B00: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08000B04: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08000B08: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x08000B0C: jalr        $v0
    // 0x08000B10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x08000B10: nop

    after_6:
    // 0x08000B14: bne         $v0, $zero, L_08000B88
    if (ctx->r2 != 0) {
        // 0x08000B18: lw          $s1, 0x30($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X30);
            goto L_08000B88;
    }
    // 0x08000B18: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x08000B1C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000B20: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x08000B24: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000B28: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x08000B2C: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x08000B30: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000B34: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000B38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000B3C: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x08000B40: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08000B44: jalr        $s1
    // 0x08000B48: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_7;
    // 0x08000B48: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    after_7:
    // 0x08000B4C: bne         $v0, $zero, L_08000B88
    if (ctx->r2 != 0) {
        // 0x08000B50: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_08000B88;
    }
    // 0x08000B50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x08000B54: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x08000B58: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x08000B5C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08000B60: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x08000B64: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x08000B68: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08000B6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000B70: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x08000B74: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x08000B78: jalr        $s1
    // 0x08000B7C: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    LOOKUP_FUNC(ctx->r17)(rdram, ctx);
        goto after_8;
    // 0x08000B7C: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    after_8:
    // 0x08000B80: beql        $v0, $zero, L_08000B94
    if (ctx->r2 == 0) {
        // 0x08000B84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_08000B94;
    }
    goto skip_0;
    // 0x08000B84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_08000B88:
    // 0x08000B88: b           L_08000B94
    // 0x08000B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_08000B94;
    // 0x08000B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x08000B90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_08000B94:
    // 0x08000B94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000B98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000B9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x08000BA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x08000BA4: jr          $ra
    // 0x08000BA8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x08000BA8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_08000928_72B358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800092C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000930: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000934: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x08000938: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800093C: addiu       $t9, $t9, -0xE28
    ctx->r25 = ADD32(ctx->r25, -0XE28);
    // 0x08000940: jalr        $t9
    // 0x08000944: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000944: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x08000948: bne         $v0, $zero, L_08000980
    if (ctx->r2 != 0) {
        // 0x0800094C: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_08000980;
    }
    // 0x0800094C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x08000950: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000954: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000958: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800095C: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x08000960: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000964: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x08000968: jalr        $t9
    // 0x0800096C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800096C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x08000970: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000974: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000978: jalr        $t9
    // 0x0800097C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800097C: nop

    after_2:
L_08000980:
    // 0x08000980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000984: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000988: jr          $ra
    // 0x0800098C: nop

    TRACE_RETURN()
    return;
    // 0x0800098C: nop

;}
RECOMP_FUNC void func_08000668_72B098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000668: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800066C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000670: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000674: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000678: lw          $v0, 0xD8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD8);
    // 0x0800067C: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000680: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000684: beq         $v0, $zero, L_080006AC
    if (ctx->r2 == 0) {
        // 0x08000688: addiu       $a0, $zero, 0x2A
        ctx->r4 = ADD32(0, 0X2A);
            goto L_080006AC;
    }
    // 0x08000688: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x0800068C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000690: beq         $v0, $at, L_0800075C
    if (ctx->r2 == ctx->r1) {
        // 0x08000694: addiu       $a0, $zero, 0x2A
        ctx->r4 = ADD32(0, 0X2A);
            goto L_0800075C;
    }
    // 0x08000694: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x08000698: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800069C: beq         $v0, $at, L_08000814
    if (ctx->r2 == ctx->r1) {
        // 0x080006A0: addiu       $a0, $zero, 0x2A
        ctx->r4 = ADD32(0, 0X2A);
            goto L_08000814;
    }
    // 0x080006A0: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x080006A4: b           L_080008CC
    // 0x080006A8: nop

        goto L_080008CC;
    // 0x080006A8: nop

L_080006AC:
    // 0x080006AC: jalr        $v1
    // 0x080006B0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x080006B0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x080006B4: beq         $v0, $zero, L_0800070C
    if (ctx->r2 == 0) {
        // 0x080006B8: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_0800070C;
    }
    // 0x080006B8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080006BC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080006C0: lw          $t7, -0x38E8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X38E8);
    // 0x080006C4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x080006C8: bne         $t7, $at, L_080006F4
    if (ctx->r15 != ctx->r1) {
        // 0x080006CC: nop
    
            goto L_080006F4;
    }
    // 0x080006CC: nop

    // 0x080006D0: jalr        $v1
    // 0x080006D4: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x080006D4: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    after_1:
    // 0x080006D8: bne         $v0, $zero, L_080006F4
    if (ctx->r2 != 0) {
        // 0x080006DC: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080006F4;
    }
    // 0x080006DC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006E0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080006E4: jalr        $t9
    // 0x080006E8: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080006E8: addiu       $a0, $zero, 0x7D
    ctx->r4 = ADD32(0, 0X7D);
    after_2:
    // 0x080006EC: b           L_080008CC
    // 0x080006F0: nop

        goto L_080008CC;
    // 0x080006F0: nop

L_080006F4:
    // 0x080006F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080006F8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080006FC: jalr        $t9
    // 0x08000700: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000700: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    after_3:
    // 0x08000704: b           L_080008CC
    // 0x08000708: nop

        goto L_080008CC;
    // 0x08000708: nop

L_0800070C:
    // 0x0800070C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x08000710: jalr        $v1
    // 0x08000714: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_4;
    // 0x08000714: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_4:
    // 0x08000718: beq         $v0, $zero, L_08000738
    if (ctx->r2 == 0) {
        // 0x0800071C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08000738;
    }
    // 0x0800071C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000720: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000724: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000728: jalr        $t9
    // 0x0800072C: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x0800072C: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    after_5:
    // 0x08000730: b           L_080008CC
    // 0x08000734: nop

        goto L_080008CC;
    // 0x08000734: nop

L_08000738:
    // 0x08000738: jalr        $v1
    // 0x0800073C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_6;
    // 0x0800073C: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_6:
    // 0x08000740: beq         $v0, $zero, L_080008CC
    if (ctx->r2 == 0) {
        // 0x08000744: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080008CC;
    }
    // 0x08000744: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000748: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800074C: jalr        $t9
    // 0x08000750: addiu       $a0, $zero, 0x77
    ctx->r4 = ADD32(0, 0X77);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000750: addiu       $a0, $zero, 0x77
    ctx->r4 = ADD32(0, 0X77);
    after_7:
    // 0x08000754: b           L_080008CC
    // 0x08000758: nop

        goto L_080008CC;
    // 0x08000758: nop

L_0800075C:
    // 0x0800075C: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000760: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x08000764: jalr        $v1
    // 0x08000768: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_8;
    // 0x08000768: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_8:
    // 0x0800076C: beq         $v0, $zero, L_0800078C
    if (ctx->r2 == 0) {
        // 0x08000770: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_0800078C;
    }
    // 0x08000770: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000774: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000778: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x0800077C: jalr        $t9
    // 0x08000780: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000780: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    after_9:
    // 0x08000784: b           L_080008CC
    // 0x08000788: nop

        goto L_080008CC;
    // 0x08000788: nop

L_0800078C:
    // 0x0800078C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x08000790: jalr        $v1
    // 0x08000794: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_10;
    // 0x08000794: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_10:
    // 0x08000798: beq         $v0, $zero, L_080007F0
    if (ctx->r2 == 0) {
        // 0x0800079C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080007F0;
    }
    // 0x0800079C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x080007A0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x080007A4: lw          $t8, -0x38E4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X38E4);
    // 0x080007A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x080007AC: bne         $t8, $at, L_080007D8
    if (ctx->r24 != ctx->r1) {
        // 0x080007B0: nop
    
            goto L_080007D8;
    }
    // 0x080007B0: nop

    // 0x080007B4: jalr        $v1
    // 0x080007B8: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_11;
    // 0x080007B8: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_11:
    // 0x080007BC: bne         $v0, $zero, L_080007D8
    if (ctx->r2 != 0) {
        // 0x080007C0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080007D8;
    }
    // 0x080007C0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007C4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080007C8: jalr        $t9
    // 0x080007CC: addiu       $a0, $zero, 0x79
    ctx->r4 = ADD32(0, 0X79);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080007CC: addiu       $a0, $zero, 0x79
    ctx->r4 = ADD32(0, 0X79);
    after_12:
    // 0x080007D0: b           L_080008CC
    // 0x080007D4: nop

        goto L_080008CC;
    // 0x080007D4: nop

L_080007D8:
    // 0x080007D8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080007DC: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080007E0: jalr        $t9
    // 0x080007E4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080007E4: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_13:
    // 0x080007E8: b           L_080008CC
    // 0x080007EC: nop

        goto L_080008CC;
    // 0x080007EC: nop

L_080007F0:
    // 0x080007F0: jalr        $v1
    // 0x080007F4: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_14;
    // 0x080007F4: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_14:
    // 0x080007F8: beq         $v0, $zero, L_080008CC
    if (ctx->r2 == 0) {
        // 0x080007FC: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080008CC;
    }
    // 0x080007FC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000800: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000804: jalr        $t9
    // 0x08000808: addiu       $a0, $zero, 0x77
    ctx->r4 = ADD32(0, 0X77);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000808: addiu       $a0, $zero, 0x77
    ctx->r4 = ADD32(0, 0X77);
    after_15:
    // 0x0800080C: b           L_080008CC
    // 0x08000810: nop

        goto L_080008CC;
    // 0x08000810: nop

L_08000814:
    // 0x08000814: lui         $v1, 0x8002
    ctx->r3 = S32(0X8002 << 16);
    // 0x08000818: addiu       $v1, $v1, 0x40DC
    ctx->r3 = ADD32(ctx->r3, 0X40DC);
    // 0x0800081C: jalr        $v1
    // 0x08000820: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_16;
    // 0x08000820: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
    // 0x08000824: beq         $v0, $zero, L_08000844
    if (ctx->r2 == 0) {
        // 0x08000828: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08000844;
    }
    // 0x08000828: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x0800082C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08000830: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000834: jalr        $t9
    // 0x08000838: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x08000838: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    after_17:
    // 0x0800083C: b           L_080008CC
    // 0x08000840: nop

        goto L_080008CC;
    // 0x08000840: nop

L_08000844:
    // 0x08000844: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x08000848: jalr        $v1
    // 0x0800084C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_18;
    // 0x0800084C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_18:
    // 0x08000850: beq         $v0, $zero, L_08000870
    if (ctx->r2 == 0) {
        // 0x08000854: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_08000870;
    }
    // 0x08000854: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000858: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x0800085C: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x08000860: jalr        $t9
    // 0x08000864: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000864: addiu       $a0, $zero, 0x7B
    ctx->r4 = ADD32(0, 0X7B);
    after_19:
    // 0x08000868: b           L_080008CC
    // 0x0800086C: nop

        goto L_080008CC;
    // 0x0800086C: nop

L_08000870:
    // 0x08000870: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x08000874: jalr        $v1
    // 0x08000878: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_20;
    // 0x08000878: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_20:
    // 0x0800087C: beq         $v0, $zero, L_080008CC
    if (ctx->r2 == 0) {
        // 0x08000880: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_080008CC;
    }
    // 0x08000880: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x08000884: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x08000888: lw          $t0, -0x38E0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X38E0);
    // 0x0800088C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x08000890: bne         $t0, $at, L_080008BC
    if (ctx->r8 != ctx->r1) {
        // 0x08000894: nop
    
            goto L_080008BC;
    }
    // 0x08000894: nop

    // 0x08000898: jalr        $v1
    // 0x0800089C: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_21;
    // 0x0800089C: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    after_21:
    // 0x080008A0: bne         $v0, $zero, L_080008BC
    if (ctx->r2 != 0) {
        // 0x080008A4: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_080008BC;
    }
    // 0x080008A4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080008A8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080008AC: jalr        $t9
    // 0x080008B0: addiu       $a0, $zero, 0x75
    ctx->r4 = ADD32(0, 0X75);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x080008B0: addiu       $a0, $zero, 0x75
    ctx->r4 = ADD32(0, 0X75);
    after_22:
    // 0x080008B4: b           L_080008CC
    // 0x080008B8: nop

        goto L_080008CC;
    // 0x080008B8: nop

L_080008BC:
    // 0x080008BC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x080008C0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x080008C4: jalr        $t9
    // 0x080008C8: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x080008C8: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    after_23:
L_080008CC:
    // 0x080008CC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008D0: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x080008D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x080008D8: jalr        $t9
    // 0x080008DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x080008DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x080008E0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x080008E4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x080008E8: addiu       $t9, $t9, 0x4038
    ctx->r25 = ADD32(ctx->r25, 0X4038);
    // 0x080008EC: jalr        $t9
    // 0x080008F0: lw          $a0, 0xD4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XD4);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x080008F0: lw          $a0, 0xD4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XD4);
    after_25:
    // 0x080008F4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080008F8: addiu       $t9, $t9, 0x62DC
    ctx->r25 = ADD32(ctx->r25, 0X62DC);
    // 0x080008FC: jalr        $t9
    // 0x08000900: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x08000900: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_26:
    // 0x08000904: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000908: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800090C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(59, 0X928) << 16);
    // 0x08000910: jalr        $t9
    // 0x08000914: addiu       $a0, $a0, 0x928
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(59, 0X928));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x08000914: addiu       $a0, $a0, 0x928
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(59, 0X928));
    after_27:
    // 0x08000918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800091C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000920: jr          $ra
    // 0x08000924: nop

    TRACE_RETURN()
    return;
    // 0x08000924: nop

;}
RECOMP_FUNC void func_080002C0_72ACF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080002C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080002C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080002CC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080002D0: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x080002D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080002D8: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x080002DC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x080002E0: lw          $a0, 0xD4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD4);
    // 0x080002E4: addiu       $v0, $v0, 0x40DC
    ctx->r2 = ADD32(ctx->r2, 0X40DC);
    // 0x080002E8: jalr        $v0
    // 0x080002EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x080002EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x080002F0: beq         $v0, $zero, L_08000334
    if (ctx->r2 == 0) {
        // 0x080002F4: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_08000334;
    }
    // 0x080002F4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x080002F8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x080002FC: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x08000300: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x08000304: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000308: addiu       $t9, $t9, 0x4B74
    ctx->r25 = ADD32(ctx->r25, 0X4B74);
    // 0x0800030C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x08000310: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x08000314: jalr        $t9
    // 0x08000318: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000318: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x0800031C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000320: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000324: jalr        $t9
    // 0x08000328: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000328: nop

    after_2:
    // 0x0800032C: b           L_08000658
    // 0x08000330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000658;
    // 0x08000330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000334:
    // 0x08000334: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x08000338: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800033C: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08000340: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x08000344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000348: beq         $v0, $zero, L_08000378
    if (ctx->r2 == 0) {
        // 0x0800034C: nop
    
            goto L_08000378;
    }
    // 0x0800034C: nop

    // 0x08000350: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000354: beq         $v0, $a0, L_08000470
    if (ctx->r2 == ctx->r4) {
        // 0x08000358: addiu       $a1, $zero, 0xC8
        ctx->r5 = ADD32(0, 0XC8);
            goto L_08000470;
    }
    // 0x08000358: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x0800035C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08000360: beq         $v0, $at, L_08000404
    if (ctx->r2 == ctx->r1) {
        // 0x08000364: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_08000404;
    }
    // 0x08000364: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x08000368: beql        $v0, $at, L_0800052C
    if (ctx->r2 == ctx->r1) {
        // 0x0800036C: lhu         $t7, 0x18($v1)
        ctx->r15 = MEM_HU(ctx->r3, 0X18);
            goto L_0800052C;
    }
    goto skip_0;
    // 0x0800036C: lhu         $t7, 0x18($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X18);
    skip_0:
    // 0x08000370: b           L_08000550
    // 0x08000374: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
        goto L_08000550;
    // 0x08000374: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
L_08000378:
    // 0x08000378: jalr        $t9
    // 0x0800037C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800037C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_3:
    // 0x08000380: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x08000384: bne         $v0, $a0, L_0800054C
    if (ctx->r2 != ctx->r4) {
        // 0x08000388: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_0800054C;
    }
    // 0x08000388: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800038C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000390: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000398: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x0800039C: jalr        $t9
    // 0x080003A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080003A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x080003A4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x080003A8: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x080003AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003B0: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080003B4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x080003B8: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x080003BC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x080003C0: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x080003C4: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x080003C8: jalr        $t9
    // 0x080003CC: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080003CC: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_5:
    // 0x080003D0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x080003D4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003D8: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x080003DC: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x080003E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x080003E4: jalr        $t9
    // 0x080003E8: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080003E8: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    after_6:
    // 0x080003EC: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x080003F0: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x080003F4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x080003F8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x080003FC: b           L_0800054C
    // 0x08000400: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
        goto L_0800054C;
    // 0x08000400: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
L_08000404:
    // 0x08000404: lhu         $t2, 0xE4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE4);
    // 0x08000408: bnel        $a0, $t2, L_08000428
    if (ctx->r4 != ctx->r10) {
        // 0x0800040C: lhu         $t6, 0x16($v1)
        ctx->r14 = MEM_HU(ctx->r3, 0X16);
            goto L_08000428;
    }
    goto skip_1;
    // 0x0800040C: lhu         $t6, 0x16($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X16);
    skip_1:
    // 0x08000410: lhu         $t3, 0x16($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X16);
    // 0x08000414: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x08000418: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x0800041C: b           L_08000434
    // 0x08000420: sh          $t5, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r13;
        goto L_08000434;
    // 0x08000420: sh          $t5, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r13;
    // 0x08000424: lhu         $t6, 0x16($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X16);
L_08000428:
    // 0x08000428: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x0800042C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x08000430: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
L_08000434:
    // 0x08000434: jal         0x08000BAC
    // 0x08000438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_08000BAC_72B5DC(rdram, ctx);
        goto after_7;
    // 0x08000438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x0800043C: beq         $v0, $zero, L_0800054C
    if (ctx->r2 == 0) {
        // 0x08000440: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_0800054C;
    }
    // 0x08000440: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x08000444: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000448: addiu       $t9, $t9, -0xEAC
    ctx->r25 = ADD32(ctx->r25, -0XEAC);
    // 0x0800044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000450: lw          $a1, 0xE8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE8);
    // 0x08000454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000458: jalr        $t9
    // 0x0800045C: lhu         $a3, 0x16($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x0800045C: lhu         $a3, 0x16($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X16);
    after_8:
    // 0x08000460: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x08000464: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x08000468: b           L_0800054C
    // 0x0800046C: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
        goto L_0800054C;
    // 0x0800046C: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
L_08000470:
    // 0x08000470: lui         $t9, 0x800
    ctx->r25 = S32(RELOC_HI16(59, 0X990) << 16);
    // 0x08000474: addiu       $t9, $t9, 0x990
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(59, 0X990));
    // 0x08000478: jalr        $t9
    // 0x0800047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x0800047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x08000480: bne         $v0, $zero, L_0800049C
    if (ctx->r2 != 0) {
        // 0x08000484: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_0800049C;
    }
    // 0x08000484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000488: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800048C: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08000490: jalr        $t9
    // 0x08000494: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08000494: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_10:
    // 0x08000498: beq         $v0, $zero, L_080004D4
    if (ctx->r2 == 0) {
        // 0x0800049C: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080004D4;
    }
L_0800049C:
    // 0x0800049C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004A0: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004A8: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x080004AC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080004B0: jalr        $t9
    // 0x080004B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x080004B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x080004B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080004BC: addiu       $t9, $t9, -0x4FB4
    ctx->r25 = ADD32(ctx->r25, -0X4FB4);
    // 0x080004C0: jalr        $t9
    // 0x080004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x080004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x080004C8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x080004CC: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x080004D0: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_080004D4:
    // 0x080004D4: lhu         $t4, 0x8A($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X8A);
    // 0x080004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080004DC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x080004E0: slti        $at, $t4, 0x32
    ctx->r1 = SIGNED(ctx->r12) < 0X32 ? 1 : 0;
    // 0x080004E4: bne         $at, $zero, L_0800054C
    if (ctx->r1 != 0) {
        // 0x080004E8: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_0800054C;
    }
    // 0x080004E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x080004EC: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x080004F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080004F4: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x080004F8: addiu       $t5, $t5, -0x4FB4
    ctx->r13 = ADD32(ctx->r13, -0X4FB4);
    // 0x080004FC: lw          $a1, 0xD8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD8);
    // 0x08000500: jalr        $t9
    // 0x08000504: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x08000504: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_13:
    // 0x08000508: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x0800050C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000510: jalr        $t9
    // 0x08000514: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08000514: nop

    after_14:
    // 0x08000518: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x0800051C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x08000520: b           L_0800054C
    // 0x08000524: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
        goto L_0800054C;
    // 0x08000524: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x08000528: lhu         $t7, 0x18($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X18);
L_0800052C:
    // 0x0800052C: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x08000530: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x08000534: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x08000538: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x0800053C: slti        $at, $t1, 0x101
    ctx->r1 = SIGNED(ctx->r9) < 0X101 ? 1 : 0;
    // 0x08000540: bne         $at, $zero, L_0800054C
    if (ctx->r1 != 0) {
        // 0x08000544: sh          $t0, 0x18($v1)
        MEM_H(0X18, ctx->r3) = ctx->r8;
            goto L_0800054C;
    }
    // 0x08000544: sh          $t0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r8;
    // 0x08000548: sh          $t2, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r10;
L_0800054C:
    // 0x0800054C: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
L_08000550:
    // 0x08000550: andi        $t4, $t3, 0x200
    ctx->r12 = ctx->r11 & 0X200;
    // 0x08000554: beql        $t4, $zero, L_0800064C
    if (ctx->r12 == 0) {
        // 0x08000558: lhu         $t8, 0x8A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X8A);
            goto L_0800064C;
    }
    goto skip_2;
    // 0x08000558: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
    skip_2:
    // 0x0800055C: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x08000560: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08000564: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000568: beq         $v0, $zero, L_0800058C
    if (ctx->r2 == 0) {
        // 0x0800056C: nop
    
            goto L_0800058C;
    }
    // 0x0800056C: nop

    // 0x08000570: beq         $v0, $at, L_080005B8
    if (ctx->r2 == ctx->r1) {
        // 0x08000574: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_080005B8;
    }
    // 0x08000574: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000578: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x0800057C: beq         $v0, $at, L_080005F4
    if (ctx->r2 == ctx->r1) {
        // 0x08000580: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_080005F4;
    }
    // 0x08000580: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000584: b           L_0800062C
    // 0x08000588: nop

        goto L_0800062C;
    // 0x08000588: nop

L_0800058C:
    // 0x0800058C: jalr        $t9
    // 0x08000590: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08000590: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_15:
    // 0x08000594: beq         $v0, $zero, L_0800062C
    if (ctx->r2 == 0) {
        // 0x08000598: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_0800062C;
    }
    // 0x08000598: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x0800059C: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x080005A0: lw          $v0, 0x110($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X110);
    // 0x080005A4: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x080005A8: beq         $at, $zero, L_0800062C
    if (ctx->r1 == 0) {
        // 0x080005AC: addiu       $t5, $v0, 0x1
        ctx->r13 = ADD32(ctx->r2, 0X1);
            goto L_0800062C;
    }
    // 0x080005AC: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x080005B0: b           L_0800062C
    // 0x080005B4: sw          $t5, 0x110($v1)
    MEM_W(0X110, ctx->r3) = ctx->r13;
        goto L_0800062C;
    // 0x080005B4: sw          $t5, 0x110($v1)
    MEM_W(0X110, ctx->r3) = ctx->r13;
L_080005B8:
    // 0x080005B8: jalr        $t9
    // 0x080005BC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080005BC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_16:
    // 0x080005C0: bne         $v0, $zero, L_0800062C
    if (ctx->r2 != 0) {
        // 0x080005C4: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_0800062C;
    }
    // 0x080005C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x080005C8: jalr        $t9
    // 0x080005CC: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080005CC: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_17:
    // 0x080005D0: beq         $v0, $zero, L_0800062C
    if (ctx->r2 == 0) {
        // 0x080005D4: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_0800062C;
    }
    // 0x080005D4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x080005D8: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x080005DC: lw          $v0, 0x114($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X114);
    // 0x080005E0: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x080005E4: beq         $at, $zero, L_0800062C
    if (ctx->r1 == 0) {
        // 0x080005E8: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_0800062C;
    }
    // 0x080005E8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x080005EC: b           L_0800062C
    // 0x080005F0: sw          $t6, 0x114($v1)
    MEM_W(0X114, ctx->r3) = ctx->r14;
        goto L_0800062C;
    // 0x080005F0: sw          $t6, 0x114($v1)
    MEM_W(0X114, ctx->r3) = ctx->r14;
L_080005F4:
    // 0x080005F4: jalr        $t9
    // 0x080005F8: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x080005F8: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_18:
    // 0x080005FC: bne         $v0, $zero, L_0800062C
    if (ctx->r2 != 0) {
        // 0x08000600: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_0800062C;
    }
    // 0x08000600: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x08000604: jalr        $t9
    // 0x08000608: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x08000608: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_19:
    // 0x0800060C: bne         $v0, $zero, L_0800062C
    if (ctx->r2 != 0) {
        // 0x08000610: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_0800062C;
    }
    // 0x08000610: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x08000614: addiu       $v1, $v1, -0x39F8
    ctx->r3 = ADD32(ctx->r3, -0X39F8);
    // 0x08000618: lw          $v0, 0x118($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X118);
    // 0x0800061C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x08000620: beq         $at, $zero, L_0800062C
    if (ctx->r1 == 0) {
        // 0x08000624: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_0800062C;
    }
    // 0x08000624: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x08000628: sw          $t7, 0x118($v1)
    MEM_W(0X118, ctx->r3) = ctx->r15;
L_0800062C:
    // 0x0800062C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000630: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000634: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(59, 0X668) << 16);
    // 0x08000638: jalr        $t9
    // 0x0800063C: addiu       $a0, $a0, 0x668
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(59, 0X668));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x0800063C: addiu       $a0, $a0, 0x668
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(59, 0X668));
    after_20:
    // 0x08000640: b           L_08000658
    // 0x08000644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08000658;
    // 0x08000644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000648: lhu         $t8, 0x8A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X8A);
L_0800064C:
    // 0x0800064C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x08000650: sh          $t0, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r8;
    // 0x08000654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08000658:
    // 0x08000658: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800065C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08000660: jr          $ra
    // 0x08000664: nop

    TRACE_RETURN()
    return;
    // 0x08000664: nop

;}
RECOMP_FUNC void func_080014D0_72CD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014D0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x080014D4: jr          $ra
    // 0x080014D8: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x080014D8: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_080005A8_72BDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005A8: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x080005AC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x080005B0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x080005B4: mflo        $v0
    ctx->r2 = lo;
    // 0x080005B8: jr          $ra
    // 0x080005BC: nop

    TRACE_RETURN()
    return;
    // 0x080005BC: nop

;}
RECOMP_FUNC void func_08002590_72DDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08002594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08002598: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x0800259C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x080025A0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x080025A4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080025A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080025AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080025B0: addiu       $t9, $t9, 0x48F0
    ctx->r25 = ADD32(ctx->r25, 0X48F0);
    // 0x080025B4: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x080025B8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x080025BC: jalr        $t9
    // 0x080025C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080025C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x080025C4: beq         $v0, $zero, L_080025F8
    if (ctx->r2 == 0) {
        // 0x080025C8: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_080025F8;
    }
    // 0x080025C8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x080025CC: sw          $v0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r2;
    // 0x080025D0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x080025D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x080025D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_080025DC:
    // 0x080025DC: bnel        $v1, $v0, L_080025DC
    if (ctx->r3 != ctx->r2) {
        // 0x080025E0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_080025DC;
    }
    goto skip_0;
    // 0x080025E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x080025E4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080025E8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080025EC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(60, 0X14E8) << 16);
    // 0x080025F0: jalr        $t9
    // 0x080025F4: addiu       $a0, $a0, 0x14E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(60, 0X14E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080025F4: addiu       $a0, $a0, 0x14E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(60, 0X14E8));
    after_1:
L_080025F8:
    // 0x080025F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080025FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08002600: jr          $ra
    // 0x08002604: nop

    TRACE_RETURN()
    return;
    // 0x08002604: nop

;}
RECOMP_FUNC void func_080014DC_72CD2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014DC: addiu       $t6, $zero, 0xFE
    ctx->r14 = ADD32(0, 0XFE);
    // 0x080014E0: jr          $ra
    // 0x080014E4: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x080014E4: sb          $t6, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r14;
;}
